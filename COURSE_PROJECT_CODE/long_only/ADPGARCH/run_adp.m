% Apply Policy ADPGARCH over 3 time interval

% requires cvxgen: if solver not installed run 'make_solver'
% in MATLAB before running this script

% saves results to 'MC_data.mat'

fprintf('*** Starting ADPGARCH optimization. ***\n')
fprintf('This can take up to an hour or more, depending on your machine.\n')
fprintf('The results are saved to MC_data.mat.\n')

clearvars

cd ../../
data_gen % call data generation file
cd long_only/ADPGARCH/

make_solver;
NUM_SIMULATIONS = 3; % change this to run different num of simuations
N1=NUM_SIMULATIONS;
Data1 = readmatrix('log_returns_100_1.csv');
Data2 = readmatrix('log_returns_100_2.csv');
Data3 = readmatrix('log_returns_100_3.csv');
Full_Data = readmatrix('log_returns_full.csv');
K = length(Full_Data(:,1));
% size(Full_Data)
fprintf('\nStarting %i runs\n',N1);

save_on=1; % set to 1 to save to MC_data.mat

randn('seed',1);rand('seed',1);

costs=zeros(T,N1);ts=0;
penalty=zeros(T,N1);
U = zeros(n,T+1);
iter_time = zeros(N1);
SDP_time = zeros(N1);
SDP_lb = zeros(N1);
%%%%%%%%
su=costs;cash=costs;risk=costs;tot=costs;
short=costs;quad=costs;abs_c=costs;short_pos=costs;
long_pos=costs;tot_pos=costs;pos_val=costs;
nonzero_u=costs;
iter = 1;
%%%%%%%%
for i=1:N1
    fprintf('Start optimizing for %i period\n',i);
    iter = i;
    save iter
    solve_sdp;% solving SDP
    load data% loading SDP results
    Corr_Mat = corrcoef(Full_Data(1:K-(N1-i+1)*T,2:31));
    if mod(i,1000)==0
		fprintf('finished %i runs\n',i);
        if save_on
            save MC_data.mat;
        end
    end
    cs=zeros(T,1);
    risk_penalty = zeros(T,1);
    %%%%%%%%
    su_t=cs;cash_t=cs;risk_t=cs;tot_t=cs;
    short_t=cs;quad_t=cs;abs_c_t=cs;short_pos_t=cs;
    long_pos_t=cs;tot_pos_t=cs;pos_val_t=cs;
	nonzero_u_t=cs;
    %%%%%%%%
    
    x=x_init;
    U(:,1) = x;
    for t=1:T
        Var_Mat = zeros(1,30);
        for j=1:30
            mdl = gjr(3,3);
            EstMdl = estimate(mdl,Full_Data(1:K-3*T-1+t+(i-1)*T,j+1),'Display','off');
            Var_Mat(:,j) = forecast(EstMdl,1,Full_Data(1:K-3*T-1+t+(i-1)*T,j+1));
        end
        Curr_Sigma = diag(sqrt(Var_Mat(1,:)))*Corr_Mat*diag(sqrt(Var_Mat(1,:)));
        r_bar1 = exp(mu+0.5*diag(Curr_Sigma)); % asset mean returns
        small_sigma = (r_bar1*r_bar1').*(exp(Curr_Sigma)-1); % asset covariance matrix
        Curr_Sigma=(small_sigma+small_sigma')/2;
        M1 = Curr_Sigma + r_bar1*r_bar1';
        params.Sigma = Curr_Sigma;
        params.x = x;
        if (t==T)
            u=x_term-x;
        else
            params.PM = P(:,:,t+1).*M1;
            params.pm = p(:,t+1).*r_bar1;
            % call cvxgen to solve QP:
            tic;
            [vars, status]=csolve(params,settings);
            ts=ts+toc;
            u=vars.u;
        end
        %%%%%%
        
       
        su_t(t)=sum(u); % gross difference between asset sales and purchases
        cash_t(t)=sum(u) + sh'*pos(-x-u)+ kappa'*abs(u) + s'*u.^2; % gross cash
        short_t(t)=sh'*pos(-x-u); % shorting cost
        quad_t(t)=s'*u.^2; % quadratic transaction cost
        abs_c_t(t)=kappa'*abs(u); % absolute value transaction cost
        risk_t(t)=lambda*(x+u)'*Curr_Sigma*(x+u); % risk penalty fee
        tot_t(t)=sum(u) + sh'*pos(-x-u)+ kappa'*abs(u) + s'*u.^2 + lambda*(x+u)'*Curr_Sigma*(x+u); % net cash
        short_pos_t(t)=sum(pos(-x-u)); % short position
        long_pos_t(t)=sum(pos(x+u)); % long position
        tot_pos_t(t)=norm(x+u,1); % total position
        pos_val_t(t)=sum(x+u); % net value of portfolio
		nonzero_u_t(t)=sum(abs(u)>1e-3);
        %%%%%%
        cs(t) = sum(u) + sh'*pos(-x-u) + kappa'*abs(u) + s'*u.^2 + lambda*(x+u)'*Curr_Sigma*(x+u);% total cost at time t
        %progpagate portfolio forward in time
%         x=diag(exp(rt_Sigma_t*randn(n,1)+mu))*(x+u);
        risk_penalty(t) = lambda*(x+u)'*Curr_Sigma*(x+u);
        if(i==1)
            x=diag(exp(Data1(t,2:31)))*(x+u);
        else
            if(i==2)
                x=diag(exp(Data2(t,2:31)))*(x+u);
            else 
                x=diag(exp(Data3(t,2:31)))*(x+u);
            end
        end
         U(:,t+1) = x;
    end
    costs(:,i) = cs;
    penalty(:,i) = risk_penalty;
    SDP_time(i) = cvx_solve_time;
    iter_time(i) = toc;
    SDP_lb(i) = lb;
    %%%%%%%
    su(:,i)=su_t;cash(:,i)=cash_t;risk(:,i)=risk_t;tot(:,i)=tot_t;
    short(:,i)=short_t;quad(:,i)=quad_t;abs_c(:,i)=abs_c_t;short_pos(:,i)=short_pos_t;
    long_pos(:,i)=long_pos_t;tot_pos(:,i)=tot_pos_t;pos_val(:,i)=pos_val_t;
	nonzero_u(:,i)=nonzero_u_t;
    %%%%%%%
end
if save_on
    save_on=0;
    save MC_data.mat;
end

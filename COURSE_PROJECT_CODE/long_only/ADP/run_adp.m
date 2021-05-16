% requires cvxgen: if solver not installed run 'make_solver'
% in MATLAB before running this script

% saves results to 'MC_data.mat'

fprintf('*** Starting ADP optimization. ***\n')
fprintf('This takes around 15-30 minutes to run\n')
fprintf('The results are saved to MC_data.mat.\n')

clearvars


solve_sdp;
load data% loading sdp results
make_solver;
NUM_SIMULATIONS = 3; 
N1=NUM_SIMULATIONS;
Data1 = readmatrix('log_returns_100_1.csv');
Data2 = readmatrix('log_returns_100_2.csv');
Data3 = readmatrix('log_returns_100_3.csv');
Full_Data = readmatrix('log_returns_full.csv');
K = length(Full_Data(:,1));


save_on=1; % set to 1 to save to MC_data.mat

randn('seed',1);rand('seed',1);

costs=zeros(T,N1);ts=0;
penalty=zeros(T,N1);
U = zeros(n,T+1);
%%%%%%%%
su=costs;cash=costs;risk=costs;tot=costs;
short=costs;quad=costs;abs_c=costs;short_pos=costs;
long_pos=costs;tot_pos=costs;pos_val=costs;
nonzero_u=costs;
iter = 1;
%%%%%%%%
for i=1:N1
    fprintf('optimizing for period %i\n',i);
    
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
        
        params.x = x;
        if (t==T)
            u=x_term-x;
        else
            params.PM = P(:,:,t+1).*M;
            params.pm = p(:,t+1).*r_bar;
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
        risk_t(t)=lambda*(x+u)'*sigma*(x+u); % risk penalty fee
        tot_t(t)=sum(u) + sh'*pos(-x-u)+ kappa'*abs(u) + s'*u.^2 + lambda*(x+u)'*sigma*(x+u); % net cash
        short_pos_t(t)=sum(pos(-x-u)); % short position
        long_pos_t(t)=sum(pos(x+u)); % long position
        tot_pos_t(t)=norm(x+u,1); % total position
        pos_val_t(t)=sum(x+u); % net value of portfolio
		nonzero_u_t(t)=sum(abs(u)>1e-3);
        %%%%%%
        cs(t) = sum(u) + sh'*pos(-x-u) + kappa'*abs(u) + s'*u.^2 + lambda*(x+u)'*sigma*(x+u);% total cost at time t
        %progpagate portfolio forward in time
%         x=diag(exp(rt_Sigma_t*randn(n,1)+mu))*(x+u);
        risk_penalty(t) = lambda*(x+u)'*sigma*(x+u);
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

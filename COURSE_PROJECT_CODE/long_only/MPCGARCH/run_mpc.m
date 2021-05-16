%%% Long only constarin for:

 
% this script performs optmization over 3 time interval
% for the Model Predictive Control GARCH (MPCGARCH) policy

% it saves down all the data to 'MPC_data.mat'

fprintf('*** Running MPCGARCH for the long only constrain. ***\n')
fprintf('This takes about 15 minutes to run.\n')
fprintf('The results are saved to MPC_data.mat.\n')

clearvars

make_solver % make the cvxgen solver 

cd ../../
data_gen % call data generation file
cd long_only/MPCGARCH/

NUM_SIMULATIONS = 3; % change this to run a different number of simulations
N1 = NUM_SIMULATIONS;
% Our Code
Data1 = readmatrix('log_returns_100_1.csv');
Data2 = readmatrix('log_returns_100_2.csv');
Data3 = readmatrix('log_returns_100_3.csv');

Full_Data = readmatrix('log_returns_full.csv');
K = length(Full_Data(:,1));

Corr_Mat = corrcoef(Full_Data(1:K-3*T,2:31));



% cvxgen settings:
settings.verbose=0;
params.Sigma = sigma;
params.S = diag(s);
params.kappa = kappa;
params.lambda = lambda;
params.sh = sh;
params.r_bar = r_bar;

randn('seed',1);rand('seed',1);
rho=0.1; % admm step size parameter

costs=zeros(T,N1);Zs_init=zeros(n,T);Vs_init=zeros(n,T);Ys_init=zeros(n,T-1);
risk_penalty = zeros(T,N1);
tic
for i=1:N1
    fprintf('starting optimization for period %i\n',i);
    x=x_init; % initial portfolio
    cs=zeros(T,1); % cost incurred per step stored here
    Zs=Zs_init;Vs=Vs_init;Ys=Ys_init; % warm-start each MPC step
    for t=1:T
        Var_Mat = zeros(T-t+1 ,30);
        for j=1:30
            mdl = gjr(3,3);
            EstMdl = estimate(mdl,Full_Data(1:K-3*T-1+t+(i-1)*T,j+1),'Display','off');
            Var_Mat(:,j) = forecast(EstMdl,T+1-t,Full_Data(1:K-3*T-1+t+(i-1)*T,j+1));
        end
        Curr_Sigma = diag(sqrt(Var_Mat(1,:)))*Corr_Mat*diag(sqrt(Var_Mat(1,:)));
        r_bar1 = exp(mu+0.5*diag(Curr_Sigma)); % asset mean returns
        small_sigma = (r_bar1*r_bar1').*(exp(Curr_Sigma)-1); % asset covariance matrix
        Curr_Sigma=(small_sigma+small_sigma')/2; % make sure symmetric, sometimes small error

        
        if t==T
            u=x_term-x;
        else
            while(1)
                Vsold=Vs;Zsold=Zs;Ysold=Ys;
                for tau=t:T % MPC decomposed over time-periods
                    
                    st = tau-t+1;
                    Curr_Cov = diag(sqrt(Var_Mat(st,:)))*Corr_Mat*diag(sqrt(Var_Mat(st,:)));
                    r_bar1 = exp(mu+0.5*diag(Curr_Cov)); % asset mean returns
                    small_sigma = (r_bar1*r_bar1').*(exp(Curr_Cov)-1); % asset covariance matrix
                    Curr_Cov=(small_sigma+small_sigma')/2; % make sure symmetric, sometimes small error

                    
                    params.Sigma = Curr_Cov;
                    params.r_bar = r_bar1;
                    
                    params.rtp1 = rho/2;
                    params.rtm1 = rho/2;
                    params.az = 0;params.av=0;
                    params.x_constraint = zeros(n,1);
                    
                    if tau==t
                        params.az=1;
                        params.av=0;
                        params.x_constraint=x;
                        params.rtm1=0;
                        params.ztm1 = zeros(n,1);
                        params.ztp1 = Zs(:,st+1);
                        params.vtm1 = zeros(n,1);
                        params.yt = Ys(:,st);
                        params.ytm1 = zeros(n,1);
                    elseif tau==T
                        params.az=1;
                        params.av=1;
                        params.x_constraint=x_term;
                        params.rtp1=0;
                        params.ztm1 = Zs(:,st-1);
                        params.ztp1 = zeros(n,1);
                        params.vtm1 = Vs(:,st-1);
                        params.yt = zeros(n,1);
                        params.ytm1 = Ys(:,st-1);
                    else
                        params.ztm1 = Zs(:,st-1);
                        params.ztp1 = Zs(:,st+1);
                        params.vtm1 = Vs(:,st-1);
                        params.yt = Ys(:,st);
                        params.ytm1 = Ys(:,st-1);
                    end
                    % call cvxgen:
                    [vars, status] = csolve(params, settings);
                    Zs(:,st) = vars.z;
                    Vs(:,st) = vars.v;
                    if tau~=t
                        Ys(:,st-1) = Ys(:,st-1)+Zs(:,st)-diag(r_bar1)*(Zs(:,st-1)+Vs(:,st-1));
                    end
                end
                enm=(norm(Vs-Vsold,'fro')^2+norm(Zs-Zsold,'fro')^2 + norm(Ys-Ysold,'fro')^2)/(3*(T-t+1)); % difference between one iterate to the next in admm
                if(enm <= 0.001)
                    break; % run admm until convergence
                end
            end
            u=Vs(:,1);
            if (i==1 && t==1)
                Zs_init=Zs;
                Vs_init=Vs;
                Ys_init=Ys;
            end
            Zs=Zs(:,2:end);
            Vs=Vs(:,2:end);
            Ys=Ys(:,2:end);
        end
       
        cs(t) = sum(u) + sh'*subplus(-x-u) + kappa'*abs(u) + s'*u.^2 + lambda*(x+u)'*Curr_Sigma*(x+u);% total cost at time t
%         x=diag(exp(rt_Sigma_t*randn(n,1)+mu))*(x+u); % update portfolio
        risk_penalty(t,i) = lambda*(x+u)'*Curr_Sigma*(x+u);
        if(i==1)
            x=diag(exp(Data1(t,2:31)))*(x+u);
        else
            if(i==2)
                x=diag(exp(Data2(t,2:31)))*(x+u);
            else 
                x=diag(exp(Data3(t,2:31)))*(x+u);
            end
        end
    end
    clear Zs Vs Ys Zsold Vsold Ysold
    costs(:,i) = cs;
    save MPC_data.mat;
end
tadmm = toc;
save MPC_data.mat;

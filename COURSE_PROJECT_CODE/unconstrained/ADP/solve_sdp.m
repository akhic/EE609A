%%% Unconstrained problem for:


% this script solves the SDP to obtain the lower bound
% on performance and the sequence
% of approximate value functions we shall use

% it saves down all the data to 'data.mat'
% which will be loaded when we doing online optimization

% it also calls cvxgen to download the fast QP solver
% necessary to solve online optimization problem


fprintf('*** Solving the SDP for the unconstrained problem. ***\n')
fprintf('The results are saved to data.mat.\n')

cd ../../
data_gen % call data generation file
cd unconstrained/ADP/


Full_Data = readmatrix('log_returns_full.csv');
K = length(Full_Data(:,1));

L=lambda*sigma;
Q=lambda*sigma;
S=diag(s)+lambda*sigma;

tic;
cvx_begin
% approximate value function variables :
variable P(n,n,T+1) symmetric
variables p(n,T+1) q(T+1) 
% S-procedure variables :
variables nu_1(n,T) nu_2(n,T) sh_1(n,T) sh_2(n,T) dd(n) z
maximize(x_init'*P(:,:,1)*x_init+2*p(:,1)'*x_init+q(1))
for k=1:T
    
    
    Mat_1 = [S+P(:,:,k+1).*M L+P(:,:,k+1).*M 0.5*ones(n,1)+p(:,k+1).*r_bar
        L'+P(:,:,k+1).*M Q+P(:,:,k+1).*M-P(:,:,k) p(:,k+1).*r_bar-p(:,k)
        (0.5*ones(n,1)+p(:,k+1).*r_bar)' (p(:,k+1).*r_bar-p(:,k))' q(k+1)-q(k)];


    vt_1=[nu_1(:,k)+nu_2(:,k);zeros(n,1);nu_1(:,k)-nu_2(:,k);zeros(n,1)];
    sh_c = [zeros(n,1);sh_1(:,k)+sh_2(:,k);sh_1(:,k);sh_1(:,k)];
    
    if k==T
        M_term=[[eye(n) eye(n);eye(n) eye(n)] [-x_term;-x_term]; [-x_term' -x_term'] norm(x_term)^2];
        M_term_2 = [zeros(2*n) [dd;dd]; [dd;dd]' 0];
        Mat_1 = Mat_1+M_term_2+z*M_term; 
    end

    [[zeros(2*n,4*n) [kappa/2; sh/2]];[[zeros(2*n,2*n);[kappa'/2 sh'/2]] Mat_1]]-...
        [zeros(4*n) vt_1+sh_c; vt_1'+sh_c' 0]==semidefinite(4*n+1);
    P(:,:,k) == semidefinite(n);
end
%P(:,:,T+1)==0;
%p(:,T+1)==0;
q(T+1)==0;
nu_1>=0;nu_2>=0;sh_1>=0;sh_2>=0;
cvx_end

% time required to solve SDP
cvx_solve_time=toc;

% lower bound on performance
lb=cvx_optval;

% cvxgen parameter setup
settings.verbose=0;
params.Sigma = sigma;
params.S = diag(s);
params.kappa = kappa;
params.lambda = lambda;
params.sh = sh;

clearvars -except P p q F N1 T eta kappa lambda lb mu n num_neutral params r_bar rt_Sigma_t sigma sigma_tilde s sh x_init x_term M settings cvx_solve_time
save data;

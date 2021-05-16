%%% Leverage limit constrain:

% this script solves the SDP to obtain the lower bound
% on performance and the sequence
% of approximate value functions we shall use

% it saves down all the data to 'data.mat'
% which will be loaded when we optimizing in online mode

% it also calls cvxgen to download the fast QP solver
% necessary to optimize in online mode

fprintf('*** Solving the SDP for the leverage limit constrain. ***\n')
fprintf('This can take 15- 30 minutes, depending on your machine.\n')
fprintf('The results are saved to data.mat.\n')


make_solver;
load iter
tic;
Full_Data = readmatrix('log_returns_full.csv');
K = length(Full_Data(:,1));
Corr_Mat = corrcoef(Full_Data(1:K-(3-iter+1)*T,2:31));
Var_Mat = zeros(T ,30);
for j=1:30
    mdl = gjr(3,3);
    EstMdl = estimate(mdl,Full_Data(1:K-(3-iter+1)*T,j+1),'Display','off');
    Var_Mat(:,j) = forecast(EstMdl,T,Full_Data(1:K-(3-iter+1)*T,j+1));
end

L=lambda*sigma;
Q=lambda*sigma;
S=diag(s)+lambda*sigma;



cvx_begin
% approximate value function variables :
variable P(n,n,T+1) symmetric
variables p(n,T+1) q(T+1) 
% S-procedure variables :
variables z_1(n,T) z_2(n,T) d(T) nu_1(n,T) nu_2(n,T) sh_1(n,T) sh_2(n,T) dd(n) z
maximize(x_init'*P(:,:,1)*x_init+2*p(:,1)'*x_init+q(1))
for k=1:T
    Curr_Cov = diag(sqrt(Var_Mat(k,:)))*Corr_Mat*diag(sqrt(Var_Mat(k,:)));
    r_bar1 = exp(mu+0.5*diag(Curr_Cov)); % asset mean returns
    small_sigma = (r_bar1*r_bar1').*(exp(Curr_Cov)-1); % asset covariance matrix
    Curr_Cov=(small_sigma+small_sigma')/2;
    L=lambda*Curr_Cov;
    Q=lambda*Curr_Cov;
    S=diag(s)+lambda*Curr_Cov;
    M1 = Curr_Cov + r_bar1*r_bar1';
    
   Mat_1 = [S+P(:,:,k+1).*M1 L+P(:,:,k+1).*M1 0.5*ones(n,1)+p(:,k+1).*r_bar1
        L'+P(:,:,k+1).*M1 Q+P(:,:,k+1).*M1-P(:,:,k) p(:,k+1).*r_bar1-p(:,k)
        (0.5*ones(n,1)+p(:,k+1).*r_bar1)' (p(:,k+1).*r_bar1-p(:,k))' q(k+1)-q(k)];
    
    vt_1 = [nu_1(:,k)+nu_2(:,k);zeros(2*n,1);nu_1(:,k)-nu_2(:,k);zeros(n,1)];
    vt_2 = [zeros(2*n,1);z_1(:,k)+z_2(:,k)-d(k)*ones(n,1);z_2(:,k)+d(k)*eta*ones(n,1);z_2(:,k)+d(k)*eta*ones(n,1)];
    sh_c = [zeros(n,1);sh_1(:,k)+sh_2(:,k);zeros(n,1);sh_1(:,k);sh_1(:,k)];

    % terminal portfolio constraint:
    if k==T
        M_term=[[eye(n) eye(n);eye(n) eye(n)] [-x_term;-x_term]; [-x_term' -x_term'] norm(x_term)^2];
        M_term_2 = [zeros(2*n) [dd;dd]; [dd;dd]' 0];
        Mat_1 = Mat_1+M_term_2+z*M_term; 
    end
        
    [zeros(3*n) zeros(3*n,2*n) [kappa/2;sh/2;zeros(n,1)]
        [zeros(2*n,3*n);[kappa'/2 sh'/2 zeros(1,n)]] Mat_1]-...
    [zeros(5*n) vt_1+vt_2+sh_c; vt_1'+vt_2'+sh_c' 0]==semidefinite(5*n+1)
    P(:,:,k) == semidefinite(n);
end
%P(:,:,T+1)==0;
%p(:,T+1)==0;
q(T+1)==0;
nu_1>=0;nu_2>=0;d>=0;z_1>=0;z_2>=0;sh_1>=0;sh_2>=0;
cvx_end

% time required to solve SDP
cvx_solve_time=toc;

% lower bound on performance
lb=cvx_optval;

% cvxgen parameter setup
settings.verbose=0;
params.eta = eta;
params.Sigma = sigma;
params.S = diag(s);
params.kappa = kappa;
params.lambda = lambda;
params.sh = sh;
% download and compile cvxgen solver
% clearvars -except P p q F N1 T eta kappa lambda lb mu n num_neutral params r_bar rt_Sigma_t sigma sigma_tilde s sh x_init x_term M settings cvx_solve_time
save data;

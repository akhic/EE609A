%%% Data generation file for paper:
% Performance Bounds and Suboptimal Policies for Multi-Period Investment
% by Stephen Boyd, Mark T. Mueller, Brendan O'Donoghue, Yang Wang
clear all
% set random seeds
rand('seed',1);randn('seed',1);
load log_cov_mat
load log_ret
% num assets:
n=30;
% horizon length:
T=100; 
%%%% parameters:
lambda = 0.5; % risk penalty cost
s = .01*rand(n,1); % quadratic trading cost
kappa = 0.005*rand(n, 1); % absolute value trading cost
sh = 0.001*rand(n,1); % shorting cost
%%%%
% leverage limit:
eta = 0.3;

% covariance generation:
sigma_tilde=0.01*diag(rand(n,1));
% generate correlation matrix, entries vary approx -0.3 to 0.8
% temp=randn(n);temp=temp*temp';
% l1=80;l2=80;
% v1=ceil(sprand(n,1,0.8));v2=ceil(sprand(n,1,0.8));
% Y = temp + l1*(v1*v1')+l2*(v2*v2');
% C=diag(1./sqrt(diag(Y)))*Y*diag(1./sqrt(diag(Y)));

%log-covariance
% sigma_tilde = C.*(sqrt(diag(sigma_tilde)*ones(1,n)).*sqrt(diag(sigma_tilde)*ones(1,n))');
sigma_tilde = log_cov_mat;
%log-return
% mu= 0.03*randn(n,1);
mu = log_ret;

% mean+covariance
r_bar = exp(mu+0.5*diag(sigma_tilde)); % asset mean returns
sigma = (r_bar*r_bar').*(exp(sigma_tilde)-1); % asset covariance matrix
sigma=(sigma+sigma')/2; % make sure symmetric, sometimes small error

% factor neutrality
num_neutral=2;
[F,ee]=eigs(sigma,num_neutral);F=F';

% second moment
M = sigma+r_bar*r_bar';

% matrix sqrt of sigma_tilde (to generate samples)
rt_Sigma_t = sqrtm(sigma_tilde);
% sample code to generate samples:
%num_samps=10;
%samples = exp(rt_Sigma_t*randn(n,num_samps)+mu*ones(1,num_samps));

N1 = 1;

% portfolios
x_init = zeros(n,1); % initial portfolio
x_term = zeros(n,1); % terminal portfolio constraint
save parameters
clear ee Y C

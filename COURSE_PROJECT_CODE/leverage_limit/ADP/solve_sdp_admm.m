%%% Leverage limit example for:
% Optimal and Near-Optimal Multi-Period Investment
% by Stephen Boyd, Mark T. Mueller, Brendan O'Donoghue, Yang Wang

% this script solves the SDP to obtain the lower bound
% on performance and the sequence
% of approximate value functions we shall use

% it saves down all the data to 'data.mat'
% which will be loaded when we run the MC simulations

% it also calls cvxgen to download the fast QP solver
% necessary to run the MC simulations of performance

% run this BEFORE running run_montecarlo.m

fprintf('*** Solving the SDP for the leverage limit example. ***\n')
fprintf('This step is memory intensive, machines with less than 8GB of RAM may run out of memory.\n')
fprintf('This can take up to an hour or more, depending on your machine.\n')
fprintf('The results are saved to data.mat.\n')
fprintf('After this has completed you can run the Monte Carlo simulations by typing:\n run_montecarlo.\n')

cd ..
data_gen % call data generation file
cd leverage_limit

L=lambda*sigma;
Q=lambda*sigma;
S=diag(s)+lambda*sigma;


% admm solver

% initialize global (consensus) variables
Pbar = zeros(n,n,T+1);
pbar = zeros(n,T+1);
qbar = zeros(T+1);
z_1bar = zeros(n,T);
z_2bar = zeros(n,T);
dbar = zeros(T,1);
nu_1bar = zeros(n,T);
nu_2bar = zeros(n,T);
sh_1bar = zeros(n,T);
sh_2bar = zeros(n,T);
ddbar = zeros(n,1);
zbar = 0;

% initialize dual variables
YP = zeros(n,n,T+1);
yp = zeros(n,T+1);
yq = zeros(T+1);

% temporary variables
Pt = zeros(n,n,T+1);
pt = zeros(n,T+1);
qt = zeros(T+1);
Pt1 = zeros(n,n,T+1);
pt1 = zeros(n,T+1);
qt1 = zeros(n,T+1);

nsteps = 100;
rho = 1;

for i = 1:nsteps
    i
    for t = 1:T
        t
        cvx_quiet(true);
        cvx_begin
            variable P0(n,n) symmetric
            variables p0(n) q0
            variable P1(n,n) symmetric
            variables p1(n) q1
        
            % S-procedure variables
            variables z_1(n) z_2(n) d nu_1(n) nu_2(n) sh_1(n) sh_2(n) dd(n) z
        
            % objective
            obj = trace(YP(:,:,t)'*(P0 - Pbar(:,:,t))) + ...
                  trace(YP(:,:,t+1)'*(P1 - Pbar(:,:,t+1))) + ...
                  yp(:,t)'*(p0 - pbar(:,t)) + ...
                  yp(:,t+1)'*(p1 - pbar(:,t+1)) + ...
                  yq(t)*(q0 - qbar(t)) + yq(t+1)*(q1 - qbar(t+1));
            obj = (rho/2)*(sum(sum_square(P0 - Pbar(:,:,t))) + ...
                  sum(sum_square(P1 - Pbar(:,:,t+1))) + ...
                  sum_square(p0 - pbar(:,t)) + ...
                  sum_square(p1 - pbar(:,t+1)) + ...
                  (q0 - qbar(t))^2 + (q1 - qbar(t+1))^2); 
            if (t == 1)
                obj = obj - (x_init'*P0*x_init + 2*p0'*x_init + q0);
            end
            minimize (obj)
        
            % S-procedure constraint matrices
            Mat_1 = [S + P1.*M, L + P1.*M, 0.5*ones(n,1) + p1.*r_bar,
                     L' + P1.*M, Q + P1.*M - P0, p1.*r_bar - p0,
                     (0.5*ones(n,1) + p1.*r_bar)', (p1.*r_bar - p0)', q1 - q0];
            vt_1 = [nu_1 + nu_2; zeros(2*n,1); nu_1 - nu_2; zeros(n,1)];
            vt_2 = [zeros(2*n,1); z_1 + z_2 - d*ones(n,1); 
                    z_2 + d*eta*ones(n,1); z_2 + d*eta*ones(n,1)];
            sh_c = [zeros(n,1); sh_1 + sh_2;
                    zeros(n,1); sh_1; sh_1];
        
            % add terminal constraint if t = T
            if (t == T)
                M_term = [[eye(n) eye(n);eye(n) eye(n)], [-x_term; -x_term]; 
                          [-x_term', -x_term'], norm(x_term)^2];
                M_term_2 = [zeros(2*n), [dd; dd]; [dd; dd]', 0];
                Mat_1 = Mat_1 + M_term_2 + z*M_term; 
            end
               
            % final S-procedure constraint
            [zeros(3*n), zeros(3*n,2*n), [kappa/2;sh/2;zeros(n,1)],
             [zeros(2*n,3*n); [kappa'/2, sh'/2, zeros(1,n)]], Mat_1] - ...
             [zeros(5*n), vt_1 + vt_2 + sh_c; vt_1' + vt_2' + sh_c', 0] == semidefinite(5*n+1)
            P0 == semidefinite(n); P1 == semidefinite(n);
        
            % S-procedure variables must be nonnegative
            nu_1 >= 0; nu_2 >= 0; d >= 0; z_1 >= 0; 
            z_2 >= 0; sh_1 >= 0; sh_2 >= 0;
        cvx_end

        % store the variables
        Pt(:,:,t) = P0; pt(:,t) = p0; qt(t) = q0;
        Pt1(:,:,t+1) = P1; pt1(:,t+1) = p1; qt1(t+1) = q1;
        z_1bar(:,t) = z_1; z_2bar(:,t) = z_2;
        dbar(t) = d; nu_1bar(:,t) = nu_1; nu_2bar(:,t) = nu_2;
        sh_1bar(:,t) = sh_1; sh_2bar(:,t) = sh_2; ddbar(:,t) = dd;
        zbar = z;
    end

    % average
    Pbar(:,:,2:T) = 0.5*(Pt(:,:,2:T) + Pt1(:,:,2:T));
    pbar(:,2:T) = 0.5*(pt(:,2:T) + pt1(:,2:T));
    qbar(2:T) = 0.5*(qt(2:T) + qt1(2:T));
    Pbar(:,:,1) = Pt(:,:,1); Pbar(:,:,T+1) = Pt1(:,:,T+1);
    pbar(:,1) = pt(:,1); pbar(:,T+1) = pt1(:,T+1);
    qbar(1) = qt(1); qbar(T+1) = qt1(T+1);

    lb = x_init'*Pbar(:,:,1)*x_init + 2*pbar(:,1)'*x_init + qbar(1)
end

P = Pbar; p = pbar; q = qbar;
z_1 = z_1bar; z_2 = z_2bar; d = dbar;
nu_1 = nu_1bar; nu_2 = nu_2bar; sh_1 = sh_1bar;
sh_2 = sh_2bar; dd = ddbar; z = zbar;

% tic;
% cvx_begin
%     % approximate value function variables :
%     variable P(n,n,T+1) symmetric
%     variables p(n,T+1) q(T+1) 
%     % S-procedure variables :
%     variables z_1(n,T) z_2(n,T) d(T) nu_1(n,T) nu_2(n,T) sh_1(n,T) sh_2(n,T) dd(n) z
%     maximize (x_init'*P(:,:,1)*x_init + 2*p(:,1)'*x_init + q(1))
%     for i=1:T
%        Mat_1 = [S+P(:,:,i+1).*M L+P(:,:,i+1).*M 0.5*ones(n,1)+p(:,i+1).*r_bar
%             L'+P(:,:,i+1).*M Q+P(:,:,i+1).*M-P(:,:,i) p(:,i+1).*r_bar-p(:,i)
%             (0.5*ones(n,1)+p(:,i+1).*r_bar)' (p(:,i+1).*r_bar-p(:,i))' q(i+1)-q(i)];
%         
%         vt_1 = [nu_1(:,i)+nu_2(:,i);zeros(2*n,1);nu_1(:,i)-nu_2(:,i);zeros(n,1)];
%         vt_2 = [zeros(2*n,1);z_1(:,i)+z_2(:,i)-d(i)*ones(n,1);z_2(:,i)+d(i)*eta*ones(n,1);z_2(:,i)+d(i)*eta*ones(n,1)];
%         sh_c = [zeros(n,1);sh_1(:,i)+sh_2(:,i);zeros(n,1);sh_1(:,i);sh_1(:,i)];
%     
%         % terminal portfolio constraint:
%         if i==T
%             M_term=[[eye(n) eye(n);eye(n) eye(n)] [-x_term;-x_term]; [-x_term' -x_term'] norm(x_term)^2];
%             M_term_2 = [zeros(2*n) [dd;dd]; [dd;dd]' 0];
%             Mat_1 = Mat_1+M_term_2+z*M_term; 
%         end
%             
%         [zeros(3*n) zeros(3*n,2*n) [kappa/2;sh/2;zeros(n,1)]
%             [zeros(2*n,3*n);[kappa'/2 sh'/2 zeros(1,n)]] Mat_1]-...
%         [zeros(5*n) vt_1+vt_2+sh_c; vt_1'+vt_2'+sh_c' 0]==semidefinite(5*n+1)
%         P(:,:,i) == semidefinite(n);
%     end
%     % P(:,:,T+1)==0;
%     % p(:,T+1)==0;
%     q(T+1)==0;
%     nu_1>=0;nu_2>=0;d>=0;z_1>=0;z_2>=0;sh_1>=0;sh_2>=0;
% cvx_end
% 
% % time required to solve SDP
% cvx_solve_time=toc

% lower bound on performance
lb = x_init'*P(:,:,1)*x_init + 2*p(:,1)'*x_init + q(1);

% cvxgen parameter setup
% settings.verbose=0;
% params.eta = eta;
% params.Sigma = sigma;
% params.S = diag(s);
% params.kappa = kappa;
% params.lambda = lambda;
% params.sh = sh;
% % download and compile cvxgen solver
% clearvars -except P p q F N1 T eta kappa lambda lb mu n num_neutral params r_bar rt_Sigma_t sigma sigma_tilde s sh x_init x_term M settings cvx_solve_time
% save data;

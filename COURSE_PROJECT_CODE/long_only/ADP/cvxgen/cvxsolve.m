% Produced by CVXGEN, 2011-10-19 16:32:06 -0700.
% CVXGEN is Copyright (C) 2006-2011 Jacob Mattingley, jem@cvxgen.com.
% The code in this file is Copyright (C) 2006-2011 Jacob Mattingley.
% CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial
% applications without prior written permission from Jacob Mattingley.

% Filename: cvxsolve.m.
% Description: Solution file, via cvx, for use with sample.m.

function [vars, status] = cvxsolve(params, settings)

PM = params.PM;
S = params.S;
Sigma = params.Sigma;
kappa = params.kappa;
lambda = params.lambda;
pm = params.pm;
x = params.x;

cvx_begin
  % Caution: automatically generated by cvxgen. May be incorrect.
  variable u(30, 1);

  minimize(sum(u) + kappa'*abs(u) + quad_form(u, S) + lambda*quad_form(x + u, Sigma) + quad_form(x + u, PM) + 2*pm'*(x + u));
  subject to
    x + u >= 0;
cvx_end

vars.u = u;
status.cvx_status = cvx_status;

% Provide a drop-in replacement for csolve.
status.optval = cvx_optval;
status.converged = strcmp(cvx_status, 'Solved');

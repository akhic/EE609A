% csolve  Solves a custom quadratic program very rapidly.
%
% [vars, status] = csolve(params, settings)
%
% solves the convex optimization problem
%
%   minimize(sum(u) + sh'*max( - (x + u), 0) + kappa'*abs(u) + quad_form(u, S) + lambda*quad_form(x + u, Sigma) + quad_form(x + u, PM) + 2*pm'*(x + u))
%
% with variables
%        u  30 x 1
%
% and parameters
%       PM  30 x 30   PSD
%        S  30 x 30   PSD, diagonal
%    Sigma  30 x 30   PSD
%    kappa  30 x 1    positive
%   lambda   1 x 1    positive
%       pm  30 x 1
%       sh  30 x 1    positive
%        x  30 x 1
%
% Note:
%   - Check status.converged, which will be 1 if optimization succeeded.
%   - You don't have to specify settings if you don't want to.
%   - To hide output, use settings.verbose = 0.
%   - To change iterations, use settings.max_iters = 20.
%   - You may wish to compare with cvxsolve to check the solver is correct.
%
% Specify params.PM, ..., params.x, then run
%   [vars, status] = csolve(params, settings)


% Produced by CVXGEN, 2011-10-19 15:59:19 -0700.
% CVXGEN is Copyright (C) 2006-2011 Jacob Mattingley, jem@cvxgen.com.
% The code in this file is Copyright (C) 2006-2011 Jacob Mattingley.
% CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial
% applications without prior written permission from Jacob Mattingley.

% Filename: csolve.m.
% Description: Help file for the Matlab solver interface.

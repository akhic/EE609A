% csolve  Solves a custom quadratic program very rapidly.
%
% [vars, status] = csolve(params, settings)
%
% solves the convex optimization problem
%
%   minimize(sum(v) + sh'*max( - (z + v), 0) + kappa'*abs(v) + quad_form(v, S) + lambda*quad_form(z + v, Sigma) + rtp1*sum(square(ztp1 - diag(r_bar)*(z + v) + yt)) + rtm1*sum(square(z - diag(r_bar)*(ztm1 + vtm1) + ytm1)))
%   subject to
%     az*z + av*v == x_constraint
%     z + v >= 0
%
% with variables
%        v  30 x 1
%        z  30 x 1
%
% and parameters
%        S  30 x 30   PSD, diagonal
%    Sigma  30 x 30   PSD
%       av   1 x 1
%       az   1 x 1
%    kappa  30 x 1    positive
%   lambda   1 x 1    positive
%    r_bar  30 x 1
%     rtm1   1 x 1    positive
%     rtp1   1 x 1    positive
%       sh  30 x 1    positive
%     vtm1  30 x 1
% x_constraint  30 x 1
%       yt  30 x 1
%     ytm1  30 x 1
%     ztm1  30 x 1
%     ztp1  30 x 1
%
% Note:
%   - Check status.converged, which will be 1 if optimization succeeded.
%   - You don't have to specify settings if you don't want to.
%   - To hide output, use settings.verbose = 0.
%   - To change iterations, use settings.max_iters = 20.
%   - You may wish to compare with cvxsolve to check the solver is correct.
%
% Specify params.S, ..., params.ztp1, then run
%   [vars, status] = csolve(params, settings)


% Produced by CVXGEN, 2011-12-13 19:16:39 -0800.
% CVXGEN is Copyright (C) 2006-2011 Jacob Mattingley, jem@cvxgen.com.
% The code in this file is Copyright (C) 2006-2011 Jacob Mattingley.
% CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial
% applications without prior written permission from Jacob Mattingley.

% Filename: csolve.m.
% Description: Help file for the Matlab solver interface.

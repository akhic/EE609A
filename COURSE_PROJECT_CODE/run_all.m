% Performance Bounds and Suboptimal Policies for Multi-Period Investment
% by Stephen Boyd, Mark T. Mueller, Brendan O'Donoghue, Yang Wang
% runs all examples
% ----------------------------------------------------------------

% clean everything
!./clean
% setup cvx
clearvars
clc;
cd cvx
cvx_setup;
cd ..
% run leverage limit example
clearvars
clc;
cd leverage_limit
run;
cd ..

clearvars
clc;
cd cvx
cvx_setup;
cd ..
% run long only example
clearvars 
clc;
cd long_only
run;
cd ..

clearvars
clc;
cd cvx
cvx_setup;
cd ..
% run unconstrained example
clearvars
clc;
cd unconstrained
run;
cd ..
% ploting graph
Simulations_result;

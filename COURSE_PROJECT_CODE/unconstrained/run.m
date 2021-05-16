% Performance Bounds and Suboptimal Policies for Multi-Period Investment
% by Stephen Boyd, Mark T. Mueller, Brendan O'Donoghue, Yang Wang
% ----------------------------------------------------------------

% runs ADPGARCH policy files
cd ADPGARCH/
run_adp
cd ..

% runs MPCGARCH policy files
cd MPCGARCH/
run_mpc
cd ..

% runs ADP policy files
cd ADP/
run_adp
cd ..

% runs MPC policy files
cd MPC/
run_mpc
cd ..
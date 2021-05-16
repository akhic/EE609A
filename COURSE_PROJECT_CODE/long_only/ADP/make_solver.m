% Performance Bounds and Suboptimal Policies for Multi-Period Investment 
% by Stephen Boyd, Mark T. Mueller, Brendan O'Donoghue, Yang Wang
% makes CVXGEN solver for policy implementation
% ----------------------------------------------------------------

dir = 'cvxgen/';

disp(' ');
disp('cvxgen is in beta. Please note that there is no warranty.');
disp(' ');
disp('Compiling...');

cd(dir);
try
  make_csolve;
  success = 1;
catch exception
  disp('!!! Compilation failed.')
  cd('..');
  success = 0;
  rethrow(exception);
end

if success
  pause(0.05); % Attempt to avoid a certain race condition.
  cd('..');
  pause(0.05);

  pause(0.05); % Attempt to avoid a certain race condition.
%   copyfile([dir '/csolve.m*'], '.');

  disp('Success. Type help csolve, or')
  disp(' ');
  disp('  [vars, status] = csolve(params, settings)');
  disp(' ');
end


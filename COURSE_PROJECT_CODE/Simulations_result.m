load leverage_limit/ADP/MC_data
LLCA = costs;
LLRA = penalty;
load leverage_limit/ADPGARCH/MC_data
LLCAG = costs;
LLRAG = penalty;
load leverage_limit/MPC/MPC_data
LLCM = costs;
LLRM = risk_penalty;
load leverage_limit/MPCGARCH/MPC_data
LLCMG = costs;
LLRMG = risk_penalty;
load long_only/ADP/MC_data
LOCA = costs;
LORA = penalty;
load long_only/ADPGARCH/MC_data
LOCAG = costs;
LORAG = penalty;
load long_only/MPC/MPC_data
LOCM = costs;
LORM = risk_penalty;
load long_only/MPCGARCH/MPC_data
LOCMG = costs;
LORMG = risk_penalty;
load unconstrained/ADP/MC_data
UCA = costs;
URA = penalty;
load unconstrained/ADPGARCH/MC_data
UCAG = costs;
URAG = penalty;
load unconstrained/MPC/MPC_data
UCM = costs;
URM = risk_penalty;
load unconstrained/MPCGARCH/MPC_data
UCMG = costs;
URMG = risk_penalty;


f = figure;
hold on;
plot(cumsum(LLCA(:,1)));
plot(cumsum(LLCAG(:,1)));
plot(cumsum(LLCM(:,1)));
plot(cumsum(LLCMG(:,1)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('leverage-limit-Cost-period-1');
xlabel('time');
ylabel('Costs');
saveas(f,'fig1.png');


f = figure;
hold on;
plot(LLRA(:,1));
plot(LLRAG(:,1));
plot(LLRM(:,1));
plot(LLRMG(:,1));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('leverage-limit-Risk-period-1');
xlabel('time');
ylabel('Costs');
saveas(f,'fig2.png');

f = figure;
hold on;
plot(cumsum(LLCA(:,2)));
plot(cumsum(LLCAG(:,2)));
plot(cumsum(LLCM(:,2)));
plot(cumsum(LLCMG(:,2)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('leverage-limit-Cost-period-2');
xlabel('time');
ylabel('Costs');
saveas(f,'fig3.png');


f = figure;
hold on;
plot(LLRA(:,2));
plot(LLRAG(:,2));
plot(LLRM(:,2));
plot(LLRMG(:,2));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('leverage-limit-Risk-period-2');
xlabel('time');
ylabel('Costs');
saveas(f,'fig4.png');

f = figure;
hold on;
plot(cumsum(LLCA(:,3)));
plot(cumsum(LLCAG(:,3)));
plot(cumsum(LLCM(:,3)));
plot(cumsum(LLCMG(:,3)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('leverage-limit-Cost-period-3');
xlabel('time');
ylabel('Costs');
saveas(f,'fig5.png');


f = figure;
hold on;
plot(LLRA(:,3));
plot(LLRAG(:,3));
plot(LLRM(:,3));
plot(LLRMG(:,3));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('leverage-limit-Risk-period-3');
xlabel('time');
ylabel('Costs');
saveas(f,'fig6.png');


f = figure;
hold on;
plot(cumsum(LOCA(:,1)));
plot(cumsum(LOCAG(:,1)));
plot(cumsum(LOCM(:,1)));
plot(cumsum(LOCMG(:,1)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('long-only-Cost-period-1');
xlabel('time');
ylabel('Costs');
saveas(f,'fig7.png');


f = figure;
hold on;
plot(LORA(:,1));
plot(LORAG(:,1));
plot(LORM(:,1));
plot(LORMG(:,1));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('long-only-Risk-period-1');
xlabel('time');
ylabel('Costs');
saveas(f,'fig8.png');

f = figure;
hold on;
plot(cumsum(LOCA(:,2)));
plot(cumsum(LOCAG(:,2)));
plot(cumsum(LOCM(:,2)));
plot(cumsum(LOCMG(:,2)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('long-only-Cost-period-2');
xlabel('time');
ylabel('Costs');
saveas(f,'fig9.png');


f = figure;
hold on;
plot(LORA(:,2));
plot(LORAG(:,2));
plot(LORM(:,2));
plot(LORMG(:,2));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('long-only-Risk-period-2');
xlabel('time');
ylabel('Costs');
saveas(f,'fig10.png');

f = figure;
hold on;
plot(cumsum(LOCA(:,3)));
plot(cumsum(LOCAG(:,3)));
plot(cumsum(LOCM(:,3)));
plot(cumsum(LOCMG(:,3)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('long-only-Cost-period-3');
xlabel('time');
ylabel('Costs');
saveas(f,'fig11.png');


f = figure;
hold on;
plot(LORA(:,3));
plot(LORAG(:,3));
plot(LORM(:,3));
plot(LORMG(:,3));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('long-only-Risk-period-3');
xlabel('time');
ylabel('Costs');
saveas(f,'fig12.png');


f = figure;
hold on;
plot(cumsum(UCA(:,1)));
plot(cumsum(UCAG(:,1)));
plot(cumsum(UCM(:,1)));
plot(cumsum(UCMG(:,1)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('unconstrained-Cost-period-1');
xlabel('time');
ylabel('Costs');
saveas(f,'fig13.png');


f = figure;
hold on;
plot(URA(:,1));
plot(URAG(:,1));
plot(URM(:,1));
plot(URMG(:,1));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('unconstrained-Risk-period-1');
xlabel('time');
ylabel('Costs');
saveas(f,'fig14.png');

f = figure;
hold on;
plot(cumsum(UCA(:,2)));
plot(cumsum(UCAG(:,2)));
plot(cumsum(UCM(:,2)));
plot(cumsum(UCMG(:,2)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('unconstrained-Cost-period-2');
xlabel('time');
ylabel('Costs');
saveas(f,'fig15.png');


f = figure;
hold on;
plot(URA(:,2));
plot(URAG(:,2));
plot(URM(:,2));
plot(URMG(:,2));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('unconstrained-Risk-period-2');
xlabel('time');
ylabel('Costs');
saveas(f,'fig16.png');

f = figure;
hold on;
plot(cumsum(UCA(:,3)));
plot(cumsum(UCAG(:,3)));
plot(cumsum(UCM(:,3)));
plot(cumsum(UCMG(:,3)));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('unconstrained-Cost-period-3');
xlabel('time');
ylabel('Costs');
saveas(f,'fig17.png');


f = figure;
hold on;
plot(URA(:,3));
plot(URAG(:,3));
plot(URM(:,3));
plot(URMG(:,3));
legend('ADP','ADPGARCH','MPC','MPCGARCH')
title('unconstrained-Risk-period-3');
xlabel('time');
ylabel('Costs');
saveas(f,'fig18.png');



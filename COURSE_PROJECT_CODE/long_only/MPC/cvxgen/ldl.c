/* Produced by CVXGEN, 2011-12-13 19:16:32 -0800.  */
/* CVXGEN is Copyright (C) 2006-2011 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2011 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: ldl.c. */
/* Description: Basic test harness for solver.c. */

#include "solver.h"

/* Be sure to place ldl_solve first, so storage schemes are defined by it. */
void ldl_solve(double *target, double *var) {
  int i;
  /* Find var = (L*diag(work.d)*L') \ target, then unpermute. */
  /* Answer goes into var. */

  /* Forward substitution. */
  /* Include permutation as we retrieve from target. Use v so we can unpermute */
  /* later. */
  work.v[0] = target[180];
  work.v[1] = target[181];
  work.v[2] = target[182];
  work.v[3] = target[183];
  work.v[4] = target[184];
  work.v[5] = target[185];
  work.v[6] = target[186];
  work.v[7] = target[187];
  work.v[8] = target[188];
  work.v[9] = target[189];
  work.v[10] = target[190];
  work.v[11] = target[191];
  work.v[12] = target[192];
  work.v[13] = target[193];
  work.v[14] = target[194];
  work.v[15] = target[195];
  work.v[16] = target[196];
  work.v[17] = target[197];
  work.v[18] = target[198];
  work.v[19] = target[199];
  work.v[20] = target[200];
  work.v[21] = target[201];
  work.v[22] = target[202];
  work.v[23] = target[203];
  work.v[24] = target[204];
  work.v[25] = target[205];
  work.v[26] = target[206];
  work.v[27] = target[207];
  work.v[28] = target[208];
  work.v[29] = target[209];
  work.v[30] = target[210];
  work.v[31] = target[211];
  work.v[32] = target[212];
  work.v[33] = target[213];
  work.v[34] = target[214];
  work.v[35] = target[215];
  work.v[36] = target[216];
  work.v[37] = target[217];
  work.v[38] = target[218];
  work.v[39] = target[219];
  work.v[40] = target[220];
  work.v[41] = target[221];
  work.v[42] = target[222];
  work.v[43] = target[223];
  work.v[44] = target[224];
  work.v[45] = target[225];
  work.v[46] = target[226];
  work.v[47] = target[227];
  work.v[48] = target[228];
  work.v[49] = target[229];
  work.v[50] = target[230];
  work.v[51] = target[231];
  work.v[52] = target[232];
  work.v[53] = target[233];
  work.v[54] = target[234];
  work.v[55] = target[235];
  work.v[56] = target[236];
  work.v[57] = target[237];
  work.v[58] = target[238];
  work.v[59] = target[239];
  work.v[60] = target[240];
  work.v[61] = target[241];
  work.v[62] = target[242];
  work.v[63] = target[243];
  work.v[64] = target[244];
  work.v[65] = target[245];
  work.v[66] = target[246];
  work.v[67] = target[247];
  work.v[68] = target[248];
  work.v[69] = target[249];
  work.v[70] = target[250];
  work.v[71] = target[251];
  work.v[72] = target[252];
  work.v[73] = target[253];
  work.v[74] = target[254];
  work.v[75] = target[255];
  work.v[76] = target[256];
  work.v[77] = target[257];
  work.v[78] = target[258];
  work.v[79] = target[259];
  work.v[80] = target[260];
  work.v[81] = target[261];
  work.v[82] = target[262];
  work.v[83] = target[263];
  work.v[84] = target[264];
  work.v[85] = target[265];
  work.v[86] = target[266];
  work.v[87] = target[267];
  work.v[88] = target[268];
  work.v[89] = target[269];
  work.v[90] = target[270];
  work.v[91] = target[271];
  work.v[92] = target[272];
  work.v[93] = target[273];
  work.v[94] = target[274];
  work.v[95] = target[275];
  work.v[96] = target[276];
  work.v[97] = target[277];
  work.v[98] = target[278];
  work.v[99] = target[279];
  work.v[100] = target[280];
  work.v[101] = target[281];
  work.v[102] = target[282];
  work.v[103] = target[283];
  work.v[104] = target[284];
  work.v[105] = target[285];
  work.v[106] = target[286];
  work.v[107] = target[287];
  work.v[108] = target[288];
  work.v[109] = target[289];
  work.v[110] = target[290];
  work.v[111] = target[291];
  work.v[112] = target[292];
  work.v[113] = target[293];
  work.v[114] = target[294];
  work.v[115] = target[295];
  work.v[116] = target[296];
  work.v[117] = target[297];
  work.v[118] = target[298];
  work.v[119] = target[299];
  work.v[120] = target[300];
  work.v[121] = target[301];
  work.v[122] = target[302];
  work.v[123] = target[303];
  work.v[124] = target[304];
  work.v[125] = target[305];
  work.v[126] = target[306];
  work.v[127] = target[307];
  work.v[128] = target[308];
  work.v[129] = target[309];
  work.v[130] = target[310];
  work.v[131] = target[311];
  work.v[132] = target[312];
  work.v[133] = target[313];
  work.v[134] = target[314];
  work.v[135] = target[315];
  work.v[136] = target[316];
  work.v[137] = target[317];
  work.v[138] = target[318];
  work.v[139] = target[319];
  work.v[140] = target[320];
  work.v[141] = target[321];
  work.v[142] = target[322];
  work.v[143] = target[323];
  work.v[144] = target[324];
  work.v[145] = target[325];
  work.v[146] = target[326];
  work.v[147] = target[327];
  work.v[148] = target[328];
  work.v[149] = target[329];
  work.v[150] = target[0];
  work.v[151] = target[360]-work.L[0]*work.v[30]-work.L[1]*work.v[150];
  work.v[152] = target[1];
  work.v[153] = target[361]-work.L[2]*work.v[31]-work.L[3]*work.v[152];
  work.v[154] = target[2];
  work.v[155] = target[362]-work.L[4]*work.v[32]-work.L[5]*work.v[154];
  work.v[156] = target[3];
  work.v[157] = target[363]-work.L[6]*work.v[33]-work.L[7]*work.v[156];
  work.v[158] = target[4];
  work.v[159] = target[364]-work.L[8]*work.v[34]-work.L[9]*work.v[158];
  work.v[160] = target[5];
  work.v[161] = target[365]-work.L[10]*work.v[35]-work.L[11]*work.v[160];
  work.v[162] = target[6];
  work.v[163] = target[366]-work.L[12]*work.v[36]-work.L[13]*work.v[162];
  work.v[164] = target[7];
  work.v[165] = target[367]-work.L[14]*work.v[37]-work.L[15]*work.v[164];
  work.v[166] = target[8];
  work.v[167] = target[368]-work.L[16]*work.v[38]-work.L[17]*work.v[166];
  work.v[168] = target[9];
  work.v[169] = target[369]-work.L[18]*work.v[39]-work.L[19]*work.v[168];
  work.v[170] = target[10];
  work.v[171] = target[370]-work.L[20]*work.v[40]-work.L[21]*work.v[170];
  work.v[172] = target[11];
  work.v[173] = target[371]-work.L[22]*work.v[41]-work.L[23]*work.v[172];
  work.v[174] = target[12];
  work.v[175] = target[372]-work.L[24]*work.v[42]-work.L[25]*work.v[174];
  work.v[176] = target[13];
  work.v[177] = target[373]-work.L[26]*work.v[43]-work.L[27]*work.v[176];
  work.v[178] = target[14];
  work.v[179] = target[374]-work.L[28]*work.v[44]-work.L[29]*work.v[178];
  work.v[180] = target[15];
  work.v[181] = target[375]-work.L[30]*work.v[45]-work.L[31]*work.v[180];
  work.v[182] = target[16];
  work.v[183] = target[376]-work.L[32]*work.v[46]-work.L[33]*work.v[182];
  work.v[184] = target[17];
  work.v[185] = target[377]-work.L[34]*work.v[47]-work.L[35]*work.v[184];
  work.v[186] = target[18];
  work.v[187] = target[378]-work.L[36]*work.v[48]-work.L[37]*work.v[186];
  work.v[188] = target[19];
  work.v[189] = target[379]-work.L[38]*work.v[49]-work.L[39]*work.v[188];
  work.v[190] = target[20];
  work.v[191] = target[380]-work.L[40]*work.v[50]-work.L[41]*work.v[190];
  work.v[192] = target[21];
  work.v[193] = target[381]-work.L[42]*work.v[51]-work.L[43]*work.v[192];
  work.v[194] = target[22];
  work.v[195] = target[382]-work.L[44]*work.v[52]-work.L[45]*work.v[194];
  work.v[196] = target[23];
  work.v[197] = target[383]-work.L[46]*work.v[53]-work.L[47]*work.v[196];
  work.v[198] = target[24];
  work.v[199] = target[384]-work.L[48]*work.v[54]-work.L[49]*work.v[198];
  work.v[200] = target[25];
  work.v[201] = target[385]-work.L[50]*work.v[55]-work.L[51]*work.v[200];
  work.v[202] = target[26];
  work.v[203] = target[386]-work.L[52]*work.v[56]-work.L[53]*work.v[202];
  work.v[204] = target[27];
  work.v[205] = target[387]-work.L[54]*work.v[57]-work.L[55]*work.v[204];
  work.v[206] = target[28];
  work.v[207] = target[388]-work.L[56]*work.v[58]-work.L[57]*work.v[206];
  work.v[208] = target[29];
  work.v[209] = target[389]-work.L[58]*work.v[59]-work.L[59]*work.v[208];
  work.v[210] = target[30];
  work.v[211] = target[390]-work.L[60]*work.v[60]-work.L[61]*work.v[210];
  work.v[212] = target[420]-work.L[62]*work.v[90]-work.L[63]*work.v[210]-work.L[64]*work.v[211];
  work.v[213] = target[31];
  work.v[214] = target[391]-work.L[65]*work.v[61]-work.L[66]*work.v[213];
  work.v[215] = target[421]-work.L[67]*work.v[91]-work.L[68]*work.v[213]-work.L[69]*work.v[214];
  work.v[216] = target[32];
  work.v[217] = target[392]-work.L[70]*work.v[62]-work.L[71]*work.v[216];
  work.v[218] = target[422]-work.L[72]*work.v[92]-work.L[73]*work.v[216]-work.L[74]*work.v[217];
  work.v[219] = target[33];
  work.v[220] = target[393]-work.L[75]*work.v[63]-work.L[76]*work.v[219];
  work.v[221] = target[423]-work.L[77]*work.v[93]-work.L[78]*work.v[219]-work.L[79]*work.v[220];
  work.v[222] = target[34];
  work.v[223] = target[394]-work.L[80]*work.v[64]-work.L[81]*work.v[222];
  work.v[224] = target[424]-work.L[82]*work.v[94]-work.L[83]*work.v[222]-work.L[84]*work.v[223];
  work.v[225] = target[35];
  work.v[226] = target[395]-work.L[85]*work.v[65]-work.L[86]*work.v[225];
  work.v[227] = target[425]-work.L[87]*work.v[95]-work.L[88]*work.v[225]-work.L[89]*work.v[226];
  work.v[228] = target[36];
  work.v[229] = target[396]-work.L[90]*work.v[66]-work.L[91]*work.v[228];
  work.v[230] = target[426]-work.L[92]*work.v[96]-work.L[93]*work.v[228]-work.L[94]*work.v[229];
  work.v[231] = target[37];
  work.v[232] = target[397]-work.L[95]*work.v[67]-work.L[96]*work.v[231];
  work.v[233] = target[427]-work.L[97]*work.v[97]-work.L[98]*work.v[231]-work.L[99]*work.v[232];
  work.v[234] = target[38];
  work.v[235] = target[398]-work.L[100]*work.v[68]-work.L[101]*work.v[234];
  work.v[236] = target[428]-work.L[102]*work.v[98]-work.L[103]*work.v[234]-work.L[104]*work.v[235];
  work.v[237] = target[39];
  work.v[238] = target[399]-work.L[105]*work.v[69]-work.L[106]*work.v[237];
  work.v[239] = target[429]-work.L[107]*work.v[99]-work.L[108]*work.v[237]-work.L[109]*work.v[238];
  work.v[240] = target[40];
  work.v[241] = target[400]-work.L[110]*work.v[70]-work.L[111]*work.v[240];
  work.v[242] = target[430]-work.L[112]*work.v[100]-work.L[113]*work.v[240]-work.L[114]*work.v[241];
  work.v[243] = target[41];
  work.v[244] = target[401]-work.L[115]*work.v[71]-work.L[116]*work.v[243];
  work.v[245] = target[431]-work.L[117]*work.v[101]-work.L[118]*work.v[243]-work.L[119]*work.v[244];
  work.v[246] = target[42];
  work.v[247] = target[402]-work.L[120]*work.v[72]-work.L[121]*work.v[246];
  work.v[248] = target[432]-work.L[122]*work.v[102]-work.L[123]*work.v[246]-work.L[124]*work.v[247];
  work.v[249] = target[43];
  work.v[250] = target[403]-work.L[125]*work.v[73]-work.L[126]*work.v[249];
  work.v[251] = target[433]-work.L[127]*work.v[103]-work.L[128]*work.v[249]-work.L[129]*work.v[250];
  work.v[252] = target[44];
  work.v[253] = target[404]-work.L[130]*work.v[74]-work.L[131]*work.v[252];
  work.v[254] = target[434]-work.L[132]*work.v[104]-work.L[133]*work.v[252]-work.L[134]*work.v[253];
  work.v[255] = target[45];
  work.v[256] = target[405]-work.L[135]*work.v[75]-work.L[136]*work.v[255];
  work.v[257] = target[435]-work.L[137]*work.v[105]-work.L[138]*work.v[255]-work.L[139]*work.v[256];
  work.v[258] = target[46];
  work.v[259] = target[406]-work.L[140]*work.v[76]-work.L[141]*work.v[258];
  work.v[260] = target[436]-work.L[142]*work.v[106]-work.L[143]*work.v[258]-work.L[144]*work.v[259];
  work.v[261] = target[47];
  work.v[262] = target[407]-work.L[145]*work.v[77]-work.L[146]*work.v[261];
  work.v[263] = target[437]-work.L[147]*work.v[107]-work.L[148]*work.v[261]-work.L[149]*work.v[262];
  work.v[264] = target[48];
  work.v[265] = target[408]-work.L[150]*work.v[78]-work.L[151]*work.v[264];
  work.v[266] = target[438]-work.L[152]*work.v[108]-work.L[153]*work.v[264]-work.L[154]*work.v[265];
  work.v[267] = target[49];
  work.v[268] = target[409]-work.L[155]*work.v[79]-work.L[156]*work.v[267];
  work.v[269] = target[439]-work.L[157]*work.v[109]-work.L[158]*work.v[267]-work.L[159]*work.v[268];
  work.v[270] = target[50];
  work.v[271] = target[410]-work.L[160]*work.v[80]-work.L[161]*work.v[270];
  work.v[272] = target[440]-work.L[162]*work.v[110]-work.L[163]*work.v[270]-work.L[164]*work.v[271];
  work.v[273] = target[51];
  work.v[274] = target[411]-work.L[165]*work.v[81]-work.L[166]*work.v[273];
  work.v[275] = target[441]-work.L[167]*work.v[111]-work.L[168]*work.v[273]-work.L[169]*work.v[274];
  work.v[276] = target[52];
  work.v[277] = target[412]-work.L[170]*work.v[82]-work.L[171]*work.v[276];
  work.v[278] = target[442]-work.L[172]*work.v[112]-work.L[173]*work.v[276]-work.L[174]*work.v[277];
  work.v[279] = target[53];
  work.v[280] = target[413]-work.L[175]*work.v[83]-work.L[176]*work.v[279];
  work.v[281] = target[443]-work.L[177]*work.v[113]-work.L[178]*work.v[279]-work.L[179]*work.v[280];
  work.v[282] = target[54];
  work.v[283] = target[414]-work.L[180]*work.v[84]-work.L[181]*work.v[282];
  work.v[284] = target[444]-work.L[182]*work.v[114]-work.L[183]*work.v[282]-work.L[184]*work.v[283];
  work.v[285] = target[55];
  work.v[286] = target[415]-work.L[185]*work.v[85]-work.L[186]*work.v[285];
  work.v[287] = target[445]-work.L[187]*work.v[115]-work.L[188]*work.v[285]-work.L[189]*work.v[286];
  work.v[288] = target[56];
  work.v[289] = target[416]-work.L[190]*work.v[86]-work.L[191]*work.v[288];
  work.v[290] = target[446]-work.L[192]*work.v[116]-work.L[193]*work.v[288]-work.L[194]*work.v[289];
  work.v[291] = target[57];
  work.v[292] = target[417]-work.L[195]*work.v[87]-work.L[196]*work.v[291];
  work.v[293] = target[447]-work.L[197]*work.v[117]-work.L[198]*work.v[291]-work.L[199]*work.v[292];
  work.v[294] = target[58];
  work.v[295] = target[418]-work.L[200]*work.v[88]-work.L[201]*work.v[294];
  work.v[296] = target[448]-work.L[202]*work.v[118]-work.L[203]*work.v[294]-work.L[204]*work.v[295];
  work.v[297] = target[59];
  work.v[298] = target[419]-work.L[205]*work.v[89]-work.L[206]*work.v[297];
  work.v[299] = target[449]-work.L[207]*work.v[119]-work.L[208]*work.v[297]-work.L[209]*work.v[298];
  work.v[300] = target[90];
  work.v[301] = target[91];
  work.v[302] = target[92];
  work.v[303] = target[93];
  work.v[304] = target[94];
  work.v[305] = target[95];
  work.v[306] = target[96];
  work.v[307] = target[97];
  work.v[308] = target[98];
  work.v[309] = target[99];
  work.v[310] = target[100];
  work.v[311] = target[101];
  work.v[312] = target[102];
  work.v[313] = target[103];
  work.v[314] = target[104];
  work.v[315] = target[105];
  work.v[316] = target[106];
  work.v[317] = target[107];
  work.v[318] = target[108];
  work.v[319] = target[109];
  work.v[320] = target[110];
  work.v[321] = target[111];
  work.v[322] = target[112];
  work.v[323] = target[113];
  work.v[324] = target[114];
  work.v[325] = target[115];
  work.v[326] = target[116];
  work.v[327] = target[117];
  work.v[328] = target[118];
  work.v[329] = target[119];
  work.v[330] = target[330]-work.L[210]*work.v[0]-work.L[211]*work.v[150]-work.L[212]*work.v[151];
  work.v[331] = target[450]-work.L[213]*work.v[120];
  work.v[332] = target[510]-work.L[214]*work.v[300];
  work.v[333] = target[540];
  work.v[334] = target[120]-work.L[215]*work.v[211]-work.L[216]*work.v[212]-work.L[217]*work.v[330]-work.L[218]*work.v[331]-work.L[219]*work.v[332]-work.L[220]*work.v[333];
  work.v[335] = target[150]-work.L[221]*work.v[330]-work.L[222]*work.v[331]-work.L[223]*work.v[332]-work.L[224]*work.v[333]-work.L[225]*work.v[334];
  work.v[336] = target[480]-work.L[226]*work.v[334]-work.L[227]*work.v[335];
  work.v[337] = target[60]-work.L[228]*work.v[336];
  work.v[338] = target[331]-work.L[229]*work.v[1]-work.L[230]*work.v[152]-work.L[231]*work.v[153];
  work.v[339] = target[451]-work.L[232]*work.v[121];
  work.v[340] = target[511]-work.L[233]*work.v[301];
  work.v[341] = target[541];
  work.v[342] = target[121]-work.L[234]*work.v[214]-work.L[235]*work.v[215]-work.L[236]*work.v[338]-work.L[237]*work.v[339]-work.L[238]*work.v[340]-work.L[239]*work.v[341];
  work.v[343] = target[151]-work.L[240]*work.v[338]-work.L[241]*work.v[339]-work.L[242]*work.v[340]-work.L[243]*work.v[341]-work.L[244]*work.v[342];
  work.v[344] = target[481]-work.L[245]*work.v[342]-work.L[246]*work.v[343];
  work.v[345] = target[61]-work.L[247]*work.v[337]-work.L[248]*work.v[344];
  work.v[346] = target[332]-work.L[249]*work.v[2]-work.L[250]*work.v[154]-work.L[251]*work.v[155];
  work.v[347] = target[452]-work.L[252]*work.v[122];
  work.v[348] = target[512]-work.L[253]*work.v[302];
  work.v[349] = target[542];
  work.v[350] = target[122]-work.L[254]*work.v[217]-work.L[255]*work.v[218]-work.L[256]*work.v[346]-work.L[257]*work.v[347]-work.L[258]*work.v[348]-work.L[259]*work.v[349];
  work.v[351] = target[152]-work.L[260]*work.v[346]-work.L[261]*work.v[347]-work.L[262]*work.v[348]-work.L[263]*work.v[349]-work.L[264]*work.v[350];
  work.v[352] = target[482]-work.L[265]*work.v[350]-work.L[266]*work.v[351];
  work.v[353] = target[62]-work.L[267]*work.v[337]-work.L[268]*work.v[345]-work.L[269]*work.v[352];
  work.v[354] = target[333]-work.L[270]*work.v[3]-work.L[271]*work.v[156]-work.L[272]*work.v[157];
  work.v[355] = target[453]-work.L[273]*work.v[123];
  work.v[356] = target[513]-work.L[274]*work.v[303];
  work.v[357] = target[543];
  work.v[358] = target[123]-work.L[275]*work.v[220]-work.L[276]*work.v[221]-work.L[277]*work.v[354]-work.L[278]*work.v[355]-work.L[279]*work.v[356]-work.L[280]*work.v[357];
  work.v[359] = target[153]-work.L[281]*work.v[354]-work.L[282]*work.v[355]-work.L[283]*work.v[356]-work.L[284]*work.v[357]-work.L[285]*work.v[358];
  work.v[360] = target[483]-work.L[286]*work.v[358]-work.L[287]*work.v[359];
  work.v[361] = target[63]-work.L[288]*work.v[337]-work.L[289]*work.v[345]-work.L[290]*work.v[353]-work.L[291]*work.v[360];
  work.v[362] = target[334]-work.L[292]*work.v[4]-work.L[293]*work.v[158]-work.L[294]*work.v[159];
  work.v[363] = target[454]-work.L[295]*work.v[124];
  work.v[364] = target[514]-work.L[296]*work.v[304];
  work.v[365] = target[544];
  work.v[366] = target[124]-work.L[297]*work.v[223]-work.L[298]*work.v[224]-work.L[299]*work.v[362]-work.L[300]*work.v[363]-work.L[301]*work.v[364]-work.L[302]*work.v[365];
  work.v[367] = target[154]-work.L[303]*work.v[362]-work.L[304]*work.v[363]-work.L[305]*work.v[364]-work.L[306]*work.v[365]-work.L[307]*work.v[366];
  work.v[368] = target[484]-work.L[308]*work.v[366]-work.L[309]*work.v[367];
  work.v[369] = target[64]-work.L[310]*work.v[337]-work.L[311]*work.v[345]-work.L[312]*work.v[353]-work.L[313]*work.v[361]-work.L[314]*work.v[368];
  work.v[370] = target[335]-work.L[315]*work.v[5]-work.L[316]*work.v[160]-work.L[317]*work.v[161];
  work.v[371] = target[455]-work.L[318]*work.v[125];
  work.v[372] = target[515]-work.L[319]*work.v[305];
  work.v[373] = target[545];
  work.v[374] = target[125]-work.L[320]*work.v[226]-work.L[321]*work.v[227]-work.L[322]*work.v[370]-work.L[323]*work.v[371]-work.L[324]*work.v[372]-work.L[325]*work.v[373];
  work.v[375] = target[155]-work.L[326]*work.v[370]-work.L[327]*work.v[371]-work.L[328]*work.v[372]-work.L[329]*work.v[373]-work.L[330]*work.v[374];
  work.v[376] = target[485]-work.L[331]*work.v[374]-work.L[332]*work.v[375];
  work.v[377] = target[65]-work.L[333]*work.v[337]-work.L[334]*work.v[345]-work.L[335]*work.v[353]-work.L[336]*work.v[361]-work.L[337]*work.v[369]-work.L[338]*work.v[376];
  work.v[378] = target[336]-work.L[339]*work.v[6]-work.L[340]*work.v[162]-work.L[341]*work.v[163];
  work.v[379] = target[456]-work.L[342]*work.v[126];
  work.v[380] = target[516]-work.L[343]*work.v[306];
  work.v[381] = target[546];
  work.v[382] = target[126]-work.L[344]*work.v[229]-work.L[345]*work.v[230]-work.L[346]*work.v[378]-work.L[347]*work.v[379]-work.L[348]*work.v[380]-work.L[349]*work.v[381];
  work.v[383] = target[156]-work.L[350]*work.v[378]-work.L[351]*work.v[379]-work.L[352]*work.v[380]-work.L[353]*work.v[381]-work.L[354]*work.v[382];
  work.v[384] = target[486]-work.L[355]*work.v[382]-work.L[356]*work.v[383];
  work.v[385] = target[66]-work.L[357]*work.v[337]-work.L[358]*work.v[345]-work.L[359]*work.v[353]-work.L[360]*work.v[361]-work.L[361]*work.v[369]-work.L[362]*work.v[377]-work.L[363]*work.v[384];
  work.v[386] = target[337]-work.L[364]*work.v[7]-work.L[365]*work.v[164]-work.L[366]*work.v[165];
  work.v[387] = target[457]-work.L[367]*work.v[127];
  work.v[388] = target[517]-work.L[368]*work.v[307];
  work.v[389] = target[547];
  work.v[390] = target[127]-work.L[369]*work.v[232]-work.L[370]*work.v[233]-work.L[371]*work.v[386]-work.L[372]*work.v[387]-work.L[373]*work.v[388]-work.L[374]*work.v[389];
  work.v[391] = target[157]-work.L[375]*work.v[386]-work.L[376]*work.v[387]-work.L[377]*work.v[388]-work.L[378]*work.v[389]-work.L[379]*work.v[390];
  work.v[392] = target[487]-work.L[380]*work.v[390]-work.L[381]*work.v[391];
  work.v[393] = target[67]-work.L[382]*work.v[337]-work.L[383]*work.v[345]-work.L[384]*work.v[353]-work.L[385]*work.v[361]-work.L[386]*work.v[369]-work.L[387]*work.v[377]-work.L[388]*work.v[385]-work.L[389]*work.v[392];
  work.v[394] = target[338]-work.L[390]*work.v[8]-work.L[391]*work.v[166]-work.L[392]*work.v[167];
  work.v[395] = target[458]-work.L[393]*work.v[128];
  work.v[396] = target[518]-work.L[394]*work.v[308];
  work.v[397] = target[548];
  work.v[398] = target[128]-work.L[395]*work.v[235]-work.L[396]*work.v[236]-work.L[397]*work.v[394]-work.L[398]*work.v[395]-work.L[399]*work.v[396]-work.L[400]*work.v[397];
  work.v[399] = target[158]-work.L[401]*work.v[394]-work.L[402]*work.v[395]-work.L[403]*work.v[396]-work.L[404]*work.v[397]-work.L[405]*work.v[398];
  work.v[400] = target[488]-work.L[406]*work.v[398]-work.L[407]*work.v[399];
  work.v[401] = target[68]-work.L[408]*work.v[337]-work.L[409]*work.v[345]-work.L[410]*work.v[353]-work.L[411]*work.v[361]-work.L[412]*work.v[369]-work.L[413]*work.v[377]-work.L[414]*work.v[385]-work.L[415]*work.v[393]-work.L[416]*work.v[400];
  work.v[402] = target[339]-work.L[417]*work.v[9]-work.L[418]*work.v[168]-work.L[419]*work.v[169];
  work.v[403] = target[459]-work.L[420]*work.v[129];
  work.v[404] = target[519]-work.L[421]*work.v[309];
  work.v[405] = target[549];
  work.v[406] = target[129]-work.L[422]*work.v[238]-work.L[423]*work.v[239]-work.L[424]*work.v[402]-work.L[425]*work.v[403]-work.L[426]*work.v[404]-work.L[427]*work.v[405];
  work.v[407] = target[159]-work.L[428]*work.v[402]-work.L[429]*work.v[403]-work.L[430]*work.v[404]-work.L[431]*work.v[405]-work.L[432]*work.v[406];
  work.v[408] = target[489]-work.L[433]*work.v[406]-work.L[434]*work.v[407];
  work.v[409] = target[69]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353]-work.L[438]*work.v[361]-work.L[439]*work.v[369]-work.L[440]*work.v[377]-work.L[441]*work.v[385]-work.L[442]*work.v[393]-work.L[443]*work.v[401]-work.L[444]*work.v[408];
  work.v[410] = target[340]-work.L[445]*work.v[10]-work.L[446]*work.v[170]-work.L[447]*work.v[171];
  work.v[411] = target[460]-work.L[448]*work.v[130];
  work.v[412] = target[520]-work.L[449]*work.v[310];
  work.v[413] = target[550];
  work.v[414] = target[130]-work.L[450]*work.v[241]-work.L[451]*work.v[242]-work.L[452]*work.v[410]-work.L[453]*work.v[411]-work.L[454]*work.v[412]-work.L[455]*work.v[413];
  work.v[415] = target[160]-work.L[456]*work.v[410]-work.L[457]*work.v[411]-work.L[458]*work.v[412]-work.L[459]*work.v[413]-work.L[460]*work.v[414];
  work.v[416] = target[490]-work.L[461]*work.v[414]-work.L[462]*work.v[415];
  work.v[417] = target[70]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361]-work.L[467]*work.v[369]-work.L[468]*work.v[377]-work.L[469]*work.v[385]-work.L[470]*work.v[393]-work.L[471]*work.v[401]-work.L[472]*work.v[409]-work.L[473]*work.v[416];
  work.v[418] = target[341]-work.L[474]*work.v[11]-work.L[475]*work.v[172]-work.L[476]*work.v[173];
  work.v[419] = target[461]-work.L[477]*work.v[131];
  work.v[420] = target[521]-work.L[478]*work.v[311];
  work.v[421] = target[551];
  work.v[422] = target[131]-work.L[479]*work.v[244]-work.L[480]*work.v[245]-work.L[481]*work.v[418]-work.L[482]*work.v[419]-work.L[483]*work.v[420]-work.L[484]*work.v[421];
  work.v[423] = target[161]-work.L[485]*work.v[418]-work.L[486]*work.v[419]-work.L[487]*work.v[420]-work.L[488]*work.v[421]-work.L[489]*work.v[422];
  work.v[424] = target[491]-work.L[490]*work.v[422]-work.L[491]*work.v[423];
  work.v[425] = target[71]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369]-work.L[497]*work.v[377]-work.L[498]*work.v[385]-work.L[499]*work.v[393]-work.L[500]*work.v[401]-work.L[501]*work.v[409]-work.L[502]*work.v[417]-work.L[503]*work.v[424];
  work.v[426] = target[342]-work.L[504]*work.v[12]-work.L[505]*work.v[174]-work.L[506]*work.v[175];
  work.v[427] = target[462]-work.L[507]*work.v[132];
  work.v[428] = target[522]-work.L[508]*work.v[312];
  work.v[429] = target[552];
  work.v[430] = target[132]-work.L[509]*work.v[247]-work.L[510]*work.v[248]-work.L[511]*work.v[426]-work.L[512]*work.v[427]-work.L[513]*work.v[428]-work.L[514]*work.v[429];
  work.v[431] = target[162]-work.L[515]*work.v[426]-work.L[516]*work.v[427]-work.L[517]*work.v[428]-work.L[518]*work.v[429]-work.L[519]*work.v[430];
  work.v[432] = target[492]-work.L[520]*work.v[430]-work.L[521]*work.v[431];
  work.v[433] = target[72]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377]-work.L[528]*work.v[385]-work.L[529]*work.v[393]-work.L[530]*work.v[401]-work.L[531]*work.v[409]-work.L[532]*work.v[417]-work.L[533]*work.v[425]-work.L[534]*work.v[432];
  work.v[434] = target[343]-work.L[535]*work.v[13]-work.L[536]*work.v[176]-work.L[537]*work.v[177];
  work.v[435] = target[463]-work.L[538]*work.v[133];
  work.v[436] = target[523]-work.L[539]*work.v[313];
  work.v[437] = target[553];
  work.v[438] = target[133]-work.L[540]*work.v[250]-work.L[541]*work.v[251]-work.L[542]*work.v[434]-work.L[543]*work.v[435]-work.L[544]*work.v[436]-work.L[545]*work.v[437];
  work.v[439] = target[163]-work.L[546]*work.v[434]-work.L[547]*work.v[435]-work.L[548]*work.v[436]-work.L[549]*work.v[437]-work.L[550]*work.v[438];
  work.v[440] = target[493]-work.L[551]*work.v[438]-work.L[552]*work.v[439];
  work.v[441] = target[73]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385]-work.L[560]*work.v[393]-work.L[561]*work.v[401]-work.L[562]*work.v[409]-work.L[563]*work.v[417]-work.L[564]*work.v[425]-work.L[565]*work.v[433]-work.L[566]*work.v[440];
  work.v[442] = target[344]-work.L[567]*work.v[14]-work.L[568]*work.v[178]-work.L[569]*work.v[179];
  work.v[443] = target[464]-work.L[570]*work.v[134];
  work.v[444] = target[524]-work.L[571]*work.v[314];
  work.v[445] = target[554];
  work.v[446] = target[134]-work.L[572]*work.v[253]-work.L[573]*work.v[254]-work.L[574]*work.v[442]-work.L[575]*work.v[443]-work.L[576]*work.v[444]-work.L[577]*work.v[445];
  work.v[447] = target[164]-work.L[578]*work.v[442]-work.L[579]*work.v[443]-work.L[580]*work.v[444]-work.L[581]*work.v[445]-work.L[582]*work.v[446];
  work.v[448] = target[494]-work.L[583]*work.v[446]-work.L[584]*work.v[447];
  work.v[449] = target[74]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393]-work.L[593]*work.v[401]-work.L[594]*work.v[409]-work.L[595]*work.v[417]-work.L[596]*work.v[425]-work.L[597]*work.v[433]-work.L[598]*work.v[441]-work.L[599]*work.v[448];
  work.v[450] = target[345]-work.L[600]*work.v[15]-work.L[601]*work.v[180]-work.L[602]*work.v[181];
  work.v[451] = target[465]-work.L[603]*work.v[135];
  work.v[452] = target[525]-work.L[604]*work.v[315];
  work.v[453] = target[555];
  work.v[454] = target[135]-work.L[605]*work.v[256]-work.L[606]*work.v[257]-work.L[607]*work.v[450]-work.L[608]*work.v[451]-work.L[609]*work.v[452]-work.L[610]*work.v[453];
  work.v[455] = target[165]-work.L[611]*work.v[450]-work.L[612]*work.v[451]-work.L[613]*work.v[452]-work.L[614]*work.v[453]-work.L[615]*work.v[454];
  work.v[456] = target[495]-work.L[616]*work.v[454]-work.L[617]*work.v[455];
  work.v[457] = target[75]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401]-work.L[627]*work.v[409]-work.L[628]*work.v[417]-work.L[629]*work.v[425]-work.L[630]*work.v[433]-work.L[631]*work.v[441]-work.L[632]*work.v[449]-work.L[633]*work.v[456];
  work.v[458] = target[346]-work.L[634]*work.v[16]-work.L[635]*work.v[182]-work.L[636]*work.v[183];
  work.v[459] = target[466]-work.L[637]*work.v[136];
  work.v[460] = target[526]-work.L[638]*work.v[316];
  work.v[461] = target[556];
  work.v[462] = target[136]-work.L[639]*work.v[259]-work.L[640]*work.v[260]-work.L[641]*work.v[458]-work.L[642]*work.v[459]-work.L[643]*work.v[460]-work.L[644]*work.v[461];
  work.v[463] = target[166]-work.L[645]*work.v[458]-work.L[646]*work.v[459]-work.L[647]*work.v[460]-work.L[648]*work.v[461]-work.L[649]*work.v[462];
  work.v[464] = target[496]-work.L[650]*work.v[462]-work.L[651]*work.v[463];
  work.v[465] = target[76]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409]-work.L[662]*work.v[417]-work.L[663]*work.v[425]-work.L[664]*work.v[433]-work.L[665]*work.v[441]-work.L[666]*work.v[449]-work.L[667]*work.v[457]-work.L[668]*work.v[464];
  work.v[466] = target[347]-work.L[669]*work.v[17]-work.L[670]*work.v[184]-work.L[671]*work.v[185];
  work.v[467] = target[467]-work.L[672]*work.v[137];
  work.v[468] = target[527]-work.L[673]*work.v[317];
  work.v[469] = target[557];
  work.v[470] = target[137]-work.L[674]*work.v[262]-work.L[675]*work.v[263]-work.L[676]*work.v[466]-work.L[677]*work.v[467]-work.L[678]*work.v[468]-work.L[679]*work.v[469];
  work.v[471] = target[167]-work.L[680]*work.v[466]-work.L[681]*work.v[467]-work.L[682]*work.v[468]-work.L[683]*work.v[469]-work.L[684]*work.v[470];
  work.v[472] = target[497]-work.L[685]*work.v[470]-work.L[686]*work.v[471];
  work.v[473] = target[77]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417]-work.L[698]*work.v[425]-work.L[699]*work.v[433]-work.L[700]*work.v[441]-work.L[701]*work.v[449]-work.L[702]*work.v[457]-work.L[703]*work.v[465]-work.L[704]*work.v[472];
  work.v[474] = target[348]-work.L[705]*work.v[18]-work.L[706]*work.v[186]-work.L[707]*work.v[187];
  work.v[475] = target[468]-work.L[708]*work.v[138];
  work.v[476] = target[528]-work.L[709]*work.v[318];
  work.v[477] = target[558];
  work.v[478] = target[138]-work.L[710]*work.v[265]-work.L[711]*work.v[266]-work.L[712]*work.v[474]-work.L[713]*work.v[475]-work.L[714]*work.v[476]-work.L[715]*work.v[477];
  work.v[479] = target[168]-work.L[716]*work.v[474]-work.L[717]*work.v[475]-work.L[718]*work.v[476]-work.L[719]*work.v[477]-work.L[720]*work.v[478];
  work.v[480] = target[498]-work.L[721]*work.v[478]-work.L[722]*work.v[479];
  work.v[481] = target[78]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425]-work.L[735]*work.v[433]-work.L[736]*work.v[441]-work.L[737]*work.v[449]-work.L[738]*work.v[457]-work.L[739]*work.v[465]-work.L[740]*work.v[473]-work.L[741]*work.v[480];
  work.v[482] = target[349]-work.L[742]*work.v[19]-work.L[743]*work.v[188]-work.L[744]*work.v[189];
  work.v[483] = target[469]-work.L[745]*work.v[139];
  work.v[484] = target[529]-work.L[746]*work.v[319];
  work.v[485] = target[559];
  work.v[486] = target[139]-work.L[747]*work.v[268]-work.L[748]*work.v[269]-work.L[749]*work.v[482]-work.L[750]*work.v[483]-work.L[751]*work.v[484]-work.L[752]*work.v[485];
  work.v[487] = target[169]-work.L[753]*work.v[482]-work.L[754]*work.v[483]-work.L[755]*work.v[484]-work.L[756]*work.v[485]-work.L[757]*work.v[486];
  work.v[488] = target[499]-work.L[758]*work.v[486]-work.L[759]*work.v[487];
  work.v[489] = target[79]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433]-work.L[773]*work.v[441]-work.L[774]*work.v[449]-work.L[775]*work.v[457]-work.L[776]*work.v[465]-work.L[777]*work.v[473]-work.L[778]*work.v[481]-work.L[779]*work.v[488];
  work.v[490] = target[350]-work.L[780]*work.v[20]-work.L[781]*work.v[190]-work.L[782]*work.v[191];
  work.v[491] = target[470]-work.L[783]*work.v[140];
  work.v[492] = target[530]-work.L[784]*work.v[320];
  work.v[493] = target[560];
  work.v[494] = target[140]-work.L[785]*work.v[271]-work.L[786]*work.v[272]-work.L[787]*work.v[490]-work.L[788]*work.v[491]-work.L[789]*work.v[492]-work.L[790]*work.v[493];
  work.v[495] = target[170]-work.L[791]*work.v[490]-work.L[792]*work.v[491]-work.L[793]*work.v[492]-work.L[794]*work.v[493]-work.L[795]*work.v[494];
  work.v[496] = target[500]-work.L[796]*work.v[494]-work.L[797]*work.v[495];
  work.v[497] = target[80]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441]-work.L[812]*work.v[449]-work.L[813]*work.v[457]-work.L[814]*work.v[465]-work.L[815]*work.v[473]-work.L[816]*work.v[481]-work.L[817]*work.v[489]-work.L[818]*work.v[496];
  work.v[498] = target[351]-work.L[819]*work.v[21]-work.L[820]*work.v[192]-work.L[821]*work.v[193];
  work.v[499] = target[471]-work.L[822]*work.v[141];
  work.v[500] = target[531]-work.L[823]*work.v[321];
  work.v[501] = target[561];
  work.v[502] = target[141]-work.L[824]*work.v[274]-work.L[825]*work.v[275]-work.L[826]*work.v[498]-work.L[827]*work.v[499]-work.L[828]*work.v[500]-work.L[829]*work.v[501];
  work.v[503] = target[171]-work.L[830]*work.v[498]-work.L[831]*work.v[499]-work.L[832]*work.v[500]-work.L[833]*work.v[501]-work.L[834]*work.v[502];
  work.v[504] = target[501]-work.L[835]*work.v[502]-work.L[836]*work.v[503];
  work.v[505] = target[81]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449]-work.L[852]*work.v[457]-work.L[853]*work.v[465]-work.L[854]*work.v[473]-work.L[855]*work.v[481]-work.L[856]*work.v[489]-work.L[857]*work.v[497]-work.L[858]*work.v[504];
  work.v[506] = target[352]-work.L[859]*work.v[22]-work.L[860]*work.v[194]-work.L[861]*work.v[195];
  work.v[507] = target[472]-work.L[862]*work.v[142];
  work.v[508] = target[532]-work.L[863]*work.v[322];
  work.v[509] = target[562];
  work.v[510] = target[142]-work.L[864]*work.v[277]-work.L[865]*work.v[278]-work.L[866]*work.v[506]-work.L[867]*work.v[507]-work.L[868]*work.v[508]-work.L[869]*work.v[509];
  work.v[511] = target[172]-work.L[870]*work.v[506]-work.L[871]*work.v[507]-work.L[872]*work.v[508]-work.L[873]*work.v[509]-work.L[874]*work.v[510];
  work.v[512] = target[502]-work.L[875]*work.v[510]-work.L[876]*work.v[511];
  work.v[513] = target[82]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457]-work.L[893]*work.v[465]-work.L[894]*work.v[473]-work.L[895]*work.v[481]-work.L[896]*work.v[489]-work.L[897]*work.v[497]-work.L[898]*work.v[505]-work.L[899]*work.v[512];
  work.v[514] = target[353]-work.L[900]*work.v[23]-work.L[901]*work.v[196]-work.L[902]*work.v[197];
  work.v[515] = target[473]-work.L[903]*work.v[143];
  work.v[516] = target[533]-work.L[904]*work.v[323];
  work.v[517] = target[563];
  work.v[518] = target[143]-work.L[905]*work.v[280]-work.L[906]*work.v[281]-work.L[907]*work.v[514]-work.L[908]*work.v[515]-work.L[909]*work.v[516]-work.L[910]*work.v[517];
  work.v[519] = target[173]-work.L[911]*work.v[514]-work.L[912]*work.v[515]-work.L[913]*work.v[516]-work.L[914]*work.v[517]-work.L[915]*work.v[518];
  work.v[520] = target[503]-work.L[916]*work.v[518]-work.L[917]*work.v[519];
  work.v[521] = target[83]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465]-work.L[935]*work.v[473]-work.L[936]*work.v[481]-work.L[937]*work.v[489]-work.L[938]*work.v[497]-work.L[939]*work.v[505]-work.L[940]*work.v[513]-work.L[941]*work.v[520];
  work.v[522] = target[354]-work.L[942]*work.v[24]-work.L[943]*work.v[198]-work.L[944]*work.v[199];
  work.v[523] = target[474]-work.L[945]*work.v[144];
  work.v[524] = target[534]-work.L[946]*work.v[324];
  work.v[525] = target[564];
  work.v[526] = target[144]-work.L[947]*work.v[283]-work.L[948]*work.v[284]-work.L[949]*work.v[522]-work.L[950]*work.v[523]-work.L[951]*work.v[524]-work.L[952]*work.v[525];
  work.v[527] = target[174]-work.L[953]*work.v[522]-work.L[954]*work.v[523]-work.L[955]*work.v[524]-work.L[956]*work.v[525]-work.L[957]*work.v[526];
  work.v[528] = target[504]-work.L[958]*work.v[526]-work.L[959]*work.v[527];
  work.v[529] = target[84]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473]-work.L[978]*work.v[481]-work.L[979]*work.v[489]-work.L[980]*work.v[497]-work.L[981]*work.v[505]-work.L[982]*work.v[513]-work.L[983]*work.v[521]-work.L[984]*work.v[528];
  work.v[530] = target[355]-work.L[985]*work.v[25]-work.L[986]*work.v[200]-work.L[987]*work.v[201];
  work.v[531] = target[475]-work.L[988]*work.v[145];
  work.v[532] = target[535]-work.L[989]*work.v[325];
  work.v[533] = target[565];
  work.v[534] = target[145]-work.L[990]*work.v[286]-work.L[991]*work.v[287]-work.L[992]*work.v[530]-work.L[993]*work.v[531]-work.L[994]*work.v[532]-work.L[995]*work.v[533];
  work.v[535] = target[175]-work.L[996]*work.v[530]-work.L[997]*work.v[531]-work.L[998]*work.v[532]-work.L[999]*work.v[533]-work.L[1000]*work.v[534];
  work.v[536] = target[505]-work.L[1001]*work.v[534]-work.L[1002]*work.v[535];
  work.v[537] = target[85]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481]-work.L[1022]*work.v[489]-work.L[1023]*work.v[497]-work.L[1024]*work.v[505]-work.L[1025]*work.v[513]-work.L[1026]*work.v[521]-work.L[1027]*work.v[529]-work.L[1028]*work.v[536];
  work.v[538] = target[356]-work.L[1029]*work.v[26]-work.L[1030]*work.v[202]-work.L[1031]*work.v[203];
  work.v[539] = target[476]-work.L[1032]*work.v[146];
  work.v[540] = target[536]-work.L[1033]*work.v[326];
  work.v[541] = target[566];
  work.v[542] = target[146]-work.L[1034]*work.v[289]-work.L[1035]*work.v[290]-work.L[1036]*work.v[538]-work.L[1037]*work.v[539]-work.L[1038]*work.v[540]-work.L[1039]*work.v[541];
  work.v[543] = target[176]-work.L[1040]*work.v[538]-work.L[1041]*work.v[539]-work.L[1042]*work.v[540]-work.L[1043]*work.v[541]-work.L[1044]*work.v[542];
  work.v[544] = target[506]-work.L[1045]*work.v[542]-work.L[1046]*work.v[543];
  work.v[545] = target[86]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489]-work.L[1067]*work.v[497]-work.L[1068]*work.v[505]-work.L[1069]*work.v[513]-work.L[1070]*work.v[521]-work.L[1071]*work.v[529]-work.L[1072]*work.v[537]-work.L[1073]*work.v[544];
  work.v[546] = target[357]-work.L[1074]*work.v[27]-work.L[1075]*work.v[204]-work.L[1076]*work.v[205];
  work.v[547] = target[477]-work.L[1077]*work.v[147];
  work.v[548] = target[537]-work.L[1078]*work.v[327];
  work.v[549] = target[567];
  work.v[550] = target[147]-work.L[1079]*work.v[292]-work.L[1080]*work.v[293]-work.L[1081]*work.v[546]-work.L[1082]*work.v[547]-work.L[1083]*work.v[548]-work.L[1084]*work.v[549];
  work.v[551] = target[177]-work.L[1085]*work.v[546]-work.L[1086]*work.v[547]-work.L[1087]*work.v[548]-work.L[1088]*work.v[549]-work.L[1089]*work.v[550];
  work.v[552] = target[507]-work.L[1090]*work.v[550]-work.L[1091]*work.v[551];
  work.v[553] = target[87]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497]-work.L[1113]*work.v[505]-work.L[1114]*work.v[513]-work.L[1115]*work.v[521]-work.L[1116]*work.v[529]-work.L[1117]*work.v[537]-work.L[1118]*work.v[545]-work.L[1119]*work.v[552];
  work.v[554] = target[358]-work.L[1120]*work.v[28]-work.L[1121]*work.v[206]-work.L[1122]*work.v[207];
  work.v[555] = target[478]-work.L[1123]*work.v[148];
  work.v[556] = target[538]-work.L[1124]*work.v[328];
  work.v[557] = target[568];
  work.v[558] = target[148]-work.L[1125]*work.v[295]-work.L[1126]*work.v[296]-work.L[1127]*work.v[554]-work.L[1128]*work.v[555]-work.L[1129]*work.v[556]-work.L[1130]*work.v[557];
  work.v[559] = target[178]-work.L[1131]*work.v[554]-work.L[1132]*work.v[555]-work.L[1133]*work.v[556]-work.L[1134]*work.v[557]-work.L[1135]*work.v[558];
  work.v[560] = target[508]-work.L[1136]*work.v[558]-work.L[1137]*work.v[559];
  work.v[561] = target[88]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505]-work.L[1160]*work.v[513]-work.L[1161]*work.v[521]-work.L[1162]*work.v[529]-work.L[1163]*work.v[537]-work.L[1164]*work.v[545]-work.L[1165]*work.v[553]-work.L[1166]*work.v[560];
  work.v[562] = target[89]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513]-work.L[1190]*work.v[521]-work.L[1191]*work.v[529]-work.L[1192]*work.v[537]-work.L[1193]*work.v[545]-work.L[1194]*work.v[553]-work.L[1195]*work.v[561];
  work.v[563] = target[359]-work.L[1196]*work.v[29]-work.L[1197]*work.v[208]-work.L[1198]*work.v[209];
  work.v[564] = target[479]-work.L[1199]*work.v[149];
  work.v[565] = target[509]-work.L[1200]*work.v[562];
  work.v[566] = target[539]-work.L[1201]*work.v[329];
  work.v[567] = target[569];
  work.v[568] = target[149]-work.L[1202]*work.v[298]-work.L[1203]*work.v[299]-work.L[1204]*work.v[563]-work.L[1205]*work.v[564]-work.L[1206]*work.v[565]-work.L[1207]*work.v[566]-work.L[1208]*work.v[567];
  work.v[569] = target[179]-work.L[1209]*work.v[563]-work.L[1210]*work.v[564]-work.L[1211]*work.v[565]-work.L[1212]*work.v[566]-work.L[1213]*work.v[567]-work.L[1214]*work.v[568];
  /* Diagonal scaling. Assume correctness of work.d_inv. */
  for (i = 0; i < 570; i++)
    work.v[i] *= work.d_inv[i];
  /* Back substitution */
  work.v[568] -= work.L[1214]*work.v[569];
  work.v[567] -= work.L[1208]*work.v[568]+work.L[1213]*work.v[569];
  work.v[566] -= work.L[1207]*work.v[568]+work.L[1212]*work.v[569];
  work.v[565] -= work.L[1206]*work.v[568]+work.L[1211]*work.v[569];
  work.v[564] -= work.L[1205]*work.v[568]+work.L[1210]*work.v[569];
  work.v[563] -= work.L[1204]*work.v[568]+work.L[1209]*work.v[569];
  work.v[562] -= work.L[1200]*work.v[565];
  work.v[561] -= work.L[1195]*work.v[562];
  work.v[560] -= work.L[1166]*work.v[561];
  work.v[559] -= work.L[1137]*work.v[560];
  work.v[558] -= work.L[1135]*work.v[559]+work.L[1136]*work.v[560];
  work.v[557] -= work.L[1130]*work.v[558]+work.L[1134]*work.v[559];
  work.v[556] -= work.L[1129]*work.v[558]+work.L[1133]*work.v[559];
  work.v[555] -= work.L[1128]*work.v[558]+work.L[1132]*work.v[559];
  work.v[554] -= work.L[1127]*work.v[558]+work.L[1131]*work.v[559];
  work.v[553] -= work.L[1165]*work.v[561]+work.L[1194]*work.v[562];
  work.v[552] -= work.L[1119]*work.v[553];
  work.v[551] -= work.L[1091]*work.v[552];
  work.v[550] -= work.L[1089]*work.v[551]+work.L[1090]*work.v[552];
  work.v[549] -= work.L[1084]*work.v[550]+work.L[1088]*work.v[551];
  work.v[548] -= work.L[1083]*work.v[550]+work.L[1087]*work.v[551];
  work.v[547] -= work.L[1082]*work.v[550]+work.L[1086]*work.v[551];
  work.v[546] -= work.L[1081]*work.v[550]+work.L[1085]*work.v[551];
  work.v[545] -= work.L[1118]*work.v[553]+work.L[1164]*work.v[561]+work.L[1193]*work.v[562];
  work.v[544] -= work.L[1073]*work.v[545];
  work.v[543] -= work.L[1046]*work.v[544];
  work.v[542] -= work.L[1044]*work.v[543]+work.L[1045]*work.v[544];
  work.v[541] -= work.L[1039]*work.v[542]+work.L[1043]*work.v[543];
  work.v[540] -= work.L[1038]*work.v[542]+work.L[1042]*work.v[543];
  work.v[539] -= work.L[1037]*work.v[542]+work.L[1041]*work.v[543];
  work.v[538] -= work.L[1036]*work.v[542]+work.L[1040]*work.v[543];
  work.v[537] -= work.L[1072]*work.v[545]+work.L[1117]*work.v[553]+work.L[1163]*work.v[561]+work.L[1192]*work.v[562];
  work.v[536] -= work.L[1028]*work.v[537];
  work.v[535] -= work.L[1002]*work.v[536];
  work.v[534] -= work.L[1000]*work.v[535]+work.L[1001]*work.v[536];
  work.v[533] -= work.L[995]*work.v[534]+work.L[999]*work.v[535];
  work.v[532] -= work.L[994]*work.v[534]+work.L[998]*work.v[535];
  work.v[531] -= work.L[993]*work.v[534]+work.L[997]*work.v[535];
  work.v[530] -= work.L[992]*work.v[534]+work.L[996]*work.v[535];
  work.v[529] -= work.L[1027]*work.v[537]+work.L[1071]*work.v[545]+work.L[1116]*work.v[553]+work.L[1162]*work.v[561]+work.L[1191]*work.v[562];
  work.v[528] -= work.L[984]*work.v[529];
  work.v[527] -= work.L[959]*work.v[528];
  work.v[526] -= work.L[957]*work.v[527]+work.L[958]*work.v[528];
  work.v[525] -= work.L[952]*work.v[526]+work.L[956]*work.v[527];
  work.v[524] -= work.L[951]*work.v[526]+work.L[955]*work.v[527];
  work.v[523] -= work.L[950]*work.v[526]+work.L[954]*work.v[527];
  work.v[522] -= work.L[949]*work.v[526]+work.L[953]*work.v[527];
  work.v[521] -= work.L[983]*work.v[529]+work.L[1026]*work.v[537]+work.L[1070]*work.v[545]+work.L[1115]*work.v[553]+work.L[1161]*work.v[561]+work.L[1190]*work.v[562];
  work.v[520] -= work.L[941]*work.v[521];
  work.v[519] -= work.L[917]*work.v[520];
  work.v[518] -= work.L[915]*work.v[519]+work.L[916]*work.v[520];
  work.v[517] -= work.L[910]*work.v[518]+work.L[914]*work.v[519];
  work.v[516] -= work.L[909]*work.v[518]+work.L[913]*work.v[519];
  work.v[515] -= work.L[908]*work.v[518]+work.L[912]*work.v[519];
  work.v[514] -= work.L[907]*work.v[518]+work.L[911]*work.v[519];
  work.v[513] -= work.L[940]*work.v[521]+work.L[982]*work.v[529]+work.L[1025]*work.v[537]+work.L[1069]*work.v[545]+work.L[1114]*work.v[553]+work.L[1160]*work.v[561]+work.L[1189]*work.v[562];
  work.v[512] -= work.L[899]*work.v[513];
  work.v[511] -= work.L[876]*work.v[512];
  work.v[510] -= work.L[874]*work.v[511]+work.L[875]*work.v[512];
  work.v[509] -= work.L[869]*work.v[510]+work.L[873]*work.v[511];
  work.v[508] -= work.L[868]*work.v[510]+work.L[872]*work.v[511];
  work.v[507] -= work.L[867]*work.v[510]+work.L[871]*work.v[511];
  work.v[506] -= work.L[866]*work.v[510]+work.L[870]*work.v[511];
  work.v[505] -= work.L[898]*work.v[513]+work.L[939]*work.v[521]+work.L[981]*work.v[529]+work.L[1024]*work.v[537]+work.L[1068]*work.v[545]+work.L[1113]*work.v[553]+work.L[1159]*work.v[561]+work.L[1188]*work.v[562];
  work.v[504] -= work.L[858]*work.v[505];
  work.v[503] -= work.L[836]*work.v[504];
  work.v[502] -= work.L[834]*work.v[503]+work.L[835]*work.v[504];
  work.v[501] -= work.L[829]*work.v[502]+work.L[833]*work.v[503];
  work.v[500] -= work.L[828]*work.v[502]+work.L[832]*work.v[503];
  work.v[499] -= work.L[827]*work.v[502]+work.L[831]*work.v[503];
  work.v[498] -= work.L[826]*work.v[502]+work.L[830]*work.v[503];
  work.v[497] -= work.L[857]*work.v[505]+work.L[897]*work.v[513]+work.L[938]*work.v[521]+work.L[980]*work.v[529]+work.L[1023]*work.v[537]+work.L[1067]*work.v[545]+work.L[1112]*work.v[553]+work.L[1158]*work.v[561]+work.L[1187]*work.v[562];
  work.v[496] -= work.L[818]*work.v[497];
  work.v[495] -= work.L[797]*work.v[496];
  work.v[494] -= work.L[795]*work.v[495]+work.L[796]*work.v[496];
  work.v[493] -= work.L[790]*work.v[494]+work.L[794]*work.v[495];
  work.v[492] -= work.L[789]*work.v[494]+work.L[793]*work.v[495];
  work.v[491] -= work.L[788]*work.v[494]+work.L[792]*work.v[495];
  work.v[490] -= work.L[787]*work.v[494]+work.L[791]*work.v[495];
  work.v[489] -= work.L[817]*work.v[497]+work.L[856]*work.v[505]+work.L[896]*work.v[513]+work.L[937]*work.v[521]+work.L[979]*work.v[529]+work.L[1022]*work.v[537]+work.L[1066]*work.v[545]+work.L[1111]*work.v[553]+work.L[1157]*work.v[561]+work.L[1186]*work.v[562];
  work.v[488] -= work.L[779]*work.v[489];
  work.v[487] -= work.L[759]*work.v[488];
  work.v[486] -= work.L[757]*work.v[487]+work.L[758]*work.v[488];
  work.v[485] -= work.L[752]*work.v[486]+work.L[756]*work.v[487];
  work.v[484] -= work.L[751]*work.v[486]+work.L[755]*work.v[487];
  work.v[483] -= work.L[750]*work.v[486]+work.L[754]*work.v[487];
  work.v[482] -= work.L[749]*work.v[486]+work.L[753]*work.v[487];
  work.v[481] -= work.L[778]*work.v[489]+work.L[816]*work.v[497]+work.L[855]*work.v[505]+work.L[895]*work.v[513]+work.L[936]*work.v[521]+work.L[978]*work.v[529]+work.L[1021]*work.v[537]+work.L[1065]*work.v[545]+work.L[1110]*work.v[553]+work.L[1156]*work.v[561]+work.L[1185]*work.v[562];
  work.v[480] -= work.L[741]*work.v[481];
  work.v[479] -= work.L[722]*work.v[480];
  work.v[478] -= work.L[720]*work.v[479]+work.L[721]*work.v[480];
  work.v[477] -= work.L[715]*work.v[478]+work.L[719]*work.v[479];
  work.v[476] -= work.L[714]*work.v[478]+work.L[718]*work.v[479];
  work.v[475] -= work.L[713]*work.v[478]+work.L[717]*work.v[479];
  work.v[474] -= work.L[712]*work.v[478]+work.L[716]*work.v[479];
  work.v[473] -= work.L[740]*work.v[481]+work.L[777]*work.v[489]+work.L[815]*work.v[497]+work.L[854]*work.v[505]+work.L[894]*work.v[513]+work.L[935]*work.v[521]+work.L[977]*work.v[529]+work.L[1020]*work.v[537]+work.L[1064]*work.v[545]+work.L[1109]*work.v[553]+work.L[1155]*work.v[561]+work.L[1184]*work.v[562];
  work.v[472] -= work.L[704]*work.v[473];
  work.v[471] -= work.L[686]*work.v[472];
  work.v[470] -= work.L[684]*work.v[471]+work.L[685]*work.v[472];
  work.v[469] -= work.L[679]*work.v[470]+work.L[683]*work.v[471];
  work.v[468] -= work.L[678]*work.v[470]+work.L[682]*work.v[471];
  work.v[467] -= work.L[677]*work.v[470]+work.L[681]*work.v[471];
  work.v[466] -= work.L[676]*work.v[470]+work.L[680]*work.v[471];
  work.v[465] -= work.L[703]*work.v[473]+work.L[739]*work.v[481]+work.L[776]*work.v[489]+work.L[814]*work.v[497]+work.L[853]*work.v[505]+work.L[893]*work.v[513]+work.L[934]*work.v[521]+work.L[976]*work.v[529]+work.L[1019]*work.v[537]+work.L[1063]*work.v[545]+work.L[1108]*work.v[553]+work.L[1154]*work.v[561]+work.L[1183]*work.v[562];
  work.v[464] -= work.L[668]*work.v[465];
  work.v[463] -= work.L[651]*work.v[464];
  work.v[462] -= work.L[649]*work.v[463]+work.L[650]*work.v[464];
  work.v[461] -= work.L[644]*work.v[462]+work.L[648]*work.v[463];
  work.v[460] -= work.L[643]*work.v[462]+work.L[647]*work.v[463];
  work.v[459] -= work.L[642]*work.v[462]+work.L[646]*work.v[463];
  work.v[458] -= work.L[641]*work.v[462]+work.L[645]*work.v[463];
  work.v[457] -= work.L[667]*work.v[465]+work.L[702]*work.v[473]+work.L[738]*work.v[481]+work.L[775]*work.v[489]+work.L[813]*work.v[497]+work.L[852]*work.v[505]+work.L[892]*work.v[513]+work.L[933]*work.v[521]+work.L[975]*work.v[529]+work.L[1018]*work.v[537]+work.L[1062]*work.v[545]+work.L[1107]*work.v[553]+work.L[1153]*work.v[561]+work.L[1182]*work.v[562];
  work.v[456] -= work.L[633]*work.v[457];
  work.v[455] -= work.L[617]*work.v[456];
  work.v[454] -= work.L[615]*work.v[455]+work.L[616]*work.v[456];
  work.v[453] -= work.L[610]*work.v[454]+work.L[614]*work.v[455];
  work.v[452] -= work.L[609]*work.v[454]+work.L[613]*work.v[455];
  work.v[451] -= work.L[608]*work.v[454]+work.L[612]*work.v[455];
  work.v[450] -= work.L[607]*work.v[454]+work.L[611]*work.v[455];
  work.v[449] -= work.L[632]*work.v[457]+work.L[666]*work.v[465]+work.L[701]*work.v[473]+work.L[737]*work.v[481]+work.L[774]*work.v[489]+work.L[812]*work.v[497]+work.L[851]*work.v[505]+work.L[891]*work.v[513]+work.L[932]*work.v[521]+work.L[974]*work.v[529]+work.L[1017]*work.v[537]+work.L[1061]*work.v[545]+work.L[1106]*work.v[553]+work.L[1152]*work.v[561]+work.L[1181]*work.v[562];
  work.v[448] -= work.L[599]*work.v[449];
  work.v[447] -= work.L[584]*work.v[448];
  work.v[446] -= work.L[582]*work.v[447]+work.L[583]*work.v[448];
  work.v[445] -= work.L[577]*work.v[446]+work.L[581]*work.v[447];
  work.v[444] -= work.L[576]*work.v[446]+work.L[580]*work.v[447];
  work.v[443] -= work.L[575]*work.v[446]+work.L[579]*work.v[447];
  work.v[442] -= work.L[574]*work.v[446]+work.L[578]*work.v[447];
  work.v[441] -= work.L[598]*work.v[449]+work.L[631]*work.v[457]+work.L[665]*work.v[465]+work.L[700]*work.v[473]+work.L[736]*work.v[481]+work.L[773]*work.v[489]+work.L[811]*work.v[497]+work.L[850]*work.v[505]+work.L[890]*work.v[513]+work.L[931]*work.v[521]+work.L[973]*work.v[529]+work.L[1016]*work.v[537]+work.L[1060]*work.v[545]+work.L[1105]*work.v[553]+work.L[1151]*work.v[561]+work.L[1180]*work.v[562];
  work.v[440] -= work.L[566]*work.v[441];
  work.v[439] -= work.L[552]*work.v[440];
  work.v[438] -= work.L[550]*work.v[439]+work.L[551]*work.v[440];
  work.v[437] -= work.L[545]*work.v[438]+work.L[549]*work.v[439];
  work.v[436] -= work.L[544]*work.v[438]+work.L[548]*work.v[439];
  work.v[435] -= work.L[543]*work.v[438]+work.L[547]*work.v[439];
  work.v[434] -= work.L[542]*work.v[438]+work.L[546]*work.v[439];
  work.v[433] -= work.L[565]*work.v[441]+work.L[597]*work.v[449]+work.L[630]*work.v[457]+work.L[664]*work.v[465]+work.L[699]*work.v[473]+work.L[735]*work.v[481]+work.L[772]*work.v[489]+work.L[810]*work.v[497]+work.L[849]*work.v[505]+work.L[889]*work.v[513]+work.L[930]*work.v[521]+work.L[972]*work.v[529]+work.L[1015]*work.v[537]+work.L[1059]*work.v[545]+work.L[1104]*work.v[553]+work.L[1150]*work.v[561]+work.L[1179]*work.v[562];
  work.v[432] -= work.L[534]*work.v[433];
  work.v[431] -= work.L[521]*work.v[432];
  work.v[430] -= work.L[519]*work.v[431]+work.L[520]*work.v[432];
  work.v[429] -= work.L[514]*work.v[430]+work.L[518]*work.v[431];
  work.v[428] -= work.L[513]*work.v[430]+work.L[517]*work.v[431];
  work.v[427] -= work.L[512]*work.v[430]+work.L[516]*work.v[431];
  work.v[426] -= work.L[511]*work.v[430]+work.L[515]*work.v[431];
  work.v[425] -= work.L[533]*work.v[433]+work.L[564]*work.v[441]+work.L[596]*work.v[449]+work.L[629]*work.v[457]+work.L[663]*work.v[465]+work.L[698]*work.v[473]+work.L[734]*work.v[481]+work.L[771]*work.v[489]+work.L[809]*work.v[497]+work.L[848]*work.v[505]+work.L[888]*work.v[513]+work.L[929]*work.v[521]+work.L[971]*work.v[529]+work.L[1014]*work.v[537]+work.L[1058]*work.v[545]+work.L[1103]*work.v[553]+work.L[1149]*work.v[561]+work.L[1178]*work.v[562];
  work.v[424] -= work.L[503]*work.v[425];
  work.v[423] -= work.L[491]*work.v[424];
  work.v[422] -= work.L[489]*work.v[423]+work.L[490]*work.v[424];
  work.v[421] -= work.L[484]*work.v[422]+work.L[488]*work.v[423];
  work.v[420] -= work.L[483]*work.v[422]+work.L[487]*work.v[423];
  work.v[419] -= work.L[482]*work.v[422]+work.L[486]*work.v[423];
  work.v[418] -= work.L[481]*work.v[422]+work.L[485]*work.v[423];
  work.v[417] -= work.L[502]*work.v[425]+work.L[532]*work.v[433]+work.L[563]*work.v[441]+work.L[595]*work.v[449]+work.L[628]*work.v[457]+work.L[662]*work.v[465]+work.L[697]*work.v[473]+work.L[733]*work.v[481]+work.L[770]*work.v[489]+work.L[808]*work.v[497]+work.L[847]*work.v[505]+work.L[887]*work.v[513]+work.L[928]*work.v[521]+work.L[970]*work.v[529]+work.L[1013]*work.v[537]+work.L[1057]*work.v[545]+work.L[1102]*work.v[553]+work.L[1148]*work.v[561]+work.L[1177]*work.v[562];
  work.v[416] -= work.L[473]*work.v[417];
  work.v[415] -= work.L[462]*work.v[416];
  work.v[414] -= work.L[460]*work.v[415]+work.L[461]*work.v[416];
  work.v[413] -= work.L[455]*work.v[414]+work.L[459]*work.v[415];
  work.v[412] -= work.L[454]*work.v[414]+work.L[458]*work.v[415];
  work.v[411] -= work.L[453]*work.v[414]+work.L[457]*work.v[415];
  work.v[410] -= work.L[452]*work.v[414]+work.L[456]*work.v[415];
  work.v[409] -= work.L[472]*work.v[417]+work.L[501]*work.v[425]+work.L[531]*work.v[433]+work.L[562]*work.v[441]+work.L[594]*work.v[449]+work.L[627]*work.v[457]+work.L[661]*work.v[465]+work.L[696]*work.v[473]+work.L[732]*work.v[481]+work.L[769]*work.v[489]+work.L[807]*work.v[497]+work.L[846]*work.v[505]+work.L[886]*work.v[513]+work.L[927]*work.v[521]+work.L[969]*work.v[529]+work.L[1012]*work.v[537]+work.L[1056]*work.v[545]+work.L[1101]*work.v[553]+work.L[1147]*work.v[561]+work.L[1176]*work.v[562];
  work.v[408] -= work.L[444]*work.v[409];
  work.v[407] -= work.L[434]*work.v[408];
  work.v[406] -= work.L[432]*work.v[407]+work.L[433]*work.v[408];
  work.v[405] -= work.L[427]*work.v[406]+work.L[431]*work.v[407];
  work.v[404] -= work.L[426]*work.v[406]+work.L[430]*work.v[407];
  work.v[403] -= work.L[425]*work.v[406]+work.L[429]*work.v[407];
  work.v[402] -= work.L[424]*work.v[406]+work.L[428]*work.v[407];
  work.v[401] -= work.L[443]*work.v[409]+work.L[471]*work.v[417]+work.L[500]*work.v[425]+work.L[530]*work.v[433]+work.L[561]*work.v[441]+work.L[593]*work.v[449]+work.L[626]*work.v[457]+work.L[660]*work.v[465]+work.L[695]*work.v[473]+work.L[731]*work.v[481]+work.L[768]*work.v[489]+work.L[806]*work.v[497]+work.L[845]*work.v[505]+work.L[885]*work.v[513]+work.L[926]*work.v[521]+work.L[968]*work.v[529]+work.L[1011]*work.v[537]+work.L[1055]*work.v[545]+work.L[1100]*work.v[553]+work.L[1146]*work.v[561]+work.L[1175]*work.v[562];
  work.v[400] -= work.L[416]*work.v[401];
  work.v[399] -= work.L[407]*work.v[400];
  work.v[398] -= work.L[405]*work.v[399]+work.L[406]*work.v[400];
  work.v[397] -= work.L[400]*work.v[398]+work.L[404]*work.v[399];
  work.v[396] -= work.L[399]*work.v[398]+work.L[403]*work.v[399];
  work.v[395] -= work.L[398]*work.v[398]+work.L[402]*work.v[399];
  work.v[394] -= work.L[397]*work.v[398]+work.L[401]*work.v[399];
  work.v[393] -= work.L[415]*work.v[401]+work.L[442]*work.v[409]+work.L[470]*work.v[417]+work.L[499]*work.v[425]+work.L[529]*work.v[433]+work.L[560]*work.v[441]+work.L[592]*work.v[449]+work.L[625]*work.v[457]+work.L[659]*work.v[465]+work.L[694]*work.v[473]+work.L[730]*work.v[481]+work.L[767]*work.v[489]+work.L[805]*work.v[497]+work.L[844]*work.v[505]+work.L[884]*work.v[513]+work.L[925]*work.v[521]+work.L[967]*work.v[529]+work.L[1010]*work.v[537]+work.L[1054]*work.v[545]+work.L[1099]*work.v[553]+work.L[1145]*work.v[561]+work.L[1174]*work.v[562];
  work.v[392] -= work.L[389]*work.v[393];
  work.v[391] -= work.L[381]*work.v[392];
  work.v[390] -= work.L[379]*work.v[391]+work.L[380]*work.v[392];
  work.v[389] -= work.L[374]*work.v[390]+work.L[378]*work.v[391];
  work.v[388] -= work.L[373]*work.v[390]+work.L[377]*work.v[391];
  work.v[387] -= work.L[372]*work.v[390]+work.L[376]*work.v[391];
  work.v[386] -= work.L[371]*work.v[390]+work.L[375]*work.v[391];
  work.v[385] -= work.L[388]*work.v[393]+work.L[414]*work.v[401]+work.L[441]*work.v[409]+work.L[469]*work.v[417]+work.L[498]*work.v[425]+work.L[528]*work.v[433]+work.L[559]*work.v[441]+work.L[591]*work.v[449]+work.L[624]*work.v[457]+work.L[658]*work.v[465]+work.L[693]*work.v[473]+work.L[729]*work.v[481]+work.L[766]*work.v[489]+work.L[804]*work.v[497]+work.L[843]*work.v[505]+work.L[883]*work.v[513]+work.L[924]*work.v[521]+work.L[966]*work.v[529]+work.L[1009]*work.v[537]+work.L[1053]*work.v[545]+work.L[1098]*work.v[553]+work.L[1144]*work.v[561]+work.L[1173]*work.v[562];
  work.v[384] -= work.L[363]*work.v[385];
  work.v[383] -= work.L[356]*work.v[384];
  work.v[382] -= work.L[354]*work.v[383]+work.L[355]*work.v[384];
  work.v[381] -= work.L[349]*work.v[382]+work.L[353]*work.v[383];
  work.v[380] -= work.L[348]*work.v[382]+work.L[352]*work.v[383];
  work.v[379] -= work.L[347]*work.v[382]+work.L[351]*work.v[383];
  work.v[378] -= work.L[346]*work.v[382]+work.L[350]*work.v[383];
  work.v[377] -= work.L[362]*work.v[385]+work.L[387]*work.v[393]+work.L[413]*work.v[401]+work.L[440]*work.v[409]+work.L[468]*work.v[417]+work.L[497]*work.v[425]+work.L[527]*work.v[433]+work.L[558]*work.v[441]+work.L[590]*work.v[449]+work.L[623]*work.v[457]+work.L[657]*work.v[465]+work.L[692]*work.v[473]+work.L[728]*work.v[481]+work.L[765]*work.v[489]+work.L[803]*work.v[497]+work.L[842]*work.v[505]+work.L[882]*work.v[513]+work.L[923]*work.v[521]+work.L[965]*work.v[529]+work.L[1008]*work.v[537]+work.L[1052]*work.v[545]+work.L[1097]*work.v[553]+work.L[1143]*work.v[561]+work.L[1172]*work.v[562];
  work.v[376] -= work.L[338]*work.v[377];
  work.v[375] -= work.L[332]*work.v[376];
  work.v[374] -= work.L[330]*work.v[375]+work.L[331]*work.v[376];
  work.v[373] -= work.L[325]*work.v[374]+work.L[329]*work.v[375];
  work.v[372] -= work.L[324]*work.v[374]+work.L[328]*work.v[375];
  work.v[371] -= work.L[323]*work.v[374]+work.L[327]*work.v[375];
  work.v[370] -= work.L[322]*work.v[374]+work.L[326]*work.v[375];
  work.v[369] -= work.L[337]*work.v[377]+work.L[361]*work.v[385]+work.L[386]*work.v[393]+work.L[412]*work.v[401]+work.L[439]*work.v[409]+work.L[467]*work.v[417]+work.L[496]*work.v[425]+work.L[526]*work.v[433]+work.L[557]*work.v[441]+work.L[589]*work.v[449]+work.L[622]*work.v[457]+work.L[656]*work.v[465]+work.L[691]*work.v[473]+work.L[727]*work.v[481]+work.L[764]*work.v[489]+work.L[802]*work.v[497]+work.L[841]*work.v[505]+work.L[881]*work.v[513]+work.L[922]*work.v[521]+work.L[964]*work.v[529]+work.L[1007]*work.v[537]+work.L[1051]*work.v[545]+work.L[1096]*work.v[553]+work.L[1142]*work.v[561]+work.L[1171]*work.v[562];
  work.v[368] -= work.L[314]*work.v[369];
  work.v[367] -= work.L[309]*work.v[368];
  work.v[366] -= work.L[307]*work.v[367]+work.L[308]*work.v[368];
  work.v[365] -= work.L[302]*work.v[366]+work.L[306]*work.v[367];
  work.v[364] -= work.L[301]*work.v[366]+work.L[305]*work.v[367];
  work.v[363] -= work.L[300]*work.v[366]+work.L[304]*work.v[367];
  work.v[362] -= work.L[299]*work.v[366]+work.L[303]*work.v[367];
  work.v[361] -= work.L[313]*work.v[369]+work.L[336]*work.v[377]+work.L[360]*work.v[385]+work.L[385]*work.v[393]+work.L[411]*work.v[401]+work.L[438]*work.v[409]+work.L[466]*work.v[417]+work.L[495]*work.v[425]+work.L[525]*work.v[433]+work.L[556]*work.v[441]+work.L[588]*work.v[449]+work.L[621]*work.v[457]+work.L[655]*work.v[465]+work.L[690]*work.v[473]+work.L[726]*work.v[481]+work.L[763]*work.v[489]+work.L[801]*work.v[497]+work.L[840]*work.v[505]+work.L[880]*work.v[513]+work.L[921]*work.v[521]+work.L[963]*work.v[529]+work.L[1006]*work.v[537]+work.L[1050]*work.v[545]+work.L[1095]*work.v[553]+work.L[1141]*work.v[561]+work.L[1170]*work.v[562];
  work.v[360] -= work.L[291]*work.v[361];
  work.v[359] -= work.L[287]*work.v[360];
  work.v[358] -= work.L[285]*work.v[359]+work.L[286]*work.v[360];
  work.v[357] -= work.L[280]*work.v[358]+work.L[284]*work.v[359];
  work.v[356] -= work.L[279]*work.v[358]+work.L[283]*work.v[359];
  work.v[355] -= work.L[278]*work.v[358]+work.L[282]*work.v[359];
  work.v[354] -= work.L[277]*work.v[358]+work.L[281]*work.v[359];
  work.v[353] -= work.L[290]*work.v[361]+work.L[312]*work.v[369]+work.L[335]*work.v[377]+work.L[359]*work.v[385]+work.L[384]*work.v[393]+work.L[410]*work.v[401]+work.L[437]*work.v[409]+work.L[465]*work.v[417]+work.L[494]*work.v[425]+work.L[524]*work.v[433]+work.L[555]*work.v[441]+work.L[587]*work.v[449]+work.L[620]*work.v[457]+work.L[654]*work.v[465]+work.L[689]*work.v[473]+work.L[725]*work.v[481]+work.L[762]*work.v[489]+work.L[800]*work.v[497]+work.L[839]*work.v[505]+work.L[879]*work.v[513]+work.L[920]*work.v[521]+work.L[962]*work.v[529]+work.L[1005]*work.v[537]+work.L[1049]*work.v[545]+work.L[1094]*work.v[553]+work.L[1140]*work.v[561]+work.L[1169]*work.v[562];
  work.v[352] -= work.L[269]*work.v[353];
  work.v[351] -= work.L[266]*work.v[352];
  work.v[350] -= work.L[264]*work.v[351]+work.L[265]*work.v[352];
  work.v[349] -= work.L[259]*work.v[350]+work.L[263]*work.v[351];
  work.v[348] -= work.L[258]*work.v[350]+work.L[262]*work.v[351];
  work.v[347] -= work.L[257]*work.v[350]+work.L[261]*work.v[351];
  work.v[346] -= work.L[256]*work.v[350]+work.L[260]*work.v[351];
  work.v[345] -= work.L[268]*work.v[353]+work.L[289]*work.v[361]+work.L[311]*work.v[369]+work.L[334]*work.v[377]+work.L[358]*work.v[385]+work.L[383]*work.v[393]+work.L[409]*work.v[401]+work.L[436]*work.v[409]+work.L[464]*work.v[417]+work.L[493]*work.v[425]+work.L[523]*work.v[433]+work.L[554]*work.v[441]+work.L[586]*work.v[449]+work.L[619]*work.v[457]+work.L[653]*work.v[465]+work.L[688]*work.v[473]+work.L[724]*work.v[481]+work.L[761]*work.v[489]+work.L[799]*work.v[497]+work.L[838]*work.v[505]+work.L[878]*work.v[513]+work.L[919]*work.v[521]+work.L[961]*work.v[529]+work.L[1004]*work.v[537]+work.L[1048]*work.v[545]+work.L[1093]*work.v[553]+work.L[1139]*work.v[561]+work.L[1168]*work.v[562];
  work.v[344] -= work.L[248]*work.v[345];
  work.v[343] -= work.L[246]*work.v[344];
  work.v[342] -= work.L[244]*work.v[343]+work.L[245]*work.v[344];
  work.v[341] -= work.L[239]*work.v[342]+work.L[243]*work.v[343];
  work.v[340] -= work.L[238]*work.v[342]+work.L[242]*work.v[343];
  work.v[339] -= work.L[237]*work.v[342]+work.L[241]*work.v[343];
  work.v[338] -= work.L[236]*work.v[342]+work.L[240]*work.v[343];
  work.v[337] -= work.L[247]*work.v[345]+work.L[267]*work.v[353]+work.L[288]*work.v[361]+work.L[310]*work.v[369]+work.L[333]*work.v[377]+work.L[357]*work.v[385]+work.L[382]*work.v[393]+work.L[408]*work.v[401]+work.L[435]*work.v[409]+work.L[463]*work.v[417]+work.L[492]*work.v[425]+work.L[522]*work.v[433]+work.L[553]*work.v[441]+work.L[585]*work.v[449]+work.L[618]*work.v[457]+work.L[652]*work.v[465]+work.L[687]*work.v[473]+work.L[723]*work.v[481]+work.L[760]*work.v[489]+work.L[798]*work.v[497]+work.L[837]*work.v[505]+work.L[877]*work.v[513]+work.L[918]*work.v[521]+work.L[960]*work.v[529]+work.L[1003]*work.v[537]+work.L[1047]*work.v[545]+work.L[1092]*work.v[553]+work.L[1138]*work.v[561]+work.L[1167]*work.v[562];
  work.v[336] -= work.L[228]*work.v[337];
  work.v[335] -= work.L[227]*work.v[336];
  work.v[334] -= work.L[225]*work.v[335]+work.L[226]*work.v[336];
  work.v[333] -= work.L[220]*work.v[334]+work.L[224]*work.v[335];
  work.v[332] -= work.L[219]*work.v[334]+work.L[223]*work.v[335];
  work.v[331] -= work.L[218]*work.v[334]+work.L[222]*work.v[335];
  work.v[330] -= work.L[217]*work.v[334]+work.L[221]*work.v[335];
  work.v[329] -= work.L[1201]*work.v[566];
  work.v[328] -= work.L[1124]*work.v[556];
  work.v[327] -= work.L[1078]*work.v[548];
  work.v[326] -= work.L[1033]*work.v[540];
  work.v[325] -= work.L[989]*work.v[532];
  work.v[324] -= work.L[946]*work.v[524];
  work.v[323] -= work.L[904]*work.v[516];
  work.v[322] -= work.L[863]*work.v[508];
  work.v[321] -= work.L[823]*work.v[500];
  work.v[320] -= work.L[784]*work.v[492];
  work.v[319] -= work.L[746]*work.v[484];
  work.v[318] -= work.L[709]*work.v[476];
  work.v[317] -= work.L[673]*work.v[468];
  work.v[316] -= work.L[638]*work.v[460];
  work.v[315] -= work.L[604]*work.v[452];
  work.v[314] -= work.L[571]*work.v[444];
  work.v[313] -= work.L[539]*work.v[436];
  work.v[312] -= work.L[508]*work.v[428];
  work.v[311] -= work.L[478]*work.v[420];
  work.v[310] -= work.L[449]*work.v[412];
  work.v[309] -= work.L[421]*work.v[404];
  work.v[308] -= work.L[394]*work.v[396];
  work.v[307] -= work.L[368]*work.v[388];
  work.v[306] -= work.L[343]*work.v[380];
  work.v[305] -= work.L[319]*work.v[372];
  work.v[304] -= work.L[296]*work.v[364];
  work.v[303] -= work.L[274]*work.v[356];
  work.v[302] -= work.L[253]*work.v[348];
  work.v[301] -= work.L[233]*work.v[340];
  work.v[300] -= work.L[214]*work.v[332];
  work.v[299] -= work.L[1203]*work.v[568];
  work.v[298] -= work.L[209]*work.v[299]+work.L[1202]*work.v[568];
  work.v[297] -= work.L[206]*work.v[298]+work.L[208]*work.v[299];
  work.v[296] -= work.L[1126]*work.v[558];
  work.v[295] -= work.L[204]*work.v[296]+work.L[1125]*work.v[558];
  work.v[294] -= work.L[201]*work.v[295]+work.L[203]*work.v[296];
  work.v[293] -= work.L[1080]*work.v[550];
  work.v[292] -= work.L[199]*work.v[293]+work.L[1079]*work.v[550];
  work.v[291] -= work.L[196]*work.v[292]+work.L[198]*work.v[293];
  work.v[290] -= work.L[1035]*work.v[542];
  work.v[289] -= work.L[194]*work.v[290]+work.L[1034]*work.v[542];
  work.v[288] -= work.L[191]*work.v[289]+work.L[193]*work.v[290];
  work.v[287] -= work.L[991]*work.v[534];
  work.v[286] -= work.L[189]*work.v[287]+work.L[990]*work.v[534];
  work.v[285] -= work.L[186]*work.v[286]+work.L[188]*work.v[287];
  work.v[284] -= work.L[948]*work.v[526];
  work.v[283] -= work.L[184]*work.v[284]+work.L[947]*work.v[526];
  work.v[282] -= work.L[181]*work.v[283]+work.L[183]*work.v[284];
  work.v[281] -= work.L[906]*work.v[518];
  work.v[280] -= work.L[179]*work.v[281]+work.L[905]*work.v[518];
  work.v[279] -= work.L[176]*work.v[280]+work.L[178]*work.v[281];
  work.v[278] -= work.L[865]*work.v[510];
  work.v[277] -= work.L[174]*work.v[278]+work.L[864]*work.v[510];
  work.v[276] -= work.L[171]*work.v[277]+work.L[173]*work.v[278];
  work.v[275] -= work.L[825]*work.v[502];
  work.v[274] -= work.L[169]*work.v[275]+work.L[824]*work.v[502];
  work.v[273] -= work.L[166]*work.v[274]+work.L[168]*work.v[275];
  work.v[272] -= work.L[786]*work.v[494];
  work.v[271] -= work.L[164]*work.v[272]+work.L[785]*work.v[494];
  work.v[270] -= work.L[161]*work.v[271]+work.L[163]*work.v[272];
  work.v[269] -= work.L[748]*work.v[486];
  work.v[268] -= work.L[159]*work.v[269]+work.L[747]*work.v[486];
  work.v[267] -= work.L[156]*work.v[268]+work.L[158]*work.v[269];
  work.v[266] -= work.L[711]*work.v[478];
  work.v[265] -= work.L[154]*work.v[266]+work.L[710]*work.v[478];
  work.v[264] -= work.L[151]*work.v[265]+work.L[153]*work.v[266];
  work.v[263] -= work.L[675]*work.v[470];
  work.v[262] -= work.L[149]*work.v[263]+work.L[674]*work.v[470];
  work.v[261] -= work.L[146]*work.v[262]+work.L[148]*work.v[263];
  work.v[260] -= work.L[640]*work.v[462];
  work.v[259] -= work.L[144]*work.v[260]+work.L[639]*work.v[462];
  work.v[258] -= work.L[141]*work.v[259]+work.L[143]*work.v[260];
  work.v[257] -= work.L[606]*work.v[454];
  work.v[256] -= work.L[139]*work.v[257]+work.L[605]*work.v[454];
  work.v[255] -= work.L[136]*work.v[256]+work.L[138]*work.v[257];
  work.v[254] -= work.L[573]*work.v[446];
  work.v[253] -= work.L[134]*work.v[254]+work.L[572]*work.v[446];
  work.v[252] -= work.L[131]*work.v[253]+work.L[133]*work.v[254];
  work.v[251] -= work.L[541]*work.v[438];
  work.v[250] -= work.L[129]*work.v[251]+work.L[540]*work.v[438];
  work.v[249] -= work.L[126]*work.v[250]+work.L[128]*work.v[251];
  work.v[248] -= work.L[510]*work.v[430];
  work.v[247] -= work.L[124]*work.v[248]+work.L[509]*work.v[430];
  work.v[246] -= work.L[121]*work.v[247]+work.L[123]*work.v[248];
  work.v[245] -= work.L[480]*work.v[422];
  work.v[244] -= work.L[119]*work.v[245]+work.L[479]*work.v[422];
  work.v[243] -= work.L[116]*work.v[244]+work.L[118]*work.v[245];
  work.v[242] -= work.L[451]*work.v[414];
  work.v[241] -= work.L[114]*work.v[242]+work.L[450]*work.v[414];
  work.v[240] -= work.L[111]*work.v[241]+work.L[113]*work.v[242];
  work.v[239] -= work.L[423]*work.v[406];
  work.v[238] -= work.L[109]*work.v[239]+work.L[422]*work.v[406];
  work.v[237] -= work.L[106]*work.v[238]+work.L[108]*work.v[239];
  work.v[236] -= work.L[396]*work.v[398];
  work.v[235] -= work.L[104]*work.v[236]+work.L[395]*work.v[398];
  work.v[234] -= work.L[101]*work.v[235]+work.L[103]*work.v[236];
  work.v[233] -= work.L[370]*work.v[390];
  work.v[232] -= work.L[99]*work.v[233]+work.L[369]*work.v[390];
  work.v[231] -= work.L[96]*work.v[232]+work.L[98]*work.v[233];
  work.v[230] -= work.L[345]*work.v[382];
  work.v[229] -= work.L[94]*work.v[230]+work.L[344]*work.v[382];
  work.v[228] -= work.L[91]*work.v[229]+work.L[93]*work.v[230];
  work.v[227] -= work.L[321]*work.v[374];
  work.v[226] -= work.L[89]*work.v[227]+work.L[320]*work.v[374];
  work.v[225] -= work.L[86]*work.v[226]+work.L[88]*work.v[227];
  work.v[224] -= work.L[298]*work.v[366];
  work.v[223] -= work.L[84]*work.v[224]+work.L[297]*work.v[366];
  work.v[222] -= work.L[81]*work.v[223]+work.L[83]*work.v[224];
  work.v[221] -= work.L[276]*work.v[358];
  work.v[220] -= work.L[79]*work.v[221]+work.L[275]*work.v[358];
  work.v[219] -= work.L[76]*work.v[220]+work.L[78]*work.v[221];
  work.v[218] -= work.L[255]*work.v[350];
  work.v[217] -= work.L[74]*work.v[218]+work.L[254]*work.v[350];
  work.v[216] -= work.L[71]*work.v[217]+work.L[73]*work.v[218];
  work.v[215] -= work.L[235]*work.v[342];
  work.v[214] -= work.L[69]*work.v[215]+work.L[234]*work.v[342];
  work.v[213] -= work.L[66]*work.v[214]+work.L[68]*work.v[215];
  work.v[212] -= work.L[216]*work.v[334];
  work.v[211] -= work.L[64]*work.v[212]+work.L[215]*work.v[334];
  work.v[210] -= work.L[61]*work.v[211]+work.L[63]*work.v[212];
  work.v[209] -= work.L[1198]*work.v[563];
  work.v[208] -= work.L[59]*work.v[209]+work.L[1197]*work.v[563];
  work.v[207] -= work.L[1122]*work.v[554];
  work.v[206] -= work.L[57]*work.v[207]+work.L[1121]*work.v[554];
  work.v[205] -= work.L[1076]*work.v[546];
  work.v[204] -= work.L[55]*work.v[205]+work.L[1075]*work.v[546];
  work.v[203] -= work.L[1031]*work.v[538];
  work.v[202] -= work.L[53]*work.v[203]+work.L[1030]*work.v[538];
  work.v[201] -= work.L[987]*work.v[530];
  work.v[200] -= work.L[51]*work.v[201]+work.L[986]*work.v[530];
  work.v[199] -= work.L[944]*work.v[522];
  work.v[198] -= work.L[49]*work.v[199]+work.L[943]*work.v[522];
  work.v[197] -= work.L[902]*work.v[514];
  work.v[196] -= work.L[47]*work.v[197]+work.L[901]*work.v[514];
  work.v[195] -= work.L[861]*work.v[506];
  work.v[194] -= work.L[45]*work.v[195]+work.L[860]*work.v[506];
  work.v[193] -= work.L[821]*work.v[498];
  work.v[192] -= work.L[43]*work.v[193]+work.L[820]*work.v[498];
  work.v[191] -= work.L[782]*work.v[490];
  work.v[190] -= work.L[41]*work.v[191]+work.L[781]*work.v[490];
  work.v[189] -= work.L[744]*work.v[482];
  work.v[188] -= work.L[39]*work.v[189]+work.L[743]*work.v[482];
  work.v[187] -= work.L[707]*work.v[474];
  work.v[186] -= work.L[37]*work.v[187]+work.L[706]*work.v[474];
  work.v[185] -= work.L[671]*work.v[466];
  work.v[184] -= work.L[35]*work.v[185]+work.L[670]*work.v[466];
  work.v[183] -= work.L[636]*work.v[458];
  work.v[182] -= work.L[33]*work.v[183]+work.L[635]*work.v[458];
  work.v[181] -= work.L[602]*work.v[450];
  work.v[180] -= work.L[31]*work.v[181]+work.L[601]*work.v[450];
  work.v[179] -= work.L[569]*work.v[442];
  work.v[178] -= work.L[29]*work.v[179]+work.L[568]*work.v[442];
  work.v[177] -= work.L[537]*work.v[434];
  work.v[176] -= work.L[27]*work.v[177]+work.L[536]*work.v[434];
  work.v[175] -= work.L[506]*work.v[426];
  work.v[174] -= work.L[25]*work.v[175]+work.L[505]*work.v[426];
  work.v[173] -= work.L[476]*work.v[418];
  work.v[172] -= work.L[23]*work.v[173]+work.L[475]*work.v[418];
  work.v[171] -= work.L[447]*work.v[410];
  work.v[170] -= work.L[21]*work.v[171]+work.L[446]*work.v[410];
  work.v[169] -= work.L[419]*work.v[402];
  work.v[168] -= work.L[19]*work.v[169]+work.L[418]*work.v[402];
  work.v[167] -= work.L[392]*work.v[394];
  work.v[166] -= work.L[17]*work.v[167]+work.L[391]*work.v[394];
  work.v[165] -= work.L[366]*work.v[386];
  work.v[164] -= work.L[15]*work.v[165]+work.L[365]*work.v[386];
  work.v[163] -= work.L[341]*work.v[378];
  work.v[162] -= work.L[13]*work.v[163]+work.L[340]*work.v[378];
  work.v[161] -= work.L[317]*work.v[370];
  work.v[160] -= work.L[11]*work.v[161]+work.L[316]*work.v[370];
  work.v[159] -= work.L[294]*work.v[362];
  work.v[158] -= work.L[9]*work.v[159]+work.L[293]*work.v[362];
  work.v[157] -= work.L[272]*work.v[354];
  work.v[156] -= work.L[7]*work.v[157]+work.L[271]*work.v[354];
  work.v[155] -= work.L[251]*work.v[346];
  work.v[154] -= work.L[5]*work.v[155]+work.L[250]*work.v[346];
  work.v[153] -= work.L[231]*work.v[338];
  work.v[152] -= work.L[3]*work.v[153]+work.L[230]*work.v[338];
  work.v[151] -= work.L[212]*work.v[330];
  work.v[150] -= work.L[1]*work.v[151]+work.L[211]*work.v[330];
  work.v[149] -= work.L[1199]*work.v[564];
  work.v[148] -= work.L[1123]*work.v[555];
  work.v[147] -= work.L[1077]*work.v[547];
  work.v[146] -= work.L[1032]*work.v[539];
  work.v[145] -= work.L[988]*work.v[531];
  work.v[144] -= work.L[945]*work.v[523];
  work.v[143] -= work.L[903]*work.v[515];
  work.v[142] -= work.L[862]*work.v[507];
  work.v[141] -= work.L[822]*work.v[499];
  work.v[140] -= work.L[783]*work.v[491];
  work.v[139] -= work.L[745]*work.v[483];
  work.v[138] -= work.L[708]*work.v[475];
  work.v[137] -= work.L[672]*work.v[467];
  work.v[136] -= work.L[637]*work.v[459];
  work.v[135] -= work.L[603]*work.v[451];
  work.v[134] -= work.L[570]*work.v[443];
  work.v[133] -= work.L[538]*work.v[435];
  work.v[132] -= work.L[507]*work.v[427];
  work.v[131] -= work.L[477]*work.v[419];
  work.v[130] -= work.L[448]*work.v[411];
  work.v[129] -= work.L[420]*work.v[403];
  work.v[128] -= work.L[393]*work.v[395];
  work.v[127] -= work.L[367]*work.v[387];
  work.v[126] -= work.L[342]*work.v[379];
  work.v[125] -= work.L[318]*work.v[371];
  work.v[124] -= work.L[295]*work.v[363];
  work.v[123] -= work.L[273]*work.v[355];
  work.v[122] -= work.L[252]*work.v[347];
  work.v[121] -= work.L[232]*work.v[339];
  work.v[120] -= work.L[213]*work.v[331];
  work.v[119] -= work.L[207]*work.v[299];
  work.v[118] -= work.L[202]*work.v[296];
  work.v[117] -= work.L[197]*work.v[293];
  work.v[116] -= work.L[192]*work.v[290];
  work.v[115] -= work.L[187]*work.v[287];
  work.v[114] -= work.L[182]*work.v[284];
  work.v[113] -= work.L[177]*work.v[281];
  work.v[112] -= work.L[172]*work.v[278];
  work.v[111] -= work.L[167]*work.v[275];
  work.v[110] -= work.L[162]*work.v[272];
  work.v[109] -= work.L[157]*work.v[269];
  work.v[108] -= work.L[152]*work.v[266];
  work.v[107] -= work.L[147]*work.v[263];
  work.v[106] -= work.L[142]*work.v[260];
  work.v[105] -= work.L[137]*work.v[257];
  work.v[104] -= work.L[132]*work.v[254];
  work.v[103] -= work.L[127]*work.v[251];
  work.v[102] -= work.L[122]*work.v[248];
  work.v[101] -= work.L[117]*work.v[245];
  work.v[100] -= work.L[112]*work.v[242];
  work.v[99] -= work.L[107]*work.v[239];
  work.v[98] -= work.L[102]*work.v[236];
  work.v[97] -= work.L[97]*work.v[233];
  work.v[96] -= work.L[92]*work.v[230];
  work.v[95] -= work.L[87]*work.v[227];
  work.v[94] -= work.L[82]*work.v[224];
  work.v[93] -= work.L[77]*work.v[221];
  work.v[92] -= work.L[72]*work.v[218];
  work.v[91] -= work.L[67]*work.v[215];
  work.v[90] -= work.L[62]*work.v[212];
  work.v[89] -= work.L[205]*work.v[298];
  work.v[88] -= work.L[200]*work.v[295];
  work.v[87] -= work.L[195]*work.v[292];
  work.v[86] -= work.L[190]*work.v[289];
  work.v[85] -= work.L[185]*work.v[286];
  work.v[84] -= work.L[180]*work.v[283];
  work.v[83] -= work.L[175]*work.v[280];
  work.v[82] -= work.L[170]*work.v[277];
  work.v[81] -= work.L[165]*work.v[274];
  work.v[80] -= work.L[160]*work.v[271];
  work.v[79] -= work.L[155]*work.v[268];
  work.v[78] -= work.L[150]*work.v[265];
  work.v[77] -= work.L[145]*work.v[262];
  work.v[76] -= work.L[140]*work.v[259];
  work.v[75] -= work.L[135]*work.v[256];
  work.v[74] -= work.L[130]*work.v[253];
  work.v[73] -= work.L[125]*work.v[250];
  work.v[72] -= work.L[120]*work.v[247];
  work.v[71] -= work.L[115]*work.v[244];
  work.v[70] -= work.L[110]*work.v[241];
  work.v[69] -= work.L[105]*work.v[238];
  work.v[68] -= work.L[100]*work.v[235];
  work.v[67] -= work.L[95]*work.v[232];
  work.v[66] -= work.L[90]*work.v[229];
  work.v[65] -= work.L[85]*work.v[226];
  work.v[64] -= work.L[80]*work.v[223];
  work.v[63] -= work.L[75]*work.v[220];
  work.v[62] -= work.L[70]*work.v[217];
  work.v[61] -= work.L[65]*work.v[214];
  work.v[60] -= work.L[60]*work.v[211];
  work.v[59] -= work.L[58]*work.v[209];
  work.v[58] -= work.L[56]*work.v[207];
  work.v[57] -= work.L[54]*work.v[205];
  work.v[56] -= work.L[52]*work.v[203];
  work.v[55] -= work.L[50]*work.v[201];
  work.v[54] -= work.L[48]*work.v[199];
  work.v[53] -= work.L[46]*work.v[197];
  work.v[52] -= work.L[44]*work.v[195];
  work.v[51] -= work.L[42]*work.v[193];
  work.v[50] -= work.L[40]*work.v[191];
  work.v[49] -= work.L[38]*work.v[189];
  work.v[48] -= work.L[36]*work.v[187];
  work.v[47] -= work.L[34]*work.v[185];
  work.v[46] -= work.L[32]*work.v[183];
  work.v[45] -= work.L[30]*work.v[181];
  work.v[44] -= work.L[28]*work.v[179];
  work.v[43] -= work.L[26]*work.v[177];
  work.v[42] -= work.L[24]*work.v[175];
  work.v[41] -= work.L[22]*work.v[173];
  work.v[40] -= work.L[20]*work.v[171];
  work.v[39] -= work.L[18]*work.v[169];
  work.v[38] -= work.L[16]*work.v[167];
  work.v[37] -= work.L[14]*work.v[165];
  work.v[36] -= work.L[12]*work.v[163];
  work.v[35] -= work.L[10]*work.v[161];
  work.v[34] -= work.L[8]*work.v[159];
  work.v[33] -= work.L[6]*work.v[157];
  work.v[32] -= work.L[4]*work.v[155];
  work.v[31] -= work.L[2]*work.v[153];
  work.v[30] -= work.L[0]*work.v[151];
  work.v[29] -= work.L[1196]*work.v[563];
  work.v[28] -= work.L[1120]*work.v[554];
  work.v[27] -= work.L[1074]*work.v[546];
  work.v[26] -= work.L[1029]*work.v[538];
  work.v[25] -= work.L[985]*work.v[530];
  work.v[24] -= work.L[942]*work.v[522];
  work.v[23] -= work.L[900]*work.v[514];
  work.v[22] -= work.L[859]*work.v[506];
  work.v[21] -= work.L[819]*work.v[498];
  work.v[20] -= work.L[780]*work.v[490];
  work.v[19] -= work.L[742]*work.v[482];
  work.v[18] -= work.L[705]*work.v[474];
  work.v[17] -= work.L[669]*work.v[466];
  work.v[16] -= work.L[634]*work.v[458];
  work.v[15] -= work.L[600]*work.v[450];
  work.v[14] -= work.L[567]*work.v[442];
  work.v[13] -= work.L[535]*work.v[434];
  work.v[12] -= work.L[504]*work.v[426];
  work.v[11] -= work.L[474]*work.v[418];
  work.v[10] -= work.L[445]*work.v[410];
  work.v[9] -= work.L[417]*work.v[402];
  work.v[8] -= work.L[390]*work.v[394];
  work.v[7] -= work.L[364]*work.v[386];
  work.v[6] -= work.L[339]*work.v[378];
  work.v[5] -= work.L[315]*work.v[370];
  work.v[4] -= work.L[292]*work.v[362];
  work.v[3] -= work.L[270]*work.v[354];
  work.v[2] -= work.L[249]*work.v[346];
  work.v[1] -= work.L[229]*work.v[338];
  work.v[0] -= work.L[210]*work.v[330];
  /* Unpermute the result, from v to var. */
  var[0] = work.v[150];
  var[1] = work.v[152];
  var[2] = work.v[154];
  var[3] = work.v[156];
  var[4] = work.v[158];
  var[5] = work.v[160];
  var[6] = work.v[162];
  var[7] = work.v[164];
  var[8] = work.v[166];
  var[9] = work.v[168];
  var[10] = work.v[170];
  var[11] = work.v[172];
  var[12] = work.v[174];
  var[13] = work.v[176];
  var[14] = work.v[178];
  var[15] = work.v[180];
  var[16] = work.v[182];
  var[17] = work.v[184];
  var[18] = work.v[186];
  var[19] = work.v[188];
  var[20] = work.v[190];
  var[21] = work.v[192];
  var[22] = work.v[194];
  var[23] = work.v[196];
  var[24] = work.v[198];
  var[25] = work.v[200];
  var[26] = work.v[202];
  var[27] = work.v[204];
  var[28] = work.v[206];
  var[29] = work.v[208];
  var[30] = work.v[210];
  var[31] = work.v[213];
  var[32] = work.v[216];
  var[33] = work.v[219];
  var[34] = work.v[222];
  var[35] = work.v[225];
  var[36] = work.v[228];
  var[37] = work.v[231];
  var[38] = work.v[234];
  var[39] = work.v[237];
  var[40] = work.v[240];
  var[41] = work.v[243];
  var[42] = work.v[246];
  var[43] = work.v[249];
  var[44] = work.v[252];
  var[45] = work.v[255];
  var[46] = work.v[258];
  var[47] = work.v[261];
  var[48] = work.v[264];
  var[49] = work.v[267];
  var[50] = work.v[270];
  var[51] = work.v[273];
  var[52] = work.v[276];
  var[53] = work.v[279];
  var[54] = work.v[282];
  var[55] = work.v[285];
  var[56] = work.v[288];
  var[57] = work.v[291];
  var[58] = work.v[294];
  var[59] = work.v[297];
  var[60] = work.v[337];
  var[61] = work.v[345];
  var[62] = work.v[353];
  var[63] = work.v[361];
  var[64] = work.v[369];
  var[65] = work.v[377];
  var[66] = work.v[385];
  var[67] = work.v[393];
  var[68] = work.v[401];
  var[69] = work.v[409];
  var[70] = work.v[417];
  var[71] = work.v[425];
  var[72] = work.v[433];
  var[73] = work.v[441];
  var[74] = work.v[449];
  var[75] = work.v[457];
  var[76] = work.v[465];
  var[77] = work.v[473];
  var[78] = work.v[481];
  var[79] = work.v[489];
  var[80] = work.v[497];
  var[81] = work.v[505];
  var[82] = work.v[513];
  var[83] = work.v[521];
  var[84] = work.v[529];
  var[85] = work.v[537];
  var[86] = work.v[545];
  var[87] = work.v[553];
  var[88] = work.v[561];
  var[89] = work.v[562];
  var[90] = work.v[300];
  var[91] = work.v[301];
  var[92] = work.v[302];
  var[93] = work.v[303];
  var[94] = work.v[304];
  var[95] = work.v[305];
  var[96] = work.v[306];
  var[97] = work.v[307];
  var[98] = work.v[308];
  var[99] = work.v[309];
  var[100] = work.v[310];
  var[101] = work.v[311];
  var[102] = work.v[312];
  var[103] = work.v[313];
  var[104] = work.v[314];
  var[105] = work.v[315];
  var[106] = work.v[316];
  var[107] = work.v[317];
  var[108] = work.v[318];
  var[109] = work.v[319];
  var[110] = work.v[320];
  var[111] = work.v[321];
  var[112] = work.v[322];
  var[113] = work.v[323];
  var[114] = work.v[324];
  var[115] = work.v[325];
  var[116] = work.v[326];
  var[117] = work.v[327];
  var[118] = work.v[328];
  var[119] = work.v[329];
  var[120] = work.v[334];
  var[121] = work.v[342];
  var[122] = work.v[350];
  var[123] = work.v[358];
  var[124] = work.v[366];
  var[125] = work.v[374];
  var[126] = work.v[382];
  var[127] = work.v[390];
  var[128] = work.v[398];
  var[129] = work.v[406];
  var[130] = work.v[414];
  var[131] = work.v[422];
  var[132] = work.v[430];
  var[133] = work.v[438];
  var[134] = work.v[446];
  var[135] = work.v[454];
  var[136] = work.v[462];
  var[137] = work.v[470];
  var[138] = work.v[478];
  var[139] = work.v[486];
  var[140] = work.v[494];
  var[141] = work.v[502];
  var[142] = work.v[510];
  var[143] = work.v[518];
  var[144] = work.v[526];
  var[145] = work.v[534];
  var[146] = work.v[542];
  var[147] = work.v[550];
  var[148] = work.v[558];
  var[149] = work.v[568];
  var[150] = work.v[335];
  var[151] = work.v[343];
  var[152] = work.v[351];
  var[153] = work.v[359];
  var[154] = work.v[367];
  var[155] = work.v[375];
  var[156] = work.v[383];
  var[157] = work.v[391];
  var[158] = work.v[399];
  var[159] = work.v[407];
  var[160] = work.v[415];
  var[161] = work.v[423];
  var[162] = work.v[431];
  var[163] = work.v[439];
  var[164] = work.v[447];
  var[165] = work.v[455];
  var[166] = work.v[463];
  var[167] = work.v[471];
  var[168] = work.v[479];
  var[169] = work.v[487];
  var[170] = work.v[495];
  var[171] = work.v[503];
  var[172] = work.v[511];
  var[173] = work.v[519];
  var[174] = work.v[527];
  var[175] = work.v[535];
  var[176] = work.v[543];
  var[177] = work.v[551];
  var[178] = work.v[559];
  var[179] = work.v[569];
  var[180] = work.v[0];
  var[181] = work.v[1];
  var[182] = work.v[2];
  var[183] = work.v[3];
  var[184] = work.v[4];
  var[185] = work.v[5];
  var[186] = work.v[6];
  var[187] = work.v[7];
  var[188] = work.v[8];
  var[189] = work.v[9];
  var[190] = work.v[10];
  var[191] = work.v[11];
  var[192] = work.v[12];
  var[193] = work.v[13];
  var[194] = work.v[14];
  var[195] = work.v[15];
  var[196] = work.v[16];
  var[197] = work.v[17];
  var[198] = work.v[18];
  var[199] = work.v[19];
  var[200] = work.v[20];
  var[201] = work.v[21];
  var[202] = work.v[22];
  var[203] = work.v[23];
  var[204] = work.v[24];
  var[205] = work.v[25];
  var[206] = work.v[26];
  var[207] = work.v[27];
  var[208] = work.v[28];
  var[209] = work.v[29];
  var[210] = work.v[30];
  var[211] = work.v[31];
  var[212] = work.v[32];
  var[213] = work.v[33];
  var[214] = work.v[34];
  var[215] = work.v[35];
  var[216] = work.v[36];
  var[217] = work.v[37];
  var[218] = work.v[38];
  var[219] = work.v[39];
  var[220] = work.v[40];
  var[221] = work.v[41];
  var[222] = work.v[42];
  var[223] = work.v[43];
  var[224] = work.v[44];
  var[225] = work.v[45];
  var[226] = work.v[46];
  var[227] = work.v[47];
  var[228] = work.v[48];
  var[229] = work.v[49];
  var[230] = work.v[50];
  var[231] = work.v[51];
  var[232] = work.v[52];
  var[233] = work.v[53];
  var[234] = work.v[54];
  var[235] = work.v[55];
  var[236] = work.v[56];
  var[237] = work.v[57];
  var[238] = work.v[58];
  var[239] = work.v[59];
  var[240] = work.v[60];
  var[241] = work.v[61];
  var[242] = work.v[62];
  var[243] = work.v[63];
  var[244] = work.v[64];
  var[245] = work.v[65];
  var[246] = work.v[66];
  var[247] = work.v[67];
  var[248] = work.v[68];
  var[249] = work.v[69];
  var[250] = work.v[70];
  var[251] = work.v[71];
  var[252] = work.v[72];
  var[253] = work.v[73];
  var[254] = work.v[74];
  var[255] = work.v[75];
  var[256] = work.v[76];
  var[257] = work.v[77];
  var[258] = work.v[78];
  var[259] = work.v[79];
  var[260] = work.v[80];
  var[261] = work.v[81];
  var[262] = work.v[82];
  var[263] = work.v[83];
  var[264] = work.v[84];
  var[265] = work.v[85];
  var[266] = work.v[86];
  var[267] = work.v[87];
  var[268] = work.v[88];
  var[269] = work.v[89];
  var[270] = work.v[90];
  var[271] = work.v[91];
  var[272] = work.v[92];
  var[273] = work.v[93];
  var[274] = work.v[94];
  var[275] = work.v[95];
  var[276] = work.v[96];
  var[277] = work.v[97];
  var[278] = work.v[98];
  var[279] = work.v[99];
  var[280] = work.v[100];
  var[281] = work.v[101];
  var[282] = work.v[102];
  var[283] = work.v[103];
  var[284] = work.v[104];
  var[285] = work.v[105];
  var[286] = work.v[106];
  var[287] = work.v[107];
  var[288] = work.v[108];
  var[289] = work.v[109];
  var[290] = work.v[110];
  var[291] = work.v[111];
  var[292] = work.v[112];
  var[293] = work.v[113];
  var[294] = work.v[114];
  var[295] = work.v[115];
  var[296] = work.v[116];
  var[297] = work.v[117];
  var[298] = work.v[118];
  var[299] = work.v[119];
  var[300] = work.v[120];
  var[301] = work.v[121];
  var[302] = work.v[122];
  var[303] = work.v[123];
  var[304] = work.v[124];
  var[305] = work.v[125];
  var[306] = work.v[126];
  var[307] = work.v[127];
  var[308] = work.v[128];
  var[309] = work.v[129];
  var[310] = work.v[130];
  var[311] = work.v[131];
  var[312] = work.v[132];
  var[313] = work.v[133];
  var[314] = work.v[134];
  var[315] = work.v[135];
  var[316] = work.v[136];
  var[317] = work.v[137];
  var[318] = work.v[138];
  var[319] = work.v[139];
  var[320] = work.v[140];
  var[321] = work.v[141];
  var[322] = work.v[142];
  var[323] = work.v[143];
  var[324] = work.v[144];
  var[325] = work.v[145];
  var[326] = work.v[146];
  var[327] = work.v[147];
  var[328] = work.v[148];
  var[329] = work.v[149];
  var[330] = work.v[330];
  var[331] = work.v[338];
  var[332] = work.v[346];
  var[333] = work.v[354];
  var[334] = work.v[362];
  var[335] = work.v[370];
  var[336] = work.v[378];
  var[337] = work.v[386];
  var[338] = work.v[394];
  var[339] = work.v[402];
  var[340] = work.v[410];
  var[341] = work.v[418];
  var[342] = work.v[426];
  var[343] = work.v[434];
  var[344] = work.v[442];
  var[345] = work.v[450];
  var[346] = work.v[458];
  var[347] = work.v[466];
  var[348] = work.v[474];
  var[349] = work.v[482];
  var[350] = work.v[490];
  var[351] = work.v[498];
  var[352] = work.v[506];
  var[353] = work.v[514];
  var[354] = work.v[522];
  var[355] = work.v[530];
  var[356] = work.v[538];
  var[357] = work.v[546];
  var[358] = work.v[554];
  var[359] = work.v[563];
  var[360] = work.v[151];
  var[361] = work.v[153];
  var[362] = work.v[155];
  var[363] = work.v[157];
  var[364] = work.v[159];
  var[365] = work.v[161];
  var[366] = work.v[163];
  var[367] = work.v[165];
  var[368] = work.v[167];
  var[369] = work.v[169];
  var[370] = work.v[171];
  var[371] = work.v[173];
  var[372] = work.v[175];
  var[373] = work.v[177];
  var[374] = work.v[179];
  var[375] = work.v[181];
  var[376] = work.v[183];
  var[377] = work.v[185];
  var[378] = work.v[187];
  var[379] = work.v[189];
  var[380] = work.v[191];
  var[381] = work.v[193];
  var[382] = work.v[195];
  var[383] = work.v[197];
  var[384] = work.v[199];
  var[385] = work.v[201];
  var[386] = work.v[203];
  var[387] = work.v[205];
  var[388] = work.v[207];
  var[389] = work.v[209];
  var[390] = work.v[211];
  var[391] = work.v[214];
  var[392] = work.v[217];
  var[393] = work.v[220];
  var[394] = work.v[223];
  var[395] = work.v[226];
  var[396] = work.v[229];
  var[397] = work.v[232];
  var[398] = work.v[235];
  var[399] = work.v[238];
  var[400] = work.v[241];
  var[401] = work.v[244];
  var[402] = work.v[247];
  var[403] = work.v[250];
  var[404] = work.v[253];
  var[405] = work.v[256];
  var[406] = work.v[259];
  var[407] = work.v[262];
  var[408] = work.v[265];
  var[409] = work.v[268];
  var[410] = work.v[271];
  var[411] = work.v[274];
  var[412] = work.v[277];
  var[413] = work.v[280];
  var[414] = work.v[283];
  var[415] = work.v[286];
  var[416] = work.v[289];
  var[417] = work.v[292];
  var[418] = work.v[295];
  var[419] = work.v[298];
  var[420] = work.v[212];
  var[421] = work.v[215];
  var[422] = work.v[218];
  var[423] = work.v[221];
  var[424] = work.v[224];
  var[425] = work.v[227];
  var[426] = work.v[230];
  var[427] = work.v[233];
  var[428] = work.v[236];
  var[429] = work.v[239];
  var[430] = work.v[242];
  var[431] = work.v[245];
  var[432] = work.v[248];
  var[433] = work.v[251];
  var[434] = work.v[254];
  var[435] = work.v[257];
  var[436] = work.v[260];
  var[437] = work.v[263];
  var[438] = work.v[266];
  var[439] = work.v[269];
  var[440] = work.v[272];
  var[441] = work.v[275];
  var[442] = work.v[278];
  var[443] = work.v[281];
  var[444] = work.v[284];
  var[445] = work.v[287];
  var[446] = work.v[290];
  var[447] = work.v[293];
  var[448] = work.v[296];
  var[449] = work.v[299];
  var[450] = work.v[331];
  var[451] = work.v[339];
  var[452] = work.v[347];
  var[453] = work.v[355];
  var[454] = work.v[363];
  var[455] = work.v[371];
  var[456] = work.v[379];
  var[457] = work.v[387];
  var[458] = work.v[395];
  var[459] = work.v[403];
  var[460] = work.v[411];
  var[461] = work.v[419];
  var[462] = work.v[427];
  var[463] = work.v[435];
  var[464] = work.v[443];
  var[465] = work.v[451];
  var[466] = work.v[459];
  var[467] = work.v[467];
  var[468] = work.v[475];
  var[469] = work.v[483];
  var[470] = work.v[491];
  var[471] = work.v[499];
  var[472] = work.v[507];
  var[473] = work.v[515];
  var[474] = work.v[523];
  var[475] = work.v[531];
  var[476] = work.v[539];
  var[477] = work.v[547];
  var[478] = work.v[555];
  var[479] = work.v[564];
  var[480] = work.v[336];
  var[481] = work.v[344];
  var[482] = work.v[352];
  var[483] = work.v[360];
  var[484] = work.v[368];
  var[485] = work.v[376];
  var[486] = work.v[384];
  var[487] = work.v[392];
  var[488] = work.v[400];
  var[489] = work.v[408];
  var[490] = work.v[416];
  var[491] = work.v[424];
  var[492] = work.v[432];
  var[493] = work.v[440];
  var[494] = work.v[448];
  var[495] = work.v[456];
  var[496] = work.v[464];
  var[497] = work.v[472];
  var[498] = work.v[480];
  var[499] = work.v[488];
  var[500] = work.v[496];
  var[501] = work.v[504];
  var[502] = work.v[512];
  var[503] = work.v[520];
  var[504] = work.v[528];
  var[505] = work.v[536];
  var[506] = work.v[544];
  var[507] = work.v[552];
  var[508] = work.v[560];
  var[509] = work.v[565];
  var[510] = work.v[332];
  var[511] = work.v[340];
  var[512] = work.v[348];
  var[513] = work.v[356];
  var[514] = work.v[364];
  var[515] = work.v[372];
  var[516] = work.v[380];
  var[517] = work.v[388];
  var[518] = work.v[396];
  var[519] = work.v[404];
  var[520] = work.v[412];
  var[521] = work.v[420];
  var[522] = work.v[428];
  var[523] = work.v[436];
  var[524] = work.v[444];
  var[525] = work.v[452];
  var[526] = work.v[460];
  var[527] = work.v[468];
  var[528] = work.v[476];
  var[529] = work.v[484];
  var[530] = work.v[492];
  var[531] = work.v[500];
  var[532] = work.v[508];
  var[533] = work.v[516];
  var[534] = work.v[524];
  var[535] = work.v[532];
  var[536] = work.v[540];
  var[537] = work.v[548];
  var[538] = work.v[556];
  var[539] = work.v[566];
  var[540] = work.v[333];
  var[541] = work.v[341];
  var[542] = work.v[349];
  var[543] = work.v[357];
  var[544] = work.v[365];
  var[545] = work.v[373];
  var[546] = work.v[381];
  var[547] = work.v[389];
  var[548] = work.v[397];
  var[549] = work.v[405];
  var[550] = work.v[413];
  var[551] = work.v[421];
  var[552] = work.v[429];
  var[553] = work.v[437];
  var[554] = work.v[445];
  var[555] = work.v[453];
  var[556] = work.v[461];
  var[557] = work.v[469];
  var[558] = work.v[477];
  var[559] = work.v[485];
  var[560] = work.v[493];
  var[561] = work.v[501];
  var[562] = work.v[509];
  var[563] = work.v[517];
  var[564] = work.v[525];
  var[565] = work.v[533];
  var[566] = work.v[541];
  var[567] = work.v[549];
  var[568] = work.v[557];
  var[569] = work.v[567];
#ifndef ZERO_LIBRARY_MODE
  if (settings.debug) {
    printf("Squared norm for solution is %.8g.\n", check_residual(target, var));
  }
#endif
}

void ldl_factor(void) {
  work.d[0] = work.KKT[0];
  if (work.d[0] < 0)
    work.d[0] = settings.kkt_reg;
  else
    work.d[0] += settings.kkt_reg;
  work.d_inv[0] = 1/work.d[0];

  work.L[210] = work.KKT[1]*work.d_inv[0];

  work.v[1] = work.KKT[2];
  work.d[1] = work.v[1];

  if (work.d[1] < 0)
    work.d[1] = settings.kkt_reg;
  else
    work.d[1] += settings.kkt_reg;
  work.d_inv[1] = 1/work.d[1];

  work.L[229] = (work.KKT[3])*work.d_inv[1];
  work.v[2] = work.KKT[4];
  work.d[2] = work.v[2];

  if (work.d[2] < 0)
    work.d[2] = settings.kkt_reg;
  else
    work.d[2] += settings.kkt_reg;
  work.d_inv[2] = 1/work.d[2];

  work.L[249] = (work.KKT[5])*work.d_inv[2];
  work.v[3] = work.KKT[6];
  work.d[3] = work.v[3];

  if (work.d[3] < 0)
    work.d[3] = settings.kkt_reg;
  else
    work.d[3] += settings.kkt_reg;
  work.d_inv[3] = 1/work.d[3];

  work.L[270] = (work.KKT[7])*work.d_inv[3];
  work.v[4] = work.KKT[8];
  work.d[4] = work.v[4];

  if (work.d[4] < 0)
    work.d[4] = settings.kkt_reg;
  else
    work.d[4] += settings.kkt_reg;
  work.d_inv[4] = 1/work.d[4];

  work.L[292] = (work.KKT[9])*work.d_inv[4];
  work.v[5] = work.KKT[10];
  work.d[5] = work.v[5];

  if (work.d[5] < 0)
    work.d[5] = settings.kkt_reg;
  else
    work.d[5] += settings.kkt_reg;
  work.d_inv[5] = 1/work.d[5];

  work.L[315] = (work.KKT[11])*work.d_inv[5];
  work.v[6] = work.KKT[12];
  work.d[6] = work.v[6];

  if (work.d[6] < 0)
    work.d[6] = settings.kkt_reg;
  else
    work.d[6] += settings.kkt_reg;
  work.d_inv[6] = 1/work.d[6];

  work.L[339] = (work.KKT[13])*work.d_inv[6];
  work.v[7] = work.KKT[14];
  work.d[7] = work.v[7];

  if (work.d[7] < 0)
    work.d[7] = settings.kkt_reg;
  else
    work.d[7] += settings.kkt_reg;
  work.d_inv[7] = 1/work.d[7];

  work.L[364] = (work.KKT[15])*work.d_inv[7];
  work.v[8] = work.KKT[16];
  work.d[8] = work.v[8];

  if (work.d[8] < 0)
    work.d[8] = settings.kkt_reg;
  else
    work.d[8] += settings.kkt_reg;
  work.d_inv[8] = 1/work.d[8];

  work.L[390] = (work.KKT[17])*work.d_inv[8];
  work.v[9] = work.KKT[18];
  work.d[9] = work.v[9];

  if (work.d[9] < 0)
    work.d[9] = settings.kkt_reg;
  else
    work.d[9] += settings.kkt_reg;
  work.d_inv[9] = 1/work.d[9];

  work.L[417] = (work.KKT[19])*work.d_inv[9];
  work.v[10] = work.KKT[20];
  work.d[10] = work.v[10];

  if (work.d[10] < 0)
    work.d[10] = settings.kkt_reg;
  else
    work.d[10] += settings.kkt_reg;
  work.d_inv[10] = 1/work.d[10];

  work.L[445] = (work.KKT[21])*work.d_inv[10];
  work.v[11] = work.KKT[22];
  work.d[11] = work.v[11];

  if (work.d[11] < 0)
    work.d[11] = settings.kkt_reg;
  else
    work.d[11] += settings.kkt_reg;
  work.d_inv[11] = 1/work.d[11];

  work.L[474] = (work.KKT[23])*work.d_inv[11];
  work.v[12] = work.KKT[24];
  work.d[12] = work.v[12];

  if (work.d[12] < 0)
    work.d[12] = settings.kkt_reg;
  else
    work.d[12] += settings.kkt_reg;
  work.d_inv[12] = 1/work.d[12];

  work.L[504] = (work.KKT[25])*work.d_inv[12];
  work.v[13] = work.KKT[26];
  work.d[13] = work.v[13];

  if (work.d[13] < 0)
    work.d[13] = settings.kkt_reg;
  else
    work.d[13] += settings.kkt_reg;
  work.d_inv[13] = 1/work.d[13];

  work.L[535] = (work.KKT[27])*work.d_inv[13];
  work.v[14] = work.KKT[28];
  work.d[14] = work.v[14];

  if (work.d[14] < 0)
    work.d[14] = settings.kkt_reg;
  else
    work.d[14] += settings.kkt_reg;
  work.d_inv[14] = 1/work.d[14];

  work.L[567] = (work.KKT[29])*work.d_inv[14];
  work.v[15] = work.KKT[30];
  work.d[15] = work.v[15];

  if (work.d[15] < 0)
    work.d[15] = settings.kkt_reg;
  else
    work.d[15] += settings.kkt_reg;
  work.d_inv[15] = 1/work.d[15];

  work.L[600] = (work.KKT[31])*work.d_inv[15];
  work.v[16] = work.KKT[32];
  work.d[16] = work.v[16];

  if (work.d[16] < 0)
    work.d[16] = settings.kkt_reg;
  else
    work.d[16] += settings.kkt_reg;
  work.d_inv[16] = 1/work.d[16];

  work.L[634] = (work.KKT[33])*work.d_inv[16];
  work.v[17] = work.KKT[34];
  work.d[17] = work.v[17];

  if (work.d[17] < 0)
    work.d[17] = settings.kkt_reg;
  else
    work.d[17] += settings.kkt_reg;
  work.d_inv[17] = 1/work.d[17];

  work.L[669] = (work.KKT[35])*work.d_inv[17];
  work.v[18] = work.KKT[36];
  work.d[18] = work.v[18];

  if (work.d[18] < 0)
    work.d[18] = settings.kkt_reg;
  else
    work.d[18] += settings.kkt_reg;
  work.d_inv[18] = 1/work.d[18];

  work.L[705] = (work.KKT[37])*work.d_inv[18];
  work.v[19] = work.KKT[38];
  work.d[19] = work.v[19];

  if (work.d[19] < 0)
    work.d[19] = settings.kkt_reg;
  else
    work.d[19] += settings.kkt_reg;
  work.d_inv[19] = 1/work.d[19];

  work.L[742] = (work.KKT[39])*work.d_inv[19];
  work.v[20] = work.KKT[40];
  work.d[20] = work.v[20];

  if (work.d[20] < 0)
    work.d[20] = settings.kkt_reg;
  else
    work.d[20] += settings.kkt_reg;
  work.d_inv[20] = 1/work.d[20];

  work.L[780] = (work.KKT[41])*work.d_inv[20];
  work.v[21] = work.KKT[42];
  work.d[21] = work.v[21];

  if (work.d[21] < 0)
    work.d[21] = settings.kkt_reg;
  else
    work.d[21] += settings.kkt_reg;
  work.d_inv[21] = 1/work.d[21];

  work.L[819] = (work.KKT[43])*work.d_inv[21];
  work.v[22] = work.KKT[44];
  work.d[22] = work.v[22];

  if (work.d[22] < 0)
    work.d[22] = settings.kkt_reg;
  else
    work.d[22] += settings.kkt_reg;
  work.d_inv[22] = 1/work.d[22];

  work.L[859] = (work.KKT[45])*work.d_inv[22];
  work.v[23] = work.KKT[46];
  work.d[23] = work.v[23];

  if (work.d[23] < 0)
    work.d[23] = settings.kkt_reg;
  else
    work.d[23] += settings.kkt_reg;
  work.d_inv[23] = 1/work.d[23];

  work.L[900] = (work.KKT[47])*work.d_inv[23];
  work.v[24] = work.KKT[48];
  work.d[24] = work.v[24];

  if (work.d[24] < 0)
    work.d[24] = settings.kkt_reg;
  else
    work.d[24] += settings.kkt_reg;
  work.d_inv[24] = 1/work.d[24];

  work.L[942] = (work.KKT[49])*work.d_inv[24];
  work.v[25] = work.KKT[50];
  work.d[25] = work.v[25];

  if (work.d[25] < 0)
    work.d[25] = settings.kkt_reg;
  else
    work.d[25] += settings.kkt_reg;
  work.d_inv[25] = 1/work.d[25];

  work.L[985] = (work.KKT[51])*work.d_inv[25];
  work.v[26] = work.KKT[52];
  work.d[26] = work.v[26];

  if (work.d[26] < 0)
    work.d[26] = settings.kkt_reg;
  else
    work.d[26] += settings.kkt_reg;
  work.d_inv[26] = 1/work.d[26];

  work.L[1029] = (work.KKT[53])*work.d_inv[26];
  work.v[27] = work.KKT[54];
  work.d[27] = work.v[27];

  if (work.d[27] < 0)
    work.d[27] = settings.kkt_reg;
  else
    work.d[27] += settings.kkt_reg;
  work.d_inv[27] = 1/work.d[27];

  work.L[1074] = (work.KKT[55])*work.d_inv[27];
  work.v[28] = work.KKT[56];
  work.d[28] = work.v[28];

  if (work.d[28] < 0)
    work.d[28] = settings.kkt_reg;
  else
    work.d[28] += settings.kkt_reg;
  work.d_inv[28] = 1/work.d[28];

  work.L[1120] = (work.KKT[57])*work.d_inv[28];
  work.v[29] = work.KKT[58];
  work.d[29] = work.v[29];

  if (work.d[29] < 0)
    work.d[29] = settings.kkt_reg;
  else
    work.d[29] += settings.kkt_reg;
  work.d_inv[29] = 1/work.d[29];

  work.L[1196] = (work.KKT[59])*work.d_inv[29];
  work.v[30] = work.KKT[60];
  work.d[30] = work.v[30];

  if (work.d[30] < 0)
    work.d[30] = settings.kkt_reg;
  else
    work.d[30] += settings.kkt_reg;
  work.d_inv[30] = 1/work.d[30];

  work.L[0] = (work.KKT[61])*work.d_inv[30];
  work.v[31] = work.KKT[62];
  work.d[31] = work.v[31];

  if (work.d[31] < 0)
    work.d[31] = settings.kkt_reg;
  else
    work.d[31] += settings.kkt_reg;
  work.d_inv[31] = 1/work.d[31];

  work.L[2] = (work.KKT[63])*work.d_inv[31];
  work.v[32] = work.KKT[64];
  work.d[32] = work.v[32];

  if (work.d[32] < 0)
    work.d[32] = settings.kkt_reg;
  else
    work.d[32] += settings.kkt_reg;
  work.d_inv[32] = 1/work.d[32];

  work.L[4] = (work.KKT[65])*work.d_inv[32];
  work.v[33] = work.KKT[66];
  work.d[33] = work.v[33];

  if (work.d[33] < 0)
    work.d[33] = settings.kkt_reg;
  else
    work.d[33] += settings.kkt_reg;
  work.d_inv[33] = 1/work.d[33];

  work.L[6] = (work.KKT[67])*work.d_inv[33];
  work.v[34] = work.KKT[68];
  work.d[34] = work.v[34];

  if (work.d[34] < 0)
    work.d[34] = settings.kkt_reg;
  else
    work.d[34] += settings.kkt_reg;
  work.d_inv[34] = 1/work.d[34];

  work.L[8] = (work.KKT[69])*work.d_inv[34];
  work.v[35] = work.KKT[70];
  work.d[35] = work.v[35];

  if (work.d[35] < 0)
    work.d[35] = settings.kkt_reg;
  else
    work.d[35] += settings.kkt_reg;
  work.d_inv[35] = 1/work.d[35];

  work.L[10] = (work.KKT[71])*work.d_inv[35];
  work.v[36] = work.KKT[72];
  work.d[36] = work.v[36];

  if (work.d[36] < 0)
    work.d[36] = settings.kkt_reg;
  else
    work.d[36] += settings.kkt_reg;
  work.d_inv[36] = 1/work.d[36];

  work.L[12] = (work.KKT[73])*work.d_inv[36];
  work.v[37] = work.KKT[74];
  work.d[37] = work.v[37];

  if (work.d[37] < 0)
    work.d[37] = settings.kkt_reg;
  else
    work.d[37] += settings.kkt_reg;
  work.d_inv[37] = 1/work.d[37];

  work.L[14] = (work.KKT[75])*work.d_inv[37];
  work.v[38] = work.KKT[76];
  work.d[38] = work.v[38];

  if (work.d[38] < 0)
    work.d[38] = settings.kkt_reg;
  else
    work.d[38] += settings.kkt_reg;
  work.d_inv[38] = 1/work.d[38];

  work.L[16] = (work.KKT[77])*work.d_inv[38];
  work.v[39] = work.KKT[78];
  work.d[39] = work.v[39];

  if (work.d[39] < 0)
    work.d[39] = settings.kkt_reg;
  else
    work.d[39] += settings.kkt_reg;
  work.d_inv[39] = 1/work.d[39];

  work.L[18] = (work.KKT[79])*work.d_inv[39];
  work.v[40] = work.KKT[80];
  work.d[40] = work.v[40];

  if (work.d[40] < 0)
    work.d[40] = settings.kkt_reg;
  else
    work.d[40] += settings.kkt_reg;
  work.d_inv[40] = 1/work.d[40];

  work.L[20] = (work.KKT[81])*work.d_inv[40];
  work.v[41] = work.KKT[82];
  work.d[41] = work.v[41];

  if (work.d[41] < 0)
    work.d[41] = settings.kkt_reg;
  else
    work.d[41] += settings.kkt_reg;
  work.d_inv[41] = 1/work.d[41];

  work.L[22] = (work.KKT[83])*work.d_inv[41];
  work.v[42] = work.KKT[84];
  work.d[42] = work.v[42];

  if (work.d[42] < 0)
    work.d[42] = settings.kkt_reg;
  else
    work.d[42] += settings.kkt_reg;
  work.d_inv[42] = 1/work.d[42];

  work.L[24] = (work.KKT[85])*work.d_inv[42];
  work.v[43] = work.KKT[86];
  work.d[43] = work.v[43];

  if (work.d[43] < 0)
    work.d[43] = settings.kkt_reg;
  else
    work.d[43] += settings.kkt_reg;
  work.d_inv[43] = 1/work.d[43];

  work.L[26] = (work.KKT[87])*work.d_inv[43];
  work.v[44] = work.KKT[88];
  work.d[44] = work.v[44];

  if (work.d[44] < 0)
    work.d[44] = settings.kkt_reg;
  else
    work.d[44] += settings.kkt_reg;
  work.d_inv[44] = 1/work.d[44];

  work.L[28] = (work.KKT[89])*work.d_inv[44];
  work.v[45] = work.KKT[90];
  work.d[45] = work.v[45];

  if (work.d[45] < 0)
    work.d[45] = settings.kkt_reg;
  else
    work.d[45] += settings.kkt_reg;
  work.d_inv[45] = 1/work.d[45];

  work.L[30] = (work.KKT[91])*work.d_inv[45];
  work.v[46] = work.KKT[92];
  work.d[46] = work.v[46];

  if (work.d[46] < 0)
    work.d[46] = settings.kkt_reg;
  else
    work.d[46] += settings.kkt_reg;
  work.d_inv[46] = 1/work.d[46];

  work.L[32] = (work.KKT[93])*work.d_inv[46];
  work.v[47] = work.KKT[94];
  work.d[47] = work.v[47];

  if (work.d[47] < 0)
    work.d[47] = settings.kkt_reg;
  else
    work.d[47] += settings.kkt_reg;
  work.d_inv[47] = 1/work.d[47];

  work.L[34] = (work.KKT[95])*work.d_inv[47];
  work.v[48] = work.KKT[96];
  work.d[48] = work.v[48];

  if (work.d[48] < 0)
    work.d[48] = settings.kkt_reg;
  else
    work.d[48] += settings.kkt_reg;
  work.d_inv[48] = 1/work.d[48];

  work.L[36] = (work.KKT[97])*work.d_inv[48];
  work.v[49] = work.KKT[98];
  work.d[49] = work.v[49];

  if (work.d[49] < 0)
    work.d[49] = settings.kkt_reg;
  else
    work.d[49] += settings.kkt_reg;
  work.d_inv[49] = 1/work.d[49];

  work.L[38] = (work.KKT[99])*work.d_inv[49];
  work.v[50] = work.KKT[100];
  work.d[50] = work.v[50];

  if (work.d[50] < 0)
    work.d[50] = settings.kkt_reg;
  else
    work.d[50] += settings.kkt_reg;
  work.d_inv[50] = 1/work.d[50];

  work.L[40] = (work.KKT[101])*work.d_inv[50];
  work.v[51] = work.KKT[102];
  work.d[51] = work.v[51];

  if (work.d[51] < 0)
    work.d[51] = settings.kkt_reg;
  else
    work.d[51] += settings.kkt_reg;
  work.d_inv[51] = 1/work.d[51];

  work.L[42] = (work.KKT[103])*work.d_inv[51];
  work.v[52] = work.KKT[104];
  work.d[52] = work.v[52];

  if (work.d[52] < 0)
    work.d[52] = settings.kkt_reg;
  else
    work.d[52] += settings.kkt_reg;
  work.d_inv[52] = 1/work.d[52];

  work.L[44] = (work.KKT[105])*work.d_inv[52];
  work.v[53] = work.KKT[106];
  work.d[53] = work.v[53];

  if (work.d[53] < 0)
    work.d[53] = settings.kkt_reg;
  else
    work.d[53] += settings.kkt_reg;
  work.d_inv[53] = 1/work.d[53];

  work.L[46] = (work.KKT[107])*work.d_inv[53];
  work.v[54] = work.KKT[108];
  work.d[54] = work.v[54];

  if (work.d[54] < 0)
    work.d[54] = settings.kkt_reg;
  else
    work.d[54] += settings.kkt_reg;
  work.d_inv[54] = 1/work.d[54];

  work.L[48] = (work.KKT[109])*work.d_inv[54];
  work.v[55] = work.KKT[110];
  work.d[55] = work.v[55];

  if (work.d[55] < 0)
    work.d[55] = settings.kkt_reg;
  else
    work.d[55] += settings.kkt_reg;
  work.d_inv[55] = 1/work.d[55];

  work.L[50] = (work.KKT[111])*work.d_inv[55];
  work.v[56] = work.KKT[112];
  work.d[56] = work.v[56];

  if (work.d[56] < 0)
    work.d[56] = settings.kkt_reg;
  else
    work.d[56] += settings.kkt_reg;
  work.d_inv[56] = 1/work.d[56];

  work.L[52] = (work.KKT[113])*work.d_inv[56];
  work.v[57] = work.KKT[114];
  work.d[57] = work.v[57];

  if (work.d[57] < 0)
    work.d[57] = settings.kkt_reg;
  else
    work.d[57] += settings.kkt_reg;
  work.d_inv[57] = 1/work.d[57];

  work.L[54] = (work.KKT[115])*work.d_inv[57];
  work.v[58] = work.KKT[116];
  work.d[58] = work.v[58];

  if (work.d[58] < 0)
    work.d[58] = settings.kkt_reg;
  else
    work.d[58] += settings.kkt_reg;
  work.d_inv[58] = 1/work.d[58];

  work.L[56] = (work.KKT[117])*work.d_inv[58];
  work.v[59] = work.KKT[118];
  work.d[59] = work.v[59];

  if (work.d[59] < 0)
    work.d[59] = settings.kkt_reg;
  else
    work.d[59] += settings.kkt_reg;
  work.d_inv[59] = 1/work.d[59];

  work.L[58] = (work.KKT[119])*work.d_inv[59];
  work.v[60] = work.KKT[120];
  work.d[60] = work.v[60];

  if (work.d[60] < 0)
    work.d[60] = settings.kkt_reg;
  else
    work.d[60] += settings.kkt_reg;
  work.d_inv[60] = 1/work.d[60];

  work.L[60] = (work.KKT[121])*work.d_inv[60];
  work.v[61] = work.KKT[122];
  work.d[61] = work.v[61];

  if (work.d[61] < 0)
    work.d[61] = settings.kkt_reg;
  else
    work.d[61] += settings.kkt_reg;
  work.d_inv[61] = 1/work.d[61];

  work.L[65] = (work.KKT[123])*work.d_inv[61];
  work.v[62] = work.KKT[124];
  work.d[62] = work.v[62];

  if (work.d[62] < 0)
    work.d[62] = settings.kkt_reg;
  else
    work.d[62] += settings.kkt_reg;
  work.d_inv[62] = 1/work.d[62];

  work.L[70] = (work.KKT[125])*work.d_inv[62];
  work.v[63] = work.KKT[126];
  work.d[63] = work.v[63];

  if (work.d[63] < 0)
    work.d[63] = settings.kkt_reg;
  else
    work.d[63] += settings.kkt_reg;
  work.d_inv[63] = 1/work.d[63];

  work.L[75] = (work.KKT[127])*work.d_inv[63];
  work.v[64] = work.KKT[128];
  work.d[64] = work.v[64];

  if (work.d[64] < 0)
    work.d[64] = settings.kkt_reg;
  else
    work.d[64] += settings.kkt_reg;
  work.d_inv[64] = 1/work.d[64];

  work.L[80] = (work.KKT[129])*work.d_inv[64];
  work.v[65] = work.KKT[130];
  work.d[65] = work.v[65];

  if (work.d[65] < 0)
    work.d[65] = settings.kkt_reg;
  else
    work.d[65] += settings.kkt_reg;
  work.d_inv[65] = 1/work.d[65];

  work.L[85] = (work.KKT[131])*work.d_inv[65];
  work.v[66] = work.KKT[132];
  work.d[66] = work.v[66];

  if (work.d[66] < 0)
    work.d[66] = settings.kkt_reg;
  else
    work.d[66] += settings.kkt_reg;
  work.d_inv[66] = 1/work.d[66];

  work.L[90] = (work.KKT[133])*work.d_inv[66];
  work.v[67] = work.KKT[134];
  work.d[67] = work.v[67];

  if (work.d[67] < 0)
    work.d[67] = settings.kkt_reg;
  else
    work.d[67] += settings.kkt_reg;
  work.d_inv[67] = 1/work.d[67];

  work.L[95] = (work.KKT[135])*work.d_inv[67];
  work.v[68] = work.KKT[136];
  work.d[68] = work.v[68];

  if (work.d[68] < 0)
    work.d[68] = settings.kkt_reg;
  else
    work.d[68] += settings.kkt_reg;
  work.d_inv[68] = 1/work.d[68];

  work.L[100] = (work.KKT[137])*work.d_inv[68];
  work.v[69] = work.KKT[138];
  work.d[69] = work.v[69];

  if (work.d[69] < 0)
    work.d[69] = settings.kkt_reg;
  else
    work.d[69] += settings.kkt_reg;
  work.d_inv[69] = 1/work.d[69];

  work.L[105] = (work.KKT[139])*work.d_inv[69];
  work.v[70] = work.KKT[140];
  work.d[70] = work.v[70];

  if (work.d[70] < 0)
    work.d[70] = settings.kkt_reg;
  else
    work.d[70] += settings.kkt_reg;
  work.d_inv[70] = 1/work.d[70];

  work.L[110] = (work.KKT[141])*work.d_inv[70];
  work.v[71] = work.KKT[142];
  work.d[71] = work.v[71];

  if (work.d[71] < 0)
    work.d[71] = settings.kkt_reg;
  else
    work.d[71] += settings.kkt_reg;
  work.d_inv[71] = 1/work.d[71];

  work.L[115] = (work.KKT[143])*work.d_inv[71];
  work.v[72] = work.KKT[144];
  work.d[72] = work.v[72];

  if (work.d[72] < 0)
    work.d[72] = settings.kkt_reg;
  else
    work.d[72] += settings.kkt_reg;
  work.d_inv[72] = 1/work.d[72];

  work.L[120] = (work.KKT[145])*work.d_inv[72];
  work.v[73] = work.KKT[146];
  work.d[73] = work.v[73];

  if (work.d[73] < 0)
    work.d[73] = settings.kkt_reg;
  else
    work.d[73] += settings.kkt_reg;
  work.d_inv[73] = 1/work.d[73];

  work.L[125] = (work.KKT[147])*work.d_inv[73];
  work.v[74] = work.KKT[148];
  work.d[74] = work.v[74];

  if (work.d[74] < 0)
    work.d[74] = settings.kkt_reg;
  else
    work.d[74] += settings.kkt_reg;
  work.d_inv[74] = 1/work.d[74];

  work.L[130] = (work.KKT[149])*work.d_inv[74];
  work.v[75] = work.KKT[150];
  work.d[75] = work.v[75];

  if (work.d[75] < 0)
    work.d[75] = settings.kkt_reg;
  else
    work.d[75] += settings.kkt_reg;
  work.d_inv[75] = 1/work.d[75];

  work.L[135] = (work.KKT[151])*work.d_inv[75];
  work.v[76] = work.KKT[152];
  work.d[76] = work.v[76];

  if (work.d[76] < 0)
    work.d[76] = settings.kkt_reg;
  else
    work.d[76] += settings.kkt_reg;
  work.d_inv[76] = 1/work.d[76];

  work.L[140] = (work.KKT[153])*work.d_inv[76];
  work.v[77] = work.KKT[154];
  work.d[77] = work.v[77];

  if (work.d[77] < 0)
    work.d[77] = settings.kkt_reg;
  else
    work.d[77] += settings.kkt_reg;
  work.d_inv[77] = 1/work.d[77];

  work.L[145] = (work.KKT[155])*work.d_inv[77];
  work.v[78] = work.KKT[156];
  work.d[78] = work.v[78];

  if (work.d[78] < 0)
    work.d[78] = settings.kkt_reg;
  else
    work.d[78] += settings.kkt_reg;
  work.d_inv[78] = 1/work.d[78];

  work.L[150] = (work.KKT[157])*work.d_inv[78];
  work.v[79] = work.KKT[158];
  work.d[79] = work.v[79];

  if (work.d[79] < 0)
    work.d[79] = settings.kkt_reg;
  else
    work.d[79] += settings.kkt_reg;
  work.d_inv[79] = 1/work.d[79];

  work.L[155] = (work.KKT[159])*work.d_inv[79];
  work.v[80] = work.KKT[160];
  work.d[80] = work.v[80];

  if (work.d[80] < 0)
    work.d[80] = settings.kkt_reg;
  else
    work.d[80] += settings.kkt_reg;
  work.d_inv[80] = 1/work.d[80];

  work.L[160] = (work.KKT[161])*work.d_inv[80];
  work.v[81] = work.KKT[162];
  work.d[81] = work.v[81];

  if (work.d[81] < 0)
    work.d[81] = settings.kkt_reg;
  else
    work.d[81] += settings.kkt_reg;
  work.d_inv[81] = 1/work.d[81];

  work.L[165] = (work.KKT[163])*work.d_inv[81];
  work.v[82] = work.KKT[164];
  work.d[82] = work.v[82];

  if (work.d[82] < 0)
    work.d[82] = settings.kkt_reg;
  else
    work.d[82] += settings.kkt_reg;
  work.d_inv[82] = 1/work.d[82];

  work.L[170] = (work.KKT[165])*work.d_inv[82];
  work.v[83] = work.KKT[166];
  work.d[83] = work.v[83];

  if (work.d[83] < 0)
    work.d[83] = settings.kkt_reg;
  else
    work.d[83] += settings.kkt_reg;
  work.d_inv[83] = 1/work.d[83];

  work.L[175] = (work.KKT[167])*work.d_inv[83];
  work.v[84] = work.KKT[168];
  work.d[84] = work.v[84];

  if (work.d[84] < 0)
    work.d[84] = settings.kkt_reg;
  else
    work.d[84] += settings.kkt_reg;
  work.d_inv[84] = 1/work.d[84];

  work.L[180] = (work.KKT[169])*work.d_inv[84];
  work.v[85] = work.KKT[170];
  work.d[85] = work.v[85];

  if (work.d[85] < 0)
    work.d[85] = settings.kkt_reg;
  else
    work.d[85] += settings.kkt_reg;
  work.d_inv[85] = 1/work.d[85];

  work.L[185] = (work.KKT[171])*work.d_inv[85];
  work.v[86] = work.KKT[172];
  work.d[86] = work.v[86];

  if (work.d[86] < 0)
    work.d[86] = settings.kkt_reg;
  else
    work.d[86] += settings.kkt_reg;
  work.d_inv[86] = 1/work.d[86];

  work.L[190] = (work.KKT[173])*work.d_inv[86];
  work.v[87] = work.KKT[174];
  work.d[87] = work.v[87];

  if (work.d[87] < 0)
    work.d[87] = settings.kkt_reg;
  else
    work.d[87] += settings.kkt_reg;
  work.d_inv[87] = 1/work.d[87];

  work.L[195] = (work.KKT[175])*work.d_inv[87];
  work.v[88] = work.KKT[176];
  work.d[88] = work.v[88];

  if (work.d[88] < 0)
    work.d[88] = settings.kkt_reg;
  else
    work.d[88] += settings.kkt_reg;
  work.d_inv[88] = 1/work.d[88];

  work.L[200] = (work.KKT[177])*work.d_inv[88];
  work.v[89] = work.KKT[178];
  work.d[89] = work.v[89];

  if (work.d[89] < 0)
    work.d[89] = settings.kkt_reg;
  else
    work.d[89] += settings.kkt_reg;
  work.d_inv[89] = 1/work.d[89];

  work.L[205] = (work.KKT[179])*work.d_inv[89];
  work.v[90] = work.KKT[180];
  work.d[90] = work.v[90];

  if (work.d[90] < 0)
    work.d[90] = settings.kkt_reg;
  else
    work.d[90] += settings.kkt_reg;
  work.d_inv[90] = 1/work.d[90];

  work.L[62] = (work.KKT[181])*work.d_inv[90];
  work.v[91] = work.KKT[182];
  work.d[91] = work.v[91];

  if (work.d[91] < 0)
    work.d[91] = settings.kkt_reg;
  else
    work.d[91] += settings.kkt_reg;
  work.d_inv[91] = 1/work.d[91];

  work.L[67] = (work.KKT[183])*work.d_inv[91];
  work.v[92] = work.KKT[184];
  work.d[92] = work.v[92];

  if (work.d[92] < 0)
    work.d[92] = settings.kkt_reg;
  else
    work.d[92] += settings.kkt_reg;
  work.d_inv[92] = 1/work.d[92];

  work.L[72] = (work.KKT[185])*work.d_inv[92];
  work.v[93] = work.KKT[186];
  work.d[93] = work.v[93];

  if (work.d[93] < 0)
    work.d[93] = settings.kkt_reg;
  else
    work.d[93] += settings.kkt_reg;
  work.d_inv[93] = 1/work.d[93];

  work.L[77] = (work.KKT[187])*work.d_inv[93];
  work.v[94] = work.KKT[188];
  work.d[94] = work.v[94];

  if (work.d[94] < 0)
    work.d[94] = settings.kkt_reg;
  else
    work.d[94] += settings.kkt_reg;
  work.d_inv[94] = 1/work.d[94];

  work.L[82] = (work.KKT[189])*work.d_inv[94];
  work.v[95] = work.KKT[190];
  work.d[95] = work.v[95];

  if (work.d[95] < 0)
    work.d[95] = settings.kkt_reg;
  else
    work.d[95] += settings.kkt_reg;
  work.d_inv[95] = 1/work.d[95];

  work.L[87] = (work.KKT[191])*work.d_inv[95];
  work.v[96] = work.KKT[192];
  work.d[96] = work.v[96];

  if (work.d[96] < 0)
    work.d[96] = settings.kkt_reg;
  else
    work.d[96] += settings.kkt_reg;
  work.d_inv[96] = 1/work.d[96];

  work.L[92] = (work.KKT[193])*work.d_inv[96];
  work.v[97] = work.KKT[194];
  work.d[97] = work.v[97];

  if (work.d[97] < 0)
    work.d[97] = settings.kkt_reg;
  else
    work.d[97] += settings.kkt_reg;
  work.d_inv[97] = 1/work.d[97];

  work.L[97] = (work.KKT[195])*work.d_inv[97];
  work.v[98] = work.KKT[196];
  work.d[98] = work.v[98];

  if (work.d[98] < 0)
    work.d[98] = settings.kkt_reg;
  else
    work.d[98] += settings.kkt_reg;
  work.d_inv[98] = 1/work.d[98];

  work.L[102] = (work.KKT[197])*work.d_inv[98];
  work.v[99] = work.KKT[198];
  work.d[99] = work.v[99];

  if (work.d[99] < 0)
    work.d[99] = settings.kkt_reg;
  else
    work.d[99] += settings.kkt_reg;
  work.d_inv[99] = 1/work.d[99];

  work.L[107] = (work.KKT[199])*work.d_inv[99];
  work.v[100] = work.KKT[200];
  work.d[100] = work.v[100];

  if (work.d[100] < 0)
    work.d[100] = settings.kkt_reg;
  else
    work.d[100] += settings.kkt_reg;
  work.d_inv[100] = 1/work.d[100];

  work.L[112] = (work.KKT[201])*work.d_inv[100];
  work.v[101] = work.KKT[202];
  work.d[101] = work.v[101];

  if (work.d[101] < 0)
    work.d[101] = settings.kkt_reg;
  else
    work.d[101] += settings.kkt_reg;
  work.d_inv[101] = 1/work.d[101];

  work.L[117] = (work.KKT[203])*work.d_inv[101];
  work.v[102] = work.KKT[204];
  work.d[102] = work.v[102];

  if (work.d[102] < 0)
    work.d[102] = settings.kkt_reg;
  else
    work.d[102] += settings.kkt_reg;
  work.d_inv[102] = 1/work.d[102];

  work.L[122] = (work.KKT[205])*work.d_inv[102];
  work.v[103] = work.KKT[206];
  work.d[103] = work.v[103];

  if (work.d[103] < 0)
    work.d[103] = settings.kkt_reg;
  else
    work.d[103] += settings.kkt_reg;
  work.d_inv[103] = 1/work.d[103];

  work.L[127] = (work.KKT[207])*work.d_inv[103];
  work.v[104] = work.KKT[208];
  work.d[104] = work.v[104];

  if (work.d[104] < 0)
    work.d[104] = settings.kkt_reg;
  else
    work.d[104] += settings.kkt_reg;
  work.d_inv[104] = 1/work.d[104];

  work.L[132] = (work.KKT[209])*work.d_inv[104];
  work.v[105] = work.KKT[210];
  work.d[105] = work.v[105];

  if (work.d[105] < 0)
    work.d[105] = settings.kkt_reg;
  else
    work.d[105] += settings.kkt_reg;
  work.d_inv[105] = 1/work.d[105];

  work.L[137] = (work.KKT[211])*work.d_inv[105];
  work.v[106] = work.KKT[212];
  work.d[106] = work.v[106];

  if (work.d[106] < 0)
    work.d[106] = settings.kkt_reg;
  else
    work.d[106] += settings.kkt_reg;
  work.d_inv[106] = 1/work.d[106];

  work.L[142] = (work.KKT[213])*work.d_inv[106];
  work.v[107] = work.KKT[214];
  work.d[107] = work.v[107];

  if (work.d[107] < 0)
    work.d[107] = settings.kkt_reg;
  else
    work.d[107] += settings.kkt_reg;
  work.d_inv[107] = 1/work.d[107];

  work.L[147] = (work.KKT[215])*work.d_inv[107];
  work.v[108] = work.KKT[216];
  work.d[108] = work.v[108];

  if (work.d[108] < 0)
    work.d[108] = settings.kkt_reg;
  else
    work.d[108] += settings.kkt_reg;
  work.d_inv[108] = 1/work.d[108];

  work.L[152] = (work.KKT[217])*work.d_inv[108];
  work.v[109] = work.KKT[218];
  work.d[109] = work.v[109];

  if (work.d[109] < 0)
    work.d[109] = settings.kkt_reg;
  else
    work.d[109] += settings.kkt_reg;
  work.d_inv[109] = 1/work.d[109];

  work.L[157] = (work.KKT[219])*work.d_inv[109];
  work.v[110] = work.KKT[220];
  work.d[110] = work.v[110];

  if (work.d[110] < 0)
    work.d[110] = settings.kkt_reg;
  else
    work.d[110] += settings.kkt_reg;
  work.d_inv[110] = 1/work.d[110];

  work.L[162] = (work.KKT[221])*work.d_inv[110];
  work.v[111] = work.KKT[222];
  work.d[111] = work.v[111];

  if (work.d[111] < 0)
    work.d[111] = settings.kkt_reg;
  else
    work.d[111] += settings.kkt_reg;
  work.d_inv[111] = 1/work.d[111];

  work.L[167] = (work.KKT[223])*work.d_inv[111];
  work.v[112] = work.KKT[224];
  work.d[112] = work.v[112];

  if (work.d[112] < 0)
    work.d[112] = settings.kkt_reg;
  else
    work.d[112] += settings.kkt_reg;
  work.d_inv[112] = 1/work.d[112];

  work.L[172] = (work.KKT[225])*work.d_inv[112];
  work.v[113] = work.KKT[226];
  work.d[113] = work.v[113];

  if (work.d[113] < 0)
    work.d[113] = settings.kkt_reg;
  else
    work.d[113] += settings.kkt_reg;
  work.d_inv[113] = 1/work.d[113];

  work.L[177] = (work.KKT[227])*work.d_inv[113];
  work.v[114] = work.KKT[228];
  work.d[114] = work.v[114];

  if (work.d[114] < 0)
    work.d[114] = settings.kkt_reg;
  else
    work.d[114] += settings.kkt_reg;
  work.d_inv[114] = 1/work.d[114];

  work.L[182] = (work.KKT[229])*work.d_inv[114];
  work.v[115] = work.KKT[230];
  work.d[115] = work.v[115];

  if (work.d[115] < 0)
    work.d[115] = settings.kkt_reg;
  else
    work.d[115] += settings.kkt_reg;
  work.d_inv[115] = 1/work.d[115];

  work.L[187] = (work.KKT[231])*work.d_inv[115];
  work.v[116] = work.KKT[232];
  work.d[116] = work.v[116];

  if (work.d[116] < 0)
    work.d[116] = settings.kkt_reg;
  else
    work.d[116] += settings.kkt_reg;
  work.d_inv[116] = 1/work.d[116];

  work.L[192] = (work.KKT[233])*work.d_inv[116];
  work.v[117] = work.KKT[234];
  work.d[117] = work.v[117];

  if (work.d[117] < 0)
    work.d[117] = settings.kkt_reg;
  else
    work.d[117] += settings.kkt_reg;
  work.d_inv[117] = 1/work.d[117];

  work.L[197] = (work.KKT[235])*work.d_inv[117];
  work.v[118] = work.KKT[236];
  work.d[118] = work.v[118];

  if (work.d[118] < 0)
    work.d[118] = settings.kkt_reg;
  else
    work.d[118] += settings.kkt_reg;
  work.d_inv[118] = 1/work.d[118];

  work.L[202] = (work.KKT[237])*work.d_inv[118];
  work.v[119] = work.KKT[238];
  work.d[119] = work.v[119];

  if (work.d[119] < 0)
    work.d[119] = settings.kkt_reg;
  else
    work.d[119] += settings.kkt_reg;
  work.d_inv[119] = 1/work.d[119];

  work.L[207] = (work.KKT[239])*work.d_inv[119];
  work.v[120] = work.KKT[240];
  work.d[120] = work.v[120];

  if (work.d[120] < 0)
    work.d[120] = settings.kkt_reg;
  else
    work.d[120] += settings.kkt_reg;
  work.d_inv[120] = 1/work.d[120];

  work.L[213] = (work.KKT[241])*work.d_inv[120];
  work.v[121] = work.KKT[242];
  work.d[121] = work.v[121];

  if (work.d[121] < 0)
    work.d[121] = settings.kkt_reg;
  else
    work.d[121] += settings.kkt_reg;
  work.d_inv[121] = 1/work.d[121];

  work.L[232] = (work.KKT[243])*work.d_inv[121];
  work.v[122] = work.KKT[244];
  work.d[122] = work.v[122];

  if (work.d[122] < 0)
    work.d[122] = settings.kkt_reg;
  else
    work.d[122] += settings.kkt_reg;
  work.d_inv[122] = 1/work.d[122];

  work.L[252] = (work.KKT[245])*work.d_inv[122];
  work.v[123] = work.KKT[246];
  work.d[123] = work.v[123];

  if (work.d[123] < 0)
    work.d[123] = settings.kkt_reg;
  else
    work.d[123] += settings.kkt_reg;
  work.d_inv[123] = 1/work.d[123];

  work.L[273] = (work.KKT[247])*work.d_inv[123];
  work.v[124] = work.KKT[248];
  work.d[124] = work.v[124];

  if (work.d[124] < 0)
    work.d[124] = settings.kkt_reg;
  else
    work.d[124] += settings.kkt_reg;
  work.d_inv[124] = 1/work.d[124];

  work.L[295] = (work.KKT[249])*work.d_inv[124];
  work.v[125] = work.KKT[250];
  work.d[125] = work.v[125];

  if (work.d[125] < 0)
    work.d[125] = settings.kkt_reg;
  else
    work.d[125] += settings.kkt_reg;
  work.d_inv[125] = 1/work.d[125];

  work.L[318] = (work.KKT[251])*work.d_inv[125];
  work.v[126] = work.KKT[252];
  work.d[126] = work.v[126];

  if (work.d[126] < 0)
    work.d[126] = settings.kkt_reg;
  else
    work.d[126] += settings.kkt_reg;
  work.d_inv[126] = 1/work.d[126];

  work.L[342] = (work.KKT[253])*work.d_inv[126];
  work.v[127] = work.KKT[254];
  work.d[127] = work.v[127];

  if (work.d[127] < 0)
    work.d[127] = settings.kkt_reg;
  else
    work.d[127] += settings.kkt_reg;
  work.d_inv[127] = 1/work.d[127];

  work.L[367] = (work.KKT[255])*work.d_inv[127];
  work.v[128] = work.KKT[256];
  work.d[128] = work.v[128];

  if (work.d[128] < 0)
    work.d[128] = settings.kkt_reg;
  else
    work.d[128] += settings.kkt_reg;
  work.d_inv[128] = 1/work.d[128];

  work.L[393] = (work.KKT[257])*work.d_inv[128];
  work.v[129] = work.KKT[258];
  work.d[129] = work.v[129];

  if (work.d[129] < 0)
    work.d[129] = settings.kkt_reg;
  else
    work.d[129] += settings.kkt_reg;
  work.d_inv[129] = 1/work.d[129];

  work.L[420] = (work.KKT[259])*work.d_inv[129];
  work.v[130] = work.KKT[260];
  work.d[130] = work.v[130];

  if (work.d[130] < 0)
    work.d[130] = settings.kkt_reg;
  else
    work.d[130] += settings.kkt_reg;
  work.d_inv[130] = 1/work.d[130];

  work.L[448] = (work.KKT[261])*work.d_inv[130];
  work.v[131] = work.KKT[262];
  work.d[131] = work.v[131];

  if (work.d[131] < 0)
    work.d[131] = settings.kkt_reg;
  else
    work.d[131] += settings.kkt_reg;
  work.d_inv[131] = 1/work.d[131];

  work.L[477] = (work.KKT[263])*work.d_inv[131];
  work.v[132] = work.KKT[264];
  work.d[132] = work.v[132];

  if (work.d[132] < 0)
    work.d[132] = settings.kkt_reg;
  else
    work.d[132] += settings.kkt_reg;
  work.d_inv[132] = 1/work.d[132];

  work.L[507] = (work.KKT[265])*work.d_inv[132];
  work.v[133] = work.KKT[266];
  work.d[133] = work.v[133];

  if (work.d[133] < 0)
    work.d[133] = settings.kkt_reg;
  else
    work.d[133] += settings.kkt_reg;
  work.d_inv[133] = 1/work.d[133];

  work.L[538] = (work.KKT[267])*work.d_inv[133];
  work.v[134] = work.KKT[268];
  work.d[134] = work.v[134];

  if (work.d[134] < 0)
    work.d[134] = settings.kkt_reg;
  else
    work.d[134] += settings.kkt_reg;
  work.d_inv[134] = 1/work.d[134];

  work.L[570] = (work.KKT[269])*work.d_inv[134];
  work.v[135] = work.KKT[270];
  work.d[135] = work.v[135];

  if (work.d[135] < 0)
    work.d[135] = settings.kkt_reg;
  else
    work.d[135] += settings.kkt_reg;
  work.d_inv[135] = 1/work.d[135];

  work.L[603] = (work.KKT[271])*work.d_inv[135];
  work.v[136] = work.KKT[272];
  work.d[136] = work.v[136];

  if (work.d[136] < 0)
    work.d[136] = settings.kkt_reg;
  else
    work.d[136] += settings.kkt_reg;
  work.d_inv[136] = 1/work.d[136];

  work.L[637] = (work.KKT[273])*work.d_inv[136];
  work.v[137] = work.KKT[274];
  work.d[137] = work.v[137];

  if (work.d[137] < 0)
    work.d[137] = settings.kkt_reg;
  else
    work.d[137] += settings.kkt_reg;
  work.d_inv[137] = 1/work.d[137];

  work.L[672] = (work.KKT[275])*work.d_inv[137];
  work.v[138] = work.KKT[276];
  work.d[138] = work.v[138];

  if (work.d[138] < 0)
    work.d[138] = settings.kkt_reg;
  else
    work.d[138] += settings.kkt_reg;
  work.d_inv[138] = 1/work.d[138];

  work.L[708] = (work.KKT[277])*work.d_inv[138];
  work.v[139] = work.KKT[278];
  work.d[139] = work.v[139];

  if (work.d[139] < 0)
    work.d[139] = settings.kkt_reg;
  else
    work.d[139] += settings.kkt_reg;
  work.d_inv[139] = 1/work.d[139];

  work.L[745] = (work.KKT[279])*work.d_inv[139];
  work.v[140] = work.KKT[280];
  work.d[140] = work.v[140];

  if (work.d[140] < 0)
    work.d[140] = settings.kkt_reg;
  else
    work.d[140] += settings.kkt_reg;
  work.d_inv[140] = 1/work.d[140];

  work.L[783] = (work.KKT[281])*work.d_inv[140];
  work.v[141] = work.KKT[282];
  work.d[141] = work.v[141];

  if (work.d[141] < 0)
    work.d[141] = settings.kkt_reg;
  else
    work.d[141] += settings.kkt_reg;
  work.d_inv[141] = 1/work.d[141];

  work.L[822] = (work.KKT[283])*work.d_inv[141];
  work.v[142] = work.KKT[284];
  work.d[142] = work.v[142];

  if (work.d[142] < 0)
    work.d[142] = settings.kkt_reg;
  else
    work.d[142] += settings.kkt_reg;
  work.d_inv[142] = 1/work.d[142];

  work.L[862] = (work.KKT[285])*work.d_inv[142];
  work.v[143] = work.KKT[286];
  work.d[143] = work.v[143];

  if (work.d[143] < 0)
    work.d[143] = settings.kkt_reg;
  else
    work.d[143] += settings.kkt_reg;
  work.d_inv[143] = 1/work.d[143];

  work.L[903] = (work.KKT[287])*work.d_inv[143];
  work.v[144] = work.KKT[288];
  work.d[144] = work.v[144];

  if (work.d[144] < 0)
    work.d[144] = settings.kkt_reg;
  else
    work.d[144] += settings.kkt_reg;
  work.d_inv[144] = 1/work.d[144];

  work.L[945] = (work.KKT[289])*work.d_inv[144];
  work.v[145] = work.KKT[290];
  work.d[145] = work.v[145];

  if (work.d[145] < 0)
    work.d[145] = settings.kkt_reg;
  else
    work.d[145] += settings.kkt_reg;
  work.d_inv[145] = 1/work.d[145];

  work.L[988] = (work.KKT[291])*work.d_inv[145];
  work.v[146] = work.KKT[292];
  work.d[146] = work.v[146];

  if (work.d[146] < 0)
    work.d[146] = settings.kkt_reg;
  else
    work.d[146] += settings.kkt_reg;
  work.d_inv[146] = 1/work.d[146];

  work.L[1032] = (work.KKT[293])*work.d_inv[146];
  work.v[147] = work.KKT[294];
  work.d[147] = work.v[147];

  if (work.d[147] < 0)
    work.d[147] = settings.kkt_reg;
  else
    work.d[147] += settings.kkt_reg;
  work.d_inv[147] = 1/work.d[147];

  work.L[1077] = (work.KKT[295])*work.d_inv[147];
  work.v[148] = work.KKT[296];
  work.d[148] = work.v[148];

  if (work.d[148] < 0)
    work.d[148] = settings.kkt_reg;
  else
    work.d[148] += settings.kkt_reg;
  work.d_inv[148] = 1/work.d[148];

  work.L[1123] = (work.KKT[297])*work.d_inv[148];
  work.v[149] = work.KKT[298];
  work.d[149] = work.v[149];

  if (work.d[149] < 0)
    work.d[149] = settings.kkt_reg;
  else
    work.d[149] += settings.kkt_reg;
  work.d_inv[149] = 1/work.d[149];

  work.L[1199] = (work.KKT[299])*work.d_inv[149];
  work.v[150] = 0;
  work.d[150] = work.v[150];

  if (work.d[150] < 0)
    work.d[150] = settings.kkt_reg;
  else
    work.d[150] += settings.kkt_reg;
  work.d_inv[150] = 1/work.d[150];

  work.L[1] = (work.KKT[300])*work.d_inv[150];
  work.L[211] = (work.KKT[301])*work.d_inv[150];
  work.v[30] = work.L[0]*work.d[30];
  work.v[150] = work.L[1]*work.d[150];
  work.v[151] = work.KKT[302]-work.L[0]*work.v[30]-work.L[1]*work.v[150];
  work.d[151] = work.v[151];

  if (work.d[151] > 0)
    work.d[151] = -settings.kkt_reg;
  else
    work.d[151] -= settings.kkt_reg;

  work.d_inv[151] = 1/work.d[151];

  work.L[212] = (-work.L[211]*work.v[150])*work.d_inv[151];
  work.v[152] = 0;
  work.d[152] = work.v[152];

  if (work.d[152] < 0)
    work.d[152] = settings.kkt_reg;
  else
    work.d[152] += settings.kkt_reg;
  work.d_inv[152] = 1/work.d[152];

  work.L[3] = (work.KKT[303])*work.d_inv[152];
  work.L[230] = (work.KKT[304])*work.d_inv[152];
  work.v[31] = work.L[2]*work.d[31];
  work.v[152] = work.L[3]*work.d[152];
  work.v[153] = work.KKT[305]-work.L[2]*work.v[31]-work.L[3]*work.v[152];
  work.d[153] = work.v[153];

  if (work.d[153] > 0)
    work.d[153] = -settings.kkt_reg;
  else
    work.d[153] -= settings.kkt_reg;

  work.d_inv[153] = 1/work.d[153];

  work.L[231] = (-work.L[230]*work.v[152])*work.d_inv[153];
  work.v[154] = 0;
  work.d[154] = work.v[154];

  if (work.d[154] < 0)
    work.d[154] = settings.kkt_reg;
  else
    work.d[154] += settings.kkt_reg;
  work.d_inv[154] = 1/work.d[154];

  work.L[5] = (work.KKT[306])*work.d_inv[154];
  work.L[250] = (work.KKT[307])*work.d_inv[154];
  work.v[32] = work.L[4]*work.d[32];
  work.v[154] = work.L[5]*work.d[154];
  work.v[155] = work.KKT[308]-work.L[4]*work.v[32]-work.L[5]*work.v[154];
  work.d[155] = work.v[155];

  if (work.d[155] > 0)
    work.d[155] = -settings.kkt_reg;
  else
    work.d[155] -= settings.kkt_reg;

  work.d_inv[155] = 1/work.d[155];

  work.L[251] = (-work.L[250]*work.v[154])*work.d_inv[155];
  work.v[156] = 0;
  work.d[156] = work.v[156];

  if (work.d[156] < 0)
    work.d[156] = settings.kkt_reg;
  else
    work.d[156] += settings.kkt_reg;
  work.d_inv[156] = 1/work.d[156];

  work.L[7] = (work.KKT[309])*work.d_inv[156];
  work.L[271] = (work.KKT[310])*work.d_inv[156];
  work.v[33] = work.L[6]*work.d[33];
  work.v[156] = work.L[7]*work.d[156];
  work.v[157] = work.KKT[311]-work.L[6]*work.v[33]-work.L[7]*work.v[156];
  work.d[157] = work.v[157];

  if (work.d[157] > 0)
    work.d[157] = -settings.kkt_reg;
  else
    work.d[157] -= settings.kkt_reg;

  work.d_inv[157] = 1/work.d[157];

  work.L[272] = (-work.L[271]*work.v[156])*work.d_inv[157];
  work.v[158] = 0;
  work.d[158] = work.v[158];

  if (work.d[158] < 0)
    work.d[158] = settings.kkt_reg;
  else
    work.d[158] += settings.kkt_reg;
  work.d_inv[158] = 1/work.d[158];

  work.L[9] = (work.KKT[312])*work.d_inv[158];
  work.L[293] = (work.KKT[313])*work.d_inv[158];
  work.v[34] = work.L[8]*work.d[34];
  work.v[158] = work.L[9]*work.d[158];
  work.v[159] = work.KKT[314]-work.L[8]*work.v[34]-work.L[9]*work.v[158];
  work.d[159] = work.v[159];

  if (work.d[159] > 0)
    work.d[159] = -settings.kkt_reg;
  else
    work.d[159] -= settings.kkt_reg;

  work.d_inv[159] = 1/work.d[159];

  work.L[294] = (-work.L[293]*work.v[158])*work.d_inv[159];
  work.v[160] = 0;
  work.d[160] = work.v[160];

  if (work.d[160] < 0)
    work.d[160] = settings.kkt_reg;
  else
    work.d[160] += settings.kkt_reg;
  work.d_inv[160] = 1/work.d[160];

  work.L[11] = (work.KKT[315])*work.d_inv[160];
  work.L[316] = (work.KKT[316])*work.d_inv[160];
  work.v[35] = work.L[10]*work.d[35];
  work.v[160] = work.L[11]*work.d[160];
  work.v[161] = work.KKT[317]-work.L[10]*work.v[35]-work.L[11]*work.v[160];
  work.d[161] = work.v[161];

  if (work.d[161] > 0)
    work.d[161] = -settings.kkt_reg;
  else
    work.d[161] -= settings.kkt_reg;

  work.d_inv[161] = 1/work.d[161];

  work.L[317] = (-work.L[316]*work.v[160])*work.d_inv[161];
  work.v[162] = 0;
  work.d[162] = work.v[162];

  if (work.d[162] < 0)
    work.d[162] = settings.kkt_reg;
  else
    work.d[162] += settings.kkt_reg;
  work.d_inv[162] = 1/work.d[162];

  work.L[13] = (work.KKT[318])*work.d_inv[162];
  work.L[340] = (work.KKT[319])*work.d_inv[162];
  work.v[36] = work.L[12]*work.d[36];
  work.v[162] = work.L[13]*work.d[162];
  work.v[163] = work.KKT[320]-work.L[12]*work.v[36]-work.L[13]*work.v[162];
  work.d[163] = work.v[163];

  if (work.d[163] > 0)
    work.d[163] = -settings.kkt_reg;
  else
    work.d[163] -= settings.kkt_reg;

  work.d_inv[163] = 1/work.d[163];

  work.L[341] = (-work.L[340]*work.v[162])*work.d_inv[163];
  work.v[164] = 0;
  work.d[164] = work.v[164];

  if (work.d[164] < 0)
    work.d[164] = settings.kkt_reg;
  else
    work.d[164] += settings.kkt_reg;
  work.d_inv[164] = 1/work.d[164];

  work.L[15] = (work.KKT[321])*work.d_inv[164];
  work.L[365] = (work.KKT[322])*work.d_inv[164];
  work.v[37] = work.L[14]*work.d[37];
  work.v[164] = work.L[15]*work.d[164];
  work.v[165] = work.KKT[323]-work.L[14]*work.v[37]-work.L[15]*work.v[164];
  work.d[165] = work.v[165];

  if (work.d[165] > 0)
    work.d[165] = -settings.kkt_reg;
  else
    work.d[165] -= settings.kkt_reg;

  work.d_inv[165] = 1/work.d[165];

  work.L[366] = (-work.L[365]*work.v[164])*work.d_inv[165];
  work.v[166] = 0;
  work.d[166] = work.v[166];

  if (work.d[166] < 0)
    work.d[166] = settings.kkt_reg;
  else
    work.d[166] += settings.kkt_reg;
  work.d_inv[166] = 1/work.d[166];

  work.L[17] = (work.KKT[324])*work.d_inv[166];
  work.L[391] = (work.KKT[325])*work.d_inv[166];
  work.v[38] = work.L[16]*work.d[38];
  work.v[166] = work.L[17]*work.d[166];
  work.v[167] = work.KKT[326]-work.L[16]*work.v[38]-work.L[17]*work.v[166];
  work.d[167] = work.v[167];

  if (work.d[167] > 0)
    work.d[167] = -settings.kkt_reg;
  else
    work.d[167] -= settings.kkt_reg;

  work.d_inv[167] = 1/work.d[167];

  work.L[392] = (-work.L[391]*work.v[166])*work.d_inv[167];
  work.v[168] = 0;
  work.d[168] = work.v[168];

  if (work.d[168] < 0)
    work.d[168] = settings.kkt_reg;
  else
    work.d[168] += settings.kkt_reg;
  work.d_inv[168] = 1/work.d[168];

  work.L[19] = (work.KKT[327])*work.d_inv[168];
  work.L[418] = (work.KKT[328])*work.d_inv[168];
  work.v[39] = work.L[18]*work.d[39];
  work.v[168] = work.L[19]*work.d[168];
  work.v[169] = work.KKT[329]-work.L[18]*work.v[39]-work.L[19]*work.v[168];
  work.d[169] = work.v[169];

  if (work.d[169] > 0)
    work.d[169] = -settings.kkt_reg;
  else
    work.d[169] -= settings.kkt_reg;

  work.d_inv[169] = 1/work.d[169];

  work.L[419] = (-work.L[418]*work.v[168])*work.d_inv[169];
  work.v[170] = 0;
  work.d[170] = work.v[170];

  if (work.d[170] < 0)
    work.d[170] = settings.kkt_reg;
  else
    work.d[170] += settings.kkt_reg;
  work.d_inv[170] = 1/work.d[170];

  work.L[21] = (work.KKT[330])*work.d_inv[170];
  work.L[446] = (work.KKT[331])*work.d_inv[170];
  work.v[40] = work.L[20]*work.d[40];
  work.v[170] = work.L[21]*work.d[170];
  work.v[171] = work.KKT[332]-work.L[20]*work.v[40]-work.L[21]*work.v[170];
  work.d[171] = work.v[171];

  if (work.d[171] > 0)
    work.d[171] = -settings.kkt_reg;
  else
    work.d[171] -= settings.kkt_reg;

  work.d_inv[171] = 1/work.d[171];

  work.L[447] = (-work.L[446]*work.v[170])*work.d_inv[171];
  work.v[172] = 0;
  work.d[172] = work.v[172];

  if (work.d[172] < 0)
    work.d[172] = settings.kkt_reg;
  else
    work.d[172] += settings.kkt_reg;
  work.d_inv[172] = 1/work.d[172];

  work.L[23] = (work.KKT[333])*work.d_inv[172];
  work.L[475] = (work.KKT[334])*work.d_inv[172];
  work.v[41] = work.L[22]*work.d[41];
  work.v[172] = work.L[23]*work.d[172];
  work.v[173] = work.KKT[335]-work.L[22]*work.v[41]-work.L[23]*work.v[172];
  work.d[173] = work.v[173];

  if (work.d[173] > 0)
    work.d[173] = -settings.kkt_reg;
  else
    work.d[173] -= settings.kkt_reg;

  work.d_inv[173] = 1/work.d[173];

  work.L[476] = (-work.L[475]*work.v[172])*work.d_inv[173];
  work.v[174] = 0;
  work.d[174] = work.v[174];

  if (work.d[174] < 0)
    work.d[174] = settings.kkt_reg;
  else
    work.d[174] += settings.kkt_reg;
  work.d_inv[174] = 1/work.d[174];

  work.L[25] = (work.KKT[336])*work.d_inv[174];
  work.L[505] = (work.KKT[337])*work.d_inv[174];
  work.v[42] = work.L[24]*work.d[42];
  work.v[174] = work.L[25]*work.d[174];
  work.v[175] = work.KKT[338]-work.L[24]*work.v[42]-work.L[25]*work.v[174];
  work.d[175] = work.v[175];

  if (work.d[175] > 0)
    work.d[175] = -settings.kkt_reg;
  else
    work.d[175] -= settings.kkt_reg;

  work.d_inv[175] = 1/work.d[175];

  work.L[506] = (-work.L[505]*work.v[174])*work.d_inv[175];
  work.v[176] = 0;
  work.d[176] = work.v[176];

  if (work.d[176] < 0)
    work.d[176] = settings.kkt_reg;
  else
    work.d[176] += settings.kkt_reg;
  work.d_inv[176] = 1/work.d[176];

  work.L[27] = (work.KKT[339])*work.d_inv[176];
  work.L[536] = (work.KKT[340])*work.d_inv[176];
  work.v[43] = work.L[26]*work.d[43];
  work.v[176] = work.L[27]*work.d[176];
  work.v[177] = work.KKT[341]-work.L[26]*work.v[43]-work.L[27]*work.v[176];
  work.d[177] = work.v[177];

  if (work.d[177] > 0)
    work.d[177] = -settings.kkt_reg;
  else
    work.d[177] -= settings.kkt_reg;

  work.d_inv[177] = 1/work.d[177];

  work.L[537] = (-work.L[536]*work.v[176])*work.d_inv[177];
  work.v[178] = 0;
  work.d[178] = work.v[178];

  if (work.d[178] < 0)
    work.d[178] = settings.kkt_reg;
  else
    work.d[178] += settings.kkt_reg;
  work.d_inv[178] = 1/work.d[178];

  work.L[29] = (work.KKT[342])*work.d_inv[178];
  work.L[568] = (work.KKT[343])*work.d_inv[178];
  work.v[44] = work.L[28]*work.d[44];
  work.v[178] = work.L[29]*work.d[178];
  work.v[179] = work.KKT[344]-work.L[28]*work.v[44]-work.L[29]*work.v[178];
  work.d[179] = work.v[179];

  if (work.d[179] > 0)
    work.d[179] = -settings.kkt_reg;
  else
    work.d[179] -= settings.kkt_reg;

  work.d_inv[179] = 1/work.d[179];

  work.L[569] = (-work.L[568]*work.v[178])*work.d_inv[179];
  work.v[180] = 0;
  work.d[180] = work.v[180];

  if (work.d[180] < 0)
    work.d[180] = settings.kkt_reg;
  else
    work.d[180] += settings.kkt_reg;
  work.d_inv[180] = 1/work.d[180];

  work.L[31] = (work.KKT[345])*work.d_inv[180];
  work.L[601] = (work.KKT[346])*work.d_inv[180];
  work.v[45] = work.L[30]*work.d[45];
  work.v[180] = work.L[31]*work.d[180];
  work.v[181] = work.KKT[347]-work.L[30]*work.v[45]-work.L[31]*work.v[180];
  work.d[181] = work.v[181];

  if (work.d[181] > 0)
    work.d[181] = -settings.kkt_reg;
  else
    work.d[181] -= settings.kkt_reg;

  work.d_inv[181] = 1/work.d[181];

  work.L[602] = (-work.L[601]*work.v[180])*work.d_inv[181];
  work.v[182] = 0;
  work.d[182] = work.v[182];

  if (work.d[182] < 0)
    work.d[182] = settings.kkt_reg;
  else
    work.d[182] += settings.kkt_reg;
  work.d_inv[182] = 1/work.d[182];

  work.L[33] = (work.KKT[348])*work.d_inv[182];
  work.L[635] = (work.KKT[349])*work.d_inv[182];
  work.v[46] = work.L[32]*work.d[46];
  work.v[182] = work.L[33]*work.d[182];
  work.v[183] = work.KKT[350]-work.L[32]*work.v[46]-work.L[33]*work.v[182];
  work.d[183] = work.v[183];

  if (work.d[183] > 0)
    work.d[183] = -settings.kkt_reg;
  else
    work.d[183] -= settings.kkt_reg;

  work.d_inv[183] = 1/work.d[183];

  work.L[636] = (-work.L[635]*work.v[182])*work.d_inv[183];
  work.v[184] = 0;
  work.d[184] = work.v[184];

  if (work.d[184] < 0)
    work.d[184] = settings.kkt_reg;
  else
    work.d[184] += settings.kkt_reg;
  work.d_inv[184] = 1/work.d[184];

  work.L[35] = (work.KKT[351])*work.d_inv[184];
  work.L[670] = (work.KKT[352])*work.d_inv[184];
  work.v[47] = work.L[34]*work.d[47];
  work.v[184] = work.L[35]*work.d[184];
  work.v[185] = work.KKT[353]-work.L[34]*work.v[47]-work.L[35]*work.v[184];
  work.d[185] = work.v[185];

  if (work.d[185] > 0)
    work.d[185] = -settings.kkt_reg;
  else
    work.d[185] -= settings.kkt_reg;

  work.d_inv[185] = 1/work.d[185];

  work.L[671] = (-work.L[670]*work.v[184])*work.d_inv[185];
  work.v[186] = 0;
  work.d[186] = work.v[186];

  if (work.d[186] < 0)
    work.d[186] = settings.kkt_reg;
  else
    work.d[186] += settings.kkt_reg;
  work.d_inv[186] = 1/work.d[186];

  work.L[37] = (work.KKT[354])*work.d_inv[186];
  work.L[706] = (work.KKT[355])*work.d_inv[186];
  work.v[48] = work.L[36]*work.d[48];
  work.v[186] = work.L[37]*work.d[186];
  work.v[187] = work.KKT[356]-work.L[36]*work.v[48]-work.L[37]*work.v[186];
  work.d[187] = work.v[187];

  if (work.d[187] > 0)
    work.d[187] = -settings.kkt_reg;
  else
    work.d[187] -= settings.kkt_reg;

  work.d_inv[187] = 1/work.d[187];

  work.L[707] = (-work.L[706]*work.v[186])*work.d_inv[187];
  work.v[188] = 0;
  work.d[188] = work.v[188];

  if (work.d[188] < 0)
    work.d[188] = settings.kkt_reg;
  else
    work.d[188] += settings.kkt_reg;
  work.d_inv[188] = 1/work.d[188];

  work.L[39] = (work.KKT[357])*work.d_inv[188];
  work.L[743] = (work.KKT[358])*work.d_inv[188];
  work.v[49] = work.L[38]*work.d[49];
  work.v[188] = work.L[39]*work.d[188];
  work.v[189] = work.KKT[359]-work.L[38]*work.v[49]-work.L[39]*work.v[188];
  work.d[189] = work.v[189];

  if (work.d[189] > 0)
    work.d[189] = -settings.kkt_reg;
  else
    work.d[189] -= settings.kkt_reg;

  work.d_inv[189] = 1/work.d[189];

  work.L[744] = (-work.L[743]*work.v[188])*work.d_inv[189];
  work.v[190] = 0;
  work.d[190] = work.v[190];

  if (work.d[190] < 0)
    work.d[190] = settings.kkt_reg;
  else
    work.d[190] += settings.kkt_reg;
  work.d_inv[190] = 1/work.d[190];

  work.L[41] = (work.KKT[360])*work.d_inv[190];
  work.L[781] = (work.KKT[361])*work.d_inv[190];
  work.v[50] = work.L[40]*work.d[50];
  work.v[190] = work.L[41]*work.d[190];
  work.v[191] = work.KKT[362]-work.L[40]*work.v[50]-work.L[41]*work.v[190];
  work.d[191] = work.v[191];

  if (work.d[191] > 0)
    work.d[191] = -settings.kkt_reg;
  else
    work.d[191] -= settings.kkt_reg;

  work.d_inv[191] = 1/work.d[191];

  work.L[782] = (-work.L[781]*work.v[190])*work.d_inv[191];
  work.v[192] = 0;
  work.d[192] = work.v[192];

  if (work.d[192] < 0)
    work.d[192] = settings.kkt_reg;
  else
    work.d[192] += settings.kkt_reg;
  work.d_inv[192] = 1/work.d[192];

  work.L[43] = (work.KKT[363])*work.d_inv[192];
  work.L[820] = (work.KKT[364])*work.d_inv[192];
  work.v[51] = work.L[42]*work.d[51];
  work.v[192] = work.L[43]*work.d[192];
  work.v[193] = work.KKT[365]-work.L[42]*work.v[51]-work.L[43]*work.v[192];
  work.d[193] = work.v[193];

  if (work.d[193] > 0)
    work.d[193] = -settings.kkt_reg;
  else
    work.d[193] -= settings.kkt_reg;

  work.d_inv[193] = 1/work.d[193];

  work.L[821] = (-work.L[820]*work.v[192])*work.d_inv[193];
  work.v[194] = 0;
  work.d[194] = work.v[194];

  if (work.d[194] < 0)
    work.d[194] = settings.kkt_reg;
  else
    work.d[194] += settings.kkt_reg;
  work.d_inv[194] = 1/work.d[194];

  work.L[45] = (work.KKT[366])*work.d_inv[194];
  work.L[860] = (work.KKT[367])*work.d_inv[194];
  work.v[52] = work.L[44]*work.d[52];
  work.v[194] = work.L[45]*work.d[194];
  work.v[195] = work.KKT[368]-work.L[44]*work.v[52]-work.L[45]*work.v[194];
  work.d[195] = work.v[195];

  if (work.d[195] > 0)
    work.d[195] = -settings.kkt_reg;
  else
    work.d[195] -= settings.kkt_reg;

  work.d_inv[195] = 1/work.d[195];

  work.L[861] = (-work.L[860]*work.v[194])*work.d_inv[195];
  work.v[196] = 0;
  work.d[196] = work.v[196];

  if (work.d[196] < 0)
    work.d[196] = settings.kkt_reg;
  else
    work.d[196] += settings.kkt_reg;
  work.d_inv[196] = 1/work.d[196];

  work.L[47] = (work.KKT[369])*work.d_inv[196];
  work.L[901] = (work.KKT[370])*work.d_inv[196];
  work.v[53] = work.L[46]*work.d[53];
  work.v[196] = work.L[47]*work.d[196];
  work.v[197] = work.KKT[371]-work.L[46]*work.v[53]-work.L[47]*work.v[196];
  work.d[197] = work.v[197];

  if (work.d[197] > 0)
    work.d[197] = -settings.kkt_reg;
  else
    work.d[197] -= settings.kkt_reg;

  work.d_inv[197] = 1/work.d[197];

  work.L[902] = (-work.L[901]*work.v[196])*work.d_inv[197];
  work.v[198] = 0;
  work.d[198] = work.v[198];

  if (work.d[198] < 0)
    work.d[198] = settings.kkt_reg;
  else
    work.d[198] += settings.kkt_reg;
  work.d_inv[198] = 1/work.d[198];

  work.L[49] = (work.KKT[372])*work.d_inv[198];
  work.L[943] = (work.KKT[373])*work.d_inv[198];
  work.v[54] = work.L[48]*work.d[54];
  work.v[198] = work.L[49]*work.d[198];
  work.v[199] = work.KKT[374]-work.L[48]*work.v[54]-work.L[49]*work.v[198];
  work.d[199] = work.v[199];

  if (work.d[199] > 0)
    work.d[199] = -settings.kkt_reg;
  else
    work.d[199] -= settings.kkt_reg;

  work.d_inv[199] = 1/work.d[199];

  work.L[944] = (-work.L[943]*work.v[198])*work.d_inv[199];
  work.v[200] = 0;
  work.d[200] = work.v[200];

  if (work.d[200] < 0)
    work.d[200] = settings.kkt_reg;
  else
    work.d[200] += settings.kkt_reg;
  work.d_inv[200] = 1/work.d[200];

  work.L[51] = (work.KKT[375])*work.d_inv[200];
  work.L[986] = (work.KKT[376])*work.d_inv[200];
  work.v[55] = work.L[50]*work.d[55];
  work.v[200] = work.L[51]*work.d[200];
  work.v[201] = work.KKT[377]-work.L[50]*work.v[55]-work.L[51]*work.v[200];
  work.d[201] = work.v[201];

  if (work.d[201] > 0)
    work.d[201] = -settings.kkt_reg;
  else
    work.d[201] -= settings.kkt_reg;

  work.d_inv[201] = 1/work.d[201];

  work.L[987] = (-work.L[986]*work.v[200])*work.d_inv[201];
  work.v[202] = 0;
  work.d[202] = work.v[202];

  if (work.d[202] < 0)
    work.d[202] = settings.kkt_reg;
  else
    work.d[202] += settings.kkt_reg;
  work.d_inv[202] = 1/work.d[202];

  work.L[53] = (work.KKT[378])*work.d_inv[202];
  work.L[1030] = (work.KKT[379])*work.d_inv[202];
  work.v[56] = work.L[52]*work.d[56];
  work.v[202] = work.L[53]*work.d[202];
  work.v[203] = work.KKT[380]-work.L[52]*work.v[56]-work.L[53]*work.v[202];
  work.d[203] = work.v[203];

  if (work.d[203] > 0)
    work.d[203] = -settings.kkt_reg;
  else
    work.d[203] -= settings.kkt_reg;

  work.d_inv[203] = 1/work.d[203];

  work.L[1031] = (-work.L[1030]*work.v[202])*work.d_inv[203];
  work.v[204] = 0;
  work.d[204] = work.v[204];

  if (work.d[204] < 0)
    work.d[204] = settings.kkt_reg;
  else
    work.d[204] += settings.kkt_reg;
  work.d_inv[204] = 1/work.d[204];

  work.L[55] = (work.KKT[381])*work.d_inv[204];
  work.L[1075] = (work.KKT[382])*work.d_inv[204];
  work.v[57] = work.L[54]*work.d[57];
  work.v[204] = work.L[55]*work.d[204];
  work.v[205] = work.KKT[383]-work.L[54]*work.v[57]-work.L[55]*work.v[204];
  work.d[205] = work.v[205];

  if (work.d[205] > 0)
    work.d[205] = -settings.kkt_reg;
  else
    work.d[205] -= settings.kkt_reg;

  work.d_inv[205] = 1/work.d[205];

  work.L[1076] = (-work.L[1075]*work.v[204])*work.d_inv[205];
  work.v[206] = 0;
  work.d[206] = work.v[206];

  if (work.d[206] < 0)
    work.d[206] = settings.kkt_reg;
  else
    work.d[206] += settings.kkt_reg;
  work.d_inv[206] = 1/work.d[206];

  work.L[57] = (work.KKT[384])*work.d_inv[206];
  work.L[1121] = (work.KKT[385])*work.d_inv[206];
  work.v[58] = work.L[56]*work.d[58];
  work.v[206] = work.L[57]*work.d[206];
  work.v[207] = work.KKT[386]-work.L[56]*work.v[58]-work.L[57]*work.v[206];
  work.d[207] = work.v[207];

  if (work.d[207] > 0)
    work.d[207] = -settings.kkt_reg;
  else
    work.d[207] -= settings.kkt_reg;

  work.d_inv[207] = 1/work.d[207];

  work.L[1122] = (-work.L[1121]*work.v[206])*work.d_inv[207];
  work.v[208] = 0;
  work.d[208] = work.v[208];

  if (work.d[208] < 0)
    work.d[208] = settings.kkt_reg;
  else
    work.d[208] += settings.kkt_reg;
  work.d_inv[208] = 1/work.d[208];

  work.L[59] = (work.KKT[387])*work.d_inv[208];
  work.L[1197] = (work.KKT[388])*work.d_inv[208];
  work.v[59] = work.L[58]*work.d[59];
  work.v[208] = work.L[59]*work.d[208];
  work.v[209] = work.KKT[389]-work.L[58]*work.v[59]-work.L[59]*work.v[208];
  work.d[209] = work.v[209];

  if (work.d[209] > 0)
    work.d[209] = -settings.kkt_reg;
  else
    work.d[209] -= settings.kkt_reg;

  work.d_inv[209] = 1/work.d[209];

  work.L[1198] = (-work.L[1197]*work.v[208])*work.d_inv[209];
  work.v[210] = 0;
  work.d[210] = work.v[210];

  if (work.d[210] < 0)
    work.d[210] = settings.kkt_reg;
  else
    work.d[210] += settings.kkt_reg;
  work.d_inv[210] = 1/work.d[210];

  work.L[61] = (work.KKT[390])*work.d_inv[210];
  work.L[63] = (work.KKT[391])*work.d_inv[210];
  work.v[60] = work.L[60]*work.d[60];
  work.v[210] = work.L[61]*work.d[210];
  work.v[211] = work.KKT[392]-work.L[60]*work.v[60]-work.L[61]*work.v[210];
  work.d[211] = work.v[211];

  if (work.d[211] > 0)
    work.d[211] = -settings.kkt_reg;
  else
    work.d[211] -= settings.kkt_reg;

  work.d_inv[211] = 1/work.d[211];

  work.L[64] = (-work.L[63]*work.v[210])*work.d_inv[211];
  work.L[215] = (work.KKT[393])*work.d_inv[211];
  work.v[90] = work.L[62]*work.d[90];
  work.v[210] = work.L[63]*work.d[210];
  work.v[211] = work.L[64]*work.d[211];
  work.v[212] = work.KKT[394]-work.L[62]*work.v[90]-work.L[63]*work.v[210]-work.L[64]*work.v[211];
  work.d[212] = work.v[212];

  if (work.d[212] > 0)
    work.d[212] = -settings.kkt_reg;
  else
    work.d[212] -= settings.kkt_reg;

  work.d_inv[212] = 1/work.d[212];

  work.L[216] = (work.KKT[395]-work.L[215]*work.v[211])*work.d_inv[212];
  work.v[213] = 0;
  work.d[213] = work.v[213];

  if (work.d[213] < 0)
    work.d[213] = settings.kkt_reg;
  else
    work.d[213] += settings.kkt_reg;
  work.d_inv[213] = 1/work.d[213];

  work.L[66] = (work.KKT[396])*work.d_inv[213];
  work.L[68] = (work.KKT[397])*work.d_inv[213];
  work.v[61] = work.L[65]*work.d[61];
  work.v[213] = work.L[66]*work.d[213];
  work.v[214] = work.KKT[398]-work.L[65]*work.v[61]-work.L[66]*work.v[213];
  work.d[214] = work.v[214];

  if (work.d[214] > 0)
    work.d[214] = -settings.kkt_reg;
  else
    work.d[214] -= settings.kkt_reg;

  work.d_inv[214] = 1/work.d[214];

  work.L[69] = (-work.L[68]*work.v[213])*work.d_inv[214];
  work.L[234] = (work.KKT[399])*work.d_inv[214];
  work.v[91] = work.L[67]*work.d[91];
  work.v[213] = work.L[68]*work.d[213];
  work.v[214] = work.L[69]*work.d[214];
  work.v[215] = work.KKT[400]-work.L[67]*work.v[91]-work.L[68]*work.v[213]-work.L[69]*work.v[214];
  work.d[215] = work.v[215];

  if (work.d[215] > 0)
    work.d[215] = -settings.kkt_reg;
  else
    work.d[215] -= settings.kkt_reg;

  work.d_inv[215] = 1/work.d[215];

  work.L[235] = (work.KKT[401]-work.L[234]*work.v[214])*work.d_inv[215];
  work.v[216] = 0;
  work.d[216] = work.v[216];

  if (work.d[216] < 0)
    work.d[216] = settings.kkt_reg;
  else
    work.d[216] += settings.kkt_reg;
  work.d_inv[216] = 1/work.d[216];

  work.L[71] = (work.KKT[402])*work.d_inv[216];
  work.L[73] = (work.KKT[403])*work.d_inv[216];
  work.v[62] = work.L[70]*work.d[62];
  work.v[216] = work.L[71]*work.d[216];
  work.v[217] = work.KKT[404]-work.L[70]*work.v[62]-work.L[71]*work.v[216];
  work.d[217] = work.v[217];

  if (work.d[217] > 0)
    work.d[217] = -settings.kkt_reg;
  else
    work.d[217] -= settings.kkt_reg;

  work.d_inv[217] = 1/work.d[217];

  work.L[74] = (-work.L[73]*work.v[216])*work.d_inv[217];
  work.L[254] = (work.KKT[405])*work.d_inv[217];
  work.v[92] = work.L[72]*work.d[92];
  work.v[216] = work.L[73]*work.d[216];
  work.v[217] = work.L[74]*work.d[217];
  work.v[218] = work.KKT[406]-work.L[72]*work.v[92]-work.L[73]*work.v[216]-work.L[74]*work.v[217];
  work.d[218] = work.v[218];

  if (work.d[218] > 0)
    work.d[218] = -settings.kkt_reg;
  else
    work.d[218] -= settings.kkt_reg;

  work.d_inv[218] = 1/work.d[218];

  work.L[255] = (work.KKT[407]-work.L[254]*work.v[217])*work.d_inv[218];
  work.v[219] = 0;
  work.d[219] = work.v[219];

  if (work.d[219] < 0)
    work.d[219] = settings.kkt_reg;
  else
    work.d[219] += settings.kkt_reg;
  work.d_inv[219] = 1/work.d[219];

  work.L[76] = (work.KKT[408])*work.d_inv[219];
  work.L[78] = (work.KKT[409])*work.d_inv[219];
  work.v[63] = work.L[75]*work.d[63];
  work.v[219] = work.L[76]*work.d[219];
  work.v[220] = work.KKT[410]-work.L[75]*work.v[63]-work.L[76]*work.v[219];
  work.d[220] = work.v[220];

  if (work.d[220] > 0)
    work.d[220] = -settings.kkt_reg;
  else
    work.d[220] -= settings.kkt_reg;

  work.d_inv[220] = 1/work.d[220];

  work.L[79] = (-work.L[78]*work.v[219])*work.d_inv[220];
  work.L[275] = (work.KKT[411])*work.d_inv[220];
  work.v[93] = work.L[77]*work.d[93];
  work.v[219] = work.L[78]*work.d[219];
  work.v[220] = work.L[79]*work.d[220];
  work.v[221] = work.KKT[412]-work.L[77]*work.v[93]-work.L[78]*work.v[219]-work.L[79]*work.v[220];
  work.d[221] = work.v[221];

  if (work.d[221] > 0)
    work.d[221] = -settings.kkt_reg;
  else
    work.d[221] -= settings.kkt_reg;

  work.d_inv[221] = 1/work.d[221];

  work.L[276] = (work.KKT[413]-work.L[275]*work.v[220])*work.d_inv[221];
  work.v[222] = 0;
  work.d[222] = work.v[222];

  if (work.d[222] < 0)
    work.d[222] = settings.kkt_reg;
  else
    work.d[222] += settings.kkt_reg;
  work.d_inv[222] = 1/work.d[222];

  work.L[81] = (work.KKT[414])*work.d_inv[222];
  work.L[83] = (work.KKT[415])*work.d_inv[222];
  work.v[64] = work.L[80]*work.d[64];
  work.v[222] = work.L[81]*work.d[222];
  work.v[223] = work.KKT[416]-work.L[80]*work.v[64]-work.L[81]*work.v[222];
  work.d[223] = work.v[223];

  if (work.d[223] > 0)
    work.d[223] = -settings.kkt_reg;
  else
    work.d[223] -= settings.kkt_reg;

  work.d_inv[223] = 1/work.d[223];

  work.L[84] = (-work.L[83]*work.v[222])*work.d_inv[223];
  work.L[297] = (work.KKT[417])*work.d_inv[223];
  work.v[94] = work.L[82]*work.d[94];
  work.v[222] = work.L[83]*work.d[222];
  work.v[223] = work.L[84]*work.d[223];
  work.v[224] = work.KKT[418]-work.L[82]*work.v[94]-work.L[83]*work.v[222]-work.L[84]*work.v[223];
  work.d[224] = work.v[224];

  if (work.d[224] > 0)
    work.d[224] = -settings.kkt_reg;
  else
    work.d[224] -= settings.kkt_reg;

  work.d_inv[224] = 1/work.d[224];

  work.L[298] = (work.KKT[419]-work.L[297]*work.v[223])*work.d_inv[224];
  work.v[225] = 0;
  work.d[225] = work.v[225];

  if (work.d[225] < 0)
    work.d[225] = settings.kkt_reg;
  else
    work.d[225] += settings.kkt_reg;
  work.d_inv[225] = 1/work.d[225];

  work.L[86] = (work.KKT[420])*work.d_inv[225];
  work.L[88] = (work.KKT[421])*work.d_inv[225];
  work.v[65] = work.L[85]*work.d[65];
  work.v[225] = work.L[86]*work.d[225];
  work.v[226] = work.KKT[422]-work.L[85]*work.v[65]-work.L[86]*work.v[225];
  work.d[226] = work.v[226];

  if (work.d[226] > 0)
    work.d[226] = -settings.kkt_reg;
  else
    work.d[226] -= settings.kkt_reg;

  work.d_inv[226] = 1/work.d[226];

  work.L[89] = (-work.L[88]*work.v[225])*work.d_inv[226];
  work.L[320] = (work.KKT[423])*work.d_inv[226];
  work.v[95] = work.L[87]*work.d[95];
  work.v[225] = work.L[88]*work.d[225];
  work.v[226] = work.L[89]*work.d[226];
  work.v[227] = work.KKT[424]-work.L[87]*work.v[95]-work.L[88]*work.v[225]-work.L[89]*work.v[226];
  work.d[227] = work.v[227];

  if (work.d[227] > 0)
    work.d[227] = -settings.kkt_reg;
  else
    work.d[227] -= settings.kkt_reg;

  work.d_inv[227] = 1/work.d[227];

  work.L[321] = (work.KKT[425]-work.L[320]*work.v[226])*work.d_inv[227];
  work.v[228] = 0;
  work.d[228] = work.v[228];

  if (work.d[228] < 0)
    work.d[228] = settings.kkt_reg;
  else
    work.d[228] += settings.kkt_reg;
  work.d_inv[228] = 1/work.d[228];

  work.L[91] = (work.KKT[426])*work.d_inv[228];
  work.L[93] = (work.KKT[427])*work.d_inv[228];
  work.v[66] = work.L[90]*work.d[66];
  work.v[228] = work.L[91]*work.d[228];
  work.v[229] = work.KKT[428]-work.L[90]*work.v[66]-work.L[91]*work.v[228];
  work.d[229] = work.v[229];

  if (work.d[229] > 0)
    work.d[229] = -settings.kkt_reg;
  else
    work.d[229] -= settings.kkt_reg;

  work.d_inv[229] = 1/work.d[229];

  work.L[94] = (-work.L[93]*work.v[228])*work.d_inv[229];
  work.L[344] = (work.KKT[429])*work.d_inv[229];
  work.v[96] = work.L[92]*work.d[96];
  work.v[228] = work.L[93]*work.d[228];
  work.v[229] = work.L[94]*work.d[229];
  work.v[230] = work.KKT[430]-work.L[92]*work.v[96]-work.L[93]*work.v[228]-work.L[94]*work.v[229];
  work.d[230] = work.v[230];

  if (work.d[230] > 0)
    work.d[230] = -settings.kkt_reg;
  else
    work.d[230] -= settings.kkt_reg;

  work.d_inv[230] = 1/work.d[230];

  work.L[345] = (work.KKT[431]-work.L[344]*work.v[229])*work.d_inv[230];
  work.v[231] = 0;
  work.d[231] = work.v[231];

  if (work.d[231] < 0)
    work.d[231] = settings.kkt_reg;
  else
    work.d[231] += settings.kkt_reg;
  work.d_inv[231] = 1/work.d[231];

  work.L[96] = (work.KKT[432])*work.d_inv[231];
  work.L[98] = (work.KKT[433])*work.d_inv[231];
  work.v[67] = work.L[95]*work.d[67];
  work.v[231] = work.L[96]*work.d[231];
  work.v[232] = work.KKT[434]-work.L[95]*work.v[67]-work.L[96]*work.v[231];
  work.d[232] = work.v[232];

  if (work.d[232] > 0)
    work.d[232] = -settings.kkt_reg;
  else
    work.d[232] -= settings.kkt_reg;

  work.d_inv[232] = 1/work.d[232];

  work.L[99] = (-work.L[98]*work.v[231])*work.d_inv[232];
  work.L[369] = (work.KKT[435])*work.d_inv[232];
  work.v[97] = work.L[97]*work.d[97];
  work.v[231] = work.L[98]*work.d[231];
  work.v[232] = work.L[99]*work.d[232];
  work.v[233] = work.KKT[436]-work.L[97]*work.v[97]-work.L[98]*work.v[231]-work.L[99]*work.v[232];
  work.d[233] = work.v[233];

  if (work.d[233] > 0)
    work.d[233] = -settings.kkt_reg;
  else
    work.d[233] -= settings.kkt_reg;

  work.d_inv[233] = 1/work.d[233];

  work.L[370] = (work.KKT[437]-work.L[369]*work.v[232])*work.d_inv[233];
  work.v[234] = 0;
  work.d[234] = work.v[234];

  if (work.d[234] < 0)
    work.d[234] = settings.kkt_reg;
  else
    work.d[234] += settings.kkt_reg;
  work.d_inv[234] = 1/work.d[234];

  work.L[101] = (work.KKT[438])*work.d_inv[234];
  work.L[103] = (work.KKT[439])*work.d_inv[234];
  work.v[68] = work.L[100]*work.d[68];
  work.v[234] = work.L[101]*work.d[234];
  work.v[235] = work.KKT[440]-work.L[100]*work.v[68]-work.L[101]*work.v[234];
  work.d[235] = work.v[235];

  if (work.d[235] > 0)
    work.d[235] = -settings.kkt_reg;
  else
    work.d[235] -= settings.kkt_reg;

  work.d_inv[235] = 1/work.d[235];

  work.L[104] = (-work.L[103]*work.v[234])*work.d_inv[235];
  work.L[395] = (work.KKT[441])*work.d_inv[235];
  work.v[98] = work.L[102]*work.d[98];
  work.v[234] = work.L[103]*work.d[234];
  work.v[235] = work.L[104]*work.d[235];
  work.v[236] = work.KKT[442]-work.L[102]*work.v[98]-work.L[103]*work.v[234]-work.L[104]*work.v[235];
  work.d[236] = work.v[236];

  if (work.d[236] > 0)
    work.d[236] = -settings.kkt_reg;
  else
    work.d[236] -= settings.kkt_reg;

  work.d_inv[236] = 1/work.d[236];

  work.L[396] = (work.KKT[443]-work.L[395]*work.v[235])*work.d_inv[236];
  work.v[237] = 0;
  work.d[237] = work.v[237];

  if (work.d[237] < 0)
    work.d[237] = settings.kkt_reg;
  else
    work.d[237] += settings.kkt_reg;
  work.d_inv[237] = 1/work.d[237];

  work.L[106] = (work.KKT[444])*work.d_inv[237];
  work.L[108] = (work.KKT[445])*work.d_inv[237];
  work.v[69] = work.L[105]*work.d[69];
  work.v[237] = work.L[106]*work.d[237];
  work.v[238] = work.KKT[446]-work.L[105]*work.v[69]-work.L[106]*work.v[237];
  work.d[238] = work.v[238];

  if (work.d[238] > 0)
    work.d[238] = -settings.kkt_reg;
  else
    work.d[238] -= settings.kkt_reg;

  work.d_inv[238] = 1/work.d[238];

  work.L[109] = (-work.L[108]*work.v[237])*work.d_inv[238];
  work.L[422] = (work.KKT[447])*work.d_inv[238];
  work.v[99] = work.L[107]*work.d[99];
  work.v[237] = work.L[108]*work.d[237];
  work.v[238] = work.L[109]*work.d[238];
  work.v[239] = work.KKT[448]-work.L[107]*work.v[99]-work.L[108]*work.v[237]-work.L[109]*work.v[238];
  work.d[239] = work.v[239];

  if (work.d[239] > 0)
    work.d[239] = -settings.kkt_reg;
  else
    work.d[239] -= settings.kkt_reg;

  work.d_inv[239] = 1/work.d[239];

  work.L[423] = (work.KKT[449]-work.L[422]*work.v[238])*work.d_inv[239];
  work.v[240] = 0;
  work.d[240] = work.v[240];

  if (work.d[240] < 0)
    work.d[240] = settings.kkt_reg;
  else
    work.d[240] += settings.kkt_reg;
  work.d_inv[240] = 1/work.d[240];

  work.L[111] = (work.KKT[450])*work.d_inv[240];
  work.L[113] = (work.KKT[451])*work.d_inv[240];
  work.v[70] = work.L[110]*work.d[70];
  work.v[240] = work.L[111]*work.d[240];
  work.v[241] = work.KKT[452]-work.L[110]*work.v[70]-work.L[111]*work.v[240];
  work.d[241] = work.v[241];

  if (work.d[241] > 0)
    work.d[241] = -settings.kkt_reg;
  else
    work.d[241] -= settings.kkt_reg;

  work.d_inv[241] = 1/work.d[241];

  work.L[114] = (-work.L[113]*work.v[240])*work.d_inv[241];
  work.L[450] = (work.KKT[453])*work.d_inv[241];
  work.v[100] = work.L[112]*work.d[100];
  work.v[240] = work.L[113]*work.d[240];
  work.v[241] = work.L[114]*work.d[241];
  work.v[242] = work.KKT[454]-work.L[112]*work.v[100]-work.L[113]*work.v[240]-work.L[114]*work.v[241];
  work.d[242] = work.v[242];

  if (work.d[242] > 0)
    work.d[242] = -settings.kkt_reg;
  else
    work.d[242] -= settings.kkt_reg;

  work.d_inv[242] = 1/work.d[242];

  work.L[451] = (work.KKT[455]-work.L[450]*work.v[241])*work.d_inv[242];
  work.v[243] = 0;
  work.d[243] = work.v[243];

  if (work.d[243] < 0)
    work.d[243] = settings.kkt_reg;
  else
    work.d[243] += settings.kkt_reg;
  work.d_inv[243] = 1/work.d[243];

  work.L[116] = (work.KKT[456])*work.d_inv[243];
  work.L[118] = (work.KKT[457])*work.d_inv[243];
  work.v[71] = work.L[115]*work.d[71];
  work.v[243] = work.L[116]*work.d[243];
  work.v[244] = work.KKT[458]-work.L[115]*work.v[71]-work.L[116]*work.v[243];
  work.d[244] = work.v[244];

  if (work.d[244] > 0)
    work.d[244] = -settings.kkt_reg;
  else
    work.d[244] -= settings.kkt_reg;

  work.d_inv[244] = 1/work.d[244];

  work.L[119] = (-work.L[118]*work.v[243])*work.d_inv[244];
  work.L[479] = (work.KKT[459])*work.d_inv[244];
  work.v[101] = work.L[117]*work.d[101];
  work.v[243] = work.L[118]*work.d[243];
  work.v[244] = work.L[119]*work.d[244];
  work.v[245] = work.KKT[460]-work.L[117]*work.v[101]-work.L[118]*work.v[243]-work.L[119]*work.v[244];
  work.d[245] = work.v[245];

  if (work.d[245] > 0)
    work.d[245] = -settings.kkt_reg;
  else
    work.d[245] -= settings.kkt_reg;

  work.d_inv[245] = 1/work.d[245];

  work.L[480] = (work.KKT[461]-work.L[479]*work.v[244])*work.d_inv[245];
  work.v[246] = 0;
  work.d[246] = work.v[246];

  if (work.d[246] < 0)
    work.d[246] = settings.kkt_reg;
  else
    work.d[246] += settings.kkt_reg;
  work.d_inv[246] = 1/work.d[246];

  work.L[121] = (work.KKT[462])*work.d_inv[246];
  work.L[123] = (work.KKT[463])*work.d_inv[246];
  work.v[72] = work.L[120]*work.d[72];
  work.v[246] = work.L[121]*work.d[246];
  work.v[247] = work.KKT[464]-work.L[120]*work.v[72]-work.L[121]*work.v[246];
  work.d[247] = work.v[247];

  if (work.d[247] > 0)
    work.d[247] = -settings.kkt_reg;
  else
    work.d[247] -= settings.kkt_reg;

  work.d_inv[247] = 1/work.d[247];

  work.L[124] = (-work.L[123]*work.v[246])*work.d_inv[247];
  work.L[509] = (work.KKT[465])*work.d_inv[247];
  work.v[102] = work.L[122]*work.d[102];
  work.v[246] = work.L[123]*work.d[246];
  work.v[247] = work.L[124]*work.d[247];
  work.v[248] = work.KKT[466]-work.L[122]*work.v[102]-work.L[123]*work.v[246]-work.L[124]*work.v[247];
  work.d[248] = work.v[248];

  if (work.d[248] > 0)
    work.d[248] = -settings.kkt_reg;
  else
    work.d[248] -= settings.kkt_reg;

  work.d_inv[248] = 1/work.d[248];

  work.L[510] = (work.KKT[467]-work.L[509]*work.v[247])*work.d_inv[248];
  work.v[249] = 0;
  work.d[249] = work.v[249];

  if (work.d[249] < 0)
    work.d[249] = settings.kkt_reg;
  else
    work.d[249] += settings.kkt_reg;
  work.d_inv[249] = 1/work.d[249];

  work.L[126] = (work.KKT[468])*work.d_inv[249];
  work.L[128] = (work.KKT[469])*work.d_inv[249];
  work.v[73] = work.L[125]*work.d[73];
  work.v[249] = work.L[126]*work.d[249];
  work.v[250] = work.KKT[470]-work.L[125]*work.v[73]-work.L[126]*work.v[249];
  work.d[250] = work.v[250];

  if (work.d[250] > 0)
    work.d[250] = -settings.kkt_reg;
  else
    work.d[250] -= settings.kkt_reg;

  work.d_inv[250] = 1/work.d[250];

  work.L[129] = (-work.L[128]*work.v[249])*work.d_inv[250];
  work.L[540] = (work.KKT[471])*work.d_inv[250];
  work.v[103] = work.L[127]*work.d[103];
  work.v[249] = work.L[128]*work.d[249];
  work.v[250] = work.L[129]*work.d[250];
  work.v[251] = work.KKT[472]-work.L[127]*work.v[103]-work.L[128]*work.v[249]-work.L[129]*work.v[250];
  work.d[251] = work.v[251];

  if (work.d[251] > 0)
    work.d[251] = -settings.kkt_reg;
  else
    work.d[251] -= settings.kkt_reg;

  work.d_inv[251] = 1/work.d[251];

  work.L[541] = (work.KKT[473]-work.L[540]*work.v[250])*work.d_inv[251];
  work.v[252] = 0;
  work.d[252] = work.v[252];

  if (work.d[252] < 0)
    work.d[252] = settings.kkt_reg;
  else
    work.d[252] += settings.kkt_reg;
  work.d_inv[252] = 1/work.d[252];

  work.L[131] = (work.KKT[474])*work.d_inv[252];
  work.L[133] = (work.KKT[475])*work.d_inv[252];
  work.v[74] = work.L[130]*work.d[74];
  work.v[252] = work.L[131]*work.d[252];
  work.v[253] = work.KKT[476]-work.L[130]*work.v[74]-work.L[131]*work.v[252];
  work.d[253] = work.v[253];

  if (work.d[253] > 0)
    work.d[253] = -settings.kkt_reg;
  else
    work.d[253] -= settings.kkt_reg;

  work.d_inv[253] = 1/work.d[253];

  work.L[134] = (-work.L[133]*work.v[252])*work.d_inv[253];
  work.L[572] = (work.KKT[477])*work.d_inv[253];
  work.v[104] = work.L[132]*work.d[104];
  work.v[252] = work.L[133]*work.d[252];
  work.v[253] = work.L[134]*work.d[253];
  work.v[254] = work.KKT[478]-work.L[132]*work.v[104]-work.L[133]*work.v[252]-work.L[134]*work.v[253];
  work.d[254] = work.v[254];

  if (work.d[254] > 0)
    work.d[254] = -settings.kkt_reg;
  else
    work.d[254] -= settings.kkt_reg;

  work.d_inv[254] = 1/work.d[254];

  work.L[573] = (work.KKT[479]-work.L[572]*work.v[253])*work.d_inv[254];
  work.v[255] = 0;
  work.d[255] = work.v[255];

  if (work.d[255] < 0)
    work.d[255] = settings.kkt_reg;
  else
    work.d[255] += settings.kkt_reg;
  work.d_inv[255] = 1/work.d[255];

  work.L[136] = (work.KKT[480])*work.d_inv[255];
  work.L[138] = (work.KKT[481])*work.d_inv[255];
  work.v[75] = work.L[135]*work.d[75];
  work.v[255] = work.L[136]*work.d[255];
  work.v[256] = work.KKT[482]-work.L[135]*work.v[75]-work.L[136]*work.v[255];
  work.d[256] = work.v[256];

  if (work.d[256] > 0)
    work.d[256] = -settings.kkt_reg;
  else
    work.d[256] -= settings.kkt_reg;

  work.d_inv[256] = 1/work.d[256];

  work.L[139] = (-work.L[138]*work.v[255])*work.d_inv[256];
  work.L[605] = (work.KKT[483])*work.d_inv[256];
  work.v[105] = work.L[137]*work.d[105];
  work.v[255] = work.L[138]*work.d[255];
  work.v[256] = work.L[139]*work.d[256];
  work.v[257] = work.KKT[484]-work.L[137]*work.v[105]-work.L[138]*work.v[255]-work.L[139]*work.v[256];
  work.d[257] = work.v[257];

  if (work.d[257] > 0)
    work.d[257] = -settings.kkt_reg;
  else
    work.d[257] -= settings.kkt_reg;

  work.d_inv[257] = 1/work.d[257];

  work.L[606] = (work.KKT[485]-work.L[605]*work.v[256])*work.d_inv[257];
  work.v[258] = 0;
  work.d[258] = work.v[258];

  if (work.d[258] < 0)
    work.d[258] = settings.kkt_reg;
  else
    work.d[258] += settings.kkt_reg;
  work.d_inv[258] = 1/work.d[258];

  work.L[141] = (work.KKT[486])*work.d_inv[258];
  work.L[143] = (work.KKT[487])*work.d_inv[258];
  work.v[76] = work.L[140]*work.d[76];
  work.v[258] = work.L[141]*work.d[258];
  work.v[259] = work.KKT[488]-work.L[140]*work.v[76]-work.L[141]*work.v[258];
  work.d[259] = work.v[259];

  if (work.d[259] > 0)
    work.d[259] = -settings.kkt_reg;
  else
    work.d[259] -= settings.kkt_reg;

  work.d_inv[259] = 1/work.d[259];

  work.L[144] = (-work.L[143]*work.v[258])*work.d_inv[259];
  work.L[639] = (work.KKT[489])*work.d_inv[259];
  work.v[106] = work.L[142]*work.d[106];
  work.v[258] = work.L[143]*work.d[258];
  work.v[259] = work.L[144]*work.d[259];
  work.v[260] = work.KKT[490]-work.L[142]*work.v[106]-work.L[143]*work.v[258]-work.L[144]*work.v[259];
  work.d[260] = work.v[260];

  if (work.d[260] > 0)
    work.d[260] = -settings.kkt_reg;
  else
    work.d[260] -= settings.kkt_reg;

  work.d_inv[260] = 1/work.d[260];

  work.L[640] = (work.KKT[491]-work.L[639]*work.v[259])*work.d_inv[260];
  work.v[261] = 0;
  work.d[261] = work.v[261];

  if (work.d[261] < 0)
    work.d[261] = settings.kkt_reg;
  else
    work.d[261] += settings.kkt_reg;
  work.d_inv[261] = 1/work.d[261];

  work.L[146] = (work.KKT[492])*work.d_inv[261];
  work.L[148] = (work.KKT[493])*work.d_inv[261];
  work.v[77] = work.L[145]*work.d[77];
  work.v[261] = work.L[146]*work.d[261];
  work.v[262] = work.KKT[494]-work.L[145]*work.v[77]-work.L[146]*work.v[261];
  work.d[262] = work.v[262];

  if (work.d[262] > 0)
    work.d[262] = -settings.kkt_reg;
  else
    work.d[262] -= settings.kkt_reg;

  work.d_inv[262] = 1/work.d[262];

  work.L[149] = (-work.L[148]*work.v[261])*work.d_inv[262];
  work.L[674] = (work.KKT[495])*work.d_inv[262];
  work.v[107] = work.L[147]*work.d[107];
  work.v[261] = work.L[148]*work.d[261];
  work.v[262] = work.L[149]*work.d[262];
  work.v[263] = work.KKT[496]-work.L[147]*work.v[107]-work.L[148]*work.v[261]-work.L[149]*work.v[262];
  work.d[263] = work.v[263];

  if (work.d[263] > 0)
    work.d[263] = -settings.kkt_reg;
  else
    work.d[263] -= settings.kkt_reg;

  work.d_inv[263] = 1/work.d[263];

  work.L[675] = (work.KKT[497]-work.L[674]*work.v[262])*work.d_inv[263];
  work.v[264] = 0;
  work.d[264] = work.v[264];

  if (work.d[264] < 0)
    work.d[264] = settings.kkt_reg;
  else
    work.d[264] += settings.kkt_reg;
  work.d_inv[264] = 1/work.d[264];

  work.L[151] = (work.KKT[498])*work.d_inv[264];
  work.L[153] = (work.KKT[499])*work.d_inv[264];
  work.v[78] = work.L[150]*work.d[78];
  work.v[264] = work.L[151]*work.d[264];
  work.v[265] = work.KKT[500]-work.L[150]*work.v[78]-work.L[151]*work.v[264];
  work.d[265] = work.v[265];

  if (work.d[265] > 0)
    work.d[265] = -settings.kkt_reg;
  else
    work.d[265] -= settings.kkt_reg;

  work.d_inv[265] = 1/work.d[265];

  work.L[154] = (-work.L[153]*work.v[264])*work.d_inv[265];
  work.L[710] = (work.KKT[501])*work.d_inv[265];
  work.v[108] = work.L[152]*work.d[108];
  work.v[264] = work.L[153]*work.d[264];
  work.v[265] = work.L[154]*work.d[265];
  work.v[266] = work.KKT[502]-work.L[152]*work.v[108]-work.L[153]*work.v[264]-work.L[154]*work.v[265];
  work.d[266] = work.v[266];

  if (work.d[266] > 0)
    work.d[266] = -settings.kkt_reg;
  else
    work.d[266] -= settings.kkt_reg;

  work.d_inv[266] = 1/work.d[266];

  work.L[711] = (work.KKT[503]-work.L[710]*work.v[265])*work.d_inv[266];
  work.v[267] = 0;
  work.d[267] = work.v[267];

  if (work.d[267] < 0)
    work.d[267] = settings.kkt_reg;
  else
    work.d[267] += settings.kkt_reg;
  work.d_inv[267] = 1/work.d[267];

  work.L[156] = (work.KKT[504])*work.d_inv[267];
  work.L[158] = (work.KKT[505])*work.d_inv[267];
  work.v[79] = work.L[155]*work.d[79];
  work.v[267] = work.L[156]*work.d[267];
  work.v[268] = work.KKT[506]-work.L[155]*work.v[79]-work.L[156]*work.v[267];
  work.d[268] = work.v[268];

  if (work.d[268] > 0)
    work.d[268] = -settings.kkt_reg;
  else
    work.d[268] -= settings.kkt_reg;

  work.d_inv[268] = 1/work.d[268];

  work.L[159] = (-work.L[158]*work.v[267])*work.d_inv[268];
  work.L[747] = (work.KKT[507])*work.d_inv[268];
  work.v[109] = work.L[157]*work.d[109];
  work.v[267] = work.L[158]*work.d[267];
  work.v[268] = work.L[159]*work.d[268];
  work.v[269] = work.KKT[508]-work.L[157]*work.v[109]-work.L[158]*work.v[267]-work.L[159]*work.v[268];
  work.d[269] = work.v[269];

  if (work.d[269] > 0)
    work.d[269] = -settings.kkt_reg;
  else
    work.d[269] -= settings.kkt_reg;

  work.d_inv[269] = 1/work.d[269];

  work.L[748] = (work.KKT[509]-work.L[747]*work.v[268])*work.d_inv[269];
  work.v[270] = 0;
  work.d[270] = work.v[270];

  if (work.d[270] < 0)
    work.d[270] = settings.kkt_reg;
  else
    work.d[270] += settings.kkt_reg;
  work.d_inv[270] = 1/work.d[270];

  work.L[161] = (work.KKT[510])*work.d_inv[270];
  work.L[163] = (work.KKT[511])*work.d_inv[270];
  work.v[80] = work.L[160]*work.d[80];
  work.v[270] = work.L[161]*work.d[270];
  work.v[271] = work.KKT[512]-work.L[160]*work.v[80]-work.L[161]*work.v[270];
  work.d[271] = work.v[271];

  if (work.d[271] > 0)
    work.d[271] = -settings.kkt_reg;
  else
    work.d[271] -= settings.kkt_reg;

  work.d_inv[271] = 1/work.d[271];

  work.L[164] = (-work.L[163]*work.v[270])*work.d_inv[271];
  work.L[785] = (work.KKT[513])*work.d_inv[271];
  work.v[110] = work.L[162]*work.d[110];
  work.v[270] = work.L[163]*work.d[270];
  work.v[271] = work.L[164]*work.d[271];
  work.v[272] = work.KKT[514]-work.L[162]*work.v[110]-work.L[163]*work.v[270]-work.L[164]*work.v[271];
  work.d[272] = work.v[272];

  if (work.d[272] > 0)
    work.d[272] = -settings.kkt_reg;
  else
    work.d[272] -= settings.kkt_reg;

  work.d_inv[272] = 1/work.d[272];

  work.L[786] = (work.KKT[515]-work.L[785]*work.v[271])*work.d_inv[272];
  work.v[273] = 0;
  work.d[273] = work.v[273];

  if (work.d[273] < 0)
    work.d[273] = settings.kkt_reg;
  else
    work.d[273] += settings.kkt_reg;
  work.d_inv[273] = 1/work.d[273];

  work.L[166] = (work.KKT[516])*work.d_inv[273];
  work.L[168] = (work.KKT[517])*work.d_inv[273];
  work.v[81] = work.L[165]*work.d[81];
  work.v[273] = work.L[166]*work.d[273];
  work.v[274] = work.KKT[518]-work.L[165]*work.v[81]-work.L[166]*work.v[273];
  work.d[274] = work.v[274];

  if (work.d[274] > 0)
    work.d[274] = -settings.kkt_reg;
  else
    work.d[274] -= settings.kkt_reg;

  work.d_inv[274] = 1/work.d[274];

  work.L[169] = (-work.L[168]*work.v[273])*work.d_inv[274];
  work.L[824] = (work.KKT[519])*work.d_inv[274];
  work.v[111] = work.L[167]*work.d[111];
  work.v[273] = work.L[168]*work.d[273];
  work.v[274] = work.L[169]*work.d[274];
  work.v[275] = work.KKT[520]-work.L[167]*work.v[111]-work.L[168]*work.v[273]-work.L[169]*work.v[274];
  work.d[275] = work.v[275];

  if (work.d[275] > 0)
    work.d[275] = -settings.kkt_reg;
  else
    work.d[275] -= settings.kkt_reg;

  work.d_inv[275] = 1/work.d[275];

  work.L[825] = (work.KKT[521]-work.L[824]*work.v[274])*work.d_inv[275];
  work.v[276] = 0;
  work.d[276] = work.v[276];

  if (work.d[276] < 0)
    work.d[276] = settings.kkt_reg;
  else
    work.d[276] += settings.kkt_reg;
  work.d_inv[276] = 1/work.d[276];

  work.L[171] = (work.KKT[522])*work.d_inv[276];
  work.L[173] = (work.KKT[523])*work.d_inv[276];
  work.v[82] = work.L[170]*work.d[82];
  work.v[276] = work.L[171]*work.d[276];
  work.v[277] = work.KKT[524]-work.L[170]*work.v[82]-work.L[171]*work.v[276];
  work.d[277] = work.v[277];

  if (work.d[277] > 0)
    work.d[277] = -settings.kkt_reg;
  else
    work.d[277] -= settings.kkt_reg;

  work.d_inv[277] = 1/work.d[277];

  work.L[174] = (-work.L[173]*work.v[276])*work.d_inv[277];
  work.L[864] = (work.KKT[525])*work.d_inv[277];
  work.v[112] = work.L[172]*work.d[112];
  work.v[276] = work.L[173]*work.d[276];
  work.v[277] = work.L[174]*work.d[277];
  work.v[278] = work.KKT[526]-work.L[172]*work.v[112]-work.L[173]*work.v[276]-work.L[174]*work.v[277];
  work.d[278] = work.v[278];

  if (work.d[278] > 0)
    work.d[278] = -settings.kkt_reg;
  else
    work.d[278] -= settings.kkt_reg;

  work.d_inv[278] = 1/work.d[278];

  work.L[865] = (work.KKT[527]-work.L[864]*work.v[277])*work.d_inv[278];
  work.v[279] = 0;
  work.d[279] = work.v[279];

  if (work.d[279] < 0)
    work.d[279] = settings.kkt_reg;
  else
    work.d[279] += settings.kkt_reg;
  work.d_inv[279] = 1/work.d[279];

  work.L[176] = (work.KKT[528])*work.d_inv[279];
  work.L[178] = (work.KKT[529])*work.d_inv[279];
  work.v[83] = work.L[175]*work.d[83];
  work.v[279] = work.L[176]*work.d[279];
  work.v[280] = work.KKT[530]-work.L[175]*work.v[83]-work.L[176]*work.v[279];
  work.d[280] = work.v[280];

  if (work.d[280] > 0)
    work.d[280] = -settings.kkt_reg;
  else
    work.d[280] -= settings.kkt_reg;

  work.d_inv[280] = 1/work.d[280];

  work.L[179] = (-work.L[178]*work.v[279])*work.d_inv[280];
  work.L[905] = (work.KKT[531])*work.d_inv[280];
  work.v[113] = work.L[177]*work.d[113];
  work.v[279] = work.L[178]*work.d[279];
  work.v[280] = work.L[179]*work.d[280];
  work.v[281] = work.KKT[532]-work.L[177]*work.v[113]-work.L[178]*work.v[279]-work.L[179]*work.v[280];
  work.d[281] = work.v[281];

  if (work.d[281] > 0)
    work.d[281] = -settings.kkt_reg;
  else
    work.d[281] -= settings.kkt_reg;

  work.d_inv[281] = 1/work.d[281];

  work.L[906] = (work.KKT[533]-work.L[905]*work.v[280])*work.d_inv[281];
  work.v[282] = 0;
  work.d[282] = work.v[282];

  if (work.d[282] < 0)
    work.d[282] = settings.kkt_reg;
  else
    work.d[282] += settings.kkt_reg;
  work.d_inv[282] = 1/work.d[282];

  work.L[181] = (work.KKT[534])*work.d_inv[282];
  work.L[183] = (work.KKT[535])*work.d_inv[282];
  work.v[84] = work.L[180]*work.d[84];
  work.v[282] = work.L[181]*work.d[282];
  work.v[283] = work.KKT[536]-work.L[180]*work.v[84]-work.L[181]*work.v[282];
  work.d[283] = work.v[283];

  if (work.d[283] > 0)
    work.d[283] = -settings.kkt_reg;
  else
    work.d[283] -= settings.kkt_reg;

  work.d_inv[283] = 1/work.d[283];

  work.L[184] = (-work.L[183]*work.v[282])*work.d_inv[283];
  work.L[947] = (work.KKT[537])*work.d_inv[283];
  work.v[114] = work.L[182]*work.d[114];
  work.v[282] = work.L[183]*work.d[282];
  work.v[283] = work.L[184]*work.d[283];
  work.v[284] = work.KKT[538]-work.L[182]*work.v[114]-work.L[183]*work.v[282]-work.L[184]*work.v[283];
  work.d[284] = work.v[284];

  if (work.d[284] > 0)
    work.d[284] = -settings.kkt_reg;
  else
    work.d[284] -= settings.kkt_reg;

  work.d_inv[284] = 1/work.d[284];

  work.L[948] = (work.KKT[539]-work.L[947]*work.v[283])*work.d_inv[284];
  work.v[285] = 0;
  work.d[285] = work.v[285];

  if (work.d[285] < 0)
    work.d[285] = settings.kkt_reg;
  else
    work.d[285] += settings.kkt_reg;
  work.d_inv[285] = 1/work.d[285];

  work.L[186] = (work.KKT[540])*work.d_inv[285];
  work.L[188] = (work.KKT[541])*work.d_inv[285];
  work.v[85] = work.L[185]*work.d[85];
  work.v[285] = work.L[186]*work.d[285];
  work.v[286] = work.KKT[542]-work.L[185]*work.v[85]-work.L[186]*work.v[285];
  work.d[286] = work.v[286];

  if (work.d[286] > 0)
    work.d[286] = -settings.kkt_reg;
  else
    work.d[286] -= settings.kkt_reg;

  work.d_inv[286] = 1/work.d[286];

  work.L[189] = (-work.L[188]*work.v[285])*work.d_inv[286];
  work.L[990] = (work.KKT[543])*work.d_inv[286];
  work.v[115] = work.L[187]*work.d[115];
  work.v[285] = work.L[188]*work.d[285];
  work.v[286] = work.L[189]*work.d[286];
  work.v[287] = work.KKT[544]-work.L[187]*work.v[115]-work.L[188]*work.v[285]-work.L[189]*work.v[286];
  work.d[287] = work.v[287];

  if (work.d[287] > 0)
    work.d[287] = -settings.kkt_reg;
  else
    work.d[287] -= settings.kkt_reg;

  work.d_inv[287] = 1/work.d[287];

  work.L[991] = (work.KKT[545]-work.L[990]*work.v[286])*work.d_inv[287];
  work.v[288] = 0;
  work.d[288] = work.v[288];

  if (work.d[288] < 0)
    work.d[288] = settings.kkt_reg;
  else
    work.d[288] += settings.kkt_reg;
  work.d_inv[288] = 1/work.d[288];

  work.L[191] = (work.KKT[546])*work.d_inv[288];
  work.L[193] = (work.KKT[547])*work.d_inv[288];
  work.v[86] = work.L[190]*work.d[86];
  work.v[288] = work.L[191]*work.d[288];
  work.v[289] = work.KKT[548]-work.L[190]*work.v[86]-work.L[191]*work.v[288];
  work.d[289] = work.v[289];

  if (work.d[289] > 0)
    work.d[289] = -settings.kkt_reg;
  else
    work.d[289] -= settings.kkt_reg;

  work.d_inv[289] = 1/work.d[289];

  work.L[194] = (-work.L[193]*work.v[288])*work.d_inv[289];
  work.L[1034] = (work.KKT[549])*work.d_inv[289];
  work.v[116] = work.L[192]*work.d[116];
  work.v[288] = work.L[193]*work.d[288];
  work.v[289] = work.L[194]*work.d[289];
  work.v[290] = work.KKT[550]-work.L[192]*work.v[116]-work.L[193]*work.v[288]-work.L[194]*work.v[289];
  work.d[290] = work.v[290];

  if (work.d[290] > 0)
    work.d[290] = -settings.kkt_reg;
  else
    work.d[290] -= settings.kkt_reg;

  work.d_inv[290] = 1/work.d[290];

  work.L[1035] = (work.KKT[551]-work.L[1034]*work.v[289])*work.d_inv[290];
  work.v[291] = 0;
  work.d[291] = work.v[291];

  if (work.d[291] < 0)
    work.d[291] = settings.kkt_reg;
  else
    work.d[291] += settings.kkt_reg;
  work.d_inv[291] = 1/work.d[291];

  work.L[196] = (work.KKT[552])*work.d_inv[291];
  work.L[198] = (work.KKT[553])*work.d_inv[291];
  work.v[87] = work.L[195]*work.d[87];
  work.v[291] = work.L[196]*work.d[291];
  work.v[292] = work.KKT[554]-work.L[195]*work.v[87]-work.L[196]*work.v[291];
  work.d[292] = work.v[292];

  if (work.d[292] > 0)
    work.d[292] = -settings.kkt_reg;
  else
    work.d[292] -= settings.kkt_reg;

  work.d_inv[292] = 1/work.d[292];

  work.L[199] = (-work.L[198]*work.v[291])*work.d_inv[292];
  work.L[1079] = (work.KKT[555])*work.d_inv[292];
  work.v[117] = work.L[197]*work.d[117];
  work.v[291] = work.L[198]*work.d[291];
  work.v[292] = work.L[199]*work.d[292];
  work.v[293] = work.KKT[556]-work.L[197]*work.v[117]-work.L[198]*work.v[291]-work.L[199]*work.v[292];
  work.d[293] = work.v[293];

  if (work.d[293] > 0)
    work.d[293] = -settings.kkt_reg;
  else
    work.d[293] -= settings.kkt_reg;

  work.d_inv[293] = 1/work.d[293];

  work.L[1080] = (work.KKT[557]-work.L[1079]*work.v[292])*work.d_inv[293];
  work.v[294] = 0;
  work.d[294] = work.v[294];

  if (work.d[294] < 0)
    work.d[294] = settings.kkt_reg;
  else
    work.d[294] += settings.kkt_reg;
  work.d_inv[294] = 1/work.d[294];

  work.L[201] = (work.KKT[558])*work.d_inv[294];
  work.L[203] = (work.KKT[559])*work.d_inv[294];
  work.v[88] = work.L[200]*work.d[88];
  work.v[294] = work.L[201]*work.d[294];
  work.v[295] = work.KKT[560]-work.L[200]*work.v[88]-work.L[201]*work.v[294];
  work.d[295] = work.v[295];

  if (work.d[295] > 0)
    work.d[295] = -settings.kkt_reg;
  else
    work.d[295] -= settings.kkt_reg;

  work.d_inv[295] = 1/work.d[295];

  work.L[204] = (-work.L[203]*work.v[294])*work.d_inv[295];
  work.L[1125] = (work.KKT[561])*work.d_inv[295];
  work.v[118] = work.L[202]*work.d[118];
  work.v[294] = work.L[203]*work.d[294];
  work.v[295] = work.L[204]*work.d[295];
  work.v[296] = work.KKT[562]-work.L[202]*work.v[118]-work.L[203]*work.v[294]-work.L[204]*work.v[295];
  work.d[296] = work.v[296];

  if (work.d[296] > 0)
    work.d[296] = -settings.kkt_reg;
  else
    work.d[296] -= settings.kkt_reg;

  work.d_inv[296] = 1/work.d[296];

  work.L[1126] = (work.KKT[563]-work.L[1125]*work.v[295])*work.d_inv[296];
  work.v[297] = 0;
  work.d[297] = work.v[297];

  if (work.d[297] < 0)
    work.d[297] = settings.kkt_reg;
  else
    work.d[297] += settings.kkt_reg;
  work.d_inv[297] = 1/work.d[297];

  work.L[206] = (work.KKT[564])*work.d_inv[297];
  work.L[208] = (work.KKT[565])*work.d_inv[297];
  work.v[89] = work.L[205]*work.d[89];
  work.v[297] = work.L[206]*work.d[297];
  work.v[298] = work.KKT[566]-work.L[205]*work.v[89]-work.L[206]*work.v[297];
  work.d[298] = work.v[298];

  if (work.d[298] > 0)
    work.d[298] = -settings.kkt_reg;
  else
    work.d[298] -= settings.kkt_reg;

  work.d_inv[298] = 1/work.d[298];

  work.L[209] = (-work.L[208]*work.v[297])*work.d_inv[298];
  work.L[1202] = (work.KKT[567])*work.d_inv[298];
  work.v[119] = work.L[207]*work.d[119];
  work.v[297] = work.L[208]*work.d[297];
  work.v[298] = work.L[209]*work.d[298];
  work.v[299] = work.KKT[568]-work.L[207]*work.v[119]-work.L[208]*work.v[297]-work.L[209]*work.v[298];
  work.d[299] = work.v[299];

  if (work.d[299] > 0)
    work.d[299] = -settings.kkt_reg;
  else
    work.d[299] -= settings.kkt_reg;

  work.d_inv[299] = 1/work.d[299];

  work.L[1203] = (work.KKT[569]-work.L[1202]*work.v[298])*work.d_inv[299];
  work.v[300] = work.KKT[570];
  work.d[300] = work.v[300];

  if (work.d[300] < 0)
    work.d[300] = settings.kkt_reg;
  else
    work.d[300] += settings.kkt_reg;
  work.d_inv[300] = 1/work.d[300];

  work.L[214] = (work.KKT[571])*work.d_inv[300];
  work.v[301] = work.KKT[572];
  work.d[301] = work.v[301];

  if (work.d[301] < 0)
    work.d[301] = settings.kkt_reg;
  else
    work.d[301] += settings.kkt_reg;
  work.d_inv[301] = 1/work.d[301];

  work.L[233] = (work.KKT[573])*work.d_inv[301];
  work.v[302] = work.KKT[574];
  work.d[302] = work.v[302];

  if (work.d[302] < 0)
    work.d[302] = settings.kkt_reg;
  else
    work.d[302] += settings.kkt_reg;
  work.d_inv[302] = 1/work.d[302];

  work.L[253] = (work.KKT[575])*work.d_inv[302];
  work.v[303] = work.KKT[576];
  work.d[303] = work.v[303];

  if (work.d[303] < 0)
    work.d[303] = settings.kkt_reg;
  else
    work.d[303] += settings.kkt_reg;
  work.d_inv[303] = 1/work.d[303];

  work.L[274] = (work.KKT[577])*work.d_inv[303];
  work.v[304] = work.KKT[578];
  work.d[304] = work.v[304];

  if (work.d[304] < 0)
    work.d[304] = settings.kkt_reg;
  else
    work.d[304] += settings.kkt_reg;
  work.d_inv[304] = 1/work.d[304];

  work.L[296] = (work.KKT[579])*work.d_inv[304];
  work.v[305] = work.KKT[580];
  work.d[305] = work.v[305];

  if (work.d[305] < 0)
    work.d[305] = settings.kkt_reg;
  else
    work.d[305] += settings.kkt_reg;
  work.d_inv[305] = 1/work.d[305];

  work.L[319] = (work.KKT[581])*work.d_inv[305];
  work.v[306] = work.KKT[582];
  work.d[306] = work.v[306];

  if (work.d[306] < 0)
    work.d[306] = settings.kkt_reg;
  else
    work.d[306] += settings.kkt_reg;
  work.d_inv[306] = 1/work.d[306];

  work.L[343] = (work.KKT[583])*work.d_inv[306];
  work.v[307] = work.KKT[584];
  work.d[307] = work.v[307];

  if (work.d[307] < 0)
    work.d[307] = settings.kkt_reg;
  else
    work.d[307] += settings.kkt_reg;
  work.d_inv[307] = 1/work.d[307];

  work.L[368] = (work.KKT[585])*work.d_inv[307];
  work.v[308] = work.KKT[586];
  work.d[308] = work.v[308];

  if (work.d[308] < 0)
    work.d[308] = settings.kkt_reg;
  else
    work.d[308] += settings.kkt_reg;
  work.d_inv[308] = 1/work.d[308];

  work.L[394] = (work.KKT[587])*work.d_inv[308];
  work.v[309] = work.KKT[588];
  work.d[309] = work.v[309];

  if (work.d[309] < 0)
    work.d[309] = settings.kkt_reg;
  else
    work.d[309] += settings.kkt_reg;
  work.d_inv[309] = 1/work.d[309];

  work.L[421] = (work.KKT[589])*work.d_inv[309];
  work.v[310] = work.KKT[590];
  work.d[310] = work.v[310];

  if (work.d[310] < 0)
    work.d[310] = settings.kkt_reg;
  else
    work.d[310] += settings.kkt_reg;
  work.d_inv[310] = 1/work.d[310];

  work.L[449] = (work.KKT[591])*work.d_inv[310];
  work.v[311] = work.KKT[592];
  work.d[311] = work.v[311];

  if (work.d[311] < 0)
    work.d[311] = settings.kkt_reg;
  else
    work.d[311] += settings.kkt_reg;
  work.d_inv[311] = 1/work.d[311];

  work.L[478] = (work.KKT[593])*work.d_inv[311];
  work.v[312] = work.KKT[594];
  work.d[312] = work.v[312];

  if (work.d[312] < 0)
    work.d[312] = settings.kkt_reg;
  else
    work.d[312] += settings.kkt_reg;
  work.d_inv[312] = 1/work.d[312];

  work.L[508] = (work.KKT[595])*work.d_inv[312];
  work.v[313] = work.KKT[596];
  work.d[313] = work.v[313];

  if (work.d[313] < 0)
    work.d[313] = settings.kkt_reg;
  else
    work.d[313] += settings.kkt_reg;
  work.d_inv[313] = 1/work.d[313];

  work.L[539] = (work.KKT[597])*work.d_inv[313];
  work.v[314] = work.KKT[598];
  work.d[314] = work.v[314];

  if (work.d[314] < 0)
    work.d[314] = settings.kkt_reg;
  else
    work.d[314] += settings.kkt_reg;
  work.d_inv[314] = 1/work.d[314];

  work.L[571] = (work.KKT[599])*work.d_inv[314];
  work.v[315] = work.KKT[600];
  work.d[315] = work.v[315];

  if (work.d[315] < 0)
    work.d[315] = settings.kkt_reg;
  else
    work.d[315] += settings.kkt_reg;
  work.d_inv[315] = 1/work.d[315];

  work.L[604] = (work.KKT[601])*work.d_inv[315];
  work.v[316] = work.KKT[602];
  work.d[316] = work.v[316];

  if (work.d[316] < 0)
    work.d[316] = settings.kkt_reg;
  else
    work.d[316] += settings.kkt_reg;
  work.d_inv[316] = 1/work.d[316];

  work.L[638] = (work.KKT[603])*work.d_inv[316];
  work.v[317] = work.KKT[604];
  work.d[317] = work.v[317];

  if (work.d[317] < 0)
    work.d[317] = settings.kkt_reg;
  else
    work.d[317] += settings.kkt_reg;
  work.d_inv[317] = 1/work.d[317];

  work.L[673] = (work.KKT[605])*work.d_inv[317];
  work.v[318] = work.KKT[606];
  work.d[318] = work.v[318];

  if (work.d[318] < 0)
    work.d[318] = settings.kkt_reg;
  else
    work.d[318] += settings.kkt_reg;
  work.d_inv[318] = 1/work.d[318];

  work.L[709] = (work.KKT[607])*work.d_inv[318];
  work.v[319] = work.KKT[608];
  work.d[319] = work.v[319];

  if (work.d[319] < 0)
    work.d[319] = settings.kkt_reg;
  else
    work.d[319] += settings.kkt_reg;
  work.d_inv[319] = 1/work.d[319];

  work.L[746] = (work.KKT[609])*work.d_inv[319];
  work.v[320] = work.KKT[610];
  work.d[320] = work.v[320];

  if (work.d[320] < 0)
    work.d[320] = settings.kkt_reg;
  else
    work.d[320] += settings.kkt_reg;
  work.d_inv[320] = 1/work.d[320];

  work.L[784] = (work.KKT[611])*work.d_inv[320];
  work.v[321] = work.KKT[612];
  work.d[321] = work.v[321];

  if (work.d[321] < 0)
    work.d[321] = settings.kkt_reg;
  else
    work.d[321] += settings.kkt_reg;
  work.d_inv[321] = 1/work.d[321];

  work.L[823] = (work.KKT[613])*work.d_inv[321];
  work.v[322] = work.KKT[614];
  work.d[322] = work.v[322];

  if (work.d[322] < 0)
    work.d[322] = settings.kkt_reg;
  else
    work.d[322] += settings.kkt_reg;
  work.d_inv[322] = 1/work.d[322];

  work.L[863] = (work.KKT[615])*work.d_inv[322];
  work.v[323] = work.KKT[616];
  work.d[323] = work.v[323];

  if (work.d[323] < 0)
    work.d[323] = settings.kkt_reg;
  else
    work.d[323] += settings.kkt_reg;
  work.d_inv[323] = 1/work.d[323];

  work.L[904] = (work.KKT[617])*work.d_inv[323];
  work.v[324] = work.KKT[618];
  work.d[324] = work.v[324];

  if (work.d[324] < 0)
    work.d[324] = settings.kkt_reg;
  else
    work.d[324] += settings.kkt_reg;
  work.d_inv[324] = 1/work.d[324];

  work.L[946] = (work.KKT[619])*work.d_inv[324];
  work.v[325] = work.KKT[620];
  work.d[325] = work.v[325];

  if (work.d[325] < 0)
    work.d[325] = settings.kkt_reg;
  else
    work.d[325] += settings.kkt_reg;
  work.d_inv[325] = 1/work.d[325];

  work.L[989] = (work.KKT[621])*work.d_inv[325];
  work.v[326] = work.KKT[622];
  work.d[326] = work.v[326];

  if (work.d[326] < 0)
    work.d[326] = settings.kkt_reg;
  else
    work.d[326] += settings.kkt_reg;
  work.d_inv[326] = 1/work.d[326];

  work.L[1033] = (work.KKT[623])*work.d_inv[326];
  work.v[327] = work.KKT[624];
  work.d[327] = work.v[327];

  if (work.d[327] < 0)
    work.d[327] = settings.kkt_reg;
  else
    work.d[327] += settings.kkt_reg;
  work.d_inv[327] = 1/work.d[327];

  work.L[1078] = (work.KKT[625])*work.d_inv[327];
  work.v[328] = work.KKT[626];
  work.d[328] = work.v[328];

  if (work.d[328] < 0)
    work.d[328] = settings.kkt_reg;
  else
    work.d[328] += settings.kkt_reg;
  work.d_inv[328] = 1/work.d[328];

  work.L[1124] = (work.KKT[627])*work.d_inv[328];
  work.v[329] = work.KKT[628];
  work.d[329] = work.v[329];

  if (work.d[329] < 0)
    work.d[329] = settings.kkt_reg;
  else
    work.d[329] += settings.kkt_reg;
  work.d_inv[329] = 1/work.d[329];

  work.L[1201] = (work.KKT[629])*work.d_inv[329];
  work.v[0] = work.L[210]*work.d[0];
  work.v[150] = work.L[211]*work.d[150];
  work.v[151] = work.L[212]*work.d[151];
  work.v[330] = work.KKT[630]-work.L[210]*work.v[0]-work.L[211]*work.v[150]-work.L[212]*work.v[151];
  work.d[330] = work.v[330];

  if (work.d[330] > 0)
    work.d[330] = -settings.kkt_reg;
  else
    work.d[330] -= settings.kkt_reg;

  work.d_inv[330] = 1/work.d[330];

  work.L[217] = (work.KKT[631])*work.d_inv[330];
  work.L[221] = (work.KKT[632])*work.d_inv[330];
  work.v[120] = work.L[213]*work.d[120];
  work.v[331] = work.KKT[633]-work.L[213]*work.v[120];
  work.d[331] = work.v[331];

  if (work.d[331] > 0)
    work.d[331] = -settings.kkt_reg;
  else
    work.d[331] -= settings.kkt_reg;

  work.d_inv[331] = 1/work.d[331];

  work.L[218] = (work.KKT[634])*work.d_inv[331];
  work.L[222] = (work.KKT[635])*work.d_inv[331];
  work.v[300] = work.L[214]*work.d[300];
  work.v[332] = 0-work.L[214]*work.v[300];
  work.d[332] = work.v[332];

  if (work.d[332] > 0)
    work.d[332] = -settings.kkt_reg;
  else
    work.d[332] -= settings.kkt_reg;

  work.d_inv[332] = 1/work.d[332];

  work.L[219] = (work.KKT[636])*work.d_inv[332];
  work.L[223] = (work.KKT[637])*work.d_inv[332];
  work.v[333] = 0;
  work.d[333] = work.v[333];

  if (work.d[333] > 0)
    work.d[333] = -settings.kkt_reg;
  else
    work.d[333] -= settings.kkt_reg;

  work.d_inv[333] = 1/work.d[333];

  work.L[220] = (work.KKT[638])*work.d_inv[333];
  work.L[224] = (work.KKT[639])*work.d_inv[333];
  work.v[211] = work.L[215]*work.d[211];
  work.v[212] = work.L[216]*work.d[212];
  work.v[330] = work.L[217]*work.d[330];
  work.v[331] = work.L[218]*work.d[331];
  work.v[332] = work.L[219]*work.d[332];
  work.v[333] = work.L[220]*work.d[333];
  work.v[334] = work.KKT[640]-work.L[215]*work.v[211]-work.L[216]*work.v[212]-work.L[217]*work.v[330]-work.L[218]*work.v[331]-work.L[219]*work.v[332]-work.L[220]*work.v[333];
  work.d[334] = work.v[334];

  if (work.d[334] < 0)
    work.d[334] = settings.kkt_reg;
  else
    work.d[334] += settings.kkt_reg;
  work.d_inv[334] = 1/work.d[334];

  work.L[225] = (-work.L[221]*work.v[330]-work.L[222]*work.v[331]-work.L[223]*work.v[332]-work.L[224]*work.v[333])*work.d_inv[334];
  work.L[226] = (work.KKT[641])*work.d_inv[334];
  work.v[330] = work.L[221]*work.d[330];
  work.v[331] = work.L[222]*work.d[331];
  work.v[332] = work.L[223]*work.d[332];
  work.v[333] = work.L[224]*work.d[333];
  work.v[334] = work.L[225]*work.d[334];
  work.v[335] = work.KKT[642]-work.L[221]*work.v[330]-work.L[222]*work.v[331]-work.L[223]*work.v[332]-work.L[224]*work.v[333]-work.L[225]*work.v[334];
  work.d[335] = work.v[335];

  if (work.d[335] < 0)
    work.d[335] = settings.kkt_reg;
  else
    work.d[335] += settings.kkt_reg;
  work.d_inv[335] = 1/work.d[335];

  work.L[227] = (work.KKT[643]-work.L[226]*work.v[334])*work.d_inv[335];
  work.v[334] = work.L[226]*work.d[334];
  work.v[335] = work.L[227]*work.d[335];
  work.v[336] = 0-work.L[226]*work.v[334]-work.L[227]*work.v[335];
  work.d[336] = work.v[336];

  if (work.d[336] > 0)
    work.d[336] = -settings.kkt_reg;
  else
    work.d[336] -= settings.kkt_reg;

  work.d_inv[336] = 1/work.d[336];

  work.L[228] = (work.KKT[644])*work.d_inv[336];
  work.v[336] = work.L[228]*work.d[336];
  work.v[337] = work.KKT[645]-work.L[228]*work.v[336];
  work.d[337] = work.v[337];

  if (work.d[337] < 0)
    work.d[337] = settings.kkt_reg;
  else
    work.d[337] += settings.kkt_reg;
  work.d_inv[337] = 1/work.d[337];

  work.L[247] = (work.KKT[646])*work.d_inv[337];
  work.L[267] = (work.KKT[647])*work.d_inv[337];
  work.L[288] = (work.KKT[648])*work.d_inv[337];
  work.L[310] = (work.KKT[649])*work.d_inv[337];
  work.L[333] = (work.KKT[650])*work.d_inv[337];
  work.L[357] = (work.KKT[651])*work.d_inv[337];
  work.L[382] = (work.KKT[652])*work.d_inv[337];
  work.L[408] = (work.KKT[653])*work.d_inv[337];
  work.L[435] = (work.KKT[654])*work.d_inv[337];
  work.L[463] = (work.KKT[655])*work.d_inv[337];
  work.L[492] = (work.KKT[656])*work.d_inv[337];
  work.L[522] = (work.KKT[657])*work.d_inv[337];
  work.L[553] = (work.KKT[658])*work.d_inv[337];
  work.L[585] = (work.KKT[659])*work.d_inv[337];
  work.L[618] = (work.KKT[660])*work.d_inv[337];
  work.L[652] = (work.KKT[661])*work.d_inv[337];
  work.L[687] = (work.KKT[662])*work.d_inv[337];
  work.L[723] = (work.KKT[663])*work.d_inv[337];
  work.L[760] = (work.KKT[664])*work.d_inv[337];
  work.L[798] = (work.KKT[665])*work.d_inv[337];
  work.L[837] = (work.KKT[666])*work.d_inv[337];
  work.L[877] = (work.KKT[667])*work.d_inv[337];
  work.L[918] = (work.KKT[668])*work.d_inv[337];
  work.L[960] = (work.KKT[669])*work.d_inv[337];
  work.L[1003] = (work.KKT[670])*work.d_inv[337];
  work.L[1047] = (work.KKT[671])*work.d_inv[337];
  work.L[1092] = (work.KKT[672])*work.d_inv[337];
  work.L[1138] = (work.KKT[673])*work.d_inv[337];
  work.L[1167] = (work.KKT[674])*work.d_inv[337];
  work.v[1] = work.L[229]*work.d[1];
  work.v[152] = work.L[230]*work.d[152];
  work.v[153] = work.L[231]*work.d[153];
  work.v[338] = work.KKT[675]-work.L[229]*work.v[1]-work.L[230]*work.v[152]-work.L[231]*work.v[153];
  work.d[338] = work.v[338];

  if (work.d[338] > 0)
    work.d[338] = -settings.kkt_reg;
  else
    work.d[338] -= settings.kkt_reg;

  work.d_inv[338] = 1/work.d[338];

  work.L[236] = (work.KKT[676])*work.d_inv[338];
  work.L[240] = (work.KKT[677])*work.d_inv[338];
  work.v[121] = work.L[232]*work.d[121];
  work.v[339] = work.KKT[678]-work.L[232]*work.v[121];
  work.d[339] = work.v[339];

  if (work.d[339] > 0)
    work.d[339] = -settings.kkt_reg;
  else
    work.d[339] -= settings.kkt_reg;

  work.d_inv[339] = 1/work.d[339];

  work.L[237] = (work.KKT[679])*work.d_inv[339];
  work.L[241] = (work.KKT[680])*work.d_inv[339];
  work.v[301] = work.L[233]*work.d[301];
  work.v[340] = 0-work.L[233]*work.v[301];
  work.d[340] = work.v[340];

  if (work.d[340] > 0)
    work.d[340] = -settings.kkt_reg;
  else
    work.d[340] -= settings.kkt_reg;

  work.d_inv[340] = 1/work.d[340];

  work.L[238] = (work.KKT[681])*work.d_inv[340];
  work.L[242] = (work.KKT[682])*work.d_inv[340];
  work.v[341] = 0;
  work.d[341] = work.v[341];

  if (work.d[341] > 0)
    work.d[341] = -settings.kkt_reg;
  else
    work.d[341] -= settings.kkt_reg;

  work.d_inv[341] = 1/work.d[341];

  work.L[239] = (work.KKT[683])*work.d_inv[341];
  work.L[243] = (work.KKT[684])*work.d_inv[341];
  work.v[214] = work.L[234]*work.d[214];
  work.v[215] = work.L[235]*work.d[215];
  work.v[338] = work.L[236]*work.d[338];
  work.v[339] = work.L[237]*work.d[339];
  work.v[340] = work.L[238]*work.d[340];
  work.v[341] = work.L[239]*work.d[341];
  work.v[342] = work.KKT[685]-work.L[234]*work.v[214]-work.L[235]*work.v[215]-work.L[236]*work.v[338]-work.L[237]*work.v[339]-work.L[238]*work.v[340]-work.L[239]*work.v[341];
  work.d[342] = work.v[342];

  if (work.d[342] < 0)
    work.d[342] = settings.kkt_reg;
  else
    work.d[342] += settings.kkt_reg;
  work.d_inv[342] = 1/work.d[342];

  work.L[244] = (-work.L[240]*work.v[338]-work.L[241]*work.v[339]-work.L[242]*work.v[340]-work.L[243]*work.v[341])*work.d_inv[342];
  work.L[245] = (work.KKT[686])*work.d_inv[342];
  work.v[338] = work.L[240]*work.d[338];
  work.v[339] = work.L[241]*work.d[339];
  work.v[340] = work.L[242]*work.d[340];
  work.v[341] = work.L[243]*work.d[341];
  work.v[342] = work.L[244]*work.d[342];
  work.v[343] = work.KKT[687]-work.L[240]*work.v[338]-work.L[241]*work.v[339]-work.L[242]*work.v[340]-work.L[243]*work.v[341]-work.L[244]*work.v[342];
  work.d[343] = work.v[343];

  if (work.d[343] < 0)
    work.d[343] = settings.kkt_reg;
  else
    work.d[343] += settings.kkt_reg;
  work.d_inv[343] = 1/work.d[343];

  work.L[246] = (work.KKT[688]-work.L[245]*work.v[342])*work.d_inv[343];
  work.v[342] = work.L[245]*work.d[342];
  work.v[343] = work.L[246]*work.d[343];
  work.v[344] = 0-work.L[245]*work.v[342]-work.L[246]*work.v[343];
  work.d[344] = work.v[344];

  if (work.d[344] > 0)
    work.d[344] = -settings.kkt_reg;
  else
    work.d[344] -= settings.kkt_reg;

  work.d_inv[344] = 1/work.d[344];

  work.L[248] = (work.KKT[689])*work.d_inv[344];
  work.v[337] = work.L[247]*work.d[337];
  work.v[344] = work.L[248]*work.d[344];
  work.v[345] = work.KKT[690]-work.L[247]*work.v[337]-work.L[248]*work.v[344];
  work.d[345] = work.v[345];

  if (work.d[345] < 0)
    work.d[345] = settings.kkt_reg;
  else
    work.d[345] += settings.kkt_reg;
  work.d_inv[345] = 1/work.d[345];

  work.L[268] = (work.KKT[691]-work.L[267]*work.v[337])*work.d_inv[345];
  work.L[289] = (work.KKT[692]-work.L[288]*work.v[337])*work.d_inv[345];
  work.L[311] = (work.KKT[693]-work.L[310]*work.v[337])*work.d_inv[345];
  work.L[334] = (work.KKT[694]-work.L[333]*work.v[337])*work.d_inv[345];
  work.L[358] = (work.KKT[695]-work.L[357]*work.v[337])*work.d_inv[345];
  work.L[383] = (work.KKT[696]-work.L[382]*work.v[337])*work.d_inv[345];
  work.L[409] = (work.KKT[697]-work.L[408]*work.v[337])*work.d_inv[345];
  work.L[436] = (work.KKT[698]-work.L[435]*work.v[337])*work.d_inv[345];
  work.L[464] = (work.KKT[699]-work.L[463]*work.v[337])*work.d_inv[345];
  work.L[493] = (work.KKT[700]-work.L[492]*work.v[337])*work.d_inv[345];
  work.L[523] = (work.KKT[701]-work.L[522]*work.v[337])*work.d_inv[345];
  work.L[554] = (work.KKT[702]-work.L[553]*work.v[337])*work.d_inv[345];
  work.L[586] = (work.KKT[703]-work.L[585]*work.v[337])*work.d_inv[345];
  work.L[619] = (work.KKT[704]-work.L[618]*work.v[337])*work.d_inv[345];
  work.L[653] = (work.KKT[705]-work.L[652]*work.v[337])*work.d_inv[345];
  work.L[688] = (work.KKT[706]-work.L[687]*work.v[337])*work.d_inv[345];
  work.L[724] = (work.KKT[707]-work.L[723]*work.v[337])*work.d_inv[345];
  work.L[761] = (work.KKT[708]-work.L[760]*work.v[337])*work.d_inv[345];
  work.L[799] = (work.KKT[709]-work.L[798]*work.v[337])*work.d_inv[345];
  work.L[838] = (work.KKT[710]-work.L[837]*work.v[337])*work.d_inv[345];
  work.L[878] = (work.KKT[711]-work.L[877]*work.v[337])*work.d_inv[345];
  work.L[919] = (work.KKT[712]-work.L[918]*work.v[337])*work.d_inv[345];
  work.L[961] = (work.KKT[713]-work.L[960]*work.v[337])*work.d_inv[345];
  work.L[1004] = (work.KKT[714]-work.L[1003]*work.v[337])*work.d_inv[345];
  work.L[1048] = (work.KKT[715]-work.L[1047]*work.v[337])*work.d_inv[345];
  work.L[1093] = (work.KKT[716]-work.L[1092]*work.v[337])*work.d_inv[345];
  work.L[1139] = (work.KKT[717]-work.L[1138]*work.v[337])*work.d_inv[345];
  work.L[1168] = (work.KKT[718]-work.L[1167]*work.v[337])*work.d_inv[345];
  work.v[2] = work.L[249]*work.d[2];
  work.v[154] = work.L[250]*work.d[154];
  work.v[155] = work.L[251]*work.d[155];
  work.v[346] = work.KKT[719]-work.L[249]*work.v[2]-work.L[250]*work.v[154]-work.L[251]*work.v[155];
  work.d[346] = work.v[346];

  if (work.d[346] > 0)
    work.d[346] = -settings.kkt_reg;
  else
    work.d[346] -= settings.kkt_reg;

  work.d_inv[346] = 1/work.d[346];

  work.L[256] = (work.KKT[720])*work.d_inv[346];
  work.L[260] = (work.KKT[721])*work.d_inv[346];
  work.v[122] = work.L[252]*work.d[122];
  work.v[347] = work.KKT[722]-work.L[252]*work.v[122];
  work.d[347] = work.v[347];

  if (work.d[347] > 0)
    work.d[347] = -settings.kkt_reg;
  else
    work.d[347] -= settings.kkt_reg;

  work.d_inv[347] = 1/work.d[347];

  work.L[257] = (work.KKT[723])*work.d_inv[347];
  work.L[261] = (work.KKT[724])*work.d_inv[347];
  work.v[302] = work.L[253]*work.d[302];
  work.v[348] = 0-work.L[253]*work.v[302];
  work.d[348] = work.v[348];

  if (work.d[348] > 0)
    work.d[348] = -settings.kkt_reg;
  else
    work.d[348] -= settings.kkt_reg;

  work.d_inv[348] = 1/work.d[348];

  work.L[258] = (work.KKT[725])*work.d_inv[348];
  work.L[262] = (work.KKT[726])*work.d_inv[348];
  work.v[349] = 0;
  work.d[349] = work.v[349];

  if (work.d[349] > 0)
    work.d[349] = -settings.kkt_reg;
  else
    work.d[349] -= settings.kkt_reg;

  work.d_inv[349] = 1/work.d[349];

  work.L[259] = (work.KKT[727])*work.d_inv[349];
  work.L[263] = (work.KKT[728])*work.d_inv[349];
  work.v[217] = work.L[254]*work.d[217];
  work.v[218] = work.L[255]*work.d[218];
  work.v[346] = work.L[256]*work.d[346];
  work.v[347] = work.L[257]*work.d[347];
  work.v[348] = work.L[258]*work.d[348];
  work.v[349] = work.L[259]*work.d[349];
  work.v[350] = work.KKT[729]-work.L[254]*work.v[217]-work.L[255]*work.v[218]-work.L[256]*work.v[346]-work.L[257]*work.v[347]-work.L[258]*work.v[348]-work.L[259]*work.v[349];
  work.d[350] = work.v[350];

  if (work.d[350] < 0)
    work.d[350] = settings.kkt_reg;
  else
    work.d[350] += settings.kkt_reg;
  work.d_inv[350] = 1/work.d[350];

  work.L[264] = (-work.L[260]*work.v[346]-work.L[261]*work.v[347]-work.L[262]*work.v[348]-work.L[263]*work.v[349])*work.d_inv[350];
  work.L[265] = (work.KKT[730])*work.d_inv[350];
  work.v[346] = work.L[260]*work.d[346];
  work.v[347] = work.L[261]*work.d[347];
  work.v[348] = work.L[262]*work.d[348];
  work.v[349] = work.L[263]*work.d[349];
  work.v[350] = work.L[264]*work.d[350];
  work.v[351] = work.KKT[731]-work.L[260]*work.v[346]-work.L[261]*work.v[347]-work.L[262]*work.v[348]-work.L[263]*work.v[349]-work.L[264]*work.v[350];
  work.d[351] = work.v[351];

  if (work.d[351] < 0)
    work.d[351] = settings.kkt_reg;
  else
    work.d[351] += settings.kkt_reg;
  work.d_inv[351] = 1/work.d[351];

  work.L[266] = (work.KKT[732]-work.L[265]*work.v[350])*work.d_inv[351];
  work.v[350] = work.L[265]*work.d[350];
  work.v[351] = work.L[266]*work.d[351];
  work.v[352] = 0-work.L[265]*work.v[350]-work.L[266]*work.v[351];
  work.d[352] = work.v[352];

  if (work.d[352] > 0)
    work.d[352] = -settings.kkt_reg;
  else
    work.d[352] -= settings.kkt_reg;

  work.d_inv[352] = 1/work.d[352];

  work.L[269] = (work.KKT[733])*work.d_inv[352];
  work.v[337] = work.L[267]*work.d[337];
  work.v[345] = work.L[268]*work.d[345];
  work.v[352] = work.L[269]*work.d[352];
  work.v[353] = work.KKT[734]-work.L[267]*work.v[337]-work.L[268]*work.v[345]-work.L[269]*work.v[352];
  work.d[353] = work.v[353];

  if (work.d[353] < 0)
    work.d[353] = settings.kkt_reg;
  else
    work.d[353] += settings.kkt_reg;
  work.d_inv[353] = 1/work.d[353];

  work.L[290] = (work.KKT[735]-work.L[288]*work.v[337]-work.L[289]*work.v[345])*work.d_inv[353];
  work.L[312] = (work.KKT[736]-work.L[310]*work.v[337]-work.L[311]*work.v[345])*work.d_inv[353];
  work.L[335] = (work.KKT[737]-work.L[333]*work.v[337]-work.L[334]*work.v[345])*work.d_inv[353];
  work.L[359] = (work.KKT[738]-work.L[357]*work.v[337]-work.L[358]*work.v[345])*work.d_inv[353];
  work.L[384] = (work.KKT[739]-work.L[382]*work.v[337]-work.L[383]*work.v[345])*work.d_inv[353];
  work.L[410] = (work.KKT[740]-work.L[408]*work.v[337]-work.L[409]*work.v[345])*work.d_inv[353];
  work.L[437] = (work.KKT[741]-work.L[435]*work.v[337]-work.L[436]*work.v[345])*work.d_inv[353];
  work.L[465] = (work.KKT[742]-work.L[463]*work.v[337]-work.L[464]*work.v[345])*work.d_inv[353];
  work.L[494] = (work.KKT[743]-work.L[492]*work.v[337]-work.L[493]*work.v[345])*work.d_inv[353];
  work.L[524] = (work.KKT[744]-work.L[522]*work.v[337]-work.L[523]*work.v[345])*work.d_inv[353];
  work.L[555] = (work.KKT[745]-work.L[553]*work.v[337]-work.L[554]*work.v[345])*work.d_inv[353];
  work.L[587] = (work.KKT[746]-work.L[585]*work.v[337]-work.L[586]*work.v[345])*work.d_inv[353];
  work.L[620] = (work.KKT[747]-work.L[618]*work.v[337]-work.L[619]*work.v[345])*work.d_inv[353];
  work.L[654] = (work.KKT[748]-work.L[652]*work.v[337]-work.L[653]*work.v[345])*work.d_inv[353];
  work.L[689] = (work.KKT[749]-work.L[687]*work.v[337]-work.L[688]*work.v[345])*work.d_inv[353];
  work.L[725] = (work.KKT[750]-work.L[723]*work.v[337]-work.L[724]*work.v[345])*work.d_inv[353];
  work.L[762] = (work.KKT[751]-work.L[760]*work.v[337]-work.L[761]*work.v[345])*work.d_inv[353];
  work.L[800] = (work.KKT[752]-work.L[798]*work.v[337]-work.L[799]*work.v[345])*work.d_inv[353];
  work.L[839] = (work.KKT[753]-work.L[837]*work.v[337]-work.L[838]*work.v[345])*work.d_inv[353];
  work.L[879] = (work.KKT[754]-work.L[877]*work.v[337]-work.L[878]*work.v[345])*work.d_inv[353];
  work.L[920] = (work.KKT[755]-work.L[918]*work.v[337]-work.L[919]*work.v[345])*work.d_inv[353];
  work.L[962] = (work.KKT[756]-work.L[960]*work.v[337]-work.L[961]*work.v[345])*work.d_inv[353];
  work.L[1005] = (work.KKT[757]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345])*work.d_inv[353];
  work.L[1049] = (work.KKT[758]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345])*work.d_inv[353];
  work.L[1094] = (work.KKT[759]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345])*work.d_inv[353];
  work.L[1140] = (work.KKT[760]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345])*work.d_inv[353];
  work.L[1169] = (work.KKT[761]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345])*work.d_inv[353];
  work.v[3] = work.L[270]*work.d[3];
  work.v[156] = work.L[271]*work.d[156];
  work.v[157] = work.L[272]*work.d[157];
  work.v[354] = work.KKT[762]-work.L[270]*work.v[3]-work.L[271]*work.v[156]-work.L[272]*work.v[157];
  work.d[354] = work.v[354];

  if (work.d[354] > 0)
    work.d[354] = -settings.kkt_reg;
  else
    work.d[354] -= settings.kkt_reg;

  work.d_inv[354] = 1/work.d[354];

  work.L[277] = (work.KKT[763])*work.d_inv[354];
  work.L[281] = (work.KKT[764])*work.d_inv[354];
  work.v[123] = work.L[273]*work.d[123];
  work.v[355] = work.KKT[765]-work.L[273]*work.v[123];
  work.d[355] = work.v[355];

  if (work.d[355] > 0)
    work.d[355] = -settings.kkt_reg;
  else
    work.d[355] -= settings.kkt_reg;

  work.d_inv[355] = 1/work.d[355];

  work.L[278] = (work.KKT[766])*work.d_inv[355];
  work.L[282] = (work.KKT[767])*work.d_inv[355];
  work.v[303] = work.L[274]*work.d[303];
  work.v[356] = 0-work.L[274]*work.v[303];
  work.d[356] = work.v[356];

  if (work.d[356] > 0)
    work.d[356] = -settings.kkt_reg;
  else
    work.d[356] -= settings.kkt_reg;

  work.d_inv[356] = 1/work.d[356];

  work.L[279] = (work.KKT[768])*work.d_inv[356];
  work.L[283] = (work.KKT[769])*work.d_inv[356];
  work.v[357] = 0;
  work.d[357] = work.v[357];

  if (work.d[357] > 0)
    work.d[357] = -settings.kkt_reg;
  else
    work.d[357] -= settings.kkt_reg;

  work.d_inv[357] = 1/work.d[357];

  work.L[280] = (work.KKT[770])*work.d_inv[357];
  work.L[284] = (work.KKT[771])*work.d_inv[357];
  work.v[220] = work.L[275]*work.d[220];
  work.v[221] = work.L[276]*work.d[221];
  work.v[354] = work.L[277]*work.d[354];
  work.v[355] = work.L[278]*work.d[355];
  work.v[356] = work.L[279]*work.d[356];
  work.v[357] = work.L[280]*work.d[357];
  work.v[358] = work.KKT[772]-work.L[275]*work.v[220]-work.L[276]*work.v[221]-work.L[277]*work.v[354]-work.L[278]*work.v[355]-work.L[279]*work.v[356]-work.L[280]*work.v[357];
  work.d[358] = work.v[358];

  if (work.d[358] < 0)
    work.d[358] = settings.kkt_reg;
  else
    work.d[358] += settings.kkt_reg;
  work.d_inv[358] = 1/work.d[358];

  work.L[285] = (-work.L[281]*work.v[354]-work.L[282]*work.v[355]-work.L[283]*work.v[356]-work.L[284]*work.v[357])*work.d_inv[358];
  work.L[286] = (work.KKT[773])*work.d_inv[358];
  work.v[354] = work.L[281]*work.d[354];
  work.v[355] = work.L[282]*work.d[355];
  work.v[356] = work.L[283]*work.d[356];
  work.v[357] = work.L[284]*work.d[357];
  work.v[358] = work.L[285]*work.d[358];
  work.v[359] = work.KKT[774]-work.L[281]*work.v[354]-work.L[282]*work.v[355]-work.L[283]*work.v[356]-work.L[284]*work.v[357]-work.L[285]*work.v[358];
  work.d[359] = work.v[359];

  if (work.d[359] < 0)
    work.d[359] = settings.kkt_reg;
  else
    work.d[359] += settings.kkt_reg;
  work.d_inv[359] = 1/work.d[359];

  work.L[287] = (work.KKT[775]-work.L[286]*work.v[358])*work.d_inv[359];
  work.v[358] = work.L[286]*work.d[358];
  work.v[359] = work.L[287]*work.d[359];
  work.v[360] = 0-work.L[286]*work.v[358]-work.L[287]*work.v[359];
  work.d[360] = work.v[360];

  if (work.d[360] > 0)
    work.d[360] = -settings.kkt_reg;
  else
    work.d[360] -= settings.kkt_reg;

  work.d_inv[360] = 1/work.d[360];

  work.L[291] = (work.KKT[776])*work.d_inv[360];
  work.v[337] = work.L[288]*work.d[337];
  work.v[345] = work.L[289]*work.d[345];
  work.v[353] = work.L[290]*work.d[353];
  work.v[360] = work.L[291]*work.d[360];
  work.v[361] = work.KKT[777]-work.L[288]*work.v[337]-work.L[289]*work.v[345]-work.L[290]*work.v[353]-work.L[291]*work.v[360];
  work.d[361] = work.v[361];

  if (work.d[361] < 0)
    work.d[361] = settings.kkt_reg;
  else
    work.d[361] += settings.kkt_reg;
  work.d_inv[361] = 1/work.d[361];

  work.L[313] = (work.KKT[778]-work.L[310]*work.v[337]-work.L[311]*work.v[345]-work.L[312]*work.v[353])*work.d_inv[361];
  work.L[336] = (work.KKT[779]-work.L[333]*work.v[337]-work.L[334]*work.v[345]-work.L[335]*work.v[353])*work.d_inv[361];
  work.L[360] = (work.KKT[780]-work.L[357]*work.v[337]-work.L[358]*work.v[345]-work.L[359]*work.v[353])*work.d_inv[361];
  work.L[385] = (work.KKT[781]-work.L[382]*work.v[337]-work.L[383]*work.v[345]-work.L[384]*work.v[353])*work.d_inv[361];
  work.L[411] = (work.KKT[782]-work.L[408]*work.v[337]-work.L[409]*work.v[345]-work.L[410]*work.v[353])*work.d_inv[361];
  work.L[438] = (work.KKT[783]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353])*work.d_inv[361];
  work.L[466] = (work.KKT[784]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353])*work.d_inv[361];
  work.L[495] = (work.KKT[785]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353])*work.d_inv[361];
  work.L[525] = (work.KKT[786]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353])*work.d_inv[361];
  work.L[556] = (work.KKT[787]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353])*work.d_inv[361];
  work.L[588] = (work.KKT[788]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353])*work.d_inv[361];
  work.L[621] = (work.KKT[789]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353])*work.d_inv[361];
  work.L[655] = (work.KKT[790]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353])*work.d_inv[361];
  work.L[690] = (work.KKT[791]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353])*work.d_inv[361];
  work.L[726] = (work.KKT[792]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353])*work.d_inv[361];
  work.L[763] = (work.KKT[793]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353])*work.d_inv[361];
  work.L[801] = (work.KKT[794]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353])*work.d_inv[361];
  work.L[840] = (work.KKT[795]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353])*work.d_inv[361];
  work.L[880] = (work.KKT[796]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353])*work.d_inv[361];
  work.L[921] = (work.KKT[797]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353])*work.d_inv[361];
  work.L[963] = (work.KKT[798]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353])*work.d_inv[361];
  work.L[1006] = (work.KKT[799]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353])*work.d_inv[361];
  work.L[1050] = (work.KKT[800]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353])*work.d_inv[361];
  work.L[1095] = (work.KKT[801]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353])*work.d_inv[361];
  work.L[1141] = (work.KKT[802]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353])*work.d_inv[361];
  work.L[1170] = (work.KKT[803]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353])*work.d_inv[361];
  work.v[4] = work.L[292]*work.d[4];
  work.v[158] = work.L[293]*work.d[158];
  work.v[159] = work.L[294]*work.d[159];
  work.v[362] = work.KKT[804]-work.L[292]*work.v[4]-work.L[293]*work.v[158]-work.L[294]*work.v[159];
  work.d[362] = work.v[362];

  if (work.d[362] > 0)
    work.d[362] = -settings.kkt_reg;
  else
    work.d[362] -= settings.kkt_reg;

  work.d_inv[362] = 1/work.d[362];

  work.L[299] = (work.KKT[805])*work.d_inv[362];
  work.L[303] = (work.KKT[806])*work.d_inv[362];
  work.v[124] = work.L[295]*work.d[124];
  work.v[363] = work.KKT[807]-work.L[295]*work.v[124];
  work.d[363] = work.v[363];

  if (work.d[363] > 0)
    work.d[363] = -settings.kkt_reg;
  else
    work.d[363] -= settings.kkt_reg;

  work.d_inv[363] = 1/work.d[363];

  work.L[300] = (work.KKT[808])*work.d_inv[363];
  work.L[304] = (work.KKT[809])*work.d_inv[363];
  work.v[304] = work.L[296]*work.d[304];
  work.v[364] = 0-work.L[296]*work.v[304];
  work.d[364] = work.v[364];

  if (work.d[364] > 0)
    work.d[364] = -settings.kkt_reg;
  else
    work.d[364] -= settings.kkt_reg;

  work.d_inv[364] = 1/work.d[364];

  work.L[301] = (work.KKT[810])*work.d_inv[364];
  work.L[305] = (work.KKT[811])*work.d_inv[364];
  work.v[365] = 0;
  work.d[365] = work.v[365];

  if (work.d[365] > 0)
    work.d[365] = -settings.kkt_reg;
  else
    work.d[365] -= settings.kkt_reg;

  work.d_inv[365] = 1/work.d[365];

  work.L[302] = (work.KKT[812])*work.d_inv[365];
  work.L[306] = (work.KKT[813])*work.d_inv[365];
  work.v[223] = work.L[297]*work.d[223];
  work.v[224] = work.L[298]*work.d[224];
  work.v[362] = work.L[299]*work.d[362];
  work.v[363] = work.L[300]*work.d[363];
  work.v[364] = work.L[301]*work.d[364];
  work.v[365] = work.L[302]*work.d[365];
  work.v[366] = work.KKT[814]-work.L[297]*work.v[223]-work.L[298]*work.v[224]-work.L[299]*work.v[362]-work.L[300]*work.v[363]-work.L[301]*work.v[364]-work.L[302]*work.v[365];
  work.d[366] = work.v[366];

  if (work.d[366] < 0)
    work.d[366] = settings.kkt_reg;
  else
    work.d[366] += settings.kkt_reg;
  work.d_inv[366] = 1/work.d[366];

  work.L[307] = (-work.L[303]*work.v[362]-work.L[304]*work.v[363]-work.L[305]*work.v[364]-work.L[306]*work.v[365])*work.d_inv[366];
  work.L[308] = (work.KKT[815])*work.d_inv[366];
  work.v[362] = work.L[303]*work.d[362];
  work.v[363] = work.L[304]*work.d[363];
  work.v[364] = work.L[305]*work.d[364];
  work.v[365] = work.L[306]*work.d[365];
  work.v[366] = work.L[307]*work.d[366];
  work.v[367] = work.KKT[816]-work.L[303]*work.v[362]-work.L[304]*work.v[363]-work.L[305]*work.v[364]-work.L[306]*work.v[365]-work.L[307]*work.v[366];
  work.d[367] = work.v[367];

  if (work.d[367] < 0)
    work.d[367] = settings.kkt_reg;
  else
    work.d[367] += settings.kkt_reg;
  work.d_inv[367] = 1/work.d[367];

  work.L[309] = (work.KKT[817]-work.L[308]*work.v[366])*work.d_inv[367];
  work.v[366] = work.L[308]*work.d[366];
  work.v[367] = work.L[309]*work.d[367];
  work.v[368] = 0-work.L[308]*work.v[366]-work.L[309]*work.v[367];
  work.d[368] = work.v[368];

  if (work.d[368] > 0)
    work.d[368] = -settings.kkt_reg;
  else
    work.d[368] -= settings.kkt_reg;

  work.d_inv[368] = 1/work.d[368];

  work.L[314] = (work.KKT[818])*work.d_inv[368];
  work.v[337] = work.L[310]*work.d[337];
  work.v[345] = work.L[311]*work.d[345];
  work.v[353] = work.L[312]*work.d[353];
  work.v[361] = work.L[313]*work.d[361];
  work.v[368] = work.L[314]*work.d[368];
  work.v[369] = work.KKT[819]-work.L[310]*work.v[337]-work.L[311]*work.v[345]-work.L[312]*work.v[353]-work.L[313]*work.v[361]-work.L[314]*work.v[368];
  work.d[369] = work.v[369];

  if (work.d[369] < 0)
    work.d[369] = settings.kkt_reg;
  else
    work.d[369] += settings.kkt_reg;
  work.d_inv[369] = 1/work.d[369];

  work.L[337] = (work.KKT[820]-work.L[333]*work.v[337]-work.L[334]*work.v[345]-work.L[335]*work.v[353]-work.L[336]*work.v[361])*work.d_inv[369];
  work.L[361] = (work.KKT[821]-work.L[357]*work.v[337]-work.L[358]*work.v[345]-work.L[359]*work.v[353]-work.L[360]*work.v[361])*work.d_inv[369];
  work.L[386] = (work.KKT[822]-work.L[382]*work.v[337]-work.L[383]*work.v[345]-work.L[384]*work.v[353]-work.L[385]*work.v[361])*work.d_inv[369];
  work.L[412] = (work.KKT[823]-work.L[408]*work.v[337]-work.L[409]*work.v[345]-work.L[410]*work.v[353]-work.L[411]*work.v[361])*work.d_inv[369];
  work.L[439] = (work.KKT[824]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353]-work.L[438]*work.v[361])*work.d_inv[369];
  work.L[467] = (work.KKT[825]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361])*work.d_inv[369];
  work.L[496] = (work.KKT[826]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361])*work.d_inv[369];
  work.L[526] = (work.KKT[827]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361])*work.d_inv[369];
  work.L[557] = (work.KKT[828]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361])*work.d_inv[369];
  work.L[589] = (work.KKT[829]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361])*work.d_inv[369];
  work.L[622] = (work.KKT[830]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361])*work.d_inv[369];
  work.L[656] = (work.KKT[831]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361])*work.d_inv[369];
  work.L[691] = (work.KKT[832]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361])*work.d_inv[369];
  work.L[727] = (work.KKT[833]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361])*work.d_inv[369];
  work.L[764] = (work.KKT[834]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361])*work.d_inv[369];
  work.L[802] = (work.KKT[835]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361])*work.d_inv[369];
  work.L[841] = (work.KKT[836]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361])*work.d_inv[369];
  work.L[881] = (work.KKT[837]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361])*work.d_inv[369];
  work.L[922] = (work.KKT[838]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361])*work.d_inv[369];
  work.L[964] = (work.KKT[839]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361])*work.d_inv[369];
  work.L[1007] = (work.KKT[840]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361])*work.d_inv[369];
  work.L[1051] = (work.KKT[841]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361])*work.d_inv[369];
  work.L[1096] = (work.KKT[842]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361])*work.d_inv[369];
  work.L[1142] = (work.KKT[843]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361])*work.d_inv[369];
  work.L[1171] = (work.KKT[844]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361])*work.d_inv[369];
  work.v[5] = work.L[315]*work.d[5];
  work.v[160] = work.L[316]*work.d[160];
  work.v[161] = work.L[317]*work.d[161];
  work.v[370] = work.KKT[845]-work.L[315]*work.v[5]-work.L[316]*work.v[160]-work.L[317]*work.v[161];
  work.d[370] = work.v[370];

  if (work.d[370] > 0)
    work.d[370] = -settings.kkt_reg;
  else
    work.d[370] -= settings.kkt_reg;

  work.d_inv[370] = 1/work.d[370];

  work.L[322] = (work.KKT[846])*work.d_inv[370];
  work.L[326] = (work.KKT[847])*work.d_inv[370];
  work.v[125] = work.L[318]*work.d[125];
  work.v[371] = work.KKT[848]-work.L[318]*work.v[125];
  work.d[371] = work.v[371];

  if (work.d[371] > 0)
    work.d[371] = -settings.kkt_reg;
  else
    work.d[371] -= settings.kkt_reg;

  work.d_inv[371] = 1/work.d[371];

  work.L[323] = (work.KKT[849])*work.d_inv[371];
  work.L[327] = (work.KKT[850])*work.d_inv[371];
  work.v[305] = work.L[319]*work.d[305];
  work.v[372] = 0-work.L[319]*work.v[305];
  work.d[372] = work.v[372];

  if (work.d[372] > 0)
    work.d[372] = -settings.kkt_reg;
  else
    work.d[372] -= settings.kkt_reg;

  work.d_inv[372] = 1/work.d[372];

  work.L[324] = (work.KKT[851])*work.d_inv[372];
  work.L[328] = (work.KKT[852])*work.d_inv[372];
  work.v[373] = 0;
  work.d[373] = work.v[373];

  if (work.d[373] > 0)
    work.d[373] = -settings.kkt_reg;
  else
    work.d[373] -= settings.kkt_reg;

  work.d_inv[373] = 1/work.d[373];

  work.L[325] = (work.KKT[853])*work.d_inv[373];
  work.L[329] = (work.KKT[854])*work.d_inv[373];
  work.v[226] = work.L[320]*work.d[226];
  work.v[227] = work.L[321]*work.d[227];
  work.v[370] = work.L[322]*work.d[370];
  work.v[371] = work.L[323]*work.d[371];
  work.v[372] = work.L[324]*work.d[372];
  work.v[373] = work.L[325]*work.d[373];
  work.v[374] = work.KKT[855]-work.L[320]*work.v[226]-work.L[321]*work.v[227]-work.L[322]*work.v[370]-work.L[323]*work.v[371]-work.L[324]*work.v[372]-work.L[325]*work.v[373];
  work.d[374] = work.v[374];

  if (work.d[374] < 0)
    work.d[374] = settings.kkt_reg;
  else
    work.d[374] += settings.kkt_reg;
  work.d_inv[374] = 1/work.d[374];

  work.L[330] = (-work.L[326]*work.v[370]-work.L[327]*work.v[371]-work.L[328]*work.v[372]-work.L[329]*work.v[373])*work.d_inv[374];
  work.L[331] = (work.KKT[856])*work.d_inv[374];
  work.v[370] = work.L[326]*work.d[370];
  work.v[371] = work.L[327]*work.d[371];
  work.v[372] = work.L[328]*work.d[372];
  work.v[373] = work.L[329]*work.d[373];
  work.v[374] = work.L[330]*work.d[374];
  work.v[375] = work.KKT[857]-work.L[326]*work.v[370]-work.L[327]*work.v[371]-work.L[328]*work.v[372]-work.L[329]*work.v[373]-work.L[330]*work.v[374];
  work.d[375] = work.v[375];

  if (work.d[375] < 0)
    work.d[375] = settings.kkt_reg;
  else
    work.d[375] += settings.kkt_reg;
  work.d_inv[375] = 1/work.d[375];

  work.L[332] = (work.KKT[858]-work.L[331]*work.v[374])*work.d_inv[375];
  work.v[374] = work.L[331]*work.d[374];
  work.v[375] = work.L[332]*work.d[375];
  work.v[376] = 0-work.L[331]*work.v[374]-work.L[332]*work.v[375];
  work.d[376] = work.v[376];

  if (work.d[376] > 0)
    work.d[376] = -settings.kkt_reg;
  else
    work.d[376] -= settings.kkt_reg;

  work.d_inv[376] = 1/work.d[376];

  work.L[338] = (work.KKT[859])*work.d_inv[376];
  work.v[337] = work.L[333]*work.d[337];
  work.v[345] = work.L[334]*work.d[345];
  work.v[353] = work.L[335]*work.d[353];
  work.v[361] = work.L[336]*work.d[361];
  work.v[369] = work.L[337]*work.d[369];
  work.v[376] = work.L[338]*work.d[376];
  work.v[377] = work.KKT[860]-work.L[333]*work.v[337]-work.L[334]*work.v[345]-work.L[335]*work.v[353]-work.L[336]*work.v[361]-work.L[337]*work.v[369]-work.L[338]*work.v[376];
  work.d[377] = work.v[377];

  if (work.d[377] < 0)
    work.d[377] = settings.kkt_reg;
  else
    work.d[377] += settings.kkt_reg;
  work.d_inv[377] = 1/work.d[377];

  work.L[362] = (work.KKT[861]-work.L[357]*work.v[337]-work.L[358]*work.v[345]-work.L[359]*work.v[353]-work.L[360]*work.v[361]-work.L[361]*work.v[369])*work.d_inv[377];
  work.L[387] = (work.KKT[862]-work.L[382]*work.v[337]-work.L[383]*work.v[345]-work.L[384]*work.v[353]-work.L[385]*work.v[361]-work.L[386]*work.v[369])*work.d_inv[377];
  work.L[413] = (work.KKT[863]-work.L[408]*work.v[337]-work.L[409]*work.v[345]-work.L[410]*work.v[353]-work.L[411]*work.v[361]-work.L[412]*work.v[369])*work.d_inv[377];
  work.L[440] = (work.KKT[864]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353]-work.L[438]*work.v[361]-work.L[439]*work.v[369])*work.d_inv[377];
  work.L[468] = (work.KKT[865]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361]-work.L[467]*work.v[369])*work.d_inv[377];
  work.L[497] = (work.KKT[866]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369])*work.d_inv[377];
  work.L[527] = (work.KKT[867]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369])*work.d_inv[377];
  work.L[558] = (work.KKT[868]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369])*work.d_inv[377];
  work.L[590] = (work.KKT[869]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369])*work.d_inv[377];
  work.L[623] = (work.KKT[870]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369])*work.d_inv[377];
  work.L[657] = (work.KKT[871]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369])*work.d_inv[377];
  work.L[692] = (work.KKT[872]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369])*work.d_inv[377];
  work.L[728] = (work.KKT[873]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369])*work.d_inv[377];
  work.L[765] = (work.KKT[874]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369])*work.d_inv[377];
  work.L[803] = (work.KKT[875]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369])*work.d_inv[377];
  work.L[842] = (work.KKT[876]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369])*work.d_inv[377];
  work.L[882] = (work.KKT[877]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369])*work.d_inv[377];
  work.L[923] = (work.KKT[878]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369])*work.d_inv[377];
  work.L[965] = (work.KKT[879]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369])*work.d_inv[377];
  work.L[1008] = (work.KKT[880]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369])*work.d_inv[377];
  work.L[1052] = (work.KKT[881]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369])*work.d_inv[377];
  work.L[1097] = (work.KKT[882]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369])*work.d_inv[377];
  work.L[1143] = (work.KKT[883]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369])*work.d_inv[377];
  work.L[1172] = (work.KKT[884]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369])*work.d_inv[377];
  work.v[6] = work.L[339]*work.d[6];
  work.v[162] = work.L[340]*work.d[162];
  work.v[163] = work.L[341]*work.d[163];
  work.v[378] = work.KKT[885]-work.L[339]*work.v[6]-work.L[340]*work.v[162]-work.L[341]*work.v[163];
  work.d[378] = work.v[378];

  if (work.d[378] > 0)
    work.d[378] = -settings.kkt_reg;
  else
    work.d[378] -= settings.kkt_reg;

  work.d_inv[378] = 1/work.d[378];

  work.L[346] = (work.KKT[886])*work.d_inv[378];
  work.L[350] = (work.KKT[887])*work.d_inv[378];
  work.v[126] = work.L[342]*work.d[126];
  work.v[379] = work.KKT[888]-work.L[342]*work.v[126];
  work.d[379] = work.v[379];

  if (work.d[379] > 0)
    work.d[379] = -settings.kkt_reg;
  else
    work.d[379] -= settings.kkt_reg;

  work.d_inv[379] = 1/work.d[379];

  work.L[347] = (work.KKT[889])*work.d_inv[379];
  work.L[351] = (work.KKT[890])*work.d_inv[379];
  work.v[306] = work.L[343]*work.d[306];
  work.v[380] = 0-work.L[343]*work.v[306];
  work.d[380] = work.v[380];

  if (work.d[380] > 0)
    work.d[380] = -settings.kkt_reg;
  else
    work.d[380] -= settings.kkt_reg;

  work.d_inv[380] = 1/work.d[380];

  work.L[348] = (work.KKT[891])*work.d_inv[380];
  work.L[352] = (work.KKT[892])*work.d_inv[380];
  work.v[381] = 0;
  work.d[381] = work.v[381];

  if (work.d[381] > 0)
    work.d[381] = -settings.kkt_reg;
  else
    work.d[381] -= settings.kkt_reg;

  work.d_inv[381] = 1/work.d[381];

  work.L[349] = (work.KKT[893])*work.d_inv[381];
  work.L[353] = (work.KKT[894])*work.d_inv[381];
  work.v[229] = work.L[344]*work.d[229];
  work.v[230] = work.L[345]*work.d[230];
  work.v[378] = work.L[346]*work.d[378];
  work.v[379] = work.L[347]*work.d[379];
  work.v[380] = work.L[348]*work.d[380];
  work.v[381] = work.L[349]*work.d[381];
  work.v[382] = work.KKT[895]-work.L[344]*work.v[229]-work.L[345]*work.v[230]-work.L[346]*work.v[378]-work.L[347]*work.v[379]-work.L[348]*work.v[380]-work.L[349]*work.v[381];
  work.d[382] = work.v[382];

  if (work.d[382] < 0)
    work.d[382] = settings.kkt_reg;
  else
    work.d[382] += settings.kkt_reg;
  work.d_inv[382] = 1/work.d[382];

  work.L[354] = (-work.L[350]*work.v[378]-work.L[351]*work.v[379]-work.L[352]*work.v[380]-work.L[353]*work.v[381])*work.d_inv[382];
  work.L[355] = (work.KKT[896])*work.d_inv[382];
  work.v[378] = work.L[350]*work.d[378];
  work.v[379] = work.L[351]*work.d[379];
  work.v[380] = work.L[352]*work.d[380];
  work.v[381] = work.L[353]*work.d[381];
  work.v[382] = work.L[354]*work.d[382];
  work.v[383] = work.KKT[897]-work.L[350]*work.v[378]-work.L[351]*work.v[379]-work.L[352]*work.v[380]-work.L[353]*work.v[381]-work.L[354]*work.v[382];
  work.d[383] = work.v[383];

  if (work.d[383] < 0)
    work.d[383] = settings.kkt_reg;
  else
    work.d[383] += settings.kkt_reg;
  work.d_inv[383] = 1/work.d[383];

  work.L[356] = (work.KKT[898]-work.L[355]*work.v[382])*work.d_inv[383];
  work.v[382] = work.L[355]*work.d[382];
  work.v[383] = work.L[356]*work.d[383];
  work.v[384] = 0-work.L[355]*work.v[382]-work.L[356]*work.v[383];
  work.d[384] = work.v[384];

  if (work.d[384] > 0)
    work.d[384] = -settings.kkt_reg;
  else
    work.d[384] -= settings.kkt_reg;

  work.d_inv[384] = 1/work.d[384];

  work.L[363] = (work.KKT[899])*work.d_inv[384];
  work.v[337] = work.L[357]*work.d[337];
  work.v[345] = work.L[358]*work.d[345];
  work.v[353] = work.L[359]*work.d[353];
  work.v[361] = work.L[360]*work.d[361];
  work.v[369] = work.L[361]*work.d[369];
  work.v[377] = work.L[362]*work.d[377];
  work.v[384] = work.L[363]*work.d[384];
  work.v[385] = work.KKT[900]-work.L[357]*work.v[337]-work.L[358]*work.v[345]-work.L[359]*work.v[353]-work.L[360]*work.v[361]-work.L[361]*work.v[369]-work.L[362]*work.v[377]-work.L[363]*work.v[384];
  work.d[385] = work.v[385];

  if (work.d[385] < 0)
    work.d[385] = settings.kkt_reg;
  else
    work.d[385] += settings.kkt_reg;
  work.d_inv[385] = 1/work.d[385];

  work.L[388] = (work.KKT[901]-work.L[382]*work.v[337]-work.L[383]*work.v[345]-work.L[384]*work.v[353]-work.L[385]*work.v[361]-work.L[386]*work.v[369]-work.L[387]*work.v[377])*work.d_inv[385];
  work.L[414] = (work.KKT[902]-work.L[408]*work.v[337]-work.L[409]*work.v[345]-work.L[410]*work.v[353]-work.L[411]*work.v[361]-work.L[412]*work.v[369]-work.L[413]*work.v[377])*work.d_inv[385];
  work.L[441] = (work.KKT[903]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353]-work.L[438]*work.v[361]-work.L[439]*work.v[369]-work.L[440]*work.v[377])*work.d_inv[385];
  work.L[469] = (work.KKT[904]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361]-work.L[467]*work.v[369]-work.L[468]*work.v[377])*work.d_inv[385];
  work.L[498] = (work.KKT[905]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369]-work.L[497]*work.v[377])*work.d_inv[385];
  work.L[528] = (work.KKT[906]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377])*work.d_inv[385];
  work.L[559] = (work.KKT[907]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377])*work.d_inv[385];
  work.L[591] = (work.KKT[908]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377])*work.d_inv[385];
  work.L[624] = (work.KKT[909]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377])*work.d_inv[385];
  work.L[658] = (work.KKT[910]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377])*work.d_inv[385];
  work.L[693] = (work.KKT[911]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377])*work.d_inv[385];
  work.L[729] = (work.KKT[912]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377])*work.d_inv[385];
  work.L[766] = (work.KKT[913]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377])*work.d_inv[385];
  work.L[804] = (work.KKT[914]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377])*work.d_inv[385];
  work.L[843] = (work.KKT[915]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377])*work.d_inv[385];
  work.L[883] = (work.KKT[916]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377])*work.d_inv[385];
  work.L[924] = (work.KKT[917]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377])*work.d_inv[385];
  work.L[966] = (work.KKT[918]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377])*work.d_inv[385];
  work.L[1009] = (work.KKT[919]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377])*work.d_inv[385];
  work.L[1053] = (work.KKT[920]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377])*work.d_inv[385];
  work.L[1098] = (work.KKT[921]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377])*work.d_inv[385];
  work.L[1144] = (work.KKT[922]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377])*work.d_inv[385];
  work.L[1173] = (work.KKT[923]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377])*work.d_inv[385];
  work.v[7] = work.L[364]*work.d[7];
  work.v[164] = work.L[365]*work.d[164];
  work.v[165] = work.L[366]*work.d[165];
  work.v[386] = work.KKT[924]-work.L[364]*work.v[7]-work.L[365]*work.v[164]-work.L[366]*work.v[165];
  work.d[386] = work.v[386];

  if (work.d[386] > 0)
    work.d[386] = -settings.kkt_reg;
  else
    work.d[386] -= settings.kkt_reg;

  work.d_inv[386] = 1/work.d[386];

  work.L[371] = (work.KKT[925])*work.d_inv[386];
  work.L[375] = (work.KKT[926])*work.d_inv[386];
  work.v[127] = work.L[367]*work.d[127];
  work.v[387] = work.KKT[927]-work.L[367]*work.v[127];
  work.d[387] = work.v[387];

  if (work.d[387] > 0)
    work.d[387] = -settings.kkt_reg;
  else
    work.d[387] -= settings.kkt_reg;

  work.d_inv[387] = 1/work.d[387];

  work.L[372] = (work.KKT[928])*work.d_inv[387];
  work.L[376] = (work.KKT[929])*work.d_inv[387];
  work.v[307] = work.L[368]*work.d[307];
  work.v[388] = 0-work.L[368]*work.v[307];
  work.d[388] = work.v[388];

  if (work.d[388] > 0)
    work.d[388] = -settings.kkt_reg;
  else
    work.d[388] -= settings.kkt_reg;

  work.d_inv[388] = 1/work.d[388];

  work.L[373] = (work.KKT[930])*work.d_inv[388];
  work.L[377] = (work.KKT[931])*work.d_inv[388];
  work.v[389] = 0;
  work.d[389] = work.v[389];

  if (work.d[389] > 0)
    work.d[389] = -settings.kkt_reg;
  else
    work.d[389] -= settings.kkt_reg;

  work.d_inv[389] = 1/work.d[389];

  work.L[374] = (work.KKT[932])*work.d_inv[389];
  work.L[378] = (work.KKT[933])*work.d_inv[389];
  work.v[232] = work.L[369]*work.d[232];
  work.v[233] = work.L[370]*work.d[233];
  work.v[386] = work.L[371]*work.d[386];
  work.v[387] = work.L[372]*work.d[387];
  work.v[388] = work.L[373]*work.d[388];
  work.v[389] = work.L[374]*work.d[389];
  work.v[390] = work.KKT[934]-work.L[369]*work.v[232]-work.L[370]*work.v[233]-work.L[371]*work.v[386]-work.L[372]*work.v[387]-work.L[373]*work.v[388]-work.L[374]*work.v[389];
  work.d[390] = work.v[390];

  if (work.d[390] < 0)
    work.d[390] = settings.kkt_reg;
  else
    work.d[390] += settings.kkt_reg;
  work.d_inv[390] = 1/work.d[390];

  work.L[379] = (-work.L[375]*work.v[386]-work.L[376]*work.v[387]-work.L[377]*work.v[388]-work.L[378]*work.v[389])*work.d_inv[390];
  work.L[380] = (work.KKT[935])*work.d_inv[390];
  work.v[386] = work.L[375]*work.d[386];
  work.v[387] = work.L[376]*work.d[387];
  work.v[388] = work.L[377]*work.d[388];
  work.v[389] = work.L[378]*work.d[389];
  work.v[390] = work.L[379]*work.d[390];
  work.v[391] = work.KKT[936]-work.L[375]*work.v[386]-work.L[376]*work.v[387]-work.L[377]*work.v[388]-work.L[378]*work.v[389]-work.L[379]*work.v[390];
  work.d[391] = work.v[391];

  if (work.d[391] < 0)
    work.d[391] = settings.kkt_reg;
  else
    work.d[391] += settings.kkt_reg;
  work.d_inv[391] = 1/work.d[391];

  work.L[381] = (work.KKT[937]-work.L[380]*work.v[390])*work.d_inv[391];
  work.v[390] = work.L[380]*work.d[390];
  work.v[391] = work.L[381]*work.d[391];
  work.v[392] = 0-work.L[380]*work.v[390]-work.L[381]*work.v[391];
  work.d[392] = work.v[392];

  if (work.d[392] > 0)
    work.d[392] = -settings.kkt_reg;
  else
    work.d[392] -= settings.kkt_reg;

  work.d_inv[392] = 1/work.d[392];

  work.L[389] = (work.KKT[938])*work.d_inv[392];
  work.v[337] = work.L[382]*work.d[337];
  work.v[345] = work.L[383]*work.d[345];
  work.v[353] = work.L[384]*work.d[353];
  work.v[361] = work.L[385]*work.d[361];
  work.v[369] = work.L[386]*work.d[369];
  work.v[377] = work.L[387]*work.d[377];
  work.v[385] = work.L[388]*work.d[385];
  work.v[392] = work.L[389]*work.d[392];
  work.v[393] = work.KKT[939]-work.L[382]*work.v[337]-work.L[383]*work.v[345]-work.L[384]*work.v[353]-work.L[385]*work.v[361]-work.L[386]*work.v[369]-work.L[387]*work.v[377]-work.L[388]*work.v[385]-work.L[389]*work.v[392];
  work.d[393] = work.v[393];

  if (work.d[393] < 0)
    work.d[393] = settings.kkt_reg;
  else
    work.d[393] += settings.kkt_reg;
  work.d_inv[393] = 1/work.d[393];

  work.L[415] = (work.KKT[940]-work.L[408]*work.v[337]-work.L[409]*work.v[345]-work.L[410]*work.v[353]-work.L[411]*work.v[361]-work.L[412]*work.v[369]-work.L[413]*work.v[377]-work.L[414]*work.v[385])*work.d_inv[393];
  work.L[442] = (work.KKT[941]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353]-work.L[438]*work.v[361]-work.L[439]*work.v[369]-work.L[440]*work.v[377]-work.L[441]*work.v[385])*work.d_inv[393];
  work.L[470] = (work.KKT[942]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361]-work.L[467]*work.v[369]-work.L[468]*work.v[377]-work.L[469]*work.v[385])*work.d_inv[393];
  work.L[499] = (work.KKT[943]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369]-work.L[497]*work.v[377]-work.L[498]*work.v[385])*work.d_inv[393];
  work.L[529] = (work.KKT[944]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377]-work.L[528]*work.v[385])*work.d_inv[393];
  work.L[560] = (work.KKT[945]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385])*work.d_inv[393];
  work.L[592] = (work.KKT[946]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385])*work.d_inv[393];
  work.L[625] = (work.KKT[947]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385])*work.d_inv[393];
  work.L[659] = (work.KKT[948]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385])*work.d_inv[393];
  work.L[694] = (work.KKT[949]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385])*work.d_inv[393];
  work.L[730] = (work.KKT[950]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385])*work.d_inv[393];
  work.L[767] = (work.KKT[951]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385])*work.d_inv[393];
  work.L[805] = (work.KKT[952]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385])*work.d_inv[393];
  work.L[844] = (work.KKT[953]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385])*work.d_inv[393];
  work.L[884] = (work.KKT[954]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385])*work.d_inv[393];
  work.L[925] = (work.KKT[955]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385])*work.d_inv[393];
  work.L[967] = (work.KKT[956]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385])*work.d_inv[393];
  work.L[1010] = (work.KKT[957]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385])*work.d_inv[393];
  work.L[1054] = (work.KKT[958]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385])*work.d_inv[393];
  work.L[1099] = (work.KKT[959]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385])*work.d_inv[393];
  work.L[1145] = (work.KKT[960]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385])*work.d_inv[393];
  work.L[1174] = (work.KKT[961]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385])*work.d_inv[393];
  work.v[8] = work.L[390]*work.d[8];
  work.v[166] = work.L[391]*work.d[166];
  work.v[167] = work.L[392]*work.d[167];
  work.v[394] = work.KKT[962]-work.L[390]*work.v[8]-work.L[391]*work.v[166]-work.L[392]*work.v[167];
  work.d[394] = work.v[394];

  if (work.d[394] > 0)
    work.d[394] = -settings.kkt_reg;
  else
    work.d[394] -= settings.kkt_reg;

  work.d_inv[394] = 1/work.d[394];

  work.L[397] = (work.KKT[963])*work.d_inv[394];
  work.L[401] = (work.KKT[964])*work.d_inv[394];
  work.v[128] = work.L[393]*work.d[128];
  work.v[395] = work.KKT[965]-work.L[393]*work.v[128];
  work.d[395] = work.v[395];

  if (work.d[395] > 0)
    work.d[395] = -settings.kkt_reg;
  else
    work.d[395] -= settings.kkt_reg;

  work.d_inv[395] = 1/work.d[395];

  work.L[398] = (work.KKT[966])*work.d_inv[395];
  work.L[402] = (work.KKT[967])*work.d_inv[395];
  work.v[308] = work.L[394]*work.d[308];
  work.v[396] = 0-work.L[394]*work.v[308];
  work.d[396] = work.v[396];

  if (work.d[396] > 0)
    work.d[396] = -settings.kkt_reg;
  else
    work.d[396] -= settings.kkt_reg;

  work.d_inv[396] = 1/work.d[396];

  work.L[399] = (work.KKT[968])*work.d_inv[396];
  work.L[403] = (work.KKT[969])*work.d_inv[396];
  work.v[397] = 0;
  work.d[397] = work.v[397];

  if (work.d[397] > 0)
    work.d[397] = -settings.kkt_reg;
  else
    work.d[397] -= settings.kkt_reg;

  work.d_inv[397] = 1/work.d[397];

  work.L[400] = (work.KKT[970])*work.d_inv[397];
  work.L[404] = (work.KKT[971])*work.d_inv[397];
  work.v[235] = work.L[395]*work.d[235];
  work.v[236] = work.L[396]*work.d[236];
  work.v[394] = work.L[397]*work.d[394];
  work.v[395] = work.L[398]*work.d[395];
  work.v[396] = work.L[399]*work.d[396];
  work.v[397] = work.L[400]*work.d[397];
  work.v[398] = work.KKT[972]-work.L[395]*work.v[235]-work.L[396]*work.v[236]-work.L[397]*work.v[394]-work.L[398]*work.v[395]-work.L[399]*work.v[396]-work.L[400]*work.v[397];
  work.d[398] = work.v[398];

  if (work.d[398] < 0)
    work.d[398] = settings.kkt_reg;
  else
    work.d[398] += settings.kkt_reg;
  work.d_inv[398] = 1/work.d[398];

  work.L[405] = (-work.L[401]*work.v[394]-work.L[402]*work.v[395]-work.L[403]*work.v[396]-work.L[404]*work.v[397])*work.d_inv[398];
  work.L[406] = (work.KKT[973])*work.d_inv[398];
  work.v[394] = work.L[401]*work.d[394];
  work.v[395] = work.L[402]*work.d[395];
  work.v[396] = work.L[403]*work.d[396];
  work.v[397] = work.L[404]*work.d[397];
  work.v[398] = work.L[405]*work.d[398];
  work.v[399] = work.KKT[974]-work.L[401]*work.v[394]-work.L[402]*work.v[395]-work.L[403]*work.v[396]-work.L[404]*work.v[397]-work.L[405]*work.v[398];
  work.d[399] = work.v[399];

  if (work.d[399] < 0)
    work.d[399] = settings.kkt_reg;
  else
    work.d[399] += settings.kkt_reg;
  work.d_inv[399] = 1/work.d[399];

  work.L[407] = (work.KKT[975]-work.L[406]*work.v[398])*work.d_inv[399];
  work.v[398] = work.L[406]*work.d[398];
  work.v[399] = work.L[407]*work.d[399];
  work.v[400] = 0-work.L[406]*work.v[398]-work.L[407]*work.v[399];
  work.d[400] = work.v[400];

  if (work.d[400] > 0)
    work.d[400] = -settings.kkt_reg;
  else
    work.d[400] -= settings.kkt_reg;

  work.d_inv[400] = 1/work.d[400];

  work.L[416] = (work.KKT[976])*work.d_inv[400];
  work.v[337] = work.L[408]*work.d[337];
  work.v[345] = work.L[409]*work.d[345];
  work.v[353] = work.L[410]*work.d[353];
  work.v[361] = work.L[411]*work.d[361];
  work.v[369] = work.L[412]*work.d[369];
  work.v[377] = work.L[413]*work.d[377];
  work.v[385] = work.L[414]*work.d[385];
  work.v[393] = work.L[415]*work.d[393];
  work.v[400] = work.L[416]*work.d[400];
  work.v[401] = work.KKT[977]-work.L[408]*work.v[337]-work.L[409]*work.v[345]-work.L[410]*work.v[353]-work.L[411]*work.v[361]-work.L[412]*work.v[369]-work.L[413]*work.v[377]-work.L[414]*work.v[385]-work.L[415]*work.v[393]-work.L[416]*work.v[400];
  work.d[401] = work.v[401];

  if (work.d[401] < 0)
    work.d[401] = settings.kkt_reg;
  else
    work.d[401] += settings.kkt_reg;
  work.d_inv[401] = 1/work.d[401];

  work.L[443] = (work.KKT[978]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353]-work.L[438]*work.v[361]-work.L[439]*work.v[369]-work.L[440]*work.v[377]-work.L[441]*work.v[385]-work.L[442]*work.v[393])*work.d_inv[401];
  work.L[471] = (work.KKT[979]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361]-work.L[467]*work.v[369]-work.L[468]*work.v[377]-work.L[469]*work.v[385]-work.L[470]*work.v[393])*work.d_inv[401];
  work.L[500] = (work.KKT[980]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369]-work.L[497]*work.v[377]-work.L[498]*work.v[385]-work.L[499]*work.v[393])*work.d_inv[401];
  work.L[530] = (work.KKT[981]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377]-work.L[528]*work.v[385]-work.L[529]*work.v[393])*work.d_inv[401];
  work.L[561] = (work.KKT[982]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385]-work.L[560]*work.v[393])*work.d_inv[401];
  work.L[593] = (work.KKT[983]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393])*work.d_inv[401];
  work.L[626] = (work.KKT[984]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393])*work.d_inv[401];
  work.L[660] = (work.KKT[985]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393])*work.d_inv[401];
  work.L[695] = (work.KKT[986]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393])*work.d_inv[401];
  work.L[731] = (work.KKT[987]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393])*work.d_inv[401];
  work.L[768] = (work.KKT[988]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393])*work.d_inv[401];
  work.L[806] = (work.KKT[989]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393])*work.d_inv[401];
  work.L[845] = (work.KKT[990]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393])*work.d_inv[401];
  work.L[885] = (work.KKT[991]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393])*work.d_inv[401];
  work.L[926] = (work.KKT[992]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393])*work.d_inv[401];
  work.L[968] = (work.KKT[993]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393])*work.d_inv[401];
  work.L[1011] = (work.KKT[994]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393])*work.d_inv[401];
  work.L[1055] = (work.KKT[995]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393])*work.d_inv[401];
  work.L[1100] = (work.KKT[996]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393])*work.d_inv[401];
  work.L[1146] = (work.KKT[997]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393])*work.d_inv[401];
  work.L[1175] = (work.KKT[998]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393])*work.d_inv[401];
  work.v[9] = work.L[417]*work.d[9];
  work.v[168] = work.L[418]*work.d[168];
  work.v[169] = work.L[419]*work.d[169];
  work.v[402] = work.KKT[999]-work.L[417]*work.v[9]-work.L[418]*work.v[168]-work.L[419]*work.v[169];
  work.d[402] = work.v[402];

  if (work.d[402] > 0)
    work.d[402] = -settings.kkt_reg;
  else
    work.d[402] -= settings.kkt_reg;

  work.d_inv[402] = 1/work.d[402];

  work.L[424] = (work.KKT[1000])*work.d_inv[402];
  work.L[428] = (work.KKT[1001])*work.d_inv[402];
  work.v[129] = work.L[420]*work.d[129];
  work.v[403] = work.KKT[1002]-work.L[420]*work.v[129];
  work.d[403] = work.v[403];

  if (work.d[403] > 0)
    work.d[403] = -settings.kkt_reg;
  else
    work.d[403] -= settings.kkt_reg;

  work.d_inv[403] = 1/work.d[403];

  work.L[425] = (work.KKT[1003])*work.d_inv[403];
  work.L[429] = (work.KKT[1004])*work.d_inv[403];
  work.v[309] = work.L[421]*work.d[309];
  work.v[404] = 0-work.L[421]*work.v[309];
  work.d[404] = work.v[404];

  if (work.d[404] > 0)
    work.d[404] = -settings.kkt_reg;
  else
    work.d[404] -= settings.kkt_reg;

  work.d_inv[404] = 1/work.d[404];

  work.L[426] = (work.KKT[1005])*work.d_inv[404];
  work.L[430] = (work.KKT[1006])*work.d_inv[404];
  work.v[405] = 0;
  work.d[405] = work.v[405];

  if (work.d[405] > 0)
    work.d[405] = -settings.kkt_reg;
  else
    work.d[405] -= settings.kkt_reg;

  work.d_inv[405] = 1/work.d[405];

  work.L[427] = (work.KKT[1007])*work.d_inv[405];
  work.L[431] = (work.KKT[1008])*work.d_inv[405];
  work.v[238] = work.L[422]*work.d[238];
  work.v[239] = work.L[423]*work.d[239];
  work.v[402] = work.L[424]*work.d[402];
  work.v[403] = work.L[425]*work.d[403];
  work.v[404] = work.L[426]*work.d[404];
  work.v[405] = work.L[427]*work.d[405];
  work.v[406] = work.KKT[1009]-work.L[422]*work.v[238]-work.L[423]*work.v[239]-work.L[424]*work.v[402]-work.L[425]*work.v[403]-work.L[426]*work.v[404]-work.L[427]*work.v[405];
  work.d[406] = work.v[406];

  if (work.d[406] < 0)
    work.d[406] = settings.kkt_reg;
  else
    work.d[406] += settings.kkt_reg;
  work.d_inv[406] = 1/work.d[406];

  work.L[432] = (-work.L[428]*work.v[402]-work.L[429]*work.v[403]-work.L[430]*work.v[404]-work.L[431]*work.v[405])*work.d_inv[406];
  work.L[433] = (work.KKT[1010])*work.d_inv[406];
  work.v[402] = work.L[428]*work.d[402];
  work.v[403] = work.L[429]*work.d[403];
  work.v[404] = work.L[430]*work.d[404];
  work.v[405] = work.L[431]*work.d[405];
  work.v[406] = work.L[432]*work.d[406];
  work.v[407] = work.KKT[1011]-work.L[428]*work.v[402]-work.L[429]*work.v[403]-work.L[430]*work.v[404]-work.L[431]*work.v[405]-work.L[432]*work.v[406];
  work.d[407] = work.v[407];

  if (work.d[407] < 0)
    work.d[407] = settings.kkt_reg;
  else
    work.d[407] += settings.kkt_reg;
  work.d_inv[407] = 1/work.d[407];

  work.L[434] = (work.KKT[1012]-work.L[433]*work.v[406])*work.d_inv[407];
  work.v[406] = work.L[433]*work.d[406];
  work.v[407] = work.L[434]*work.d[407];
  work.v[408] = 0-work.L[433]*work.v[406]-work.L[434]*work.v[407];
  work.d[408] = work.v[408];

  if (work.d[408] > 0)
    work.d[408] = -settings.kkt_reg;
  else
    work.d[408] -= settings.kkt_reg;

  work.d_inv[408] = 1/work.d[408];

  work.L[444] = (work.KKT[1013])*work.d_inv[408];
  work.v[337] = work.L[435]*work.d[337];
  work.v[345] = work.L[436]*work.d[345];
  work.v[353] = work.L[437]*work.d[353];
  work.v[361] = work.L[438]*work.d[361];
  work.v[369] = work.L[439]*work.d[369];
  work.v[377] = work.L[440]*work.d[377];
  work.v[385] = work.L[441]*work.d[385];
  work.v[393] = work.L[442]*work.d[393];
  work.v[401] = work.L[443]*work.d[401];
  work.v[408] = work.L[444]*work.d[408];
  work.v[409] = work.KKT[1014]-work.L[435]*work.v[337]-work.L[436]*work.v[345]-work.L[437]*work.v[353]-work.L[438]*work.v[361]-work.L[439]*work.v[369]-work.L[440]*work.v[377]-work.L[441]*work.v[385]-work.L[442]*work.v[393]-work.L[443]*work.v[401]-work.L[444]*work.v[408];
  work.d[409] = work.v[409];

  if (work.d[409] < 0)
    work.d[409] = settings.kkt_reg;
  else
    work.d[409] += settings.kkt_reg;
  work.d_inv[409] = 1/work.d[409];

  work.L[472] = (work.KKT[1015]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361]-work.L[467]*work.v[369]-work.L[468]*work.v[377]-work.L[469]*work.v[385]-work.L[470]*work.v[393]-work.L[471]*work.v[401])*work.d_inv[409];
  work.L[501] = (work.KKT[1016]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369]-work.L[497]*work.v[377]-work.L[498]*work.v[385]-work.L[499]*work.v[393]-work.L[500]*work.v[401])*work.d_inv[409];
  work.L[531] = (work.KKT[1017]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377]-work.L[528]*work.v[385]-work.L[529]*work.v[393]-work.L[530]*work.v[401])*work.d_inv[409];
  work.L[562] = (work.KKT[1018]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385]-work.L[560]*work.v[393]-work.L[561]*work.v[401])*work.d_inv[409];
  work.L[594] = (work.KKT[1019]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393]-work.L[593]*work.v[401])*work.d_inv[409];
  work.L[627] = (work.KKT[1020]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401])*work.d_inv[409];
  work.L[661] = (work.KKT[1021]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401])*work.d_inv[409];
  work.L[696] = (work.KKT[1022]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401])*work.d_inv[409];
  work.L[732] = (work.KKT[1023]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401])*work.d_inv[409];
  work.L[769] = (work.KKT[1024]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401])*work.d_inv[409];
  work.L[807] = (work.KKT[1025]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401])*work.d_inv[409];
  work.L[846] = (work.KKT[1026]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401])*work.d_inv[409];
  work.L[886] = (work.KKT[1027]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401])*work.d_inv[409];
  work.L[927] = (work.KKT[1028]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401])*work.d_inv[409];
  work.L[969] = (work.KKT[1029]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401])*work.d_inv[409];
  work.L[1012] = (work.KKT[1030]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401])*work.d_inv[409];
  work.L[1056] = (work.KKT[1031]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401])*work.d_inv[409];
  work.L[1101] = (work.KKT[1032]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401])*work.d_inv[409];
  work.L[1147] = (work.KKT[1033]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401])*work.d_inv[409];
  work.L[1176] = (work.KKT[1034]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401])*work.d_inv[409];
  work.v[10] = work.L[445]*work.d[10];
  work.v[170] = work.L[446]*work.d[170];
  work.v[171] = work.L[447]*work.d[171];
  work.v[410] = work.KKT[1035]-work.L[445]*work.v[10]-work.L[446]*work.v[170]-work.L[447]*work.v[171];
  work.d[410] = work.v[410];

  if (work.d[410] > 0)
    work.d[410] = -settings.kkt_reg;
  else
    work.d[410] -= settings.kkt_reg;

  work.d_inv[410] = 1/work.d[410];

  work.L[452] = (work.KKT[1036])*work.d_inv[410];
  work.L[456] = (work.KKT[1037])*work.d_inv[410];
  work.v[130] = work.L[448]*work.d[130];
  work.v[411] = work.KKT[1038]-work.L[448]*work.v[130];
  work.d[411] = work.v[411];

  if (work.d[411] > 0)
    work.d[411] = -settings.kkt_reg;
  else
    work.d[411] -= settings.kkt_reg;

  work.d_inv[411] = 1/work.d[411];

  work.L[453] = (work.KKT[1039])*work.d_inv[411];
  work.L[457] = (work.KKT[1040])*work.d_inv[411];
  work.v[310] = work.L[449]*work.d[310];
  work.v[412] = 0-work.L[449]*work.v[310];
  work.d[412] = work.v[412];

  if (work.d[412] > 0)
    work.d[412] = -settings.kkt_reg;
  else
    work.d[412] -= settings.kkt_reg;

  work.d_inv[412] = 1/work.d[412];

  work.L[454] = (work.KKT[1041])*work.d_inv[412];
  work.L[458] = (work.KKT[1042])*work.d_inv[412];
  work.v[413] = 0;
  work.d[413] = work.v[413];

  if (work.d[413] > 0)
    work.d[413] = -settings.kkt_reg;
  else
    work.d[413] -= settings.kkt_reg;

  work.d_inv[413] = 1/work.d[413];

  work.L[455] = (work.KKT[1043])*work.d_inv[413];
  work.L[459] = (work.KKT[1044])*work.d_inv[413];
  work.v[241] = work.L[450]*work.d[241];
  work.v[242] = work.L[451]*work.d[242];
  work.v[410] = work.L[452]*work.d[410];
  work.v[411] = work.L[453]*work.d[411];
  work.v[412] = work.L[454]*work.d[412];
  work.v[413] = work.L[455]*work.d[413];
  work.v[414] = work.KKT[1045]-work.L[450]*work.v[241]-work.L[451]*work.v[242]-work.L[452]*work.v[410]-work.L[453]*work.v[411]-work.L[454]*work.v[412]-work.L[455]*work.v[413];
  work.d[414] = work.v[414];

  if (work.d[414] < 0)
    work.d[414] = settings.kkt_reg;
  else
    work.d[414] += settings.kkt_reg;
  work.d_inv[414] = 1/work.d[414];

  work.L[460] = (-work.L[456]*work.v[410]-work.L[457]*work.v[411]-work.L[458]*work.v[412]-work.L[459]*work.v[413])*work.d_inv[414];
  work.L[461] = (work.KKT[1046])*work.d_inv[414];
  work.v[410] = work.L[456]*work.d[410];
  work.v[411] = work.L[457]*work.d[411];
  work.v[412] = work.L[458]*work.d[412];
  work.v[413] = work.L[459]*work.d[413];
  work.v[414] = work.L[460]*work.d[414];
  work.v[415] = work.KKT[1047]-work.L[456]*work.v[410]-work.L[457]*work.v[411]-work.L[458]*work.v[412]-work.L[459]*work.v[413]-work.L[460]*work.v[414];
  work.d[415] = work.v[415];

  if (work.d[415] < 0)
    work.d[415] = settings.kkt_reg;
  else
    work.d[415] += settings.kkt_reg;
  work.d_inv[415] = 1/work.d[415];

  work.L[462] = (work.KKT[1048]-work.L[461]*work.v[414])*work.d_inv[415];
  work.v[414] = work.L[461]*work.d[414];
  work.v[415] = work.L[462]*work.d[415];
  work.v[416] = 0-work.L[461]*work.v[414]-work.L[462]*work.v[415];
  work.d[416] = work.v[416];

  if (work.d[416] > 0)
    work.d[416] = -settings.kkt_reg;
  else
    work.d[416] -= settings.kkt_reg;

  work.d_inv[416] = 1/work.d[416];

  work.L[473] = (work.KKT[1049])*work.d_inv[416];
  work.v[337] = work.L[463]*work.d[337];
  work.v[345] = work.L[464]*work.d[345];
  work.v[353] = work.L[465]*work.d[353];
  work.v[361] = work.L[466]*work.d[361];
  work.v[369] = work.L[467]*work.d[369];
  work.v[377] = work.L[468]*work.d[377];
  work.v[385] = work.L[469]*work.d[385];
  work.v[393] = work.L[470]*work.d[393];
  work.v[401] = work.L[471]*work.d[401];
  work.v[409] = work.L[472]*work.d[409];
  work.v[416] = work.L[473]*work.d[416];
  work.v[417] = work.KKT[1050]-work.L[463]*work.v[337]-work.L[464]*work.v[345]-work.L[465]*work.v[353]-work.L[466]*work.v[361]-work.L[467]*work.v[369]-work.L[468]*work.v[377]-work.L[469]*work.v[385]-work.L[470]*work.v[393]-work.L[471]*work.v[401]-work.L[472]*work.v[409]-work.L[473]*work.v[416];
  work.d[417] = work.v[417];

  if (work.d[417] < 0)
    work.d[417] = settings.kkt_reg;
  else
    work.d[417] += settings.kkt_reg;
  work.d_inv[417] = 1/work.d[417];

  work.L[502] = (work.KKT[1051]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369]-work.L[497]*work.v[377]-work.L[498]*work.v[385]-work.L[499]*work.v[393]-work.L[500]*work.v[401]-work.L[501]*work.v[409])*work.d_inv[417];
  work.L[532] = (work.KKT[1052]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377]-work.L[528]*work.v[385]-work.L[529]*work.v[393]-work.L[530]*work.v[401]-work.L[531]*work.v[409])*work.d_inv[417];
  work.L[563] = (work.KKT[1053]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385]-work.L[560]*work.v[393]-work.L[561]*work.v[401]-work.L[562]*work.v[409])*work.d_inv[417];
  work.L[595] = (work.KKT[1054]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393]-work.L[593]*work.v[401]-work.L[594]*work.v[409])*work.d_inv[417];
  work.L[628] = (work.KKT[1055]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401]-work.L[627]*work.v[409])*work.d_inv[417];
  work.L[662] = (work.KKT[1056]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409])*work.d_inv[417];
  work.L[697] = (work.KKT[1057]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409])*work.d_inv[417];
  work.L[733] = (work.KKT[1058]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409])*work.d_inv[417];
  work.L[770] = (work.KKT[1059]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409])*work.d_inv[417];
  work.L[808] = (work.KKT[1060]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409])*work.d_inv[417];
  work.L[847] = (work.KKT[1061]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409])*work.d_inv[417];
  work.L[887] = (work.KKT[1062]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409])*work.d_inv[417];
  work.L[928] = (work.KKT[1063]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409])*work.d_inv[417];
  work.L[970] = (work.KKT[1064]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409])*work.d_inv[417];
  work.L[1013] = (work.KKT[1065]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409])*work.d_inv[417];
  work.L[1057] = (work.KKT[1066]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409])*work.d_inv[417];
  work.L[1102] = (work.KKT[1067]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409])*work.d_inv[417];
  work.L[1148] = (work.KKT[1068]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409])*work.d_inv[417];
  work.L[1177] = (work.KKT[1069]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409])*work.d_inv[417];
  work.v[11] = work.L[474]*work.d[11];
  work.v[172] = work.L[475]*work.d[172];
  work.v[173] = work.L[476]*work.d[173];
  work.v[418] = work.KKT[1070]-work.L[474]*work.v[11]-work.L[475]*work.v[172]-work.L[476]*work.v[173];
  work.d[418] = work.v[418];

  if (work.d[418] > 0)
    work.d[418] = -settings.kkt_reg;
  else
    work.d[418] -= settings.kkt_reg;

  work.d_inv[418] = 1/work.d[418];

  work.L[481] = (work.KKT[1071])*work.d_inv[418];
  work.L[485] = (work.KKT[1072])*work.d_inv[418];
  work.v[131] = work.L[477]*work.d[131];
  work.v[419] = work.KKT[1073]-work.L[477]*work.v[131];
  work.d[419] = work.v[419];

  if (work.d[419] > 0)
    work.d[419] = -settings.kkt_reg;
  else
    work.d[419] -= settings.kkt_reg;

  work.d_inv[419] = 1/work.d[419];

  work.L[482] = (work.KKT[1074])*work.d_inv[419];
  work.L[486] = (work.KKT[1075])*work.d_inv[419];
  work.v[311] = work.L[478]*work.d[311];
  work.v[420] = 0-work.L[478]*work.v[311];
  work.d[420] = work.v[420];

  if (work.d[420] > 0)
    work.d[420] = -settings.kkt_reg;
  else
    work.d[420] -= settings.kkt_reg;

  work.d_inv[420] = 1/work.d[420];

  work.L[483] = (work.KKT[1076])*work.d_inv[420];
  work.L[487] = (work.KKT[1077])*work.d_inv[420];
  work.v[421] = 0;
  work.d[421] = work.v[421];

  if (work.d[421] > 0)
    work.d[421] = -settings.kkt_reg;
  else
    work.d[421] -= settings.kkt_reg;

  work.d_inv[421] = 1/work.d[421];

  work.L[484] = (work.KKT[1078])*work.d_inv[421];
  work.L[488] = (work.KKT[1079])*work.d_inv[421];
  work.v[244] = work.L[479]*work.d[244];
  work.v[245] = work.L[480]*work.d[245];
  work.v[418] = work.L[481]*work.d[418];
  work.v[419] = work.L[482]*work.d[419];
  work.v[420] = work.L[483]*work.d[420];
  work.v[421] = work.L[484]*work.d[421];
  work.v[422] = work.KKT[1080]-work.L[479]*work.v[244]-work.L[480]*work.v[245]-work.L[481]*work.v[418]-work.L[482]*work.v[419]-work.L[483]*work.v[420]-work.L[484]*work.v[421];
  work.d[422] = work.v[422];

  if (work.d[422] < 0)
    work.d[422] = settings.kkt_reg;
  else
    work.d[422] += settings.kkt_reg;
  work.d_inv[422] = 1/work.d[422];

  work.L[489] = (-work.L[485]*work.v[418]-work.L[486]*work.v[419]-work.L[487]*work.v[420]-work.L[488]*work.v[421])*work.d_inv[422];
  work.L[490] = (work.KKT[1081])*work.d_inv[422];
  work.v[418] = work.L[485]*work.d[418];
  work.v[419] = work.L[486]*work.d[419];
  work.v[420] = work.L[487]*work.d[420];
  work.v[421] = work.L[488]*work.d[421];
  work.v[422] = work.L[489]*work.d[422];
  work.v[423] = work.KKT[1082]-work.L[485]*work.v[418]-work.L[486]*work.v[419]-work.L[487]*work.v[420]-work.L[488]*work.v[421]-work.L[489]*work.v[422];
  work.d[423] = work.v[423];

  if (work.d[423] < 0)
    work.d[423] = settings.kkt_reg;
  else
    work.d[423] += settings.kkt_reg;
  work.d_inv[423] = 1/work.d[423];

  work.L[491] = (work.KKT[1083]-work.L[490]*work.v[422])*work.d_inv[423];
  work.v[422] = work.L[490]*work.d[422];
  work.v[423] = work.L[491]*work.d[423];
  work.v[424] = 0-work.L[490]*work.v[422]-work.L[491]*work.v[423];
  work.d[424] = work.v[424];

  if (work.d[424] > 0)
    work.d[424] = -settings.kkt_reg;
  else
    work.d[424] -= settings.kkt_reg;

  work.d_inv[424] = 1/work.d[424];

  work.L[503] = (work.KKT[1084])*work.d_inv[424];
  work.v[337] = work.L[492]*work.d[337];
  work.v[345] = work.L[493]*work.d[345];
  work.v[353] = work.L[494]*work.d[353];
  work.v[361] = work.L[495]*work.d[361];
  work.v[369] = work.L[496]*work.d[369];
  work.v[377] = work.L[497]*work.d[377];
  work.v[385] = work.L[498]*work.d[385];
  work.v[393] = work.L[499]*work.d[393];
  work.v[401] = work.L[500]*work.d[401];
  work.v[409] = work.L[501]*work.d[409];
  work.v[417] = work.L[502]*work.d[417];
  work.v[424] = work.L[503]*work.d[424];
  work.v[425] = work.KKT[1085]-work.L[492]*work.v[337]-work.L[493]*work.v[345]-work.L[494]*work.v[353]-work.L[495]*work.v[361]-work.L[496]*work.v[369]-work.L[497]*work.v[377]-work.L[498]*work.v[385]-work.L[499]*work.v[393]-work.L[500]*work.v[401]-work.L[501]*work.v[409]-work.L[502]*work.v[417]-work.L[503]*work.v[424];
  work.d[425] = work.v[425];

  if (work.d[425] < 0)
    work.d[425] = settings.kkt_reg;
  else
    work.d[425] += settings.kkt_reg;
  work.d_inv[425] = 1/work.d[425];

  work.L[533] = (work.KKT[1086]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377]-work.L[528]*work.v[385]-work.L[529]*work.v[393]-work.L[530]*work.v[401]-work.L[531]*work.v[409]-work.L[532]*work.v[417])*work.d_inv[425];
  work.L[564] = (work.KKT[1087]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385]-work.L[560]*work.v[393]-work.L[561]*work.v[401]-work.L[562]*work.v[409]-work.L[563]*work.v[417])*work.d_inv[425];
  work.L[596] = (work.KKT[1088]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393]-work.L[593]*work.v[401]-work.L[594]*work.v[409]-work.L[595]*work.v[417])*work.d_inv[425];
  work.L[629] = (work.KKT[1089]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401]-work.L[627]*work.v[409]-work.L[628]*work.v[417])*work.d_inv[425];
  work.L[663] = (work.KKT[1090]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409]-work.L[662]*work.v[417])*work.d_inv[425];
  work.L[698] = (work.KKT[1091]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417])*work.d_inv[425];
  work.L[734] = (work.KKT[1092]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417])*work.d_inv[425];
  work.L[771] = (work.KKT[1093]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417])*work.d_inv[425];
  work.L[809] = (work.KKT[1094]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417])*work.d_inv[425];
  work.L[848] = (work.KKT[1095]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417])*work.d_inv[425];
  work.L[888] = (work.KKT[1096]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417])*work.d_inv[425];
  work.L[929] = (work.KKT[1097]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417])*work.d_inv[425];
  work.L[971] = (work.KKT[1098]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417])*work.d_inv[425];
  work.L[1014] = (work.KKT[1099]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417])*work.d_inv[425];
  work.L[1058] = (work.KKT[1100]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417])*work.d_inv[425];
  work.L[1103] = (work.KKT[1101]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417])*work.d_inv[425];
  work.L[1149] = (work.KKT[1102]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417])*work.d_inv[425];
  work.L[1178] = (work.KKT[1103]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417])*work.d_inv[425];
  work.v[12] = work.L[504]*work.d[12];
  work.v[174] = work.L[505]*work.d[174];
  work.v[175] = work.L[506]*work.d[175];
  work.v[426] = work.KKT[1104]-work.L[504]*work.v[12]-work.L[505]*work.v[174]-work.L[506]*work.v[175];
  work.d[426] = work.v[426];

  if (work.d[426] > 0)
    work.d[426] = -settings.kkt_reg;
  else
    work.d[426] -= settings.kkt_reg;

  work.d_inv[426] = 1/work.d[426];

  work.L[511] = (work.KKT[1105])*work.d_inv[426];
  work.L[515] = (work.KKT[1106])*work.d_inv[426];
  work.v[132] = work.L[507]*work.d[132];
  work.v[427] = work.KKT[1107]-work.L[507]*work.v[132];
  work.d[427] = work.v[427];

  if (work.d[427] > 0)
    work.d[427] = -settings.kkt_reg;
  else
    work.d[427] -= settings.kkt_reg;

  work.d_inv[427] = 1/work.d[427];

  work.L[512] = (work.KKT[1108])*work.d_inv[427];
  work.L[516] = (work.KKT[1109])*work.d_inv[427];
  work.v[312] = work.L[508]*work.d[312];
  work.v[428] = 0-work.L[508]*work.v[312];
  work.d[428] = work.v[428];

  if (work.d[428] > 0)
    work.d[428] = -settings.kkt_reg;
  else
    work.d[428] -= settings.kkt_reg;

  work.d_inv[428] = 1/work.d[428];

  work.L[513] = (work.KKT[1110])*work.d_inv[428];
  work.L[517] = (work.KKT[1111])*work.d_inv[428];
  work.v[429] = 0;
  work.d[429] = work.v[429];

  if (work.d[429] > 0)
    work.d[429] = -settings.kkt_reg;
  else
    work.d[429] -= settings.kkt_reg;

  work.d_inv[429] = 1/work.d[429];

  work.L[514] = (work.KKT[1112])*work.d_inv[429];
  work.L[518] = (work.KKT[1113])*work.d_inv[429];
  work.v[247] = work.L[509]*work.d[247];
  work.v[248] = work.L[510]*work.d[248];
  work.v[426] = work.L[511]*work.d[426];
  work.v[427] = work.L[512]*work.d[427];
  work.v[428] = work.L[513]*work.d[428];
  work.v[429] = work.L[514]*work.d[429];
  work.v[430] = work.KKT[1114]-work.L[509]*work.v[247]-work.L[510]*work.v[248]-work.L[511]*work.v[426]-work.L[512]*work.v[427]-work.L[513]*work.v[428]-work.L[514]*work.v[429];
  work.d[430] = work.v[430];

  if (work.d[430] < 0)
    work.d[430] = settings.kkt_reg;
  else
    work.d[430] += settings.kkt_reg;
  work.d_inv[430] = 1/work.d[430];

  work.L[519] = (-work.L[515]*work.v[426]-work.L[516]*work.v[427]-work.L[517]*work.v[428]-work.L[518]*work.v[429])*work.d_inv[430];
  work.L[520] = (work.KKT[1115])*work.d_inv[430];
  work.v[426] = work.L[515]*work.d[426];
  work.v[427] = work.L[516]*work.d[427];
  work.v[428] = work.L[517]*work.d[428];
  work.v[429] = work.L[518]*work.d[429];
  work.v[430] = work.L[519]*work.d[430];
  work.v[431] = work.KKT[1116]-work.L[515]*work.v[426]-work.L[516]*work.v[427]-work.L[517]*work.v[428]-work.L[518]*work.v[429]-work.L[519]*work.v[430];
  work.d[431] = work.v[431];

  if (work.d[431] < 0)
    work.d[431] = settings.kkt_reg;
  else
    work.d[431] += settings.kkt_reg;
  work.d_inv[431] = 1/work.d[431];

  work.L[521] = (work.KKT[1117]-work.L[520]*work.v[430])*work.d_inv[431];
  work.v[430] = work.L[520]*work.d[430];
  work.v[431] = work.L[521]*work.d[431];
  work.v[432] = 0-work.L[520]*work.v[430]-work.L[521]*work.v[431];
  work.d[432] = work.v[432];

  if (work.d[432] > 0)
    work.d[432] = -settings.kkt_reg;
  else
    work.d[432] -= settings.kkt_reg;

  work.d_inv[432] = 1/work.d[432];

  work.L[534] = (work.KKT[1118])*work.d_inv[432];
  work.v[337] = work.L[522]*work.d[337];
  work.v[345] = work.L[523]*work.d[345];
  work.v[353] = work.L[524]*work.d[353];
  work.v[361] = work.L[525]*work.d[361];
  work.v[369] = work.L[526]*work.d[369];
  work.v[377] = work.L[527]*work.d[377];
  work.v[385] = work.L[528]*work.d[385];
  work.v[393] = work.L[529]*work.d[393];
  work.v[401] = work.L[530]*work.d[401];
  work.v[409] = work.L[531]*work.d[409];
  work.v[417] = work.L[532]*work.d[417];
  work.v[425] = work.L[533]*work.d[425];
  work.v[432] = work.L[534]*work.d[432];
  work.v[433] = work.KKT[1119]-work.L[522]*work.v[337]-work.L[523]*work.v[345]-work.L[524]*work.v[353]-work.L[525]*work.v[361]-work.L[526]*work.v[369]-work.L[527]*work.v[377]-work.L[528]*work.v[385]-work.L[529]*work.v[393]-work.L[530]*work.v[401]-work.L[531]*work.v[409]-work.L[532]*work.v[417]-work.L[533]*work.v[425]-work.L[534]*work.v[432];
  work.d[433] = work.v[433];

  if (work.d[433] < 0)
    work.d[433] = settings.kkt_reg;
  else
    work.d[433] += settings.kkt_reg;
  work.d_inv[433] = 1/work.d[433];

  work.L[565] = (work.KKT[1120]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385]-work.L[560]*work.v[393]-work.L[561]*work.v[401]-work.L[562]*work.v[409]-work.L[563]*work.v[417]-work.L[564]*work.v[425])*work.d_inv[433];
  work.L[597] = (work.KKT[1121]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393]-work.L[593]*work.v[401]-work.L[594]*work.v[409]-work.L[595]*work.v[417]-work.L[596]*work.v[425])*work.d_inv[433];
  work.L[630] = (work.KKT[1122]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401]-work.L[627]*work.v[409]-work.L[628]*work.v[417]-work.L[629]*work.v[425])*work.d_inv[433];
  work.L[664] = (work.KKT[1123]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409]-work.L[662]*work.v[417]-work.L[663]*work.v[425])*work.d_inv[433];
  work.L[699] = (work.KKT[1124]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417]-work.L[698]*work.v[425])*work.d_inv[433];
  work.L[735] = (work.KKT[1125]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425])*work.d_inv[433];
  work.L[772] = (work.KKT[1126]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425])*work.d_inv[433];
  work.L[810] = (work.KKT[1127]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425])*work.d_inv[433];
  work.L[849] = (work.KKT[1128]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425])*work.d_inv[433];
  work.L[889] = (work.KKT[1129]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425])*work.d_inv[433];
  work.L[930] = (work.KKT[1130]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425])*work.d_inv[433];
  work.L[972] = (work.KKT[1131]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425])*work.d_inv[433];
  work.L[1015] = (work.KKT[1132]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425])*work.d_inv[433];
  work.L[1059] = (work.KKT[1133]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425])*work.d_inv[433];
  work.L[1104] = (work.KKT[1134]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425])*work.d_inv[433];
  work.L[1150] = (work.KKT[1135]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425])*work.d_inv[433];
  work.L[1179] = (work.KKT[1136]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425])*work.d_inv[433];
  work.v[13] = work.L[535]*work.d[13];
  work.v[176] = work.L[536]*work.d[176];
  work.v[177] = work.L[537]*work.d[177];
  work.v[434] = work.KKT[1137]-work.L[535]*work.v[13]-work.L[536]*work.v[176]-work.L[537]*work.v[177];
  work.d[434] = work.v[434];

  if (work.d[434] > 0)
    work.d[434] = -settings.kkt_reg;
  else
    work.d[434] -= settings.kkt_reg;

  work.d_inv[434] = 1/work.d[434];

  work.L[542] = (work.KKT[1138])*work.d_inv[434];
  work.L[546] = (work.KKT[1139])*work.d_inv[434];
  work.v[133] = work.L[538]*work.d[133];
  work.v[435] = work.KKT[1140]-work.L[538]*work.v[133];
  work.d[435] = work.v[435];

  if (work.d[435] > 0)
    work.d[435] = -settings.kkt_reg;
  else
    work.d[435] -= settings.kkt_reg;

  work.d_inv[435] = 1/work.d[435];

  work.L[543] = (work.KKT[1141])*work.d_inv[435];
  work.L[547] = (work.KKT[1142])*work.d_inv[435];
  work.v[313] = work.L[539]*work.d[313];
  work.v[436] = 0-work.L[539]*work.v[313];
  work.d[436] = work.v[436];

  if (work.d[436] > 0)
    work.d[436] = -settings.kkt_reg;
  else
    work.d[436] -= settings.kkt_reg;

  work.d_inv[436] = 1/work.d[436];

  work.L[544] = (work.KKT[1143])*work.d_inv[436];
  work.L[548] = (work.KKT[1144])*work.d_inv[436];
  work.v[437] = 0;
  work.d[437] = work.v[437];

  if (work.d[437] > 0)
    work.d[437] = -settings.kkt_reg;
  else
    work.d[437] -= settings.kkt_reg;

  work.d_inv[437] = 1/work.d[437];

  work.L[545] = (work.KKT[1145])*work.d_inv[437];
  work.L[549] = (work.KKT[1146])*work.d_inv[437];
  work.v[250] = work.L[540]*work.d[250];
  work.v[251] = work.L[541]*work.d[251];
  work.v[434] = work.L[542]*work.d[434];
  work.v[435] = work.L[543]*work.d[435];
  work.v[436] = work.L[544]*work.d[436];
  work.v[437] = work.L[545]*work.d[437];
  work.v[438] = work.KKT[1147]-work.L[540]*work.v[250]-work.L[541]*work.v[251]-work.L[542]*work.v[434]-work.L[543]*work.v[435]-work.L[544]*work.v[436]-work.L[545]*work.v[437];
  work.d[438] = work.v[438];

  if (work.d[438] < 0)
    work.d[438] = settings.kkt_reg;
  else
    work.d[438] += settings.kkt_reg;
  work.d_inv[438] = 1/work.d[438];

  work.L[550] = (-work.L[546]*work.v[434]-work.L[547]*work.v[435]-work.L[548]*work.v[436]-work.L[549]*work.v[437])*work.d_inv[438];
  work.L[551] = (work.KKT[1148])*work.d_inv[438];
  work.v[434] = work.L[546]*work.d[434];
  work.v[435] = work.L[547]*work.d[435];
  work.v[436] = work.L[548]*work.d[436];
  work.v[437] = work.L[549]*work.d[437];
  work.v[438] = work.L[550]*work.d[438];
  work.v[439] = work.KKT[1149]-work.L[546]*work.v[434]-work.L[547]*work.v[435]-work.L[548]*work.v[436]-work.L[549]*work.v[437]-work.L[550]*work.v[438];
  work.d[439] = work.v[439];

  if (work.d[439] < 0)
    work.d[439] = settings.kkt_reg;
  else
    work.d[439] += settings.kkt_reg;
  work.d_inv[439] = 1/work.d[439];

  work.L[552] = (work.KKT[1150]-work.L[551]*work.v[438])*work.d_inv[439];
  work.v[438] = work.L[551]*work.d[438];
  work.v[439] = work.L[552]*work.d[439];
  work.v[440] = 0-work.L[551]*work.v[438]-work.L[552]*work.v[439];
  work.d[440] = work.v[440];

  if (work.d[440] > 0)
    work.d[440] = -settings.kkt_reg;
  else
    work.d[440] -= settings.kkt_reg;

  work.d_inv[440] = 1/work.d[440];

  work.L[566] = (work.KKT[1151])*work.d_inv[440];
  work.v[337] = work.L[553]*work.d[337];
  work.v[345] = work.L[554]*work.d[345];
  work.v[353] = work.L[555]*work.d[353];
  work.v[361] = work.L[556]*work.d[361];
  work.v[369] = work.L[557]*work.d[369];
  work.v[377] = work.L[558]*work.d[377];
  work.v[385] = work.L[559]*work.d[385];
  work.v[393] = work.L[560]*work.d[393];
  work.v[401] = work.L[561]*work.d[401];
  work.v[409] = work.L[562]*work.d[409];
  work.v[417] = work.L[563]*work.d[417];
  work.v[425] = work.L[564]*work.d[425];
  work.v[433] = work.L[565]*work.d[433];
  work.v[440] = work.L[566]*work.d[440];
  work.v[441] = work.KKT[1152]-work.L[553]*work.v[337]-work.L[554]*work.v[345]-work.L[555]*work.v[353]-work.L[556]*work.v[361]-work.L[557]*work.v[369]-work.L[558]*work.v[377]-work.L[559]*work.v[385]-work.L[560]*work.v[393]-work.L[561]*work.v[401]-work.L[562]*work.v[409]-work.L[563]*work.v[417]-work.L[564]*work.v[425]-work.L[565]*work.v[433]-work.L[566]*work.v[440];
  work.d[441] = work.v[441];

  if (work.d[441] < 0)
    work.d[441] = settings.kkt_reg;
  else
    work.d[441] += settings.kkt_reg;
  work.d_inv[441] = 1/work.d[441];

  work.L[598] = (work.KKT[1153]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393]-work.L[593]*work.v[401]-work.L[594]*work.v[409]-work.L[595]*work.v[417]-work.L[596]*work.v[425]-work.L[597]*work.v[433])*work.d_inv[441];
  work.L[631] = (work.KKT[1154]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401]-work.L[627]*work.v[409]-work.L[628]*work.v[417]-work.L[629]*work.v[425]-work.L[630]*work.v[433])*work.d_inv[441];
  work.L[665] = (work.KKT[1155]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409]-work.L[662]*work.v[417]-work.L[663]*work.v[425]-work.L[664]*work.v[433])*work.d_inv[441];
  work.L[700] = (work.KKT[1156]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417]-work.L[698]*work.v[425]-work.L[699]*work.v[433])*work.d_inv[441];
  work.L[736] = (work.KKT[1157]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425]-work.L[735]*work.v[433])*work.d_inv[441];
  work.L[773] = (work.KKT[1158]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433])*work.d_inv[441];
  work.L[811] = (work.KKT[1159]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433])*work.d_inv[441];
  work.L[850] = (work.KKT[1160]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433])*work.d_inv[441];
  work.L[890] = (work.KKT[1161]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433])*work.d_inv[441];
  work.L[931] = (work.KKT[1162]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433])*work.d_inv[441];
  work.L[973] = (work.KKT[1163]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433])*work.d_inv[441];
  work.L[1016] = (work.KKT[1164]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433])*work.d_inv[441];
  work.L[1060] = (work.KKT[1165]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433])*work.d_inv[441];
  work.L[1105] = (work.KKT[1166]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433])*work.d_inv[441];
  work.L[1151] = (work.KKT[1167]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433])*work.d_inv[441];
  work.L[1180] = (work.KKT[1168]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433])*work.d_inv[441];
  work.v[14] = work.L[567]*work.d[14];
  work.v[178] = work.L[568]*work.d[178];
  work.v[179] = work.L[569]*work.d[179];
  work.v[442] = work.KKT[1169]-work.L[567]*work.v[14]-work.L[568]*work.v[178]-work.L[569]*work.v[179];
  work.d[442] = work.v[442];

  if (work.d[442] > 0)
    work.d[442] = -settings.kkt_reg;
  else
    work.d[442] -= settings.kkt_reg;

  work.d_inv[442] = 1/work.d[442];

  work.L[574] = (work.KKT[1170])*work.d_inv[442];
  work.L[578] = (work.KKT[1171])*work.d_inv[442];
  work.v[134] = work.L[570]*work.d[134];
  work.v[443] = work.KKT[1172]-work.L[570]*work.v[134];
  work.d[443] = work.v[443];

  if (work.d[443] > 0)
    work.d[443] = -settings.kkt_reg;
  else
    work.d[443] -= settings.kkt_reg;

  work.d_inv[443] = 1/work.d[443];

  work.L[575] = (work.KKT[1173])*work.d_inv[443];
  work.L[579] = (work.KKT[1174])*work.d_inv[443];
  work.v[314] = work.L[571]*work.d[314];
  work.v[444] = 0-work.L[571]*work.v[314];
  work.d[444] = work.v[444];

  if (work.d[444] > 0)
    work.d[444] = -settings.kkt_reg;
  else
    work.d[444] -= settings.kkt_reg;

  work.d_inv[444] = 1/work.d[444];

  work.L[576] = (work.KKT[1175])*work.d_inv[444];
  work.L[580] = (work.KKT[1176])*work.d_inv[444];
  work.v[445] = 0;
  work.d[445] = work.v[445];

  if (work.d[445] > 0)
    work.d[445] = -settings.kkt_reg;
  else
    work.d[445] -= settings.kkt_reg;

  work.d_inv[445] = 1/work.d[445];

  work.L[577] = (work.KKT[1177])*work.d_inv[445];
  work.L[581] = (work.KKT[1178])*work.d_inv[445];
  work.v[253] = work.L[572]*work.d[253];
  work.v[254] = work.L[573]*work.d[254];
  work.v[442] = work.L[574]*work.d[442];
  work.v[443] = work.L[575]*work.d[443];
  work.v[444] = work.L[576]*work.d[444];
  work.v[445] = work.L[577]*work.d[445];
  work.v[446] = work.KKT[1179]-work.L[572]*work.v[253]-work.L[573]*work.v[254]-work.L[574]*work.v[442]-work.L[575]*work.v[443]-work.L[576]*work.v[444]-work.L[577]*work.v[445];
  work.d[446] = work.v[446];

  if (work.d[446] < 0)
    work.d[446] = settings.kkt_reg;
  else
    work.d[446] += settings.kkt_reg;
  work.d_inv[446] = 1/work.d[446];

  work.L[582] = (-work.L[578]*work.v[442]-work.L[579]*work.v[443]-work.L[580]*work.v[444]-work.L[581]*work.v[445])*work.d_inv[446];
  work.L[583] = (work.KKT[1180])*work.d_inv[446];
  work.v[442] = work.L[578]*work.d[442];
  work.v[443] = work.L[579]*work.d[443];
  work.v[444] = work.L[580]*work.d[444];
  work.v[445] = work.L[581]*work.d[445];
  work.v[446] = work.L[582]*work.d[446];
  work.v[447] = work.KKT[1181]-work.L[578]*work.v[442]-work.L[579]*work.v[443]-work.L[580]*work.v[444]-work.L[581]*work.v[445]-work.L[582]*work.v[446];
  work.d[447] = work.v[447];

  if (work.d[447] < 0)
    work.d[447] = settings.kkt_reg;
  else
    work.d[447] += settings.kkt_reg;
  work.d_inv[447] = 1/work.d[447];

  work.L[584] = (work.KKT[1182]-work.L[583]*work.v[446])*work.d_inv[447];
  work.v[446] = work.L[583]*work.d[446];
  work.v[447] = work.L[584]*work.d[447];
  work.v[448] = 0-work.L[583]*work.v[446]-work.L[584]*work.v[447];
  work.d[448] = work.v[448];

  if (work.d[448] > 0)
    work.d[448] = -settings.kkt_reg;
  else
    work.d[448] -= settings.kkt_reg;

  work.d_inv[448] = 1/work.d[448];

  work.L[599] = (work.KKT[1183])*work.d_inv[448];
  work.v[337] = work.L[585]*work.d[337];
  work.v[345] = work.L[586]*work.d[345];
  work.v[353] = work.L[587]*work.d[353];
  work.v[361] = work.L[588]*work.d[361];
  work.v[369] = work.L[589]*work.d[369];
  work.v[377] = work.L[590]*work.d[377];
  work.v[385] = work.L[591]*work.d[385];
  work.v[393] = work.L[592]*work.d[393];
  work.v[401] = work.L[593]*work.d[401];
  work.v[409] = work.L[594]*work.d[409];
  work.v[417] = work.L[595]*work.d[417];
  work.v[425] = work.L[596]*work.d[425];
  work.v[433] = work.L[597]*work.d[433];
  work.v[441] = work.L[598]*work.d[441];
  work.v[448] = work.L[599]*work.d[448];
  work.v[449] = work.KKT[1184]-work.L[585]*work.v[337]-work.L[586]*work.v[345]-work.L[587]*work.v[353]-work.L[588]*work.v[361]-work.L[589]*work.v[369]-work.L[590]*work.v[377]-work.L[591]*work.v[385]-work.L[592]*work.v[393]-work.L[593]*work.v[401]-work.L[594]*work.v[409]-work.L[595]*work.v[417]-work.L[596]*work.v[425]-work.L[597]*work.v[433]-work.L[598]*work.v[441]-work.L[599]*work.v[448];
  work.d[449] = work.v[449];

  if (work.d[449] < 0)
    work.d[449] = settings.kkt_reg;
  else
    work.d[449] += settings.kkt_reg;
  work.d_inv[449] = 1/work.d[449];

  work.L[632] = (work.KKT[1185]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401]-work.L[627]*work.v[409]-work.L[628]*work.v[417]-work.L[629]*work.v[425]-work.L[630]*work.v[433]-work.L[631]*work.v[441])*work.d_inv[449];
  work.L[666] = (work.KKT[1186]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409]-work.L[662]*work.v[417]-work.L[663]*work.v[425]-work.L[664]*work.v[433]-work.L[665]*work.v[441])*work.d_inv[449];
  work.L[701] = (work.KKT[1187]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417]-work.L[698]*work.v[425]-work.L[699]*work.v[433]-work.L[700]*work.v[441])*work.d_inv[449];
  work.L[737] = (work.KKT[1188]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425]-work.L[735]*work.v[433]-work.L[736]*work.v[441])*work.d_inv[449];
  work.L[774] = (work.KKT[1189]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433]-work.L[773]*work.v[441])*work.d_inv[449];
  work.L[812] = (work.KKT[1190]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441])*work.d_inv[449];
  work.L[851] = (work.KKT[1191]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441])*work.d_inv[449];
  work.L[891] = (work.KKT[1192]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441])*work.d_inv[449];
  work.L[932] = (work.KKT[1193]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441])*work.d_inv[449];
  work.L[974] = (work.KKT[1194]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441])*work.d_inv[449];
  work.L[1017] = (work.KKT[1195]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441])*work.d_inv[449];
  work.L[1061] = (work.KKT[1196]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441])*work.d_inv[449];
  work.L[1106] = (work.KKT[1197]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441])*work.d_inv[449];
  work.L[1152] = (work.KKT[1198]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441])*work.d_inv[449];
  work.L[1181] = (work.KKT[1199]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441])*work.d_inv[449];
  work.v[15] = work.L[600]*work.d[15];
  work.v[180] = work.L[601]*work.d[180];
  work.v[181] = work.L[602]*work.d[181];
  work.v[450] = work.KKT[1200]-work.L[600]*work.v[15]-work.L[601]*work.v[180]-work.L[602]*work.v[181];
  work.d[450] = work.v[450];

  if (work.d[450] > 0)
    work.d[450] = -settings.kkt_reg;
  else
    work.d[450] -= settings.kkt_reg;

  work.d_inv[450] = 1/work.d[450];

  work.L[607] = (work.KKT[1201])*work.d_inv[450];
  work.L[611] = (work.KKT[1202])*work.d_inv[450];
  work.v[135] = work.L[603]*work.d[135];
  work.v[451] = work.KKT[1203]-work.L[603]*work.v[135];
  work.d[451] = work.v[451];

  if (work.d[451] > 0)
    work.d[451] = -settings.kkt_reg;
  else
    work.d[451] -= settings.kkt_reg;

  work.d_inv[451] = 1/work.d[451];

  work.L[608] = (work.KKT[1204])*work.d_inv[451];
  work.L[612] = (work.KKT[1205])*work.d_inv[451];
  work.v[315] = work.L[604]*work.d[315];
  work.v[452] = 0-work.L[604]*work.v[315];
  work.d[452] = work.v[452];

  if (work.d[452] > 0)
    work.d[452] = -settings.kkt_reg;
  else
    work.d[452] -= settings.kkt_reg;

  work.d_inv[452] = 1/work.d[452];

  work.L[609] = (work.KKT[1206])*work.d_inv[452];
  work.L[613] = (work.KKT[1207])*work.d_inv[452];
  work.v[453] = 0;
  work.d[453] = work.v[453];

  if (work.d[453] > 0)
    work.d[453] = -settings.kkt_reg;
  else
    work.d[453] -= settings.kkt_reg;

  work.d_inv[453] = 1/work.d[453];

  work.L[610] = (work.KKT[1208])*work.d_inv[453];
  work.L[614] = (work.KKT[1209])*work.d_inv[453];
  work.v[256] = work.L[605]*work.d[256];
  work.v[257] = work.L[606]*work.d[257];
  work.v[450] = work.L[607]*work.d[450];
  work.v[451] = work.L[608]*work.d[451];
  work.v[452] = work.L[609]*work.d[452];
  work.v[453] = work.L[610]*work.d[453];
  work.v[454] = work.KKT[1210]-work.L[605]*work.v[256]-work.L[606]*work.v[257]-work.L[607]*work.v[450]-work.L[608]*work.v[451]-work.L[609]*work.v[452]-work.L[610]*work.v[453];
  work.d[454] = work.v[454];

  if (work.d[454] < 0)
    work.d[454] = settings.kkt_reg;
  else
    work.d[454] += settings.kkt_reg;
  work.d_inv[454] = 1/work.d[454];

  work.L[615] = (-work.L[611]*work.v[450]-work.L[612]*work.v[451]-work.L[613]*work.v[452]-work.L[614]*work.v[453])*work.d_inv[454];
  work.L[616] = (work.KKT[1211])*work.d_inv[454];
  work.v[450] = work.L[611]*work.d[450];
  work.v[451] = work.L[612]*work.d[451];
  work.v[452] = work.L[613]*work.d[452];
  work.v[453] = work.L[614]*work.d[453];
  work.v[454] = work.L[615]*work.d[454];
  work.v[455] = work.KKT[1212]-work.L[611]*work.v[450]-work.L[612]*work.v[451]-work.L[613]*work.v[452]-work.L[614]*work.v[453]-work.L[615]*work.v[454];
  work.d[455] = work.v[455];

  if (work.d[455] < 0)
    work.d[455] = settings.kkt_reg;
  else
    work.d[455] += settings.kkt_reg;
  work.d_inv[455] = 1/work.d[455];

  work.L[617] = (work.KKT[1213]-work.L[616]*work.v[454])*work.d_inv[455];
  work.v[454] = work.L[616]*work.d[454];
  work.v[455] = work.L[617]*work.d[455];
  work.v[456] = 0-work.L[616]*work.v[454]-work.L[617]*work.v[455];
  work.d[456] = work.v[456];

  if (work.d[456] > 0)
    work.d[456] = -settings.kkt_reg;
  else
    work.d[456] -= settings.kkt_reg;

  work.d_inv[456] = 1/work.d[456];

  work.L[633] = (work.KKT[1214])*work.d_inv[456];
  work.v[337] = work.L[618]*work.d[337];
  work.v[345] = work.L[619]*work.d[345];
  work.v[353] = work.L[620]*work.d[353];
  work.v[361] = work.L[621]*work.d[361];
  work.v[369] = work.L[622]*work.d[369];
  work.v[377] = work.L[623]*work.d[377];
  work.v[385] = work.L[624]*work.d[385];
  work.v[393] = work.L[625]*work.d[393];
  work.v[401] = work.L[626]*work.d[401];
  work.v[409] = work.L[627]*work.d[409];
  work.v[417] = work.L[628]*work.d[417];
  work.v[425] = work.L[629]*work.d[425];
  work.v[433] = work.L[630]*work.d[433];
  work.v[441] = work.L[631]*work.d[441];
  work.v[449] = work.L[632]*work.d[449];
  work.v[456] = work.L[633]*work.d[456];
  work.v[457] = work.KKT[1215]-work.L[618]*work.v[337]-work.L[619]*work.v[345]-work.L[620]*work.v[353]-work.L[621]*work.v[361]-work.L[622]*work.v[369]-work.L[623]*work.v[377]-work.L[624]*work.v[385]-work.L[625]*work.v[393]-work.L[626]*work.v[401]-work.L[627]*work.v[409]-work.L[628]*work.v[417]-work.L[629]*work.v[425]-work.L[630]*work.v[433]-work.L[631]*work.v[441]-work.L[632]*work.v[449]-work.L[633]*work.v[456];
  work.d[457] = work.v[457];

  if (work.d[457] < 0)
    work.d[457] = settings.kkt_reg;
  else
    work.d[457] += settings.kkt_reg;
  work.d_inv[457] = 1/work.d[457];

  work.L[667] = (work.KKT[1216]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409]-work.L[662]*work.v[417]-work.L[663]*work.v[425]-work.L[664]*work.v[433]-work.L[665]*work.v[441]-work.L[666]*work.v[449])*work.d_inv[457];
  work.L[702] = (work.KKT[1217]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417]-work.L[698]*work.v[425]-work.L[699]*work.v[433]-work.L[700]*work.v[441]-work.L[701]*work.v[449])*work.d_inv[457];
  work.L[738] = (work.KKT[1218]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425]-work.L[735]*work.v[433]-work.L[736]*work.v[441]-work.L[737]*work.v[449])*work.d_inv[457];
  work.L[775] = (work.KKT[1219]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433]-work.L[773]*work.v[441]-work.L[774]*work.v[449])*work.d_inv[457];
  work.L[813] = (work.KKT[1220]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441]-work.L[812]*work.v[449])*work.d_inv[457];
  work.L[852] = (work.KKT[1221]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449])*work.d_inv[457];
  work.L[892] = (work.KKT[1222]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449])*work.d_inv[457];
  work.L[933] = (work.KKT[1223]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449])*work.d_inv[457];
  work.L[975] = (work.KKT[1224]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449])*work.d_inv[457];
  work.L[1018] = (work.KKT[1225]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449])*work.d_inv[457];
  work.L[1062] = (work.KKT[1226]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449])*work.d_inv[457];
  work.L[1107] = (work.KKT[1227]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449])*work.d_inv[457];
  work.L[1153] = (work.KKT[1228]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449])*work.d_inv[457];
  work.L[1182] = (work.KKT[1229]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449])*work.d_inv[457];
  work.v[16] = work.L[634]*work.d[16];
  work.v[182] = work.L[635]*work.d[182];
  work.v[183] = work.L[636]*work.d[183];
  work.v[458] = work.KKT[1230]-work.L[634]*work.v[16]-work.L[635]*work.v[182]-work.L[636]*work.v[183];
  work.d[458] = work.v[458];

  if (work.d[458] > 0)
    work.d[458] = -settings.kkt_reg;
  else
    work.d[458] -= settings.kkt_reg;

  work.d_inv[458] = 1/work.d[458];

  work.L[641] = (work.KKT[1231])*work.d_inv[458];
  work.L[645] = (work.KKT[1232])*work.d_inv[458];
  work.v[136] = work.L[637]*work.d[136];
  work.v[459] = work.KKT[1233]-work.L[637]*work.v[136];
  work.d[459] = work.v[459];

  if (work.d[459] > 0)
    work.d[459] = -settings.kkt_reg;
  else
    work.d[459] -= settings.kkt_reg;

  work.d_inv[459] = 1/work.d[459];

  work.L[642] = (work.KKT[1234])*work.d_inv[459];
  work.L[646] = (work.KKT[1235])*work.d_inv[459];
  work.v[316] = work.L[638]*work.d[316];
  work.v[460] = 0-work.L[638]*work.v[316];
  work.d[460] = work.v[460];

  if (work.d[460] > 0)
    work.d[460] = -settings.kkt_reg;
  else
    work.d[460] -= settings.kkt_reg;

  work.d_inv[460] = 1/work.d[460];

  work.L[643] = (work.KKT[1236])*work.d_inv[460];
  work.L[647] = (work.KKT[1237])*work.d_inv[460];
  work.v[461] = 0;
  work.d[461] = work.v[461];

  if (work.d[461] > 0)
    work.d[461] = -settings.kkt_reg;
  else
    work.d[461] -= settings.kkt_reg;

  work.d_inv[461] = 1/work.d[461];

  work.L[644] = (work.KKT[1238])*work.d_inv[461];
  work.L[648] = (work.KKT[1239])*work.d_inv[461];
  work.v[259] = work.L[639]*work.d[259];
  work.v[260] = work.L[640]*work.d[260];
  work.v[458] = work.L[641]*work.d[458];
  work.v[459] = work.L[642]*work.d[459];
  work.v[460] = work.L[643]*work.d[460];
  work.v[461] = work.L[644]*work.d[461];
  work.v[462] = work.KKT[1240]-work.L[639]*work.v[259]-work.L[640]*work.v[260]-work.L[641]*work.v[458]-work.L[642]*work.v[459]-work.L[643]*work.v[460]-work.L[644]*work.v[461];
  work.d[462] = work.v[462];

  if (work.d[462] < 0)
    work.d[462] = settings.kkt_reg;
  else
    work.d[462] += settings.kkt_reg;
  work.d_inv[462] = 1/work.d[462];

  work.L[649] = (-work.L[645]*work.v[458]-work.L[646]*work.v[459]-work.L[647]*work.v[460]-work.L[648]*work.v[461])*work.d_inv[462];
  work.L[650] = (work.KKT[1241])*work.d_inv[462];
  work.v[458] = work.L[645]*work.d[458];
  work.v[459] = work.L[646]*work.d[459];
  work.v[460] = work.L[647]*work.d[460];
  work.v[461] = work.L[648]*work.d[461];
  work.v[462] = work.L[649]*work.d[462];
  work.v[463] = work.KKT[1242]-work.L[645]*work.v[458]-work.L[646]*work.v[459]-work.L[647]*work.v[460]-work.L[648]*work.v[461]-work.L[649]*work.v[462];
  work.d[463] = work.v[463];

  if (work.d[463] < 0)
    work.d[463] = settings.kkt_reg;
  else
    work.d[463] += settings.kkt_reg;
  work.d_inv[463] = 1/work.d[463];

  work.L[651] = (work.KKT[1243]-work.L[650]*work.v[462])*work.d_inv[463];
  work.v[462] = work.L[650]*work.d[462];
  work.v[463] = work.L[651]*work.d[463];
  work.v[464] = 0-work.L[650]*work.v[462]-work.L[651]*work.v[463];
  work.d[464] = work.v[464];

  if (work.d[464] > 0)
    work.d[464] = -settings.kkt_reg;
  else
    work.d[464] -= settings.kkt_reg;

  work.d_inv[464] = 1/work.d[464];

  work.L[668] = (work.KKT[1244])*work.d_inv[464];
  work.v[337] = work.L[652]*work.d[337];
  work.v[345] = work.L[653]*work.d[345];
  work.v[353] = work.L[654]*work.d[353];
  work.v[361] = work.L[655]*work.d[361];
  work.v[369] = work.L[656]*work.d[369];
  work.v[377] = work.L[657]*work.d[377];
  work.v[385] = work.L[658]*work.d[385];
  work.v[393] = work.L[659]*work.d[393];
  work.v[401] = work.L[660]*work.d[401];
  work.v[409] = work.L[661]*work.d[409];
  work.v[417] = work.L[662]*work.d[417];
  work.v[425] = work.L[663]*work.d[425];
  work.v[433] = work.L[664]*work.d[433];
  work.v[441] = work.L[665]*work.d[441];
  work.v[449] = work.L[666]*work.d[449];
  work.v[457] = work.L[667]*work.d[457];
  work.v[464] = work.L[668]*work.d[464];
  work.v[465] = work.KKT[1245]-work.L[652]*work.v[337]-work.L[653]*work.v[345]-work.L[654]*work.v[353]-work.L[655]*work.v[361]-work.L[656]*work.v[369]-work.L[657]*work.v[377]-work.L[658]*work.v[385]-work.L[659]*work.v[393]-work.L[660]*work.v[401]-work.L[661]*work.v[409]-work.L[662]*work.v[417]-work.L[663]*work.v[425]-work.L[664]*work.v[433]-work.L[665]*work.v[441]-work.L[666]*work.v[449]-work.L[667]*work.v[457]-work.L[668]*work.v[464];
  work.d[465] = work.v[465];

  if (work.d[465] < 0)
    work.d[465] = settings.kkt_reg;
  else
    work.d[465] += settings.kkt_reg;
  work.d_inv[465] = 1/work.d[465];

  work.L[703] = (work.KKT[1246]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417]-work.L[698]*work.v[425]-work.L[699]*work.v[433]-work.L[700]*work.v[441]-work.L[701]*work.v[449]-work.L[702]*work.v[457])*work.d_inv[465];
  work.L[739] = (work.KKT[1247]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425]-work.L[735]*work.v[433]-work.L[736]*work.v[441]-work.L[737]*work.v[449]-work.L[738]*work.v[457])*work.d_inv[465];
  work.L[776] = (work.KKT[1248]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433]-work.L[773]*work.v[441]-work.L[774]*work.v[449]-work.L[775]*work.v[457])*work.d_inv[465];
  work.L[814] = (work.KKT[1249]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441]-work.L[812]*work.v[449]-work.L[813]*work.v[457])*work.d_inv[465];
  work.L[853] = (work.KKT[1250]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449]-work.L[852]*work.v[457])*work.d_inv[465];
  work.L[893] = (work.KKT[1251]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457])*work.d_inv[465];
  work.L[934] = (work.KKT[1252]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457])*work.d_inv[465];
  work.L[976] = (work.KKT[1253]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457])*work.d_inv[465];
  work.L[1019] = (work.KKT[1254]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457])*work.d_inv[465];
  work.L[1063] = (work.KKT[1255]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457])*work.d_inv[465];
  work.L[1108] = (work.KKT[1256]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457])*work.d_inv[465];
  work.L[1154] = (work.KKT[1257]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457])*work.d_inv[465];
  work.L[1183] = (work.KKT[1258]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457])*work.d_inv[465];
  work.v[17] = work.L[669]*work.d[17];
  work.v[184] = work.L[670]*work.d[184];
  work.v[185] = work.L[671]*work.d[185];
  work.v[466] = work.KKT[1259]-work.L[669]*work.v[17]-work.L[670]*work.v[184]-work.L[671]*work.v[185];
  work.d[466] = work.v[466];

  if (work.d[466] > 0)
    work.d[466] = -settings.kkt_reg;
  else
    work.d[466] -= settings.kkt_reg;

  work.d_inv[466] = 1/work.d[466];

  work.L[676] = (work.KKT[1260])*work.d_inv[466];
  work.L[680] = (work.KKT[1261])*work.d_inv[466];
  work.v[137] = work.L[672]*work.d[137];
  work.v[467] = work.KKT[1262]-work.L[672]*work.v[137];
  work.d[467] = work.v[467];

  if (work.d[467] > 0)
    work.d[467] = -settings.kkt_reg;
  else
    work.d[467] -= settings.kkt_reg;

  work.d_inv[467] = 1/work.d[467];

  work.L[677] = (work.KKT[1263])*work.d_inv[467];
  work.L[681] = (work.KKT[1264])*work.d_inv[467];
  work.v[317] = work.L[673]*work.d[317];
  work.v[468] = 0-work.L[673]*work.v[317];
  work.d[468] = work.v[468];

  if (work.d[468] > 0)
    work.d[468] = -settings.kkt_reg;
  else
    work.d[468] -= settings.kkt_reg;

  work.d_inv[468] = 1/work.d[468];

  work.L[678] = (work.KKT[1265])*work.d_inv[468];
  work.L[682] = (work.KKT[1266])*work.d_inv[468];
  work.v[469] = 0;
  work.d[469] = work.v[469];

  if (work.d[469] > 0)
    work.d[469] = -settings.kkt_reg;
  else
    work.d[469] -= settings.kkt_reg;

  work.d_inv[469] = 1/work.d[469];

  work.L[679] = (work.KKT[1267])*work.d_inv[469];
  work.L[683] = (work.KKT[1268])*work.d_inv[469];
  work.v[262] = work.L[674]*work.d[262];
  work.v[263] = work.L[675]*work.d[263];
  work.v[466] = work.L[676]*work.d[466];
  work.v[467] = work.L[677]*work.d[467];
  work.v[468] = work.L[678]*work.d[468];
  work.v[469] = work.L[679]*work.d[469];
  work.v[470] = work.KKT[1269]-work.L[674]*work.v[262]-work.L[675]*work.v[263]-work.L[676]*work.v[466]-work.L[677]*work.v[467]-work.L[678]*work.v[468]-work.L[679]*work.v[469];
  work.d[470] = work.v[470];

  if (work.d[470] < 0)
    work.d[470] = settings.kkt_reg;
  else
    work.d[470] += settings.kkt_reg;
  work.d_inv[470] = 1/work.d[470];

  work.L[684] = (-work.L[680]*work.v[466]-work.L[681]*work.v[467]-work.L[682]*work.v[468]-work.L[683]*work.v[469])*work.d_inv[470];
  work.L[685] = (work.KKT[1270])*work.d_inv[470];
  work.v[466] = work.L[680]*work.d[466];
  work.v[467] = work.L[681]*work.d[467];
  work.v[468] = work.L[682]*work.d[468];
  work.v[469] = work.L[683]*work.d[469];
  work.v[470] = work.L[684]*work.d[470];
  work.v[471] = work.KKT[1271]-work.L[680]*work.v[466]-work.L[681]*work.v[467]-work.L[682]*work.v[468]-work.L[683]*work.v[469]-work.L[684]*work.v[470];
  work.d[471] = work.v[471];

  if (work.d[471] < 0)
    work.d[471] = settings.kkt_reg;
  else
    work.d[471] += settings.kkt_reg;
  work.d_inv[471] = 1/work.d[471];

  work.L[686] = (work.KKT[1272]-work.L[685]*work.v[470])*work.d_inv[471];
  work.v[470] = work.L[685]*work.d[470];
  work.v[471] = work.L[686]*work.d[471];
  work.v[472] = 0-work.L[685]*work.v[470]-work.L[686]*work.v[471];
  work.d[472] = work.v[472];

  if (work.d[472] > 0)
    work.d[472] = -settings.kkt_reg;
  else
    work.d[472] -= settings.kkt_reg;

  work.d_inv[472] = 1/work.d[472];

  work.L[704] = (work.KKT[1273])*work.d_inv[472];
  work.v[337] = work.L[687]*work.d[337];
  work.v[345] = work.L[688]*work.d[345];
  work.v[353] = work.L[689]*work.d[353];
  work.v[361] = work.L[690]*work.d[361];
  work.v[369] = work.L[691]*work.d[369];
  work.v[377] = work.L[692]*work.d[377];
  work.v[385] = work.L[693]*work.d[385];
  work.v[393] = work.L[694]*work.d[393];
  work.v[401] = work.L[695]*work.d[401];
  work.v[409] = work.L[696]*work.d[409];
  work.v[417] = work.L[697]*work.d[417];
  work.v[425] = work.L[698]*work.d[425];
  work.v[433] = work.L[699]*work.d[433];
  work.v[441] = work.L[700]*work.d[441];
  work.v[449] = work.L[701]*work.d[449];
  work.v[457] = work.L[702]*work.d[457];
  work.v[465] = work.L[703]*work.d[465];
  work.v[472] = work.L[704]*work.d[472];
  work.v[473] = work.KKT[1274]-work.L[687]*work.v[337]-work.L[688]*work.v[345]-work.L[689]*work.v[353]-work.L[690]*work.v[361]-work.L[691]*work.v[369]-work.L[692]*work.v[377]-work.L[693]*work.v[385]-work.L[694]*work.v[393]-work.L[695]*work.v[401]-work.L[696]*work.v[409]-work.L[697]*work.v[417]-work.L[698]*work.v[425]-work.L[699]*work.v[433]-work.L[700]*work.v[441]-work.L[701]*work.v[449]-work.L[702]*work.v[457]-work.L[703]*work.v[465]-work.L[704]*work.v[472];
  work.d[473] = work.v[473];

  if (work.d[473] < 0)
    work.d[473] = settings.kkt_reg;
  else
    work.d[473] += settings.kkt_reg;
  work.d_inv[473] = 1/work.d[473];

  work.L[740] = (work.KKT[1275]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425]-work.L[735]*work.v[433]-work.L[736]*work.v[441]-work.L[737]*work.v[449]-work.L[738]*work.v[457]-work.L[739]*work.v[465])*work.d_inv[473];
  work.L[777] = (work.KKT[1276]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433]-work.L[773]*work.v[441]-work.L[774]*work.v[449]-work.L[775]*work.v[457]-work.L[776]*work.v[465])*work.d_inv[473];
  work.L[815] = (work.KKT[1277]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441]-work.L[812]*work.v[449]-work.L[813]*work.v[457]-work.L[814]*work.v[465])*work.d_inv[473];
  work.L[854] = (work.KKT[1278]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449]-work.L[852]*work.v[457]-work.L[853]*work.v[465])*work.d_inv[473];
  work.L[894] = (work.KKT[1279]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457]-work.L[893]*work.v[465])*work.d_inv[473];
  work.L[935] = (work.KKT[1280]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465])*work.d_inv[473];
  work.L[977] = (work.KKT[1281]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465])*work.d_inv[473];
  work.L[1020] = (work.KKT[1282]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465])*work.d_inv[473];
  work.L[1064] = (work.KKT[1283]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465])*work.d_inv[473];
  work.L[1109] = (work.KKT[1284]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465])*work.d_inv[473];
  work.L[1155] = (work.KKT[1285]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465])*work.d_inv[473];
  work.L[1184] = (work.KKT[1286]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465])*work.d_inv[473];
  work.v[18] = work.L[705]*work.d[18];
  work.v[186] = work.L[706]*work.d[186];
  work.v[187] = work.L[707]*work.d[187];
  work.v[474] = work.KKT[1287]-work.L[705]*work.v[18]-work.L[706]*work.v[186]-work.L[707]*work.v[187];
  work.d[474] = work.v[474];

  if (work.d[474] > 0)
    work.d[474] = -settings.kkt_reg;
  else
    work.d[474] -= settings.kkt_reg;

  work.d_inv[474] = 1/work.d[474];

  work.L[712] = (work.KKT[1288])*work.d_inv[474];
  work.L[716] = (work.KKT[1289])*work.d_inv[474];
  work.v[138] = work.L[708]*work.d[138];
  work.v[475] = work.KKT[1290]-work.L[708]*work.v[138];
  work.d[475] = work.v[475];

  if (work.d[475] > 0)
    work.d[475] = -settings.kkt_reg;
  else
    work.d[475] -= settings.kkt_reg;

  work.d_inv[475] = 1/work.d[475];

  work.L[713] = (work.KKT[1291])*work.d_inv[475];
  work.L[717] = (work.KKT[1292])*work.d_inv[475];
  work.v[318] = work.L[709]*work.d[318];
  work.v[476] = 0-work.L[709]*work.v[318];
  work.d[476] = work.v[476];

  if (work.d[476] > 0)
    work.d[476] = -settings.kkt_reg;
  else
    work.d[476] -= settings.kkt_reg;

  work.d_inv[476] = 1/work.d[476];

  work.L[714] = (work.KKT[1293])*work.d_inv[476];
  work.L[718] = (work.KKT[1294])*work.d_inv[476];
  work.v[477] = 0;
  work.d[477] = work.v[477];

  if (work.d[477] > 0)
    work.d[477] = -settings.kkt_reg;
  else
    work.d[477] -= settings.kkt_reg;

  work.d_inv[477] = 1/work.d[477];

  work.L[715] = (work.KKT[1295])*work.d_inv[477];
  work.L[719] = (work.KKT[1296])*work.d_inv[477];
  work.v[265] = work.L[710]*work.d[265];
  work.v[266] = work.L[711]*work.d[266];
  work.v[474] = work.L[712]*work.d[474];
  work.v[475] = work.L[713]*work.d[475];
  work.v[476] = work.L[714]*work.d[476];
  work.v[477] = work.L[715]*work.d[477];
  work.v[478] = work.KKT[1297]-work.L[710]*work.v[265]-work.L[711]*work.v[266]-work.L[712]*work.v[474]-work.L[713]*work.v[475]-work.L[714]*work.v[476]-work.L[715]*work.v[477];
  work.d[478] = work.v[478];

  if (work.d[478] < 0)
    work.d[478] = settings.kkt_reg;
  else
    work.d[478] += settings.kkt_reg;
  work.d_inv[478] = 1/work.d[478];

  work.L[720] = (-work.L[716]*work.v[474]-work.L[717]*work.v[475]-work.L[718]*work.v[476]-work.L[719]*work.v[477])*work.d_inv[478];
  work.L[721] = (work.KKT[1298])*work.d_inv[478];
  work.v[474] = work.L[716]*work.d[474];
  work.v[475] = work.L[717]*work.d[475];
  work.v[476] = work.L[718]*work.d[476];
  work.v[477] = work.L[719]*work.d[477];
  work.v[478] = work.L[720]*work.d[478];
  work.v[479] = work.KKT[1299]-work.L[716]*work.v[474]-work.L[717]*work.v[475]-work.L[718]*work.v[476]-work.L[719]*work.v[477]-work.L[720]*work.v[478];
  work.d[479] = work.v[479];

  if (work.d[479] < 0)
    work.d[479] = settings.kkt_reg;
  else
    work.d[479] += settings.kkt_reg;
  work.d_inv[479] = 1/work.d[479];

  work.L[722] = (work.KKT[1300]-work.L[721]*work.v[478])*work.d_inv[479];
  work.v[478] = work.L[721]*work.d[478];
  work.v[479] = work.L[722]*work.d[479];
  work.v[480] = 0-work.L[721]*work.v[478]-work.L[722]*work.v[479];
  work.d[480] = work.v[480];

  if (work.d[480] > 0)
    work.d[480] = -settings.kkt_reg;
  else
    work.d[480] -= settings.kkt_reg;

  work.d_inv[480] = 1/work.d[480];

  work.L[741] = (work.KKT[1301])*work.d_inv[480];
  work.v[337] = work.L[723]*work.d[337];
  work.v[345] = work.L[724]*work.d[345];
  work.v[353] = work.L[725]*work.d[353];
  work.v[361] = work.L[726]*work.d[361];
  work.v[369] = work.L[727]*work.d[369];
  work.v[377] = work.L[728]*work.d[377];
  work.v[385] = work.L[729]*work.d[385];
  work.v[393] = work.L[730]*work.d[393];
  work.v[401] = work.L[731]*work.d[401];
  work.v[409] = work.L[732]*work.d[409];
  work.v[417] = work.L[733]*work.d[417];
  work.v[425] = work.L[734]*work.d[425];
  work.v[433] = work.L[735]*work.d[433];
  work.v[441] = work.L[736]*work.d[441];
  work.v[449] = work.L[737]*work.d[449];
  work.v[457] = work.L[738]*work.d[457];
  work.v[465] = work.L[739]*work.d[465];
  work.v[473] = work.L[740]*work.d[473];
  work.v[480] = work.L[741]*work.d[480];
  work.v[481] = work.KKT[1302]-work.L[723]*work.v[337]-work.L[724]*work.v[345]-work.L[725]*work.v[353]-work.L[726]*work.v[361]-work.L[727]*work.v[369]-work.L[728]*work.v[377]-work.L[729]*work.v[385]-work.L[730]*work.v[393]-work.L[731]*work.v[401]-work.L[732]*work.v[409]-work.L[733]*work.v[417]-work.L[734]*work.v[425]-work.L[735]*work.v[433]-work.L[736]*work.v[441]-work.L[737]*work.v[449]-work.L[738]*work.v[457]-work.L[739]*work.v[465]-work.L[740]*work.v[473]-work.L[741]*work.v[480];
  work.d[481] = work.v[481];

  if (work.d[481] < 0)
    work.d[481] = settings.kkt_reg;
  else
    work.d[481] += settings.kkt_reg;
  work.d_inv[481] = 1/work.d[481];

  work.L[778] = (work.KKT[1303]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433]-work.L[773]*work.v[441]-work.L[774]*work.v[449]-work.L[775]*work.v[457]-work.L[776]*work.v[465]-work.L[777]*work.v[473])*work.d_inv[481];
  work.L[816] = (work.KKT[1304]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441]-work.L[812]*work.v[449]-work.L[813]*work.v[457]-work.L[814]*work.v[465]-work.L[815]*work.v[473])*work.d_inv[481];
  work.L[855] = (work.KKT[1305]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449]-work.L[852]*work.v[457]-work.L[853]*work.v[465]-work.L[854]*work.v[473])*work.d_inv[481];
  work.L[895] = (work.KKT[1306]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457]-work.L[893]*work.v[465]-work.L[894]*work.v[473])*work.d_inv[481];
  work.L[936] = (work.KKT[1307]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465]-work.L[935]*work.v[473])*work.d_inv[481];
  work.L[978] = (work.KKT[1308]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473])*work.d_inv[481];
  work.L[1021] = (work.KKT[1309]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473])*work.d_inv[481];
  work.L[1065] = (work.KKT[1310]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473])*work.d_inv[481];
  work.L[1110] = (work.KKT[1311]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473])*work.d_inv[481];
  work.L[1156] = (work.KKT[1312]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473])*work.d_inv[481];
  work.L[1185] = (work.KKT[1313]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473])*work.d_inv[481];
  work.v[19] = work.L[742]*work.d[19];
  work.v[188] = work.L[743]*work.d[188];
  work.v[189] = work.L[744]*work.d[189];
  work.v[482] = work.KKT[1314]-work.L[742]*work.v[19]-work.L[743]*work.v[188]-work.L[744]*work.v[189];
  work.d[482] = work.v[482];

  if (work.d[482] > 0)
    work.d[482] = -settings.kkt_reg;
  else
    work.d[482] -= settings.kkt_reg;

  work.d_inv[482] = 1/work.d[482];

  work.L[749] = (work.KKT[1315])*work.d_inv[482];
  work.L[753] = (work.KKT[1316])*work.d_inv[482];
  work.v[139] = work.L[745]*work.d[139];
  work.v[483] = work.KKT[1317]-work.L[745]*work.v[139];
  work.d[483] = work.v[483];

  if (work.d[483] > 0)
    work.d[483] = -settings.kkt_reg;
  else
    work.d[483] -= settings.kkt_reg;

  work.d_inv[483] = 1/work.d[483];

  work.L[750] = (work.KKT[1318])*work.d_inv[483];
  work.L[754] = (work.KKT[1319])*work.d_inv[483];
  work.v[319] = work.L[746]*work.d[319];
  work.v[484] = 0-work.L[746]*work.v[319];
  work.d[484] = work.v[484];

  if (work.d[484] > 0)
    work.d[484] = -settings.kkt_reg;
  else
    work.d[484] -= settings.kkt_reg;

  work.d_inv[484] = 1/work.d[484];

  work.L[751] = (work.KKT[1320])*work.d_inv[484];
  work.L[755] = (work.KKT[1321])*work.d_inv[484];
  work.v[485] = 0;
  work.d[485] = work.v[485];

  if (work.d[485] > 0)
    work.d[485] = -settings.kkt_reg;
  else
    work.d[485] -= settings.kkt_reg;

  work.d_inv[485] = 1/work.d[485];

  work.L[752] = (work.KKT[1322])*work.d_inv[485];
  work.L[756] = (work.KKT[1323])*work.d_inv[485];
  work.v[268] = work.L[747]*work.d[268];
  work.v[269] = work.L[748]*work.d[269];
  work.v[482] = work.L[749]*work.d[482];
  work.v[483] = work.L[750]*work.d[483];
  work.v[484] = work.L[751]*work.d[484];
  work.v[485] = work.L[752]*work.d[485];
  work.v[486] = work.KKT[1324]-work.L[747]*work.v[268]-work.L[748]*work.v[269]-work.L[749]*work.v[482]-work.L[750]*work.v[483]-work.L[751]*work.v[484]-work.L[752]*work.v[485];
  work.d[486] = work.v[486];

  if (work.d[486] < 0)
    work.d[486] = settings.kkt_reg;
  else
    work.d[486] += settings.kkt_reg;
  work.d_inv[486] = 1/work.d[486];

  work.L[757] = (-work.L[753]*work.v[482]-work.L[754]*work.v[483]-work.L[755]*work.v[484]-work.L[756]*work.v[485])*work.d_inv[486];
  work.L[758] = (work.KKT[1325])*work.d_inv[486];
  work.v[482] = work.L[753]*work.d[482];
  work.v[483] = work.L[754]*work.d[483];
  work.v[484] = work.L[755]*work.d[484];
  work.v[485] = work.L[756]*work.d[485];
  work.v[486] = work.L[757]*work.d[486];
  work.v[487] = work.KKT[1326]-work.L[753]*work.v[482]-work.L[754]*work.v[483]-work.L[755]*work.v[484]-work.L[756]*work.v[485]-work.L[757]*work.v[486];
  work.d[487] = work.v[487];

  if (work.d[487] < 0)
    work.d[487] = settings.kkt_reg;
  else
    work.d[487] += settings.kkt_reg;
  work.d_inv[487] = 1/work.d[487];

  work.L[759] = (work.KKT[1327]-work.L[758]*work.v[486])*work.d_inv[487];
  work.v[486] = work.L[758]*work.d[486];
  work.v[487] = work.L[759]*work.d[487];
  work.v[488] = 0-work.L[758]*work.v[486]-work.L[759]*work.v[487];
  work.d[488] = work.v[488];

  if (work.d[488] > 0)
    work.d[488] = -settings.kkt_reg;
  else
    work.d[488] -= settings.kkt_reg;

  work.d_inv[488] = 1/work.d[488];

  work.L[779] = (work.KKT[1328])*work.d_inv[488];
  work.v[337] = work.L[760]*work.d[337];
  work.v[345] = work.L[761]*work.d[345];
  work.v[353] = work.L[762]*work.d[353];
  work.v[361] = work.L[763]*work.d[361];
  work.v[369] = work.L[764]*work.d[369];
  work.v[377] = work.L[765]*work.d[377];
  work.v[385] = work.L[766]*work.d[385];
  work.v[393] = work.L[767]*work.d[393];
  work.v[401] = work.L[768]*work.d[401];
  work.v[409] = work.L[769]*work.d[409];
  work.v[417] = work.L[770]*work.d[417];
  work.v[425] = work.L[771]*work.d[425];
  work.v[433] = work.L[772]*work.d[433];
  work.v[441] = work.L[773]*work.d[441];
  work.v[449] = work.L[774]*work.d[449];
  work.v[457] = work.L[775]*work.d[457];
  work.v[465] = work.L[776]*work.d[465];
  work.v[473] = work.L[777]*work.d[473];
  work.v[481] = work.L[778]*work.d[481];
  work.v[488] = work.L[779]*work.d[488];
  work.v[489] = work.KKT[1329]-work.L[760]*work.v[337]-work.L[761]*work.v[345]-work.L[762]*work.v[353]-work.L[763]*work.v[361]-work.L[764]*work.v[369]-work.L[765]*work.v[377]-work.L[766]*work.v[385]-work.L[767]*work.v[393]-work.L[768]*work.v[401]-work.L[769]*work.v[409]-work.L[770]*work.v[417]-work.L[771]*work.v[425]-work.L[772]*work.v[433]-work.L[773]*work.v[441]-work.L[774]*work.v[449]-work.L[775]*work.v[457]-work.L[776]*work.v[465]-work.L[777]*work.v[473]-work.L[778]*work.v[481]-work.L[779]*work.v[488];
  work.d[489] = work.v[489];

  if (work.d[489] < 0)
    work.d[489] = settings.kkt_reg;
  else
    work.d[489] += settings.kkt_reg;
  work.d_inv[489] = 1/work.d[489];

  work.L[817] = (work.KKT[1330]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441]-work.L[812]*work.v[449]-work.L[813]*work.v[457]-work.L[814]*work.v[465]-work.L[815]*work.v[473]-work.L[816]*work.v[481])*work.d_inv[489];
  work.L[856] = (work.KKT[1331]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449]-work.L[852]*work.v[457]-work.L[853]*work.v[465]-work.L[854]*work.v[473]-work.L[855]*work.v[481])*work.d_inv[489];
  work.L[896] = (work.KKT[1332]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457]-work.L[893]*work.v[465]-work.L[894]*work.v[473]-work.L[895]*work.v[481])*work.d_inv[489];
  work.L[937] = (work.KKT[1333]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465]-work.L[935]*work.v[473]-work.L[936]*work.v[481])*work.d_inv[489];
  work.L[979] = (work.KKT[1334]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473]-work.L[978]*work.v[481])*work.d_inv[489];
  work.L[1022] = (work.KKT[1335]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481])*work.d_inv[489];
  work.L[1066] = (work.KKT[1336]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481])*work.d_inv[489];
  work.L[1111] = (work.KKT[1337]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481])*work.d_inv[489];
  work.L[1157] = (work.KKT[1338]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481])*work.d_inv[489];
  work.L[1186] = (work.KKT[1339]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481])*work.d_inv[489];
  work.v[20] = work.L[780]*work.d[20];
  work.v[190] = work.L[781]*work.d[190];
  work.v[191] = work.L[782]*work.d[191];
  work.v[490] = work.KKT[1340]-work.L[780]*work.v[20]-work.L[781]*work.v[190]-work.L[782]*work.v[191];
  work.d[490] = work.v[490];

  if (work.d[490] > 0)
    work.d[490] = -settings.kkt_reg;
  else
    work.d[490] -= settings.kkt_reg;

  work.d_inv[490] = 1/work.d[490];

  work.L[787] = (work.KKT[1341])*work.d_inv[490];
  work.L[791] = (work.KKT[1342])*work.d_inv[490];
  work.v[140] = work.L[783]*work.d[140];
  work.v[491] = work.KKT[1343]-work.L[783]*work.v[140];
  work.d[491] = work.v[491];

  if (work.d[491] > 0)
    work.d[491] = -settings.kkt_reg;
  else
    work.d[491] -= settings.kkt_reg;

  work.d_inv[491] = 1/work.d[491];

  work.L[788] = (work.KKT[1344])*work.d_inv[491];
  work.L[792] = (work.KKT[1345])*work.d_inv[491];
  work.v[320] = work.L[784]*work.d[320];
  work.v[492] = 0-work.L[784]*work.v[320];
  work.d[492] = work.v[492];

  if (work.d[492] > 0)
    work.d[492] = -settings.kkt_reg;
  else
    work.d[492] -= settings.kkt_reg;

  work.d_inv[492] = 1/work.d[492];

  work.L[789] = (work.KKT[1346])*work.d_inv[492];
  work.L[793] = (work.KKT[1347])*work.d_inv[492];
  work.v[493] = 0;
  work.d[493] = work.v[493];

  if (work.d[493] > 0)
    work.d[493] = -settings.kkt_reg;
  else
    work.d[493] -= settings.kkt_reg;

  work.d_inv[493] = 1/work.d[493];

  work.L[790] = (work.KKT[1348])*work.d_inv[493];
  work.L[794] = (work.KKT[1349])*work.d_inv[493];
  work.v[271] = work.L[785]*work.d[271];
  work.v[272] = work.L[786]*work.d[272];
  work.v[490] = work.L[787]*work.d[490];
  work.v[491] = work.L[788]*work.d[491];
  work.v[492] = work.L[789]*work.d[492];
  work.v[493] = work.L[790]*work.d[493];
  work.v[494] = work.KKT[1350]-work.L[785]*work.v[271]-work.L[786]*work.v[272]-work.L[787]*work.v[490]-work.L[788]*work.v[491]-work.L[789]*work.v[492]-work.L[790]*work.v[493];
  work.d[494] = work.v[494];

  if (work.d[494] < 0)
    work.d[494] = settings.kkt_reg;
  else
    work.d[494] += settings.kkt_reg;
  work.d_inv[494] = 1/work.d[494];

  work.L[795] = (-work.L[791]*work.v[490]-work.L[792]*work.v[491]-work.L[793]*work.v[492]-work.L[794]*work.v[493])*work.d_inv[494];
  work.L[796] = (work.KKT[1351])*work.d_inv[494];
  work.v[490] = work.L[791]*work.d[490];
  work.v[491] = work.L[792]*work.d[491];
  work.v[492] = work.L[793]*work.d[492];
  work.v[493] = work.L[794]*work.d[493];
  work.v[494] = work.L[795]*work.d[494];
  work.v[495] = work.KKT[1352]-work.L[791]*work.v[490]-work.L[792]*work.v[491]-work.L[793]*work.v[492]-work.L[794]*work.v[493]-work.L[795]*work.v[494];
  work.d[495] = work.v[495];

  if (work.d[495] < 0)
    work.d[495] = settings.kkt_reg;
  else
    work.d[495] += settings.kkt_reg;
  work.d_inv[495] = 1/work.d[495];

  work.L[797] = (work.KKT[1353]-work.L[796]*work.v[494])*work.d_inv[495];
  work.v[494] = work.L[796]*work.d[494];
  work.v[495] = work.L[797]*work.d[495];
  work.v[496] = 0-work.L[796]*work.v[494]-work.L[797]*work.v[495];
  work.d[496] = work.v[496];

  if (work.d[496] > 0)
    work.d[496] = -settings.kkt_reg;
  else
    work.d[496] -= settings.kkt_reg;

  work.d_inv[496] = 1/work.d[496];

  work.L[818] = (work.KKT[1354])*work.d_inv[496];
  work.v[337] = work.L[798]*work.d[337];
  work.v[345] = work.L[799]*work.d[345];
  work.v[353] = work.L[800]*work.d[353];
  work.v[361] = work.L[801]*work.d[361];
  work.v[369] = work.L[802]*work.d[369];
  work.v[377] = work.L[803]*work.d[377];
  work.v[385] = work.L[804]*work.d[385];
  work.v[393] = work.L[805]*work.d[393];
  work.v[401] = work.L[806]*work.d[401];
  work.v[409] = work.L[807]*work.d[409];
  work.v[417] = work.L[808]*work.d[417];
  work.v[425] = work.L[809]*work.d[425];
  work.v[433] = work.L[810]*work.d[433];
  work.v[441] = work.L[811]*work.d[441];
  work.v[449] = work.L[812]*work.d[449];
  work.v[457] = work.L[813]*work.d[457];
  work.v[465] = work.L[814]*work.d[465];
  work.v[473] = work.L[815]*work.d[473];
  work.v[481] = work.L[816]*work.d[481];
  work.v[489] = work.L[817]*work.d[489];
  work.v[496] = work.L[818]*work.d[496];
  work.v[497] = work.KKT[1355]-work.L[798]*work.v[337]-work.L[799]*work.v[345]-work.L[800]*work.v[353]-work.L[801]*work.v[361]-work.L[802]*work.v[369]-work.L[803]*work.v[377]-work.L[804]*work.v[385]-work.L[805]*work.v[393]-work.L[806]*work.v[401]-work.L[807]*work.v[409]-work.L[808]*work.v[417]-work.L[809]*work.v[425]-work.L[810]*work.v[433]-work.L[811]*work.v[441]-work.L[812]*work.v[449]-work.L[813]*work.v[457]-work.L[814]*work.v[465]-work.L[815]*work.v[473]-work.L[816]*work.v[481]-work.L[817]*work.v[489]-work.L[818]*work.v[496];
  work.d[497] = work.v[497];

  if (work.d[497] < 0)
    work.d[497] = settings.kkt_reg;
  else
    work.d[497] += settings.kkt_reg;
  work.d_inv[497] = 1/work.d[497];

  work.L[857] = (work.KKT[1356]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449]-work.L[852]*work.v[457]-work.L[853]*work.v[465]-work.L[854]*work.v[473]-work.L[855]*work.v[481]-work.L[856]*work.v[489])*work.d_inv[497];
  work.L[897] = (work.KKT[1357]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457]-work.L[893]*work.v[465]-work.L[894]*work.v[473]-work.L[895]*work.v[481]-work.L[896]*work.v[489])*work.d_inv[497];
  work.L[938] = (work.KKT[1358]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465]-work.L[935]*work.v[473]-work.L[936]*work.v[481]-work.L[937]*work.v[489])*work.d_inv[497];
  work.L[980] = (work.KKT[1359]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473]-work.L[978]*work.v[481]-work.L[979]*work.v[489])*work.d_inv[497];
  work.L[1023] = (work.KKT[1360]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481]-work.L[1022]*work.v[489])*work.d_inv[497];
  work.L[1067] = (work.KKT[1361]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489])*work.d_inv[497];
  work.L[1112] = (work.KKT[1362]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489])*work.d_inv[497];
  work.L[1158] = (work.KKT[1363]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489])*work.d_inv[497];
  work.L[1187] = (work.KKT[1364]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489])*work.d_inv[497];
  work.v[21] = work.L[819]*work.d[21];
  work.v[192] = work.L[820]*work.d[192];
  work.v[193] = work.L[821]*work.d[193];
  work.v[498] = work.KKT[1365]-work.L[819]*work.v[21]-work.L[820]*work.v[192]-work.L[821]*work.v[193];
  work.d[498] = work.v[498];

  if (work.d[498] > 0)
    work.d[498] = -settings.kkt_reg;
  else
    work.d[498] -= settings.kkt_reg;

  work.d_inv[498] = 1/work.d[498];

  work.L[826] = (work.KKT[1366])*work.d_inv[498];
  work.L[830] = (work.KKT[1367])*work.d_inv[498];
  work.v[141] = work.L[822]*work.d[141];
  work.v[499] = work.KKT[1368]-work.L[822]*work.v[141];
  work.d[499] = work.v[499];

  if (work.d[499] > 0)
    work.d[499] = -settings.kkt_reg;
  else
    work.d[499] -= settings.kkt_reg;

  work.d_inv[499] = 1/work.d[499];

  work.L[827] = (work.KKT[1369])*work.d_inv[499];
  work.L[831] = (work.KKT[1370])*work.d_inv[499];
  work.v[321] = work.L[823]*work.d[321];
  work.v[500] = 0-work.L[823]*work.v[321];
  work.d[500] = work.v[500];

  if (work.d[500] > 0)
    work.d[500] = -settings.kkt_reg;
  else
    work.d[500] -= settings.kkt_reg;

  work.d_inv[500] = 1/work.d[500];

  work.L[828] = (work.KKT[1371])*work.d_inv[500];
  work.L[832] = (work.KKT[1372])*work.d_inv[500];
  work.v[501] = 0;
  work.d[501] = work.v[501];

  if (work.d[501] > 0)
    work.d[501] = -settings.kkt_reg;
  else
    work.d[501] -= settings.kkt_reg;

  work.d_inv[501] = 1/work.d[501];

  work.L[829] = (work.KKT[1373])*work.d_inv[501];
  work.L[833] = (work.KKT[1374])*work.d_inv[501];
  work.v[274] = work.L[824]*work.d[274];
  work.v[275] = work.L[825]*work.d[275];
  work.v[498] = work.L[826]*work.d[498];
  work.v[499] = work.L[827]*work.d[499];
  work.v[500] = work.L[828]*work.d[500];
  work.v[501] = work.L[829]*work.d[501];
  work.v[502] = work.KKT[1375]-work.L[824]*work.v[274]-work.L[825]*work.v[275]-work.L[826]*work.v[498]-work.L[827]*work.v[499]-work.L[828]*work.v[500]-work.L[829]*work.v[501];
  work.d[502] = work.v[502];

  if (work.d[502] < 0)
    work.d[502] = settings.kkt_reg;
  else
    work.d[502] += settings.kkt_reg;
  work.d_inv[502] = 1/work.d[502];

  work.L[834] = (-work.L[830]*work.v[498]-work.L[831]*work.v[499]-work.L[832]*work.v[500]-work.L[833]*work.v[501])*work.d_inv[502];
  work.L[835] = (work.KKT[1376])*work.d_inv[502];
  work.v[498] = work.L[830]*work.d[498];
  work.v[499] = work.L[831]*work.d[499];
  work.v[500] = work.L[832]*work.d[500];
  work.v[501] = work.L[833]*work.d[501];
  work.v[502] = work.L[834]*work.d[502];
  work.v[503] = work.KKT[1377]-work.L[830]*work.v[498]-work.L[831]*work.v[499]-work.L[832]*work.v[500]-work.L[833]*work.v[501]-work.L[834]*work.v[502];
  work.d[503] = work.v[503];

  if (work.d[503] < 0)
    work.d[503] = settings.kkt_reg;
  else
    work.d[503] += settings.kkt_reg;
  work.d_inv[503] = 1/work.d[503];

  work.L[836] = (work.KKT[1378]-work.L[835]*work.v[502])*work.d_inv[503];
  work.v[502] = work.L[835]*work.d[502];
  work.v[503] = work.L[836]*work.d[503];
  work.v[504] = 0-work.L[835]*work.v[502]-work.L[836]*work.v[503];
  work.d[504] = work.v[504];

  if (work.d[504] > 0)
    work.d[504] = -settings.kkt_reg;
  else
    work.d[504] -= settings.kkt_reg;

  work.d_inv[504] = 1/work.d[504];

  work.L[858] = (work.KKT[1379])*work.d_inv[504];
  work.v[337] = work.L[837]*work.d[337];
  work.v[345] = work.L[838]*work.d[345];
  work.v[353] = work.L[839]*work.d[353];
  work.v[361] = work.L[840]*work.d[361];
  work.v[369] = work.L[841]*work.d[369];
  work.v[377] = work.L[842]*work.d[377];
  work.v[385] = work.L[843]*work.d[385];
  work.v[393] = work.L[844]*work.d[393];
  work.v[401] = work.L[845]*work.d[401];
  work.v[409] = work.L[846]*work.d[409];
  work.v[417] = work.L[847]*work.d[417];
  work.v[425] = work.L[848]*work.d[425];
  work.v[433] = work.L[849]*work.d[433];
  work.v[441] = work.L[850]*work.d[441];
  work.v[449] = work.L[851]*work.d[449];
  work.v[457] = work.L[852]*work.d[457];
  work.v[465] = work.L[853]*work.d[465];
  work.v[473] = work.L[854]*work.d[473];
  work.v[481] = work.L[855]*work.d[481];
  work.v[489] = work.L[856]*work.d[489];
  work.v[497] = work.L[857]*work.d[497];
  work.v[504] = work.L[858]*work.d[504];
  work.v[505] = work.KKT[1380]-work.L[837]*work.v[337]-work.L[838]*work.v[345]-work.L[839]*work.v[353]-work.L[840]*work.v[361]-work.L[841]*work.v[369]-work.L[842]*work.v[377]-work.L[843]*work.v[385]-work.L[844]*work.v[393]-work.L[845]*work.v[401]-work.L[846]*work.v[409]-work.L[847]*work.v[417]-work.L[848]*work.v[425]-work.L[849]*work.v[433]-work.L[850]*work.v[441]-work.L[851]*work.v[449]-work.L[852]*work.v[457]-work.L[853]*work.v[465]-work.L[854]*work.v[473]-work.L[855]*work.v[481]-work.L[856]*work.v[489]-work.L[857]*work.v[497]-work.L[858]*work.v[504];
  work.d[505] = work.v[505];

  if (work.d[505] < 0)
    work.d[505] = settings.kkt_reg;
  else
    work.d[505] += settings.kkt_reg;
  work.d_inv[505] = 1/work.d[505];

  work.L[898] = (work.KKT[1381]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457]-work.L[893]*work.v[465]-work.L[894]*work.v[473]-work.L[895]*work.v[481]-work.L[896]*work.v[489]-work.L[897]*work.v[497])*work.d_inv[505];
  work.L[939] = (work.KKT[1382]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465]-work.L[935]*work.v[473]-work.L[936]*work.v[481]-work.L[937]*work.v[489]-work.L[938]*work.v[497])*work.d_inv[505];
  work.L[981] = (work.KKT[1383]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473]-work.L[978]*work.v[481]-work.L[979]*work.v[489]-work.L[980]*work.v[497])*work.d_inv[505];
  work.L[1024] = (work.KKT[1384]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481]-work.L[1022]*work.v[489]-work.L[1023]*work.v[497])*work.d_inv[505];
  work.L[1068] = (work.KKT[1385]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489]-work.L[1067]*work.v[497])*work.d_inv[505];
  work.L[1113] = (work.KKT[1386]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497])*work.d_inv[505];
  work.L[1159] = (work.KKT[1387]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497])*work.d_inv[505];
  work.L[1188] = (work.KKT[1388]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497])*work.d_inv[505];
  work.v[22] = work.L[859]*work.d[22];
  work.v[194] = work.L[860]*work.d[194];
  work.v[195] = work.L[861]*work.d[195];
  work.v[506] = work.KKT[1389]-work.L[859]*work.v[22]-work.L[860]*work.v[194]-work.L[861]*work.v[195];
  work.d[506] = work.v[506];

  if (work.d[506] > 0)
    work.d[506] = -settings.kkt_reg;
  else
    work.d[506] -= settings.kkt_reg;

  work.d_inv[506] = 1/work.d[506];

  work.L[866] = (work.KKT[1390])*work.d_inv[506];
  work.L[870] = (work.KKT[1391])*work.d_inv[506];
  work.v[142] = work.L[862]*work.d[142];
  work.v[507] = work.KKT[1392]-work.L[862]*work.v[142];
  work.d[507] = work.v[507];

  if (work.d[507] > 0)
    work.d[507] = -settings.kkt_reg;
  else
    work.d[507] -= settings.kkt_reg;

  work.d_inv[507] = 1/work.d[507];

  work.L[867] = (work.KKT[1393])*work.d_inv[507];
  work.L[871] = (work.KKT[1394])*work.d_inv[507];
  work.v[322] = work.L[863]*work.d[322];
  work.v[508] = 0-work.L[863]*work.v[322];
  work.d[508] = work.v[508];

  if (work.d[508] > 0)
    work.d[508] = -settings.kkt_reg;
  else
    work.d[508] -= settings.kkt_reg;

  work.d_inv[508] = 1/work.d[508];

  work.L[868] = (work.KKT[1395])*work.d_inv[508];
  work.L[872] = (work.KKT[1396])*work.d_inv[508];
  work.v[509] = 0;
  work.d[509] = work.v[509];

  if (work.d[509] > 0)
    work.d[509] = -settings.kkt_reg;
  else
    work.d[509] -= settings.kkt_reg;

  work.d_inv[509] = 1/work.d[509];

  work.L[869] = (work.KKT[1397])*work.d_inv[509];
  work.L[873] = (work.KKT[1398])*work.d_inv[509];
  work.v[277] = work.L[864]*work.d[277];
  work.v[278] = work.L[865]*work.d[278];
  work.v[506] = work.L[866]*work.d[506];
  work.v[507] = work.L[867]*work.d[507];
  work.v[508] = work.L[868]*work.d[508];
  work.v[509] = work.L[869]*work.d[509];
  work.v[510] = work.KKT[1399]-work.L[864]*work.v[277]-work.L[865]*work.v[278]-work.L[866]*work.v[506]-work.L[867]*work.v[507]-work.L[868]*work.v[508]-work.L[869]*work.v[509];
  work.d[510] = work.v[510];

  if (work.d[510] < 0)
    work.d[510] = settings.kkt_reg;
  else
    work.d[510] += settings.kkt_reg;
  work.d_inv[510] = 1/work.d[510];

  work.L[874] = (-work.L[870]*work.v[506]-work.L[871]*work.v[507]-work.L[872]*work.v[508]-work.L[873]*work.v[509])*work.d_inv[510];
  work.L[875] = (work.KKT[1400])*work.d_inv[510];
  work.v[506] = work.L[870]*work.d[506];
  work.v[507] = work.L[871]*work.d[507];
  work.v[508] = work.L[872]*work.d[508];
  work.v[509] = work.L[873]*work.d[509];
  work.v[510] = work.L[874]*work.d[510];
  work.v[511] = work.KKT[1401]-work.L[870]*work.v[506]-work.L[871]*work.v[507]-work.L[872]*work.v[508]-work.L[873]*work.v[509]-work.L[874]*work.v[510];
  work.d[511] = work.v[511];

  if (work.d[511] < 0)
    work.d[511] = settings.kkt_reg;
  else
    work.d[511] += settings.kkt_reg;
  work.d_inv[511] = 1/work.d[511];

  work.L[876] = (work.KKT[1402]-work.L[875]*work.v[510])*work.d_inv[511];
  work.v[510] = work.L[875]*work.d[510];
  work.v[511] = work.L[876]*work.d[511];
  work.v[512] = 0-work.L[875]*work.v[510]-work.L[876]*work.v[511];
  work.d[512] = work.v[512];

  if (work.d[512] > 0)
    work.d[512] = -settings.kkt_reg;
  else
    work.d[512] -= settings.kkt_reg;

  work.d_inv[512] = 1/work.d[512];

  work.L[899] = (work.KKT[1403])*work.d_inv[512];
  work.v[337] = work.L[877]*work.d[337];
  work.v[345] = work.L[878]*work.d[345];
  work.v[353] = work.L[879]*work.d[353];
  work.v[361] = work.L[880]*work.d[361];
  work.v[369] = work.L[881]*work.d[369];
  work.v[377] = work.L[882]*work.d[377];
  work.v[385] = work.L[883]*work.d[385];
  work.v[393] = work.L[884]*work.d[393];
  work.v[401] = work.L[885]*work.d[401];
  work.v[409] = work.L[886]*work.d[409];
  work.v[417] = work.L[887]*work.d[417];
  work.v[425] = work.L[888]*work.d[425];
  work.v[433] = work.L[889]*work.d[433];
  work.v[441] = work.L[890]*work.d[441];
  work.v[449] = work.L[891]*work.d[449];
  work.v[457] = work.L[892]*work.d[457];
  work.v[465] = work.L[893]*work.d[465];
  work.v[473] = work.L[894]*work.d[473];
  work.v[481] = work.L[895]*work.d[481];
  work.v[489] = work.L[896]*work.d[489];
  work.v[497] = work.L[897]*work.d[497];
  work.v[505] = work.L[898]*work.d[505];
  work.v[512] = work.L[899]*work.d[512];
  work.v[513] = work.KKT[1404]-work.L[877]*work.v[337]-work.L[878]*work.v[345]-work.L[879]*work.v[353]-work.L[880]*work.v[361]-work.L[881]*work.v[369]-work.L[882]*work.v[377]-work.L[883]*work.v[385]-work.L[884]*work.v[393]-work.L[885]*work.v[401]-work.L[886]*work.v[409]-work.L[887]*work.v[417]-work.L[888]*work.v[425]-work.L[889]*work.v[433]-work.L[890]*work.v[441]-work.L[891]*work.v[449]-work.L[892]*work.v[457]-work.L[893]*work.v[465]-work.L[894]*work.v[473]-work.L[895]*work.v[481]-work.L[896]*work.v[489]-work.L[897]*work.v[497]-work.L[898]*work.v[505]-work.L[899]*work.v[512];
  work.d[513] = work.v[513];

  if (work.d[513] < 0)
    work.d[513] = settings.kkt_reg;
  else
    work.d[513] += settings.kkt_reg;
  work.d_inv[513] = 1/work.d[513];

  work.L[940] = (work.KKT[1405]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465]-work.L[935]*work.v[473]-work.L[936]*work.v[481]-work.L[937]*work.v[489]-work.L[938]*work.v[497]-work.L[939]*work.v[505])*work.d_inv[513];
  work.L[982] = (work.KKT[1406]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473]-work.L[978]*work.v[481]-work.L[979]*work.v[489]-work.L[980]*work.v[497]-work.L[981]*work.v[505])*work.d_inv[513];
  work.L[1025] = (work.KKT[1407]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481]-work.L[1022]*work.v[489]-work.L[1023]*work.v[497]-work.L[1024]*work.v[505])*work.d_inv[513];
  work.L[1069] = (work.KKT[1408]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489]-work.L[1067]*work.v[497]-work.L[1068]*work.v[505])*work.d_inv[513];
  work.L[1114] = (work.KKT[1409]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497]-work.L[1113]*work.v[505])*work.d_inv[513];
  work.L[1160] = (work.KKT[1410]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505])*work.d_inv[513];
  work.L[1189] = (work.KKT[1411]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505])*work.d_inv[513];
  work.v[23] = work.L[900]*work.d[23];
  work.v[196] = work.L[901]*work.d[196];
  work.v[197] = work.L[902]*work.d[197];
  work.v[514] = work.KKT[1412]-work.L[900]*work.v[23]-work.L[901]*work.v[196]-work.L[902]*work.v[197];
  work.d[514] = work.v[514];

  if (work.d[514] > 0)
    work.d[514] = -settings.kkt_reg;
  else
    work.d[514] -= settings.kkt_reg;

  work.d_inv[514] = 1/work.d[514];

  work.L[907] = (work.KKT[1413])*work.d_inv[514];
  work.L[911] = (work.KKT[1414])*work.d_inv[514];
  work.v[143] = work.L[903]*work.d[143];
  work.v[515] = work.KKT[1415]-work.L[903]*work.v[143];
  work.d[515] = work.v[515];

  if (work.d[515] > 0)
    work.d[515] = -settings.kkt_reg;
  else
    work.d[515] -= settings.kkt_reg;

  work.d_inv[515] = 1/work.d[515];

  work.L[908] = (work.KKT[1416])*work.d_inv[515];
  work.L[912] = (work.KKT[1417])*work.d_inv[515];
  work.v[323] = work.L[904]*work.d[323];
  work.v[516] = 0-work.L[904]*work.v[323];
  work.d[516] = work.v[516];

  if (work.d[516] > 0)
    work.d[516] = -settings.kkt_reg;
  else
    work.d[516] -= settings.kkt_reg;

  work.d_inv[516] = 1/work.d[516];

  work.L[909] = (work.KKT[1418])*work.d_inv[516];
  work.L[913] = (work.KKT[1419])*work.d_inv[516];
  work.v[517] = 0;
  work.d[517] = work.v[517];

  if (work.d[517] > 0)
    work.d[517] = -settings.kkt_reg;
  else
    work.d[517] -= settings.kkt_reg;

  work.d_inv[517] = 1/work.d[517];

  work.L[910] = (work.KKT[1420])*work.d_inv[517];
  work.L[914] = (work.KKT[1421])*work.d_inv[517];
  work.v[280] = work.L[905]*work.d[280];
  work.v[281] = work.L[906]*work.d[281];
  work.v[514] = work.L[907]*work.d[514];
  work.v[515] = work.L[908]*work.d[515];
  work.v[516] = work.L[909]*work.d[516];
  work.v[517] = work.L[910]*work.d[517];
  work.v[518] = work.KKT[1422]-work.L[905]*work.v[280]-work.L[906]*work.v[281]-work.L[907]*work.v[514]-work.L[908]*work.v[515]-work.L[909]*work.v[516]-work.L[910]*work.v[517];
  work.d[518] = work.v[518];

  if (work.d[518] < 0)
    work.d[518] = settings.kkt_reg;
  else
    work.d[518] += settings.kkt_reg;
  work.d_inv[518] = 1/work.d[518];

  work.L[915] = (-work.L[911]*work.v[514]-work.L[912]*work.v[515]-work.L[913]*work.v[516]-work.L[914]*work.v[517])*work.d_inv[518];
  work.L[916] = (work.KKT[1423])*work.d_inv[518];
  work.v[514] = work.L[911]*work.d[514];
  work.v[515] = work.L[912]*work.d[515];
  work.v[516] = work.L[913]*work.d[516];
  work.v[517] = work.L[914]*work.d[517];
  work.v[518] = work.L[915]*work.d[518];
  work.v[519] = work.KKT[1424]-work.L[911]*work.v[514]-work.L[912]*work.v[515]-work.L[913]*work.v[516]-work.L[914]*work.v[517]-work.L[915]*work.v[518];
  work.d[519] = work.v[519];

  if (work.d[519] < 0)
    work.d[519] = settings.kkt_reg;
  else
    work.d[519] += settings.kkt_reg;
  work.d_inv[519] = 1/work.d[519];

  work.L[917] = (work.KKT[1425]-work.L[916]*work.v[518])*work.d_inv[519];
  work.v[518] = work.L[916]*work.d[518];
  work.v[519] = work.L[917]*work.d[519];
  work.v[520] = 0-work.L[916]*work.v[518]-work.L[917]*work.v[519];
  work.d[520] = work.v[520];

  if (work.d[520] > 0)
    work.d[520] = -settings.kkt_reg;
  else
    work.d[520] -= settings.kkt_reg;

  work.d_inv[520] = 1/work.d[520];

  work.L[941] = (work.KKT[1426])*work.d_inv[520];
  work.v[337] = work.L[918]*work.d[337];
  work.v[345] = work.L[919]*work.d[345];
  work.v[353] = work.L[920]*work.d[353];
  work.v[361] = work.L[921]*work.d[361];
  work.v[369] = work.L[922]*work.d[369];
  work.v[377] = work.L[923]*work.d[377];
  work.v[385] = work.L[924]*work.d[385];
  work.v[393] = work.L[925]*work.d[393];
  work.v[401] = work.L[926]*work.d[401];
  work.v[409] = work.L[927]*work.d[409];
  work.v[417] = work.L[928]*work.d[417];
  work.v[425] = work.L[929]*work.d[425];
  work.v[433] = work.L[930]*work.d[433];
  work.v[441] = work.L[931]*work.d[441];
  work.v[449] = work.L[932]*work.d[449];
  work.v[457] = work.L[933]*work.d[457];
  work.v[465] = work.L[934]*work.d[465];
  work.v[473] = work.L[935]*work.d[473];
  work.v[481] = work.L[936]*work.d[481];
  work.v[489] = work.L[937]*work.d[489];
  work.v[497] = work.L[938]*work.d[497];
  work.v[505] = work.L[939]*work.d[505];
  work.v[513] = work.L[940]*work.d[513];
  work.v[520] = work.L[941]*work.d[520];
  work.v[521] = work.KKT[1427]-work.L[918]*work.v[337]-work.L[919]*work.v[345]-work.L[920]*work.v[353]-work.L[921]*work.v[361]-work.L[922]*work.v[369]-work.L[923]*work.v[377]-work.L[924]*work.v[385]-work.L[925]*work.v[393]-work.L[926]*work.v[401]-work.L[927]*work.v[409]-work.L[928]*work.v[417]-work.L[929]*work.v[425]-work.L[930]*work.v[433]-work.L[931]*work.v[441]-work.L[932]*work.v[449]-work.L[933]*work.v[457]-work.L[934]*work.v[465]-work.L[935]*work.v[473]-work.L[936]*work.v[481]-work.L[937]*work.v[489]-work.L[938]*work.v[497]-work.L[939]*work.v[505]-work.L[940]*work.v[513]-work.L[941]*work.v[520];
  work.d[521] = work.v[521];

  if (work.d[521] < 0)
    work.d[521] = settings.kkt_reg;
  else
    work.d[521] += settings.kkt_reg;
  work.d_inv[521] = 1/work.d[521];

  work.L[983] = (work.KKT[1428]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473]-work.L[978]*work.v[481]-work.L[979]*work.v[489]-work.L[980]*work.v[497]-work.L[981]*work.v[505]-work.L[982]*work.v[513])*work.d_inv[521];
  work.L[1026] = (work.KKT[1429]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481]-work.L[1022]*work.v[489]-work.L[1023]*work.v[497]-work.L[1024]*work.v[505]-work.L[1025]*work.v[513])*work.d_inv[521];
  work.L[1070] = (work.KKT[1430]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489]-work.L[1067]*work.v[497]-work.L[1068]*work.v[505]-work.L[1069]*work.v[513])*work.d_inv[521];
  work.L[1115] = (work.KKT[1431]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497]-work.L[1113]*work.v[505]-work.L[1114]*work.v[513])*work.d_inv[521];
  work.L[1161] = (work.KKT[1432]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505]-work.L[1160]*work.v[513])*work.d_inv[521];
  work.L[1190] = (work.KKT[1433]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513])*work.d_inv[521];
  work.v[24] = work.L[942]*work.d[24];
  work.v[198] = work.L[943]*work.d[198];
  work.v[199] = work.L[944]*work.d[199];
  work.v[522] = work.KKT[1434]-work.L[942]*work.v[24]-work.L[943]*work.v[198]-work.L[944]*work.v[199];
  work.d[522] = work.v[522];

  if (work.d[522] > 0)
    work.d[522] = -settings.kkt_reg;
  else
    work.d[522] -= settings.kkt_reg;

  work.d_inv[522] = 1/work.d[522];

  work.L[949] = (work.KKT[1435])*work.d_inv[522];
  work.L[953] = (work.KKT[1436])*work.d_inv[522];
  work.v[144] = work.L[945]*work.d[144];
  work.v[523] = work.KKT[1437]-work.L[945]*work.v[144];
  work.d[523] = work.v[523];

  if (work.d[523] > 0)
    work.d[523] = -settings.kkt_reg;
  else
    work.d[523] -= settings.kkt_reg;

  work.d_inv[523] = 1/work.d[523];

  work.L[950] = (work.KKT[1438])*work.d_inv[523];
  work.L[954] = (work.KKT[1439])*work.d_inv[523];
  work.v[324] = work.L[946]*work.d[324];
  work.v[524] = 0-work.L[946]*work.v[324];
  work.d[524] = work.v[524];

  if (work.d[524] > 0)
    work.d[524] = -settings.kkt_reg;
  else
    work.d[524] -= settings.kkt_reg;

  work.d_inv[524] = 1/work.d[524];

  work.L[951] = (work.KKT[1440])*work.d_inv[524];
  work.L[955] = (work.KKT[1441])*work.d_inv[524];
  work.v[525] = 0;
  work.d[525] = work.v[525];

  if (work.d[525] > 0)
    work.d[525] = -settings.kkt_reg;
  else
    work.d[525] -= settings.kkt_reg;

  work.d_inv[525] = 1/work.d[525];

  work.L[952] = (work.KKT[1442])*work.d_inv[525];
  work.L[956] = (work.KKT[1443])*work.d_inv[525];
  work.v[283] = work.L[947]*work.d[283];
  work.v[284] = work.L[948]*work.d[284];
  work.v[522] = work.L[949]*work.d[522];
  work.v[523] = work.L[950]*work.d[523];
  work.v[524] = work.L[951]*work.d[524];
  work.v[525] = work.L[952]*work.d[525];
  work.v[526] = work.KKT[1444]-work.L[947]*work.v[283]-work.L[948]*work.v[284]-work.L[949]*work.v[522]-work.L[950]*work.v[523]-work.L[951]*work.v[524]-work.L[952]*work.v[525];
  work.d[526] = work.v[526];

  if (work.d[526] < 0)
    work.d[526] = settings.kkt_reg;
  else
    work.d[526] += settings.kkt_reg;
  work.d_inv[526] = 1/work.d[526];

  work.L[957] = (-work.L[953]*work.v[522]-work.L[954]*work.v[523]-work.L[955]*work.v[524]-work.L[956]*work.v[525])*work.d_inv[526];
  work.L[958] = (work.KKT[1445])*work.d_inv[526];
  work.v[522] = work.L[953]*work.d[522];
  work.v[523] = work.L[954]*work.d[523];
  work.v[524] = work.L[955]*work.d[524];
  work.v[525] = work.L[956]*work.d[525];
  work.v[526] = work.L[957]*work.d[526];
  work.v[527] = work.KKT[1446]-work.L[953]*work.v[522]-work.L[954]*work.v[523]-work.L[955]*work.v[524]-work.L[956]*work.v[525]-work.L[957]*work.v[526];
  work.d[527] = work.v[527];

  if (work.d[527] < 0)
    work.d[527] = settings.kkt_reg;
  else
    work.d[527] += settings.kkt_reg;
  work.d_inv[527] = 1/work.d[527];

  work.L[959] = (work.KKT[1447]-work.L[958]*work.v[526])*work.d_inv[527];
  work.v[526] = work.L[958]*work.d[526];
  work.v[527] = work.L[959]*work.d[527];
  work.v[528] = 0-work.L[958]*work.v[526]-work.L[959]*work.v[527];
  work.d[528] = work.v[528];

  if (work.d[528] > 0)
    work.d[528] = -settings.kkt_reg;
  else
    work.d[528] -= settings.kkt_reg;

  work.d_inv[528] = 1/work.d[528];

  work.L[984] = (work.KKT[1448])*work.d_inv[528];
  work.v[337] = work.L[960]*work.d[337];
  work.v[345] = work.L[961]*work.d[345];
  work.v[353] = work.L[962]*work.d[353];
  work.v[361] = work.L[963]*work.d[361];
  work.v[369] = work.L[964]*work.d[369];
  work.v[377] = work.L[965]*work.d[377];
  work.v[385] = work.L[966]*work.d[385];
  work.v[393] = work.L[967]*work.d[393];
  work.v[401] = work.L[968]*work.d[401];
  work.v[409] = work.L[969]*work.d[409];
  work.v[417] = work.L[970]*work.d[417];
  work.v[425] = work.L[971]*work.d[425];
  work.v[433] = work.L[972]*work.d[433];
  work.v[441] = work.L[973]*work.d[441];
  work.v[449] = work.L[974]*work.d[449];
  work.v[457] = work.L[975]*work.d[457];
  work.v[465] = work.L[976]*work.d[465];
  work.v[473] = work.L[977]*work.d[473];
  work.v[481] = work.L[978]*work.d[481];
  work.v[489] = work.L[979]*work.d[489];
  work.v[497] = work.L[980]*work.d[497];
  work.v[505] = work.L[981]*work.d[505];
  work.v[513] = work.L[982]*work.d[513];
  work.v[521] = work.L[983]*work.d[521];
  work.v[528] = work.L[984]*work.d[528];
  work.v[529] = work.KKT[1449]-work.L[960]*work.v[337]-work.L[961]*work.v[345]-work.L[962]*work.v[353]-work.L[963]*work.v[361]-work.L[964]*work.v[369]-work.L[965]*work.v[377]-work.L[966]*work.v[385]-work.L[967]*work.v[393]-work.L[968]*work.v[401]-work.L[969]*work.v[409]-work.L[970]*work.v[417]-work.L[971]*work.v[425]-work.L[972]*work.v[433]-work.L[973]*work.v[441]-work.L[974]*work.v[449]-work.L[975]*work.v[457]-work.L[976]*work.v[465]-work.L[977]*work.v[473]-work.L[978]*work.v[481]-work.L[979]*work.v[489]-work.L[980]*work.v[497]-work.L[981]*work.v[505]-work.L[982]*work.v[513]-work.L[983]*work.v[521]-work.L[984]*work.v[528];
  work.d[529] = work.v[529];

  if (work.d[529] < 0)
    work.d[529] = settings.kkt_reg;
  else
    work.d[529] += settings.kkt_reg;
  work.d_inv[529] = 1/work.d[529];

  work.L[1027] = (work.KKT[1450]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481]-work.L[1022]*work.v[489]-work.L[1023]*work.v[497]-work.L[1024]*work.v[505]-work.L[1025]*work.v[513]-work.L[1026]*work.v[521])*work.d_inv[529];
  work.L[1071] = (work.KKT[1451]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489]-work.L[1067]*work.v[497]-work.L[1068]*work.v[505]-work.L[1069]*work.v[513]-work.L[1070]*work.v[521])*work.d_inv[529];
  work.L[1116] = (work.KKT[1452]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497]-work.L[1113]*work.v[505]-work.L[1114]*work.v[513]-work.L[1115]*work.v[521])*work.d_inv[529];
  work.L[1162] = (work.KKT[1453]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505]-work.L[1160]*work.v[513]-work.L[1161]*work.v[521])*work.d_inv[529];
  work.L[1191] = (work.KKT[1454]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513]-work.L[1190]*work.v[521])*work.d_inv[529];
  work.v[25] = work.L[985]*work.d[25];
  work.v[200] = work.L[986]*work.d[200];
  work.v[201] = work.L[987]*work.d[201];
  work.v[530] = work.KKT[1455]-work.L[985]*work.v[25]-work.L[986]*work.v[200]-work.L[987]*work.v[201];
  work.d[530] = work.v[530];

  if (work.d[530] > 0)
    work.d[530] = -settings.kkt_reg;
  else
    work.d[530] -= settings.kkt_reg;

  work.d_inv[530] = 1/work.d[530];

  work.L[992] = (work.KKT[1456])*work.d_inv[530];
  work.L[996] = (work.KKT[1457])*work.d_inv[530];
  work.v[145] = work.L[988]*work.d[145];
  work.v[531] = work.KKT[1458]-work.L[988]*work.v[145];
  work.d[531] = work.v[531];

  if (work.d[531] > 0)
    work.d[531] = -settings.kkt_reg;
  else
    work.d[531] -= settings.kkt_reg;

  work.d_inv[531] = 1/work.d[531];

  work.L[993] = (work.KKT[1459])*work.d_inv[531];
  work.L[997] = (work.KKT[1460])*work.d_inv[531];
  work.v[325] = work.L[989]*work.d[325];
  work.v[532] = 0-work.L[989]*work.v[325];
  work.d[532] = work.v[532];

  if (work.d[532] > 0)
    work.d[532] = -settings.kkt_reg;
  else
    work.d[532] -= settings.kkt_reg;

  work.d_inv[532] = 1/work.d[532];

  work.L[994] = (work.KKT[1461])*work.d_inv[532];
  work.L[998] = (work.KKT[1462])*work.d_inv[532];
  work.v[533] = 0;
  work.d[533] = work.v[533];

  if (work.d[533] > 0)
    work.d[533] = -settings.kkt_reg;
  else
    work.d[533] -= settings.kkt_reg;

  work.d_inv[533] = 1/work.d[533];

  work.L[995] = (work.KKT[1463])*work.d_inv[533];
  work.L[999] = (work.KKT[1464])*work.d_inv[533];
  work.v[286] = work.L[990]*work.d[286];
  work.v[287] = work.L[991]*work.d[287];
  work.v[530] = work.L[992]*work.d[530];
  work.v[531] = work.L[993]*work.d[531];
  work.v[532] = work.L[994]*work.d[532];
  work.v[533] = work.L[995]*work.d[533];
  work.v[534] = work.KKT[1465]-work.L[990]*work.v[286]-work.L[991]*work.v[287]-work.L[992]*work.v[530]-work.L[993]*work.v[531]-work.L[994]*work.v[532]-work.L[995]*work.v[533];
  work.d[534] = work.v[534];

  if (work.d[534] < 0)
    work.d[534] = settings.kkt_reg;
  else
    work.d[534] += settings.kkt_reg;
  work.d_inv[534] = 1/work.d[534];

  work.L[1000] = (-work.L[996]*work.v[530]-work.L[997]*work.v[531]-work.L[998]*work.v[532]-work.L[999]*work.v[533])*work.d_inv[534];
  work.L[1001] = (work.KKT[1466])*work.d_inv[534];
  work.v[530] = work.L[996]*work.d[530];
  work.v[531] = work.L[997]*work.d[531];
  work.v[532] = work.L[998]*work.d[532];
  work.v[533] = work.L[999]*work.d[533];
  work.v[534] = work.L[1000]*work.d[534];
  work.v[535] = work.KKT[1467]-work.L[996]*work.v[530]-work.L[997]*work.v[531]-work.L[998]*work.v[532]-work.L[999]*work.v[533]-work.L[1000]*work.v[534];
  work.d[535] = work.v[535];

  if (work.d[535] < 0)
    work.d[535] = settings.kkt_reg;
  else
    work.d[535] += settings.kkt_reg;
  work.d_inv[535] = 1/work.d[535];

  work.L[1002] = (work.KKT[1468]-work.L[1001]*work.v[534])*work.d_inv[535];
  work.v[534] = work.L[1001]*work.d[534];
  work.v[535] = work.L[1002]*work.d[535];
  work.v[536] = 0-work.L[1001]*work.v[534]-work.L[1002]*work.v[535];
  work.d[536] = work.v[536];

  if (work.d[536] > 0)
    work.d[536] = -settings.kkt_reg;
  else
    work.d[536] -= settings.kkt_reg;

  work.d_inv[536] = 1/work.d[536];

  work.L[1028] = (work.KKT[1469])*work.d_inv[536];
  work.v[337] = work.L[1003]*work.d[337];
  work.v[345] = work.L[1004]*work.d[345];
  work.v[353] = work.L[1005]*work.d[353];
  work.v[361] = work.L[1006]*work.d[361];
  work.v[369] = work.L[1007]*work.d[369];
  work.v[377] = work.L[1008]*work.d[377];
  work.v[385] = work.L[1009]*work.d[385];
  work.v[393] = work.L[1010]*work.d[393];
  work.v[401] = work.L[1011]*work.d[401];
  work.v[409] = work.L[1012]*work.d[409];
  work.v[417] = work.L[1013]*work.d[417];
  work.v[425] = work.L[1014]*work.d[425];
  work.v[433] = work.L[1015]*work.d[433];
  work.v[441] = work.L[1016]*work.d[441];
  work.v[449] = work.L[1017]*work.d[449];
  work.v[457] = work.L[1018]*work.d[457];
  work.v[465] = work.L[1019]*work.d[465];
  work.v[473] = work.L[1020]*work.d[473];
  work.v[481] = work.L[1021]*work.d[481];
  work.v[489] = work.L[1022]*work.d[489];
  work.v[497] = work.L[1023]*work.d[497];
  work.v[505] = work.L[1024]*work.d[505];
  work.v[513] = work.L[1025]*work.d[513];
  work.v[521] = work.L[1026]*work.d[521];
  work.v[529] = work.L[1027]*work.d[529];
  work.v[536] = work.L[1028]*work.d[536];
  work.v[537] = work.KKT[1470]-work.L[1003]*work.v[337]-work.L[1004]*work.v[345]-work.L[1005]*work.v[353]-work.L[1006]*work.v[361]-work.L[1007]*work.v[369]-work.L[1008]*work.v[377]-work.L[1009]*work.v[385]-work.L[1010]*work.v[393]-work.L[1011]*work.v[401]-work.L[1012]*work.v[409]-work.L[1013]*work.v[417]-work.L[1014]*work.v[425]-work.L[1015]*work.v[433]-work.L[1016]*work.v[441]-work.L[1017]*work.v[449]-work.L[1018]*work.v[457]-work.L[1019]*work.v[465]-work.L[1020]*work.v[473]-work.L[1021]*work.v[481]-work.L[1022]*work.v[489]-work.L[1023]*work.v[497]-work.L[1024]*work.v[505]-work.L[1025]*work.v[513]-work.L[1026]*work.v[521]-work.L[1027]*work.v[529]-work.L[1028]*work.v[536];
  work.d[537] = work.v[537];

  if (work.d[537] < 0)
    work.d[537] = settings.kkt_reg;
  else
    work.d[537] += settings.kkt_reg;
  work.d_inv[537] = 1/work.d[537];

  work.L[1072] = (work.KKT[1471]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489]-work.L[1067]*work.v[497]-work.L[1068]*work.v[505]-work.L[1069]*work.v[513]-work.L[1070]*work.v[521]-work.L[1071]*work.v[529])*work.d_inv[537];
  work.L[1117] = (work.KKT[1472]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497]-work.L[1113]*work.v[505]-work.L[1114]*work.v[513]-work.L[1115]*work.v[521]-work.L[1116]*work.v[529])*work.d_inv[537];
  work.L[1163] = (work.KKT[1473]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505]-work.L[1160]*work.v[513]-work.L[1161]*work.v[521]-work.L[1162]*work.v[529])*work.d_inv[537];
  work.L[1192] = (work.KKT[1474]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513]-work.L[1190]*work.v[521]-work.L[1191]*work.v[529])*work.d_inv[537];
  work.v[26] = work.L[1029]*work.d[26];
  work.v[202] = work.L[1030]*work.d[202];
  work.v[203] = work.L[1031]*work.d[203];
  work.v[538] = work.KKT[1475]-work.L[1029]*work.v[26]-work.L[1030]*work.v[202]-work.L[1031]*work.v[203];
  work.d[538] = work.v[538];

  if (work.d[538] > 0)
    work.d[538] = -settings.kkt_reg;
  else
    work.d[538] -= settings.kkt_reg;

  work.d_inv[538] = 1/work.d[538];

  work.L[1036] = (work.KKT[1476])*work.d_inv[538];
  work.L[1040] = (work.KKT[1477])*work.d_inv[538];
  work.v[146] = work.L[1032]*work.d[146];
  work.v[539] = work.KKT[1478]-work.L[1032]*work.v[146];
  work.d[539] = work.v[539];

  if (work.d[539] > 0)
    work.d[539] = -settings.kkt_reg;
  else
    work.d[539] -= settings.kkt_reg;

  work.d_inv[539] = 1/work.d[539];

  work.L[1037] = (work.KKT[1479])*work.d_inv[539];
  work.L[1041] = (work.KKT[1480])*work.d_inv[539];
  work.v[326] = work.L[1033]*work.d[326];
  work.v[540] = 0-work.L[1033]*work.v[326];
  work.d[540] = work.v[540];

  if (work.d[540] > 0)
    work.d[540] = -settings.kkt_reg;
  else
    work.d[540] -= settings.kkt_reg;

  work.d_inv[540] = 1/work.d[540];

  work.L[1038] = (work.KKT[1481])*work.d_inv[540];
  work.L[1042] = (work.KKT[1482])*work.d_inv[540];
  work.v[541] = 0;
  work.d[541] = work.v[541];

  if (work.d[541] > 0)
    work.d[541] = -settings.kkt_reg;
  else
    work.d[541] -= settings.kkt_reg;

  work.d_inv[541] = 1/work.d[541];

  work.L[1039] = (work.KKT[1483])*work.d_inv[541];
  work.L[1043] = (work.KKT[1484])*work.d_inv[541];
  work.v[289] = work.L[1034]*work.d[289];
  work.v[290] = work.L[1035]*work.d[290];
  work.v[538] = work.L[1036]*work.d[538];
  work.v[539] = work.L[1037]*work.d[539];
  work.v[540] = work.L[1038]*work.d[540];
  work.v[541] = work.L[1039]*work.d[541];
  work.v[542] = work.KKT[1485]-work.L[1034]*work.v[289]-work.L[1035]*work.v[290]-work.L[1036]*work.v[538]-work.L[1037]*work.v[539]-work.L[1038]*work.v[540]-work.L[1039]*work.v[541];
  work.d[542] = work.v[542];

  if (work.d[542] < 0)
    work.d[542] = settings.kkt_reg;
  else
    work.d[542] += settings.kkt_reg;
  work.d_inv[542] = 1/work.d[542];

  work.L[1044] = (-work.L[1040]*work.v[538]-work.L[1041]*work.v[539]-work.L[1042]*work.v[540]-work.L[1043]*work.v[541])*work.d_inv[542];
  work.L[1045] = (work.KKT[1486])*work.d_inv[542];
  work.v[538] = work.L[1040]*work.d[538];
  work.v[539] = work.L[1041]*work.d[539];
  work.v[540] = work.L[1042]*work.d[540];
  work.v[541] = work.L[1043]*work.d[541];
  work.v[542] = work.L[1044]*work.d[542];
  work.v[543] = work.KKT[1487]-work.L[1040]*work.v[538]-work.L[1041]*work.v[539]-work.L[1042]*work.v[540]-work.L[1043]*work.v[541]-work.L[1044]*work.v[542];
  work.d[543] = work.v[543];

  if (work.d[543] < 0)
    work.d[543] = settings.kkt_reg;
  else
    work.d[543] += settings.kkt_reg;
  work.d_inv[543] = 1/work.d[543];

  work.L[1046] = (work.KKT[1488]-work.L[1045]*work.v[542])*work.d_inv[543];
  work.v[542] = work.L[1045]*work.d[542];
  work.v[543] = work.L[1046]*work.d[543];
  work.v[544] = 0-work.L[1045]*work.v[542]-work.L[1046]*work.v[543];
  work.d[544] = work.v[544];

  if (work.d[544] > 0)
    work.d[544] = -settings.kkt_reg;
  else
    work.d[544] -= settings.kkt_reg;

  work.d_inv[544] = 1/work.d[544];

  work.L[1073] = (work.KKT[1489])*work.d_inv[544];
  work.v[337] = work.L[1047]*work.d[337];
  work.v[345] = work.L[1048]*work.d[345];
  work.v[353] = work.L[1049]*work.d[353];
  work.v[361] = work.L[1050]*work.d[361];
  work.v[369] = work.L[1051]*work.d[369];
  work.v[377] = work.L[1052]*work.d[377];
  work.v[385] = work.L[1053]*work.d[385];
  work.v[393] = work.L[1054]*work.d[393];
  work.v[401] = work.L[1055]*work.d[401];
  work.v[409] = work.L[1056]*work.d[409];
  work.v[417] = work.L[1057]*work.d[417];
  work.v[425] = work.L[1058]*work.d[425];
  work.v[433] = work.L[1059]*work.d[433];
  work.v[441] = work.L[1060]*work.d[441];
  work.v[449] = work.L[1061]*work.d[449];
  work.v[457] = work.L[1062]*work.d[457];
  work.v[465] = work.L[1063]*work.d[465];
  work.v[473] = work.L[1064]*work.d[473];
  work.v[481] = work.L[1065]*work.d[481];
  work.v[489] = work.L[1066]*work.d[489];
  work.v[497] = work.L[1067]*work.d[497];
  work.v[505] = work.L[1068]*work.d[505];
  work.v[513] = work.L[1069]*work.d[513];
  work.v[521] = work.L[1070]*work.d[521];
  work.v[529] = work.L[1071]*work.d[529];
  work.v[537] = work.L[1072]*work.d[537];
  work.v[544] = work.L[1073]*work.d[544];
  work.v[545] = work.KKT[1490]-work.L[1047]*work.v[337]-work.L[1048]*work.v[345]-work.L[1049]*work.v[353]-work.L[1050]*work.v[361]-work.L[1051]*work.v[369]-work.L[1052]*work.v[377]-work.L[1053]*work.v[385]-work.L[1054]*work.v[393]-work.L[1055]*work.v[401]-work.L[1056]*work.v[409]-work.L[1057]*work.v[417]-work.L[1058]*work.v[425]-work.L[1059]*work.v[433]-work.L[1060]*work.v[441]-work.L[1061]*work.v[449]-work.L[1062]*work.v[457]-work.L[1063]*work.v[465]-work.L[1064]*work.v[473]-work.L[1065]*work.v[481]-work.L[1066]*work.v[489]-work.L[1067]*work.v[497]-work.L[1068]*work.v[505]-work.L[1069]*work.v[513]-work.L[1070]*work.v[521]-work.L[1071]*work.v[529]-work.L[1072]*work.v[537]-work.L[1073]*work.v[544];
  work.d[545] = work.v[545];

  if (work.d[545] < 0)
    work.d[545] = settings.kkt_reg;
  else
    work.d[545] += settings.kkt_reg;
  work.d_inv[545] = 1/work.d[545];

  work.L[1118] = (work.KKT[1491]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497]-work.L[1113]*work.v[505]-work.L[1114]*work.v[513]-work.L[1115]*work.v[521]-work.L[1116]*work.v[529]-work.L[1117]*work.v[537])*work.d_inv[545];
  work.L[1164] = (work.KKT[1492]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505]-work.L[1160]*work.v[513]-work.L[1161]*work.v[521]-work.L[1162]*work.v[529]-work.L[1163]*work.v[537])*work.d_inv[545];
  work.L[1193] = (work.KKT[1493]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513]-work.L[1190]*work.v[521]-work.L[1191]*work.v[529]-work.L[1192]*work.v[537])*work.d_inv[545];
  work.v[27] = work.L[1074]*work.d[27];
  work.v[204] = work.L[1075]*work.d[204];
  work.v[205] = work.L[1076]*work.d[205];
  work.v[546] = work.KKT[1494]-work.L[1074]*work.v[27]-work.L[1075]*work.v[204]-work.L[1076]*work.v[205];
  work.d[546] = work.v[546];

  if (work.d[546] > 0)
    work.d[546] = -settings.kkt_reg;
  else
    work.d[546] -= settings.kkt_reg;

  work.d_inv[546] = 1/work.d[546];

  work.L[1081] = (work.KKT[1495])*work.d_inv[546];
  work.L[1085] = (work.KKT[1496])*work.d_inv[546];
  work.v[147] = work.L[1077]*work.d[147];
  work.v[547] = work.KKT[1497]-work.L[1077]*work.v[147];
  work.d[547] = work.v[547];

  if (work.d[547] > 0)
    work.d[547] = -settings.kkt_reg;
  else
    work.d[547] -= settings.kkt_reg;

  work.d_inv[547] = 1/work.d[547];

  work.L[1082] = (work.KKT[1498])*work.d_inv[547];
  work.L[1086] = (work.KKT[1499])*work.d_inv[547];
  work.v[327] = work.L[1078]*work.d[327];
  work.v[548] = 0-work.L[1078]*work.v[327];
  work.d[548] = work.v[548];

  if (work.d[548] > 0)
    work.d[548] = -settings.kkt_reg;
  else
    work.d[548] -= settings.kkt_reg;

  work.d_inv[548] = 1/work.d[548];

  work.L[1083] = (work.KKT[1500])*work.d_inv[548];
  work.L[1087] = (work.KKT[1501])*work.d_inv[548];
  work.v[549] = 0;
  work.d[549] = work.v[549];

  if (work.d[549] > 0)
    work.d[549] = -settings.kkt_reg;
  else
    work.d[549] -= settings.kkt_reg;

  work.d_inv[549] = 1/work.d[549];

  work.L[1084] = (work.KKT[1502])*work.d_inv[549];
  work.L[1088] = (work.KKT[1503])*work.d_inv[549];
  work.v[292] = work.L[1079]*work.d[292];
  work.v[293] = work.L[1080]*work.d[293];
  work.v[546] = work.L[1081]*work.d[546];
  work.v[547] = work.L[1082]*work.d[547];
  work.v[548] = work.L[1083]*work.d[548];
  work.v[549] = work.L[1084]*work.d[549];
  work.v[550] = work.KKT[1504]-work.L[1079]*work.v[292]-work.L[1080]*work.v[293]-work.L[1081]*work.v[546]-work.L[1082]*work.v[547]-work.L[1083]*work.v[548]-work.L[1084]*work.v[549];
  work.d[550] = work.v[550];

  if (work.d[550] < 0)
    work.d[550] = settings.kkt_reg;
  else
    work.d[550] += settings.kkt_reg;
  work.d_inv[550] = 1/work.d[550];

  work.L[1089] = (-work.L[1085]*work.v[546]-work.L[1086]*work.v[547]-work.L[1087]*work.v[548]-work.L[1088]*work.v[549])*work.d_inv[550];
  work.L[1090] = (work.KKT[1505])*work.d_inv[550];
  work.v[546] = work.L[1085]*work.d[546];
  work.v[547] = work.L[1086]*work.d[547];
  work.v[548] = work.L[1087]*work.d[548];
  work.v[549] = work.L[1088]*work.d[549];
  work.v[550] = work.L[1089]*work.d[550];
  work.v[551] = work.KKT[1506]-work.L[1085]*work.v[546]-work.L[1086]*work.v[547]-work.L[1087]*work.v[548]-work.L[1088]*work.v[549]-work.L[1089]*work.v[550];
  work.d[551] = work.v[551];

  if (work.d[551] < 0)
    work.d[551] = settings.kkt_reg;
  else
    work.d[551] += settings.kkt_reg;
  work.d_inv[551] = 1/work.d[551];

  work.L[1091] = (work.KKT[1507]-work.L[1090]*work.v[550])*work.d_inv[551];
  work.v[550] = work.L[1090]*work.d[550];
  work.v[551] = work.L[1091]*work.d[551];
  work.v[552] = 0-work.L[1090]*work.v[550]-work.L[1091]*work.v[551];
  work.d[552] = work.v[552];

  if (work.d[552] > 0)
    work.d[552] = -settings.kkt_reg;
  else
    work.d[552] -= settings.kkt_reg;

  work.d_inv[552] = 1/work.d[552];

  work.L[1119] = (work.KKT[1508])*work.d_inv[552];
  work.v[337] = work.L[1092]*work.d[337];
  work.v[345] = work.L[1093]*work.d[345];
  work.v[353] = work.L[1094]*work.d[353];
  work.v[361] = work.L[1095]*work.d[361];
  work.v[369] = work.L[1096]*work.d[369];
  work.v[377] = work.L[1097]*work.d[377];
  work.v[385] = work.L[1098]*work.d[385];
  work.v[393] = work.L[1099]*work.d[393];
  work.v[401] = work.L[1100]*work.d[401];
  work.v[409] = work.L[1101]*work.d[409];
  work.v[417] = work.L[1102]*work.d[417];
  work.v[425] = work.L[1103]*work.d[425];
  work.v[433] = work.L[1104]*work.d[433];
  work.v[441] = work.L[1105]*work.d[441];
  work.v[449] = work.L[1106]*work.d[449];
  work.v[457] = work.L[1107]*work.d[457];
  work.v[465] = work.L[1108]*work.d[465];
  work.v[473] = work.L[1109]*work.d[473];
  work.v[481] = work.L[1110]*work.d[481];
  work.v[489] = work.L[1111]*work.d[489];
  work.v[497] = work.L[1112]*work.d[497];
  work.v[505] = work.L[1113]*work.d[505];
  work.v[513] = work.L[1114]*work.d[513];
  work.v[521] = work.L[1115]*work.d[521];
  work.v[529] = work.L[1116]*work.d[529];
  work.v[537] = work.L[1117]*work.d[537];
  work.v[545] = work.L[1118]*work.d[545];
  work.v[552] = work.L[1119]*work.d[552];
  work.v[553] = work.KKT[1509]-work.L[1092]*work.v[337]-work.L[1093]*work.v[345]-work.L[1094]*work.v[353]-work.L[1095]*work.v[361]-work.L[1096]*work.v[369]-work.L[1097]*work.v[377]-work.L[1098]*work.v[385]-work.L[1099]*work.v[393]-work.L[1100]*work.v[401]-work.L[1101]*work.v[409]-work.L[1102]*work.v[417]-work.L[1103]*work.v[425]-work.L[1104]*work.v[433]-work.L[1105]*work.v[441]-work.L[1106]*work.v[449]-work.L[1107]*work.v[457]-work.L[1108]*work.v[465]-work.L[1109]*work.v[473]-work.L[1110]*work.v[481]-work.L[1111]*work.v[489]-work.L[1112]*work.v[497]-work.L[1113]*work.v[505]-work.L[1114]*work.v[513]-work.L[1115]*work.v[521]-work.L[1116]*work.v[529]-work.L[1117]*work.v[537]-work.L[1118]*work.v[545]-work.L[1119]*work.v[552];
  work.d[553] = work.v[553];

  if (work.d[553] < 0)
    work.d[553] = settings.kkt_reg;
  else
    work.d[553] += settings.kkt_reg;
  work.d_inv[553] = 1/work.d[553];

  work.L[1165] = (work.KKT[1510]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505]-work.L[1160]*work.v[513]-work.L[1161]*work.v[521]-work.L[1162]*work.v[529]-work.L[1163]*work.v[537]-work.L[1164]*work.v[545])*work.d_inv[553];
  work.L[1194] = (work.KKT[1511]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513]-work.L[1190]*work.v[521]-work.L[1191]*work.v[529]-work.L[1192]*work.v[537]-work.L[1193]*work.v[545])*work.d_inv[553];
  work.v[28] = work.L[1120]*work.d[28];
  work.v[206] = work.L[1121]*work.d[206];
  work.v[207] = work.L[1122]*work.d[207];
  work.v[554] = work.KKT[1512]-work.L[1120]*work.v[28]-work.L[1121]*work.v[206]-work.L[1122]*work.v[207];
  work.d[554] = work.v[554];

  if (work.d[554] > 0)
    work.d[554] = -settings.kkt_reg;
  else
    work.d[554] -= settings.kkt_reg;

  work.d_inv[554] = 1/work.d[554];

  work.L[1127] = (work.KKT[1513])*work.d_inv[554];
  work.L[1131] = (work.KKT[1514])*work.d_inv[554];
  work.v[148] = work.L[1123]*work.d[148];
  work.v[555] = work.KKT[1515]-work.L[1123]*work.v[148];
  work.d[555] = work.v[555];

  if (work.d[555] > 0)
    work.d[555] = -settings.kkt_reg;
  else
    work.d[555] -= settings.kkt_reg;

  work.d_inv[555] = 1/work.d[555];

  work.L[1128] = (work.KKT[1516])*work.d_inv[555];
  work.L[1132] = (work.KKT[1517])*work.d_inv[555];
  work.v[328] = work.L[1124]*work.d[328];
  work.v[556] = 0-work.L[1124]*work.v[328];
  work.d[556] = work.v[556];

  if (work.d[556] > 0)
    work.d[556] = -settings.kkt_reg;
  else
    work.d[556] -= settings.kkt_reg;

  work.d_inv[556] = 1/work.d[556];

  work.L[1129] = (work.KKT[1518])*work.d_inv[556];
  work.L[1133] = (work.KKT[1519])*work.d_inv[556];
  work.v[557] = 0;
  work.d[557] = work.v[557];

  if (work.d[557] > 0)
    work.d[557] = -settings.kkt_reg;
  else
    work.d[557] -= settings.kkt_reg;

  work.d_inv[557] = 1/work.d[557];

  work.L[1130] = (work.KKT[1520])*work.d_inv[557];
  work.L[1134] = (work.KKT[1521])*work.d_inv[557];
  work.v[295] = work.L[1125]*work.d[295];
  work.v[296] = work.L[1126]*work.d[296];
  work.v[554] = work.L[1127]*work.d[554];
  work.v[555] = work.L[1128]*work.d[555];
  work.v[556] = work.L[1129]*work.d[556];
  work.v[557] = work.L[1130]*work.d[557];
  work.v[558] = work.KKT[1522]-work.L[1125]*work.v[295]-work.L[1126]*work.v[296]-work.L[1127]*work.v[554]-work.L[1128]*work.v[555]-work.L[1129]*work.v[556]-work.L[1130]*work.v[557];
  work.d[558] = work.v[558];

  if (work.d[558] < 0)
    work.d[558] = settings.kkt_reg;
  else
    work.d[558] += settings.kkt_reg;
  work.d_inv[558] = 1/work.d[558];

  work.L[1135] = (-work.L[1131]*work.v[554]-work.L[1132]*work.v[555]-work.L[1133]*work.v[556]-work.L[1134]*work.v[557])*work.d_inv[558];
  work.L[1136] = (work.KKT[1523])*work.d_inv[558];
  work.v[554] = work.L[1131]*work.d[554];
  work.v[555] = work.L[1132]*work.d[555];
  work.v[556] = work.L[1133]*work.d[556];
  work.v[557] = work.L[1134]*work.d[557];
  work.v[558] = work.L[1135]*work.d[558];
  work.v[559] = work.KKT[1524]-work.L[1131]*work.v[554]-work.L[1132]*work.v[555]-work.L[1133]*work.v[556]-work.L[1134]*work.v[557]-work.L[1135]*work.v[558];
  work.d[559] = work.v[559];

  if (work.d[559] < 0)
    work.d[559] = settings.kkt_reg;
  else
    work.d[559] += settings.kkt_reg;
  work.d_inv[559] = 1/work.d[559];

  work.L[1137] = (work.KKT[1525]-work.L[1136]*work.v[558])*work.d_inv[559];
  work.v[558] = work.L[1136]*work.d[558];
  work.v[559] = work.L[1137]*work.d[559];
  work.v[560] = 0-work.L[1136]*work.v[558]-work.L[1137]*work.v[559];
  work.d[560] = work.v[560];

  if (work.d[560] > 0)
    work.d[560] = -settings.kkt_reg;
  else
    work.d[560] -= settings.kkt_reg;

  work.d_inv[560] = 1/work.d[560];

  work.L[1166] = (work.KKT[1526])*work.d_inv[560];
  work.v[337] = work.L[1138]*work.d[337];
  work.v[345] = work.L[1139]*work.d[345];
  work.v[353] = work.L[1140]*work.d[353];
  work.v[361] = work.L[1141]*work.d[361];
  work.v[369] = work.L[1142]*work.d[369];
  work.v[377] = work.L[1143]*work.d[377];
  work.v[385] = work.L[1144]*work.d[385];
  work.v[393] = work.L[1145]*work.d[393];
  work.v[401] = work.L[1146]*work.d[401];
  work.v[409] = work.L[1147]*work.d[409];
  work.v[417] = work.L[1148]*work.d[417];
  work.v[425] = work.L[1149]*work.d[425];
  work.v[433] = work.L[1150]*work.d[433];
  work.v[441] = work.L[1151]*work.d[441];
  work.v[449] = work.L[1152]*work.d[449];
  work.v[457] = work.L[1153]*work.d[457];
  work.v[465] = work.L[1154]*work.d[465];
  work.v[473] = work.L[1155]*work.d[473];
  work.v[481] = work.L[1156]*work.d[481];
  work.v[489] = work.L[1157]*work.d[489];
  work.v[497] = work.L[1158]*work.d[497];
  work.v[505] = work.L[1159]*work.d[505];
  work.v[513] = work.L[1160]*work.d[513];
  work.v[521] = work.L[1161]*work.d[521];
  work.v[529] = work.L[1162]*work.d[529];
  work.v[537] = work.L[1163]*work.d[537];
  work.v[545] = work.L[1164]*work.d[545];
  work.v[553] = work.L[1165]*work.d[553];
  work.v[560] = work.L[1166]*work.d[560];
  work.v[561] = work.KKT[1527]-work.L[1138]*work.v[337]-work.L[1139]*work.v[345]-work.L[1140]*work.v[353]-work.L[1141]*work.v[361]-work.L[1142]*work.v[369]-work.L[1143]*work.v[377]-work.L[1144]*work.v[385]-work.L[1145]*work.v[393]-work.L[1146]*work.v[401]-work.L[1147]*work.v[409]-work.L[1148]*work.v[417]-work.L[1149]*work.v[425]-work.L[1150]*work.v[433]-work.L[1151]*work.v[441]-work.L[1152]*work.v[449]-work.L[1153]*work.v[457]-work.L[1154]*work.v[465]-work.L[1155]*work.v[473]-work.L[1156]*work.v[481]-work.L[1157]*work.v[489]-work.L[1158]*work.v[497]-work.L[1159]*work.v[505]-work.L[1160]*work.v[513]-work.L[1161]*work.v[521]-work.L[1162]*work.v[529]-work.L[1163]*work.v[537]-work.L[1164]*work.v[545]-work.L[1165]*work.v[553]-work.L[1166]*work.v[560];
  work.d[561] = work.v[561];

  if (work.d[561] < 0)
    work.d[561] = settings.kkt_reg;
  else
    work.d[561] += settings.kkt_reg;
  work.d_inv[561] = 1/work.d[561];

  work.L[1195] = (work.KKT[1528]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513]-work.L[1190]*work.v[521]-work.L[1191]*work.v[529]-work.L[1192]*work.v[537]-work.L[1193]*work.v[545]-work.L[1194]*work.v[553])*work.d_inv[561];
  work.v[337] = work.L[1167]*work.d[337];
  work.v[345] = work.L[1168]*work.d[345];
  work.v[353] = work.L[1169]*work.d[353];
  work.v[361] = work.L[1170]*work.d[361];
  work.v[369] = work.L[1171]*work.d[369];
  work.v[377] = work.L[1172]*work.d[377];
  work.v[385] = work.L[1173]*work.d[385];
  work.v[393] = work.L[1174]*work.d[393];
  work.v[401] = work.L[1175]*work.d[401];
  work.v[409] = work.L[1176]*work.d[409];
  work.v[417] = work.L[1177]*work.d[417];
  work.v[425] = work.L[1178]*work.d[425];
  work.v[433] = work.L[1179]*work.d[433];
  work.v[441] = work.L[1180]*work.d[441];
  work.v[449] = work.L[1181]*work.d[449];
  work.v[457] = work.L[1182]*work.d[457];
  work.v[465] = work.L[1183]*work.d[465];
  work.v[473] = work.L[1184]*work.d[473];
  work.v[481] = work.L[1185]*work.d[481];
  work.v[489] = work.L[1186]*work.d[489];
  work.v[497] = work.L[1187]*work.d[497];
  work.v[505] = work.L[1188]*work.d[505];
  work.v[513] = work.L[1189]*work.d[513];
  work.v[521] = work.L[1190]*work.d[521];
  work.v[529] = work.L[1191]*work.d[529];
  work.v[537] = work.L[1192]*work.d[537];
  work.v[545] = work.L[1193]*work.d[545];
  work.v[553] = work.L[1194]*work.d[553];
  work.v[561] = work.L[1195]*work.d[561];
  work.v[562] = work.KKT[1529]-work.L[1167]*work.v[337]-work.L[1168]*work.v[345]-work.L[1169]*work.v[353]-work.L[1170]*work.v[361]-work.L[1171]*work.v[369]-work.L[1172]*work.v[377]-work.L[1173]*work.v[385]-work.L[1174]*work.v[393]-work.L[1175]*work.v[401]-work.L[1176]*work.v[409]-work.L[1177]*work.v[417]-work.L[1178]*work.v[425]-work.L[1179]*work.v[433]-work.L[1180]*work.v[441]-work.L[1181]*work.v[449]-work.L[1182]*work.v[457]-work.L[1183]*work.v[465]-work.L[1184]*work.v[473]-work.L[1185]*work.v[481]-work.L[1186]*work.v[489]-work.L[1187]*work.v[497]-work.L[1188]*work.v[505]-work.L[1189]*work.v[513]-work.L[1190]*work.v[521]-work.L[1191]*work.v[529]-work.L[1192]*work.v[537]-work.L[1193]*work.v[545]-work.L[1194]*work.v[553]-work.L[1195]*work.v[561];
  work.d[562] = work.v[562];

  if (work.d[562] < 0)
    work.d[562] = settings.kkt_reg;
  else
    work.d[562] += settings.kkt_reg;
  work.d_inv[562] = 1/work.d[562];

  work.L[1200] = (work.KKT[1530])*work.d_inv[562];
  work.v[29] = work.L[1196]*work.d[29];
  work.v[208] = work.L[1197]*work.d[208];
  work.v[209] = work.L[1198]*work.d[209];
  work.v[563] = work.KKT[1531]-work.L[1196]*work.v[29]-work.L[1197]*work.v[208]-work.L[1198]*work.v[209];
  work.d[563] = work.v[563];

  if (work.d[563] > 0)
    work.d[563] = -settings.kkt_reg;
  else
    work.d[563] -= settings.kkt_reg;

  work.d_inv[563] = 1/work.d[563];

  work.L[1204] = (work.KKT[1532])*work.d_inv[563];
  work.L[1209] = (work.KKT[1533])*work.d_inv[563];
  work.v[149] = work.L[1199]*work.d[149];
  work.v[564] = work.KKT[1534]-work.L[1199]*work.v[149];
  work.d[564] = work.v[564];

  if (work.d[564] > 0)
    work.d[564] = -settings.kkt_reg;
  else
    work.d[564] -= settings.kkt_reg;

  work.d_inv[564] = 1/work.d[564];

  work.L[1205] = (work.KKT[1535])*work.d_inv[564];
  work.L[1210] = (work.KKT[1536])*work.d_inv[564];
  work.v[562] = work.L[1200]*work.d[562];
  work.v[565] = 0-work.L[1200]*work.v[562];
  work.d[565] = work.v[565];

  if (work.d[565] > 0)
    work.d[565] = -settings.kkt_reg;
  else
    work.d[565] -= settings.kkt_reg;

  work.d_inv[565] = 1/work.d[565];

  work.L[1206] = (work.KKT[1537])*work.d_inv[565];
  work.L[1211] = (work.KKT[1538])*work.d_inv[565];
  work.v[329] = work.L[1201]*work.d[329];
  work.v[566] = 0-work.L[1201]*work.v[329];
  work.d[566] = work.v[566];

  if (work.d[566] > 0)
    work.d[566] = -settings.kkt_reg;
  else
    work.d[566] -= settings.kkt_reg;

  work.d_inv[566] = 1/work.d[566];

  work.L[1207] = (work.KKT[1539])*work.d_inv[566];
  work.L[1212] = (work.KKT[1540])*work.d_inv[566];
  work.v[567] = 0;
  work.d[567] = work.v[567];

  if (work.d[567] > 0)
    work.d[567] = -settings.kkt_reg;
  else
    work.d[567] -= settings.kkt_reg;

  work.d_inv[567] = 1/work.d[567];

  work.L[1208] = (work.KKT[1541])*work.d_inv[567];
  work.L[1213] = (work.KKT[1542])*work.d_inv[567];
  work.v[298] = work.L[1202]*work.d[298];
  work.v[299] = work.L[1203]*work.d[299];
  work.v[563] = work.L[1204]*work.d[563];
  work.v[564] = work.L[1205]*work.d[564];
  work.v[565] = work.L[1206]*work.d[565];
  work.v[566] = work.L[1207]*work.d[566];
  work.v[567] = work.L[1208]*work.d[567];
  work.v[568] = work.KKT[1543]-work.L[1202]*work.v[298]-work.L[1203]*work.v[299]-work.L[1204]*work.v[563]-work.L[1205]*work.v[564]-work.L[1206]*work.v[565]-work.L[1207]*work.v[566]-work.L[1208]*work.v[567];
  work.d[568] = work.v[568];

  if (work.d[568] < 0)
    work.d[568] = settings.kkt_reg;
  else
    work.d[568] += settings.kkt_reg;
  work.d_inv[568] = 1/work.d[568];

  work.L[1214] = (-work.L[1209]*work.v[563]-work.L[1210]*work.v[564]-work.L[1211]*work.v[565]-work.L[1212]*work.v[566]-work.L[1213]*work.v[567])*work.d_inv[568];
  work.v[563] = work.L[1209]*work.d[563];
  work.v[564] = work.L[1210]*work.d[564];
  work.v[565] = work.L[1211]*work.d[565];
  work.v[566] = work.L[1212]*work.d[566];
  work.v[567] = work.L[1213]*work.d[567];
  work.v[568] = work.L[1214]*work.d[568];
  work.v[569] = work.KKT[1544]-work.L[1209]*work.v[563]-work.L[1210]*work.v[564]-work.L[1211]*work.v[565]-work.L[1212]*work.v[566]-work.L[1213]*work.v[567]-work.L[1214]*work.v[568];
  work.d[569] = work.v[569];

  if (work.d[569] < 0)
    work.d[569] = settings.kkt_reg;
  else
    work.d[569] += settings.kkt_reg;
  work.d_inv[569] = 1/work.d[569];

#ifndef ZERO_LIBRARY_MODE
  if (settings.debug) {
    printf("Squared Frobenius for factorization is %.8g.\n", check_factorization());
  }
#endif
}

double check_factorization(void) {
  /* Returns the squared Frobenius norm of A - L*D*L'. */
  double temp, residual;

  /* Only check the lower triangle. */
  residual = 0;
  temp = work.KKT[645]-1*work.d[337]*1-work.L[228]*work.d[336]*work.L[228];
  residual += temp*temp;

  temp = work.KKT[646]-work.L[247]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[647]-work.L[267]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[648]-work.L[288]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[649]-work.L[310]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[650]-work.L[333]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[651]-work.L[357]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[652]-work.L[382]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[653]-work.L[408]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[654]-work.L[435]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[655]-work.L[463]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[656]-work.L[492]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[657]-work.L[522]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[658]-work.L[553]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[659]-work.L[585]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[660]-work.L[618]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[661]-work.L[652]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[662]-work.L[687]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[663]-work.L[723]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[664]-work.L[760]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[665]-work.L[798]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[666]-work.L[837]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[667]-work.L[877]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[668]-work.L[918]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[669]-work.L[960]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[670]-work.L[1003]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[671]-work.L[1047]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[672]-work.L[1092]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[673]-work.L[1138]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[674]-work.L[1167]*work.d[337]*1;
  residual += temp*temp;

  temp = work.KKT[690]-work.L[247]*work.d[337]*work.L[247]-1*work.d[345]*1-work.L[248]*work.d[344]*work.L[248];
  residual += temp*temp;

  temp = work.KKT[691]-work.L[267]*work.d[337]*work.L[247]-work.L[268]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[692]-work.L[288]*work.d[337]*work.L[247]-work.L[289]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[693]-work.L[310]*work.d[337]*work.L[247]-work.L[311]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[694]-work.L[333]*work.d[337]*work.L[247]-work.L[334]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[695]-work.L[357]*work.d[337]*work.L[247]-work.L[358]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[696]-work.L[382]*work.d[337]*work.L[247]-work.L[383]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[697]-work.L[408]*work.d[337]*work.L[247]-work.L[409]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[698]-work.L[435]*work.d[337]*work.L[247]-work.L[436]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[699]-work.L[463]*work.d[337]*work.L[247]-work.L[464]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[700]-work.L[492]*work.d[337]*work.L[247]-work.L[493]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[701]-work.L[522]*work.d[337]*work.L[247]-work.L[523]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[702]-work.L[553]*work.d[337]*work.L[247]-work.L[554]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[703]-work.L[585]*work.d[337]*work.L[247]-work.L[586]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[704]-work.L[618]*work.d[337]*work.L[247]-work.L[619]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[705]-work.L[652]*work.d[337]*work.L[247]-work.L[653]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[706]-work.L[687]*work.d[337]*work.L[247]-work.L[688]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[707]-work.L[723]*work.d[337]*work.L[247]-work.L[724]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[708]-work.L[760]*work.d[337]*work.L[247]-work.L[761]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[709]-work.L[798]*work.d[337]*work.L[247]-work.L[799]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[710]-work.L[837]*work.d[337]*work.L[247]-work.L[838]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[711]-work.L[877]*work.d[337]*work.L[247]-work.L[878]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[712]-work.L[918]*work.d[337]*work.L[247]-work.L[919]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[713]-work.L[960]*work.d[337]*work.L[247]-work.L[961]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[714]-work.L[1003]*work.d[337]*work.L[247]-work.L[1004]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[715]-work.L[1047]*work.d[337]*work.L[247]-work.L[1048]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[716]-work.L[1092]*work.d[337]*work.L[247]-work.L[1093]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[717]-work.L[1138]*work.d[337]*work.L[247]-work.L[1139]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[718]-work.L[1167]*work.d[337]*work.L[247]-work.L[1168]*work.d[345]*1;
  residual += temp*temp;

  temp = work.KKT[734]-work.L[267]*work.d[337]*work.L[267]-work.L[268]*work.d[345]*work.L[268]-1*work.d[353]*1-work.L[269]*work.d[352]*work.L[269];
  residual += temp*temp;

  temp = work.KKT[735]-work.L[288]*work.d[337]*work.L[267]-work.L[289]*work.d[345]*work.L[268]-work.L[290]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[736]-work.L[310]*work.d[337]*work.L[267]-work.L[311]*work.d[345]*work.L[268]-work.L[312]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[737]-work.L[333]*work.d[337]*work.L[267]-work.L[334]*work.d[345]*work.L[268]-work.L[335]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[738]-work.L[357]*work.d[337]*work.L[267]-work.L[358]*work.d[345]*work.L[268]-work.L[359]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[739]-work.L[382]*work.d[337]*work.L[267]-work.L[383]*work.d[345]*work.L[268]-work.L[384]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[740]-work.L[408]*work.d[337]*work.L[267]-work.L[409]*work.d[345]*work.L[268]-work.L[410]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[741]-work.L[435]*work.d[337]*work.L[267]-work.L[436]*work.d[345]*work.L[268]-work.L[437]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[742]-work.L[463]*work.d[337]*work.L[267]-work.L[464]*work.d[345]*work.L[268]-work.L[465]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[743]-work.L[492]*work.d[337]*work.L[267]-work.L[493]*work.d[345]*work.L[268]-work.L[494]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[744]-work.L[522]*work.d[337]*work.L[267]-work.L[523]*work.d[345]*work.L[268]-work.L[524]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[745]-work.L[553]*work.d[337]*work.L[267]-work.L[554]*work.d[345]*work.L[268]-work.L[555]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[746]-work.L[585]*work.d[337]*work.L[267]-work.L[586]*work.d[345]*work.L[268]-work.L[587]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[747]-work.L[618]*work.d[337]*work.L[267]-work.L[619]*work.d[345]*work.L[268]-work.L[620]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[748]-work.L[652]*work.d[337]*work.L[267]-work.L[653]*work.d[345]*work.L[268]-work.L[654]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[749]-work.L[687]*work.d[337]*work.L[267]-work.L[688]*work.d[345]*work.L[268]-work.L[689]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[750]-work.L[723]*work.d[337]*work.L[267]-work.L[724]*work.d[345]*work.L[268]-work.L[725]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[751]-work.L[760]*work.d[337]*work.L[267]-work.L[761]*work.d[345]*work.L[268]-work.L[762]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[752]-work.L[798]*work.d[337]*work.L[267]-work.L[799]*work.d[345]*work.L[268]-work.L[800]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[753]-work.L[837]*work.d[337]*work.L[267]-work.L[838]*work.d[345]*work.L[268]-work.L[839]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[754]-work.L[877]*work.d[337]*work.L[267]-work.L[878]*work.d[345]*work.L[268]-work.L[879]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[755]-work.L[918]*work.d[337]*work.L[267]-work.L[919]*work.d[345]*work.L[268]-work.L[920]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[756]-work.L[960]*work.d[337]*work.L[267]-work.L[961]*work.d[345]*work.L[268]-work.L[962]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[757]-work.L[1003]*work.d[337]*work.L[267]-work.L[1004]*work.d[345]*work.L[268]-work.L[1005]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[758]-work.L[1047]*work.d[337]*work.L[267]-work.L[1048]*work.d[345]*work.L[268]-work.L[1049]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[759]-work.L[1092]*work.d[337]*work.L[267]-work.L[1093]*work.d[345]*work.L[268]-work.L[1094]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[760]-work.L[1138]*work.d[337]*work.L[267]-work.L[1139]*work.d[345]*work.L[268]-work.L[1140]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[761]-work.L[1167]*work.d[337]*work.L[267]-work.L[1168]*work.d[345]*work.L[268]-work.L[1169]*work.d[353]*1;
  residual += temp*temp;

  temp = work.KKT[777]-work.L[288]*work.d[337]*work.L[288]-work.L[289]*work.d[345]*work.L[289]-work.L[290]*work.d[353]*work.L[290]-1*work.d[361]*1-work.L[291]*work.d[360]*work.L[291];
  residual += temp*temp;

  temp = work.KKT[778]-work.L[310]*work.d[337]*work.L[288]-work.L[311]*work.d[345]*work.L[289]-work.L[312]*work.d[353]*work.L[290]-work.L[313]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[779]-work.L[333]*work.d[337]*work.L[288]-work.L[334]*work.d[345]*work.L[289]-work.L[335]*work.d[353]*work.L[290]-work.L[336]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[780]-work.L[357]*work.d[337]*work.L[288]-work.L[358]*work.d[345]*work.L[289]-work.L[359]*work.d[353]*work.L[290]-work.L[360]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[781]-work.L[382]*work.d[337]*work.L[288]-work.L[383]*work.d[345]*work.L[289]-work.L[384]*work.d[353]*work.L[290]-work.L[385]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[782]-work.L[408]*work.d[337]*work.L[288]-work.L[409]*work.d[345]*work.L[289]-work.L[410]*work.d[353]*work.L[290]-work.L[411]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[783]-work.L[435]*work.d[337]*work.L[288]-work.L[436]*work.d[345]*work.L[289]-work.L[437]*work.d[353]*work.L[290]-work.L[438]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[784]-work.L[463]*work.d[337]*work.L[288]-work.L[464]*work.d[345]*work.L[289]-work.L[465]*work.d[353]*work.L[290]-work.L[466]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[785]-work.L[492]*work.d[337]*work.L[288]-work.L[493]*work.d[345]*work.L[289]-work.L[494]*work.d[353]*work.L[290]-work.L[495]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[786]-work.L[522]*work.d[337]*work.L[288]-work.L[523]*work.d[345]*work.L[289]-work.L[524]*work.d[353]*work.L[290]-work.L[525]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[787]-work.L[553]*work.d[337]*work.L[288]-work.L[554]*work.d[345]*work.L[289]-work.L[555]*work.d[353]*work.L[290]-work.L[556]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[788]-work.L[585]*work.d[337]*work.L[288]-work.L[586]*work.d[345]*work.L[289]-work.L[587]*work.d[353]*work.L[290]-work.L[588]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[789]-work.L[618]*work.d[337]*work.L[288]-work.L[619]*work.d[345]*work.L[289]-work.L[620]*work.d[353]*work.L[290]-work.L[621]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[790]-work.L[652]*work.d[337]*work.L[288]-work.L[653]*work.d[345]*work.L[289]-work.L[654]*work.d[353]*work.L[290]-work.L[655]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[791]-work.L[687]*work.d[337]*work.L[288]-work.L[688]*work.d[345]*work.L[289]-work.L[689]*work.d[353]*work.L[290]-work.L[690]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[792]-work.L[723]*work.d[337]*work.L[288]-work.L[724]*work.d[345]*work.L[289]-work.L[725]*work.d[353]*work.L[290]-work.L[726]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[793]-work.L[760]*work.d[337]*work.L[288]-work.L[761]*work.d[345]*work.L[289]-work.L[762]*work.d[353]*work.L[290]-work.L[763]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[794]-work.L[798]*work.d[337]*work.L[288]-work.L[799]*work.d[345]*work.L[289]-work.L[800]*work.d[353]*work.L[290]-work.L[801]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[795]-work.L[837]*work.d[337]*work.L[288]-work.L[838]*work.d[345]*work.L[289]-work.L[839]*work.d[353]*work.L[290]-work.L[840]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[796]-work.L[877]*work.d[337]*work.L[288]-work.L[878]*work.d[345]*work.L[289]-work.L[879]*work.d[353]*work.L[290]-work.L[880]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[797]-work.L[918]*work.d[337]*work.L[288]-work.L[919]*work.d[345]*work.L[289]-work.L[920]*work.d[353]*work.L[290]-work.L[921]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[798]-work.L[960]*work.d[337]*work.L[288]-work.L[961]*work.d[345]*work.L[289]-work.L[962]*work.d[353]*work.L[290]-work.L[963]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[799]-work.L[1003]*work.d[337]*work.L[288]-work.L[1004]*work.d[345]*work.L[289]-work.L[1005]*work.d[353]*work.L[290]-work.L[1006]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[800]-work.L[1047]*work.d[337]*work.L[288]-work.L[1048]*work.d[345]*work.L[289]-work.L[1049]*work.d[353]*work.L[290]-work.L[1050]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[801]-work.L[1092]*work.d[337]*work.L[288]-work.L[1093]*work.d[345]*work.L[289]-work.L[1094]*work.d[353]*work.L[290]-work.L[1095]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[802]-work.L[1138]*work.d[337]*work.L[288]-work.L[1139]*work.d[345]*work.L[289]-work.L[1140]*work.d[353]*work.L[290]-work.L[1141]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[803]-work.L[1167]*work.d[337]*work.L[288]-work.L[1168]*work.d[345]*work.L[289]-work.L[1169]*work.d[353]*work.L[290]-work.L[1170]*work.d[361]*1;
  residual += temp*temp;

  temp = work.KKT[819]-work.L[310]*work.d[337]*work.L[310]-work.L[311]*work.d[345]*work.L[311]-work.L[312]*work.d[353]*work.L[312]-work.L[313]*work.d[361]*work.L[313]-1*work.d[369]*1-work.L[314]*work.d[368]*work.L[314];
  residual += temp*temp;

  temp = work.KKT[820]-work.L[333]*work.d[337]*work.L[310]-work.L[334]*work.d[345]*work.L[311]-work.L[335]*work.d[353]*work.L[312]-work.L[336]*work.d[361]*work.L[313]-work.L[337]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[821]-work.L[357]*work.d[337]*work.L[310]-work.L[358]*work.d[345]*work.L[311]-work.L[359]*work.d[353]*work.L[312]-work.L[360]*work.d[361]*work.L[313]-work.L[361]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[822]-work.L[382]*work.d[337]*work.L[310]-work.L[383]*work.d[345]*work.L[311]-work.L[384]*work.d[353]*work.L[312]-work.L[385]*work.d[361]*work.L[313]-work.L[386]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[823]-work.L[408]*work.d[337]*work.L[310]-work.L[409]*work.d[345]*work.L[311]-work.L[410]*work.d[353]*work.L[312]-work.L[411]*work.d[361]*work.L[313]-work.L[412]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[824]-work.L[435]*work.d[337]*work.L[310]-work.L[436]*work.d[345]*work.L[311]-work.L[437]*work.d[353]*work.L[312]-work.L[438]*work.d[361]*work.L[313]-work.L[439]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[825]-work.L[463]*work.d[337]*work.L[310]-work.L[464]*work.d[345]*work.L[311]-work.L[465]*work.d[353]*work.L[312]-work.L[466]*work.d[361]*work.L[313]-work.L[467]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[826]-work.L[492]*work.d[337]*work.L[310]-work.L[493]*work.d[345]*work.L[311]-work.L[494]*work.d[353]*work.L[312]-work.L[495]*work.d[361]*work.L[313]-work.L[496]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[827]-work.L[522]*work.d[337]*work.L[310]-work.L[523]*work.d[345]*work.L[311]-work.L[524]*work.d[353]*work.L[312]-work.L[525]*work.d[361]*work.L[313]-work.L[526]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[828]-work.L[553]*work.d[337]*work.L[310]-work.L[554]*work.d[345]*work.L[311]-work.L[555]*work.d[353]*work.L[312]-work.L[556]*work.d[361]*work.L[313]-work.L[557]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[829]-work.L[585]*work.d[337]*work.L[310]-work.L[586]*work.d[345]*work.L[311]-work.L[587]*work.d[353]*work.L[312]-work.L[588]*work.d[361]*work.L[313]-work.L[589]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[830]-work.L[618]*work.d[337]*work.L[310]-work.L[619]*work.d[345]*work.L[311]-work.L[620]*work.d[353]*work.L[312]-work.L[621]*work.d[361]*work.L[313]-work.L[622]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[831]-work.L[652]*work.d[337]*work.L[310]-work.L[653]*work.d[345]*work.L[311]-work.L[654]*work.d[353]*work.L[312]-work.L[655]*work.d[361]*work.L[313]-work.L[656]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[832]-work.L[687]*work.d[337]*work.L[310]-work.L[688]*work.d[345]*work.L[311]-work.L[689]*work.d[353]*work.L[312]-work.L[690]*work.d[361]*work.L[313]-work.L[691]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[833]-work.L[723]*work.d[337]*work.L[310]-work.L[724]*work.d[345]*work.L[311]-work.L[725]*work.d[353]*work.L[312]-work.L[726]*work.d[361]*work.L[313]-work.L[727]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[834]-work.L[760]*work.d[337]*work.L[310]-work.L[761]*work.d[345]*work.L[311]-work.L[762]*work.d[353]*work.L[312]-work.L[763]*work.d[361]*work.L[313]-work.L[764]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[835]-work.L[798]*work.d[337]*work.L[310]-work.L[799]*work.d[345]*work.L[311]-work.L[800]*work.d[353]*work.L[312]-work.L[801]*work.d[361]*work.L[313]-work.L[802]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[836]-work.L[837]*work.d[337]*work.L[310]-work.L[838]*work.d[345]*work.L[311]-work.L[839]*work.d[353]*work.L[312]-work.L[840]*work.d[361]*work.L[313]-work.L[841]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[837]-work.L[877]*work.d[337]*work.L[310]-work.L[878]*work.d[345]*work.L[311]-work.L[879]*work.d[353]*work.L[312]-work.L[880]*work.d[361]*work.L[313]-work.L[881]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[838]-work.L[918]*work.d[337]*work.L[310]-work.L[919]*work.d[345]*work.L[311]-work.L[920]*work.d[353]*work.L[312]-work.L[921]*work.d[361]*work.L[313]-work.L[922]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[839]-work.L[960]*work.d[337]*work.L[310]-work.L[961]*work.d[345]*work.L[311]-work.L[962]*work.d[353]*work.L[312]-work.L[963]*work.d[361]*work.L[313]-work.L[964]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[840]-work.L[1003]*work.d[337]*work.L[310]-work.L[1004]*work.d[345]*work.L[311]-work.L[1005]*work.d[353]*work.L[312]-work.L[1006]*work.d[361]*work.L[313]-work.L[1007]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[841]-work.L[1047]*work.d[337]*work.L[310]-work.L[1048]*work.d[345]*work.L[311]-work.L[1049]*work.d[353]*work.L[312]-work.L[1050]*work.d[361]*work.L[313]-work.L[1051]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[842]-work.L[1092]*work.d[337]*work.L[310]-work.L[1093]*work.d[345]*work.L[311]-work.L[1094]*work.d[353]*work.L[312]-work.L[1095]*work.d[361]*work.L[313]-work.L[1096]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[843]-work.L[1138]*work.d[337]*work.L[310]-work.L[1139]*work.d[345]*work.L[311]-work.L[1140]*work.d[353]*work.L[312]-work.L[1141]*work.d[361]*work.L[313]-work.L[1142]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[844]-work.L[1167]*work.d[337]*work.L[310]-work.L[1168]*work.d[345]*work.L[311]-work.L[1169]*work.d[353]*work.L[312]-work.L[1170]*work.d[361]*work.L[313]-work.L[1171]*work.d[369]*1;
  residual += temp*temp;

  temp = work.KKT[860]-work.L[333]*work.d[337]*work.L[333]-work.L[334]*work.d[345]*work.L[334]-work.L[335]*work.d[353]*work.L[335]-work.L[336]*work.d[361]*work.L[336]-work.L[337]*work.d[369]*work.L[337]-1*work.d[377]*1-work.L[338]*work.d[376]*work.L[338];
  residual += temp*temp;

  temp = work.KKT[861]-work.L[357]*work.d[337]*work.L[333]-work.L[358]*work.d[345]*work.L[334]-work.L[359]*work.d[353]*work.L[335]-work.L[360]*work.d[361]*work.L[336]-work.L[361]*work.d[369]*work.L[337]-work.L[362]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[862]-work.L[382]*work.d[337]*work.L[333]-work.L[383]*work.d[345]*work.L[334]-work.L[384]*work.d[353]*work.L[335]-work.L[385]*work.d[361]*work.L[336]-work.L[386]*work.d[369]*work.L[337]-work.L[387]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[863]-work.L[408]*work.d[337]*work.L[333]-work.L[409]*work.d[345]*work.L[334]-work.L[410]*work.d[353]*work.L[335]-work.L[411]*work.d[361]*work.L[336]-work.L[412]*work.d[369]*work.L[337]-work.L[413]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[864]-work.L[435]*work.d[337]*work.L[333]-work.L[436]*work.d[345]*work.L[334]-work.L[437]*work.d[353]*work.L[335]-work.L[438]*work.d[361]*work.L[336]-work.L[439]*work.d[369]*work.L[337]-work.L[440]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[865]-work.L[463]*work.d[337]*work.L[333]-work.L[464]*work.d[345]*work.L[334]-work.L[465]*work.d[353]*work.L[335]-work.L[466]*work.d[361]*work.L[336]-work.L[467]*work.d[369]*work.L[337]-work.L[468]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[866]-work.L[492]*work.d[337]*work.L[333]-work.L[493]*work.d[345]*work.L[334]-work.L[494]*work.d[353]*work.L[335]-work.L[495]*work.d[361]*work.L[336]-work.L[496]*work.d[369]*work.L[337]-work.L[497]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[867]-work.L[522]*work.d[337]*work.L[333]-work.L[523]*work.d[345]*work.L[334]-work.L[524]*work.d[353]*work.L[335]-work.L[525]*work.d[361]*work.L[336]-work.L[526]*work.d[369]*work.L[337]-work.L[527]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[868]-work.L[553]*work.d[337]*work.L[333]-work.L[554]*work.d[345]*work.L[334]-work.L[555]*work.d[353]*work.L[335]-work.L[556]*work.d[361]*work.L[336]-work.L[557]*work.d[369]*work.L[337]-work.L[558]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[869]-work.L[585]*work.d[337]*work.L[333]-work.L[586]*work.d[345]*work.L[334]-work.L[587]*work.d[353]*work.L[335]-work.L[588]*work.d[361]*work.L[336]-work.L[589]*work.d[369]*work.L[337]-work.L[590]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[870]-work.L[618]*work.d[337]*work.L[333]-work.L[619]*work.d[345]*work.L[334]-work.L[620]*work.d[353]*work.L[335]-work.L[621]*work.d[361]*work.L[336]-work.L[622]*work.d[369]*work.L[337]-work.L[623]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[871]-work.L[652]*work.d[337]*work.L[333]-work.L[653]*work.d[345]*work.L[334]-work.L[654]*work.d[353]*work.L[335]-work.L[655]*work.d[361]*work.L[336]-work.L[656]*work.d[369]*work.L[337]-work.L[657]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[872]-work.L[687]*work.d[337]*work.L[333]-work.L[688]*work.d[345]*work.L[334]-work.L[689]*work.d[353]*work.L[335]-work.L[690]*work.d[361]*work.L[336]-work.L[691]*work.d[369]*work.L[337]-work.L[692]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[873]-work.L[723]*work.d[337]*work.L[333]-work.L[724]*work.d[345]*work.L[334]-work.L[725]*work.d[353]*work.L[335]-work.L[726]*work.d[361]*work.L[336]-work.L[727]*work.d[369]*work.L[337]-work.L[728]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[874]-work.L[760]*work.d[337]*work.L[333]-work.L[761]*work.d[345]*work.L[334]-work.L[762]*work.d[353]*work.L[335]-work.L[763]*work.d[361]*work.L[336]-work.L[764]*work.d[369]*work.L[337]-work.L[765]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[875]-work.L[798]*work.d[337]*work.L[333]-work.L[799]*work.d[345]*work.L[334]-work.L[800]*work.d[353]*work.L[335]-work.L[801]*work.d[361]*work.L[336]-work.L[802]*work.d[369]*work.L[337]-work.L[803]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[876]-work.L[837]*work.d[337]*work.L[333]-work.L[838]*work.d[345]*work.L[334]-work.L[839]*work.d[353]*work.L[335]-work.L[840]*work.d[361]*work.L[336]-work.L[841]*work.d[369]*work.L[337]-work.L[842]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[877]-work.L[877]*work.d[337]*work.L[333]-work.L[878]*work.d[345]*work.L[334]-work.L[879]*work.d[353]*work.L[335]-work.L[880]*work.d[361]*work.L[336]-work.L[881]*work.d[369]*work.L[337]-work.L[882]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[878]-work.L[918]*work.d[337]*work.L[333]-work.L[919]*work.d[345]*work.L[334]-work.L[920]*work.d[353]*work.L[335]-work.L[921]*work.d[361]*work.L[336]-work.L[922]*work.d[369]*work.L[337]-work.L[923]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[879]-work.L[960]*work.d[337]*work.L[333]-work.L[961]*work.d[345]*work.L[334]-work.L[962]*work.d[353]*work.L[335]-work.L[963]*work.d[361]*work.L[336]-work.L[964]*work.d[369]*work.L[337]-work.L[965]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[880]-work.L[1003]*work.d[337]*work.L[333]-work.L[1004]*work.d[345]*work.L[334]-work.L[1005]*work.d[353]*work.L[335]-work.L[1006]*work.d[361]*work.L[336]-work.L[1007]*work.d[369]*work.L[337]-work.L[1008]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[881]-work.L[1047]*work.d[337]*work.L[333]-work.L[1048]*work.d[345]*work.L[334]-work.L[1049]*work.d[353]*work.L[335]-work.L[1050]*work.d[361]*work.L[336]-work.L[1051]*work.d[369]*work.L[337]-work.L[1052]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[882]-work.L[1092]*work.d[337]*work.L[333]-work.L[1093]*work.d[345]*work.L[334]-work.L[1094]*work.d[353]*work.L[335]-work.L[1095]*work.d[361]*work.L[336]-work.L[1096]*work.d[369]*work.L[337]-work.L[1097]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[883]-work.L[1138]*work.d[337]*work.L[333]-work.L[1139]*work.d[345]*work.L[334]-work.L[1140]*work.d[353]*work.L[335]-work.L[1141]*work.d[361]*work.L[336]-work.L[1142]*work.d[369]*work.L[337]-work.L[1143]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[884]-work.L[1167]*work.d[337]*work.L[333]-work.L[1168]*work.d[345]*work.L[334]-work.L[1169]*work.d[353]*work.L[335]-work.L[1170]*work.d[361]*work.L[336]-work.L[1171]*work.d[369]*work.L[337]-work.L[1172]*work.d[377]*1;
  residual += temp*temp;

  temp = work.KKT[900]-work.L[357]*work.d[337]*work.L[357]-work.L[358]*work.d[345]*work.L[358]-work.L[359]*work.d[353]*work.L[359]-work.L[360]*work.d[361]*work.L[360]-work.L[361]*work.d[369]*work.L[361]-work.L[362]*work.d[377]*work.L[362]-1*work.d[385]*1-work.L[363]*work.d[384]*work.L[363];
  residual += temp*temp;

  temp = work.KKT[901]-work.L[382]*work.d[337]*work.L[357]-work.L[383]*work.d[345]*work.L[358]-work.L[384]*work.d[353]*work.L[359]-work.L[385]*work.d[361]*work.L[360]-work.L[386]*work.d[369]*work.L[361]-work.L[387]*work.d[377]*work.L[362]-work.L[388]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[902]-work.L[408]*work.d[337]*work.L[357]-work.L[409]*work.d[345]*work.L[358]-work.L[410]*work.d[353]*work.L[359]-work.L[411]*work.d[361]*work.L[360]-work.L[412]*work.d[369]*work.L[361]-work.L[413]*work.d[377]*work.L[362]-work.L[414]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[903]-work.L[435]*work.d[337]*work.L[357]-work.L[436]*work.d[345]*work.L[358]-work.L[437]*work.d[353]*work.L[359]-work.L[438]*work.d[361]*work.L[360]-work.L[439]*work.d[369]*work.L[361]-work.L[440]*work.d[377]*work.L[362]-work.L[441]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[904]-work.L[463]*work.d[337]*work.L[357]-work.L[464]*work.d[345]*work.L[358]-work.L[465]*work.d[353]*work.L[359]-work.L[466]*work.d[361]*work.L[360]-work.L[467]*work.d[369]*work.L[361]-work.L[468]*work.d[377]*work.L[362]-work.L[469]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[905]-work.L[492]*work.d[337]*work.L[357]-work.L[493]*work.d[345]*work.L[358]-work.L[494]*work.d[353]*work.L[359]-work.L[495]*work.d[361]*work.L[360]-work.L[496]*work.d[369]*work.L[361]-work.L[497]*work.d[377]*work.L[362]-work.L[498]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[906]-work.L[522]*work.d[337]*work.L[357]-work.L[523]*work.d[345]*work.L[358]-work.L[524]*work.d[353]*work.L[359]-work.L[525]*work.d[361]*work.L[360]-work.L[526]*work.d[369]*work.L[361]-work.L[527]*work.d[377]*work.L[362]-work.L[528]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[907]-work.L[553]*work.d[337]*work.L[357]-work.L[554]*work.d[345]*work.L[358]-work.L[555]*work.d[353]*work.L[359]-work.L[556]*work.d[361]*work.L[360]-work.L[557]*work.d[369]*work.L[361]-work.L[558]*work.d[377]*work.L[362]-work.L[559]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[908]-work.L[585]*work.d[337]*work.L[357]-work.L[586]*work.d[345]*work.L[358]-work.L[587]*work.d[353]*work.L[359]-work.L[588]*work.d[361]*work.L[360]-work.L[589]*work.d[369]*work.L[361]-work.L[590]*work.d[377]*work.L[362]-work.L[591]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[909]-work.L[618]*work.d[337]*work.L[357]-work.L[619]*work.d[345]*work.L[358]-work.L[620]*work.d[353]*work.L[359]-work.L[621]*work.d[361]*work.L[360]-work.L[622]*work.d[369]*work.L[361]-work.L[623]*work.d[377]*work.L[362]-work.L[624]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[910]-work.L[652]*work.d[337]*work.L[357]-work.L[653]*work.d[345]*work.L[358]-work.L[654]*work.d[353]*work.L[359]-work.L[655]*work.d[361]*work.L[360]-work.L[656]*work.d[369]*work.L[361]-work.L[657]*work.d[377]*work.L[362]-work.L[658]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[911]-work.L[687]*work.d[337]*work.L[357]-work.L[688]*work.d[345]*work.L[358]-work.L[689]*work.d[353]*work.L[359]-work.L[690]*work.d[361]*work.L[360]-work.L[691]*work.d[369]*work.L[361]-work.L[692]*work.d[377]*work.L[362]-work.L[693]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[912]-work.L[723]*work.d[337]*work.L[357]-work.L[724]*work.d[345]*work.L[358]-work.L[725]*work.d[353]*work.L[359]-work.L[726]*work.d[361]*work.L[360]-work.L[727]*work.d[369]*work.L[361]-work.L[728]*work.d[377]*work.L[362]-work.L[729]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[913]-work.L[760]*work.d[337]*work.L[357]-work.L[761]*work.d[345]*work.L[358]-work.L[762]*work.d[353]*work.L[359]-work.L[763]*work.d[361]*work.L[360]-work.L[764]*work.d[369]*work.L[361]-work.L[765]*work.d[377]*work.L[362]-work.L[766]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[914]-work.L[798]*work.d[337]*work.L[357]-work.L[799]*work.d[345]*work.L[358]-work.L[800]*work.d[353]*work.L[359]-work.L[801]*work.d[361]*work.L[360]-work.L[802]*work.d[369]*work.L[361]-work.L[803]*work.d[377]*work.L[362]-work.L[804]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[915]-work.L[837]*work.d[337]*work.L[357]-work.L[838]*work.d[345]*work.L[358]-work.L[839]*work.d[353]*work.L[359]-work.L[840]*work.d[361]*work.L[360]-work.L[841]*work.d[369]*work.L[361]-work.L[842]*work.d[377]*work.L[362]-work.L[843]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[916]-work.L[877]*work.d[337]*work.L[357]-work.L[878]*work.d[345]*work.L[358]-work.L[879]*work.d[353]*work.L[359]-work.L[880]*work.d[361]*work.L[360]-work.L[881]*work.d[369]*work.L[361]-work.L[882]*work.d[377]*work.L[362]-work.L[883]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[917]-work.L[918]*work.d[337]*work.L[357]-work.L[919]*work.d[345]*work.L[358]-work.L[920]*work.d[353]*work.L[359]-work.L[921]*work.d[361]*work.L[360]-work.L[922]*work.d[369]*work.L[361]-work.L[923]*work.d[377]*work.L[362]-work.L[924]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[918]-work.L[960]*work.d[337]*work.L[357]-work.L[961]*work.d[345]*work.L[358]-work.L[962]*work.d[353]*work.L[359]-work.L[963]*work.d[361]*work.L[360]-work.L[964]*work.d[369]*work.L[361]-work.L[965]*work.d[377]*work.L[362]-work.L[966]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[919]-work.L[1003]*work.d[337]*work.L[357]-work.L[1004]*work.d[345]*work.L[358]-work.L[1005]*work.d[353]*work.L[359]-work.L[1006]*work.d[361]*work.L[360]-work.L[1007]*work.d[369]*work.L[361]-work.L[1008]*work.d[377]*work.L[362]-work.L[1009]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[920]-work.L[1047]*work.d[337]*work.L[357]-work.L[1048]*work.d[345]*work.L[358]-work.L[1049]*work.d[353]*work.L[359]-work.L[1050]*work.d[361]*work.L[360]-work.L[1051]*work.d[369]*work.L[361]-work.L[1052]*work.d[377]*work.L[362]-work.L[1053]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[921]-work.L[1092]*work.d[337]*work.L[357]-work.L[1093]*work.d[345]*work.L[358]-work.L[1094]*work.d[353]*work.L[359]-work.L[1095]*work.d[361]*work.L[360]-work.L[1096]*work.d[369]*work.L[361]-work.L[1097]*work.d[377]*work.L[362]-work.L[1098]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[922]-work.L[1138]*work.d[337]*work.L[357]-work.L[1139]*work.d[345]*work.L[358]-work.L[1140]*work.d[353]*work.L[359]-work.L[1141]*work.d[361]*work.L[360]-work.L[1142]*work.d[369]*work.L[361]-work.L[1143]*work.d[377]*work.L[362]-work.L[1144]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[923]-work.L[1167]*work.d[337]*work.L[357]-work.L[1168]*work.d[345]*work.L[358]-work.L[1169]*work.d[353]*work.L[359]-work.L[1170]*work.d[361]*work.L[360]-work.L[1171]*work.d[369]*work.L[361]-work.L[1172]*work.d[377]*work.L[362]-work.L[1173]*work.d[385]*1;
  residual += temp*temp;

  temp = work.KKT[939]-work.L[382]*work.d[337]*work.L[382]-work.L[383]*work.d[345]*work.L[383]-work.L[384]*work.d[353]*work.L[384]-work.L[385]*work.d[361]*work.L[385]-work.L[386]*work.d[369]*work.L[386]-work.L[387]*work.d[377]*work.L[387]-work.L[388]*work.d[385]*work.L[388]-1*work.d[393]*1-work.L[389]*work.d[392]*work.L[389];
  residual += temp*temp;

  temp = work.KKT[940]-work.L[408]*work.d[337]*work.L[382]-work.L[409]*work.d[345]*work.L[383]-work.L[410]*work.d[353]*work.L[384]-work.L[411]*work.d[361]*work.L[385]-work.L[412]*work.d[369]*work.L[386]-work.L[413]*work.d[377]*work.L[387]-work.L[414]*work.d[385]*work.L[388]-work.L[415]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[941]-work.L[435]*work.d[337]*work.L[382]-work.L[436]*work.d[345]*work.L[383]-work.L[437]*work.d[353]*work.L[384]-work.L[438]*work.d[361]*work.L[385]-work.L[439]*work.d[369]*work.L[386]-work.L[440]*work.d[377]*work.L[387]-work.L[441]*work.d[385]*work.L[388]-work.L[442]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[942]-work.L[463]*work.d[337]*work.L[382]-work.L[464]*work.d[345]*work.L[383]-work.L[465]*work.d[353]*work.L[384]-work.L[466]*work.d[361]*work.L[385]-work.L[467]*work.d[369]*work.L[386]-work.L[468]*work.d[377]*work.L[387]-work.L[469]*work.d[385]*work.L[388]-work.L[470]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[943]-work.L[492]*work.d[337]*work.L[382]-work.L[493]*work.d[345]*work.L[383]-work.L[494]*work.d[353]*work.L[384]-work.L[495]*work.d[361]*work.L[385]-work.L[496]*work.d[369]*work.L[386]-work.L[497]*work.d[377]*work.L[387]-work.L[498]*work.d[385]*work.L[388]-work.L[499]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[944]-work.L[522]*work.d[337]*work.L[382]-work.L[523]*work.d[345]*work.L[383]-work.L[524]*work.d[353]*work.L[384]-work.L[525]*work.d[361]*work.L[385]-work.L[526]*work.d[369]*work.L[386]-work.L[527]*work.d[377]*work.L[387]-work.L[528]*work.d[385]*work.L[388]-work.L[529]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[945]-work.L[553]*work.d[337]*work.L[382]-work.L[554]*work.d[345]*work.L[383]-work.L[555]*work.d[353]*work.L[384]-work.L[556]*work.d[361]*work.L[385]-work.L[557]*work.d[369]*work.L[386]-work.L[558]*work.d[377]*work.L[387]-work.L[559]*work.d[385]*work.L[388]-work.L[560]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[946]-work.L[585]*work.d[337]*work.L[382]-work.L[586]*work.d[345]*work.L[383]-work.L[587]*work.d[353]*work.L[384]-work.L[588]*work.d[361]*work.L[385]-work.L[589]*work.d[369]*work.L[386]-work.L[590]*work.d[377]*work.L[387]-work.L[591]*work.d[385]*work.L[388]-work.L[592]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[947]-work.L[618]*work.d[337]*work.L[382]-work.L[619]*work.d[345]*work.L[383]-work.L[620]*work.d[353]*work.L[384]-work.L[621]*work.d[361]*work.L[385]-work.L[622]*work.d[369]*work.L[386]-work.L[623]*work.d[377]*work.L[387]-work.L[624]*work.d[385]*work.L[388]-work.L[625]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[948]-work.L[652]*work.d[337]*work.L[382]-work.L[653]*work.d[345]*work.L[383]-work.L[654]*work.d[353]*work.L[384]-work.L[655]*work.d[361]*work.L[385]-work.L[656]*work.d[369]*work.L[386]-work.L[657]*work.d[377]*work.L[387]-work.L[658]*work.d[385]*work.L[388]-work.L[659]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[949]-work.L[687]*work.d[337]*work.L[382]-work.L[688]*work.d[345]*work.L[383]-work.L[689]*work.d[353]*work.L[384]-work.L[690]*work.d[361]*work.L[385]-work.L[691]*work.d[369]*work.L[386]-work.L[692]*work.d[377]*work.L[387]-work.L[693]*work.d[385]*work.L[388]-work.L[694]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[950]-work.L[723]*work.d[337]*work.L[382]-work.L[724]*work.d[345]*work.L[383]-work.L[725]*work.d[353]*work.L[384]-work.L[726]*work.d[361]*work.L[385]-work.L[727]*work.d[369]*work.L[386]-work.L[728]*work.d[377]*work.L[387]-work.L[729]*work.d[385]*work.L[388]-work.L[730]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[951]-work.L[760]*work.d[337]*work.L[382]-work.L[761]*work.d[345]*work.L[383]-work.L[762]*work.d[353]*work.L[384]-work.L[763]*work.d[361]*work.L[385]-work.L[764]*work.d[369]*work.L[386]-work.L[765]*work.d[377]*work.L[387]-work.L[766]*work.d[385]*work.L[388]-work.L[767]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[952]-work.L[798]*work.d[337]*work.L[382]-work.L[799]*work.d[345]*work.L[383]-work.L[800]*work.d[353]*work.L[384]-work.L[801]*work.d[361]*work.L[385]-work.L[802]*work.d[369]*work.L[386]-work.L[803]*work.d[377]*work.L[387]-work.L[804]*work.d[385]*work.L[388]-work.L[805]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[953]-work.L[837]*work.d[337]*work.L[382]-work.L[838]*work.d[345]*work.L[383]-work.L[839]*work.d[353]*work.L[384]-work.L[840]*work.d[361]*work.L[385]-work.L[841]*work.d[369]*work.L[386]-work.L[842]*work.d[377]*work.L[387]-work.L[843]*work.d[385]*work.L[388]-work.L[844]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[954]-work.L[877]*work.d[337]*work.L[382]-work.L[878]*work.d[345]*work.L[383]-work.L[879]*work.d[353]*work.L[384]-work.L[880]*work.d[361]*work.L[385]-work.L[881]*work.d[369]*work.L[386]-work.L[882]*work.d[377]*work.L[387]-work.L[883]*work.d[385]*work.L[388]-work.L[884]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[955]-work.L[918]*work.d[337]*work.L[382]-work.L[919]*work.d[345]*work.L[383]-work.L[920]*work.d[353]*work.L[384]-work.L[921]*work.d[361]*work.L[385]-work.L[922]*work.d[369]*work.L[386]-work.L[923]*work.d[377]*work.L[387]-work.L[924]*work.d[385]*work.L[388]-work.L[925]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[956]-work.L[960]*work.d[337]*work.L[382]-work.L[961]*work.d[345]*work.L[383]-work.L[962]*work.d[353]*work.L[384]-work.L[963]*work.d[361]*work.L[385]-work.L[964]*work.d[369]*work.L[386]-work.L[965]*work.d[377]*work.L[387]-work.L[966]*work.d[385]*work.L[388]-work.L[967]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[957]-work.L[1003]*work.d[337]*work.L[382]-work.L[1004]*work.d[345]*work.L[383]-work.L[1005]*work.d[353]*work.L[384]-work.L[1006]*work.d[361]*work.L[385]-work.L[1007]*work.d[369]*work.L[386]-work.L[1008]*work.d[377]*work.L[387]-work.L[1009]*work.d[385]*work.L[388]-work.L[1010]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[958]-work.L[1047]*work.d[337]*work.L[382]-work.L[1048]*work.d[345]*work.L[383]-work.L[1049]*work.d[353]*work.L[384]-work.L[1050]*work.d[361]*work.L[385]-work.L[1051]*work.d[369]*work.L[386]-work.L[1052]*work.d[377]*work.L[387]-work.L[1053]*work.d[385]*work.L[388]-work.L[1054]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[959]-work.L[1092]*work.d[337]*work.L[382]-work.L[1093]*work.d[345]*work.L[383]-work.L[1094]*work.d[353]*work.L[384]-work.L[1095]*work.d[361]*work.L[385]-work.L[1096]*work.d[369]*work.L[386]-work.L[1097]*work.d[377]*work.L[387]-work.L[1098]*work.d[385]*work.L[388]-work.L[1099]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[960]-work.L[1138]*work.d[337]*work.L[382]-work.L[1139]*work.d[345]*work.L[383]-work.L[1140]*work.d[353]*work.L[384]-work.L[1141]*work.d[361]*work.L[385]-work.L[1142]*work.d[369]*work.L[386]-work.L[1143]*work.d[377]*work.L[387]-work.L[1144]*work.d[385]*work.L[388]-work.L[1145]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[961]-work.L[1167]*work.d[337]*work.L[382]-work.L[1168]*work.d[345]*work.L[383]-work.L[1169]*work.d[353]*work.L[384]-work.L[1170]*work.d[361]*work.L[385]-work.L[1171]*work.d[369]*work.L[386]-work.L[1172]*work.d[377]*work.L[387]-work.L[1173]*work.d[385]*work.L[388]-work.L[1174]*work.d[393]*1;
  residual += temp*temp;

  temp = work.KKT[977]-work.L[408]*work.d[337]*work.L[408]-work.L[409]*work.d[345]*work.L[409]-work.L[410]*work.d[353]*work.L[410]-work.L[411]*work.d[361]*work.L[411]-work.L[412]*work.d[369]*work.L[412]-work.L[413]*work.d[377]*work.L[413]-work.L[414]*work.d[385]*work.L[414]-work.L[415]*work.d[393]*work.L[415]-1*work.d[401]*1-work.L[416]*work.d[400]*work.L[416];
  residual += temp*temp;

  temp = work.KKT[978]-work.L[435]*work.d[337]*work.L[408]-work.L[436]*work.d[345]*work.L[409]-work.L[437]*work.d[353]*work.L[410]-work.L[438]*work.d[361]*work.L[411]-work.L[439]*work.d[369]*work.L[412]-work.L[440]*work.d[377]*work.L[413]-work.L[441]*work.d[385]*work.L[414]-work.L[442]*work.d[393]*work.L[415]-work.L[443]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[979]-work.L[463]*work.d[337]*work.L[408]-work.L[464]*work.d[345]*work.L[409]-work.L[465]*work.d[353]*work.L[410]-work.L[466]*work.d[361]*work.L[411]-work.L[467]*work.d[369]*work.L[412]-work.L[468]*work.d[377]*work.L[413]-work.L[469]*work.d[385]*work.L[414]-work.L[470]*work.d[393]*work.L[415]-work.L[471]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[980]-work.L[492]*work.d[337]*work.L[408]-work.L[493]*work.d[345]*work.L[409]-work.L[494]*work.d[353]*work.L[410]-work.L[495]*work.d[361]*work.L[411]-work.L[496]*work.d[369]*work.L[412]-work.L[497]*work.d[377]*work.L[413]-work.L[498]*work.d[385]*work.L[414]-work.L[499]*work.d[393]*work.L[415]-work.L[500]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[981]-work.L[522]*work.d[337]*work.L[408]-work.L[523]*work.d[345]*work.L[409]-work.L[524]*work.d[353]*work.L[410]-work.L[525]*work.d[361]*work.L[411]-work.L[526]*work.d[369]*work.L[412]-work.L[527]*work.d[377]*work.L[413]-work.L[528]*work.d[385]*work.L[414]-work.L[529]*work.d[393]*work.L[415]-work.L[530]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[982]-work.L[553]*work.d[337]*work.L[408]-work.L[554]*work.d[345]*work.L[409]-work.L[555]*work.d[353]*work.L[410]-work.L[556]*work.d[361]*work.L[411]-work.L[557]*work.d[369]*work.L[412]-work.L[558]*work.d[377]*work.L[413]-work.L[559]*work.d[385]*work.L[414]-work.L[560]*work.d[393]*work.L[415]-work.L[561]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[983]-work.L[585]*work.d[337]*work.L[408]-work.L[586]*work.d[345]*work.L[409]-work.L[587]*work.d[353]*work.L[410]-work.L[588]*work.d[361]*work.L[411]-work.L[589]*work.d[369]*work.L[412]-work.L[590]*work.d[377]*work.L[413]-work.L[591]*work.d[385]*work.L[414]-work.L[592]*work.d[393]*work.L[415]-work.L[593]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[984]-work.L[618]*work.d[337]*work.L[408]-work.L[619]*work.d[345]*work.L[409]-work.L[620]*work.d[353]*work.L[410]-work.L[621]*work.d[361]*work.L[411]-work.L[622]*work.d[369]*work.L[412]-work.L[623]*work.d[377]*work.L[413]-work.L[624]*work.d[385]*work.L[414]-work.L[625]*work.d[393]*work.L[415]-work.L[626]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[985]-work.L[652]*work.d[337]*work.L[408]-work.L[653]*work.d[345]*work.L[409]-work.L[654]*work.d[353]*work.L[410]-work.L[655]*work.d[361]*work.L[411]-work.L[656]*work.d[369]*work.L[412]-work.L[657]*work.d[377]*work.L[413]-work.L[658]*work.d[385]*work.L[414]-work.L[659]*work.d[393]*work.L[415]-work.L[660]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[986]-work.L[687]*work.d[337]*work.L[408]-work.L[688]*work.d[345]*work.L[409]-work.L[689]*work.d[353]*work.L[410]-work.L[690]*work.d[361]*work.L[411]-work.L[691]*work.d[369]*work.L[412]-work.L[692]*work.d[377]*work.L[413]-work.L[693]*work.d[385]*work.L[414]-work.L[694]*work.d[393]*work.L[415]-work.L[695]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[987]-work.L[723]*work.d[337]*work.L[408]-work.L[724]*work.d[345]*work.L[409]-work.L[725]*work.d[353]*work.L[410]-work.L[726]*work.d[361]*work.L[411]-work.L[727]*work.d[369]*work.L[412]-work.L[728]*work.d[377]*work.L[413]-work.L[729]*work.d[385]*work.L[414]-work.L[730]*work.d[393]*work.L[415]-work.L[731]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[988]-work.L[760]*work.d[337]*work.L[408]-work.L[761]*work.d[345]*work.L[409]-work.L[762]*work.d[353]*work.L[410]-work.L[763]*work.d[361]*work.L[411]-work.L[764]*work.d[369]*work.L[412]-work.L[765]*work.d[377]*work.L[413]-work.L[766]*work.d[385]*work.L[414]-work.L[767]*work.d[393]*work.L[415]-work.L[768]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[989]-work.L[798]*work.d[337]*work.L[408]-work.L[799]*work.d[345]*work.L[409]-work.L[800]*work.d[353]*work.L[410]-work.L[801]*work.d[361]*work.L[411]-work.L[802]*work.d[369]*work.L[412]-work.L[803]*work.d[377]*work.L[413]-work.L[804]*work.d[385]*work.L[414]-work.L[805]*work.d[393]*work.L[415]-work.L[806]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[990]-work.L[837]*work.d[337]*work.L[408]-work.L[838]*work.d[345]*work.L[409]-work.L[839]*work.d[353]*work.L[410]-work.L[840]*work.d[361]*work.L[411]-work.L[841]*work.d[369]*work.L[412]-work.L[842]*work.d[377]*work.L[413]-work.L[843]*work.d[385]*work.L[414]-work.L[844]*work.d[393]*work.L[415]-work.L[845]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[991]-work.L[877]*work.d[337]*work.L[408]-work.L[878]*work.d[345]*work.L[409]-work.L[879]*work.d[353]*work.L[410]-work.L[880]*work.d[361]*work.L[411]-work.L[881]*work.d[369]*work.L[412]-work.L[882]*work.d[377]*work.L[413]-work.L[883]*work.d[385]*work.L[414]-work.L[884]*work.d[393]*work.L[415]-work.L[885]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[992]-work.L[918]*work.d[337]*work.L[408]-work.L[919]*work.d[345]*work.L[409]-work.L[920]*work.d[353]*work.L[410]-work.L[921]*work.d[361]*work.L[411]-work.L[922]*work.d[369]*work.L[412]-work.L[923]*work.d[377]*work.L[413]-work.L[924]*work.d[385]*work.L[414]-work.L[925]*work.d[393]*work.L[415]-work.L[926]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[993]-work.L[960]*work.d[337]*work.L[408]-work.L[961]*work.d[345]*work.L[409]-work.L[962]*work.d[353]*work.L[410]-work.L[963]*work.d[361]*work.L[411]-work.L[964]*work.d[369]*work.L[412]-work.L[965]*work.d[377]*work.L[413]-work.L[966]*work.d[385]*work.L[414]-work.L[967]*work.d[393]*work.L[415]-work.L[968]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[994]-work.L[1003]*work.d[337]*work.L[408]-work.L[1004]*work.d[345]*work.L[409]-work.L[1005]*work.d[353]*work.L[410]-work.L[1006]*work.d[361]*work.L[411]-work.L[1007]*work.d[369]*work.L[412]-work.L[1008]*work.d[377]*work.L[413]-work.L[1009]*work.d[385]*work.L[414]-work.L[1010]*work.d[393]*work.L[415]-work.L[1011]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[995]-work.L[1047]*work.d[337]*work.L[408]-work.L[1048]*work.d[345]*work.L[409]-work.L[1049]*work.d[353]*work.L[410]-work.L[1050]*work.d[361]*work.L[411]-work.L[1051]*work.d[369]*work.L[412]-work.L[1052]*work.d[377]*work.L[413]-work.L[1053]*work.d[385]*work.L[414]-work.L[1054]*work.d[393]*work.L[415]-work.L[1055]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[996]-work.L[1092]*work.d[337]*work.L[408]-work.L[1093]*work.d[345]*work.L[409]-work.L[1094]*work.d[353]*work.L[410]-work.L[1095]*work.d[361]*work.L[411]-work.L[1096]*work.d[369]*work.L[412]-work.L[1097]*work.d[377]*work.L[413]-work.L[1098]*work.d[385]*work.L[414]-work.L[1099]*work.d[393]*work.L[415]-work.L[1100]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[997]-work.L[1138]*work.d[337]*work.L[408]-work.L[1139]*work.d[345]*work.L[409]-work.L[1140]*work.d[353]*work.L[410]-work.L[1141]*work.d[361]*work.L[411]-work.L[1142]*work.d[369]*work.L[412]-work.L[1143]*work.d[377]*work.L[413]-work.L[1144]*work.d[385]*work.L[414]-work.L[1145]*work.d[393]*work.L[415]-work.L[1146]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[998]-work.L[1167]*work.d[337]*work.L[408]-work.L[1168]*work.d[345]*work.L[409]-work.L[1169]*work.d[353]*work.L[410]-work.L[1170]*work.d[361]*work.L[411]-work.L[1171]*work.d[369]*work.L[412]-work.L[1172]*work.d[377]*work.L[413]-work.L[1173]*work.d[385]*work.L[414]-work.L[1174]*work.d[393]*work.L[415]-work.L[1175]*work.d[401]*1;
  residual += temp*temp;

  temp = work.KKT[1014]-work.L[435]*work.d[337]*work.L[435]-work.L[436]*work.d[345]*work.L[436]-work.L[437]*work.d[353]*work.L[437]-work.L[438]*work.d[361]*work.L[438]-work.L[439]*work.d[369]*work.L[439]-work.L[440]*work.d[377]*work.L[440]-work.L[441]*work.d[385]*work.L[441]-work.L[442]*work.d[393]*work.L[442]-work.L[443]*work.d[401]*work.L[443]-1*work.d[409]*1-work.L[444]*work.d[408]*work.L[444];
  residual += temp*temp;

  temp = work.KKT[1015]-work.L[463]*work.d[337]*work.L[435]-work.L[464]*work.d[345]*work.L[436]-work.L[465]*work.d[353]*work.L[437]-work.L[466]*work.d[361]*work.L[438]-work.L[467]*work.d[369]*work.L[439]-work.L[468]*work.d[377]*work.L[440]-work.L[469]*work.d[385]*work.L[441]-work.L[470]*work.d[393]*work.L[442]-work.L[471]*work.d[401]*work.L[443]-work.L[472]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1016]-work.L[492]*work.d[337]*work.L[435]-work.L[493]*work.d[345]*work.L[436]-work.L[494]*work.d[353]*work.L[437]-work.L[495]*work.d[361]*work.L[438]-work.L[496]*work.d[369]*work.L[439]-work.L[497]*work.d[377]*work.L[440]-work.L[498]*work.d[385]*work.L[441]-work.L[499]*work.d[393]*work.L[442]-work.L[500]*work.d[401]*work.L[443]-work.L[501]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1017]-work.L[522]*work.d[337]*work.L[435]-work.L[523]*work.d[345]*work.L[436]-work.L[524]*work.d[353]*work.L[437]-work.L[525]*work.d[361]*work.L[438]-work.L[526]*work.d[369]*work.L[439]-work.L[527]*work.d[377]*work.L[440]-work.L[528]*work.d[385]*work.L[441]-work.L[529]*work.d[393]*work.L[442]-work.L[530]*work.d[401]*work.L[443]-work.L[531]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1018]-work.L[553]*work.d[337]*work.L[435]-work.L[554]*work.d[345]*work.L[436]-work.L[555]*work.d[353]*work.L[437]-work.L[556]*work.d[361]*work.L[438]-work.L[557]*work.d[369]*work.L[439]-work.L[558]*work.d[377]*work.L[440]-work.L[559]*work.d[385]*work.L[441]-work.L[560]*work.d[393]*work.L[442]-work.L[561]*work.d[401]*work.L[443]-work.L[562]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1019]-work.L[585]*work.d[337]*work.L[435]-work.L[586]*work.d[345]*work.L[436]-work.L[587]*work.d[353]*work.L[437]-work.L[588]*work.d[361]*work.L[438]-work.L[589]*work.d[369]*work.L[439]-work.L[590]*work.d[377]*work.L[440]-work.L[591]*work.d[385]*work.L[441]-work.L[592]*work.d[393]*work.L[442]-work.L[593]*work.d[401]*work.L[443]-work.L[594]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1020]-work.L[618]*work.d[337]*work.L[435]-work.L[619]*work.d[345]*work.L[436]-work.L[620]*work.d[353]*work.L[437]-work.L[621]*work.d[361]*work.L[438]-work.L[622]*work.d[369]*work.L[439]-work.L[623]*work.d[377]*work.L[440]-work.L[624]*work.d[385]*work.L[441]-work.L[625]*work.d[393]*work.L[442]-work.L[626]*work.d[401]*work.L[443]-work.L[627]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1021]-work.L[652]*work.d[337]*work.L[435]-work.L[653]*work.d[345]*work.L[436]-work.L[654]*work.d[353]*work.L[437]-work.L[655]*work.d[361]*work.L[438]-work.L[656]*work.d[369]*work.L[439]-work.L[657]*work.d[377]*work.L[440]-work.L[658]*work.d[385]*work.L[441]-work.L[659]*work.d[393]*work.L[442]-work.L[660]*work.d[401]*work.L[443]-work.L[661]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1022]-work.L[687]*work.d[337]*work.L[435]-work.L[688]*work.d[345]*work.L[436]-work.L[689]*work.d[353]*work.L[437]-work.L[690]*work.d[361]*work.L[438]-work.L[691]*work.d[369]*work.L[439]-work.L[692]*work.d[377]*work.L[440]-work.L[693]*work.d[385]*work.L[441]-work.L[694]*work.d[393]*work.L[442]-work.L[695]*work.d[401]*work.L[443]-work.L[696]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1023]-work.L[723]*work.d[337]*work.L[435]-work.L[724]*work.d[345]*work.L[436]-work.L[725]*work.d[353]*work.L[437]-work.L[726]*work.d[361]*work.L[438]-work.L[727]*work.d[369]*work.L[439]-work.L[728]*work.d[377]*work.L[440]-work.L[729]*work.d[385]*work.L[441]-work.L[730]*work.d[393]*work.L[442]-work.L[731]*work.d[401]*work.L[443]-work.L[732]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1024]-work.L[760]*work.d[337]*work.L[435]-work.L[761]*work.d[345]*work.L[436]-work.L[762]*work.d[353]*work.L[437]-work.L[763]*work.d[361]*work.L[438]-work.L[764]*work.d[369]*work.L[439]-work.L[765]*work.d[377]*work.L[440]-work.L[766]*work.d[385]*work.L[441]-work.L[767]*work.d[393]*work.L[442]-work.L[768]*work.d[401]*work.L[443]-work.L[769]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1025]-work.L[798]*work.d[337]*work.L[435]-work.L[799]*work.d[345]*work.L[436]-work.L[800]*work.d[353]*work.L[437]-work.L[801]*work.d[361]*work.L[438]-work.L[802]*work.d[369]*work.L[439]-work.L[803]*work.d[377]*work.L[440]-work.L[804]*work.d[385]*work.L[441]-work.L[805]*work.d[393]*work.L[442]-work.L[806]*work.d[401]*work.L[443]-work.L[807]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1026]-work.L[837]*work.d[337]*work.L[435]-work.L[838]*work.d[345]*work.L[436]-work.L[839]*work.d[353]*work.L[437]-work.L[840]*work.d[361]*work.L[438]-work.L[841]*work.d[369]*work.L[439]-work.L[842]*work.d[377]*work.L[440]-work.L[843]*work.d[385]*work.L[441]-work.L[844]*work.d[393]*work.L[442]-work.L[845]*work.d[401]*work.L[443]-work.L[846]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1027]-work.L[877]*work.d[337]*work.L[435]-work.L[878]*work.d[345]*work.L[436]-work.L[879]*work.d[353]*work.L[437]-work.L[880]*work.d[361]*work.L[438]-work.L[881]*work.d[369]*work.L[439]-work.L[882]*work.d[377]*work.L[440]-work.L[883]*work.d[385]*work.L[441]-work.L[884]*work.d[393]*work.L[442]-work.L[885]*work.d[401]*work.L[443]-work.L[886]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1028]-work.L[918]*work.d[337]*work.L[435]-work.L[919]*work.d[345]*work.L[436]-work.L[920]*work.d[353]*work.L[437]-work.L[921]*work.d[361]*work.L[438]-work.L[922]*work.d[369]*work.L[439]-work.L[923]*work.d[377]*work.L[440]-work.L[924]*work.d[385]*work.L[441]-work.L[925]*work.d[393]*work.L[442]-work.L[926]*work.d[401]*work.L[443]-work.L[927]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1029]-work.L[960]*work.d[337]*work.L[435]-work.L[961]*work.d[345]*work.L[436]-work.L[962]*work.d[353]*work.L[437]-work.L[963]*work.d[361]*work.L[438]-work.L[964]*work.d[369]*work.L[439]-work.L[965]*work.d[377]*work.L[440]-work.L[966]*work.d[385]*work.L[441]-work.L[967]*work.d[393]*work.L[442]-work.L[968]*work.d[401]*work.L[443]-work.L[969]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1030]-work.L[1003]*work.d[337]*work.L[435]-work.L[1004]*work.d[345]*work.L[436]-work.L[1005]*work.d[353]*work.L[437]-work.L[1006]*work.d[361]*work.L[438]-work.L[1007]*work.d[369]*work.L[439]-work.L[1008]*work.d[377]*work.L[440]-work.L[1009]*work.d[385]*work.L[441]-work.L[1010]*work.d[393]*work.L[442]-work.L[1011]*work.d[401]*work.L[443]-work.L[1012]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1031]-work.L[1047]*work.d[337]*work.L[435]-work.L[1048]*work.d[345]*work.L[436]-work.L[1049]*work.d[353]*work.L[437]-work.L[1050]*work.d[361]*work.L[438]-work.L[1051]*work.d[369]*work.L[439]-work.L[1052]*work.d[377]*work.L[440]-work.L[1053]*work.d[385]*work.L[441]-work.L[1054]*work.d[393]*work.L[442]-work.L[1055]*work.d[401]*work.L[443]-work.L[1056]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1032]-work.L[1092]*work.d[337]*work.L[435]-work.L[1093]*work.d[345]*work.L[436]-work.L[1094]*work.d[353]*work.L[437]-work.L[1095]*work.d[361]*work.L[438]-work.L[1096]*work.d[369]*work.L[439]-work.L[1097]*work.d[377]*work.L[440]-work.L[1098]*work.d[385]*work.L[441]-work.L[1099]*work.d[393]*work.L[442]-work.L[1100]*work.d[401]*work.L[443]-work.L[1101]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1033]-work.L[1138]*work.d[337]*work.L[435]-work.L[1139]*work.d[345]*work.L[436]-work.L[1140]*work.d[353]*work.L[437]-work.L[1141]*work.d[361]*work.L[438]-work.L[1142]*work.d[369]*work.L[439]-work.L[1143]*work.d[377]*work.L[440]-work.L[1144]*work.d[385]*work.L[441]-work.L[1145]*work.d[393]*work.L[442]-work.L[1146]*work.d[401]*work.L[443]-work.L[1147]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1034]-work.L[1167]*work.d[337]*work.L[435]-work.L[1168]*work.d[345]*work.L[436]-work.L[1169]*work.d[353]*work.L[437]-work.L[1170]*work.d[361]*work.L[438]-work.L[1171]*work.d[369]*work.L[439]-work.L[1172]*work.d[377]*work.L[440]-work.L[1173]*work.d[385]*work.L[441]-work.L[1174]*work.d[393]*work.L[442]-work.L[1175]*work.d[401]*work.L[443]-work.L[1176]*work.d[409]*1;
  residual += temp*temp;

  temp = work.KKT[1050]-work.L[463]*work.d[337]*work.L[463]-work.L[464]*work.d[345]*work.L[464]-work.L[465]*work.d[353]*work.L[465]-work.L[466]*work.d[361]*work.L[466]-work.L[467]*work.d[369]*work.L[467]-work.L[468]*work.d[377]*work.L[468]-work.L[469]*work.d[385]*work.L[469]-work.L[470]*work.d[393]*work.L[470]-work.L[471]*work.d[401]*work.L[471]-work.L[472]*work.d[409]*work.L[472]-1*work.d[417]*1-work.L[473]*work.d[416]*work.L[473];
  residual += temp*temp;

  temp = work.KKT[1051]-work.L[492]*work.d[337]*work.L[463]-work.L[493]*work.d[345]*work.L[464]-work.L[494]*work.d[353]*work.L[465]-work.L[495]*work.d[361]*work.L[466]-work.L[496]*work.d[369]*work.L[467]-work.L[497]*work.d[377]*work.L[468]-work.L[498]*work.d[385]*work.L[469]-work.L[499]*work.d[393]*work.L[470]-work.L[500]*work.d[401]*work.L[471]-work.L[501]*work.d[409]*work.L[472]-work.L[502]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1052]-work.L[522]*work.d[337]*work.L[463]-work.L[523]*work.d[345]*work.L[464]-work.L[524]*work.d[353]*work.L[465]-work.L[525]*work.d[361]*work.L[466]-work.L[526]*work.d[369]*work.L[467]-work.L[527]*work.d[377]*work.L[468]-work.L[528]*work.d[385]*work.L[469]-work.L[529]*work.d[393]*work.L[470]-work.L[530]*work.d[401]*work.L[471]-work.L[531]*work.d[409]*work.L[472]-work.L[532]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1053]-work.L[553]*work.d[337]*work.L[463]-work.L[554]*work.d[345]*work.L[464]-work.L[555]*work.d[353]*work.L[465]-work.L[556]*work.d[361]*work.L[466]-work.L[557]*work.d[369]*work.L[467]-work.L[558]*work.d[377]*work.L[468]-work.L[559]*work.d[385]*work.L[469]-work.L[560]*work.d[393]*work.L[470]-work.L[561]*work.d[401]*work.L[471]-work.L[562]*work.d[409]*work.L[472]-work.L[563]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1054]-work.L[585]*work.d[337]*work.L[463]-work.L[586]*work.d[345]*work.L[464]-work.L[587]*work.d[353]*work.L[465]-work.L[588]*work.d[361]*work.L[466]-work.L[589]*work.d[369]*work.L[467]-work.L[590]*work.d[377]*work.L[468]-work.L[591]*work.d[385]*work.L[469]-work.L[592]*work.d[393]*work.L[470]-work.L[593]*work.d[401]*work.L[471]-work.L[594]*work.d[409]*work.L[472]-work.L[595]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1055]-work.L[618]*work.d[337]*work.L[463]-work.L[619]*work.d[345]*work.L[464]-work.L[620]*work.d[353]*work.L[465]-work.L[621]*work.d[361]*work.L[466]-work.L[622]*work.d[369]*work.L[467]-work.L[623]*work.d[377]*work.L[468]-work.L[624]*work.d[385]*work.L[469]-work.L[625]*work.d[393]*work.L[470]-work.L[626]*work.d[401]*work.L[471]-work.L[627]*work.d[409]*work.L[472]-work.L[628]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1056]-work.L[652]*work.d[337]*work.L[463]-work.L[653]*work.d[345]*work.L[464]-work.L[654]*work.d[353]*work.L[465]-work.L[655]*work.d[361]*work.L[466]-work.L[656]*work.d[369]*work.L[467]-work.L[657]*work.d[377]*work.L[468]-work.L[658]*work.d[385]*work.L[469]-work.L[659]*work.d[393]*work.L[470]-work.L[660]*work.d[401]*work.L[471]-work.L[661]*work.d[409]*work.L[472]-work.L[662]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1057]-work.L[687]*work.d[337]*work.L[463]-work.L[688]*work.d[345]*work.L[464]-work.L[689]*work.d[353]*work.L[465]-work.L[690]*work.d[361]*work.L[466]-work.L[691]*work.d[369]*work.L[467]-work.L[692]*work.d[377]*work.L[468]-work.L[693]*work.d[385]*work.L[469]-work.L[694]*work.d[393]*work.L[470]-work.L[695]*work.d[401]*work.L[471]-work.L[696]*work.d[409]*work.L[472]-work.L[697]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1058]-work.L[723]*work.d[337]*work.L[463]-work.L[724]*work.d[345]*work.L[464]-work.L[725]*work.d[353]*work.L[465]-work.L[726]*work.d[361]*work.L[466]-work.L[727]*work.d[369]*work.L[467]-work.L[728]*work.d[377]*work.L[468]-work.L[729]*work.d[385]*work.L[469]-work.L[730]*work.d[393]*work.L[470]-work.L[731]*work.d[401]*work.L[471]-work.L[732]*work.d[409]*work.L[472]-work.L[733]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1059]-work.L[760]*work.d[337]*work.L[463]-work.L[761]*work.d[345]*work.L[464]-work.L[762]*work.d[353]*work.L[465]-work.L[763]*work.d[361]*work.L[466]-work.L[764]*work.d[369]*work.L[467]-work.L[765]*work.d[377]*work.L[468]-work.L[766]*work.d[385]*work.L[469]-work.L[767]*work.d[393]*work.L[470]-work.L[768]*work.d[401]*work.L[471]-work.L[769]*work.d[409]*work.L[472]-work.L[770]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1060]-work.L[798]*work.d[337]*work.L[463]-work.L[799]*work.d[345]*work.L[464]-work.L[800]*work.d[353]*work.L[465]-work.L[801]*work.d[361]*work.L[466]-work.L[802]*work.d[369]*work.L[467]-work.L[803]*work.d[377]*work.L[468]-work.L[804]*work.d[385]*work.L[469]-work.L[805]*work.d[393]*work.L[470]-work.L[806]*work.d[401]*work.L[471]-work.L[807]*work.d[409]*work.L[472]-work.L[808]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1061]-work.L[837]*work.d[337]*work.L[463]-work.L[838]*work.d[345]*work.L[464]-work.L[839]*work.d[353]*work.L[465]-work.L[840]*work.d[361]*work.L[466]-work.L[841]*work.d[369]*work.L[467]-work.L[842]*work.d[377]*work.L[468]-work.L[843]*work.d[385]*work.L[469]-work.L[844]*work.d[393]*work.L[470]-work.L[845]*work.d[401]*work.L[471]-work.L[846]*work.d[409]*work.L[472]-work.L[847]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1062]-work.L[877]*work.d[337]*work.L[463]-work.L[878]*work.d[345]*work.L[464]-work.L[879]*work.d[353]*work.L[465]-work.L[880]*work.d[361]*work.L[466]-work.L[881]*work.d[369]*work.L[467]-work.L[882]*work.d[377]*work.L[468]-work.L[883]*work.d[385]*work.L[469]-work.L[884]*work.d[393]*work.L[470]-work.L[885]*work.d[401]*work.L[471]-work.L[886]*work.d[409]*work.L[472]-work.L[887]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1063]-work.L[918]*work.d[337]*work.L[463]-work.L[919]*work.d[345]*work.L[464]-work.L[920]*work.d[353]*work.L[465]-work.L[921]*work.d[361]*work.L[466]-work.L[922]*work.d[369]*work.L[467]-work.L[923]*work.d[377]*work.L[468]-work.L[924]*work.d[385]*work.L[469]-work.L[925]*work.d[393]*work.L[470]-work.L[926]*work.d[401]*work.L[471]-work.L[927]*work.d[409]*work.L[472]-work.L[928]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1064]-work.L[960]*work.d[337]*work.L[463]-work.L[961]*work.d[345]*work.L[464]-work.L[962]*work.d[353]*work.L[465]-work.L[963]*work.d[361]*work.L[466]-work.L[964]*work.d[369]*work.L[467]-work.L[965]*work.d[377]*work.L[468]-work.L[966]*work.d[385]*work.L[469]-work.L[967]*work.d[393]*work.L[470]-work.L[968]*work.d[401]*work.L[471]-work.L[969]*work.d[409]*work.L[472]-work.L[970]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1065]-work.L[1003]*work.d[337]*work.L[463]-work.L[1004]*work.d[345]*work.L[464]-work.L[1005]*work.d[353]*work.L[465]-work.L[1006]*work.d[361]*work.L[466]-work.L[1007]*work.d[369]*work.L[467]-work.L[1008]*work.d[377]*work.L[468]-work.L[1009]*work.d[385]*work.L[469]-work.L[1010]*work.d[393]*work.L[470]-work.L[1011]*work.d[401]*work.L[471]-work.L[1012]*work.d[409]*work.L[472]-work.L[1013]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1066]-work.L[1047]*work.d[337]*work.L[463]-work.L[1048]*work.d[345]*work.L[464]-work.L[1049]*work.d[353]*work.L[465]-work.L[1050]*work.d[361]*work.L[466]-work.L[1051]*work.d[369]*work.L[467]-work.L[1052]*work.d[377]*work.L[468]-work.L[1053]*work.d[385]*work.L[469]-work.L[1054]*work.d[393]*work.L[470]-work.L[1055]*work.d[401]*work.L[471]-work.L[1056]*work.d[409]*work.L[472]-work.L[1057]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1067]-work.L[1092]*work.d[337]*work.L[463]-work.L[1093]*work.d[345]*work.L[464]-work.L[1094]*work.d[353]*work.L[465]-work.L[1095]*work.d[361]*work.L[466]-work.L[1096]*work.d[369]*work.L[467]-work.L[1097]*work.d[377]*work.L[468]-work.L[1098]*work.d[385]*work.L[469]-work.L[1099]*work.d[393]*work.L[470]-work.L[1100]*work.d[401]*work.L[471]-work.L[1101]*work.d[409]*work.L[472]-work.L[1102]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1068]-work.L[1138]*work.d[337]*work.L[463]-work.L[1139]*work.d[345]*work.L[464]-work.L[1140]*work.d[353]*work.L[465]-work.L[1141]*work.d[361]*work.L[466]-work.L[1142]*work.d[369]*work.L[467]-work.L[1143]*work.d[377]*work.L[468]-work.L[1144]*work.d[385]*work.L[469]-work.L[1145]*work.d[393]*work.L[470]-work.L[1146]*work.d[401]*work.L[471]-work.L[1147]*work.d[409]*work.L[472]-work.L[1148]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1069]-work.L[1167]*work.d[337]*work.L[463]-work.L[1168]*work.d[345]*work.L[464]-work.L[1169]*work.d[353]*work.L[465]-work.L[1170]*work.d[361]*work.L[466]-work.L[1171]*work.d[369]*work.L[467]-work.L[1172]*work.d[377]*work.L[468]-work.L[1173]*work.d[385]*work.L[469]-work.L[1174]*work.d[393]*work.L[470]-work.L[1175]*work.d[401]*work.L[471]-work.L[1176]*work.d[409]*work.L[472]-work.L[1177]*work.d[417]*1;
  residual += temp*temp;

  temp = work.KKT[1085]-work.L[492]*work.d[337]*work.L[492]-work.L[493]*work.d[345]*work.L[493]-work.L[494]*work.d[353]*work.L[494]-work.L[495]*work.d[361]*work.L[495]-work.L[496]*work.d[369]*work.L[496]-work.L[497]*work.d[377]*work.L[497]-work.L[498]*work.d[385]*work.L[498]-work.L[499]*work.d[393]*work.L[499]-work.L[500]*work.d[401]*work.L[500]-work.L[501]*work.d[409]*work.L[501]-work.L[502]*work.d[417]*work.L[502]-1*work.d[425]*1-work.L[503]*work.d[424]*work.L[503];
  residual += temp*temp;

  temp = work.KKT[1086]-work.L[522]*work.d[337]*work.L[492]-work.L[523]*work.d[345]*work.L[493]-work.L[524]*work.d[353]*work.L[494]-work.L[525]*work.d[361]*work.L[495]-work.L[526]*work.d[369]*work.L[496]-work.L[527]*work.d[377]*work.L[497]-work.L[528]*work.d[385]*work.L[498]-work.L[529]*work.d[393]*work.L[499]-work.L[530]*work.d[401]*work.L[500]-work.L[531]*work.d[409]*work.L[501]-work.L[532]*work.d[417]*work.L[502]-work.L[533]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1087]-work.L[553]*work.d[337]*work.L[492]-work.L[554]*work.d[345]*work.L[493]-work.L[555]*work.d[353]*work.L[494]-work.L[556]*work.d[361]*work.L[495]-work.L[557]*work.d[369]*work.L[496]-work.L[558]*work.d[377]*work.L[497]-work.L[559]*work.d[385]*work.L[498]-work.L[560]*work.d[393]*work.L[499]-work.L[561]*work.d[401]*work.L[500]-work.L[562]*work.d[409]*work.L[501]-work.L[563]*work.d[417]*work.L[502]-work.L[564]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1088]-work.L[585]*work.d[337]*work.L[492]-work.L[586]*work.d[345]*work.L[493]-work.L[587]*work.d[353]*work.L[494]-work.L[588]*work.d[361]*work.L[495]-work.L[589]*work.d[369]*work.L[496]-work.L[590]*work.d[377]*work.L[497]-work.L[591]*work.d[385]*work.L[498]-work.L[592]*work.d[393]*work.L[499]-work.L[593]*work.d[401]*work.L[500]-work.L[594]*work.d[409]*work.L[501]-work.L[595]*work.d[417]*work.L[502]-work.L[596]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1089]-work.L[618]*work.d[337]*work.L[492]-work.L[619]*work.d[345]*work.L[493]-work.L[620]*work.d[353]*work.L[494]-work.L[621]*work.d[361]*work.L[495]-work.L[622]*work.d[369]*work.L[496]-work.L[623]*work.d[377]*work.L[497]-work.L[624]*work.d[385]*work.L[498]-work.L[625]*work.d[393]*work.L[499]-work.L[626]*work.d[401]*work.L[500]-work.L[627]*work.d[409]*work.L[501]-work.L[628]*work.d[417]*work.L[502]-work.L[629]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1090]-work.L[652]*work.d[337]*work.L[492]-work.L[653]*work.d[345]*work.L[493]-work.L[654]*work.d[353]*work.L[494]-work.L[655]*work.d[361]*work.L[495]-work.L[656]*work.d[369]*work.L[496]-work.L[657]*work.d[377]*work.L[497]-work.L[658]*work.d[385]*work.L[498]-work.L[659]*work.d[393]*work.L[499]-work.L[660]*work.d[401]*work.L[500]-work.L[661]*work.d[409]*work.L[501]-work.L[662]*work.d[417]*work.L[502]-work.L[663]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1091]-work.L[687]*work.d[337]*work.L[492]-work.L[688]*work.d[345]*work.L[493]-work.L[689]*work.d[353]*work.L[494]-work.L[690]*work.d[361]*work.L[495]-work.L[691]*work.d[369]*work.L[496]-work.L[692]*work.d[377]*work.L[497]-work.L[693]*work.d[385]*work.L[498]-work.L[694]*work.d[393]*work.L[499]-work.L[695]*work.d[401]*work.L[500]-work.L[696]*work.d[409]*work.L[501]-work.L[697]*work.d[417]*work.L[502]-work.L[698]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1092]-work.L[723]*work.d[337]*work.L[492]-work.L[724]*work.d[345]*work.L[493]-work.L[725]*work.d[353]*work.L[494]-work.L[726]*work.d[361]*work.L[495]-work.L[727]*work.d[369]*work.L[496]-work.L[728]*work.d[377]*work.L[497]-work.L[729]*work.d[385]*work.L[498]-work.L[730]*work.d[393]*work.L[499]-work.L[731]*work.d[401]*work.L[500]-work.L[732]*work.d[409]*work.L[501]-work.L[733]*work.d[417]*work.L[502]-work.L[734]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1093]-work.L[760]*work.d[337]*work.L[492]-work.L[761]*work.d[345]*work.L[493]-work.L[762]*work.d[353]*work.L[494]-work.L[763]*work.d[361]*work.L[495]-work.L[764]*work.d[369]*work.L[496]-work.L[765]*work.d[377]*work.L[497]-work.L[766]*work.d[385]*work.L[498]-work.L[767]*work.d[393]*work.L[499]-work.L[768]*work.d[401]*work.L[500]-work.L[769]*work.d[409]*work.L[501]-work.L[770]*work.d[417]*work.L[502]-work.L[771]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1094]-work.L[798]*work.d[337]*work.L[492]-work.L[799]*work.d[345]*work.L[493]-work.L[800]*work.d[353]*work.L[494]-work.L[801]*work.d[361]*work.L[495]-work.L[802]*work.d[369]*work.L[496]-work.L[803]*work.d[377]*work.L[497]-work.L[804]*work.d[385]*work.L[498]-work.L[805]*work.d[393]*work.L[499]-work.L[806]*work.d[401]*work.L[500]-work.L[807]*work.d[409]*work.L[501]-work.L[808]*work.d[417]*work.L[502]-work.L[809]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1095]-work.L[837]*work.d[337]*work.L[492]-work.L[838]*work.d[345]*work.L[493]-work.L[839]*work.d[353]*work.L[494]-work.L[840]*work.d[361]*work.L[495]-work.L[841]*work.d[369]*work.L[496]-work.L[842]*work.d[377]*work.L[497]-work.L[843]*work.d[385]*work.L[498]-work.L[844]*work.d[393]*work.L[499]-work.L[845]*work.d[401]*work.L[500]-work.L[846]*work.d[409]*work.L[501]-work.L[847]*work.d[417]*work.L[502]-work.L[848]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1096]-work.L[877]*work.d[337]*work.L[492]-work.L[878]*work.d[345]*work.L[493]-work.L[879]*work.d[353]*work.L[494]-work.L[880]*work.d[361]*work.L[495]-work.L[881]*work.d[369]*work.L[496]-work.L[882]*work.d[377]*work.L[497]-work.L[883]*work.d[385]*work.L[498]-work.L[884]*work.d[393]*work.L[499]-work.L[885]*work.d[401]*work.L[500]-work.L[886]*work.d[409]*work.L[501]-work.L[887]*work.d[417]*work.L[502]-work.L[888]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1097]-work.L[918]*work.d[337]*work.L[492]-work.L[919]*work.d[345]*work.L[493]-work.L[920]*work.d[353]*work.L[494]-work.L[921]*work.d[361]*work.L[495]-work.L[922]*work.d[369]*work.L[496]-work.L[923]*work.d[377]*work.L[497]-work.L[924]*work.d[385]*work.L[498]-work.L[925]*work.d[393]*work.L[499]-work.L[926]*work.d[401]*work.L[500]-work.L[927]*work.d[409]*work.L[501]-work.L[928]*work.d[417]*work.L[502]-work.L[929]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1098]-work.L[960]*work.d[337]*work.L[492]-work.L[961]*work.d[345]*work.L[493]-work.L[962]*work.d[353]*work.L[494]-work.L[963]*work.d[361]*work.L[495]-work.L[964]*work.d[369]*work.L[496]-work.L[965]*work.d[377]*work.L[497]-work.L[966]*work.d[385]*work.L[498]-work.L[967]*work.d[393]*work.L[499]-work.L[968]*work.d[401]*work.L[500]-work.L[969]*work.d[409]*work.L[501]-work.L[970]*work.d[417]*work.L[502]-work.L[971]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1099]-work.L[1003]*work.d[337]*work.L[492]-work.L[1004]*work.d[345]*work.L[493]-work.L[1005]*work.d[353]*work.L[494]-work.L[1006]*work.d[361]*work.L[495]-work.L[1007]*work.d[369]*work.L[496]-work.L[1008]*work.d[377]*work.L[497]-work.L[1009]*work.d[385]*work.L[498]-work.L[1010]*work.d[393]*work.L[499]-work.L[1011]*work.d[401]*work.L[500]-work.L[1012]*work.d[409]*work.L[501]-work.L[1013]*work.d[417]*work.L[502]-work.L[1014]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1100]-work.L[1047]*work.d[337]*work.L[492]-work.L[1048]*work.d[345]*work.L[493]-work.L[1049]*work.d[353]*work.L[494]-work.L[1050]*work.d[361]*work.L[495]-work.L[1051]*work.d[369]*work.L[496]-work.L[1052]*work.d[377]*work.L[497]-work.L[1053]*work.d[385]*work.L[498]-work.L[1054]*work.d[393]*work.L[499]-work.L[1055]*work.d[401]*work.L[500]-work.L[1056]*work.d[409]*work.L[501]-work.L[1057]*work.d[417]*work.L[502]-work.L[1058]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1101]-work.L[1092]*work.d[337]*work.L[492]-work.L[1093]*work.d[345]*work.L[493]-work.L[1094]*work.d[353]*work.L[494]-work.L[1095]*work.d[361]*work.L[495]-work.L[1096]*work.d[369]*work.L[496]-work.L[1097]*work.d[377]*work.L[497]-work.L[1098]*work.d[385]*work.L[498]-work.L[1099]*work.d[393]*work.L[499]-work.L[1100]*work.d[401]*work.L[500]-work.L[1101]*work.d[409]*work.L[501]-work.L[1102]*work.d[417]*work.L[502]-work.L[1103]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1102]-work.L[1138]*work.d[337]*work.L[492]-work.L[1139]*work.d[345]*work.L[493]-work.L[1140]*work.d[353]*work.L[494]-work.L[1141]*work.d[361]*work.L[495]-work.L[1142]*work.d[369]*work.L[496]-work.L[1143]*work.d[377]*work.L[497]-work.L[1144]*work.d[385]*work.L[498]-work.L[1145]*work.d[393]*work.L[499]-work.L[1146]*work.d[401]*work.L[500]-work.L[1147]*work.d[409]*work.L[501]-work.L[1148]*work.d[417]*work.L[502]-work.L[1149]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1103]-work.L[1167]*work.d[337]*work.L[492]-work.L[1168]*work.d[345]*work.L[493]-work.L[1169]*work.d[353]*work.L[494]-work.L[1170]*work.d[361]*work.L[495]-work.L[1171]*work.d[369]*work.L[496]-work.L[1172]*work.d[377]*work.L[497]-work.L[1173]*work.d[385]*work.L[498]-work.L[1174]*work.d[393]*work.L[499]-work.L[1175]*work.d[401]*work.L[500]-work.L[1176]*work.d[409]*work.L[501]-work.L[1177]*work.d[417]*work.L[502]-work.L[1178]*work.d[425]*1;
  residual += temp*temp;

  temp = work.KKT[1119]-work.L[522]*work.d[337]*work.L[522]-work.L[523]*work.d[345]*work.L[523]-work.L[524]*work.d[353]*work.L[524]-work.L[525]*work.d[361]*work.L[525]-work.L[526]*work.d[369]*work.L[526]-work.L[527]*work.d[377]*work.L[527]-work.L[528]*work.d[385]*work.L[528]-work.L[529]*work.d[393]*work.L[529]-work.L[530]*work.d[401]*work.L[530]-work.L[531]*work.d[409]*work.L[531]-work.L[532]*work.d[417]*work.L[532]-work.L[533]*work.d[425]*work.L[533]-1*work.d[433]*1-work.L[534]*work.d[432]*work.L[534];
  residual += temp*temp;

  temp = work.KKT[1120]-work.L[553]*work.d[337]*work.L[522]-work.L[554]*work.d[345]*work.L[523]-work.L[555]*work.d[353]*work.L[524]-work.L[556]*work.d[361]*work.L[525]-work.L[557]*work.d[369]*work.L[526]-work.L[558]*work.d[377]*work.L[527]-work.L[559]*work.d[385]*work.L[528]-work.L[560]*work.d[393]*work.L[529]-work.L[561]*work.d[401]*work.L[530]-work.L[562]*work.d[409]*work.L[531]-work.L[563]*work.d[417]*work.L[532]-work.L[564]*work.d[425]*work.L[533]-work.L[565]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1121]-work.L[585]*work.d[337]*work.L[522]-work.L[586]*work.d[345]*work.L[523]-work.L[587]*work.d[353]*work.L[524]-work.L[588]*work.d[361]*work.L[525]-work.L[589]*work.d[369]*work.L[526]-work.L[590]*work.d[377]*work.L[527]-work.L[591]*work.d[385]*work.L[528]-work.L[592]*work.d[393]*work.L[529]-work.L[593]*work.d[401]*work.L[530]-work.L[594]*work.d[409]*work.L[531]-work.L[595]*work.d[417]*work.L[532]-work.L[596]*work.d[425]*work.L[533]-work.L[597]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1122]-work.L[618]*work.d[337]*work.L[522]-work.L[619]*work.d[345]*work.L[523]-work.L[620]*work.d[353]*work.L[524]-work.L[621]*work.d[361]*work.L[525]-work.L[622]*work.d[369]*work.L[526]-work.L[623]*work.d[377]*work.L[527]-work.L[624]*work.d[385]*work.L[528]-work.L[625]*work.d[393]*work.L[529]-work.L[626]*work.d[401]*work.L[530]-work.L[627]*work.d[409]*work.L[531]-work.L[628]*work.d[417]*work.L[532]-work.L[629]*work.d[425]*work.L[533]-work.L[630]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1123]-work.L[652]*work.d[337]*work.L[522]-work.L[653]*work.d[345]*work.L[523]-work.L[654]*work.d[353]*work.L[524]-work.L[655]*work.d[361]*work.L[525]-work.L[656]*work.d[369]*work.L[526]-work.L[657]*work.d[377]*work.L[527]-work.L[658]*work.d[385]*work.L[528]-work.L[659]*work.d[393]*work.L[529]-work.L[660]*work.d[401]*work.L[530]-work.L[661]*work.d[409]*work.L[531]-work.L[662]*work.d[417]*work.L[532]-work.L[663]*work.d[425]*work.L[533]-work.L[664]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1124]-work.L[687]*work.d[337]*work.L[522]-work.L[688]*work.d[345]*work.L[523]-work.L[689]*work.d[353]*work.L[524]-work.L[690]*work.d[361]*work.L[525]-work.L[691]*work.d[369]*work.L[526]-work.L[692]*work.d[377]*work.L[527]-work.L[693]*work.d[385]*work.L[528]-work.L[694]*work.d[393]*work.L[529]-work.L[695]*work.d[401]*work.L[530]-work.L[696]*work.d[409]*work.L[531]-work.L[697]*work.d[417]*work.L[532]-work.L[698]*work.d[425]*work.L[533]-work.L[699]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1125]-work.L[723]*work.d[337]*work.L[522]-work.L[724]*work.d[345]*work.L[523]-work.L[725]*work.d[353]*work.L[524]-work.L[726]*work.d[361]*work.L[525]-work.L[727]*work.d[369]*work.L[526]-work.L[728]*work.d[377]*work.L[527]-work.L[729]*work.d[385]*work.L[528]-work.L[730]*work.d[393]*work.L[529]-work.L[731]*work.d[401]*work.L[530]-work.L[732]*work.d[409]*work.L[531]-work.L[733]*work.d[417]*work.L[532]-work.L[734]*work.d[425]*work.L[533]-work.L[735]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1126]-work.L[760]*work.d[337]*work.L[522]-work.L[761]*work.d[345]*work.L[523]-work.L[762]*work.d[353]*work.L[524]-work.L[763]*work.d[361]*work.L[525]-work.L[764]*work.d[369]*work.L[526]-work.L[765]*work.d[377]*work.L[527]-work.L[766]*work.d[385]*work.L[528]-work.L[767]*work.d[393]*work.L[529]-work.L[768]*work.d[401]*work.L[530]-work.L[769]*work.d[409]*work.L[531]-work.L[770]*work.d[417]*work.L[532]-work.L[771]*work.d[425]*work.L[533]-work.L[772]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1127]-work.L[798]*work.d[337]*work.L[522]-work.L[799]*work.d[345]*work.L[523]-work.L[800]*work.d[353]*work.L[524]-work.L[801]*work.d[361]*work.L[525]-work.L[802]*work.d[369]*work.L[526]-work.L[803]*work.d[377]*work.L[527]-work.L[804]*work.d[385]*work.L[528]-work.L[805]*work.d[393]*work.L[529]-work.L[806]*work.d[401]*work.L[530]-work.L[807]*work.d[409]*work.L[531]-work.L[808]*work.d[417]*work.L[532]-work.L[809]*work.d[425]*work.L[533]-work.L[810]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1128]-work.L[837]*work.d[337]*work.L[522]-work.L[838]*work.d[345]*work.L[523]-work.L[839]*work.d[353]*work.L[524]-work.L[840]*work.d[361]*work.L[525]-work.L[841]*work.d[369]*work.L[526]-work.L[842]*work.d[377]*work.L[527]-work.L[843]*work.d[385]*work.L[528]-work.L[844]*work.d[393]*work.L[529]-work.L[845]*work.d[401]*work.L[530]-work.L[846]*work.d[409]*work.L[531]-work.L[847]*work.d[417]*work.L[532]-work.L[848]*work.d[425]*work.L[533]-work.L[849]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1129]-work.L[877]*work.d[337]*work.L[522]-work.L[878]*work.d[345]*work.L[523]-work.L[879]*work.d[353]*work.L[524]-work.L[880]*work.d[361]*work.L[525]-work.L[881]*work.d[369]*work.L[526]-work.L[882]*work.d[377]*work.L[527]-work.L[883]*work.d[385]*work.L[528]-work.L[884]*work.d[393]*work.L[529]-work.L[885]*work.d[401]*work.L[530]-work.L[886]*work.d[409]*work.L[531]-work.L[887]*work.d[417]*work.L[532]-work.L[888]*work.d[425]*work.L[533]-work.L[889]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1130]-work.L[918]*work.d[337]*work.L[522]-work.L[919]*work.d[345]*work.L[523]-work.L[920]*work.d[353]*work.L[524]-work.L[921]*work.d[361]*work.L[525]-work.L[922]*work.d[369]*work.L[526]-work.L[923]*work.d[377]*work.L[527]-work.L[924]*work.d[385]*work.L[528]-work.L[925]*work.d[393]*work.L[529]-work.L[926]*work.d[401]*work.L[530]-work.L[927]*work.d[409]*work.L[531]-work.L[928]*work.d[417]*work.L[532]-work.L[929]*work.d[425]*work.L[533]-work.L[930]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1131]-work.L[960]*work.d[337]*work.L[522]-work.L[961]*work.d[345]*work.L[523]-work.L[962]*work.d[353]*work.L[524]-work.L[963]*work.d[361]*work.L[525]-work.L[964]*work.d[369]*work.L[526]-work.L[965]*work.d[377]*work.L[527]-work.L[966]*work.d[385]*work.L[528]-work.L[967]*work.d[393]*work.L[529]-work.L[968]*work.d[401]*work.L[530]-work.L[969]*work.d[409]*work.L[531]-work.L[970]*work.d[417]*work.L[532]-work.L[971]*work.d[425]*work.L[533]-work.L[972]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1132]-work.L[1003]*work.d[337]*work.L[522]-work.L[1004]*work.d[345]*work.L[523]-work.L[1005]*work.d[353]*work.L[524]-work.L[1006]*work.d[361]*work.L[525]-work.L[1007]*work.d[369]*work.L[526]-work.L[1008]*work.d[377]*work.L[527]-work.L[1009]*work.d[385]*work.L[528]-work.L[1010]*work.d[393]*work.L[529]-work.L[1011]*work.d[401]*work.L[530]-work.L[1012]*work.d[409]*work.L[531]-work.L[1013]*work.d[417]*work.L[532]-work.L[1014]*work.d[425]*work.L[533]-work.L[1015]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1133]-work.L[1047]*work.d[337]*work.L[522]-work.L[1048]*work.d[345]*work.L[523]-work.L[1049]*work.d[353]*work.L[524]-work.L[1050]*work.d[361]*work.L[525]-work.L[1051]*work.d[369]*work.L[526]-work.L[1052]*work.d[377]*work.L[527]-work.L[1053]*work.d[385]*work.L[528]-work.L[1054]*work.d[393]*work.L[529]-work.L[1055]*work.d[401]*work.L[530]-work.L[1056]*work.d[409]*work.L[531]-work.L[1057]*work.d[417]*work.L[532]-work.L[1058]*work.d[425]*work.L[533]-work.L[1059]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1134]-work.L[1092]*work.d[337]*work.L[522]-work.L[1093]*work.d[345]*work.L[523]-work.L[1094]*work.d[353]*work.L[524]-work.L[1095]*work.d[361]*work.L[525]-work.L[1096]*work.d[369]*work.L[526]-work.L[1097]*work.d[377]*work.L[527]-work.L[1098]*work.d[385]*work.L[528]-work.L[1099]*work.d[393]*work.L[529]-work.L[1100]*work.d[401]*work.L[530]-work.L[1101]*work.d[409]*work.L[531]-work.L[1102]*work.d[417]*work.L[532]-work.L[1103]*work.d[425]*work.L[533]-work.L[1104]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1135]-work.L[1138]*work.d[337]*work.L[522]-work.L[1139]*work.d[345]*work.L[523]-work.L[1140]*work.d[353]*work.L[524]-work.L[1141]*work.d[361]*work.L[525]-work.L[1142]*work.d[369]*work.L[526]-work.L[1143]*work.d[377]*work.L[527]-work.L[1144]*work.d[385]*work.L[528]-work.L[1145]*work.d[393]*work.L[529]-work.L[1146]*work.d[401]*work.L[530]-work.L[1147]*work.d[409]*work.L[531]-work.L[1148]*work.d[417]*work.L[532]-work.L[1149]*work.d[425]*work.L[533]-work.L[1150]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1136]-work.L[1167]*work.d[337]*work.L[522]-work.L[1168]*work.d[345]*work.L[523]-work.L[1169]*work.d[353]*work.L[524]-work.L[1170]*work.d[361]*work.L[525]-work.L[1171]*work.d[369]*work.L[526]-work.L[1172]*work.d[377]*work.L[527]-work.L[1173]*work.d[385]*work.L[528]-work.L[1174]*work.d[393]*work.L[529]-work.L[1175]*work.d[401]*work.L[530]-work.L[1176]*work.d[409]*work.L[531]-work.L[1177]*work.d[417]*work.L[532]-work.L[1178]*work.d[425]*work.L[533]-work.L[1179]*work.d[433]*1;
  residual += temp*temp;

  temp = work.KKT[1152]-work.L[553]*work.d[337]*work.L[553]-work.L[554]*work.d[345]*work.L[554]-work.L[555]*work.d[353]*work.L[555]-work.L[556]*work.d[361]*work.L[556]-work.L[557]*work.d[369]*work.L[557]-work.L[558]*work.d[377]*work.L[558]-work.L[559]*work.d[385]*work.L[559]-work.L[560]*work.d[393]*work.L[560]-work.L[561]*work.d[401]*work.L[561]-work.L[562]*work.d[409]*work.L[562]-work.L[563]*work.d[417]*work.L[563]-work.L[564]*work.d[425]*work.L[564]-work.L[565]*work.d[433]*work.L[565]-1*work.d[441]*1-work.L[566]*work.d[440]*work.L[566];
  residual += temp*temp;

  temp = work.KKT[1153]-work.L[585]*work.d[337]*work.L[553]-work.L[586]*work.d[345]*work.L[554]-work.L[587]*work.d[353]*work.L[555]-work.L[588]*work.d[361]*work.L[556]-work.L[589]*work.d[369]*work.L[557]-work.L[590]*work.d[377]*work.L[558]-work.L[591]*work.d[385]*work.L[559]-work.L[592]*work.d[393]*work.L[560]-work.L[593]*work.d[401]*work.L[561]-work.L[594]*work.d[409]*work.L[562]-work.L[595]*work.d[417]*work.L[563]-work.L[596]*work.d[425]*work.L[564]-work.L[597]*work.d[433]*work.L[565]-work.L[598]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1154]-work.L[618]*work.d[337]*work.L[553]-work.L[619]*work.d[345]*work.L[554]-work.L[620]*work.d[353]*work.L[555]-work.L[621]*work.d[361]*work.L[556]-work.L[622]*work.d[369]*work.L[557]-work.L[623]*work.d[377]*work.L[558]-work.L[624]*work.d[385]*work.L[559]-work.L[625]*work.d[393]*work.L[560]-work.L[626]*work.d[401]*work.L[561]-work.L[627]*work.d[409]*work.L[562]-work.L[628]*work.d[417]*work.L[563]-work.L[629]*work.d[425]*work.L[564]-work.L[630]*work.d[433]*work.L[565]-work.L[631]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1155]-work.L[652]*work.d[337]*work.L[553]-work.L[653]*work.d[345]*work.L[554]-work.L[654]*work.d[353]*work.L[555]-work.L[655]*work.d[361]*work.L[556]-work.L[656]*work.d[369]*work.L[557]-work.L[657]*work.d[377]*work.L[558]-work.L[658]*work.d[385]*work.L[559]-work.L[659]*work.d[393]*work.L[560]-work.L[660]*work.d[401]*work.L[561]-work.L[661]*work.d[409]*work.L[562]-work.L[662]*work.d[417]*work.L[563]-work.L[663]*work.d[425]*work.L[564]-work.L[664]*work.d[433]*work.L[565]-work.L[665]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1156]-work.L[687]*work.d[337]*work.L[553]-work.L[688]*work.d[345]*work.L[554]-work.L[689]*work.d[353]*work.L[555]-work.L[690]*work.d[361]*work.L[556]-work.L[691]*work.d[369]*work.L[557]-work.L[692]*work.d[377]*work.L[558]-work.L[693]*work.d[385]*work.L[559]-work.L[694]*work.d[393]*work.L[560]-work.L[695]*work.d[401]*work.L[561]-work.L[696]*work.d[409]*work.L[562]-work.L[697]*work.d[417]*work.L[563]-work.L[698]*work.d[425]*work.L[564]-work.L[699]*work.d[433]*work.L[565]-work.L[700]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1157]-work.L[723]*work.d[337]*work.L[553]-work.L[724]*work.d[345]*work.L[554]-work.L[725]*work.d[353]*work.L[555]-work.L[726]*work.d[361]*work.L[556]-work.L[727]*work.d[369]*work.L[557]-work.L[728]*work.d[377]*work.L[558]-work.L[729]*work.d[385]*work.L[559]-work.L[730]*work.d[393]*work.L[560]-work.L[731]*work.d[401]*work.L[561]-work.L[732]*work.d[409]*work.L[562]-work.L[733]*work.d[417]*work.L[563]-work.L[734]*work.d[425]*work.L[564]-work.L[735]*work.d[433]*work.L[565]-work.L[736]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1158]-work.L[760]*work.d[337]*work.L[553]-work.L[761]*work.d[345]*work.L[554]-work.L[762]*work.d[353]*work.L[555]-work.L[763]*work.d[361]*work.L[556]-work.L[764]*work.d[369]*work.L[557]-work.L[765]*work.d[377]*work.L[558]-work.L[766]*work.d[385]*work.L[559]-work.L[767]*work.d[393]*work.L[560]-work.L[768]*work.d[401]*work.L[561]-work.L[769]*work.d[409]*work.L[562]-work.L[770]*work.d[417]*work.L[563]-work.L[771]*work.d[425]*work.L[564]-work.L[772]*work.d[433]*work.L[565]-work.L[773]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1159]-work.L[798]*work.d[337]*work.L[553]-work.L[799]*work.d[345]*work.L[554]-work.L[800]*work.d[353]*work.L[555]-work.L[801]*work.d[361]*work.L[556]-work.L[802]*work.d[369]*work.L[557]-work.L[803]*work.d[377]*work.L[558]-work.L[804]*work.d[385]*work.L[559]-work.L[805]*work.d[393]*work.L[560]-work.L[806]*work.d[401]*work.L[561]-work.L[807]*work.d[409]*work.L[562]-work.L[808]*work.d[417]*work.L[563]-work.L[809]*work.d[425]*work.L[564]-work.L[810]*work.d[433]*work.L[565]-work.L[811]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1160]-work.L[837]*work.d[337]*work.L[553]-work.L[838]*work.d[345]*work.L[554]-work.L[839]*work.d[353]*work.L[555]-work.L[840]*work.d[361]*work.L[556]-work.L[841]*work.d[369]*work.L[557]-work.L[842]*work.d[377]*work.L[558]-work.L[843]*work.d[385]*work.L[559]-work.L[844]*work.d[393]*work.L[560]-work.L[845]*work.d[401]*work.L[561]-work.L[846]*work.d[409]*work.L[562]-work.L[847]*work.d[417]*work.L[563]-work.L[848]*work.d[425]*work.L[564]-work.L[849]*work.d[433]*work.L[565]-work.L[850]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1161]-work.L[877]*work.d[337]*work.L[553]-work.L[878]*work.d[345]*work.L[554]-work.L[879]*work.d[353]*work.L[555]-work.L[880]*work.d[361]*work.L[556]-work.L[881]*work.d[369]*work.L[557]-work.L[882]*work.d[377]*work.L[558]-work.L[883]*work.d[385]*work.L[559]-work.L[884]*work.d[393]*work.L[560]-work.L[885]*work.d[401]*work.L[561]-work.L[886]*work.d[409]*work.L[562]-work.L[887]*work.d[417]*work.L[563]-work.L[888]*work.d[425]*work.L[564]-work.L[889]*work.d[433]*work.L[565]-work.L[890]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1162]-work.L[918]*work.d[337]*work.L[553]-work.L[919]*work.d[345]*work.L[554]-work.L[920]*work.d[353]*work.L[555]-work.L[921]*work.d[361]*work.L[556]-work.L[922]*work.d[369]*work.L[557]-work.L[923]*work.d[377]*work.L[558]-work.L[924]*work.d[385]*work.L[559]-work.L[925]*work.d[393]*work.L[560]-work.L[926]*work.d[401]*work.L[561]-work.L[927]*work.d[409]*work.L[562]-work.L[928]*work.d[417]*work.L[563]-work.L[929]*work.d[425]*work.L[564]-work.L[930]*work.d[433]*work.L[565]-work.L[931]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1163]-work.L[960]*work.d[337]*work.L[553]-work.L[961]*work.d[345]*work.L[554]-work.L[962]*work.d[353]*work.L[555]-work.L[963]*work.d[361]*work.L[556]-work.L[964]*work.d[369]*work.L[557]-work.L[965]*work.d[377]*work.L[558]-work.L[966]*work.d[385]*work.L[559]-work.L[967]*work.d[393]*work.L[560]-work.L[968]*work.d[401]*work.L[561]-work.L[969]*work.d[409]*work.L[562]-work.L[970]*work.d[417]*work.L[563]-work.L[971]*work.d[425]*work.L[564]-work.L[972]*work.d[433]*work.L[565]-work.L[973]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1164]-work.L[1003]*work.d[337]*work.L[553]-work.L[1004]*work.d[345]*work.L[554]-work.L[1005]*work.d[353]*work.L[555]-work.L[1006]*work.d[361]*work.L[556]-work.L[1007]*work.d[369]*work.L[557]-work.L[1008]*work.d[377]*work.L[558]-work.L[1009]*work.d[385]*work.L[559]-work.L[1010]*work.d[393]*work.L[560]-work.L[1011]*work.d[401]*work.L[561]-work.L[1012]*work.d[409]*work.L[562]-work.L[1013]*work.d[417]*work.L[563]-work.L[1014]*work.d[425]*work.L[564]-work.L[1015]*work.d[433]*work.L[565]-work.L[1016]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1165]-work.L[1047]*work.d[337]*work.L[553]-work.L[1048]*work.d[345]*work.L[554]-work.L[1049]*work.d[353]*work.L[555]-work.L[1050]*work.d[361]*work.L[556]-work.L[1051]*work.d[369]*work.L[557]-work.L[1052]*work.d[377]*work.L[558]-work.L[1053]*work.d[385]*work.L[559]-work.L[1054]*work.d[393]*work.L[560]-work.L[1055]*work.d[401]*work.L[561]-work.L[1056]*work.d[409]*work.L[562]-work.L[1057]*work.d[417]*work.L[563]-work.L[1058]*work.d[425]*work.L[564]-work.L[1059]*work.d[433]*work.L[565]-work.L[1060]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1166]-work.L[1092]*work.d[337]*work.L[553]-work.L[1093]*work.d[345]*work.L[554]-work.L[1094]*work.d[353]*work.L[555]-work.L[1095]*work.d[361]*work.L[556]-work.L[1096]*work.d[369]*work.L[557]-work.L[1097]*work.d[377]*work.L[558]-work.L[1098]*work.d[385]*work.L[559]-work.L[1099]*work.d[393]*work.L[560]-work.L[1100]*work.d[401]*work.L[561]-work.L[1101]*work.d[409]*work.L[562]-work.L[1102]*work.d[417]*work.L[563]-work.L[1103]*work.d[425]*work.L[564]-work.L[1104]*work.d[433]*work.L[565]-work.L[1105]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1167]-work.L[1138]*work.d[337]*work.L[553]-work.L[1139]*work.d[345]*work.L[554]-work.L[1140]*work.d[353]*work.L[555]-work.L[1141]*work.d[361]*work.L[556]-work.L[1142]*work.d[369]*work.L[557]-work.L[1143]*work.d[377]*work.L[558]-work.L[1144]*work.d[385]*work.L[559]-work.L[1145]*work.d[393]*work.L[560]-work.L[1146]*work.d[401]*work.L[561]-work.L[1147]*work.d[409]*work.L[562]-work.L[1148]*work.d[417]*work.L[563]-work.L[1149]*work.d[425]*work.L[564]-work.L[1150]*work.d[433]*work.L[565]-work.L[1151]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1168]-work.L[1167]*work.d[337]*work.L[553]-work.L[1168]*work.d[345]*work.L[554]-work.L[1169]*work.d[353]*work.L[555]-work.L[1170]*work.d[361]*work.L[556]-work.L[1171]*work.d[369]*work.L[557]-work.L[1172]*work.d[377]*work.L[558]-work.L[1173]*work.d[385]*work.L[559]-work.L[1174]*work.d[393]*work.L[560]-work.L[1175]*work.d[401]*work.L[561]-work.L[1176]*work.d[409]*work.L[562]-work.L[1177]*work.d[417]*work.L[563]-work.L[1178]*work.d[425]*work.L[564]-work.L[1179]*work.d[433]*work.L[565]-work.L[1180]*work.d[441]*1;
  residual += temp*temp;

  temp = work.KKT[1184]-work.L[585]*work.d[337]*work.L[585]-work.L[586]*work.d[345]*work.L[586]-work.L[587]*work.d[353]*work.L[587]-work.L[588]*work.d[361]*work.L[588]-work.L[589]*work.d[369]*work.L[589]-work.L[590]*work.d[377]*work.L[590]-work.L[591]*work.d[385]*work.L[591]-work.L[592]*work.d[393]*work.L[592]-work.L[593]*work.d[401]*work.L[593]-work.L[594]*work.d[409]*work.L[594]-work.L[595]*work.d[417]*work.L[595]-work.L[596]*work.d[425]*work.L[596]-work.L[597]*work.d[433]*work.L[597]-work.L[598]*work.d[441]*work.L[598]-1*work.d[449]*1-work.L[599]*work.d[448]*work.L[599];
  residual += temp*temp;

  temp = work.KKT[1185]-work.L[618]*work.d[337]*work.L[585]-work.L[619]*work.d[345]*work.L[586]-work.L[620]*work.d[353]*work.L[587]-work.L[621]*work.d[361]*work.L[588]-work.L[622]*work.d[369]*work.L[589]-work.L[623]*work.d[377]*work.L[590]-work.L[624]*work.d[385]*work.L[591]-work.L[625]*work.d[393]*work.L[592]-work.L[626]*work.d[401]*work.L[593]-work.L[627]*work.d[409]*work.L[594]-work.L[628]*work.d[417]*work.L[595]-work.L[629]*work.d[425]*work.L[596]-work.L[630]*work.d[433]*work.L[597]-work.L[631]*work.d[441]*work.L[598]-work.L[632]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1186]-work.L[652]*work.d[337]*work.L[585]-work.L[653]*work.d[345]*work.L[586]-work.L[654]*work.d[353]*work.L[587]-work.L[655]*work.d[361]*work.L[588]-work.L[656]*work.d[369]*work.L[589]-work.L[657]*work.d[377]*work.L[590]-work.L[658]*work.d[385]*work.L[591]-work.L[659]*work.d[393]*work.L[592]-work.L[660]*work.d[401]*work.L[593]-work.L[661]*work.d[409]*work.L[594]-work.L[662]*work.d[417]*work.L[595]-work.L[663]*work.d[425]*work.L[596]-work.L[664]*work.d[433]*work.L[597]-work.L[665]*work.d[441]*work.L[598]-work.L[666]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1187]-work.L[687]*work.d[337]*work.L[585]-work.L[688]*work.d[345]*work.L[586]-work.L[689]*work.d[353]*work.L[587]-work.L[690]*work.d[361]*work.L[588]-work.L[691]*work.d[369]*work.L[589]-work.L[692]*work.d[377]*work.L[590]-work.L[693]*work.d[385]*work.L[591]-work.L[694]*work.d[393]*work.L[592]-work.L[695]*work.d[401]*work.L[593]-work.L[696]*work.d[409]*work.L[594]-work.L[697]*work.d[417]*work.L[595]-work.L[698]*work.d[425]*work.L[596]-work.L[699]*work.d[433]*work.L[597]-work.L[700]*work.d[441]*work.L[598]-work.L[701]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1188]-work.L[723]*work.d[337]*work.L[585]-work.L[724]*work.d[345]*work.L[586]-work.L[725]*work.d[353]*work.L[587]-work.L[726]*work.d[361]*work.L[588]-work.L[727]*work.d[369]*work.L[589]-work.L[728]*work.d[377]*work.L[590]-work.L[729]*work.d[385]*work.L[591]-work.L[730]*work.d[393]*work.L[592]-work.L[731]*work.d[401]*work.L[593]-work.L[732]*work.d[409]*work.L[594]-work.L[733]*work.d[417]*work.L[595]-work.L[734]*work.d[425]*work.L[596]-work.L[735]*work.d[433]*work.L[597]-work.L[736]*work.d[441]*work.L[598]-work.L[737]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1189]-work.L[760]*work.d[337]*work.L[585]-work.L[761]*work.d[345]*work.L[586]-work.L[762]*work.d[353]*work.L[587]-work.L[763]*work.d[361]*work.L[588]-work.L[764]*work.d[369]*work.L[589]-work.L[765]*work.d[377]*work.L[590]-work.L[766]*work.d[385]*work.L[591]-work.L[767]*work.d[393]*work.L[592]-work.L[768]*work.d[401]*work.L[593]-work.L[769]*work.d[409]*work.L[594]-work.L[770]*work.d[417]*work.L[595]-work.L[771]*work.d[425]*work.L[596]-work.L[772]*work.d[433]*work.L[597]-work.L[773]*work.d[441]*work.L[598]-work.L[774]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1190]-work.L[798]*work.d[337]*work.L[585]-work.L[799]*work.d[345]*work.L[586]-work.L[800]*work.d[353]*work.L[587]-work.L[801]*work.d[361]*work.L[588]-work.L[802]*work.d[369]*work.L[589]-work.L[803]*work.d[377]*work.L[590]-work.L[804]*work.d[385]*work.L[591]-work.L[805]*work.d[393]*work.L[592]-work.L[806]*work.d[401]*work.L[593]-work.L[807]*work.d[409]*work.L[594]-work.L[808]*work.d[417]*work.L[595]-work.L[809]*work.d[425]*work.L[596]-work.L[810]*work.d[433]*work.L[597]-work.L[811]*work.d[441]*work.L[598]-work.L[812]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1191]-work.L[837]*work.d[337]*work.L[585]-work.L[838]*work.d[345]*work.L[586]-work.L[839]*work.d[353]*work.L[587]-work.L[840]*work.d[361]*work.L[588]-work.L[841]*work.d[369]*work.L[589]-work.L[842]*work.d[377]*work.L[590]-work.L[843]*work.d[385]*work.L[591]-work.L[844]*work.d[393]*work.L[592]-work.L[845]*work.d[401]*work.L[593]-work.L[846]*work.d[409]*work.L[594]-work.L[847]*work.d[417]*work.L[595]-work.L[848]*work.d[425]*work.L[596]-work.L[849]*work.d[433]*work.L[597]-work.L[850]*work.d[441]*work.L[598]-work.L[851]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1192]-work.L[877]*work.d[337]*work.L[585]-work.L[878]*work.d[345]*work.L[586]-work.L[879]*work.d[353]*work.L[587]-work.L[880]*work.d[361]*work.L[588]-work.L[881]*work.d[369]*work.L[589]-work.L[882]*work.d[377]*work.L[590]-work.L[883]*work.d[385]*work.L[591]-work.L[884]*work.d[393]*work.L[592]-work.L[885]*work.d[401]*work.L[593]-work.L[886]*work.d[409]*work.L[594]-work.L[887]*work.d[417]*work.L[595]-work.L[888]*work.d[425]*work.L[596]-work.L[889]*work.d[433]*work.L[597]-work.L[890]*work.d[441]*work.L[598]-work.L[891]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1193]-work.L[918]*work.d[337]*work.L[585]-work.L[919]*work.d[345]*work.L[586]-work.L[920]*work.d[353]*work.L[587]-work.L[921]*work.d[361]*work.L[588]-work.L[922]*work.d[369]*work.L[589]-work.L[923]*work.d[377]*work.L[590]-work.L[924]*work.d[385]*work.L[591]-work.L[925]*work.d[393]*work.L[592]-work.L[926]*work.d[401]*work.L[593]-work.L[927]*work.d[409]*work.L[594]-work.L[928]*work.d[417]*work.L[595]-work.L[929]*work.d[425]*work.L[596]-work.L[930]*work.d[433]*work.L[597]-work.L[931]*work.d[441]*work.L[598]-work.L[932]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1194]-work.L[960]*work.d[337]*work.L[585]-work.L[961]*work.d[345]*work.L[586]-work.L[962]*work.d[353]*work.L[587]-work.L[963]*work.d[361]*work.L[588]-work.L[964]*work.d[369]*work.L[589]-work.L[965]*work.d[377]*work.L[590]-work.L[966]*work.d[385]*work.L[591]-work.L[967]*work.d[393]*work.L[592]-work.L[968]*work.d[401]*work.L[593]-work.L[969]*work.d[409]*work.L[594]-work.L[970]*work.d[417]*work.L[595]-work.L[971]*work.d[425]*work.L[596]-work.L[972]*work.d[433]*work.L[597]-work.L[973]*work.d[441]*work.L[598]-work.L[974]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1195]-work.L[1003]*work.d[337]*work.L[585]-work.L[1004]*work.d[345]*work.L[586]-work.L[1005]*work.d[353]*work.L[587]-work.L[1006]*work.d[361]*work.L[588]-work.L[1007]*work.d[369]*work.L[589]-work.L[1008]*work.d[377]*work.L[590]-work.L[1009]*work.d[385]*work.L[591]-work.L[1010]*work.d[393]*work.L[592]-work.L[1011]*work.d[401]*work.L[593]-work.L[1012]*work.d[409]*work.L[594]-work.L[1013]*work.d[417]*work.L[595]-work.L[1014]*work.d[425]*work.L[596]-work.L[1015]*work.d[433]*work.L[597]-work.L[1016]*work.d[441]*work.L[598]-work.L[1017]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1196]-work.L[1047]*work.d[337]*work.L[585]-work.L[1048]*work.d[345]*work.L[586]-work.L[1049]*work.d[353]*work.L[587]-work.L[1050]*work.d[361]*work.L[588]-work.L[1051]*work.d[369]*work.L[589]-work.L[1052]*work.d[377]*work.L[590]-work.L[1053]*work.d[385]*work.L[591]-work.L[1054]*work.d[393]*work.L[592]-work.L[1055]*work.d[401]*work.L[593]-work.L[1056]*work.d[409]*work.L[594]-work.L[1057]*work.d[417]*work.L[595]-work.L[1058]*work.d[425]*work.L[596]-work.L[1059]*work.d[433]*work.L[597]-work.L[1060]*work.d[441]*work.L[598]-work.L[1061]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1197]-work.L[1092]*work.d[337]*work.L[585]-work.L[1093]*work.d[345]*work.L[586]-work.L[1094]*work.d[353]*work.L[587]-work.L[1095]*work.d[361]*work.L[588]-work.L[1096]*work.d[369]*work.L[589]-work.L[1097]*work.d[377]*work.L[590]-work.L[1098]*work.d[385]*work.L[591]-work.L[1099]*work.d[393]*work.L[592]-work.L[1100]*work.d[401]*work.L[593]-work.L[1101]*work.d[409]*work.L[594]-work.L[1102]*work.d[417]*work.L[595]-work.L[1103]*work.d[425]*work.L[596]-work.L[1104]*work.d[433]*work.L[597]-work.L[1105]*work.d[441]*work.L[598]-work.L[1106]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1198]-work.L[1138]*work.d[337]*work.L[585]-work.L[1139]*work.d[345]*work.L[586]-work.L[1140]*work.d[353]*work.L[587]-work.L[1141]*work.d[361]*work.L[588]-work.L[1142]*work.d[369]*work.L[589]-work.L[1143]*work.d[377]*work.L[590]-work.L[1144]*work.d[385]*work.L[591]-work.L[1145]*work.d[393]*work.L[592]-work.L[1146]*work.d[401]*work.L[593]-work.L[1147]*work.d[409]*work.L[594]-work.L[1148]*work.d[417]*work.L[595]-work.L[1149]*work.d[425]*work.L[596]-work.L[1150]*work.d[433]*work.L[597]-work.L[1151]*work.d[441]*work.L[598]-work.L[1152]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1199]-work.L[1167]*work.d[337]*work.L[585]-work.L[1168]*work.d[345]*work.L[586]-work.L[1169]*work.d[353]*work.L[587]-work.L[1170]*work.d[361]*work.L[588]-work.L[1171]*work.d[369]*work.L[589]-work.L[1172]*work.d[377]*work.L[590]-work.L[1173]*work.d[385]*work.L[591]-work.L[1174]*work.d[393]*work.L[592]-work.L[1175]*work.d[401]*work.L[593]-work.L[1176]*work.d[409]*work.L[594]-work.L[1177]*work.d[417]*work.L[595]-work.L[1178]*work.d[425]*work.L[596]-work.L[1179]*work.d[433]*work.L[597]-work.L[1180]*work.d[441]*work.L[598]-work.L[1181]*work.d[449]*1;
  residual += temp*temp;

  temp = work.KKT[1215]-work.L[618]*work.d[337]*work.L[618]-work.L[619]*work.d[345]*work.L[619]-work.L[620]*work.d[353]*work.L[620]-work.L[621]*work.d[361]*work.L[621]-work.L[622]*work.d[369]*work.L[622]-work.L[623]*work.d[377]*work.L[623]-work.L[624]*work.d[385]*work.L[624]-work.L[625]*work.d[393]*work.L[625]-work.L[626]*work.d[401]*work.L[626]-work.L[627]*work.d[409]*work.L[627]-work.L[628]*work.d[417]*work.L[628]-work.L[629]*work.d[425]*work.L[629]-work.L[630]*work.d[433]*work.L[630]-work.L[631]*work.d[441]*work.L[631]-work.L[632]*work.d[449]*work.L[632]-1*work.d[457]*1-work.L[633]*work.d[456]*work.L[633];
  residual += temp*temp;

  temp = work.KKT[1216]-work.L[652]*work.d[337]*work.L[618]-work.L[653]*work.d[345]*work.L[619]-work.L[654]*work.d[353]*work.L[620]-work.L[655]*work.d[361]*work.L[621]-work.L[656]*work.d[369]*work.L[622]-work.L[657]*work.d[377]*work.L[623]-work.L[658]*work.d[385]*work.L[624]-work.L[659]*work.d[393]*work.L[625]-work.L[660]*work.d[401]*work.L[626]-work.L[661]*work.d[409]*work.L[627]-work.L[662]*work.d[417]*work.L[628]-work.L[663]*work.d[425]*work.L[629]-work.L[664]*work.d[433]*work.L[630]-work.L[665]*work.d[441]*work.L[631]-work.L[666]*work.d[449]*work.L[632]-work.L[667]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1217]-work.L[687]*work.d[337]*work.L[618]-work.L[688]*work.d[345]*work.L[619]-work.L[689]*work.d[353]*work.L[620]-work.L[690]*work.d[361]*work.L[621]-work.L[691]*work.d[369]*work.L[622]-work.L[692]*work.d[377]*work.L[623]-work.L[693]*work.d[385]*work.L[624]-work.L[694]*work.d[393]*work.L[625]-work.L[695]*work.d[401]*work.L[626]-work.L[696]*work.d[409]*work.L[627]-work.L[697]*work.d[417]*work.L[628]-work.L[698]*work.d[425]*work.L[629]-work.L[699]*work.d[433]*work.L[630]-work.L[700]*work.d[441]*work.L[631]-work.L[701]*work.d[449]*work.L[632]-work.L[702]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1218]-work.L[723]*work.d[337]*work.L[618]-work.L[724]*work.d[345]*work.L[619]-work.L[725]*work.d[353]*work.L[620]-work.L[726]*work.d[361]*work.L[621]-work.L[727]*work.d[369]*work.L[622]-work.L[728]*work.d[377]*work.L[623]-work.L[729]*work.d[385]*work.L[624]-work.L[730]*work.d[393]*work.L[625]-work.L[731]*work.d[401]*work.L[626]-work.L[732]*work.d[409]*work.L[627]-work.L[733]*work.d[417]*work.L[628]-work.L[734]*work.d[425]*work.L[629]-work.L[735]*work.d[433]*work.L[630]-work.L[736]*work.d[441]*work.L[631]-work.L[737]*work.d[449]*work.L[632]-work.L[738]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1219]-work.L[760]*work.d[337]*work.L[618]-work.L[761]*work.d[345]*work.L[619]-work.L[762]*work.d[353]*work.L[620]-work.L[763]*work.d[361]*work.L[621]-work.L[764]*work.d[369]*work.L[622]-work.L[765]*work.d[377]*work.L[623]-work.L[766]*work.d[385]*work.L[624]-work.L[767]*work.d[393]*work.L[625]-work.L[768]*work.d[401]*work.L[626]-work.L[769]*work.d[409]*work.L[627]-work.L[770]*work.d[417]*work.L[628]-work.L[771]*work.d[425]*work.L[629]-work.L[772]*work.d[433]*work.L[630]-work.L[773]*work.d[441]*work.L[631]-work.L[774]*work.d[449]*work.L[632]-work.L[775]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1220]-work.L[798]*work.d[337]*work.L[618]-work.L[799]*work.d[345]*work.L[619]-work.L[800]*work.d[353]*work.L[620]-work.L[801]*work.d[361]*work.L[621]-work.L[802]*work.d[369]*work.L[622]-work.L[803]*work.d[377]*work.L[623]-work.L[804]*work.d[385]*work.L[624]-work.L[805]*work.d[393]*work.L[625]-work.L[806]*work.d[401]*work.L[626]-work.L[807]*work.d[409]*work.L[627]-work.L[808]*work.d[417]*work.L[628]-work.L[809]*work.d[425]*work.L[629]-work.L[810]*work.d[433]*work.L[630]-work.L[811]*work.d[441]*work.L[631]-work.L[812]*work.d[449]*work.L[632]-work.L[813]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1221]-work.L[837]*work.d[337]*work.L[618]-work.L[838]*work.d[345]*work.L[619]-work.L[839]*work.d[353]*work.L[620]-work.L[840]*work.d[361]*work.L[621]-work.L[841]*work.d[369]*work.L[622]-work.L[842]*work.d[377]*work.L[623]-work.L[843]*work.d[385]*work.L[624]-work.L[844]*work.d[393]*work.L[625]-work.L[845]*work.d[401]*work.L[626]-work.L[846]*work.d[409]*work.L[627]-work.L[847]*work.d[417]*work.L[628]-work.L[848]*work.d[425]*work.L[629]-work.L[849]*work.d[433]*work.L[630]-work.L[850]*work.d[441]*work.L[631]-work.L[851]*work.d[449]*work.L[632]-work.L[852]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1222]-work.L[877]*work.d[337]*work.L[618]-work.L[878]*work.d[345]*work.L[619]-work.L[879]*work.d[353]*work.L[620]-work.L[880]*work.d[361]*work.L[621]-work.L[881]*work.d[369]*work.L[622]-work.L[882]*work.d[377]*work.L[623]-work.L[883]*work.d[385]*work.L[624]-work.L[884]*work.d[393]*work.L[625]-work.L[885]*work.d[401]*work.L[626]-work.L[886]*work.d[409]*work.L[627]-work.L[887]*work.d[417]*work.L[628]-work.L[888]*work.d[425]*work.L[629]-work.L[889]*work.d[433]*work.L[630]-work.L[890]*work.d[441]*work.L[631]-work.L[891]*work.d[449]*work.L[632]-work.L[892]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1223]-work.L[918]*work.d[337]*work.L[618]-work.L[919]*work.d[345]*work.L[619]-work.L[920]*work.d[353]*work.L[620]-work.L[921]*work.d[361]*work.L[621]-work.L[922]*work.d[369]*work.L[622]-work.L[923]*work.d[377]*work.L[623]-work.L[924]*work.d[385]*work.L[624]-work.L[925]*work.d[393]*work.L[625]-work.L[926]*work.d[401]*work.L[626]-work.L[927]*work.d[409]*work.L[627]-work.L[928]*work.d[417]*work.L[628]-work.L[929]*work.d[425]*work.L[629]-work.L[930]*work.d[433]*work.L[630]-work.L[931]*work.d[441]*work.L[631]-work.L[932]*work.d[449]*work.L[632]-work.L[933]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1224]-work.L[960]*work.d[337]*work.L[618]-work.L[961]*work.d[345]*work.L[619]-work.L[962]*work.d[353]*work.L[620]-work.L[963]*work.d[361]*work.L[621]-work.L[964]*work.d[369]*work.L[622]-work.L[965]*work.d[377]*work.L[623]-work.L[966]*work.d[385]*work.L[624]-work.L[967]*work.d[393]*work.L[625]-work.L[968]*work.d[401]*work.L[626]-work.L[969]*work.d[409]*work.L[627]-work.L[970]*work.d[417]*work.L[628]-work.L[971]*work.d[425]*work.L[629]-work.L[972]*work.d[433]*work.L[630]-work.L[973]*work.d[441]*work.L[631]-work.L[974]*work.d[449]*work.L[632]-work.L[975]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1225]-work.L[1003]*work.d[337]*work.L[618]-work.L[1004]*work.d[345]*work.L[619]-work.L[1005]*work.d[353]*work.L[620]-work.L[1006]*work.d[361]*work.L[621]-work.L[1007]*work.d[369]*work.L[622]-work.L[1008]*work.d[377]*work.L[623]-work.L[1009]*work.d[385]*work.L[624]-work.L[1010]*work.d[393]*work.L[625]-work.L[1011]*work.d[401]*work.L[626]-work.L[1012]*work.d[409]*work.L[627]-work.L[1013]*work.d[417]*work.L[628]-work.L[1014]*work.d[425]*work.L[629]-work.L[1015]*work.d[433]*work.L[630]-work.L[1016]*work.d[441]*work.L[631]-work.L[1017]*work.d[449]*work.L[632]-work.L[1018]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1226]-work.L[1047]*work.d[337]*work.L[618]-work.L[1048]*work.d[345]*work.L[619]-work.L[1049]*work.d[353]*work.L[620]-work.L[1050]*work.d[361]*work.L[621]-work.L[1051]*work.d[369]*work.L[622]-work.L[1052]*work.d[377]*work.L[623]-work.L[1053]*work.d[385]*work.L[624]-work.L[1054]*work.d[393]*work.L[625]-work.L[1055]*work.d[401]*work.L[626]-work.L[1056]*work.d[409]*work.L[627]-work.L[1057]*work.d[417]*work.L[628]-work.L[1058]*work.d[425]*work.L[629]-work.L[1059]*work.d[433]*work.L[630]-work.L[1060]*work.d[441]*work.L[631]-work.L[1061]*work.d[449]*work.L[632]-work.L[1062]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1227]-work.L[1092]*work.d[337]*work.L[618]-work.L[1093]*work.d[345]*work.L[619]-work.L[1094]*work.d[353]*work.L[620]-work.L[1095]*work.d[361]*work.L[621]-work.L[1096]*work.d[369]*work.L[622]-work.L[1097]*work.d[377]*work.L[623]-work.L[1098]*work.d[385]*work.L[624]-work.L[1099]*work.d[393]*work.L[625]-work.L[1100]*work.d[401]*work.L[626]-work.L[1101]*work.d[409]*work.L[627]-work.L[1102]*work.d[417]*work.L[628]-work.L[1103]*work.d[425]*work.L[629]-work.L[1104]*work.d[433]*work.L[630]-work.L[1105]*work.d[441]*work.L[631]-work.L[1106]*work.d[449]*work.L[632]-work.L[1107]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1228]-work.L[1138]*work.d[337]*work.L[618]-work.L[1139]*work.d[345]*work.L[619]-work.L[1140]*work.d[353]*work.L[620]-work.L[1141]*work.d[361]*work.L[621]-work.L[1142]*work.d[369]*work.L[622]-work.L[1143]*work.d[377]*work.L[623]-work.L[1144]*work.d[385]*work.L[624]-work.L[1145]*work.d[393]*work.L[625]-work.L[1146]*work.d[401]*work.L[626]-work.L[1147]*work.d[409]*work.L[627]-work.L[1148]*work.d[417]*work.L[628]-work.L[1149]*work.d[425]*work.L[629]-work.L[1150]*work.d[433]*work.L[630]-work.L[1151]*work.d[441]*work.L[631]-work.L[1152]*work.d[449]*work.L[632]-work.L[1153]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1229]-work.L[1167]*work.d[337]*work.L[618]-work.L[1168]*work.d[345]*work.L[619]-work.L[1169]*work.d[353]*work.L[620]-work.L[1170]*work.d[361]*work.L[621]-work.L[1171]*work.d[369]*work.L[622]-work.L[1172]*work.d[377]*work.L[623]-work.L[1173]*work.d[385]*work.L[624]-work.L[1174]*work.d[393]*work.L[625]-work.L[1175]*work.d[401]*work.L[626]-work.L[1176]*work.d[409]*work.L[627]-work.L[1177]*work.d[417]*work.L[628]-work.L[1178]*work.d[425]*work.L[629]-work.L[1179]*work.d[433]*work.L[630]-work.L[1180]*work.d[441]*work.L[631]-work.L[1181]*work.d[449]*work.L[632]-work.L[1182]*work.d[457]*1;
  residual += temp*temp;

  temp = work.KKT[1245]-work.L[652]*work.d[337]*work.L[652]-work.L[653]*work.d[345]*work.L[653]-work.L[654]*work.d[353]*work.L[654]-work.L[655]*work.d[361]*work.L[655]-work.L[656]*work.d[369]*work.L[656]-work.L[657]*work.d[377]*work.L[657]-work.L[658]*work.d[385]*work.L[658]-work.L[659]*work.d[393]*work.L[659]-work.L[660]*work.d[401]*work.L[660]-work.L[661]*work.d[409]*work.L[661]-work.L[662]*work.d[417]*work.L[662]-work.L[663]*work.d[425]*work.L[663]-work.L[664]*work.d[433]*work.L[664]-work.L[665]*work.d[441]*work.L[665]-work.L[666]*work.d[449]*work.L[666]-work.L[667]*work.d[457]*work.L[667]-1*work.d[465]*1-work.L[668]*work.d[464]*work.L[668];
  residual += temp*temp;

  temp = work.KKT[1246]-work.L[687]*work.d[337]*work.L[652]-work.L[688]*work.d[345]*work.L[653]-work.L[689]*work.d[353]*work.L[654]-work.L[690]*work.d[361]*work.L[655]-work.L[691]*work.d[369]*work.L[656]-work.L[692]*work.d[377]*work.L[657]-work.L[693]*work.d[385]*work.L[658]-work.L[694]*work.d[393]*work.L[659]-work.L[695]*work.d[401]*work.L[660]-work.L[696]*work.d[409]*work.L[661]-work.L[697]*work.d[417]*work.L[662]-work.L[698]*work.d[425]*work.L[663]-work.L[699]*work.d[433]*work.L[664]-work.L[700]*work.d[441]*work.L[665]-work.L[701]*work.d[449]*work.L[666]-work.L[702]*work.d[457]*work.L[667]-work.L[703]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1247]-work.L[723]*work.d[337]*work.L[652]-work.L[724]*work.d[345]*work.L[653]-work.L[725]*work.d[353]*work.L[654]-work.L[726]*work.d[361]*work.L[655]-work.L[727]*work.d[369]*work.L[656]-work.L[728]*work.d[377]*work.L[657]-work.L[729]*work.d[385]*work.L[658]-work.L[730]*work.d[393]*work.L[659]-work.L[731]*work.d[401]*work.L[660]-work.L[732]*work.d[409]*work.L[661]-work.L[733]*work.d[417]*work.L[662]-work.L[734]*work.d[425]*work.L[663]-work.L[735]*work.d[433]*work.L[664]-work.L[736]*work.d[441]*work.L[665]-work.L[737]*work.d[449]*work.L[666]-work.L[738]*work.d[457]*work.L[667]-work.L[739]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1248]-work.L[760]*work.d[337]*work.L[652]-work.L[761]*work.d[345]*work.L[653]-work.L[762]*work.d[353]*work.L[654]-work.L[763]*work.d[361]*work.L[655]-work.L[764]*work.d[369]*work.L[656]-work.L[765]*work.d[377]*work.L[657]-work.L[766]*work.d[385]*work.L[658]-work.L[767]*work.d[393]*work.L[659]-work.L[768]*work.d[401]*work.L[660]-work.L[769]*work.d[409]*work.L[661]-work.L[770]*work.d[417]*work.L[662]-work.L[771]*work.d[425]*work.L[663]-work.L[772]*work.d[433]*work.L[664]-work.L[773]*work.d[441]*work.L[665]-work.L[774]*work.d[449]*work.L[666]-work.L[775]*work.d[457]*work.L[667]-work.L[776]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1249]-work.L[798]*work.d[337]*work.L[652]-work.L[799]*work.d[345]*work.L[653]-work.L[800]*work.d[353]*work.L[654]-work.L[801]*work.d[361]*work.L[655]-work.L[802]*work.d[369]*work.L[656]-work.L[803]*work.d[377]*work.L[657]-work.L[804]*work.d[385]*work.L[658]-work.L[805]*work.d[393]*work.L[659]-work.L[806]*work.d[401]*work.L[660]-work.L[807]*work.d[409]*work.L[661]-work.L[808]*work.d[417]*work.L[662]-work.L[809]*work.d[425]*work.L[663]-work.L[810]*work.d[433]*work.L[664]-work.L[811]*work.d[441]*work.L[665]-work.L[812]*work.d[449]*work.L[666]-work.L[813]*work.d[457]*work.L[667]-work.L[814]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1250]-work.L[837]*work.d[337]*work.L[652]-work.L[838]*work.d[345]*work.L[653]-work.L[839]*work.d[353]*work.L[654]-work.L[840]*work.d[361]*work.L[655]-work.L[841]*work.d[369]*work.L[656]-work.L[842]*work.d[377]*work.L[657]-work.L[843]*work.d[385]*work.L[658]-work.L[844]*work.d[393]*work.L[659]-work.L[845]*work.d[401]*work.L[660]-work.L[846]*work.d[409]*work.L[661]-work.L[847]*work.d[417]*work.L[662]-work.L[848]*work.d[425]*work.L[663]-work.L[849]*work.d[433]*work.L[664]-work.L[850]*work.d[441]*work.L[665]-work.L[851]*work.d[449]*work.L[666]-work.L[852]*work.d[457]*work.L[667]-work.L[853]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1251]-work.L[877]*work.d[337]*work.L[652]-work.L[878]*work.d[345]*work.L[653]-work.L[879]*work.d[353]*work.L[654]-work.L[880]*work.d[361]*work.L[655]-work.L[881]*work.d[369]*work.L[656]-work.L[882]*work.d[377]*work.L[657]-work.L[883]*work.d[385]*work.L[658]-work.L[884]*work.d[393]*work.L[659]-work.L[885]*work.d[401]*work.L[660]-work.L[886]*work.d[409]*work.L[661]-work.L[887]*work.d[417]*work.L[662]-work.L[888]*work.d[425]*work.L[663]-work.L[889]*work.d[433]*work.L[664]-work.L[890]*work.d[441]*work.L[665]-work.L[891]*work.d[449]*work.L[666]-work.L[892]*work.d[457]*work.L[667]-work.L[893]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1252]-work.L[918]*work.d[337]*work.L[652]-work.L[919]*work.d[345]*work.L[653]-work.L[920]*work.d[353]*work.L[654]-work.L[921]*work.d[361]*work.L[655]-work.L[922]*work.d[369]*work.L[656]-work.L[923]*work.d[377]*work.L[657]-work.L[924]*work.d[385]*work.L[658]-work.L[925]*work.d[393]*work.L[659]-work.L[926]*work.d[401]*work.L[660]-work.L[927]*work.d[409]*work.L[661]-work.L[928]*work.d[417]*work.L[662]-work.L[929]*work.d[425]*work.L[663]-work.L[930]*work.d[433]*work.L[664]-work.L[931]*work.d[441]*work.L[665]-work.L[932]*work.d[449]*work.L[666]-work.L[933]*work.d[457]*work.L[667]-work.L[934]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1253]-work.L[960]*work.d[337]*work.L[652]-work.L[961]*work.d[345]*work.L[653]-work.L[962]*work.d[353]*work.L[654]-work.L[963]*work.d[361]*work.L[655]-work.L[964]*work.d[369]*work.L[656]-work.L[965]*work.d[377]*work.L[657]-work.L[966]*work.d[385]*work.L[658]-work.L[967]*work.d[393]*work.L[659]-work.L[968]*work.d[401]*work.L[660]-work.L[969]*work.d[409]*work.L[661]-work.L[970]*work.d[417]*work.L[662]-work.L[971]*work.d[425]*work.L[663]-work.L[972]*work.d[433]*work.L[664]-work.L[973]*work.d[441]*work.L[665]-work.L[974]*work.d[449]*work.L[666]-work.L[975]*work.d[457]*work.L[667]-work.L[976]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1254]-work.L[1003]*work.d[337]*work.L[652]-work.L[1004]*work.d[345]*work.L[653]-work.L[1005]*work.d[353]*work.L[654]-work.L[1006]*work.d[361]*work.L[655]-work.L[1007]*work.d[369]*work.L[656]-work.L[1008]*work.d[377]*work.L[657]-work.L[1009]*work.d[385]*work.L[658]-work.L[1010]*work.d[393]*work.L[659]-work.L[1011]*work.d[401]*work.L[660]-work.L[1012]*work.d[409]*work.L[661]-work.L[1013]*work.d[417]*work.L[662]-work.L[1014]*work.d[425]*work.L[663]-work.L[1015]*work.d[433]*work.L[664]-work.L[1016]*work.d[441]*work.L[665]-work.L[1017]*work.d[449]*work.L[666]-work.L[1018]*work.d[457]*work.L[667]-work.L[1019]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1255]-work.L[1047]*work.d[337]*work.L[652]-work.L[1048]*work.d[345]*work.L[653]-work.L[1049]*work.d[353]*work.L[654]-work.L[1050]*work.d[361]*work.L[655]-work.L[1051]*work.d[369]*work.L[656]-work.L[1052]*work.d[377]*work.L[657]-work.L[1053]*work.d[385]*work.L[658]-work.L[1054]*work.d[393]*work.L[659]-work.L[1055]*work.d[401]*work.L[660]-work.L[1056]*work.d[409]*work.L[661]-work.L[1057]*work.d[417]*work.L[662]-work.L[1058]*work.d[425]*work.L[663]-work.L[1059]*work.d[433]*work.L[664]-work.L[1060]*work.d[441]*work.L[665]-work.L[1061]*work.d[449]*work.L[666]-work.L[1062]*work.d[457]*work.L[667]-work.L[1063]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1256]-work.L[1092]*work.d[337]*work.L[652]-work.L[1093]*work.d[345]*work.L[653]-work.L[1094]*work.d[353]*work.L[654]-work.L[1095]*work.d[361]*work.L[655]-work.L[1096]*work.d[369]*work.L[656]-work.L[1097]*work.d[377]*work.L[657]-work.L[1098]*work.d[385]*work.L[658]-work.L[1099]*work.d[393]*work.L[659]-work.L[1100]*work.d[401]*work.L[660]-work.L[1101]*work.d[409]*work.L[661]-work.L[1102]*work.d[417]*work.L[662]-work.L[1103]*work.d[425]*work.L[663]-work.L[1104]*work.d[433]*work.L[664]-work.L[1105]*work.d[441]*work.L[665]-work.L[1106]*work.d[449]*work.L[666]-work.L[1107]*work.d[457]*work.L[667]-work.L[1108]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1257]-work.L[1138]*work.d[337]*work.L[652]-work.L[1139]*work.d[345]*work.L[653]-work.L[1140]*work.d[353]*work.L[654]-work.L[1141]*work.d[361]*work.L[655]-work.L[1142]*work.d[369]*work.L[656]-work.L[1143]*work.d[377]*work.L[657]-work.L[1144]*work.d[385]*work.L[658]-work.L[1145]*work.d[393]*work.L[659]-work.L[1146]*work.d[401]*work.L[660]-work.L[1147]*work.d[409]*work.L[661]-work.L[1148]*work.d[417]*work.L[662]-work.L[1149]*work.d[425]*work.L[663]-work.L[1150]*work.d[433]*work.L[664]-work.L[1151]*work.d[441]*work.L[665]-work.L[1152]*work.d[449]*work.L[666]-work.L[1153]*work.d[457]*work.L[667]-work.L[1154]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1258]-work.L[1167]*work.d[337]*work.L[652]-work.L[1168]*work.d[345]*work.L[653]-work.L[1169]*work.d[353]*work.L[654]-work.L[1170]*work.d[361]*work.L[655]-work.L[1171]*work.d[369]*work.L[656]-work.L[1172]*work.d[377]*work.L[657]-work.L[1173]*work.d[385]*work.L[658]-work.L[1174]*work.d[393]*work.L[659]-work.L[1175]*work.d[401]*work.L[660]-work.L[1176]*work.d[409]*work.L[661]-work.L[1177]*work.d[417]*work.L[662]-work.L[1178]*work.d[425]*work.L[663]-work.L[1179]*work.d[433]*work.L[664]-work.L[1180]*work.d[441]*work.L[665]-work.L[1181]*work.d[449]*work.L[666]-work.L[1182]*work.d[457]*work.L[667]-work.L[1183]*work.d[465]*1;
  residual += temp*temp;

  temp = work.KKT[1274]-work.L[687]*work.d[337]*work.L[687]-work.L[688]*work.d[345]*work.L[688]-work.L[689]*work.d[353]*work.L[689]-work.L[690]*work.d[361]*work.L[690]-work.L[691]*work.d[369]*work.L[691]-work.L[692]*work.d[377]*work.L[692]-work.L[693]*work.d[385]*work.L[693]-work.L[694]*work.d[393]*work.L[694]-work.L[695]*work.d[401]*work.L[695]-work.L[696]*work.d[409]*work.L[696]-work.L[697]*work.d[417]*work.L[697]-work.L[698]*work.d[425]*work.L[698]-work.L[699]*work.d[433]*work.L[699]-work.L[700]*work.d[441]*work.L[700]-work.L[701]*work.d[449]*work.L[701]-work.L[702]*work.d[457]*work.L[702]-work.L[703]*work.d[465]*work.L[703]-1*work.d[473]*1-work.L[704]*work.d[472]*work.L[704];
  residual += temp*temp;

  temp = work.KKT[1275]-work.L[723]*work.d[337]*work.L[687]-work.L[724]*work.d[345]*work.L[688]-work.L[725]*work.d[353]*work.L[689]-work.L[726]*work.d[361]*work.L[690]-work.L[727]*work.d[369]*work.L[691]-work.L[728]*work.d[377]*work.L[692]-work.L[729]*work.d[385]*work.L[693]-work.L[730]*work.d[393]*work.L[694]-work.L[731]*work.d[401]*work.L[695]-work.L[732]*work.d[409]*work.L[696]-work.L[733]*work.d[417]*work.L[697]-work.L[734]*work.d[425]*work.L[698]-work.L[735]*work.d[433]*work.L[699]-work.L[736]*work.d[441]*work.L[700]-work.L[737]*work.d[449]*work.L[701]-work.L[738]*work.d[457]*work.L[702]-work.L[739]*work.d[465]*work.L[703]-work.L[740]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1276]-work.L[760]*work.d[337]*work.L[687]-work.L[761]*work.d[345]*work.L[688]-work.L[762]*work.d[353]*work.L[689]-work.L[763]*work.d[361]*work.L[690]-work.L[764]*work.d[369]*work.L[691]-work.L[765]*work.d[377]*work.L[692]-work.L[766]*work.d[385]*work.L[693]-work.L[767]*work.d[393]*work.L[694]-work.L[768]*work.d[401]*work.L[695]-work.L[769]*work.d[409]*work.L[696]-work.L[770]*work.d[417]*work.L[697]-work.L[771]*work.d[425]*work.L[698]-work.L[772]*work.d[433]*work.L[699]-work.L[773]*work.d[441]*work.L[700]-work.L[774]*work.d[449]*work.L[701]-work.L[775]*work.d[457]*work.L[702]-work.L[776]*work.d[465]*work.L[703]-work.L[777]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1277]-work.L[798]*work.d[337]*work.L[687]-work.L[799]*work.d[345]*work.L[688]-work.L[800]*work.d[353]*work.L[689]-work.L[801]*work.d[361]*work.L[690]-work.L[802]*work.d[369]*work.L[691]-work.L[803]*work.d[377]*work.L[692]-work.L[804]*work.d[385]*work.L[693]-work.L[805]*work.d[393]*work.L[694]-work.L[806]*work.d[401]*work.L[695]-work.L[807]*work.d[409]*work.L[696]-work.L[808]*work.d[417]*work.L[697]-work.L[809]*work.d[425]*work.L[698]-work.L[810]*work.d[433]*work.L[699]-work.L[811]*work.d[441]*work.L[700]-work.L[812]*work.d[449]*work.L[701]-work.L[813]*work.d[457]*work.L[702]-work.L[814]*work.d[465]*work.L[703]-work.L[815]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1278]-work.L[837]*work.d[337]*work.L[687]-work.L[838]*work.d[345]*work.L[688]-work.L[839]*work.d[353]*work.L[689]-work.L[840]*work.d[361]*work.L[690]-work.L[841]*work.d[369]*work.L[691]-work.L[842]*work.d[377]*work.L[692]-work.L[843]*work.d[385]*work.L[693]-work.L[844]*work.d[393]*work.L[694]-work.L[845]*work.d[401]*work.L[695]-work.L[846]*work.d[409]*work.L[696]-work.L[847]*work.d[417]*work.L[697]-work.L[848]*work.d[425]*work.L[698]-work.L[849]*work.d[433]*work.L[699]-work.L[850]*work.d[441]*work.L[700]-work.L[851]*work.d[449]*work.L[701]-work.L[852]*work.d[457]*work.L[702]-work.L[853]*work.d[465]*work.L[703]-work.L[854]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1279]-work.L[877]*work.d[337]*work.L[687]-work.L[878]*work.d[345]*work.L[688]-work.L[879]*work.d[353]*work.L[689]-work.L[880]*work.d[361]*work.L[690]-work.L[881]*work.d[369]*work.L[691]-work.L[882]*work.d[377]*work.L[692]-work.L[883]*work.d[385]*work.L[693]-work.L[884]*work.d[393]*work.L[694]-work.L[885]*work.d[401]*work.L[695]-work.L[886]*work.d[409]*work.L[696]-work.L[887]*work.d[417]*work.L[697]-work.L[888]*work.d[425]*work.L[698]-work.L[889]*work.d[433]*work.L[699]-work.L[890]*work.d[441]*work.L[700]-work.L[891]*work.d[449]*work.L[701]-work.L[892]*work.d[457]*work.L[702]-work.L[893]*work.d[465]*work.L[703]-work.L[894]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1280]-work.L[918]*work.d[337]*work.L[687]-work.L[919]*work.d[345]*work.L[688]-work.L[920]*work.d[353]*work.L[689]-work.L[921]*work.d[361]*work.L[690]-work.L[922]*work.d[369]*work.L[691]-work.L[923]*work.d[377]*work.L[692]-work.L[924]*work.d[385]*work.L[693]-work.L[925]*work.d[393]*work.L[694]-work.L[926]*work.d[401]*work.L[695]-work.L[927]*work.d[409]*work.L[696]-work.L[928]*work.d[417]*work.L[697]-work.L[929]*work.d[425]*work.L[698]-work.L[930]*work.d[433]*work.L[699]-work.L[931]*work.d[441]*work.L[700]-work.L[932]*work.d[449]*work.L[701]-work.L[933]*work.d[457]*work.L[702]-work.L[934]*work.d[465]*work.L[703]-work.L[935]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1281]-work.L[960]*work.d[337]*work.L[687]-work.L[961]*work.d[345]*work.L[688]-work.L[962]*work.d[353]*work.L[689]-work.L[963]*work.d[361]*work.L[690]-work.L[964]*work.d[369]*work.L[691]-work.L[965]*work.d[377]*work.L[692]-work.L[966]*work.d[385]*work.L[693]-work.L[967]*work.d[393]*work.L[694]-work.L[968]*work.d[401]*work.L[695]-work.L[969]*work.d[409]*work.L[696]-work.L[970]*work.d[417]*work.L[697]-work.L[971]*work.d[425]*work.L[698]-work.L[972]*work.d[433]*work.L[699]-work.L[973]*work.d[441]*work.L[700]-work.L[974]*work.d[449]*work.L[701]-work.L[975]*work.d[457]*work.L[702]-work.L[976]*work.d[465]*work.L[703]-work.L[977]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1282]-work.L[1003]*work.d[337]*work.L[687]-work.L[1004]*work.d[345]*work.L[688]-work.L[1005]*work.d[353]*work.L[689]-work.L[1006]*work.d[361]*work.L[690]-work.L[1007]*work.d[369]*work.L[691]-work.L[1008]*work.d[377]*work.L[692]-work.L[1009]*work.d[385]*work.L[693]-work.L[1010]*work.d[393]*work.L[694]-work.L[1011]*work.d[401]*work.L[695]-work.L[1012]*work.d[409]*work.L[696]-work.L[1013]*work.d[417]*work.L[697]-work.L[1014]*work.d[425]*work.L[698]-work.L[1015]*work.d[433]*work.L[699]-work.L[1016]*work.d[441]*work.L[700]-work.L[1017]*work.d[449]*work.L[701]-work.L[1018]*work.d[457]*work.L[702]-work.L[1019]*work.d[465]*work.L[703]-work.L[1020]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1283]-work.L[1047]*work.d[337]*work.L[687]-work.L[1048]*work.d[345]*work.L[688]-work.L[1049]*work.d[353]*work.L[689]-work.L[1050]*work.d[361]*work.L[690]-work.L[1051]*work.d[369]*work.L[691]-work.L[1052]*work.d[377]*work.L[692]-work.L[1053]*work.d[385]*work.L[693]-work.L[1054]*work.d[393]*work.L[694]-work.L[1055]*work.d[401]*work.L[695]-work.L[1056]*work.d[409]*work.L[696]-work.L[1057]*work.d[417]*work.L[697]-work.L[1058]*work.d[425]*work.L[698]-work.L[1059]*work.d[433]*work.L[699]-work.L[1060]*work.d[441]*work.L[700]-work.L[1061]*work.d[449]*work.L[701]-work.L[1062]*work.d[457]*work.L[702]-work.L[1063]*work.d[465]*work.L[703]-work.L[1064]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1284]-work.L[1092]*work.d[337]*work.L[687]-work.L[1093]*work.d[345]*work.L[688]-work.L[1094]*work.d[353]*work.L[689]-work.L[1095]*work.d[361]*work.L[690]-work.L[1096]*work.d[369]*work.L[691]-work.L[1097]*work.d[377]*work.L[692]-work.L[1098]*work.d[385]*work.L[693]-work.L[1099]*work.d[393]*work.L[694]-work.L[1100]*work.d[401]*work.L[695]-work.L[1101]*work.d[409]*work.L[696]-work.L[1102]*work.d[417]*work.L[697]-work.L[1103]*work.d[425]*work.L[698]-work.L[1104]*work.d[433]*work.L[699]-work.L[1105]*work.d[441]*work.L[700]-work.L[1106]*work.d[449]*work.L[701]-work.L[1107]*work.d[457]*work.L[702]-work.L[1108]*work.d[465]*work.L[703]-work.L[1109]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1285]-work.L[1138]*work.d[337]*work.L[687]-work.L[1139]*work.d[345]*work.L[688]-work.L[1140]*work.d[353]*work.L[689]-work.L[1141]*work.d[361]*work.L[690]-work.L[1142]*work.d[369]*work.L[691]-work.L[1143]*work.d[377]*work.L[692]-work.L[1144]*work.d[385]*work.L[693]-work.L[1145]*work.d[393]*work.L[694]-work.L[1146]*work.d[401]*work.L[695]-work.L[1147]*work.d[409]*work.L[696]-work.L[1148]*work.d[417]*work.L[697]-work.L[1149]*work.d[425]*work.L[698]-work.L[1150]*work.d[433]*work.L[699]-work.L[1151]*work.d[441]*work.L[700]-work.L[1152]*work.d[449]*work.L[701]-work.L[1153]*work.d[457]*work.L[702]-work.L[1154]*work.d[465]*work.L[703]-work.L[1155]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1286]-work.L[1167]*work.d[337]*work.L[687]-work.L[1168]*work.d[345]*work.L[688]-work.L[1169]*work.d[353]*work.L[689]-work.L[1170]*work.d[361]*work.L[690]-work.L[1171]*work.d[369]*work.L[691]-work.L[1172]*work.d[377]*work.L[692]-work.L[1173]*work.d[385]*work.L[693]-work.L[1174]*work.d[393]*work.L[694]-work.L[1175]*work.d[401]*work.L[695]-work.L[1176]*work.d[409]*work.L[696]-work.L[1177]*work.d[417]*work.L[697]-work.L[1178]*work.d[425]*work.L[698]-work.L[1179]*work.d[433]*work.L[699]-work.L[1180]*work.d[441]*work.L[700]-work.L[1181]*work.d[449]*work.L[701]-work.L[1182]*work.d[457]*work.L[702]-work.L[1183]*work.d[465]*work.L[703]-work.L[1184]*work.d[473]*1;
  residual += temp*temp;

  temp = work.KKT[1302]-work.L[723]*work.d[337]*work.L[723]-work.L[724]*work.d[345]*work.L[724]-work.L[725]*work.d[353]*work.L[725]-work.L[726]*work.d[361]*work.L[726]-work.L[727]*work.d[369]*work.L[727]-work.L[728]*work.d[377]*work.L[728]-work.L[729]*work.d[385]*work.L[729]-work.L[730]*work.d[393]*work.L[730]-work.L[731]*work.d[401]*work.L[731]-work.L[732]*work.d[409]*work.L[732]-work.L[733]*work.d[417]*work.L[733]-work.L[734]*work.d[425]*work.L[734]-work.L[735]*work.d[433]*work.L[735]-work.L[736]*work.d[441]*work.L[736]-work.L[737]*work.d[449]*work.L[737]-work.L[738]*work.d[457]*work.L[738]-work.L[739]*work.d[465]*work.L[739]-work.L[740]*work.d[473]*work.L[740]-1*work.d[481]*1-work.L[741]*work.d[480]*work.L[741];
  residual += temp*temp;

  temp = work.KKT[1303]-work.L[760]*work.d[337]*work.L[723]-work.L[761]*work.d[345]*work.L[724]-work.L[762]*work.d[353]*work.L[725]-work.L[763]*work.d[361]*work.L[726]-work.L[764]*work.d[369]*work.L[727]-work.L[765]*work.d[377]*work.L[728]-work.L[766]*work.d[385]*work.L[729]-work.L[767]*work.d[393]*work.L[730]-work.L[768]*work.d[401]*work.L[731]-work.L[769]*work.d[409]*work.L[732]-work.L[770]*work.d[417]*work.L[733]-work.L[771]*work.d[425]*work.L[734]-work.L[772]*work.d[433]*work.L[735]-work.L[773]*work.d[441]*work.L[736]-work.L[774]*work.d[449]*work.L[737]-work.L[775]*work.d[457]*work.L[738]-work.L[776]*work.d[465]*work.L[739]-work.L[777]*work.d[473]*work.L[740]-work.L[778]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1304]-work.L[798]*work.d[337]*work.L[723]-work.L[799]*work.d[345]*work.L[724]-work.L[800]*work.d[353]*work.L[725]-work.L[801]*work.d[361]*work.L[726]-work.L[802]*work.d[369]*work.L[727]-work.L[803]*work.d[377]*work.L[728]-work.L[804]*work.d[385]*work.L[729]-work.L[805]*work.d[393]*work.L[730]-work.L[806]*work.d[401]*work.L[731]-work.L[807]*work.d[409]*work.L[732]-work.L[808]*work.d[417]*work.L[733]-work.L[809]*work.d[425]*work.L[734]-work.L[810]*work.d[433]*work.L[735]-work.L[811]*work.d[441]*work.L[736]-work.L[812]*work.d[449]*work.L[737]-work.L[813]*work.d[457]*work.L[738]-work.L[814]*work.d[465]*work.L[739]-work.L[815]*work.d[473]*work.L[740]-work.L[816]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1305]-work.L[837]*work.d[337]*work.L[723]-work.L[838]*work.d[345]*work.L[724]-work.L[839]*work.d[353]*work.L[725]-work.L[840]*work.d[361]*work.L[726]-work.L[841]*work.d[369]*work.L[727]-work.L[842]*work.d[377]*work.L[728]-work.L[843]*work.d[385]*work.L[729]-work.L[844]*work.d[393]*work.L[730]-work.L[845]*work.d[401]*work.L[731]-work.L[846]*work.d[409]*work.L[732]-work.L[847]*work.d[417]*work.L[733]-work.L[848]*work.d[425]*work.L[734]-work.L[849]*work.d[433]*work.L[735]-work.L[850]*work.d[441]*work.L[736]-work.L[851]*work.d[449]*work.L[737]-work.L[852]*work.d[457]*work.L[738]-work.L[853]*work.d[465]*work.L[739]-work.L[854]*work.d[473]*work.L[740]-work.L[855]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1306]-work.L[877]*work.d[337]*work.L[723]-work.L[878]*work.d[345]*work.L[724]-work.L[879]*work.d[353]*work.L[725]-work.L[880]*work.d[361]*work.L[726]-work.L[881]*work.d[369]*work.L[727]-work.L[882]*work.d[377]*work.L[728]-work.L[883]*work.d[385]*work.L[729]-work.L[884]*work.d[393]*work.L[730]-work.L[885]*work.d[401]*work.L[731]-work.L[886]*work.d[409]*work.L[732]-work.L[887]*work.d[417]*work.L[733]-work.L[888]*work.d[425]*work.L[734]-work.L[889]*work.d[433]*work.L[735]-work.L[890]*work.d[441]*work.L[736]-work.L[891]*work.d[449]*work.L[737]-work.L[892]*work.d[457]*work.L[738]-work.L[893]*work.d[465]*work.L[739]-work.L[894]*work.d[473]*work.L[740]-work.L[895]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1307]-work.L[918]*work.d[337]*work.L[723]-work.L[919]*work.d[345]*work.L[724]-work.L[920]*work.d[353]*work.L[725]-work.L[921]*work.d[361]*work.L[726]-work.L[922]*work.d[369]*work.L[727]-work.L[923]*work.d[377]*work.L[728]-work.L[924]*work.d[385]*work.L[729]-work.L[925]*work.d[393]*work.L[730]-work.L[926]*work.d[401]*work.L[731]-work.L[927]*work.d[409]*work.L[732]-work.L[928]*work.d[417]*work.L[733]-work.L[929]*work.d[425]*work.L[734]-work.L[930]*work.d[433]*work.L[735]-work.L[931]*work.d[441]*work.L[736]-work.L[932]*work.d[449]*work.L[737]-work.L[933]*work.d[457]*work.L[738]-work.L[934]*work.d[465]*work.L[739]-work.L[935]*work.d[473]*work.L[740]-work.L[936]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1308]-work.L[960]*work.d[337]*work.L[723]-work.L[961]*work.d[345]*work.L[724]-work.L[962]*work.d[353]*work.L[725]-work.L[963]*work.d[361]*work.L[726]-work.L[964]*work.d[369]*work.L[727]-work.L[965]*work.d[377]*work.L[728]-work.L[966]*work.d[385]*work.L[729]-work.L[967]*work.d[393]*work.L[730]-work.L[968]*work.d[401]*work.L[731]-work.L[969]*work.d[409]*work.L[732]-work.L[970]*work.d[417]*work.L[733]-work.L[971]*work.d[425]*work.L[734]-work.L[972]*work.d[433]*work.L[735]-work.L[973]*work.d[441]*work.L[736]-work.L[974]*work.d[449]*work.L[737]-work.L[975]*work.d[457]*work.L[738]-work.L[976]*work.d[465]*work.L[739]-work.L[977]*work.d[473]*work.L[740]-work.L[978]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1309]-work.L[1003]*work.d[337]*work.L[723]-work.L[1004]*work.d[345]*work.L[724]-work.L[1005]*work.d[353]*work.L[725]-work.L[1006]*work.d[361]*work.L[726]-work.L[1007]*work.d[369]*work.L[727]-work.L[1008]*work.d[377]*work.L[728]-work.L[1009]*work.d[385]*work.L[729]-work.L[1010]*work.d[393]*work.L[730]-work.L[1011]*work.d[401]*work.L[731]-work.L[1012]*work.d[409]*work.L[732]-work.L[1013]*work.d[417]*work.L[733]-work.L[1014]*work.d[425]*work.L[734]-work.L[1015]*work.d[433]*work.L[735]-work.L[1016]*work.d[441]*work.L[736]-work.L[1017]*work.d[449]*work.L[737]-work.L[1018]*work.d[457]*work.L[738]-work.L[1019]*work.d[465]*work.L[739]-work.L[1020]*work.d[473]*work.L[740]-work.L[1021]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1310]-work.L[1047]*work.d[337]*work.L[723]-work.L[1048]*work.d[345]*work.L[724]-work.L[1049]*work.d[353]*work.L[725]-work.L[1050]*work.d[361]*work.L[726]-work.L[1051]*work.d[369]*work.L[727]-work.L[1052]*work.d[377]*work.L[728]-work.L[1053]*work.d[385]*work.L[729]-work.L[1054]*work.d[393]*work.L[730]-work.L[1055]*work.d[401]*work.L[731]-work.L[1056]*work.d[409]*work.L[732]-work.L[1057]*work.d[417]*work.L[733]-work.L[1058]*work.d[425]*work.L[734]-work.L[1059]*work.d[433]*work.L[735]-work.L[1060]*work.d[441]*work.L[736]-work.L[1061]*work.d[449]*work.L[737]-work.L[1062]*work.d[457]*work.L[738]-work.L[1063]*work.d[465]*work.L[739]-work.L[1064]*work.d[473]*work.L[740]-work.L[1065]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1311]-work.L[1092]*work.d[337]*work.L[723]-work.L[1093]*work.d[345]*work.L[724]-work.L[1094]*work.d[353]*work.L[725]-work.L[1095]*work.d[361]*work.L[726]-work.L[1096]*work.d[369]*work.L[727]-work.L[1097]*work.d[377]*work.L[728]-work.L[1098]*work.d[385]*work.L[729]-work.L[1099]*work.d[393]*work.L[730]-work.L[1100]*work.d[401]*work.L[731]-work.L[1101]*work.d[409]*work.L[732]-work.L[1102]*work.d[417]*work.L[733]-work.L[1103]*work.d[425]*work.L[734]-work.L[1104]*work.d[433]*work.L[735]-work.L[1105]*work.d[441]*work.L[736]-work.L[1106]*work.d[449]*work.L[737]-work.L[1107]*work.d[457]*work.L[738]-work.L[1108]*work.d[465]*work.L[739]-work.L[1109]*work.d[473]*work.L[740]-work.L[1110]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1312]-work.L[1138]*work.d[337]*work.L[723]-work.L[1139]*work.d[345]*work.L[724]-work.L[1140]*work.d[353]*work.L[725]-work.L[1141]*work.d[361]*work.L[726]-work.L[1142]*work.d[369]*work.L[727]-work.L[1143]*work.d[377]*work.L[728]-work.L[1144]*work.d[385]*work.L[729]-work.L[1145]*work.d[393]*work.L[730]-work.L[1146]*work.d[401]*work.L[731]-work.L[1147]*work.d[409]*work.L[732]-work.L[1148]*work.d[417]*work.L[733]-work.L[1149]*work.d[425]*work.L[734]-work.L[1150]*work.d[433]*work.L[735]-work.L[1151]*work.d[441]*work.L[736]-work.L[1152]*work.d[449]*work.L[737]-work.L[1153]*work.d[457]*work.L[738]-work.L[1154]*work.d[465]*work.L[739]-work.L[1155]*work.d[473]*work.L[740]-work.L[1156]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1313]-work.L[1167]*work.d[337]*work.L[723]-work.L[1168]*work.d[345]*work.L[724]-work.L[1169]*work.d[353]*work.L[725]-work.L[1170]*work.d[361]*work.L[726]-work.L[1171]*work.d[369]*work.L[727]-work.L[1172]*work.d[377]*work.L[728]-work.L[1173]*work.d[385]*work.L[729]-work.L[1174]*work.d[393]*work.L[730]-work.L[1175]*work.d[401]*work.L[731]-work.L[1176]*work.d[409]*work.L[732]-work.L[1177]*work.d[417]*work.L[733]-work.L[1178]*work.d[425]*work.L[734]-work.L[1179]*work.d[433]*work.L[735]-work.L[1180]*work.d[441]*work.L[736]-work.L[1181]*work.d[449]*work.L[737]-work.L[1182]*work.d[457]*work.L[738]-work.L[1183]*work.d[465]*work.L[739]-work.L[1184]*work.d[473]*work.L[740]-work.L[1185]*work.d[481]*1;
  residual += temp*temp;

  temp = work.KKT[1329]-work.L[760]*work.d[337]*work.L[760]-work.L[761]*work.d[345]*work.L[761]-work.L[762]*work.d[353]*work.L[762]-work.L[763]*work.d[361]*work.L[763]-work.L[764]*work.d[369]*work.L[764]-work.L[765]*work.d[377]*work.L[765]-work.L[766]*work.d[385]*work.L[766]-work.L[767]*work.d[393]*work.L[767]-work.L[768]*work.d[401]*work.L[768]-work.L[769]*work.d[409]*work.L[769]-work.L[770]*work.d[417]*work.L[770]-work.L[771]*work.d[425]*work.L[771]-work.L[772]*work.d[433]*work.L[772]-work.L[773]*work.d[441]*work.L[773]-work.L[774]*work.d[449]*work.L[774]-work.L[775]*work.d[457]*work.L[775]-work.L[776]*work.d[465]*work.L[776]-work.L[777]*work.d[473]*work.L[777]-work.L[778]*work.d[481]*work.L[778]-1*work.d[489]*1-work.L[779]*work.d[488]*work.L[779];
  residual += temp*temp;

  temp = work.KKT[1330]-work.L[798]*work.d[337]*work.L[760]-work.L[799]*work.d[345]*work.L[761]-work.L[800]*work.d[353]*work.L[762]-work.L[801]*work.d[361]*work.L[763]-work.L[802]*work.d[369]*work.L[764]-work.L[803]*work.d[377]*work.L[765]-work.L[804]*work.d[385]*work.L[766]-work.L[805]*work.d[393]*work.L[767]-work.L[806]*work.d[401]*work.L[768]-work.L[807]*work.d[409]*work.L[769]-work.L[808]*work.d[417]*work.L[770]-work.L[809]*work.d[425]*work.L[771]-work.L[810]*work.d[433]*work.L[772]-work.L[811]*work.d[441]*work.L[773]-work.L[812]*work.d[449]*work.L[774]-work.L[813]*work.d[457]*work.L[775]-work.L[814]*work.d[465]*work.L[776]-work.L[815]*work.d[473]*work.L[777]-work.L[816]*work.d[481]*work.L[778]-work.L[817]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1331]-work.L[837]*work.d[337]*work.L[760]-work.L[838]*work.d[345]*work.L[761]-work.L[839]*work.d[353]*work.L[762]-work.L[840]*work.d[361]*work.L[763]-work.L[841]*work.d[369]*work.L[764]-work.L[842]*work.d[377]*work.L[765]-work.L[843]*work.d[385]*work.L[766]-work.L[844]*work.d[393]*work.L[767]-work.L[845]*work.d[401]*work.L[768]-work.L[846]*work.d[409]*work.L[769]-work.L[847]*work.d[417]*work.L[770]-work.L[848]*work.d[425]*work.L[771]-work.L[849]*work.d[433]*work.L[772]-work.L[850]*work.d[441]*work.L[773]-work.L[851]*work.d[449]*work.L[774]-work.L[852]*work.d[457]*work.L[775]-work.L[853]*work.d[465]*work.L[776]-work.L[854]*work.d[473]*work.L[777]-work.L[855]*work.d[481]*work.L[778]-work.L[856]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1332]-work.L[877]*work.d[337]*work.L[760]-work.L[878]*work.d[345]*work.L[761]-work.L[879]*work.d[353]*work.L[762]-work.L[880]*work.d[361]*work.L[763]-work.L[881]*work.d[369]*work.L[764]-work.L[882]*work.d[377]*work.L[765]-work.L[883]*work.d[385]*work.L[766]-work.L[884]*work.d[393]*work.L[767]-work.L[885]*work.d[401]*work.L[768]-work.L[886]*work.d[409]*work.L[769]-work.L[887]*work.d[417]*work.L[770]-work.L[888]*work.d[425]*work.L[771]-work.L[889]*work.d[433]*work.L[772]-work.L[890]*work.d[441]*work.L[773]-work.L[891]*work.d[449]*work.L[774]-work.L[892]*work.d[457]*work.L[775]-work.L[893]*work.d[465]*work.L[776]-work.L[894]*work.d[473]*work.L[777]-work.L[895]*work.d[481]*work.L[778]-work.L[896]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1333]-work.L[918]*work.d[337]*work.L[760]-work.L[919]*work.d[345]*work.L[761]-work.L[920]*work.d[353]*work.L[762]-work.L[921]*work.d[361]*work.L[763]-work.L[922]*work.d[369]*work.L[764]-work.L[923]*work.d[377]*work.L[765]-work.L[924]*work.d[385]*work.L[766]-work.L[925]*work.d[393]*work.L[767]-work.L[926]*work.d[401]*work.L[768]-work.L[927]*work.d[409]*work.L[769]-work.L[928]*work.d[417]*work.L[770]-work.L[929]*work.d[425]*work.L[771]-work.L[930]*work.d[433]*work.L[772]-work.L[931]*work.d[441]*work.L[773]-work.L[932]*work.d[449]*work.L[774]-work.L[933]*work.d[457]*work.L[775]-work.L[934]*work.d[465]*work.L[776]-work.L[935]*work.d[473]*work.L[777]-work.L[936]*work.d[481]*work.L[778]-work.L[937]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1334]-work.L[960]*work.d[337]*work.L[760]-work.L[961]*work.d[345]*work.L[761]-work.L[962]*work.d[353]*work.L[762]-work.L[963]*work.d[361]*work.L[763]-work.L[964]*work.d[369]*work.L[764]-work.L[965]*work.d[377]*work.L[765]-work.L[966]*work.d[385]*work.L[766]-work.L[967]*work.d[393]*work.L[767]-work.L[968]*work.d[401]*work.L[768]-work.L[969]*work.d[409]*work.L[769]-work.L[970]*work.d[417]*work.L[770]-work.L[971]*work.d[425]*work.L[771]-work.L[972]*work.d[433]*work.L[772]-work.L[973]*work.d[441]*work.L[773]-work.L[974]*work.d[449]*work.L[774]-work.L[975]*work.d[457]*work.L[775]-work.L[976]*work.d[465]*work.L[776]-work.L[977]*work.d[473]*work.L[777]-work.L[978]*work.d[481]*work.L[778]-work.L[979]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1335]-work.L[1003]*work.d[337]*work.L[760]-work.L[1004]*work.d[345]*work.L[761]-work.L[1005]*work.d[353]*work.L[762]-work.L[1006]*work.d[361]*work.L[763]-work.L[1007]*work.d[369]*work.L[764]-work.L[1008]*work.d[377]*work.L[765]-work.L[1009]*work.d[385]*work.L[766]-work.L[1010]*work.d[393]*work.L[767]-work.L[1011]*work.d[401]*work.L[768]-work.L[1012]*work.d[409]*work.L[769]-work.L[1013]*work.d[417]*work.L[770]-work.L[1014]*work.d[425]*work.L[771]-work.L[1015]*work.d[433]*work.L[772]-work.L[1016]*work.d[441]*work.L[773]-work.L[1017]*work.d[449]*work.L[774]-work.L[1018]*work.d[457]*work.L[775]-work.L[1019]*work.d[465]*work.L[776]-work.L[1020]*work.d[473]*work.L[777]-work.L[1021]*work.d[481]*work.L[778]-work.L[1022]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1336]-work.L[1047]*work.d[337]*work.L[760]-work.L[1048]*work.d[345]*work.L[761]-work.L[1049]*work.d[353]*work.L[762]-work.L[1050]*work.d[361]*work.L[763]-work.L[1051]*work.d[369]*work.L[764]-work.L[1052]*work.d[377]*work.L[765]-work.L[1053]*work.d[385]*work.L[766]-work.L[1054]*work.d[393]*work.L[767]-work.L[1055]*work.d[401]*work.L[768]-work.L[1056]*work.d[409]*work.L[769]-work.L[1057]*work.d[417]*work.L[770]-work.L[1058]*work.d[425]*work.L[771]-work.L[1059]*work.d[433]*work.L[772]-work.L[1060]*work.d[441]*work.L[773]-work.L[1061]*work.d[449]*work.L[774]-work.L[1062]*work.d[457]*work.L[775]-work.L[1063]*work.d[465]*work.L[776]-work.L[1064]*work.d[473]*work.L[777]-work.L[1065]*work.d[481]*work.L[778]-work.L[1066]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1337]-work.L[1092]*work.d[337]*work.L[760]-work.L[1093]*work.d[345]*work.L[761]-work.L[1094]*work.d[353]*work.L[762]-work.L[1095]*work.d[361]*work.L[763]-work.L[1096]*work.d[369]*work.L[764]-work.L[1097]*work.d[377]*work.L[765]-work.L[1098]*work.d[385]*work.L[766]-work.L[1099]*work.d[393]*work.L[767]-work.L[1100]*work.d[401]*work.L[768]-work.L[1101]*work.d[409]*work.L[769]-work.L[1102]*work.d[417]*work.L[770]-work.L[1103]*work.d[425]*work.L[771]-work.L[1104]*work.d[433]*work.L[772]-work.L[1105]*work.d[441]*work.L[773]-work.L[1106]*work.d[449]*work.L[774]-work.L[1107]*work.d[457]*work.L[775]-work.L[1108]*work.d[465]*work.L[776]-work.L[1109]*work.d[473]*work.L[777]-work.L[1110]*work.d[481]*work.L[778]-work.L[1111]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1338]-work.L[1138]*work.d[337]*work.L[760]-work.L[1139]*work.d[345]*work.L[761]-work.L[1140]*work.d[353]*work.L[762]-work.L[1141]*work.d[361]*work.L[763]-work.L[1142]*work.d[369]*work.L[764]-work.L[1143]*work.d[377]*work.L[765]-work.L[1144]*work.d[385]*work.L[766]-work.L[1145]*work.d[393]*work.L[767]-work.L[1146]*work.d[401]*work.L[768]-work.L[1147]*work.d[409]*work.L[769]-work.L[1148]*work.d[417]*work.L[770]-work.L[1149]*work.d[425]*work.L[771]-work.L[1150]*work.d[433]*work.L[772]-work.L[1151]*work.d[441]*work.L[773]-work.L[1152]*work.d[449]*work.L[774]-work.L[1153]*work.d[457]*work.L[775]-work.L[1154]*work.d[465]*work.L[776]-work.L[1155]*work.d[473]*work.L[777]-work.L[1156]*work.d[481]*work.L[778]-work.L[1157]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1339]-work.L[1167]*work.d[337]*work.L[760]-work.L[1168]*work.d[345]*work.L[761]-work.L[1169]*work.d[353]*work.L[762]-work.L[1170]*work.d[361]*work.L[763]-work.L[1171]*work.d[369]*work.L[764]-work.L[1172]*work.d[377]*work.L[765]-work.L[1173]*work.d[385]*work.L[766]-work.L[1174]*work.d[393]*work.L[767]-work.L[1175]*work.d[401]*work.L[768]-work.L[1176]*work.d[409]*work.L[769]-work.L[1177]*work.d[417]*work.L[770]-work.L[1178]*work.d[425]*work.L[771]-work.L[1179]*work.d[433]*work.L[772]-work.L[1180]*work.d[441]*work.L[773]-work.L[1181]*work.d[449]*work.L[774]-work.L[1182]*work.d[457]*work.L[775]-work.L[1183]*work.d[465]*work.L[776]-work.L[1184]*work.d[473]*work.L[777]-work.L[1185]*work.d[481]*work.L[778]-work.L[1186]*work.d[489]*1;
  residual += temp*temp;

  temp = work.KKT[1355]-work.L[798]*work.d[337]*work.L[798]-work.L[799]*work.d[345]*work.L[799]-work.L[800]*work.d[353]*work.L[800]-work.L[801]*work.d[361]*work.L[801]-work.L[802]*work.d[369]*work.L[802]-work.L[803]*work.d[377]*work.L[803]-work.L[804]*work.d[385]*work.L[804]-work.L[805]*work.d[393]*work.L[805]-work.L[806]*work.d[401]*work.L[806]-work.L[807]*work.d[409]*work.L[807]-work.L[808]*work.d[417]*work.L[808]-work.L[809]*work.d[425]*work.L[809]-work.L[810]*work.d[433]*work.L[810]-work.L[811]*work.d[441]*work.L[811]-work.L[812]*work.d[449]*work.L[812]-work.L[813]*work.d[457]*work.L[813]-work.L[814]*work.d[465]*work.L[814]-work.L[815]*work.d[473]*work.L[815]-work.L[816]*work.d[481]*work.L[816]-work.L[817]*work.d[489]*work.L[817]-1*work.d[497]*1-work.L[818]*work.d[496]*work.L[818];
  residual += temp*temp;

  temp = work.KKT[1356]-work.L[837]*work.d[337]*work.L[798]-work.L[838]*work.d[345]*work.L[799]-work.L[839]*work.d[353]*work.L[800]-work.L[840]*work.d[361]*work.L[801]-work.L[841]*work.d[369]*work.L[802]-work.L[842]*work.d[377]*work.L[803]-work.L[843]*work.d[385]*work.L[804]-work.L[844]*work.d[393]*work.L[805]-work.L[845]*work.d[401]*work.L[806]-work.L[846]*work.d[409]*work.L[807]-work.L[847]*work.d[417]*work.L[808]-work.L[848]*work.d[425]*work.L[809]-work.L[849]*work.d[433]*work.L[810]-work.L[850]*work.d[441]*work.L[811]-work.L[851]*work.d[449]*work.L[812]-work.L[852]*work.d[457]*work.L[813]-work.L[853]*work.d[465]*work.L[814]-work.L[854]*work.d[473]*work.L[815]-work.L[855]*work.d[481]*work.L[816]-work.L[856]*work.d[489]*work.L[817]-work.L[857]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1357]-work.L[877]*work.d[337]*work.L[798]-work.L[878]*work.d[345]*work.L[799]-work.L[879]*work.d[353]*work.L[800]-work.L[880]*work.d[361]*work.L[801]-work.L[881]*work.d[369]*work.L[802]-work.L[882]*work.d[377]*work.L[803]-work.L[883]*work.d[385]*work.L[804]-work.L[884]*work.d[393]*work.L[805]-work.L[885]*work.d[401]*work.L[806]-work.L[886]*work.d[409]*work.L[807]-work.L[887]*work.d[417]*work.L[808]-work.L[888]*work.d[425]*work.L[809]-work.L[889]*work.d[433]*work.L[810]-work.L[890]*work.d[441]*work.L[811]-work.L[891]*work.d[449]*work.L[812]-work.L[892]*work.d[457]*work.L[813]-work.L[893]*work.d[465]*work.L[814]-work.L[894]*work.d[473]*work.L[815]-work.L[895]*work.d[481]*work.L[816]-work.L[896]*work.d[489]*work.L[817]-work.L[897]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1358]-work.L[918]*work.d[337]*work.L[798]-work.L[919]*work.d[345]*work.L[799]-work.L[920]*work.d[353]*work.L[800]-work.L[921]*work.d[361]*work.L[801]-work.L[922]*work.d[369]*work.L[802]-work.L[923]*work.d[377]*work.L[803]-work.L[924]*work.d[385]*work.L[804]-work.L[925]*work.d[393]*work.L[805]-work.L[926]*work.d[401]*work.L[806]-work.L[927]*work.d[409]*work.L[807]-work.L[928]*work.d[417]*work.L[808]-work.L[929]*work.d[425]*work.L[809]-work.L[930]*work.d[433]*work.L[810]-work.L[931]*work.d[441]*work.L[811]-work.L[932]*work.d[449]*work.L[812]-work.L[933]*work.d[457]*work.L[813]-work.L[934]*work.d[465]*work.L[814]-work.L[935]*work.d[473]*work.L[815]-work.L[936]*work.d[481]*work.L[816]-work.L[937]*work.d[489]*work.L[817]-work.L[938]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1359]-work.L[960]*work.d[337]*work.L[798]-work.L[961]*work.d[345]*work.L[799]-work.L[962]*work.d[353]*work.L[800]-work.L[963]*work.d[361]*work.L[801]-work.L[964]*work.d[369]*work.L[802]-work.L[965]*work.d[377]*work.L[803]-work.L[966]*work.d[385]*work.L[804]-work.L[967]*work.d[393]*work.L[805]-work.L[968]*work.d[401]*work.L[806]-work.L[969]*work.d[409]*work.L[807]-work.L[970]*work.d[417]*work.L[808]-work.L[971]*work.d[425]*work.L[809]-work.L[972]*work.d[433]*work.L[810]-work.L[973]*work.d[441]*work.L[811]-work.L[974]*work.d[449]*work.L[812]-work.L[975]*work.d[457]*work.L[813]-work.L[976]*work.d[465]*work.L[814]-work.L[977]*work.d[473]*work.L[815]-work.L[978]*work.d[481]*work.L[816]-work.L[979]*work.d[489]*work.L[817]-work.L[980]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1360]-work.L[1003]*work.d[337]*work.L[798]-work.L[1004]*work.d[345]*work.L[799]-work.L[1005]*work.d[353]*work.L[800]-work.L[1006]*work.d[361]*work.L[801]-work.L[1007]*work.d[369]*work.L[802]-work.L[1008]*work.d[377]*work.L[803]-work.L[1009]*work.d[385]*work.L[804]-work.L[1010]*work.d[393]*work.L[805]-work.L[1011]*work.d[401]*work.L[806]-work.L[1012]*work.d[409]*work.L[807]-work.L[1013]*work.d[417]*work.L[808]-work.L[1014]*work.d[425]*work.L[809]-work.L[1015]*work.d[433]*work.L[810]-work.L[1016]*work.d[441]*work.L[811]-work.L[1017]*work.d[449]*work.L[812]-work.L[1018]*work.d[457]*work.L[813]-work.L[1019]*work.d[465]*work.L[814]-work.L[1020]*work.d[473]*work.L[815]-work.L[1021]*work.d[481]*work.L[816]-work.L[1022]*work.d[489]*work.L[817]-work.L[1023]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1361]-work.L[1047]*work.d[337]*work.L[798]-work.L[1048]*work.d[345]*work.L[799]-work.L[1049]*work.d[353]*work.L[800]-work.L[1050]*work.d[361]*work.L[801]-work.L[1051]*work.d[369]*work.L[802]-work.L[1052]*work.d[377]*work.L[803]-work.L[1053]*work.d[385]*work.L[804]-work.L[1054]*work.d[393]*work.L[805]-work.L[1055]*work.d[401]*work.L[806]-work.L[1056]*work.d[409]*work.L[807]-work.L[1057]*work.d[417]*work.L[808]-work.L[1058]*work.d[425]*work.L[809]-work.L[1059]*work.d[433]*work.L[810]-work.L[1060]*work.d[441]*work.L[811]-work.L[1061]*work.d[449]*work.L[812]-work.L[1062]*work.d[457]*work.L[813]-work.L[1063]*work.d[465]*work.L[814]-work.L[1064]*work.d[473]*work.L[815]-work.L[1065]*work.d[481]*work.L[816]-work.L[1066]*work.d[489]*work.L[817]-work.L[1067]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1362]-work.L[1092]*work.d[337]*work.L[798]-work.L[1093]*work.d[345]*work.L[799]-work.L[1094]*work.d[353]*work.L[800]-work.L[1095]*work.d[361]*work.L[801]-work.L[1096]*work.d[369]*work.L[802]-work.L[1097]*work.d[377]*work.L[803]-work.L[1098]*work.d[385]*work.L[804]-work.L[1099]*work.d[393]*work.L[805]-work.L[1100]*work.d[401]*work.L[806]-work.L[1101]*work.d[409]*work.L[807]-work.L[1102]*work.d[417]*work.L[808]-work.L[1103]*work.d[425]*work.L[809]-work.L[1104]*work.d[433]*work.L[810]-work.L[1105]*work.d[441]*work.L[811]-work.L[1106]*work.d[449]*work.L[812]-work.L[1107]*work.d[457]*work.L[813]-work.L[1108]*work.d[465]*work.L[814]-work.L[1109]*work.d[473]*work.L[815]-work.L[1110]*work.d[481]*work.L[816]-work.L[1111]*work.d[489]*work.L[817]-work.L[1112]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1363]-work.L[1138]*work.d[337]*work.L[798]-work.L[1139]*work.d[345]*work.L[799]-work.L[1140]*work.d[353]*work.L[800]-work.L[1141]*work.d[361]*work.L[801]-work.L[1142]*work.d[369]*work.L[802]-work.L[1143]*work.d[377]*work.L[803]-work.L[1144]*work.d[385]*work.L[804]-work.L[1145]*work.d[393]*work.L[805]-work.L[1146]*work.d[401]*work.L[806]-work.L[1147]*work.d[409]*work.L[807]-work.L[1148]*work.d[417]*work.L[808]-work.L[1149]*work.d[425]*work.L[809]-work.L[1150]*work.d[433]*work.L[810]-work.L[1151]*work.d[441]*work.L[811]-work.L[1152]*work.d[449]*work.L[812]-work.L[1153]*work.d[457]*work.L[813]-work.L[1154]*work.d[465]*work.L[814]-work.L[1155]*work.d[473]*work.L[815]-work.L[1156]*work.d[481]*work.L[816]-work.L[1157]*work.d[489]*work.L[817]-work.L[1158]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1364]-work.L[1167]*work.d[337]*work.L[798]-work.L[1168]*work.d[345]*work.L[799]-work.L[1169]*work.d[353]*work.L[800]-work.L[1170]*work.d[361]*work.L[801]-work.L[1171]*work.d[369]*work.L[802]-work.L[1172]*work.d[377]*work.L[803]-work.L[1173]*work.d[385]*work.L[804]-work.L[1174]*work.d[393]*work.L[805]-work.L[1175]*work.d[401]*work.L[806]-work.L[1176]*work.d[409]*work.L[807]-work.L[1177]*work.d[417]*work.L[808]-work.L[1178]*work.d[425]*work.L[809]-work.L[1179]*work.d[433]*work.L[810]-work.L[1180]*work.d[441]*work.L[811]-work.L[1181]*work.d[449]*work.L[812]-work.L[1182]*work.d[457]*work.L[813]-work.L[1183]*work.d[465]*work.L[814]-work.L[1184]*work.d[473]*work.L[815]-work.L[1185]*work.d[481]*work.L[816]-work.L[1186]*work.d[489]*work.L[817]-work.L[1187]*work.d[497]*1;
  residual += temp*temp;

  temp = work.KKT[1380]-work.L[837]*work.d[337]*work.L[837]-work.L[838]*work.d[345]*work.L[838]-work.L[839]*work.d[353]*work.L[839]-work.L[840]*work.d[361]*work.L[840]-work.L[841]*work.d[369]*work.L[841]-work.L[842]*work.d[377]*work.L[842]-work.L[843]*work.d[385]*work.L[843]-work.L[844]*work.d[393]*work.L[844]-work.L[845]*work.d[401]*work.L[845]-work.L[846]*work.d[409]*work.L[846]-work.L[847]*work.d[417]*work.L[847]-work.L[848]*work.d[425]*work.L[848]-work.L[849]*work.d[433]*work.L[849]-work.L[850]*work.d[441]*work.L[850]-work.L[851]*work.d[449]*work.L[851]-work.L[852]*work.d[457]*work.L[852]-work.L[853]*work.d[465]*work.L[853]-work.L[854]*work.d[473]*work.L[854]-work.L[855]*work.d[481]*work.L[855]-work.L[856]*work.d[489]*work.L[856]-work.L[857]*work.d[497]*work.L[857]-1*work.d[505]*1-work.L[858]*work.d[504]*work.L[858];
  residual += temp*temp;

  temp = work.KKT[1381]-work.L[877]*work.d[337]*work.L[837]-work.L[878]*work.d[345]*work.L[838]-work.L[879]*work.d[353]*work.L[839]-work.L[880]*work.d[361]*work.L[840]-work.L[881]*work.d[369]*work.L[841]-work.L[882]*work.d[377]*work.L[842]-work.L[883]*work.d[385]*work.L[843]-work.L[884]*work.d[393]*work.L[844]-work.L[885]*work.d[401]*work.L[845]-work.L[886]*work.d[409]*work.L[846]-work.L[887]*work.d[417]*work.L[847]-work.L[888]*work.d[425]*work.L[848]-work.L[889]*work.d[433]*work.L[849]-work.L[890]*work.d[441]*work.L[850]-work.L[891]*work.d[449]*work.L[851]-work.L[892]*work.d[457]*work.L[852]-work.L[893]*work.d[465]*work.L[853]-work.L[894]*work.d[473]*work.L[854]-work.L[895]*work.d[481]*work.L[855]-work.L[896]*work.d[489]*work.L[856]-work.L[897]*work.d[497]*work.L[857]-work.L[898]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1382]-work.L[918]*work.d[337]*work.L[837]-work.L[919]*work.d[345]*work.L[838]-work.L[920]*work.d[353]*work.L[839]-work.L[921]*work.d[361]*work.L[840]-work.L[922]*work.d[369]*work.L[841]-work.L[923]*work.d[377]*work.L[842]-work.L[924]*work.d[385]*work.L[843]-work.L[925]*work.d[393]*work.L[844]-work.L[926]*work.d[401]*work.L[845]-work.L[927]*work.d[409]*work.L[846]-work.L[928]*work.d[417]*work.L[847]-work.L[929]*work.d[425]*work.L[848]-work.L[930]*work.d[433]*work.L[849]-work.L[931]*work.d[441]*work.L[850]-work.L[932]*work.d[449]*work.L[851]-work.L[933]*work.d[457]*work.L[852]-work.L[934]*work.d[465]*work.L[853]-work.L[935]*work.d[473]*work.L[854]-work.L[936]*work.d[481]*work.L[855]-work.L[937]*work.d[489]*work.L[856]-work.L[938]*work.d[497]*work.L[857]-work.L[939]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1383]-work.L[960]*work.d[337]*work.L[837]-work.L[961]*work.d[345]*work.L[838]-work.L[962]*work.d[353]*work.L[839]-work.L[963]*work.d[361]*work.L[840]-work.L[964]*work.d[369]*work.L[841]-work.L[965]*work.d[377]*work.L[842]-work.L[966]*work.d[385]*work.L[843]-work.L[967]*work.d[393]*work.L[844]-work.L[968]*work.d[401]*work.L[845]-work.L[969]*work.d[409]*work.L[846]-work.L[970]*work.d[417]*work.L[847]-work.L[971]*work.d[425]*work.L[848]-work.L[972]*work.d[433]*work.L[849]-work.L[973]*work.d[441]*work.L[850]-work.L[974]*work.d[449]*work.L[851]-work.L[975]*work.d[457]*work.L[852]-work.L[976]*work.d[465]*work.L[853]-work.L[977]*work.d[473]*work.L[854]-work.L[978]*work.d[481]*work.L[855]-work.L[979]*work.d[489]*work.L[856]-work.L[980]*work.d[497]*work.L[857]-work.L[981]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1384]-work.L[1003]*work.d[337]*work.L[837]-work.L[1004]*work.d[345]*work.L[838]-work.L[1005]*work.d[353]*work.L[839]-work.L[1006]*work.d[361]*work.L[840]-work.L[1007]*work.d[369]*work.L[841]-work.L[1008]*work.d[377]*work.L[842]-work.L[1009]*work.d[385]*work.L[843]-work.L[1010]*work.d[393]*work.L[844]-work.L[1011]*work.d[401]*work.L[845]-work.L[1012]*work.d[409]*work.L[846]-work.L[1013]*work.d[417]*work.L[847]-work.L[1014]*work.d[425]*work.L[848]-work.L[1015]*work.d[433]*work.L[849]-work.L[1016]*work.d[441]*work.L[850]-work.L[1017]*work.d[449]*work.L[851]-work.L[1018]*work.d[457]*work.L[852]-work.L[1019]*work.d[465]*work.L[853]-work.L[1020]*work.d[473]*work.L[854]-work.L[1021]*work.d[481]*work.L[855]-work.L[1022]*work.d[489]*work.L[856]-work.L[1023]*work.d[497]*work.L[857]-work.L[1024]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1385]-work.L[1047]*work.d[337]*work.L[837]-work.L[1048]*work.d[345]*work.L[838]-work.L[1049]*work.d[353]*work.L[839]-work.L[1050]*work.d[361]*work.L[840]-work.L[1051]*work.d[369]*work.L[841]-work.L[1052]*work.d[377]*work.L[842]-work.L[1053]*work.d[385]*work.L[843]-work.L[1054]*work.d[393]*work.L[844]-work.L[1055]*work.d[401]*work.L[845]-work.L[1056]*work.d[409]*work.L[846]-work.L[1057]*work.d[417]*work.L[847]-work.L[1058]*work.d[425]*work.L[848]-work.L[1059]*work.d[433]*work.L[849]-work.L[1060]*work.d[441]*work.L[850]-work.L[1061]*work.d[449]*work.L[851]-work.L[1062]*work.d[457]*work.L[852]-work.L[1063]*work.d[465]*work.L[853]-work.L[1064]*work.d[473]*work.L[854]-work.L[1065]*work.d[481]*work.L[855]-work.L[1066]*work.d[489]*work.L[856]-work.L[1067]*work.d[497]*work.L[857]-work.L[1068]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1386]-work.L[1092]*work.d[337]*work.L[837]-work.L[1093]*work.d[345]*work.L[838]-work.L[1094]*work.d[353]*work.L[839]-work.L[1095]*work.d[361]*work.L[840]-work.L[1096]*work.d[369]*work.L[841]-work.L[1097]*work.d[377]*work.L[842]-work.L[1098]*work.d[385]*work.L[843]-work.L[1099]*work.d[393]*work.L[844]-work.L[1100]*work.d[401]*work.L[845]-work.L[1101]*work.d[409]*work.L[846]-work.L[1102]*work.d[417]*work.L[847]-work.L[1103]*work.d[425]*work.L[848]-work.L[1104]*work.d[433]*work.L[849]-work.L[1105]*work.d[441]*work.L[850]-work.L[1106]*work.d[449]*work.L[851]-work.L[1107]*work.d[457]*work.L[852]-work.L[1108]*work.d[465]*work.L[853]-work.L[1109]*work.d[473]*work.L[854]-work.L[1110]*work.d[481]*work.L[855]-work.L[1111]*work.d[489]*work.L[856]-work.L[1112]*work.d[497]*work.L[857]-work.L[1113]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1387]-work.L[1138]*work.d[337]*work.L[837]-work.L[1139]*work.d[345]*work.L[838]-work.L[1140]*work.d[353]*work.L[839]-work.L[1141]*work.d[361]*work.L[840]-work.L[1142]*work.d[369]*work.L[841]-work.L[1143]*work.d[377]*work.L[842]-work.L[1144]*work.d[385]*work.L[843]-work.L[1145]*work.d[393]*work.L[844]-work.L[1146]*work.d[401]*work.L[845]-work.L[1147]*work.d[409]*work.L[846]-work.L[1148]*work.d[417]*work.L[847]-work.L[1149]*work.d[425]*work.L[848]-work.L[1150]*work.d[433]*work.L[849]-work.L[1151]*work.d[441]*work.L[850]-work.L[1152]*work.d[449]*work.L[851]-work.L[1153]*work.d[457]*work.L[852]-work.L[1154]*work.d[465]*work.L[853]-work.L[1155]*work.d[473]*work.L[854]-work.L[1156]*work.d[481]*work.L[855]-work.L[1157]*work.d[489]*work.L[856]-work.L[1158]*work.d[497]*work.L[857]-work.L[1159]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1388]-work.L[1167]*work.d[337]*work.L[837]-work.L[1168]*work.d[345]*work.L[838]-work.L[1169]*work.d[353]*work.L[839]-work.L[1170]*work.d[361]*work.L[840]-work.L[1171]*work.d[369]*work.L[841]-work.L[1172]*work.d[377]*work.L[842]-work.L[1173]*work.d[385]*work.L[843]-work.L[1174]*work.d[393]*work.L[844]-work.L[1175]*work.d[401]*work.L[845]-work.L[1176]*work.d[409]*work.L[846]-work.L[1177]*work.d[417]*work.L[847]-work.L[1178]*work.d[425]*work.L[848]-work.L[1179]*work.d[433]*work.L[849]-work.L[1180]*work.d[441]*work.L[850]-work.L[1181]*work.d[449]*work.L[851]-work.L[1182]*work.d[457]*work.L[852]-work.L[1183]*work.d[465]*work.L[853]-work.L[1184]*work.d[473]*work.L[854]-work.L[1185]*work.d[481]*work.L[855]-work.L[1186]*work.d[489]*work.L[856]-work.L[1187]*work.d[497]*work.L[857]-work.L[1188]*work.d[505]*1;
  residual += temp*temp;

  temp = work.KKT[1404]-work.L[877]*work.d[337]*work.L[877]-work.L[878]*work.d[345]*work.L[878]-work.L[879]*work.d[353]*work.L[879]-work.L[880]*work.d[361]*work.L[880]-work.L[881]*work.d[369]*work.L[881]-work.L[882]*work.d[377]*work.L[882]-work.L[883]*work.d[385]*work.L[883]-work.L[884]*work.d[393]*work.L[884]-work.L[885]*work.d[401]*work.L[885]-work.L[886]*work.d[409]*work.L[886]-work.L[887]*work.d[417]*work.L[887]-work.L[888]*work.d[425]*work.L[888]-work.L[889]*work.d[433]*work.L[889]-work.L[890]*work.d[441]*work.L[890]-work.L[891]*work.d[449]*work.L[891]-work.L[892]*work.d[457]*work.L[892]-work.L[893]*work.d[465]*work.L[893]-work.L[894]*work.d[473]*work.L[894]-work.L[895]*work.d[481]*work.L[895]-work.L[896]*work.d[489]*work.L[896]-work.L[897]*work.d[497]*work.L[897]-work.L[898]*work.d[505]*work.L[898]-1*work.d[513]*1-work.L[899]*work.d[512]*work.L[899];
  residual += temp*temp;

  temp = work.KKT[1405]-work.L[918]*work.d[337]*work.L[877]-work.L[919]*work.d[345]*work.L[878]-work.L[920]*work.d[353]*work.L[879]-work.L[921]*work.d[361]*work.L[880]-work.L[922]*work.d[369]*work.L[881]-work.L[923]*work.d[377]*work.L[882]-work.L[924]*work.d[385]*work.L[883]-work.L[925]*work.d[393]*work.L[884]-work.L[926]*work.d[401]*work.L[885]-work.L[927]*work.d[409]*work.L[886]-work.L[928]*work.d[417]*work.L[887]-work.L[929]*work.d[425]*work.L[888]-work.L[930]*work.d[433]*work.L[889]-work.L[931]*work.d[441]*work.L[890]-work.L[932]*work.d[449]*work.L[891]-work.L[933]*work.d[457]*work.L[892]-work.L[934]*work.d[465]*work.L[893]-work.L[935]*work.d[473]*work.L[894]-work.L[936]*work.d[481]*work.L[895]-work.L[937]*work.d[489]*work.L[896]-work.L[938]*work.d[497]*work.L[897]-work.L[939]*work.d[505]*work.L[898]-work.L[940]*work.d[513]*1;
  residual += temp*temp;

  temp = work.KKT[1406]-work.L[960]*work.d[337]*work.L[877]-work.L[961]*work.d[345]*work.L[878]-work.L[962]*work.d[353]*work.L[879]-work.L[963]*work.d[361]*work.L[880]-work.L[964]*work.d[369]*work.L[881]-work.L[965]*work.d[377]*work.L[882]-work.L[966]*work.d[385]*work.L[883]-work.L[967]*work.d[393]*work.L[884]-work.L[968]*work.d[401]*work.L[885]-work.L[969]*work.d[409]*work.L[886]-work.L[970]*work.d[417]*work.L[887]-work.L[971]*work.d[425]*work.L[888]-work.L[972]*work.d[433]*work.L[889]-work.L[973]*work.d[441]*work.L[890]-work.L[974]*work.d[449]*work.L[891]-work.L[975]*work.d[457]*work.L[892]-work.L[976]*work.d[465]*work.L[893]-work.L[977]*work.d[473]*work.L[894]-work.L[978]*work.d[481]*work.L[895]-work.L[979]*work.d[489]*work.L[896]-work.L[980]*work.d[497]*work.L[897]-work.L[981]*work.d[505]*work.L[898]-work.L[982]*work.d[513]*1;
  residual += temp*temp;

  temp = work.KKT[1407]-work.L[1003]*work.d[337]*work.L[877]-work.L[1004]*work.d[345]*work.L[878]-work.L[1005]*work.d[353]*work.L[879]-work.L[1006]*work.d[361]*work.L[880]-work.L[1007]*work.d[369]*work.L[881]-work.L[1008]*work.d[377]*work.L[882]-work.L[1009]*work.d[385]*work.L[883]-work.L[1010]*work.d[393]*work.L[884]-work.L[1011]*work.d[401]*work.L[885]-work.L[1012]*work.d[409]*work.L[886]-work.L[1013]*work.d[417]*work.L[887]-work.L[1014]*work.d[425]*work.L[888]-work.L[1015]*work.d[433]*work.L[889]-work.L[1016]*work.d[441]*work.L[890]-work.L[1017]*work.d[449]*work.L[891]-work.L[1018]*work.d[457]*work.L[892]-work.L[1019]*work.d[465]*work.L[893]-work.L[1020]*work.d[473]*work.L[894]-work.L[1021]*work.d[481]*work.L[895]-work.L[1022]*work.d[489]*work.L[896]-work.L[1023]*work.d[497]*work.L[897]-work.L[1024]*work.d[505]*work.L[898]-work.L[1025]*work.d[513]*1;
  residual += temp*temp;

  temp = work.KKT[1408]-work.L[1047]*work.d[337]*work.L[877]-work.L[1048]*work.d[345]*work.L[878]-work.L[1049]*work.d[353]*work.L[879]-work.L[1050]*work.d[361]*work.L[880]-work.L[1051]*work.d[369]*work.L[881]-work.L[1052]*work.d[377]*work.L[882]-work.L[1053]*work.d[385]*work.L[883]-work.L[1054]*work.d[393]*work.L[884]-work.L[1055]*work.d[401]*work.L[885]-work.L[1056]*work.d[409]*work.L[886]-work.L[1057]*work.d[417]*work.L[887]-work.L[1058]*work.d[425]*work.L[888]-work.L[1059]*work.d[433]*work.L[889]-work.L[1060]*work.d[441]*work.L[890]-work.L[1061]*work.d[449]*work.L[891]-work.L[1062]*work.d[457]*work.L[892]-work.L[1063]*work.d[465]*work.L[893]-work.L[1064]*work.d[473]*work.L[894]-work.L[1065]*work.d[481]*work.L[895]-work.L[1066]*work.d[489]*work.L[896]-work.L[1067]*work.d[497]*work.L[897]-work.L[1068]*work.d[505]*work.L[898]-work.L[1069]*work.d[513]*1;
  residual += temp*temp;

  temp = work.KKT[1409]-work.L[1092]*work.d[337]*work.L[877]-work.L[1093]*work.d[345]*work.L[878]-work.L[1094]*work.d[353]*work.L[879]-work.L[1095]*work.d[361]*work.L[880]-work.L[1096]*work.d[369]*work.L[881]-work.L[1097]*work.d[377]*work.L[882]-work.L[1098]*work.d[385]*work.L[883]-work.L[1099]*work.d[393]*work.L[884]-work.L[1100]*work.d[401]*work.L[885]-work.L[1101]*work.d[409]*work.L[886]-work.L[1102]*work.d[417]*work.L[887]-work.L[1103]*work.d[425]*work.L[888]-work.L[1104]*work.d[433]*work.L[889]-work.L[1105]*work.d[441]*work.L[890]-work.L[1106]*work.d[449]*work.L[891]-work.L[1107]*work.d[457]*work.L[892]-work.L[1108]*work.d[465]*work.L[893]-work.L[1109]*work.d[473]*work.L[894]-work.L[1110]*work.d[481]*work.L[895]-work.L[1111]*work.d[489]*work.L[896]-work.L[1112]*work.d[497]*work.L[897]-work.L[1113]*work.d[505]*work.L[898]-work.L[1114]*work.d[513]*1;
  residual += temp*temp;

  temp = work.KKT[1410]-work.L[1138]*work.d[337]*work.L[877]-work.L[1139]*work.d[345]*work.L[878]-work.L[1140]*work.d[353]*work.L[879]-work.L[1141]*work.d[361]*work.L[880]-work.L[1142]*work.d[369]*work.L[881]-work.L[1143]*work.d[377]*work.L[882]-work.L[1144]*work.d[385]*work.L[883]-work.L[1145]*work.d[393]*work.L[884]-work.L[1146]*work.d[401]*work.L[885]-work.L[1147]*work.d[409]*work.L[886]-work.L[1148]*work.d[417]*work.L[887]-work.L[1149]*work.d[425]*work.L[888]-work.L[1150]*work.d[433]*work.L[889]-work.L[1151]*work.d[441]*work.L[890]-work.L[1152]*work.d[449]*work.L[891]-work.L[1153]*work.d[457]*work.L[892]-work.L[1154]*work.d[465]*work.L[893]-work.L[1155]*work.d[473]*work.L[894]-work.L[1156]*work.d[481]*work.L[895]-work.L[1157]*work.d[489]*work.L[896]-work.L[1158]*work.d[497]*work.L[897]-work.L[1159]*work.d[505]*work.L[898]-work.L[1160]*work.d[513]*1;
  residual += temp*temp;

  temp = work.KKT[1411]-work.L[1167]*work.d[337]*work.L[877]-work.L[1168]*work.d[345]*work.L[878]-work.L[1169]*work.d[353]*work.L[879]-work.L[1170]*work.d[361]*work.L[880]-work.L[1171]*work.d[369]*work.L[881]-work.L[1172]*work.d[377]*work.L[882]-work.L[1173]*work.d[385]*work.L[883]-work.L[1174]*work.d[393]*work.L[884]-work.L[1175]*work.d[401]*work.L[885]-work.L[1176]*work.d[409]*work.L[886]-work.L[1177]*work.d[417]*work.L[887]-work.L[1178]*work.d[425]*work.L[888]-work.L[1179]*work.d[433]*work.L[889]-work.L[1180]*work.d[441]*work.L[890]-work.L[1181]*work.d[449]*work.L[891]-work.L[1182]*work.d[457]*work.L[892]-work.L[1183]*work.d[465]*work.L[893]-work.L[1184]*work.d[473]*work.L[894]-work.L[1185]*work.d[481]*work.L[895]-work.L[1186]*work.d[489]*work.L[896]-work.L[1187]*work.d[497]*work.L[897]-work.L[1188]*work.d[505]*work.L[898]-work.L[1189]*work.d[513]*1;
  residual += temp*temp;

  temp = work.KKT[1427]-work.L[918]*work.d[337]*work.L[918]-work.L[919]*work.d[345]*work.L[919]-work.L[920]*work.d[353]*work.L[920]-work.L[921]*work.d[361]*work.L[921]-work.L[922]*work.d[369]*work.L[922]-work.L[923]*work.d[377]*work.L[923]-work.L[924]*work.d[385]*work.L[924]-work.L[925]*work.d[393]*work.L[925]-work.L[926]*work.d[401]*work.L[926]-work.L[927]*work.d[409]*work.L[927]-work.L[928]*work.d[417]*work.L[928]-work.L[929]*work.d[425]*work.L[929]-work.L[930]*work.d[433]*work.L[930]-work.L[931]*work.d[441]*work.L[931]-work.L[932]*work.d[449]*work.L[932]-work.L[933]*work.d[457]*work.L[933]-work.L[934]*work.d[465]*work.L[934]-work.L[935]*work.d[473]*work.L[935]-work.L[936]*work.d[481]*work.L[936]-work.L[937]*work.d[489]*work.L[937]-work.L[938]*work.d[497]*work.L[938]-work.L[939]*work.d[505]*work.L[939]-work.L[940]*work.d[513]*work.L[940]-1*work.d[521]*1-work.L[941]*work.d[520]*work.L[941];
  residual += temp*temp;

  temp = work.KKT[1428]-work.L[960]*work.d[337]*work.L[918]-work.L[961]*work.d[345]*work.L[919]-work.L[962]*work.d[353]*work.L[920]-work.L[963]*work.d[361]*work.L[921]-work.L[964]*work.d[369]*work.L[922]-work.L[965]*work.d[377]*work.L[923]-work.L[966]*work.d[385]*work.L[924]-work.L[967]*work.d[393]*work.L[925]-work.L[968]*work.d[401]*work.L[926]-work.L[969]*work.d[409]*work.L[927]-work.L[970]*work.d[417]*work.L[928]-work.L[971]*work.d[425]*work.L[929]-work.L[972]*work.d[433]*work.L[930]-work.L[973]*work.d[441]*work.L[931]-work.L[974]*work.d[449]*work.L[932]-work.L[975]*work.d[457]*work.L[933]-work.L[976]*work.d[465]*work.L[934]-work.L[977]*work.d[473]*work.L[935]-work.L[978]*work.d[481]*work.L[936]-work.L[979]*work.d[489]*work.L[937]-work.L[980]*work.d[497]*work.L[938]-work.L[981]*work.d[505]*work.L[939]-work.L[982]*work.d[513]*work.L[940]-work.L[983]*work.d[521]*1;
  residual += temp*temp;

  temp = work.KKT[1429]-work.L[1003]*work.d[337]*work.L[918]-work.L[1004]*work.d[345]*work.L[919]-work.L[1005]*work.d[353]*work.L[920]-work.L[1006]*work.d[361]*work.L[921]-work.L[1007]*work.d[369]*work.L[922]-work.L[1008]*work.d[377]*work.L[923]-work.L[1009]*work.d[385]*work.L[924]-work.L[1010]*work.d[393]*work.L[925]-work.L[1011]*work.d[401]*work.L[926]-work.L[1012]*work.d[409]*work.L[927]-work.L[1013]*work.d[417]*work.L[928]-work.L[1014]*work.d[425]*work.L[929]-work.L[1015]*work.d[433]*work.L[930]-work.L[1016]*work.d[441]*work.L[931]-work.L[1017]*work.d[449]*work.L[932]-work.L[1018]*work.d[457]*work.L[933]-work.L[1019]*work.d[465]*work.L[934]-work.L[1020]*work.d[473]*work.L[935]-work.L[1021]*work.d[481]*work.L[936]-work.L[1022]*work.d[489]*work.L[937]-work.L[1023]*work.d[497]*work.L[938]-work.L[1024]*work.d[505]*work.L[939]-work.L[1025]*work.d[513]*work.L[940]-work.L[1026]*work.d[521]*1;
  residual += temp*temp;

  temp = work.KKT[1430]-work.L[1047]*work.d[337]*work.L[918]-work.L[1048]*work.d[345]*work.L[919]-work.L[1049]*work.d[353]*work.L[920]-work.L[1050]*work.d[361]*work.L[921]-work.L[1051]*work.d[369]*work.L[922]-work.L[1052]*work.d[377]*work.L[923]-work.L[1053]*work.d[385]*work.L[924]-work.L[1054]*work.d[393]*work.L[925]-work.L[1055]*work.d[401]*work.L[926]-work.L[1056]*work.d[409]*work.L[927]-work.L[1057]*work.d[417]*work.L[928]-work.L[1058]*work.d[425]*work.L[929]-work.L[1059]*work.d[433]*work.L[930]-work.L[1060]*work.d[441]*work.L[931]-work.L[1061]*work.d[449]*work.L[932]-work.L[1062]*work.d[457]*work.L[933]-work.L[1063]*work.d[465]*work.L[934]-work.L[1064]*work.d[473]*work.L[935]-work.L[1065]*work.d[481]*work.L[936]-work.L[1066]*work.d[489]*work.L[937]-work.L[1067]*work.d[497]*work.L[938]-work.L[1068]*work.d[505]*work.L[939]-work.L[1069]*work.d[513]*work.L[940]-work.L[1070]*work.d[521]*1;
  residual += temp*temp;

  temp = work.KKT[1431]-work.L[1092]*work.d[337]*work.L[918]-work.L[1093]*work.d[345]*work.L[919]-work.L[1094]*work.d[353]*work.L[920]-work.L[1095]*work.d[361]*work.L[921]-work.L[1096]*work.d[369]*work.L[922]-work.L[1097]*work.d[377]*work.L[923]-work.L[1098]*work.d[385]*work.L[924]-work.L[1099]*work.d[393]*work.L[925]-work.L[1100]*work.d[401]*work.L[926]-work.L[1101]*work.d[409]*work.L[927]-work.L[1102]*work.d[417]*work.L[928]-work.L[1103]*work.d[425]*work.L[929]-work.L[1104]*work.d[433]*work.L[930]-work.L[1105]*work.d[441]*work.L[931]-work.L[1106]*work.d[449]*work.L[932]-work.L[1107]*work.d[457]*work.L[933]-work.L[1108]*work.d[465]*work.L[934]-work.L[1109]*work.d[473]*work.L[935]-work.L[1110]*work.d[481]*work.L[936]-work.L[1111]*work.d[489]*work.L[937]-work.L[1112]*work.d[497]*work.L[938]-work.L[1113]*work.d[505]*work.L[939]-work.L[1114]*work.d[513]*work.L[940]-work.L[1115]*work.d[521]*1;
  residual += temp*temp;

  temp = work.KKT[1432]-work.L[1138]*work.d[337]*work.L[918]-work.L[1139]*work.d[345]*work.L[919]-work.L[1140]*work.d[353]*work.L[920]-work.L[1141]*work.d[361]*work.L[921]-work.L[1142]*work.d[369]*work.L[922]-work.L[1143]*work.d[377]*work.L[923]-work.L[1144]*work.d[385]*work.L[924]-work.L[1145]*work.d[393]*work.L[925]-work.L[1146]*work.d[401]*work.L[926]-work.L[1147]*work.d[409]*work.L[927]-work.L[1148]*work.d[417]*work.L[928]-work.L[1149]*work.d[425]*work.L[929]-work.L[1150]*work.d[433]*work.L[930]-work.L[1151]*work.d[441]*work.L[931]-work.L[1152]*work.d[449]*work.L[932]-work.L[1153]*work.d[457]*work.L[933]-work.L[1154]*work.d[465]*work.L[934]-work.L[1155]*work.d[473]*work.L[935]-work.L[1156]*work.d[481]*work.L[936]-work.L[1157]*work.d[489]*work.L[937]-work.L[1158]*work.d[497]*work.L[938]-work.L[1159]*work.d[505]*work.L[939]-work.L[1160]*work.d[513]*work.L[940]-work.L[1161]*work.d[521]*1;
  residual += temp*temp;

  temp = work.KKT[1433]-work.L[1167]*work.d[337]*work.L[918]-work.L[1168]*work.d[345]*work.L[919]-work.L[1169]*work.d[353]*work.L[920]-work.L[1170]*work.d[361]*work.L[921]-work.L[1171]*work.d[369]*work.L[922]-work.L[1172]*work.d[377]*work.L[923]-work.L[1173]*work.d[385]*work.L[924]-work.L[1174]*work.d[393]*work.L[925]-work.L[1175]*work.d[401]*work.L[926]-work.L[1176]*work.d[409]*work.L[927]-work.L[1177]*work.d[417]*work.L[928]-work.L[1178]*work.d[425]*work.L[929]-work.L[1179]*work.d[433]*work.L[930]-work.L[1180]*work.d[441]*work.L[931]-work.L[1181]*work.d[449]*work.L[932]-work.L[1182]*work.d[457]*work.L[933]-work.L[1183]*work.d[465]*work.L[934]-work.L[1184]*work.d[473]*work.L[935]-work.L[1185]*work.d[481]*work.L[936]-work.L[1186]*work.d[489]*work.L[937]-work.L[1187]*work.d[497]*work.L[938]-work.L[1188]*work.d[505]*work.L[939]-work.L[1189]*work.d[513]*work.L[940]-work.L[1190]*work.d[521]*1;
  residual += temp*temp;

  temp = work.KKT[1449]-work.L[960]*work.d[337]*work.L[960]-work.L[961]*work.d[345]*work.L[961]-work.L[962]*work.d[353]*work.L[962]-work.L[963]*work.d[361]*work.L[963]-work.L[964]*work.d[369]*work.L[964]-work.L[965]*work.d[377]*work.L[965]-work.L[966]*work.d[385]*work.L[966]-work.L[967]*work.d[393]*work.L[967]-work.L[968]*work.d[401]*work.L[968]-work.L[969]*work.d[409]*work.L[969]-work.L[970]*work.d[417]*work.L[970]-work.L[971]*work.d[425]*work.L[971]-work.L[972]*work.d[433]*work.L[972]-work.L[973]*work.d[441]*work.L[973]-work.L[974]*work.d[449]*work.L[974]-work.L[975]*work.d[457]*work.L[975]-work.L[976]*work.d[465]*work.L[976]-work.L[977]*work.d[473]*work.L[977]-work.L[978]*work.d[481]*work.L[978]-work.L[979]*work.d[489]*work.L[979]-work.L[980]*work.d[497]*work.L[980]-work.L[981]*work.d[505]*work.L[981]-work.L[982]*work.d[513]*work.L[982]-work.L[983]*work.d[521]*work.L[983]-1*work.d[529]*1-work.L[984]*work.d[528]*work.L[984];
  residual += temp*temp;

  temp = work.KKT[1450]-work.L[1003]*work.d[337]*work.L[960]-work.L[1004]*work.d[345]*work.L[961]-work.L[1005]*work.d[353]*work.L[962]-work.L[1006]*work.d[361]*work.L[963]-work.L[1007]*work.d[369]*work.L[964]-work.L[1008]*work.d[377]*work.L[965]-work.L[1009]*work.d[385]*work.L[966]-work.L[1010]*work.d[393]*work.L[967]-work.L[1011]*work.d[401]*work.L[968]-work.L[1012]*work.d[409]*work.L[969]-work.L[1013]*work.d[417]*work.L[970]-work.L[1014]*work.d[425]*work.L[971]-work.L[1015]*work.d[433]*work.L[972]-work.L[1016]*work.d[441]*work.L[973]-work.L[1017]*work.d[449]*work.L[974]-work.L[1018]*work.d[457]*work.L[975]-work.L[1019]*work.d[465]*work.L[976]-work.L[1020]*work.d[473]*work.L[977]-work.L[1021]*work.d[481]*work.L[978]-work.L[1022]*work.d[489]*work.L[979]-work.L[1023]*work.d[497]*work.L[980]-work.L[1024]*work.d[505]*work.L[981]-work.L[1025]*work.d[513]*work.L[982]-work.L[1026]*work.d[521]*work.L[983]-work.L[1027]*work.d[529]*1;
  residual += temp*temp;

  temp = work.KKT[1451]-work.L[1047]*work.d[337]*work.L[960]-work.L[1048]*work.d[345]*work.L[961]-work.L[1049]*work.d[353]*work.L[962]-work.L[1050]*work.d[361]*work.L[963]-work.L[1051]*work.d[369]*work.L[964]-work.L[1052]*work.d[377]*work.L[965]-work.L[1053]*work.d[385]*work.L[966]-work.L[1054]*work.d[393]*work.L[967]-work.L[1055]*work.d[401]*work.L[968]-work.L[1056]*work.d[409]*work.L[969]-work.L[1057]*work.d[417]*work.L[970]-work.L[1058]*work.d[425]*work.L[971]-work.L[1059]*work.d[433]*work.L[972]-work.L[1060]*work.d[441]*work.L[973]-work.L[1061]*work.d[449]*work.L[974]-work.L[1062]*work.d[457]*work.L[975]-work.L[1063]*work.d[465]*work.L[976]-work.L[1064]*work.d[473]*work.L[977]-work.L[1065]*work.d[481]*work.L[978]-work.L[1066]*work.d[489]*work.L[979]-work.L[1067]*work.d[497]*work.L[980]-work.L[1068]*work.d[505]*work.L[981]-work.L[1069]*work.d[513]*work.L[982]-work.L[1070]*work.d[521]*work.L[983]-work.L[1071]*work.d[529]*1;
  residual += temp*temp;

  temp = work.KKT[1452]-work.L[1092]*work.d[337]*work.L[960]-work.L[1093]*work.d[345]*work.L[961]-work.L[1094]*work.d[353]*work.L[962]-work.L[1095]*work.d[361]*work.L[963]-work.L[1096]*work.d[369]*work.L[964]-work.L[1097]*work.d[377]*work.L[965]-work.L[1098]*work.d[385]*work.L[966]-work.L[1099]*work.d[393]*work.L[967]-work.L[1100]*work.d[401]*work.L[968]-work.L[1101]*work.d[409]*work.L[969]-work.L[1102]*work.d[417]*work.L[970]-work.L[1103]*work.d[425]*work.L[971]-work.L[1104]*work.d[433]*work.L[972]-work.L[1105]*work.d[441]*work.L[973]-work.L[1106]*work.d[449]*work.L[974]-work.L[1107]*work.d[457]*work.L[975]-work.L[1108]*work.d[465]*work.L[976]-work.L[1109]*work.d[473]*work.L[977]-work.L[1110]*work.d[481]*work.L[978]-work.L[1111]*work.d[489]*work.L[979]-work.L[1112]*work.d[497]*work.L[980]-work.L[1113]*work.d[505]*work.L[981]-work.L[1114]*work.d[513]*work.L[982]-work.L[1115]*work.d[521]*work.L[983]-work.L[1116]*work.d[529]*1;
  residual += temp*temp;

  temp = work.KKT[1453]-work.L[1138]*work.d[337]*work.L[960]-work.L[1139]*work.d[345]*work.L[961]-work.L[1140]*work.d[353]*work.L[962]-work.L[1141]*work.d[361]*work.L[963]-work.L[1142]*work.d[369]*work.L[964]-work.L[1143]*work.d[377]*work.L[965]-work.L[1144]*work.d[385]*work.L[966]-work.L[1145]*work.d[393]*work.L[967]-work.L[1146]*work.d[401]*work.L[968]-work.L[1147]*work.d[409]*work.L[969]-work.L[1148]*work.d[417]*work.L[970]-work.L[1149]*work.d[425]*work.L[971]-work.L[1150]*work.d[433]*work.L[972]-work.L[1151]*work.d[441]*work.L[973]-work.L[1152]*work.d[449]*work.L[974]-work.L[1153]*work.d[457]*work.L[975]-work.L[1154]*work.d[465]*work.L[976]-work.L[1155]*work.d[473]*work.L[977]-work.L[1156]*work.d[481]*work.L[978]-work.L[1157]*work.d[489]*work.L[979]-work.L[1158]*work.d[497]*work.L[980]-work.L[1159]*work.d[505]*work.L[981]-work.L[1160]*work.d[513]*work.L[982]-work.L[1161]*work.d[521]*work.L[983]-work.L[1162]*work.d[529]*1;
  residual += temp*temp;

  temp = work.KKT[1454]-work.L[1167]*work.d[337]*work.L[960]-work.L[1168]*work.d[345]*work.L[961]-work.L[1169]*work.d[353]*work.L[962]-work.L[1170]*work.d[361]*work.L[963]-work.L[1171]*work.d[369]*work.L[964]-work.L[1172]*work.d[377]*work.L[965]-work.L[1173]*work.d[385]*work.L[966]-work.L[1174]*work.d[393]*work.L[967]-work.L[1175]*work.d[401]*work.L[968]-work.L[1176]*work.d[409]*work.L[969]-work.L[1177]*work.d[417]*work.L[970]-work.L[1178]*work.d[425]*work.L[971]-work.L[1179]*work.d[433]*work.L[972]-work.L[1180]*work.d[441]*work.L[973]-work.L[1181]*work.d[449]*work.L[974]-work.L[1182]*work.d[457]*work.L[975]-work.L[1183]*work.d[465]*work.L[976]-work.L[1184]*work.d[473]*work.L[977]-work.L[1185]*work.d[481]*work.L[978]-work.L[1186]*work.d[489]*work.L[979]-work.L[1187]*work.d[497]*work.L[980]-work.L[1188]*work.d[505]*work.L[981]-work.L[1189]*work.d[513]*work.L[982]-work.L[1190]*work.d[521]*work.L[983]-work.L[1191]*work.d[529]*1;
  residual += temp*temp;

  temp = work.KKT[1470]-work.L[1003]*work.d[337]*work.L[1003]-work.L[1004]*work.d[345]*work.L[1004]-work.L[1005]*work.d[353]*work.L[1005]-work.L[1006]*work.d[361]*work.L[1006]-work.L[1007]*work.d[369]*work.L[1007]-work.L[1008]*work.d[377]*work.L[1008]-work.L[1009]*work.d[385]*work.L[1009]-work.L[1010]*work.d[393]*work.L[1010]-work.L[1011]*work.d[401]*work.L[1011]-work.L[1012]*work.d[409]*work.L[1012]-work.L[1013]*work.d[417]*work.L[1013]-work.L[1014]*work.d[425]*work.L[1014]-work.L[1015]*work.d[433]*work.L[1015]-work.L[1016]*work.d[441]*work.L[1016]-work.L[1017]*work.d[449]*work.L[1017]-work.L[1018]*work.d[457]*work.L[1018]-work.L[1019]*work.d[465]*work.L[1019]-work.L[1020]*work.d[473]*work.L[1020]-work.L[1021]*work.d[481]*work.L[1021]-work.L[1022]*work.d[489]*work.L[1022]-work.L[1023]*work.d[497]*work.L[1023]-work.L[1024]*work.d[505]*work.L[1024]-work.L[1025]*work.d[513]*work.L[1025]-work.L[1026]*work.d[521]*work.L[1026]-work.L[1027]*work.d[529]*work.L[1027]-1*work.d[537]*1-work.L[1028]*work.d[536]*work.L[1028];
  residual += temp*temp;

  temp = work.KKT[1471]-work.L[1047]*work.d[337]*work.L[1003]-work.L[1048]*work.d[345]*work.L[1004]-work.L[1049]*work.d[353]*work.L[1005]-work.L[1050]*work.d[361]*work.L[1006]-work.L[1051]*work.d[369]*work.L[1007]-work.L[1052]*work.d[377]*work.L[1008]-work.L[1053]*work.d[385]*work.L[1009]-work.L[1054]*work.d[393]*work.L[1010]-work.L[1055]*work.d[401]*work.L[1011]-work.L[1056]*work.d[409]*work.L[1012]-work.L[1057]*work.d[417]*work.L[1013]-work.L[1058]*work.d[425]*work.L[1014]-work.L[1059]*work.d[433]*work.L[1015]-work.L[1060]*work.d[441]*work.L[1016]-work.L[1061]*work.d[449]*work.L[1017]-work.L[1062]*work.d[457]*work.L[1018]-work.L[1063]*work.d[465]*work.L[1019]-work.L[1064]*work.d[473]*work.L[1020]-work.L[1065]*work.d[481]*work.L[1021]-work.L[1066]*work.d[489]*work.L[1022]-work.L[1067]*work.d[497]*work.L[1023]-work.L[1068]*work.d[505]*work.L[1024]-work.L[1069]*work.d[513]*work.L[1025]-work.L[1070]*work.d[521]*work.L[1026]-work.L[1071]*work.d[529]*work.L[1027]-work.L[1072]*work.d[537]*1;
  residual += temp*temp;

  temp = work.KKT[1472]-work.L[1092]*work.d[337]*work.L[1003]-work.L[1093]*work.d[345]*work.L[1004]-work.L[1094]*work.d[353]*work.L[1005]-work.L[1095]*work.d[361]*work.L[1006]-work.L[1096]*work.d[369]*work.L[1007]-work.L[1097]*work.d[377]*work.L[1008]-work.L[1098]*work.d[385]*work.L[1009]-work.L[1099]*work.d[393]*work.L[1010]-work.L[1100]*work.d[401]*work.L[1011]-work.L[1101]*work.d[409]*work.L[1012]-work.L[1102]*work.d[417]*work.L[1013]-work.L[1103]*work.d[425]*work.L[1014]-work.L[1104]*work.d[433]*work.L[1015]-work.L[1105]*work.d[441]*work.L[1016]-work.L[1106]*work.d[449]*work.L[1017]-work.L[1107]*work.d[457]*work.L[1018]-work.L[1108]*work.d[465]*work.L[1019]-work.L[1109]*work.d[473]*work.L[1020]-work.L[1110]*work.d[481]*work.L[1021]-work.L[1111]*work.d[489]*work.L[1022]-work.L[1112]*work.d[497]*work.L[1023]-work.L[1113]*work.d[505]*work.L[1024]-work.L[1114]*work.d[513]*work.L[1025]-work.L[1115]*work.d[521]*work.L[1026]-work.L[1116]*work.d[529]*work.L[1027]-work.L[1117]*work.d[537]*1;
  residual += temp*temp;

  temp = work.KKT[1473]-work.L[1138]*work.d[337]*work.L[1003]-work.L[1139]*work.d[345]*work.L[1004]-work.L[1140]*work.d[353]*work.L[1005]-work.L[1141]*work.d[361]*work.L[1006]-work.L[1142]*work.d[369]*work.L[1007]-work.L[1143]*work.d[377]*work.L[1008]-work.L[1144]*work.d[385]*work.L[1009]-work.L[1145]*work.d[393]*work.L[1010]-work.L[1146]*work.d[401]*work.L[1011]-work.L[1147]*work.d[409]*work.L[1012]-work.L[1148]*work.d[417]*work.L[1013]-work.L[1149]*work.d[425]*work.L[1014]-work.L[1150]*work.d[433]*work.L[1015]-work.L[1151]*work.d[441]*work.L[1016]-work.L[1152]*work.d[449]*work.L[1017]-work.L[1153]*work.d[457]*work.L[1018]-work.L[1154]*work.d[465]*work.L[1019]-work.L[1155]*work.d[473]*work.L[1020]-work.L[1156]*work.d[481]*work.L[1021]-work.L[1157]*work.d[489]*work.L[1022]-work.L[1158]*work.d[497]*work.L[1023]-work.L[1159]*work.d[505]*work.L[1024]-work.L[1160]*work.d[513]*work.L[1025]-work.L[1161]*work.d[521]*work.L[1026]-work.L[1162]*work.d[529]*work.L[1027]-work.L[1163]*work.d[537]*1;
  residual += temp*temp;

  temp = work.KKT[1474]-work.L[1167]*work.d[337]*work.L[1003]-work.L[1168]*work.d[345]*work.L[1004]-work.L[1169]*work.d[353]*work.L[1005]-work.L[1170]*work.d[361]*work.L[1006]-work.L[1171]*work.d[369]*work.L[1007]-work.L[1172]*work.d[377]*work.L[1008]-work.L[1173]*work.d[385]*work.L[1009]-work.L[1174]*work.d[393]*work.L[1010]-work.L[1175]*work.d[401]*work.L[1011]-work.L[1176]*work.d[409]*work.L[1012]-work.L[1177]*work.d[417]*work.L[1013]-work.L[1178]*work.d[425]*work.L[1014]-work.L[1179]*work.d[433]*work.L[1015]-work.L[1180]*work.d[441]*work.L[1016]-work.L[1181]*work.d[449]*work.L[1017]-work.L[1182]*work.d[457]*work.L[1018]-work.L[1183]*work.d[465]*work.L[1019]-work.L[1184]*work.d[473]*work.L[1020]-work.L[1185]*work.d[481]*work.L[1021]-work.L[1186]*work.d[489]*work.L[1022]-work.L[1187]*work.d[497]*work.L[1023]-work.L[1188]*work.d[505]*work.L[1024]-work.L[1189]*work.d[513]*work.L[1025]-work.L[1190]*work.d[521]*work.L[1026]-work.L[1191]*work.d[529]*work.L[1027]-work.L[1192]*work.d[537]*1;
  residual += temp*temp;

  temp = work.KKT[1490]-work.L[1047]*work.d[337]*work.L[1047]-work.L[1048]*work.d[345]*work.L[1048]-work.L[1049]*work.d[353]*work.L[1049]-work.L[1050]*work.d[361]*work.L[1050]-work.L[1051]*work.d[369]*work.L[1051]-work.L[1052]*work.d[377]*work.L[1052]-work.L[1053]*work.d[385]*work.L[1053]-work.L[1054]*work.d[393]*work.L[1054]-work.L[1055]*work.d[401]*work.L[1055]-work.L[1056]*work.d[409]*work.L[1056]-work.L[1057]*work.d[417]*work.L[1057]-work.L[1058]*work.d[425]*work.L[1058]-work.L[1059]*work.d[433]*work.L[1059]-work.L[1060]*work.d[441]*work.L[1060]-work.L[1061]*work.d[449]*work.L[1061]-work.L[1062]*work.d[457]*work.L[1062]-work.L[1063]*work.d[465]*work.L[1063]-work.L[1064]*work.d[473]*work.L[1064]-work.L[1065]*work.d[481]*work.L[1065]-work.L[1066]*work.d[489]*work.L[1066]-work.L[1067]*work.d[497]*work.L[1067]-work.L[1068]*work.d[505]*work.L[1068]-work.L[1069]*work.d[513]*work.L[1069]-work.L[1070]*work.d[521]*work.L[1070]-work.L[1071]*work.d[529]*work.L[1071]-work.L[1072]*work.d[537]*work.L[1072]-1*work.d[545]*1-work.L[1073]*work.d[544]*work.L[1073];
  residual += temp*temp;

  temp = work.KKT[1491]-work.L[1092]*work.d[337]*work.L[1047]-work.L[1093]*work.d[345]*work.L[1048]-work.L[1094]*work.d[353]*work.L[1049]-work.L[1095]*work.d[361]*work.L[1050]-work.L[1096]*work.d[369]*work.L[1051]-work.L[1097]*work.d[377]*work.L[1052]-work.L[1098]*work.d[385]*work.L[1053]-work.L[1099]*work.d[393]*work.L[1054]-work.L[1100]*work.d[401]*work.L[1055]-work.L[1101]*work.d[409]*work.L[1056]-work.L[1102]*work.d[417]*work.L[1057]-work.L[1103]*work.d[425]*work.L[1058]-work.L[1104]*work.d[433]*work.L[1059]-work.L[1105]*work.d[441]*work.L[1060]-work.L[1106]*work.d[449]*work.L[1061]-work.L[1107]*work.d[457]*work.L[1062]-work.L[1108]*work.d[465]*work.L[1063]-work.L[1109]*work.d[473]*work.L[1064]-work.L[1110]*work.d[481]*work.L[1065]-work.L[1111]*work.d[489]*work.L[1066]-work.L[1112]*work.d[497]*work.L[1067]-work.L[1113]*work.d[505]*work.L[1068]-work.L[1114]*work.d[513]*work.L[1069]-work.L[1115]*work.d[521]*work.L[1070]-work.L[1116]*work.d[529]*work.L[1071]-work.L[1117]*work.d[537]*work.L[1072]-work.L[1118]*work.d[545]*1;
  residual += temp*temp;

  temp = work.KKT[1492]-work.L[1138]*work.d[337]*work.L[1047]-work.L[1139]*work.d[345]*work.L[1048]-work.L[1140]*work.d[353]*work.L[1049]-work.L[1141]*work.d[361]*work.L[1050]-work.L[1142]*work.d[369]*work.L[1051]-work.L[1143]*work.d[377]*work.L[1052]-work.L[1144]*work.d[385]*work.L[1053]-work.L[1145]*work.d[393]*work.L[1054]-work.L[1146]*work.d[401]*work.L[1055]-work.L[1147]*work.d[409]*work.L[1056]-work.L[1148]*work.d[417]*work.L[1057]-work.L[1149]*work.d[425]*work.L[1058]-work.L[1150]*work.d[433]*work.L[1059]-work.L[1151]*work.d[441]*work.L[1060]-work.L[1152]*work.d[449]*work.L[1061]-work.L[1153]*work.d[457]*work.L[1062]-work.L[1154]*work.d[465]*work.L[1063]-work.L[1155]*work.d[473]*work.L[1064]-work.L[1156]*work.d[481]*work.L[1065]-work.L[1157]*work.d[489]*work.L[1066]-work.L[1158]*work.d[497]*work.L[1067]-work.L[1159]*work.d[505]*work.L[1068]-work.L[1160]*work.d[513]*work.L[1069]-work.L[1161]*work.d[521]*work.L[1070]-work.L[1162]*work.d[529]*work.L[1071]-work.L[1163]*work.d[537]*work.L[1072]-work.L[1164]*work.d[545]*1;
  residual += temp*temp;

  temp = work.KKT[1493]-work.L[1167]*work.d[337]*work.L[1047]-work.L[1168]*work.d[345]*work.L[1048]-work.L[1169]*work.d[353]*work.L[1049]-work.L[1170]*work.d[361]*work.L[1050]-work.L[1171]*work.d[369]*work.L[1051]-work.L[1172]*work.d[377]*work.L[1052]-work.L[1173]*work.d[385]*work.L[1053]-work.L[1174]*work.d[393]*work.L[1054]-work.L[1175]*work.d[401]*work.L[1055]-work.L[1176]*work.d[409]*work.L[1056]-work.L[1177]*work.d[417]*work.L[1057]-work.L[1178]*work.d[425]*work.L[1058]-work.L[1179]*work.d[433]*work.L[1059]-work.L[1180]*work.d[441]*work.L[1060]-work.L[1181]*work.d[449]*work.L[1061]-work.L[1182]*work.d[457]*work.L[1062]-work.L[1183]*work.d[465]*work.L[1063]-work.L[1184]*work.d[473]*work.L[1064]-work.L[1185]*work.d[481]*work.L[1065]-work.L[1186]*work.d[489]*work.L[1066]-work.L[1187]*work.d[497]*work.L[1067]-work.L[1188]*work.d[505]*work.L[1068]-work.L[1189]*work.d[513]*work.L[1069]-work.L[1190]*work.d[521]*work.L[1070]-work.L[1191]*work.d[529]*work.L[1071]-work.L[1192]*work.d[537]*work.L[1072]-work.L[1193]*work.d[545]*1;
  residual += temp*temp;

  temp = work.KKT[1509]-work.L[1092]*work.d[337]*work.L[1092]-work.L[1093]*work.d[345]*work.L[1093]-work.L[1094]*work.d[353]*work.L[1094]-work.L[1095]*work.d[361]*work.L[1095]-work.L[1096]*work.d[369]*work.L[1096]-work.L[1097]*work.d[377]*work.L[1097]-work.L[1098]*work.d[385]*work.L[1098]-work.L[1099]*work.d[393]*work.L[1099]-work.L[1100]*work.d[401]*work.L[1100]-work.L[1101]*work.d[409]*work.L[1101]-work.L[1102]*work.d[417]*work.L[1102]-work.L[1103]*work.d[425]*work.L[1103]-work.L[1104]*work.d[433]*work.L[1104]-work.L[1105]*work.d[441]*work.L[1105]-work.L[1106]*work.d[449]*work.L[1106]-work.L[1107]*work.d[457]*work.L[1107]-work.L[1108]*work.d[465]*work.L[1108]-work.L[1109]*work.d[473]*work.L[1109]-work.L[1110]*work.d[481]*work.L[1110]-work.L[1111]*work.d[489]*work.L[1111]-work.L[1112]*work.d[497]*work.L[1112]-work.L[1113]*work.d[505]*work.L[1113]-work.L[1114]*work.d[513]*work.L[1114]-work.L[1115]*work.d[521]*work.L[1115]-work.L[1116]*work.d[529]*work.L[1116]-work.L[1117]*work.d[537]*work.L[1117]-work.L[1118]*work.d[545]*work.L[1118]-1*work.d[553]*1-work.L[1119]*work.d[552]*work.L[1119];
  residual += temp*temp;

  temp = work.KKT[1510]-work.L[1138]*work.d[337]*work.L[1092]-work.L[1139]*work.d[345]*work.L[1093]-work.L[1140]*work.d[353]*work.L[1094]-work.L[1141]*work.d[361]*work.L[1095]-work.L[1142]*work.d[369]*work.L[1096]-work.L[1143]*work.d[377]*work.L[1097]-work.L[1144]*work.d[385]*work.L[1098]-work.L[1145]*work.d[393]*work.L[1099]-work.L[1146]*work.d[401]*work.L[1100]-work.L[1147]*work.d[409]*work.L[1101]-work.L[1148]*work.d[417]*work.L[1102]-work.L[1149]*work.d[425]*work.L[1103]-work.L[1150]*work.d[433]*work.L[1104]-work.L[1151]*work.d[441]*work.L[1105]-work.L[1152]*work.d[449]*work.L[1106]-work.L[1153]*work.d[457]*work.L[1107]-work.L[1154]*work.d[465]*work.L[1108]-work.L[1155]*work.d[473]*work.L[1109]-work.L[1156]*work.d[481]*work.L[1110]-work.L[1157]*work.d[489]*work.L[1111]-work.L[1158]*work.d[497]*work.L[1112]-work.L[1159]*work.d[505]*work.L[1113]-work.L[1160]*work.d[513]*work.L[1114]-work.L[1161]*work.d[521]*work.L[1115]-work.L[1162]*work.d[529]*work.L[1116]-work.L[1163]*work.d[537]*work.L[1117]-work.L[1164]*work.d[545]*work.L[1118]-work.L[1165]*work.d[553]*1;
  residual += temp*temp;

  temp = work.KKT[1511]-work.L[1167]*work.d[337]*work.L[1092]-work.L[1168]*work.d[345]*work.L[1093]-work.L[1169]*work.d[353]*work.L[1094]-work.L[1170]*work.d[361]*work.L[1095]-work.L[1171]*work.d[369]*work.L[1096]-work.L[1172]*work.d[377]*work.L[1097]-work.L[1173]*work.d[385]*work.L[1098]-work.L[1174]*work.d[393]*work.L[1099]-work.L[1175]*work.d[401]*work.L[1100]-work.L[1176]*work.d[409]*work.L[1101]-work.L[1177]*work.d[417]*work.L[1102]-work.L[1178]*work.d[425]*work.L[1103]-work.L[1179]*work.d[433]*work.L[1104]-work.L[1180]*work.d[441]*work.L[1105]-work.L[1181]*work.d[449]*work.L[1106]-work.L[1182]*work.d[457]*work.L[1107]-work.L[1183]*work.d[465]*work.L[1108]-work.L[1184]*work.d[473]*work.L[1109]-work.L[1185]*work.d[481]*work.L[1110]-work.L[1186]*work.d[489]*work.L[1111]-work.L[1187]*work.d[497]*work.L[1112]-work.L[1188]*work.d[505]*work.L[1113]-work.L[1189]*work.d[513]*work.L[1114]-work.L[1190]*work.d[521]*work.L[1115]-work.L[1191]*work.d[529]*work.L[1116]-work.L[1192]*work.d[537]*work.L[1117]-work.L[1193]*work.d[545]*work.L[1118]-work.L[1194]*work.d[553]*1;
  residual += temp*temp;

  temp = work.KKT[1527]-work.L[1138]*work.d[337]*work.L[1138]-work.L[1139]*work.d[345]*work.L[1139]-work.L[1140]*work.d[353]*work.L[1140]-work.L[1141]*work.d[361]*work.L[1141]-work.L[1142]*work.d[369]*work.L[1142]-work.L[1143]*work.d[377]*work.L[1143]-work.L[1144]*work.d[385]*work.L[1144]-work.L[1145]*work.d[393]*work.L[1145]-work.L[1146]*work.d[401]*work.L[1146]-work.L[1147]*work.d[409]*work.L[1147]-work.L[1148]*work.d[417]*work.L[1148]-work.L[1149]*work.d[425]*work.L[1149]-work.L[1150]*work.d[433]*work.L[1150]-work.L[1151]*work.d[441]*work.L[1151]-work.L[1152]*work.d[449]*work.L[1152]-work.L[1153]*work.d[457]*work.L[1153]-work.L[1154]*work.d[465]*work.L[1154]-work.L[1155]*work.d[473]*work.L[1155]-work.L[1156]*work.d[481]*work.L[1156]-work.L[1157]*work.d[489]*work.L[1157]-work.L[1158]*work.d[497]*work.L[1158]-work.L[1159]*work.d[505]*work.L[1159]-work.L[1160]*work.d[513]*work.L[1160]-work.L[1161]*work.d[521]*work.L[1161]-work.L[1162]*work.d[529]*work.L[1162]-work.L[1163]*work.d[537]*work.L[1163]-work.L[1164]*work.d[545]*work.L[1164]-work.L[1165]*work.d[553]*work.L[1165]-1*work.d[561]*1-work.L[1166]*work.d[560]*work.L[1166];
  residual += temp*temp;

  temp = work.KKT[1528]-work.L[1167]*work.d[337]*work.L[1138]-work.L[1168]*work.d[345]*work.L[1139]-work.L[1169]*work.d[353]*work.L[1140]-work.L[1170]*work.d[361]*work.L[1141]-work.L[1171]*work.d[369]*work.L[1142]-work.L[1172]*work.d[377]*work.L[1143]-work.L[1173]*work.d[385]*work.L[1144]-work.L[1174]*work.d[393]*work.L[1145]-work.L[1175]*work.d[401]*work.L[1146]-work.L[1176]*work.d[409]*work.L[1147]-work.L[1177]*work.d[417]*work.L[1148]-work.L[1178]*work.d[425]*work.L[1149]-work.L[1179]*work.d[433]*work.L[1150]-work.L[1180]*work.d[441]*work.L[1151]-work.L[1181]*work.d[449]*work.L[1152]-work.L[1182]*work.d[457]*work.L[1153]-work.L[1183]*work.d[465]*work.L[1154]-work.L[1184]*work.d[473]*work.L[1155]-work.L[1185]*work.d[481]*work.L[1156]-work.L[1186]*work.d[489]*work.L[1157]-work.L[1187]*work.d[497]*work.L[1158]-work.L[1188]*work.d[505]*work.L[1159]-work.L[1189]*work.d[513]*work.L[1160]-work.L[1190]*work.d[521]*work.L[1161]-work.L[1191]*work.d[529]*work.L[1162]-work.L[1192]*work.d[537]*work.L[1163]-work.L[1193]*work.d[545]*work.L[1164]-work.L[1194]*work.d[553]*work.L[1165]-work.L[1195]*work.d[561]*1;
  residual += temp*temp;

  temp = work.KKT[1529]-work.L[1167]*work.d[337]*work.L[1167]-work.L[1168]*work.d[345]*work.L[1168]-work.L[1169]*work.d[353]*work.L[1169]-work.L[1170]*work.d[361]*work.L[1170]-work.L[1171]*work.d[369]*work.L[1171]-work.L[1172]*work.d[377]*work.L[1172]-work.L[1173]*work.d[385]*work.L[1173]-work.L[1174]*work.d[393]*work.L[1174]-work.L[1175]*work.d[401]*work.L[1175]-work.L[1176]*work.d[409]*work.L[1176]-work.L[1177]*work.d[417]*work.L[1177]-work.L[1178]*work.d[425]*work.L[1178]-work.L[1179]*work.d[433]*work.L[1179]-work.L[1180]*work.d[441]*work.L[1180]-work.L[1181]*work.d[449]*work.L[1181]-work.L[1182]*work.d[457]*work.L[1182]-work.L[1183]*work.d[465]*work.L[1183]-work.L[1184]*work.d[473]*work.L[1184]-work.L[1185]*work.d[481]*work.L[1185]-work.L[1186]*work.d[489]*work.L[1186]-work.L[1187]*work.d[497]*work.L[1187]-work.L[1188]*work.d[505]*work.L[1188]-work.L[1189]*work.d[513]*work.L[1189]-work.L[1190]*work.d[521]*work.L[1190]-work.L[1191]*work.d[529]*work.L[1191]-work.L[1192]*work.d[537]*work.L[1192]-work.L[1193]*work.d[545]*work.L[1193]-work.L[1194]*work.d[553]*work.L[1194]-work.L[1195]*work.d[561]*work.L[1195]-1*work.d[562]*1;
  residual += temp*temp;

  temp = work.KKT[570]-1*work.d[300]*1;
  residual += temp*temp;

  temp = work.KKT[572]-1*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[574]-1*work.d[302]*1;
  residual += temp*temp;

  temp = work.KKT[576]-1*work.d[303]*1;
  residual += temp*temp;

  temp = work.KKT[578]-1*work.d[304]*1;
  residual += temp*temp;

  temp = work.KKT[580]-1*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[582]-1*work.d[306]*1;
  residual += temp*temp;

  temp = work.KKT[584]-1*work.d[307]*1;
  residual += temp*temp;

  temp = work.KKT[586]-1*work.d[308]*1;
  residual += temp*temp;

  temp = work.KKT[588]-1*work.d[309]*1;
  residual += temp*temp;

  temp = work.KKT[590]-1*work.d[310]*1;
  residual += temp*temp;

  temp = work.KKT[592]-1*work.d[311]*1;
  residual += temp*temp;

  temp = work.KKT[594]-1*work.d[312]*1;
  residual += temp*temp;

  temp = work.KKT[596]-1*work.d[313]*1;
  residual += temp*temp;

  temp = work.KKT[598]-1*work.d[314]*1;
  residual += temp*temp;

  temp = work.KKT[600]-1*work.d[315]*1;
  residual += temp*temp;

  temp = work.KKT[602]-1*work.d[316]*1;
  residual += temp*temp;

  temp = work.KKT[604]-1*work.d[317]*1;
  residual += temp*temp;

  temp = work.KKT[606]-1*work.d[318]*1;
  residual += temp*temp;

  temp = work.KKT[608]-1*work.d[319]*1;
  residual += temp*temp;

  temp = work.KKT[610]-1*work.d[320]*1;
  residual += temp*temp;

  temp = work.KKT[612]-1*work.d[321]*1;
  residual += temp*temp;

  temp = work.KKT[614]-1*work.d[322]*1;
  residual += temp*temp;

  temp = work.KKT[616]-1*work.d[323]*1;
  residual += temp*temp;

  temp = work.KKT[618]-1*work.d[324]*1;
  residual += temp*temp;

  temp = work.KKT[620]-1*work.d[325]*1;
  residual += temp*temp;

  temp = work.KKT[622]-1*work.d[326]*1;
  residual += temp*temp;

  temp = work.KKT[624]-1*work.d[327]*1;
  residual += temp*temp;

  temp = work.KKT[626]-1*work.d[328]*1;
  residual += temp*temp;

  temp = work.KKT[628]-1*work.d[329]*1;
  residual += temp*temp;

  temp = work.KKT[640]-1*work.d[334]*1-work.L[217]*work.d[330]*work.L[217]-work.L[215]*work.d[211]*work.L[215]-work.L[216]*work.d[212]*work.L[216]-work.L[218]*work.d[331]*work.L[218]-work.L[219]*work.d[332]*work.L[219]-work.L[220]*work.d[333]*work.L[220];
  residual += temp*temp;

  temp = work.KKT[685]-1*work.d[342]*1-work.L[236]*work.d[338]*work.L[236]-work.L[234]*work.d[214]*work.L[234]-work.L[235]*work.d[215]*work.L[235]-work.L[237]*work.d[339]*work.L[237]-work.L[238]*work.d[340]*work.L[238]-work.L[239]*work.d[341]*work.L[239];
  residual += temp*temp;

  temp = work.KKT[729]-1*work.d[350]*1-work.L[256]*work.d[346]*work.L[256]-work.L[254]*work.d[217]*work.L[254]-work.L[255]*work.d[218]*work.L[255]-work.L[257]*work.d[347]*work.L[257]-work.L[258]*work.d[348]*work.L[258]-work.L[259]*work.d[349]*work.L[259];
  residual += temp*temp;

  temp = work.KKT[772]-1*work.d[358]*1-work.L[277]*work.d[354]*work.L[277]-work.L[275]*work.d[220]*work.L[275]-work.L[276]*work.d[221]*work.L[276]-work.L[278]*work.d[355]*work.L[278]-work.L[279]*work.d[356]*work.L[279]-work.L[280]*work.d[357]*work.L[280];
  residual += temp*temp;

  temp = work.KKT[814]-1*work.d[366]*1-work.L[299]*work.d[362]*work.L[299]-work.L[297]*work.d[223]*work.L[297]-work.L[298]*work.d[224]*work.L[298]-work.L[300]*work.d[363]*work.L[300]-work.L[301]*work.d[364]*work.L[301]-work.L[302]*work.d[365]*work.L[302];
  residual += temp*temp;

  temp = work.KKT[855]-1*work.d[374]*1-work.L[322]*work.d[370]*work.L[322]-work.L[320]*work.d[226]*work.L[320]-work.L[321]*work.d[227]*work.L[321]-work.L[323]*work.d[371]*work.L[323]-work.L[324]*work.d[372]*work.L[324]-work.L[325]*work.d[373]*work.L[325];
  residual += temp*temp;

  temp = work.KKT[895]-1*work.d[382]*1-work.L[346]*work.d[378]*work.L[346]-work.L[344]*work.d[229]*work.L[344]-work.L[345]*work.d[230]*work.L[345]-work.L[347]*work.d[379]*work.L[347]-work.L[348]*work.d[380]*work.L[348]-work.L[349]*work.d[381]*work.L[349];
  residual += temp*temp;

  temp = work.KKT[934]-1*work.d[390]*1-work.L[371]*work.d[386]*work.L[371]-work.L[369]*work.d[232]*work.L[369]-work.L[370]*work.d[233]*work.L[370]-work.L[372]*work.d[387]*work.L[372]-work.L[373]*work.d[388]*work.L[373]-work.L[374]*work.d[389]*work.L[374];
  residual += temp*temp;

  temp = work.KKT[972]-1*work.d[398]*1-work.L[397]*work.d[394]*work.L[397]-work.L[395]*work.d[235]*work.L[395]-work.L[396]*work.d[236]*work.L[396]-work.L[398]*work.d[395]*work.L[398]-work.L[399]*work.d[396]*work.L[399]-work.L[400]*work.d[397]*work.L[400];
  residual += temp*temp;

  temp = work.KKT[1009]-1*work.d[406]*1-work.L[424]*work.d[402]*work.L[424]-work.L[422]*work.d[238]*work.L[422]-work.L[423]*work.d[239]*work.L[423]-work.L[425]*work.d[403]*work.L[425]-work.L[426]*work.d[404]*work.L[426]-work.L[427]*work.d[405]*work.L[427];
  residual += temp*temp;

  temp = work.KKT[1045]-1*work.d[414]*1-work.L[452]*work.d[410]*work.L[452]-work.L[450]*work.d[241]*work.L[450]-work.L[451]*work.d[242]*work.L[451]-work.L[453]*work.d[411]*work.L[453]-work.L[454]*work.d[412]*work.L[454]-work.L[455]*work.d[413]*work.L[455];
  residual += temp*temp;

  temp = work.KKT[1080]-1*work.d[422]*1-work.L[481]*work.d[418]*work.L[481]-work.L[479]*work.d[244]*work.L[479]-work.L[480]*work.d[245]*work.L[480]-work.L[482]*work.d[419]*work.L[482]-work.L[483]*work.d[420]*work.L[483]-work.L[484]*work.d[421]*work.L[484];
  residual += temp*temp;

  temp = work.KKT[1114]-1*work.d[430]*1-work.L[511]*work.d[426]*work.L[511]-work.L[509]*work.d[247]*work.L[509]-work.L[510]*work.d[248]*work.L[510]-work.L[512]*work.d[427]*work.L[512]-work.L[513]*work.d[428]*work.L[513]-work.L[514]*work.d[429]*work.L[514];
  residual += temp*temp;

  temp = work.KKT[1147]-1*work.d[438]*1-work.L[542]*work.d[434]*work.L[542]-work.L[540]*work.d[250]*work.L[540]-work.L[541]*work.d[251]*work.L[541]-work.L[543]*work.d[435]*work.L[543]-work.L[544]*work.d[436]*work.L[544]-work.L[545]*work.d[437]*work.L[545];
  residual += temp*temp;

  temp = work.KKT[1179]-1*work.d[446]*1-work.L[574]*work.d[442]*work.L[574]-work.L[572]*work.d[253]*work.L[572]-work.L[573]*work.d[254]*work.L[573]-work.L[575]*work.d[443]*work.L[575]-work.L[576]*work.d[444]*work.L[576]-work.L[577]*work.d[445]*work.L[577];
  residual += temp*temp;

  temp = work.KKT[1210]-1*work.d[454]*1-work.L[607]*work.d[450]*work.L[607]-work.L[605]*work.d[256]*work.L[605]-work.L[606]*work.d[257]*work.L[606]-work.L[608]*work.d[451]*work.L[608]-work.L[609]*work.d[452]*work.L[609]-work.L[610]*work.d[453]*work.L[610];
  residual += temp*temp;

  temp = work.KKT[1240]-1*work.d[462]*1-work.L[641]*work.d[458]*work.L[641]-work.L[639]*work.d[259]*work.L[639]-work.L[640]*work.d[260]*work.L[640]-work.L[642]*work.d[459]*work.L[642]-work.L[643]*work.d[460]*work.L[643]-work.L[644]*work.d[461]*work.L[644];
  residual += temp*temp;

  temp = work.KKT[1269]-1*work.d[470]*1-work.L[676]*work.d[466]*work.L[676]-work.L[674]*work.d[262]*work.L[674]-work.L[675]*work.d[263]*work.L[675]-work.L[677]*work.d[467]*work.L[677]-work.L[678]*work.d[468]*work.L[678]-work.L[679]*work.d[469]*work.L[679];
  residual += temp*temp;

  temp = work.KKT[1297]-1*work.d[478]*1-work.L[712]*work.d[474]*work.L[712]-work.L[710]*work.d[265]*work.L[710]-work.L[711]*work.d[266]*work.L[711]-work.L[713]*work.d[475]*work.L[713]-work.L[714]*work.d[476]*work.L[714]-work.L[715]*work.d[477]*work.L[715];
  residual += temp*temp;

  temp = work.KKT[1324]-1*work.d[486]*1-work.L[749]*work.d[482]*work.L[749]-work.L[747]*work.d[268]*work.L[747]-work.L[748]*work.d[269]*work.L[748]-work.L[750]*work.d[483]*work.L[750]-work.L[751]*work.d[484]*work.L[751]-work.L[752]*work.d[485]*work.L[752];
  residual += temp*temp;

  temp = work.KKT[1350]-1*work.d[494]*1-work.L[787]*work.d[490]*work.L[787]-work.L[785]*work.d[271]*work.L[785]-work.L[786]*work.d[272]*work.L[786]-work.L[788]*work.d[491]*work.L[788]-work.L[789]*work.d[492]*work.L[789]-work.L[790]*work.d[493]*work.L[790];
  residual += temp*temp;

  temp = work.KKT[1375]-1*work.d[502]*1-work.L[826]*work.d[498]*work.L[826]-work.L[824]*work.d[274]*work.L[824]-work.L[825]*work.d[275]*work.L[825]-work.L[827]*work.d[499]*work.L[827]-work.L[828]*work.d[500]*work.L[828]-work.L[829]*work.d[501]*work.L[829];
  residual += temp*temp;

  temp = work.KKT[1399]-1*work.d[510]*1-work.L[866]*work.d[506]*work.L[866]-work.L[864]*work.d[277]*work.L[864]-work.L[865]*work.d[278]*work.L[865]-work.L[867]*work.d[507]*work.L[867]-work.L[868]*work.d[508]*work.L[868]-work.L[869]*work.d[509]*work.L[869];
  residual += temp*temp;

  temp = work.KKT[1422]-1*work.d[518]*1-work.L[907]*work.d[514]*work.L[907]-work.L[905]*work.d[280]*work.L[905]-work.L[906]*work.d[281]*work.L[906]-work.L[908]*work.d[515]*work.L[908]-work.L[909]*work.d[516]*work.L[909]-work.L[910]*work.d[517]*work.L[910];
  residual += temp*temp;

  temp = work.KKT[1444]-1*work.d[526]*1-work.L[949]*work.d[522]*work.L[949]-work.L[947]*work.d[283]*work.L[947]-work.L[948]*work.d[284]*work.L[948]-work.L[950]*work.d[523]*work.L[950]-work.L[951]*work.d[524]*work.L[951]-work.L[952]*work.d[525]*work.L[952];
  residual += temp*temp;

  temp = work.KKT[1465]-1*work.d[534]*1-work.L[992]*work.d[530]*work.L[992]-work.L[990]*work.d[286]*work.L[990]-work.L[991]*work.d[287]*work.L[991]-work.L[993]*work.d[531]*work.L[993]-work.L[994]*work.d[532]*work.L[994]-work.L[995]*work.d[533]*work.L[995];
  residual += temp*temp;

  temp = work.KKT[1485]-1*work.d[542]*1-work.L[1036]*work.d[538]*work.L[1036]-work.L[1034]*work.d[289]*work.L[1034]-work.L[1035]*work.d[290]*work.L[1035]-work.L[1037]*work.d[539]*work.L[1037]-work.L[1038]*work.d[540]*work.L[1038]-work.L[1039]*work.d[541]*work.L[1039];
  residual += temp*temp;

  temp = work.KKT[1504]-1*work.d[550]*1-work.L[1081]*work.d[546]*work.L[1081]-work.L[1079]*work.d[292]*work.L[1079]-work.L[1080]*work.d[293]*work.L[1080]-work.L[1082]*work.d[547]*work.L[1082]-work.L[1083]*work.d[548]*work.L[1083]-work.L[1084]*work.d[549]*work.L[1084];
  residual += temp*temp;

  temp = work.KKT[1522]-1*work.d[558]*1-work.L[1127]*work.d[554]*work.L[1127]-work.L[1125]*work.d[295]*work.L[1125]-work.L[1126]*work.d[296]*work.L[1126]-work.L[1128]*work.d[555]*work.L[1128]-work.L[1129]*work.d[556]*work.L[1129]-work.L[1130]*work.d[557]*work.L[1130];
  residual += temp*temp;

  temp = work.KKT[1543]-1*work.d[568]*1-work.L[1204]*work.d[563]*work.L[1204]-work.L[1202]*work.d[298]*work.L[1202]-work.L[1203]*work.d[299]*work.L[1203]-work.L[1205]*work.d[564]*work.L[1205]-work.L[1206]*work.d[565]*work.L[1206]-work.L[1207]*work.d[566]*work.L[1207]-work.L[1208]*work.d[567]*work.L[1208];
  residual += temp*temp;

  temp = work.KKT[642]-1*work.d[335]*1-work.L[221]*work.d[330]*work.L[221]-work.L[222]*work.d[331]*work.L[222]-work.L[223]*work.d[332]*work.L[223]-work.L[224]*work.d[333]*work.L[224]-work.L[225]*work.d[334]*work.L[225];
  residual += temp*temp;

  temp = work.KKT[687]-1*work.d[343]*1-work.L[240]*work.d[338]*work.L[240]-work.L[241]*work.d[339]*work.L[241]-work.L[242]*work.d[340]*work.L[242]-work.L[243]*work.d[341]*work.L[243]-work.L[244]*work.d[342]*work.L[244];
  residual += temp*temp;

  temp = work.KKT[731]-1*work.d[351]*1-work.L[260]*work.d[346]*work.L[260]-work.L[261]*work.d[347]*work.L[261]-work.L[262]*work.d[348]*work.L[262]-work.L[263]*work.d[349]*work.L[263]-work.L[264]*work.d[350]*work.L[264];
  residual += temp*temp;

  temp = work.KKT[774]-1*work.d[359]*1-work.L[281]*work.d[354]*work.L[281]-work.L[282]*work.d[355]*work.L[282]-work.L[283]*work.d[356]*work.L[283]-work.L[284]*work.d[357]*work.L[284]-work.L[285]*work.d[358]*work.L[285];
  residual += temp*temp;

  temp = work.KKT[816]-1*work.d[367]*1-work.L[303]*work.d[362]*work.L[303]-work.L[304]*work.d[363]*work.L[304]-work.L[305]*work.d[364]*work.L[305]-work.L[306]*work.d[365]*work.L[306]-work.L[307]*work.d[366]*work.L[307];
  residual += temp*temp;

  temp = work.KKT[857]-1*work.d[375]*1-work.L[326]*work.d[370]*work.L[326]-work.L[327]*work.d[371]*work.L[327]-work.L[328]*work.d[372]*work.L[328]-work.L[329]*work.d[373]*work.L[329]-work.L[330]*work.d[374]*work.L[330];
  residual += temp*temp;

  temp = work.KKT[897]-1*work.d[383]*1-work.L[350]*work.d[378]*work.L[350]-work.L[351]*work.d[379]*work.L[351]-work.L[352]*work.d[380]*work.L[352]-work.L[353]*work.d[381]*work.L[353]-work.L[354]*work.d[382]*work.L[354];
  residual += temp*temp;

  temp = work.KKT[936]-1*work.d[391]*1-work.L[375]*work.d[386]*work.L[375]-work.L[376]*work.d[387]*work.L[376]-work.L[377]*work.d[388]*work.L[377]-work.L[378]*work.d[389]*work.L[378]-work.L[379]*work.d[390]*work.L[379];
  residual += temp*temp;

  temp = work.KKT[974]-1*work.d[399]*1-work.L[401]*work.d[394]*work.L[401]-work.L[402]*work.d[395]*work.L[402]-work.L[403]*work.d[396]*work.L[403]-work.L[404]*work.d[397]*work.L[404]-work.L[405]*work.d[398]*work.L[405];
  residual += temp*temp;

  temp = work.KKT[1011]-1*work.d[407]*1-work.L[428]*work.d[402]*work.L[428]-work.L[429]*work.d[403]*work.L[429]-work.L[430]*work.d[404]*work.L[430]-work.L[431]*work.d[405]*work.L[431]-work.L[432]*work.d[406]*work.L[432];
  residual += temp*temp;

  temp = work.KKT[1047]-1*work.d[415]*1-work.L[456]*work.d[410]*work.L[456]-work.L[457]*work.d[411]*work.L[457]-work.L[458]*work.d[412]*work.L[458]-work.L[459]*work.d[413]*work.L[459]-work.L[460]*work.d[414]*work.L[460];
  residual += temp*temp;

  temp = work.KKT[1082]-1*work.d[423]*1-work.L[485]*work.d[418]*work.L[485]-work.L[486]*work.d[419]*work.L[486]-work.L[487]*work.d[420]*work.L[487]-work.L[488]*work.d[421]*work.L[488]-work.L[489]*work.d[422]*work.L[489];
  residual += temp*temp;

  temp = work.KKT[1116]-1*work.d[431]*1-work.L[515]*work.d[426]*work.L[515]-work.L[516]*work.d[427]*work.L[516]-work.L[517]*work.d[428]*work.L[517]-work.L[518]*work.d[429]*work.L[518]-work.L[519]*work.d[430]*work.L[519];
  residual += temp*temp;

  temp = work.KKT[1149]-1*work.d[439]*1-work.L[546]*work.d[434]*work.L[546]-work.L[547]*work.d[435]*work.L[547]-work.L[548]*work.d[436]*work.L[548]-work.L[549]*work.d[437]*work.L[549]-work.L[550]*work.d[438]*work.L[550];
  residual += temp*temp;

  temp = work.KKT[1181]-1*work.d[447]*1-work.L[578]*work.d[442]*work.L[578]-work.L[579]*work.d[443]*work.L[579]-work.L[580]*work.d[444]*work.L[580]-work.L[581]*work.d[445]*work.L[581]-work.L[582]*work.d[446]*work.L[582];
  residual += temp*temp;

  temp = work.KKT[1212]-1*work.d[455]*1-work.L[611]*work.d[450]*work.L[611]-work.L[612]*work.d[451]*work.L[612]-work.L[613]*work.d[452]*work.L[613]-work.L[614]*work.d[453]*work.L[614]-work.L[615]*work.d[454]*work.L[615];
  residual += temp*temp;

  temp = work.KKT[1242]-1*work.d[463]*1-work.L[645]*work.d[458]*work.L[645]-work.L[646]*work.d[459]*work.L[646]-work.L[647]*work.d[460]*work.L[647]-work.L[648]*work.d[461]*work.L[648]-work.L[649]*work.d[462]*work.L[649];
  residual += temp*temp;

  temp = work.KKT[1271]-1*work.d[471]*1-work.L[680]*work.d[466]*work.L[680]-work.L[681]*work.d[467]*work.L[681]-work.L[682]*work.d[468]*work.L[682]-work.L[683]*work.d[469]*work.L[683]-work.L[684]*work.d[470]*work.L[684];
  residual += temp*temp;

  temp = work.KKT[1299]-1*work.d[479]*1-work.L[716]*work.d[474]*work.L[716]-work.L[717]*work.d[475]*work.L[717]-work.L[718]*work.d[476]*work.L[718]-work.L[719]*work.d[477]*work.L[719]-work.L[720]*work.d[478]*work.L[720];
  residual += temp*temp;

  temp = work.KKT[1326]-1*work.d[487]*1-work.L[753]*work.d[482]*work.L[753]-work.L[754]*work.d[483]*work.L[754]-work.L[755]*work.d[484]*work.L[755]-work.L[756]*work.d[485]*work.L[756]-work.L[757]*work.d[486]*work.L[757];
  residual += temp*temp;

  temp = work.KKT[1352]-1*work.d[495]*1-work.L[791]*work.d[490]*work.L[791]-work.L[792]*work.d[491]*work.L[792]-work.L[793]*work.d[492]*work.L[793]-work.L[794]*work.d[493]*work.L[794]-work.L[795]*work.d[494]*work.L[795];
  residual += temp*temp;

  temp = work.KKT[1377]-1*work.d[503]*1-work.L[830]*work.d[498]*work.L[830]-work.L[831]*work.d[499]*work.L[831]-work.L[832]*work.d[500]*work.L[832]-work.L[833]*work.d[501]*work.L[833]-work.L[834]*work.d[502]*work.L[834];
  residual += temp*temp;

  temp = work.KKT[1401]-1*work.d[511]*1-work.L[870]*work.d[506]*work.L[870]-work.L[871]*work.d[507]*work.L[871]-work.L[872]*work.d[508]*work.L[872]-work.L[873]*work.d[509]*work.L[873]-work.L[874]*work.d[510]*work.L[874];
  residual += temp*temp;

  temp = work.KKT[1424]-1*work.d[519]*1-work.L[911]*work.d[514]*work.L[911]-work.L[912]*work.d[515]*work.L[912]-work.L[913]*work.d[516]*work.L[913]-work.L[914]*work.d[517]*work.L[914]-work.L[915]*work.d[518]*work.L[915];
  residual += temp*temp;

  temp = work.KKT[1446]-1*work.d[527]*1-work.L[953]*work.d[522]*work.L[953]-work.L[954]*work.d[523]*work.L[954]-work.L[955]*work.d[524]*work.L[955]-work.L[956]*work.d[525]*work.L[956]-work.L[957]*work.d[526]*work.L[957];
  residual += temp*temp;

  temp = work.KKT[1467]-1*work.d[535]*1-work.L[996]*work.d[530]*work.L[996]-work.L[997]*work.d[531]*work.L[997]-work.L[998]*work.d[532]*work.L[998]-work.L[999]*work.d[533]*work.L[999]-work.L[1000]*work.d[534]*work.L[1000];
  residual += temp*temp;

  temp = work.KKT[1487]-1*work.d[543]*1-work.L[1040]*work.d[538]*work.L[1040]-work.L[1041]*work.d[539]*work.L[1041]-work.L[1042]*work.d[540]*work.L[1042]-work.L[1043]*work.d[541]*work.L[1043]-work.L[1044]*work.d[542]*work.L[1044];
  residual += temp*temp;

  temp = work.KKT[1506]-1*work.d[551]*1-work.L[1085]*work.d[546]*work.L[1085]-work.L[1086]*work.d[547]*work.L[1086]-work.L[1087]*work.d[548]*work.L[1087]-work.L[1088]*work.d[549]*work.L[1088]-work.L[1089]*work.d[550]*work.L[1089];
  residual += temp*temp;

  temp = work.KKT[1524]-1*work.d[559]*1-work.L[1131]*work.d[554]*work.L[1131]-work.L[1132]*work.d[555]*work.L[1132]-work.L[1133]*work.d[556]*work.L[1133]-work.L[1134]*work.d[557]*work.L[1134]-work.L[1135]*work.d[558]*work.L[1135];
  residual += temp*temp;

  temp = work.KKT[1544]-1*work.d[569]*1-work.L[1209]*work.d[563]*work.L[1209]-work.L[1210]*work.d[564]*work.L[1210]-work.L[1211]*work.d[565]*work.L[1211]-work.L[1212]*work.d[566]*work.L[1212]-work.L[1213]*work.d[567]*work.L[1213]-work.L[1214]*work.d[568]*work.L[1214];
  residual += temp*temp;

  temp = work.KKT[0]-1*work.d[0]*1;
  residual += temp*temp;

  temp = work.KKT[2]-1*work.d[1]*1;
  residual += temp*temp;

  temp = work.KKT[4]-1*work.d[2]*1;
  residual += temp*temp;

  temp = work.KKT[6]-1*work.d[3]*1;
  residual += temp*temp;

  temp = work.KKT[8]-1*work.d[4]*1;
  residual += temp*temp;

  temp = work.KKT[10]-1*work.d[5]*1;
  residual += temp*temp;

  temp = work.KKT[12]-1*work.d[6]*1;
  residual += temp*temp;

  temp = work.KKT[14]-1*work.d[7]*1;
  residual += temp*temp;

  temp = work.KKT[16]-1*work.d[8]*1;
  residual += temp*temp;

  temp = work.KKT[18]-1*work.d[9]*1;
  residual += temp*temp;

  temp = work.KKT[20]-1*work.d[10]*1;
  residual += temp*temp;

  temp = work.KKT[22]-1*work.d[11]*1;
  residual += temp*temp;

  temp = work.KKT[24]-1*work.d[12]*1;
  residual += temp*temp;

  temp = work.KKT[26]-1*work.d[13]*1;
  residual += temp*temp;

  temp = work.KKT[28]-1*work.d[14]*1;
  residual += temp*temp;

  temp = work.KKT[30]-1*work.d[15]*1;
  residual += temp*temp;

  temp = work.KKT[32]-1*work.d[16]*1;
  residual += temp*temp;

  temp = work.KKT[34]-1*work.d[17]*1;
  residual += temp*temp;

  temp = work.KKT[36]-1*work.d[18]*1;
  residual += temp*temp;

  temp = work.KKT[38]-1*work.d[19]*1;
  residual += temp*temp;

  temp = work.KKT[40]-1*work.d[20]*1;
  residual += temp*temp;

  temp = work.KKT[42]-1*work.d[21]*1;
  residual += temp*temp;

  temp = work.KKT[44]-1*work.d[22]*1;
  residual += temp*temp;

  temp = work.KKT[46]-1*work.d[23]*1;
  residual += temp*temp;

  temp = work.KKT[48]-1*work.d[24]*1;
  residual += temp*temp;

  temp = work.KKT[50]-1*work.d[25]*1;
  residual += temp*temp;

  temp = work.KKT[52]-1*work.d[26]*1;
  residual += temp*temp;

  temp = work.KKT[54]-1*work.d[27]*1;
  residual += temp*temp;

  temp = work.KKT[56]-1*work.d[28]*1;
  residual += temp*temp;

  temp = work.KKT[58]-1*work.d[29]*1;
  residual += temp*temp;

  temp = work.KKT[60]-1*work.d[30]*1;
  residual += temp*temp;

  temp = work.KKT[62]-1*work.d[31]*1;
  residual += temp*temp;

  temp = work.KKT[64]-1*work.d[32]*1;
  residual += temp*temp;

  temp = work.KKT[66]-1*work.d[33]*1;
  residual += temp*temp;

  temp = work.KKT[68]-1*work.d[34]*1;
  residual += temp*temp;

  temp = work.KKT[70]-1*work.d[35]*1;
  residual += temp*temp;

  temp = work.KKT[72]-1*work.d[36]*1;
  residual += temp*temp;

  temp = work.KKT[74]-1*work.d[37]*1;
  residual += temp*temp;

  temp = work.KKT[76]-1*work.d[38]*1;
  residual += temp*temp;

  temp = work.KKT[78]-1*work.d[39]*1;
  residual += temp*temp;

  temp = work.KKT[80]-1*work.d[40]*1;
  residual += temp*temp;

  temp = work.KKT[82]-1*work.d[41]*1;
  residual += temp*temp;

  temp = work.KKT[84]-1*work.d[42]*1;
  residual += temp*temp;

  temp = work.KKT[86]-1*work.d[43]*1;
  residual += temp*temp;

  temp = work.KKT[88]-1*work.d[44]*1;
  residual += temp*temp;

  temp = work.KKT[90]-1*work.d[45]*1;
  residual += temp*temp;

  temp = work.KKT[92]-1*work.d[46]*1;
  residual += temp*temp;

  temp = work.KKT[94]-1*work.d[47]*1;
  residual += temp*temp;

  temp = work.KKT[96]-1*work.d[48]*1;
  residual += temp*temp;

  temp = work.KKT[98]-1*work.d[49]*1;
  residual += temp*temp;

  temp = work.KKT[100]-1*work.d[50]*1;
  residual += temp*temp;

  temp = work.KKT[102]-1*work.d[51]*1;
  residual += temp*temp;

  temp = work.KKT[104]-1*work.d[52]*1;
  residual += temp*temp;

  temp = work.KKT[106]-1*work.d[53]*1;
  residual += temp*temp;

  temp = work.KKT[108]-1*work.d[54]*1;
  residual += temp*temp;

  temp = work.KKT[110]-1*work.d[55]*1;
  residual += temp*temp;

  temp = work.KKT[112]-1*work.d[56]*1;
  residual += temp*temp;

  temp = work.KKT[114]-1*work.d[57]*1;
  residual += temp*temp;

  temp = work.KKT[116]-1*work.d[58]*1;
  residual += temp*temp;

  temp = work.KKT[118]-1*work.d[59]*1;
  residual += temp*temp;

  temp = work.KKT[120]-1*work.d[60]*1;
  residual += temp*temp;

  temp = work.KKT[122]-1*work.d[61]*1;
  residual += temp*temp;

  temp = work.KKT[124]-1*work.d[62]*1;
  residual += temp*temp;

  temp = work.KKT[126]-1*work.d[63]*1;
  residual += temp*temp;

  temp = work.KKT[128]-1*work.d[64]*1;
  residual += temp*temp;

  temp = work.KKT[130]-1*work.d[65]*1;
  residual += temp*temp;

  temp = work.KKT[132]-1*work.d[66]*1;
  residual += temp*temp;

  temp = work.KKT[134]-1*work.d[67]*1;
  residual += temp*temp;

  temp = work.KKT[136]-1*work.d[68]*1;
  residual += temp*temp;

  temp = work.KKT[138]-1*work.d[69]*1;
  residual += temp*temp;

  temp = work.KKT[140]-1*work.d[70]*1;
  residual += temp*temp;

  temp = work.KKT[142]-1*work.d[71]*1;
  residual += temp*temp;

  temp = work.KKT[144]-1*work.d[72]*1;
  residual += temp*temp;

  temp = work.KKT[146]-1*work.d[73]*1;
  residual += temp*temp;

  temp = work.KKT[148]-1*work.d[74]*1;
  residual += temp*temp;

  temp = work.KKT[150]-1*work.d[75]*1;
  residual += temp*temp;

  temp = work.KKT[152]-1*work.d[76]*1;
  residual += temp*temp;

  temp = work.KKT[154]-1*work.d[77]*1;
  residual += temp*temp;

  temp = work.KKT[156]-1*work.d[78]*1;
  residual += temp*temp;

  temp = work.KKT[158]-1*work.d[79]*1;
  residual += temp*temp;

  temp = work.KKT[160]-1*work.d[80]*1;
  residual += temp*temp;

  temp = work.KKT[162]-1*work.d[81]*1;
  residual += temp*temp;

  temp = work.KKT[164]-1*work.d[82]*1;
  residual += temp*temp;

  temp = work.KKT[166]-1*work.d[83]*1;
  residual += temp*temp;

  temp = work.KKT[168]-1*work.d[84]*1;
  residual += temp*temp;

  temp = work.KKT[170]-1*work.d[85]*1;
  residual += temp*temp;

  temp = work.KKT[172]-1*work.d[86]*1;
  residual += temp*temp;

  temp = work.KKT[174]-1*work.d[87]*1;
  residual += temp*temp;

  temp = work.KKT[176]-1*work.d[88]*1;
  residual += temp*temp;

  temp = work.KKT[178]-1*work.d[89]*1;
  residual += temp*temp;

  temp = work.KKT[180]-1*work.d[90]*1;
  residual += temp*temp;

  temp = work.KKT[182]-1*work.d[91]*1;
  residual += temp*temp;

  temp = work.KKT[184]-1*work.d[92]*1;
  residual += temp*temp;

  temp = work.KKT[186]-1*work.d[93]*1;
  residual += temp*temp;

  temp = work.KKT[188]-1*work.d[94]*1;
  residual += temp*temp;

  temp = work.KKT[190]-1*work.d[95]*1;
  residual += temp*temp;

  temp = work.KKT[192]-1*work.d[96]*1;
  residual += temp*temp;

  temp = work.KKT[194]-1*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[196]-1*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[198]-1*work.d[99]*1;
  residual += temp*temp;

  temp = work.KKT[200]-1*work.d[100]*1;
  residual += temp*temp;

  temp = work.KKT[202]-1*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[204]-1*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[206]-1*work.d[103]*1;
  residual += temp*temp;

  temp = work.KKT[208]-1*work.d[104]*1;
  residual += temp*temp;

  temp = work.KKT[210]-1*work.d[105]*1;
  residual += temp*temp;

  temp = work.KKT[212]-1*work.d[106]*1;
  residual += temp*temp;

  temp = work.KKT[214]-1*work.d[107]*1;
  residual += temp*temp;

  temp = work.KKT[216]-1*work.d[108]*1;
  residual += temp*temp;

  temp = work.KKT[218]-1*work.d[109]*1;
  residual += temp*temp;

  temp = work.KKT[220]-1*work.d[110]*1;
  residual += temp*temp;

  temp = work.KKT[222]-1*work.d[111]*1;
  residual += temp*temp;

  temp = work.KKT[224]-1*work.d[112]*1;
  residual += temp*temp;

  temp = work.KKT[226]-1*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[228]-1*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[230]-1*work.d[115]*1;
  residual += temp*temp;

  temp = work.KKT[232]-1*work.d[116]*1;
  residual += temp*temp;

  temp = work.KKT[234]-1*work.d[117]*1;
  residual += temp*temp;

  temp = work.KKT[236]-1*work.d[118]*1;
  residual += temp*temp;

  temp = work.KKT[238]-1*work.d[119]*1;
  residual += temp*temp;

  temp = work.KKT[240]-1*work.d[120]*1;
  residual += temp*temp;

  temp = work.KKT[242]-1*work.d[121]*1;
  residual += temp*temp;

  temp = work.KKT[244]-1*work.d[122]*1;
  residual += temp*temp;

  temp = work.KKT[246]-1*work.d[123]*1;
  residual += temp*temp;

  temp = work.KKT[248]-1*work.d[124]*1;
  residual += temp*temp;

  temp = work.KKT[250]-1*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[252]-1*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[254]-1*work.d[127]*1;
  residual += temp*temp;

  temp = work.KKT[256]-1*work.d[128]*1;
  residual += temp*temp;

  temp = work.KKT[258]-1*work.d[129]*1;
  residual += temp*temp;

  temp = work.KKT[260]-1*work.d[130]*1;
  residual += temp*temp;

  temp = work.KKT[262]-1*work.d[131]*1;
  residual += temp*temp;

  temp = work.KKT[264]-1*work.d[132]*1;
  residual += temp*temp;

  temp = work.KKT[266]-1*work.d[133]*1;
  residual += temp*temp;

  temp = work.KKT[268]-1*work.d[134]*1;
  residual += temp*temp;

  temp = work.KKT[270]-1*work.d[135]*1;
  residual += temp*temp;

  temp = work.KKT[272]-1*work.d[136]*1;
  residual += temp*temp;

  temp = work.KKT[274]-1*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[276]-1*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[278]-1*work.d[139]*1;
  residual += temp*temp;

  temp = work.KKT[280]-1*work.d[140]*1;
  residual += temp*temp;

  temp = work.KKT[282]-1*work.d[141]*1;
  residual += temp*temp;

  temp = work.KKT[284]-1*work.d[142]*1;
  residual += temp*temp;

  temp = work.KKT[286]-1*work.d[143]*1;
  residual += temp*temp;

  temp = work.KKT[288]-1*work.d[144]*1;
  residual += temp*temp;

  temp = work.KKT[290]-1*work.d[145]*1;
  residual += temp*temp;

  temp = work.KKT[292]-1*work.d[146]*1;
  residual += temp*temp;

  temp = work.KKT[294]-1*work.d[147]*1;
  residual += temp*temp;

  temp = work.KKT[296]-1*work.d[148]*1;
  residual += temp*temp;

  temp = work.KKT[298]-1*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[1]-work.L[210]*work.d[0]*1;
  residual += temp*temp;

  temp = work.KKT[3]-work.L[229]*work.d[1]*1;
  residual += temp*temp;

  temp = work.KKT[5]-work.L[249]*work.d[2]*1;
  residual += temp*temp;

  temp = work.KKT[7]-work.L[270]*work.d[3]*1;
  residual += temp*temp;

  temp = work.KKT[9]-work.L[292]*work.d[4]*1;
  residual += temp*temp;

  temp = work.KKT[11]-work.L[315]*work.d[5]*1;
  residual += temp*temp;

  temp = work.KKT[13]-work.L[339]*work.d[6]*1;
  residual += temp*temp;

  temp = work.KKT[15]-work.L[364]*work.d[7]*1;
  residual += temp*temp;

  temp = work.KKT[17]-work.L[390]*work.d[8]*1;
  residual += temp*temp;

  temp = work.KKT[19]-work.L[417]*work.d[9]*1;
  residual += temp*temp;

  temp = work.KKT[21]-work.L[445]*work.d[10]*1;
  residual += temp*temp;

  temp = work.KKT[23]-work.L[474]*work.d[11]*1;
  residual += temp*temp;

  temp = work.KKT[25]-work.L[504]*work.d[12]*1;
  residual += temp*temp;

  temp = work.KKT[27]-work.L[535]*work.d[13]*1;
  residual += temp*temp;

  temp = work.KKT[29]-work.L[567]*work.d[14]*1;
  residual += temp*temp;

  temp = work.KKT[31]-work.L[600]*work.d[15]*1;
  residual += temp*temp;

  temp = work.KKT[33]-work.L[634]*work.d[16]*1;
  residual += temp*temp;

  temp = work.KKT[35]-work.L[669]*work.d[17]*1;
  residual += temp*temp;

  temp = work.KKT[37]-work.L[705]*work.d[18]*1;
  residual += temp*temp;

  temp = work.KKT[39]-work.L[742]*work.d[19]*1;
  residual += temp*temp;

  temp = work.KKT[41]-work.L[780]*work.d[20]*1;
  residual += temp*temp;

  temp = work.KKT[43]-work.L[819]*work.d[21]*1;
  residual += temp*temp;

  temp = work.KKT[45]-work.L[859]*work.d[22]*1;
  residual += temp*temp;

  temp = work.KKT[47]-work.L[900]*work.d[23]*1;
  residual += temp*temp;

  temp = work.KKT[49]-work.L[942]*work.d[24]*1;
  residual += temp*temp;

  temp = work.KKT[51]-work.L[985]*work.d[25]*1;
  residual += temp*temp;

  temp = work.KKT[53]-work.L[1029]*work.d[26]*1;
  residual += temp*temp;

  temp = work.KKT[55]-work.L[1074]*work.d[27]*1;
  residual += temp*temp;

  temp = work.KKT[57]-work.L[1120]*work.d[28]*1;
  residual += temp*temp;

  temp = work.KKT[59]-work.L[1196]*work.d[29]*1;
  residual += temp*temp;

  temp = work.KKT[61]-work.L[0]*work.d[30]*1;
  residual += temp*temp;

  temp = work.KKT[63]-work.L[2]*work.d[31]*1;
  residual += temp*temp;

  temp = work.KKT[65]-work.L[4]*work.d[32]*1;
  residual += temp*temp;

  temp = work.KKT[67]-work.L[6]*work.d[33]*1;
  residual += temp*temp;

  temp = work.KKT[69]-work.L[8]*work.d[34]*1;
  residual += temp*temp;

  temp = work.KKT[71]-work.L[10]*work.d[35]*1;
  residual += temp*temp;

  temp = work.KKT[73]-work.L[12]*work.d[36]*1;
  residual += temp*temp;

  temp = work.KKT[75]-work.L[14]*work.d[37]*1;
  residual += temp*temp;

  temp = work.KKT[77]-work.L[16]*work.d[38]*1;
  residual += temp*temp;

  temp = work.KKT[79]-work.L[18]*work.d[39]*1;
  residual += temp*temp;

  temp = work.KKT[81]-work.L[20]*work.d[40]*1;
  residual += temp*temp;

  temp = work.KKT[83]-work.L[22]*work.d[41]*1;
  residual += temp*temp;

  temp = work.KKT[85]-work.L[24]*work.d[42]*1;
  residual += temp*temp;

  temp = work.KKT[87]-work.L[26]*work.d[43]*1;
  residual += temp*temp;

  temp = work.KKT[89]-work.L[28]*work.d[44]*1;
  residual += temp*temp;

  temp = work.KKT[91]-work.L[30]*work.d[45]*1;
  residual += temp*temp;

  temp = work.KKT[93]-work.L[32]*work.d[46]*1;
  residual += temp*temp;

  temp = work.KKT[95]-work.L[34]*work.d[47]*1;
  residual += temp*temp;

  temp = work.KKT[97]-work.L[36]*work.d[48]*1;
  residual += temp*temp;

  temp = work.KKT[99]-work.L[38]*work.d[49]*1;
  residual += temp*temp;

  temp = work.KKT[101]-work.L[40]*work.d[50]*1;
  residual += temp*temp;

  temp = work.KKT[103]-work.L[42]*work.d[51]*1;
  residual += temp*temp;

  temp = work.KKT[105]-work.L[44]*work.d[52]*1;
  residual += temp*temp;

  temp = work.KKT[107]-work.L[46]*work.d[53]*1;
  residual += temp*temp;

  temp = work.KKT[109]-work.L[48]*work.d[54]*1;
  residual += temp*temp;

  temp = work.KKT[111]-work.L[50]*work.d[55]*1;
  residual += temp*temp;

  temp = work.KKT[113]-work.L[52]*work.d[56]*1;
  residual += temp*temp;

  temp = work.KKT[115]-work.L[54]*work.d[57]*1;
  residual += temp*temp;

  temp = work.KKT[117]-work.L[56]*work.d[58]*1;
  residual += temp*temp;

  temp = work.KKT[119]-work.L[58]*work.d[59]*1;
  residual += temp*temp;

  temp = work.KKT[121]-work.L[60]*work.d[60]*1;
  residual += temp*temp;

  temp = work.KKT[123]-work.L[65]*work.d[61]*1;
  residual += temp*temp;

  temp = work.KKT[125]-work.L[70]*work.d[62]*1;
  residual += temp*temp;

  temp = work.KKT[127]-work.L[75]*work.d[63]*1;
  residual += temp*temp;

  temp = work.KKT[129]-work.L[80]*work.d[64]*1;
  residual += temp*temp;

  temp = work.KKT[131]-work.L[85]*work.d[65]*1;
  residual += temp*temp;

  temp = work.KKT[133]-work.L[90]*work.d[66]*1;
  residual += temp*temp;

  temp = work.KKT[135]-work.L[95]*work.d[67]*1;
  residual += temp*temp;

  temp = work.KKT[137]-work.L[100]*work.d[68]*1;
  residual += temp*temp;

  temp = work.KKT[139]-work.L[105]*work.d[69]*1;
  residual += temp*temp;

  temp = work.KKT[141]-work.L[110]*work.d[70]*1;
  residual += temp*temp;

  temp = work.KKT[143]-work.L[115]*work.d[71]*1;
  residual += temp*temp;

  temp = work.KKT[145]-work.L[120]*work.d[72]*1;
  residual += temp*temp;

  temp = work.KKT[147]-work.L[125]*work.d[73]*1;
  residual += temp*temp;

  temp = work.KKT[149]-work.L[130]*work.d[74]*1;
  residual += temp*temp;

  temp = work.KKT[151]-work.L[135]*work.d[75]*1;
  residual += temp*temp;

  temp = work.KKT[153]-work.L[140]*work.d[76]*1;
  residual += temp*temp;

  temp = work.KKT[155]-work.L[145]*work.d[77]*1;
  residual += temp*temp;

  temp = work.KKT[157]-work.L[150]*work.d[78]*1;
  residual += temp*temp;

  temp = work.KKT[159]-work.L[155]*work.d[79]*1;
  residual += temp*temp;

  temp = work.KKT[161]-work.L[160]*work.d[80]*1;
  residual += temp*temp;

  temp = work.KKT[163]-work.L[165]*work.d[81]*1;
  residual += temp*temp;

  temp = work.KKT[165]-work.L[170]*work.d[82]*1;
  residual += temp*temp;

  temp = work.KKT[167]-work.L[175]*work.d[83]*1;
  residual += temp*temp;

  temp = work.KKT[169]-work.L[180]*work.d[84]*1;
  residual += temp*temp;

  temp = work.KKT[171]-work.L[185]*work.d[85]*1;
  residual += temp*temp;

  temp = work.KKT[173]-work.L[190]*work.d[86]*1;
  residual += temp*temp;

  temp = work.KKT[175]-work.L[195]*work.d[87]*1;
  residual += temp*temp;

  temp = work.KKT[177]-work.L[200]*work.d[88]*1;
  residual += temp*temp;

  temp = work.KKT[179]-work.L[205]*work.d[89]*1;
  residual += temp*temp;

  temp = work.KKT[181]-work.L[62]*work.d[90]*1;
  residual += temp*temp;

  temp = work.KKT[183]-work.L[67]*work.d[91]*1;
  residual += temp*temp;

  temp = work.KKT[185]-work.L[72]*work.d[92]*1;
  residual += temp*temp;

  temp = work.KKT[187]-work.L[77]*work.d[93]*1;
  residual += temp*temp;

  temp = work.KKT[189]-work.L[82]*work.d[94]*1;
  residual += temp*temp;

  temp = work.KKT[191]-work.L[87]*work.d[95]*1;
  residual += temp*temp;

  temp = work.KKT[193]-work.L[92]*work.d[96]*1;
  residual += temp*temp;

  temp = work.KKT[195]-work.L[97]*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[197]-work.L[102]*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[199]-work.L[107]*work.d[99]*1;
  residual += temp*temp;

  temp = work.KKT[201]-work.L[112]*work.d[100]*1;
  residual += temp*temp;

  temp = work.KKT[203]-work.L[117]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[205]-work.L[122]*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[207]-work.L[127]*work.d[103]*1;
  residual += temp*temp;

  temp = work.KKT[209]-work.L[132]*work.d[104]*1;
  residual += temp*temp;

  temp = work.KKT[211]-work.L[137]*work.d[105]*1;
  residual += temp*temp;

  temp = work.KKT[213]-work.L[142]*work.d[106]*1;
  residual += temp*temp;

  temp = work.KKT[215]-work.L[147]*work.d[107]*1;
  residual += temp*temp;

  temp = work.KKT[217]-work.L[152]*work.d[108]*1;
  residual += temp*temp;

  temp = work.KKT[219]-work.L[157]*work.d[109]*1;
  residual += temp*temp;

  temp = work.KKT[221]-work.L[162]*work.d[110]*1;
  residual += temp*temp;

  temp = work.KKT[223]-work.L[167]*work.d[111]*1;
  residual += temp*temp;

  temp = work.KKT[225]-work.L[172]*work.d[112]*1;
  residual += temp*temp;

  temp = work.KKT[227]-work.L[177]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[229]-work.L[182]*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[231]-work.L[187]*work.d[115]*1;
  residual += temp*temp;

  temp = work.KKT[233]-work.L[192]*work.d[116]*1;
  residual += temp*temp;

  temp = work.KKT[235]-work.L[197]*work.d[117]*1;
  residual += temp*temp;

  temp = work.KKT[237]-work.L[202]*work.d[118]*1;
  residual += temp*temp;

  temp = work.KKT[239]-work.L[207]*work.d[119]*1;
  residual += temp*temp;

  temp = work.KKT[241]-work.L[213]*work.d[120]*1;
  residual += temp*temp;

  temp = work.KKT[243]-work.L[232]*work.d[121]*1;
  residual += temp*temp;

  temp = work.KKT[245]-work.L[252]*work.d[122]*1;
  residual += temp*temp;

  temp = work.KKT[247]-work.L[273]*work.d[123]*1;
  residual += temp*temp;

  temp = work.KKT[249]-work.L[295]*work.d[124]*1;
  residual += temp*temp;

  temp = work.KKT[251]-work.L[318]*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[253]-work.L[342]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[255]-work.L[367]*work.d[127]*1;
  residual += temp*temp;

  temp = work.KKT[257]-work.L[393]*work.d[128]*1;
  residual += temp*temp;

  temp = work.KKT[259]-work.L[420]*work.d[129]*1;
  residual += temp*temp;

  temp = work.KKT[261]-work.L[448]*work.d[130]*1;
  residual += temp*temp;

  temp = work.KKT[263]-work.L[477]*work.d[131]*1;
  residual += temp*temp;

  temp = work.KKT[265]-work.L[507]*work.d[132]*1;
  residual += temp*temp;

  temp = work.KKT[267]-work.L[538]*work.d[133]*1;
  residual += temp*temp;

  temp = work.KKT[269]-work.L[570]*work.d[134]*1;
  residual += temp*temp;

  temp = work.KKT[271]-work.L[603]*work.d[135]*1;
  residual += temp*temp;

  temp = work.KKT[273]-work.L[637]*work.d[136]*1;
  residual += temp*temp;

  temp = work.KKT[275]-work.L[672]*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[277]-work.L[708]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[279]-work.L[745]*work.d[139]*1;
  residual += temp*temp;

  temp = work.KKT[281]-work.L[783]*work.d[140]*1;
  residual += temp*temp;

  temp = work.KKT[283]-work.L[822]*work.d[141]*1;
  residual += temp*temp;

  temp = work.KKT[285]-work.L[862]*work.d[142]*1;
  residual += temp*temp;

  temp = work.KKT[287]-work.L[903]*work.d[143]*1;
  residual += temp*temp;

  temp = work.KKT[289]-work.L[945]*work.d[144]*1;
  residual += temp*temp;

  temp = work.KKT[291]-work.L[988]*work.d[145]*1;
  residual += temp*temp;

  temp = work.KKT[293]-work.L[1032]*work.d[146]*1;
  residual += temp*temp;

  temp = work.KKT[295]-work.L[1077]*work.d[147]*1;
  residual += temp*temp;

  temp = work.KKT[297]-work.L[1123]*work.d[148]*1;
  residual += temp*temp;

  temp = work.KKT[299]-work.L[1199]*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[630]-work.L[210]*work.d[0]*work.L[210]-1*work.d[330]*1-work.L[211]*work.d[150]*work.L[211]-work.L[212]*work.d[151]*work.L[212];
  residual += temp*temp;

  temp = work.KKT[675]-work.L[229]*work.d[1]*work.L[229]-1*work.d[338]*1-work.L[230]*work.d[152]*work.L[230]-work.L[231]*work.d[153]*work.L[231];
  residual += temp*temp;

  temp = work.KKT[719]-work.L[249]*work.d[2]*work.L[249]-1*work.d[346]*1-work.L[250]*work.d[154]*work.L[250]-work.L[251]*work.d[155]*work.L[251];
  residual += temp*temp;

  temp = work.KKT[762]-work.L[270]*work.d[3]*work.L[270]-1*work.d[354]*1-work.L[271]*work.d[156]*work.L[271]-work.L[272]*work.d[157]*work.L[272];
  residual += temp*temp;

  temp = work.KKT[804]-work.L[292]*work.d[4]*work.L[292]-1*work.d[362]*1-work.L[293]*work.d[158]*work.L[293]-work.L[294]*work.d[159]*work.L[294];
  residual += temp*temp;

  temp = work.KKT[845]-work.L[315]*work.d[5]*work.L[315]-1*work.d[370]*1-work.L[316]*work.d[160]*work.L[316]-work.L[317]*work.d[161]*work.L[317];
  residual += temp*temp;

  temp = work.KKT[885]-work.L[339]*work.d[6]*work.L[339]-1*work.d[378]*1-work.L[340]*work.d[162]*work.L[340]-work.L[341]*work.d[163]*work.L[341];
  residual += temp*temp;

  temp = work.KKT[924]-work.L[364]*work.d[7]*work.L[364]-1*work.d[386]*1-work.L[365]*work.d[164]*work.L[365]-work.L[366]*work.d[165]*work.L[366];
  residual += temp*temp;

  temp = work.KKT[962]-work.L[390]*work.d[8]*work.L[390]-1*work.d[394]*1-work.L[391]*work.d[166]*work.L[391]-work.L[392]*work.d[167]*work.L[392];
  residual += temp*temp;

  temp = work.KKT[999]-work.L[417]*work.d[9]*work.L[417]-1*work.d[402]*1-work.L[418]*work.d[168]*work.L[418]-work.L[419]*work.d[169]*work.L[419];
  residual += temp*temp;

  temp = work.KKT[1035]-work.L[445]*work.d[10]*work.L[445]-1*work.d[410]*1-work.L[446]*work.d[170]*work.L[446]-work.L[447]*work.d[171]*work.L[447];
  residual += temp*temp;

  temp = work.KKT[1070]-work.L[474]*work.d[11]*work.L[474]-1*work.d[418]*1-work.L[475]*work.d[172]*work.L[475]-work.L[476]*work.d[173]*work.L[476];
  residual += temp*temp;

  temp = work.KKT[1104]-work.L[504]*work.d[12]*work.L[504]-1*work.d[426]*1-work.L[505]*work.d[174]*work.L[505]-work.L[506]*work.d[175]*work.L[506];
  residual += temp*temp;

  temp = work.KKT[1137]-work.L[535]*work.d[13]*work.L[535]-1*work.d[434]*1-work.L[536]*work.d[176]*work.L[536]-work.L[537]*work.d[177]*work.L[537];
  residual += temp*temp;

  temp = work.KKT[1169]-work.L[567]*work.d[14]*work.L[567]-1*work.d[442]*1-work.L[568]*work.d[178]*work.L[568]-work.L[569]*work.d[179]*work.L[569];
  residual += temp*temp;

  temp = work.KKT[1200]-work.L[600]*work.d[15]*work.L[600]-1*work.d[450]*1-work.L[601]*work.d[180]*work.L[601]-work.L[602]*work.d[181]*work.L[602];
  residual += temp*temp;

  temp = work.KKT[1230]-work.L[634]*work.d[16]*work.L[634]-1*work.d[458]*1-work.L[635]*work.d[182]*work.L[635]-work.L[636]*work.d[183]*work.L[636];
  residual += temp*temp;

  temp = work.KKT[1259]-work.L[669]*work.d[17]*work.L[669]-1*work.d[466]*1-work.L[670]*work.d[184]*work.L[670]-work.L[671]*work.d[185]*work.L[671];
  residual += temp*temp;

  temp = work.KKT[1287]-work.L[705]*work.d[18]*work.L[705]-1*work.d[474]*1-work.L[706]*work.d[186]*work.L[706]-work.L[707]*work.d[187]*work.L[707];
  residual += temp*temp;

  temp = work.KKT[1314]-work.L[742]*work.d[19]*work.L[742]-1*work.d[482]*1-work.L[743]*work.d[188]*work.L[743]-work.L[744]*work.d[189]*work.L[744];
  residual += temp*temp;

  temp = work.KKT[1340]-work.L[780]*work.d[20]*work.L[780]-1*work.d[490]*1-work.L[781]*work.d[190]*work.L[781]-work.L[782]*work.d[191]*work.L[782];
  residual += temp*temp;

  temp = work.KKT[1365]-work.L[819]*work.d[21]*work.L[819]-1*work.d[498]*1-work.L[820]*work.d[192]*work.L[820]-work.L[821]*work.d[193]*work.L[821];
  residual += temp*temp;

  temp = work.KKT[1389]-work.L[859]*work.d[22]*work.L[859]-1*work.d[506]*1-work.L[860]*work.d[194]*work.L[860]-work.L[861]*work.d[195]*work.L[861];
  residual += temp*temp;

  temp = work.KKT[1412]-work.L[900]*work.d[23]*work.L[900]-1*work.d[514]*1-work.L[901]*work.d[196]*work.L[901]-work.L[902]*work.d[197]*work.L[902];
  residual += temp*temp;

  temp = work.KKT[1434]-work.L[942]*work.d[24]*work.L[942]-1*work.d[522]*1-work.L[943]*work.d[198]*work.L[943]-work.L[944]*work.d[199]*work.L[944];
  residual += temp*temp;

  temp = work.KKT[1455]-work.L[985]*work.d[25]*work.L[985]-1*work.d[530]*1-work.L[986]*work.d[200]*work.L[986]-work.L[987]*work.d[201]*work.L[987];
  residual += temp*temp;

  temp = work.KKT[1475]-work.L[1029]*work.d[26]*work.L[1029]-1*work.d[538]*1-work.L[1030]*work.d[202]*work.L[1030]-work.L[1031]*work.d[203]*work.L[1031];
  residual += temp*temp;

  temp = work.KKT[1494]-work.L[1074]*work.d[27]*work.L[1074]-1*work.d[546]*1-work.L[1075]*work.d[204]*work.L[1075]-work.L[1076]*work.d[205]*work.L[1076];
  residual += temp*temp;

  temp = work.KKT[1512]-work.L[1120]*work.d[28]*work.L[1120]-1*work.d[554]*1-work.L[1121]*work.d[206]*work.L[1121]-work.L[1122]*work.d[207]*work.L[1122];
  residual += temp*temp;

  temp = work.KKT[1531]-work.L[1196]*work.d[29]*work.L[1196]-1*work.d[563]*1-work.L[1197]*work.d[208]*work.L[1197]-work.L[1198]*work.d[209]*work.L[1198];
  residual += temp*temp;

  temp = work.KKT[302]-work.L[0]*work.d[30]*work.L[0]-1*work.d[151]*1-work.L[1]*work.d[150]*work.L[1];
  residual += temp*temp;

  temp = work.KKT[305]-work.L[2]*work.d[31]*work.L[2]-1*work.d[153]*1-work.L[3]*work.d[152]*work.L[3];
  residual += temp*temp;

  temp = work.KKT[308]-work.L[4]*work.d[32]*work.L[4]-1*work.d[155]*1-work.L[5]*work.d[154]*work.L[5];
  residual += temp*temp;

  temp = work.KKT[311]-work.L[6]*work.d[33]*work.L[6]-1*work.d[157]*1-work.L[7]*work.d[156]*work.L[7];
  residual += temp*temp;

  temp = work.KKT[314]-work.L[8]*work.d[34]*work.L[8]-1*work.d[159]*1-work.L[9]*work.d[158]*work.L[9];
  residual += temp*temp;

  temp = work.KKT[317]-work.L[10]*work.d[35]*work.L[10]-1*work.d[161]*1-work.L[11]*work.d[160]*work.L[11];
  residual += temp*temp;

  temp = work.KKT[320]-work.L[12]*work.d[36]*work.L[12]-1*work.d[163]*1-work.L[13]*work.d[162]*work.L[13];
  residual += temp*temp;

  temp = work.KKT[323]-work.L[14]*work.d[37]*work.L[14]-1*work.d[165]*1-work.L[15]*work.d[164]*work.L[15];
  residual += temp*temp;

  temp = work.KKT[326]-work.L[16]*work.d[38]*work.L[16]-1*work.d[167]*1-work.L[17]*work.d[166]*work.L[17];
  residual += temp*temp;

  temp = work.KKT[329]-work.L[18]*work.d[39]*work.L[18]-1*work.d[169]*1-work.L[19]*work.d[168]*work.L[19];
  residual += temp*temp;

  temp = work.KKT[332]-work.L[20]*work.d[40]*work.L[20]-1*work.d[171]*1-work.L[21]*work.d[170]*work.L[21];
  residual += temp*temp;

  temp = work.KKT[335]-work.L[22]*work.d[41]*work.L[22]-1*work.d[173]*1-work.L[23]*work.d[172]*work.L[23];
  residual += temp*temp;

  temp = work.KKT[338]-work.L[24]*work.d[42]*work.L[24]-1*work.d[175]*1-work.L[25]*work.d[174]*work.L[25];
  residual += temp*temp;

  temp = work.KKT[341]-work.L[26]*work.d[43]*work.L[26]-1*work.d[177]*1-work.L[27]*work.d[176]*work.L[27];
  residual += temp*temp;

  temp = work.KKT[344]-work.L[28]*work.d[44]*work.L[28]-1*work.d[179]*1-work.L[29]*work.d[178]*work.L[29];
  residual += temp*temp;

  temp = work.KKT[347]-work.L[30]*work.d[45]*work.L[30]-1*work.d[181]*1-work.L[31]*work.d[180]*work.L[31];
  residual += temp*temp;

  temp = work.KKT[350]-work.L[32]*work.d[46]*work.L[32]-1*work.d[183]*1-work.L[33]*work.d[182]*work.L[33];
  residual += temp*temp;

  temp = work.KKT[353]-work.L[34]*work.d[47]*work.L[34]-1*work.d[185]*1-work.L[35]*work.d[184]*work.L[35];
  residual += temp*temp;

  temp = work.KKT[356]-work.L[36]*work.d[48]*work.L[36]-1*work.d[187]*1-work.L[37]*work.d[186]*work.L[37];
  residual += temp*temp;

  temp = work.KKT[359]-work.L[38]*work.d[49]*work.L[38]-1*work.d[189]*1-work.L[39]*work.d[188]*work.L[39];
  residual += temp*temp;

  temp = work.KKT[362]-work.L[40]*work.d[50]*work.L[40]-1*work.d[191]*1-work.L[41]*work.d[190]*work.L[41];
  residual += temp*temp;

  temp = work.KKT[365]-work.L[42]*work.d[51]*work.L[42]-1*work.d[193]*1-work.L[43]*work.d[192]*work.L[43];
  residual += temp*temp;

  temp = work.KKT[368]-work.L[44]*work.d[52]*work.L[44]-1*work.d[195]*1-work.L[45]*work.d[194]*work.L[45];
  residual += temp*temp;

  temp = work.KKT[371]-work.L[46]*work.d[53]*work.L[46]-1*work.d[197]*1-work.L[47]*work.d[196]*work.L[47];
  residual += temp*temp;

  temp = work.KKT[374]-work.L[48]*work.d[54]*work.L[48]-1*work.d[199]*1-work.L[49]*work.d[198]*work.L[49];
  residual += temp*temp;

  temp = work.KKT[377]-work.L[50]*work.d[55]*work.L[50]-1*work.d[201]*1-work.L[51]*work.d[200]*work.L[51];
  residual += temp*temp;

  temp = work.KKT[380]-work.L[52]*work.d[56]*work.L[52]-1*work.d[203]*1-work.L[53]*work.d[202]*work.L[53];
  residual += temp*temp;

  temp = work.KKT[383]-work.L[54]*work.d[57]*work.L[54]-1*work.d[205]*1-work.L[55]*work.d[204]*work.L[55];
  residual += temp*temp;

  temp = work.KKT[386]-work.L[56]*work.d[58]*work.L[56]-1*work.d[207]*1-work.L[57]*work.d[206]*work.L[57];
  residual += temp*temp;

  temp = work.KKT[389]-work.L[58]*work.d[59]*work.L[58]-1*work.d[209]*1-work.L[59]*work.d[208]*work.L[59];
  residual += temp*temp;

  temp = work.KKT[392]-work.L[60]*work.d[60]*work.L[60]-1*work.d[211]*1-work.L[61]*work.d[210]*work.L[61];
  residual += temp*temp;

  temp = work.KKT[398]-work.L[65]*work.d[61]*work.L[65]-1*work.d[214]*1-work.L[66]*work.d[213]*work.L[66];
  residual += temp*temp;

  temp = work.KKT[404]-work.L[70]*work.d[62]*work.L[70]-1*work.d[217]*1-work.L[71]*work.d[216]*work.L[71];
  residual += temp*temp;

  temp = work.KKT[410]-work.L[75]*work.d[63]*work.L[75]-1*work.d[220]*1-work.L[76]*work.d[219]*work.L[76];
  residual += temp*temp;

  temp = work.KKT[416]-work.L[80]*work.d[64]*work.L[80]-1*work.d[223]*1-work.L[81]*work.d[222]*work.L[81];
  residual += temp*temp;

  temp = work.KKT[422]-work.L[85]*work.d[65]*work.L[85]-1*work.d[226]*1-work.L[86]*work.d[225]*work.L[86];
  residual += temp*temp;

  temp = work.KKT[428]-work.L[90]*work.d[66]*work.L[90]-1*work.d[229]*1-work.L[91]*work.d[228]*work.L[91];
  residual += temp*temp;

  temp = work.KKT[434]-work.L[95]*work.d[67]*work.L[95]-1*work.d[232]*1-work.L[96]*work.d[231]*work.L[96];
  residual += temp*temp;

  temp = work.KKT[440]-work.L[100]*work.d[68]*work.L[100]-1*work.d[235]*1-work.L[101]*work.d[234]*work.L[101];
  residual += temp*temp;

  temp = work.KKT[446]-work.L[105]*work.d[69]*work.L[105]-1*work.d[238]*1-work.L[106]*work.d[237]*work.L[106];
  residual += temp*temp;

  temp = work.KKT[452]-work.L[110]*work.d[70]*work.L[110]-1*work.d[241]*1-work.L[111]*work.d[240]*work.L[111];
  residual += temp*temp;

  temp = work.KKT[458]-work.L[115]*work.d[71]*work.L[115]-1*work.d[244]*1-work.L[116]*work.d[243]*work.L[116];
  residual += temp*temp;

  temp = work.KKT[464]-work.L[120]*work.d[72]*work.L[120]-1*work.d[247]*1-work.L[121]*work.d[246]*work.L[121];
  residual += temp*temp;

  temp = work.KKT[470]-work.L[125]*work.d[73]*work.L[125]-1*work.d[250]*1-work.L[126]*work.d[249]*work.L[126];
  residual += temp*temp;

  temp = work.KKT[476]-work.L[130]*work.d[74]*work.L[130]-1*work.d[253]*1-work.L[131]*work.d[252]*work.L[131];
  residual += temp*temp;

  temp = work.KKT[482]-work.L[135]*work.d[75]*work.L[135]-1*work.d[256]*1-work.L[136]*work.d[255]*work.L[136];
  residual += temp*temp;

  temp = work.KKT[488]-work.L[140]*work.d[76]*work.L[140]-1*work.d[259]*1-work.L[141]*work.d[258]*work.L[141];
  residual += temp*temp;

  temp = work.KKT[494]-work.L[145]*work.d[77]*work.L[145]-1*work.d[262]*1-work.L[146]*work.d[261]*work.L[146];
  residual += temp*temp;

  temp = work.KKT[500]-work.L[150]*work.d[78]*work.L[150]-1*work.d[265]*1-work.L[151]*work.d[264]*work.L[151];
  residual += temp*temp;

  temp = work.KKT[506]-work.L[155]*work.d[79]*work.L[155]-1*work.d[268]*1-work.L[156]*work.d[267]*work.L[156];
  residual += temp*temp;

  temp = work.KKT[512]-work.L[160]*work.d[80]*work.L[160]-1*work.d[271]*1-work.L[161]*work.d[270]*work.L[161];
  residual += temp*temp;

  temp = work.KKT[518]-work.L[165]*work.d[81]*work.L[165]-1*work.d[274]*1-work.L[166]*work.d[273]*work.L[166];
  residual += temp*temp;

  temp = work.KKT[524]-work.L[170]*work.d[82]*work.L[170]-1*work.d[277]*1-work.L[171]*work.d[276]*work.L[171];
  residual += temp*temp;

  temp = work.KKT[530]-work.L[175]*work.d[83]*work.L[175]-1*work.d[280]*1-work.L[176]*work.d[279]*work.L[176];
  residual += temp*temp;

  temp = work.KKT[536]-work.L[180]*work.d[84]*work.L[180]-1*work.d[283]*1-work.L[181]*work.d[282]*work.L[181];
  residual += temp*temp;

  temp = work.KKT[542]-work.L[185]*work.d[85]*work.L[185]-1*work.d[286]*1-work.L[186]*work.d[285]*work.L[186];
  residual += temp*temp;

  temp = work.KKT[548]-work.L[190]*work.d[86]*work.L[190]-1*work.d[289]*1-work.L[191]*work.d[288]*work.L[191];
  residual += temp*temp;

  temp = work.KKT[554]-work.L[195]*work.d[87]*work.L[195]-1*work.d[292]*1-work.L[196]*work.d[291]*work.L[196];
  residual += temp*temp;

  temp = work.KKT[560]-work.L[200]*work.d[88]*work.L[200]-1*work.d[295]*1-work.L[201]*work.d[294]*work.L[201];
  residual += temp*temp;

  temp = work.KKT[566]-work.L[205]*work.d[89]*work.L[205]-1*work.d[298]*1-work.L[206]*work.d[297]*work.L[206];
  residual += temp*temp;

  temp = work.KKT[394]-work.L[62]*work.d[90]*work.L[62]-1*work.d[212]*1-work.L[63]*work.d[210]*work.L[63]-work.L[64]*work.d[211]*work.L[64];
  residual += temp*temp;

  temp = work.KKT[400]-work.L[67]*work.d[91]*work.L[67]-1*work.d[215]*1-work.L[68]*work.d[213]*work.L[68]-work.L[69]*work.d[214]*work.L[69];
  residual += temp*temp;

  temp = work.KKT[406]-work.L[72]*work.d[92]*work.L[72]-1*work.d[218]*1-work.L[73]*work.d[216]*work.L[73]-work.L[74]*work.d[217]*work.L[74];
  residual += temp*temp;

  temp = work.KKT[412]-work.L[77]*work.d[93]*work.L[77]-1*work.d[221]*1-work.L[78]*work.d[219]*work.L[78]-work.L[79]*work.d[220]*work.L[79];
  residual += temp*temp;

  temp = work.KKT[418]-work.L[82]*work.d[94]*work.L[82]-1*work.d[224]*1-work.L[83]*work.d[222]*work.L[83]-work.L[84]*work.d[223]*work.L[84];
  residual += temp*temp;

  temp = work.KKT[424]-work.L[87]*work.d[95]*work.L[87]-1*work.d[227]*1-work.L[88]*work.d[225]*work.L[88]-work.L[89]*work.d[226]*work.L[89];
  residual += temp*temp;

  temp = work.KKT[430]-work.L[92]*work.d[96]*work.L[92]-1*work.d[230]*1-work.L[93]*work.d[228]*work.L[93]-work.L[94]*work.d[229]*work.L[94];
  residual += temp*temp;

  temp = work.KKT[436]-work.L[97]*work.d[97]*work.L[97]-1*work.d[233]*1-work.L[98]*work.d[231]*work.L[98]-work.L[99]*work.d[232]*work.L[99];
  residual += temp*temp;

  temp = work.KKT[442]-work.L[102]*work.d[98]*work.L[102]-1*work.d[236]*1-work.L[103]*work.d[234]*work.L[103]-work.L[104]*work.d[235]*work.L[104];
  residual += temp*temp;

  temp = work.KKT[448]-work.L[107]*work.d[99]*work.L[107]-1*work.d[239]*1-work.L[108]*work.d[237]*work.L[108]-work.L[109]*work.d[238]*work.L[109];
  residual += temp*temp;

  temp = work.KKT[454]-work.L[112]*work.d[100]*work.L[112]-1*work.d[242]*1-work.L[113]*work.d[240]*work.L[113]-work.L[114]*work.d[241]*work.L[114];
  residual += temp*temp;

  temp = work.KKT[460]-work.L[117]*work.d[101]*work.L[117]-1*work.d[245]*1-work.L[118]*work.d[243]*work.L[118]-work.L[119]*work.d[244]*work.L[119];
  residual += temp*temp;

  temp = work.KKT[466]-work.L[122]*work.d[102]*work.L[122]-1*work.d[248]*1-work.L[123]*work.d[246]*work.L[123]-work.L[124]*work.d[247]*work.L[124];
  residual += temp*temp;

  temp = work.KKT[472]-work.L[127]*work.d[103]*work.L[127]-1*work.d[251]*1-work.L[128]*work.d[249]*work.L[128]-work.L[129]*work.d[250]*work.L[129];
  residual += temp*temp;

  temp = work.KKT[478]-work.L[132]*work.d[104]*work.L[132]-1*work.d[254]*1-work.L[133]*work.d[252]*work.L[133]-work.L[134]*work.d[253]*work.L[134];
  residual += temp*temp;

  temp = work.KKT[484]-work.L[137]*work.d[105]*work.L[137]-1*work.d[257]*1-work.L[138]*work.d[255]*work.L[138]-work.L[139]*work.d[256]*work.L[139];
  residual += temp*temp;

  temp = work.KKT[490]-work.L[142]*work.d[106]*work.L[142]-1*work.d[260]*1-work.L[143]*work.d[258]*work.L[143]-work.L[144]*work.d[259]*work.L[144];
  residual += temp*temp;

  temp = work.KKT[496]-work.L[147]*work.d[107]*work.L[147]-1*work.d[263]*1-work.L[148]*work.d[261]*work.L[148]-work.L[149]*work.d[262]*work.L[149];
  residual += temp*temp;

  temp = work.KKT[502]-work.L[152]*work.d[108]*work.L[152]-1*work.d[266]*1-work.L[153]*work.d[264]*work.L[153]-work.L[154]*work.d[265]*work.L[154];
  residual += temp*temp;

  temp = work.KKT[508]-work.L[157]*work.d[109]*work.L[157]-1*work.d[269]*1-work.L[158]*work.d[267]*work.L[158]-work.L[159]*work.d[268]*work.L[159];
  residual += temp*temp;

  temp = work.KKT[514]-work.L[162]*work.d[110]*work.L[162]-1*work.d[272]*1-work.L[163]*work.d[270]*work.L[163]-work.L[164]*work.d[271]*work.L[164];
  residual += temp*temp;

  temp = work.KKT[520]-work.L[167]*work.d[111]*work.L[167]-1*work.d[275]*1-work.L[168]*work.d[273]*work.L[168]-work.L[169]*work.d[274]*work.L[169];
  residual += temp*temp;

  temp = work.KKT[526]-work.L[172]*work.d[112]*work.L[172]-1*work.d[278]*1-work.L[173]*work.d[276]*work.L[173]-work.L[174]*work.d[277]*work.L[174];
  residual += temp*temp;

  temp = work.KKT[532]-work.L[177]*work.d[113]*work.L[177]-1*work.d[281]*1-work.L[178]*work.d[279]*work.L[178]-work.L[179]*work.d[280]*work.L[179];
  residual += temp*temp;

  temp = work.KKT[538]-work.L[182]*work.d[114]*work.L[182]-1*work.d[284]*1-work.L[183]*work.d[282]*work.L[183]-work.L[184]*work.d[283]*work.L[184];
  residual += temp*temp;

  temp = work.KKT[544]-work.L[187]*work.d[115]*work.L[187]-1*work.d[287]*1-work.L[188]*work.d[285]*work.L[188]-work.L[189]*work.d[286]*work.L[189];
  residual += temp*temp;

  temp = work.KKT[550]-work.L[192]*work.d[116]*work.L[192]-1*work.d[290]*1-work.L[193]*work.d[288]*work.L[193]-work.L[194]*work.d[289]*work.L[194];
  residual += temp*temp;

  temp = work.KKT[556]-work.L[197]*work.d[117]*work.L[197]-1*work.d[293]*1-work.L[198]*work.d[291]*work.L[198]-work.L[199]*work.d[292]*work.L[199];
  residual += temp*temp;

  temp = work.KKT[562]-work.L[202]*work.d[118]*work.L[202]-1*work.d[296]*1-work.L[203]*work.d[294]*work.L[203]-work.L[204]*work.d[295]*work.L[204];
  residual += temp*temp;

  temp = work.KKT[568]-work.L[207]*work.d[119]*work.L[207]-1*work.d[299]*1-work.L[208]*work.d[297]*work.L[208]-work.L[209]*work.d[298]*work.L[209];
  residual += temp*temp;

  temp = work.KKT[633]-work.L[213]*work.d[120]*work.L[213]-1*work.d[331]*1;
  residual += temp*temp;

  temp = work.KKT[678]-work.L[232]*work.d[121]*work.L[232]-1*work.d[339]*1;
  residual += temp*temp;

  temp = work.KKT[722]-work.L[252]*work.d[122]*work.L[252]-1*work.d[347]*1;
  residual += temp*temp;

  temp = work.KKT[765]-work.L[273]*work.d[123]*work.L[273]-1*work.d[355]*1;
  residual += temp*temp;

  temp = work.KKT[807]-work.L[295]*work.d[124]*work.L[295]-1*work.d[363]*1;
  residual += temp*temp;

  temp = work.KKT[848]-work.L[318]*work.d[125]*work.L[318]-1*work.d[371]*1;
  residual += temp*temp;

  temp = work.KKT[888]-work.L[342]*work.d[126]*work.L[342]-1*work.d[379]*1;
  residual += temp*temp;

  temp = work.KKT[927]-work.L[367]*work.d[127]*work.L[367]-1*work.d[387]*1;
  residual += temp*temp;

  temp = work.KKT[965]-work.L[393]*work.d[128]*work.L[393]-1*work.d[395]*1;
  residual += temp*temp;

  temp = work.KKT[1002]-work.L[420]*work.d[129]*work.L[420]-1*work.d[403]*1;
  residual += temp*temp;

  temp = work.KKT[1038]-work.L[448]*work.d[130]*work.L[448]-1*work.d[411]*1;
  residual += temp*temp;

  temp = work.KKT[1073]-work.L[477]*work.d[131]*work.L[477]-1*work.d[419]*1;
  residual += temp*temp;

  temp = work.KKT[1107]-work.L[507]*work.d[132]*work.L[507]-1*work.d[427]*1;
  residual += temp*temp;

  temp = work.KKT[1140]-work.L[538]*work.d[133]*work.L[538]-1*work.d[435]*1;
  residual += temp*temp;

  temp = work.KKT[1172]-work.L[570]*work.d[134]*work.L[570]-1*work.d[443]*1;
  residual += temp*temp;

  temp = work.KKT[1203]-work.L[603]*work.d[135]*work.L[603]-1*work.d[451]*1;
  residual += temp*temp;

  temp = work.KKT[1233]-work.L[637]*work.d[136]*work.L[637]-1*work.d[459]*1;
  residual += temp*temp;

  temp = work.KKT[1262]-work.L[672]*work.d[137]*work.L[672]-1*work.d[467]*1;
  residual += temp*temp;

  temp = work.KKT[1290]-work.L[708]*work.d[138]*work.L[708]-1*work.d[475]*1;
  residual += temp*temp;

  temp = work.KKT[1317]-work.L[745]*work.d[139]*work.L[745]-1*work.d[483]*1;
  residual += temp*temp;

  temp = work.KKT[1343]-work.L[783]*work.d[140]*work.L[783]-1*work.d[491]*1;
  residual += temp*temp;

  temp = work.KKT[1368]-work.L[822]*work.d[141]*work.L[822]-1*work.d[499]*1;
  residual += temp*temp;

  temp = work.KKT[1392]-work.L[862]*work.d[142]*work.L[862]-1*work.d[507]*1;
  residual += temp*temp;

  temp = work.KKT[1415]-work.L[903]*work.d[143]*work.L[903]-1*work.d[515]*1;
  residual += temp*temp;

  temp = work.KKT[1437]-work.L[945]*work.d[144]*work.L[945]-1*work.d[523]*1;
  residual += temp*temp;

  temp = work.KKT[1458]-work.L[988]*work.d[145]*work.L[988]-1*work.d[531]*1;
  residual += temp*temp;

  temp = work.KKT[1478]-work.L[1032]*work.d[146]*work.L[1032]-1*work.d[539]*1;
  residual += temp*temp;

  temp = work.KKT[1497]-work.L[1077]*work.d[147]*work.L[1077]-1*work.d[547]*1;
  residual += temp*temp;

  temp = work.KKT[1515]-work.L[1123]*work.d[148]*work.L[1123]-1*work.d[555]*1;
  residual += temp*temp;

  temp = work.KKT[1534]-work.L[1199]*work.d[149]*work.L[1199]-1*work.d[564]*1;
  residual += temp*temp;

  temp = work.KKT[301]-work.L[211]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[304]-work.L[230]*work.d[152]*1;
  residual += temp*temp;

  temp = work.KKT[307]-work.L[250]*work.d[154]*1;
  residual += temp*temp;

  temp = work.KKT[310]-work.L[271]*work.d[156]*1;
  residual += temp*temp;

  temp = work.KKT[313]-work.L[293]*work.d[158]*1;
  residual += temp*temp;

  temp = work.KKT[316]-work.L[316]*work.d[160]*1;
  residual += temp*temp;

  temp = work.KKT[319]-work.L[340]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[322]-work.L[365]*work.d[164]*1;
  residual += temp*temp;

  temp = work.KKT[325]-work.L[391]*work.d[166]*1;
  residual += temp*temp;

  temp = work.KKT[328]-work.L[418]*work.d[168]*1;
  residual += temp*temp;

  temp = work.KKT[331]-work.L[446]*work.d[170]*1;
  residual += temp*temp;

  temp = work.KKT[334]-work.L[475]*work.d[172]*1;
  residual += temp*temp;

  temp = work.KKT[337]-work.L[505]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[340]-work.L[536]*work.d[176]*1;
  residual += temp*temp;

  temp = work.KKT[343]-work.L[568]*work.d[178]*1;
  residual += temp*temp;

  temp = work.KKT[346]-work.L[601]*work.d[180]*1;
  residual += temp*temp;

  temp = work.KKT[349]-work.L[635]*work.d[182]*1;
  residual += temp*temp;

  temp = work.KKT[352]-work.L[670]*work.d[184]*1;
  residual += temp*temp;

  temp = work.KKT[355]-work.L[706]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[358]-work.L[743]*work.d[188]*1;
  residual += temp*temp;

  temp = work.KKT[361]-work.L[781]*work.d[190]*1;
  residual += temp*temp;

  temp = work.KKT[364]-work.L[820]*work.d[192]*1;
  residual += temp*temp;

  temp = work.KKT[367]-work.L[860]*work.d[194]*1;
  residual += temp*temp;

  temp = work.KKT[370]-work.L[901]*work.d[196]*1;
  residual += temp*temp;

  temp = work.KKT[373]-work.L[943]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[376]-work.L[986]*work.d[200]*1;
  residual += temp*temp;

  temp = work.KKT[379]-work.L[1030]*work.d[202]*1;
  residual += temp*temp;

  temp = work.KKT[382]-work.L[1075]*work.d[204]*1;
  residual += temp*temp;

  temp = work.KKT[385]-work.L[1121]*work.d[206]*1;
  residual += temp*temp;

  temp = work.KKT[388]-work.L[1197]*work.d[208]*1;
  residual += temp*temp;

  temp = work.KKT[631]-1*work.d[330]*work.L[217];
  residual += temp*temp;

  temp = work.KKT[676]-1*work.d[338]*work.L[236];
  residual += temp*temp;

  temp = work.KKT[720]-1*work.d[346]*work.L[256];
  residual += temp*temp;

  temp = work.KKT[763]-1*work.d[354]*work.L[277];
  residual += temp*temp;

  temp = work.KKT[805]-1*work.d[362]*work.L[299];
  residual += temp*temp;

  temp = work.KKT[846]-1*work.d[370]*work.L[322];
  residual += temp*temp;

  temp = work.KKT[886]-1*work.d[378]*work.L[346];
  residual += temp*temp;

  temp = work.KKT[925]-1*work.d[386]*work.L[371];
  residual += temp*temp;

  temp = work.KKT[963]-1*work.d[394]*work.L[397];
  residual += temp*temp;

  temp = work.KKT[1000]-1*work.d[402]*work.L[424];
  residual += temp*temp;

  temp = work.KKT[1036]-1*work.d[410]*work.L[452];
  residual += temp*temp;

  temp = work.KKT[1071]-1*work.d[418]*work.L[481];
  residual += temp*temp;

  temp = work.KKT[1105]-1*work.d[426]*work.L[511];
  residual += temp*temp;

  temp = work.KKT[1138]-1*work.d[434]*work.L[542];
  residual += temp*temp;

  temp = work.KKT[1170]-1*work.d[442]*work.L[574];
  residual += temp*temp;

  temp = work.KKT[1201]-1*work.d[450]*work.L[607];
  residual += temp*temp;

  temp = work.KKT[1231]-1*work.d[458]*work.L[641];
  residual += temp*temp;

  temp = work.KKT[1260]-1*work.d[466]*work.L[676];
  residual += temp*temp;

  temp = work.KKT[1288]-1*work.d[474]*work.L[712];
  residual += temp*temp;

  temp = work.KKT[1315]-1*work.d[482]*work.L[749];
  residual += temp*temp;

  temp = work.KKT[1341]-1*work.d[490]*work.L[787];
  residual += temp*temp;

  temp = work.KKT[1366]-1*work.d[498]*work.L[826];
  residual += temp*temp;

  temp = work.KKT[1390]-1*work.d[506]*work.L[866];
  residual += temp*temp;

  temp = work.KKT[1413]-1*work.d[514]*work.L[907];
  residual += temp*temp;

  temp = work.KKT[1435]-1*work.d[522]*work.L[949];
  residual += temp*temp;

  temp = work.KKT[1456]-1*work.d[530]*work.L[992];
  residual += temp*temp;

  temp = work.KKT[1476]-1*work.d[538]*work.L[1036];
  residual += temp*temp;

  temp = work.KKT[1495]-1*work.d[546]*work.L[1081];
  residual += temp*temp;

  temp = work.KKT[1513]-1*work.d[554]*work.L[1127];
  residual += temp*temp;

  temp = work.KKT[1532]-1*work.d[563]*work.L[1204];
  residual += temp*temp;

  temp = work.KKT[632]-1*work.d[330]*work.L[221];
  residual += temp*temp;

  temp = work.KKT[677]-1*work.d[338]*work.L[240];
  residual += temp*temp;

  temp = work.KKT[721]-1*work.d[346]*work.L[260];
  residual += temp*temp;

  temp = work.KKT[764]-1*work.d[354]*work.L[281];
  residual += temp*temp;

  temp = work.KKT[806]-1*work.d[362]*work.L[303];
  residual += temp*temp;

  temp = work.KKT[847]-1*work.d[370]*work.L[326];
  residual += temp*temp;

  temp = work.KKT[887]-1*work.d[378]*work.L[350];
  residual += temp*temp;

  temp = work.KKT[926]-1*work.d[386]*work.L[375];
  residual += temp*temp;

  temp = work.KKT[964]-1*work.d[394]*work.L[401];
  residual += temp*temp;

  temp = work.KKT[1001]-1*work.d[402]*work.L[428];
  residual += temp*temp;

  temp = work.KKT[1037]-1*work.d[410]*work.L[456];
  residual += temp*temp;

  temp = work.KKT[1072]-1*work.d[418]*work.L[485];
  residual += temp*temp;

  temp = work.KKT[1106]-1*work.d[426]*work.L[515];
  residual += temp*temp;

  temp = work.KKT[1139]-1*work.d[434]*work.L[546];
  residual += temp*temp;

  temp = work.KKT[1171]-1*work.d[442]*work.L[578];
  residual += temp*temp;

  temp = work.KKT[1202]-1*work.d[450]*work.L[611];
  residual += temp*temp;

  temp = work.KKT[1232]-1*work.d[458]*work.L[645];
  residual += temp*temp;

  temp = work.KKT[1261]-1*work.d[466]*work.L[680];
  residual += temp*temp;

  temp = work.KKT[1289]-1*work.d[474]*work.L[716];
  residual += temp*temp;

  temp = work.KKT[1316]-1*work.d[482]*work.L[753];
  residual += temp*temp;

  temp = work.KKT[1342]-1*work.d[490]*work.L[791];
  residual += temp*temp;

  temp = work.KKT[1367]-1*work.d[498]*work.L[830];
  residual += temp*temp;

  temp = work.KKT[1391]-1*work.d[506]*work.L[870];
  residual += temp*temp;

  temp = work.KKT[1414]-1*work.d[514]*work.L[911];
  residual += temp*temp;

  temp = work.KKT[1436]-1*work.d[522]*work.L[953];
  residual += temp*temp;

  temp = work.KKT[1457]-1*work.d[530]*work.L[996];
  residual += temp*temp;

  temp = work.KKT[1477]-1*work.d[538]*work.L[1040];
  residual += temp*temp;

  temp = work.KKT[1496]-1*work.d[546]*work.L[1085];
  residual += temp*temp;

  temp = work.KKT[1514]-1*work.d[554]*work.L[1131];
  residual += temp*temp;

  temp = work.KKT[1533]-1*work.d[563]*work.L[1209];
  residual += temp*temp;

  temp = work.KKT[300]-work.L[1]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[303]-work.L[3]*work.d[152]*1;
  residual += temp*temp;

  temp = work.KKT[306]-work.L[5]*work.d[154]*1;
  residual += temp*temp;

  temp = work.KKT[309]-work.L[7]*work.d[156]*1;
  residual += temp*temp;

  temp = work.KKT[312]-work.L[9]*work.d[158]*1;
  residual += temp*temp;

  temp = work.KKT[315]-work.L[11]*work.d[160]*1;
  residual += temp*temp;

  temp = work.KKT[318]-work.L[13]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[321]-work.L[15]*work.d[164]*1;
  residual += temp*temp;

  temp = work.KKT[324]-work.L[17]*work.d[166]*1;
  residual += temp*temp;

  temp = work.KKT[327]-work.L[19]*work.d[168]*1;
  residual += temp*temp;

  temp = work.KKT[330]-work.L[21]*work.d[170]*1;
  residual += temp*temp;

  temp = work.KKT[333]-work.L[23]*work.d[172]*1;
  residual += temp*temp;

  temp = work.KKT[336]-work.L[25]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[339]-work.L[27]*work.d[176]*1;
  residual += temp*temp;

  temp = work.KKT[342]-work.L[29]*work.d[178]*1;
  residual += temp*temp;

  temp = work.KKT[345]-work.L[31]*work.d[180]*1;
  residual += temp*temp;

  temp = work.KKT[348]-work.L[33]*work.d[182]*1;
  residual += temp*temp;

  temp = work.KKT[351]-work.L[35]*work.d[184]*1;
  residual += temp*temp;

  temp = work.KKT[354]-work.L[37]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[357]-work.L[39]*work.d[188]*1;
  residual += temp*temp;

  temp = work.KKT[360]-work.L[41]*work.d[190]*1;
  residual += temp*temp;

  temp = work.KKT[363]-work.L[43]*work.d[192]*1;
  residual += temp*temp;

  temp = work.KKT[366]-work.L[45]*work.d[194]*1;
  residual += temp*temp;

  temp = work.KKT[369]-work.L[47]*work.d[196]*1;
  residual += temp*temp;

  temp = work.KKT[372]-work.L[49]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[375]-work.L[51]*work.d[200]*1;
  residual += temp*temp;

  temp = work.KKT[378]-work.L[53]*work.d[202]*1;
  residual += temp*temp;

  temp = work.KKT[381]-work.L[55]*work.d[204]*1;
  residual += temp*temp;

  temp = work.KKT[384]-work.L[57]*work.d[206]*1;
  residual += temp*temp;

  temp = work.KKT[387]-work.L[59]*work.d[208]*1;
  residual += temp*temp;

  temp = work.KKT[390]-work.L[61]*work.d[210]*1;
  residual += temp*temp;

  temp = work.KKT[396]-work.L[66]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[402]-work.L[71]*work.d[216]*1;
  residual += temp*temp;

  temp = work.KKT[408]-work.L[76]*work.d[219]*1;
  residual += temp*temp;

  temp = work.KKT[414]-work.L[81]*work.d[222]*1;
  residual += temp*temp;

  temp = work.KKT[420]-work.L[86]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[426]-work.L[91]*work.d[228]*1;
  residual += temp*temp;

  temp = work.KKT[432]-work.L[96]*work.d[231]*1;
  residual += temp*temp;

  temp = work.KKT[438]-work.L[101]*work.d[234]*1;
  residual += temp*temp;

  temp = work.KKT[444]-work.L[106]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[450]-work.L[111]*work.d[240]*1;
  residual += temp*temp;

  temp = work.KKT[456]-work.L[116]*work.d[243]*1;
  residual += temp*temp;

  temp = work.KKT[462]-work.L[121]*work.d[246]*1;
  residual += temp*temp;

  temp = work.KKT[468]-work.L[126]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[474]-work.L[131]*work.d[252]*1;
  residual += temp*temp;

  temp = work.KKT[480]-work.L[136]*work.d[255]*1;
  residual += temp*temp;

  temp = work.KKT[486]-work.L[141]*work.d[258]*1;
  residual += temp*temp;

  temp = work.KKT[492]-work.L[146]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[498]-work.L[151]*work.d[264]*1;
  residual += temp*temp;

  temp = work.KKT[504]-work.L[156]*work.d[267]*1;
  residual += temp*temp;

  temp = work.KKT[510]-work.L[161]*work.d[270]*1;
  residual += temp*temp;

  temp = work.KKT[516]-work.L[166]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[522]-work.L[171]*work.d[276]*1;
  residual += temp*temp;

  temp = work.KKT[528]-work.L[176]*work.d[279]*1;
  residual += temp*temp;

  temp = work.KKT[534]-work.L[181]*work.d[282]*1;
  residual += temp*temp;

  temp = work.KKT[540]-work.L[186]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[546]-work.L[191]*work.d[288]*1;
  residual += temp*temp;

  temp = work.KKT[552]-work.L[196]*work.d[291]*1;
  residual += temp*temp;

  temp = work.KKT[558]-work.L[201]*work.d[294]*1;
  residual += temp*temp;

  temp = work.KKT[564]-work.L[206]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[393]-1*work.d[211]*work.L[215];
  residual += temp*temp;

  temp = work.KKT[399]-1*work.d[214]*work.L[234];
  residual += temp*temp;

  temp = work.KKT[405]-1*work.d[217]*work.L[254];
  residual += temp*temp;

  temp = work.KKT[411]-1*work.d[220]*work.L[275];
  residual += temp*temp;

  temp = work.KKT[417]-1*work.d[223]*work.L[297];
  residual += temp*temp;

  temp = work.KKT[423]-1*work.d[226]*work.L[320];
  residual += temp*temp;

  temp = work.KKT[429]-1*work.d[229]*work.L[344];
  residual += temp*temp;

  temp = work.KKT[435]-1*work.d[232]*work.L[369];
  residual += temp*temp;

  temp = work.KKT[441]-1*work.d[235]*work.L[395];
  residual += temp*temp;

  temp = work.KKT[447]-1*work.d[238]*work.L[422];
  residual += temp*temp;

  temp = work.KKT[453]-1*work.d[241]*work.L[450];
  residual += temp*temp;

  temp = work.KKT[459]-1*work.d[244]*work.L[479];
  residual += temp*temp;

  temp = work.KKT[465]-1*work.d[247]*work.L[509];
  residual += temp*temp;

  temp = work.KKT[471]-1*work.d[250]*work.L[540];
  residual += temp*temp;

  temp = work.KKT[477]-1*work.d[253]*work.L[572];
  residual += temp*temp;

  temp = work.KKT[483]-1*work.d[256]*work.L[605];
  residual += temp*temp;

  temp = work.KKT[489]-1*work.d[259]*work.L[639];
  residual += temp*temp;

  temp = work.KKT[495]-1*work.d[262]*work.L[674];
  residual += temp*temp;

  temp = work.KKT[501]-1*work.d[265]*work.L[710];
  residual += temp*temp;

  temp = work.KKT[507]-1*work.d[268]*work.L[747];
  residual += temp*temp;

  temp = work.KKT[513]-1*work.d[271]*work.L[785];
  residual += temp*temp;

  temp = work.KKT[519]-1*work.d[274]*work.L[824];
  residual += temp*temp;

  temp = work.KKT[525]-1*work.d[277]*work.L[864];
  residual += temp*temp;

  temp = work.KKT[531]-1*work.d[280]*work.L[905];
  residual += temp*temp;

  temp = work.KKT[537]-1*work.d[283]*work.L[947];
  residual += temp*temp;

  temp = work.KKT[543]-1*work.d[286]*work.L[990];
  residual += temp*temp;

  temp = work.KKT[549]-1*work.d[289]*work.L[1034];
  residual += temp*temp;

  temp = work.KKT[555]-1*work.d[292]*work.L[1079];
  residual += temp*temp;

  temp = work.KKT[561]-1*work.d[295]*work.L[1125];
  residual += temp*temp;

  temp = work.KKT[567]-1*work.d[298]*work.L[1202];
  residual += temp*temp;

  temp = work.KKT[391]-work.L[63]*work.d[210]*1;
  residual += temp*temp;

  temp = work.KKT[397]-work.L[68]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[403]-work.L[73]*work.d[216]*1;
  residual += temp*temp;

  temp = work.KKT[409]-work.L[78]*work.d[219]*1;
  residual += temp*temp;

  temp = work.KKT[415]-work.L[83]*work.d[222]*1;
  residual += temp*temp;

  temp = work.KKT[421]-work.L[88]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[427]-work.L[93]*work.d[228]*1;
  residual += temp*temp;

  temp = work.KKT[433]-work.L[98]*work.d[231]*1;
  residual += temp*temp;

  temp = work.KKT[439]-work.L[103]*work.d[234]*1;
  residual += temp*temp;

  temp = work.KKT[445]-work.L[108]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[451]-work.L[113]*work.d[240]*1;
  residual += temp*temp;

  temp = work.KKT[457]-work.L[118]*work.d[243]*1;
  residual += temp*temp;

  temp = work.KKT[463]-work.L[123]*work.d[246]*1;
  residual += temp*temp;

  temp = work.KKT[469]-work.L[128]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[475]-work.L[133]*work.d[252]*1;
  residual += temp*temp;

  temp = work.KKT[481]-work.L[138]*work.d[255]*1;
  residual += temp*temp;

  temp = work.KKT[487]-work.L[143]*work.d[258]*1;
  residual += temp*temp;

  temp = work.KKT[493]-work.L[148]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[499]-work.L[153]*work.d[264]*1;
  residual += temp*temp;

  temp = work.KKT[505]-work.L[158]*work.d[267]*1;
  residual += temp*temp;

  temp = work.KKT[511]-work.L[163]*work.d[270]*1;
  residual += temp*temp;

  temp = work.KKT[517]-work.L[168]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[523]-work.L[173]*work.d[276]*1;
  residual += temp*temp;

  temp = work.KKT[529]-work.L[178]*work.d[279]*1;
  residual += temp*temp;

  temp = work.KKT[535]-work.L[183]*work.d[282]*1;
  residual += temp*temp;

  temp = work.KKT[541]-work.L[188]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[547]-work.L[193]*work.d[288]*1;
  residual += temp*temp;

  temp = work.KKT[553]-work.L[198]*work.d[291]*1;
  residual += temp*temp;

  temp = work.KKT[559]-work.L[203]*work.d[294]*1;
  residual += temp*temp;

  temp = work.KKT[565]-work.L[208]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[395]-1*work.d[212]*work.L[216]-work.L[64]*work.d[211]*work.L[215];
  residual += temp*temp;

  temp = work.KKT[401]-1*work.d[215]*work.L[235]-work.L[69]*work.d[214]*work.L[234];
  residual += temp*temp;

  temp = work.KKT[407]-1*work.d[218]*work.L[255]-work.L[74]*work.d[217]*work.L[254];
  residual += temp*temp;

  temp = work.KKT[413]-1*work.d[221]*work.L[276]-work.L[79]*work.d[220]*work.L[275];
  residual += temp*temp;

  temp = work.KKT[419]-1*work.d[224]*work.L[298]-work.L[84]*work.d[223]*work.L[297];
  residual += temp*temp;

  temp = work.KKT[425]-1*work.d[227]*work.L[321]-work.L[89]*work.d[226]*work.L[320];
  residual += temp*temp;

  temp = work.KKT[431]-1*work.d[230]*work.L[345]-work.L[94]*work.d[229]*work.L[344];
  residual += temp*temp;

  temp = work.KKT[437]-1*work.d[233]*work.L[370]-work.L[99]*work.d[232]*work.L[369];
  residual += temp*temp;

  temp = work.KKT[443]-1*work.d[236]*work.L[396]-work.L[104]*work.d[235]*work.L[395];
  residual += temp*temp;

  temp = work.KKT[449]-1*work.d[239]*work.L[423]-work.L[109]*work.d[238]*work.L[422];
  residual += temp*temp;

  temp = work.KKT[455]-1*work.d[242]*work.L[451]-work.L[114]*work.d[241]*work.L[450];
  residual += temp*temp;

  temp = work.KKT[461]-1*work.d[245]*work.L[480]-work.L[119]*work.d[244]*work.L[479];
  residual += temp*temp;

  temp = work.KKT[467]-1*work.d[248]*work.L[510]-work.L[124]*work.d[247]*work.L[509];
  residual += temp*temp;

  temp = work.KKT[473]-1*work.d[251]*work.L[541]-work.L[129]*work.d[250]*work.L[540];
  residual += temp*temp;

  temp = work.KKT[479]-1*work.d[254]*work.L[573]-work.L[134]*work.d[253]*work.L[572];
  residual += temp*temp;

  temp = work.KKT[485]-1*work.d[257]*work.L[606]-work.L[139]*work.d[256]*work.L[605];
  residual += temp*temp;

  temp = work.KKT[491]-1*work.d[260]*work.L[640]-work.L[144]*work.d[259]*work.L[639];
  residual += temp*temp;

  temp = work.KKT[497]-1*work.d[263]*work.L[675]-work.L[149]*work.d[262]*work.L[674];
  residual += temp*temp;

  temp = work.KKT[503]-1*work.d[266]*work.L[711]-work.L[154]*work.d[265]*work.L[710];
  residual += temp*temp;

  temp = work.KKT[509]-1*work.d[269]*work.L[748]-work.L[159]*work.d[268]*work.L[747];
  residual += temp*temp;

  temp = work.KKT[515]-1*work.d[272]*work.L[786]-work.L[164]*work.d[271]*work.L[785];
  residual += temp*temp;

  temp = work.KKT[521]-1*work.d[275]*work.L[825]-work.L[169]*work.d[274]*work.L[824];
  residual += temp*temp;

  temp = work.KKT[527]-1*work.d[278]*work.L[865]-work.L[174]*work.d[277]*work.L[864];
  residual += temp*temp;

  temp = work.KKT[533]-1*work.d[281]*work.L[906]-work.L[179]*work.d[280]*work.L[905];
  residual += temp*temp;

  temp = work.KKT[539]-1*work.d[284]*work.L[948]-work.L[184]*work.d[283]*work.L[947];
  residual += temp*temp;

  temp = work.KKT[545]-1*work.d[287]*work.L[991]-work.L[189]*work.d[286]*work.L[990];
  residual += temp*temp;

  temp = work.KKT[551]-1*work.d[290]*work.L[1035]-work.L[194]*work.d[289]*work.L[1034];
  residual += temp*temp;

  temp = work.KKT[557]-1*work.d[293]*work.L[1080]-work.L[199]*work.d[292]*work.L[1079];
  residual += temp*temp;

  temp = work.KKT[563]-1*work.d[296]*work.L[1126]-work.L[204]*work.d[295]*work.L[1125];
  residual += temp*temp;

  temp = work.KKT[569]-1*work.d[299]*work.L[1203]-work.L[209]*work.d[298]*work.L[1202];
  residual += temp*temp;

  temp = work.KKT[634]-1*work.d[331]*work.L[218];
  residual += temp*temp;

  temp = work.KKT[679]-1*work.d[339]*work.L[237];
  residual += temp*temp;

  temp = work.KKT[723]-1*work.d[347]*work.L[257];
  residual += temp*temp;

  temp = work.KKT[766]-1*work.d[355]*work.L[278];
  residual += temp*temp;

  temp = work.KKT[808]-1*work.d[363]*work.L[300];
  residual += temp*temp;

  temp = work.KKT[849]-1*work.d[371]*work.L[323];
  residual += temp*temp;

  temp = work.KKT[889]-1*work.d[379]*work.L[347];
  residual += temp*temp;

  temp = work.KKT[928]-1*work.d[387]*work.L[372];
  residual += temp*temp;

  temp = work.KKT[966]-1*work.d[395]*work.L[398];
  residual += temp*temp;

  temp = work.KKT[1003]-1*work.d[403]*work.L[425];
  residual += temp*temp;

  temp = work.KKT[1039]-1*work.d[411]*work.L[453];
  residual += temp*temp;

  temp = work.KKT[1074]-1*work.d[419]*work.L[482];
  residual += temp*temp;

  temp = work.KKT[1108]-1*work.d[427]*work.L[512];
  residual += temp*temp;

  temp = work.KKT[1141]-1*work.d[435]*work.L[543];
  residual += temp*temp;

  temp = work.KKT[1173]-1*work.d[443]*work.L[575];
  residual += temp*temp;

  temp = work.KKT[1204]-1*work.d[451]*work.L[608];
  residual += temp*temp;

  temp = work.KKT[1234]-1*work.d[459]*work.L[642];
  residual += temp*temp;

  temp = work.KKT[1263]-1*work.d[467]*work.L[677];
  residual += temp*temp;

  temp = work.KKT[1291]-1*work.d[475]*work.L[713];
  residual += temp*temp;

  temp = work.KKT[1318]-1*work.d[483]*work.L[750];
  residual += temp*temp;

  temp = work.KKT[1344]-1*work.d[491]*work.L[788];
  residual += temp*temp;

  temp = work.KKT[1369]-1*work.d[499]*work.L[827];
  residual += temp*temp;

  temp = work.KKT[1393]-1*work.d[507]*work.L[867];
  residual += temp*temp;

  temp = work.KKT[1416]-1*work.d[515]*work.L[908];
  residual += temp*temp;

  temp = work.KKT[1438]-1*work.d[523]*work.L[950];
  residual += temp*temp;

  temp = work.KKT[1459]-1*work.d[531]*work.L[993];
  residual += temp*temp;

  temp = work.KKT[1479]-1*work.d[539]*work.L[1037];
  residual += temp*temp;

  temp = work.KKT[1498]-1*work.d[547]*work.L[1082];
  residual += temp*temp;

  temp = work.KKT[1516]-1*work.d[555]*work.L[1128];
  residual += temp*temp;

  temp = work.KKT[1535]-1*work.d[564]*work.L[1205];
  residual += temp*temp;

  temp = work.KKT[635]-1*work.d[331]*work.L[222];
  residual += temp*temp;

  temp = work.KKT[680]-1*work.d[339]*work.L[241];
  residual += temp*temp;

  temp = work.KKT[724]-1*work.d[347]*work.L[261];
  residual += temp*temp;

  temp = work.KKT[767]-1*work.d[355]*work.L[282];
  residual += temp*temp;

  temp = work.KKT[809]-1*work.d[363]*work.L[304];
  residual += temp*temp;

  temp = work.KKT[850]-1*work.d[371]*work.L[327];
  residual += temp*temp;

  temp = work.KKT[890]-1*work.d[379]*work.L[351];
  residual += temp*temp;

  temp = work.KKT[929]-1*work.d[387]*work.L[376];
  residual += temp*temp;

  temp = work.KKT[967]-1*work.d[395]*work.L[402];
  residual += temp*temp;

  temp = work.KKT[1004]-1*work.d[403]*work.L[429];
  residual += temp*temp;

  temp = work.KKT[1040]-1*work.d[411]*work.L[457];
  residual += temp*temp;

  temp = work.KKT[1075]-1*work.d[419]*work.L[486];
  residual += temp*temp;

  temp = work.KKT[1109]-1*work.d[427]*work.L[516];
  residual += temp*temp;

  temp = work.KKT[1142]-1*work.d[435]*work.L[547];
  residual += temp*temp;

  temp = work.KKT[1174]-1*work.d[443]*work.L[579];
  residual += temp*temp;

  temp = work.KKT[1205]-1*work.d[451]*work.L[612];
  residual += temp*temp;

  temp = work.KKT[1235]-1*work.d[459]*work.L[646];
  residual += temp*temp;

  temp = work.KKT[1264]-1*work.d[467]*work.L[681];
  residual += temp*temp;

  temp = work.KKT[1292]-1*work.d[475]*work.L[717];
  residual += temp*temp;

  temp = work.KKT[1319]-1*work.d[483]*work.L[754];
  residual += temp*temp;

  temp = work.KKT[1345]-1*work.d[491]*work.L[792];
  residual += temp*temp;

  temp = work.KKT[1370]-1*work.d[499]*work.L[831];
  residual += temp*temp;

  temp = work.KKT[1394]-1*work.d[507]*work.L[871];
  residual += temp*temp;

  temp = work.KKT[1417]-1*work.d[515]*work.L[912];
  residual += temp*temp;

  temp = work.KKT[1439]-1*work.d[523]*work.L[954];
  residual += temp*temp;

  temp = work.KKT[1460]-1*work.d[531]*work.L[997];
  residual += temp*temp;

  temp = work.KKT[1480]-1*work.d[539]*work.L[1041];
  residual += temp*temp;

  temp = work.KKT[1499]-1*work.d[547]*work.L[1086];
  residual += temp*temp;

  temp = work.KKT[1517]-1*work.d[555]*work.L[1132];
  residual += temp*temp;

  temp = work.KKT[1536]-1*work.d[564]*work.L[1210];
  residual += temp*temp;

  temp = work.KKT[644]-1*work.d[336]*work.L[228];
  residual += temp*temp;

  temp = work.KKT[689]-1*work.d[344]*work.L[248];
  residual += temp*temp;

  temp = work.KKT[733]-1*work.d[352]*work.L[269];
  residual += temp*temp;

  temp = work.KKT[776]-1*work.d[360]*work.L[291];
  residual += temp*temp;

  temp = work.KKT[818]-1*work.d[368]*work.L[314];
  residual += temp*temp;

  temp = work.KKT[859]-1*work.d[376]*work.L[338];
  residual += temp*temp;

  temp = work.KKT[899]-1*work.d[384]*work.L[363];
  residual += temp*temp;

  temp = work.KKT[938]-1*work.d[392]*work.L[389];
  residual += temp*temp;

  temp = work.KKT[976]-1*work.d[400]*work.L[416];
  residual += temp*temp;

  temp = work.KKT[1013]-1*work.d[408]*work.L[444];
  residual += temp*temp;

  temp = work.KKT[1049]-1*work.d[416]*work.L[473];
  residual += temp*temp;

  temp = work.KKT[1084]-1*work.d[424]*work.L[503];
  residual += temp*temp;

  temp = work.KKT[1118]-1*work.d[432]*work.L[534];
  residual += temp*temp;

  temp = work.KKT[1151]-1*work.d[440]*work.L[566];
  residual += temp*temp;

  temp = work.KKT[1183]-1*work.d[448]*work.L[599];
  residual += temp*temp;

  temp = work.KKT[1214]-1*work.d[456]*work.L[633];
  residual += temp*temp;

  temp = work.KKT[1244]-1*work.d[464]*work.L[668];
  residual += temp*temp;

  temp = work.KKT[1273]-1*work.d[472]*work.L[704];
  residual += temp*temp;

  temp = work.KKT[1301]-1*work.d[480]*work.L[741];
  residual += temp*temp;

  temp = work.KKT[1328]-1*work.d[488]*work.L[779];
  residual += temp*temp;

  temp = work.KKT[1354]-1*work.d[496]*work.L[818];
  residual += temp*temp;

  temp = work.KKT[1379]-1*work.d[504]*work.L[858];
  residual += temp*temp;

  temp = work.KKT[1403]-1*work.d[512]*work.L[899];
  residual += temp*temp;

  temp = work.KKT[1426]-1*work.d[520]*work.L[941];
  residual += temp*temp;

  temp = work.KKT[1448]-1*work.d[528]*work.L[984];
  residual += temp*temp;

  temp = work.KKT[1469]-1*work.d[536]*work.L[1028];
  residual += temp*temp;

  temp = work.KKT[1489]-1*work.d[544]*work.L[1073];
  residual += temp*temp;

  temp = work.KKT[1508]-1*work.d[552]*work.L[1119];
  residual += temp*temp;

  temp = work.KKT[1526]-1*work.d[560]*work.L[1166];
  residual += temp*temp;

  temp = work.KKT[1530]-work.L[1200]*work.d[562]*1;
  residual += temp*temp;

  temp = work.KKT[641]-work.L[226]*work.d[334]*1;
  residual += temp*temp;

  temp = work.KKT[686]-work.L[245]*work.d[342]*1;
  residual += temp*temp;

  temp = work.KKT[730]-work.L[265]*work.d[350]*1;
  residual += temp*temp;

  temp = work.KKT[773]-work.L[286]*work.d[358]*1;
  residual += temp*temp;

  temp = work.KKT[815]-work.L[308]*work.d[366]*1;
  residual += temp*temp;

  temp = work.KKT[856]-work.L[331]*work.d[374]*1;
  residual += temp*temp;

  temp = work.KKT[896]-work.L[355]*work.d[382]*1;
  residual += temp*temp;

  temp = work.KKT[935]-work.L[380]*work.d[390]*1;
  residual += temp*temp;

  temp = work.KKT[973]-work.L[406]*work.d[398]*1;
  residual += temp*temp;

  temp = work.KKT[1010]-work.L[433]*work.d[406]*1;
  residual += temp*temp;

  temp = work.KKT[1046]-work.L[461]*work.d[414]*1;
  residual += temp*temp;

  temp = work.KKT[1081]-work.L[490]*work.d[422]*1;
  residual += temp*temp;

  temp = work.KKT[1115]-work.L[520]*work.d[430]*1;
  residual += temp*temp;

  temp = work.KKT[1148]-work.L[551]*work.d[438]*1;
  residual += temp*temp;

  temp = work.KKT[1180]-work.L[583]*work.d[446]*1;
  residual += temp*temp;

  temp = work.KKT[1211]-work.L[616]*work.d[454]*1;
  residual += temp*temp;

  temp = work.KKT[1241]-work.L[650]*work.d[462]*1;
  residual += temp*temp;

  temp = work.KKT[1270]-work.L[685]*work.d[470]*1;
  residual += temp*temp;

  temp = work.KKT[1298]-work.L[721]*work.d[478]*1;
  residual += temp*temp;

  temp = work.KKT[1325]-work.L[758]*work.d[486]*1;
  residual += temp*temp;

  temp = work.KKT[1351]-work.L[796]*work.d[494]*1;
  residual += temp*temp;

  temp = work.KKT[1376]-work.L[835]*work.d[502]*1;
  residual += temp*temp;

  temp = work.KKT[1400]-work.L[875]*work.d[510]*1;
  residual += temp*temp;

  temp = work.KKT[1423]-work.L[916]*work.d[518]*1;
  residual += temp*temp;

  temp = work.KKT[1445]-work.L[958]*work.d[526]*1;
  residual += temp*temp;

  temp = work.KKT[1466]-work.L[1001]*work.d[534]*1;
  residual += temp*temp;

  temp = work.KKT[1486]-work.L[1045]*work.d[542]*1;
  residual += temp*temp;

  temp = work.KKT[1505]-work.L[1090]*work.d[550]*1;
  residual += temp*temp;

  temp = work.KKT[1523]-work.L[1136]*work.d[558]*1;
  residual += temp*temp;

  temp = work.KKT[1537]-1*work.d[565]*work.L[1206];
  residual += temp*temp;

  temp = work.KKT[643]-work.L[226]*work.d[334]*work.L[225]-work.L[227]*work.d[335]*1;
  residual += temp*temp;

  temp = work.KKT[688]-work.L[245]*work.d[342]*work.L[244]-work.L[246]*work.d[343]*1;
  residual += temp*temp;

  temp = work.KKT[732]-work.L[265]*work.d[350]*work.L[264]-work.L[266]*work.d[351]*1;
  residual += temp*temp;

  temp = work.KKT[775]-work.L[286]*work.d[358]*work.L[285]-work.L[287]*work.d[359]*1;
  residual += temp*temp;

  temp = work.KKT[817]-work.L[308]*work.d[366]*work.L[307]-work.L[309]*work.d[367]*1;
  residual += temp*temp;

  temp = work.KKT[858]-work.L[331]*work.d[374]*work.L[330]-work.L[332]*work.d[375]*1;
  residual += temp*temp;

  temp = work.KKT[898]-work.L[355]*work.d[382]*work.L[354]-work.L[356]*work.d[383]*1;
  residual += temp*temp;

  temp = work.KKT[937]-work.L[380]*work.d[390]*work.L[379]-work.L[381]*work.d[391]*1;
  residual += temp*temp;

  temp = work.KKT[975]-work.L[406]*work.d[398]*work.L[405]-work.L[407]*work.d[399]*1;
  residual += temp*temp;

  temp = work.KKT[1012]-work.L[433]*work.d[406]*work.L[432]-work.L[434]*work.d[407]*1;
  residual += temp*temp;

  temp = work.KKT[1048]-work.L[461]*work.d[414]*work.L[460]-work.L[462]*work.d[415]*1;
  residual += temp*temp;

  temp = work.KKT[1083]-work.L[490]*work.d[422]*work.L[489]-work.L[491]*work.d[423]*1;
  residual += temp*temp;

  temp = work.KKT[1117]-work.L[520]*work.d[430]*work.L[519]-work.L[521]*work.d[431]*1;
  residual += temp*temp;

  temp = work.KKT[1150]-work.L[551]*work.d[438]*work.L[550]-work.L[552]*work.d[439]*1;
  residual += temp*temp;

  temp = work.KKT[1182]-work.L[583]*work.d[446]*work.L[582]-work.L[584]*work.d[447]*1;
  residual += temp*temp;

  temp = work.KKT[1213]-work.L[616]*work.d[454]*work.L[615]-work.L[617]*work.d[455]*1;
  residual += temp*temp;

  temp = work.KKT[1243]-work.L[650]*work.d[462]*work.L[649]-work.L[651]*work.d[463]*1;
  residual += temp*temp;

  temp = work.KKT[1272]-work.L[685]*work.d[470]*work.L[684]-work.L[686]*work.d[471]*1;
  residual += temp*temp;

  temp = work.KKT[1300]-work.L[721]*work.d[478]*work.L[720]-work.L[722]*work.d[479]*1;
  residual += temp*temp;

  temp = work.KKT[1327]-work.L[758]*work.d[486]*work.L[757]-work.L[759]*work.d[487]*1;
  residual += temp*temp;

  temp = work.KKT[1353]-work.L[796]*work.d[494]*work.L[795]-work.L[797]*work.d[495]*1;
  residual += temp*temp;

  temp = work.KKT[1378]-work.L[835]*work.d[502]*work.L[834]-work.L[836]*work.d[503]*1;
  residual += temp*temp;

  temp = work.KKT[1402]-work.L[875]*work.d[510]*work.L[874]-work.L[876]*work.d[511]*1;
  residual += temp*temp;

  temp = work.KKT[1425]-work.L[916]*work.d[518]*work.L[915]-work.L[917]*work.d[519]*1;
  residual += temp*temp;

  temp = work.KKT[1447]-work.L[958]*work.d[526]*work.L[957]-work.L[959]*work.d[527]*1;
  residual += temp*temp;

  temp = work.KKT[1468]-work.L[1001]*work.d[534]*work.L[1000]-work.L[1002]*work.d[535]*1;
  residual += temp*temp;

  temp = work.KKT[1488]-work.L[1045]*work.d[542]*work.L[1044]-work.L[1046]*work.d[543]*1;
  residual += temp*temp;

  temp = work.KKT[1507]-work.L[1090]*work.d[550]*work.L[1089]-work.L[1091]*work.d[551]*1;
  residual += temp*temp;

  temp = work.KKT[1525]-work.L[1136]*work.d[558]*work.L[1135]-work.L[1137]*work.d[559]*1;
  residual += temp*temp;

  temp = work.KKT[1538]-1*work.d[565]*work.L[1211];
  residual += temp*temp;

  temp = work.KKT[571]-work.L[214]*work.d[300]*1;
  residual += temp*temp;

  temp = work.KKT[573]-work.L[233]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[575]-work.L[253]*work.d[302]*1;
  residual += temp*temp;

  temp = work.KKT[577]-work.L[274]*work.d[303]*1;
  residual += temp*temp;

  temp = work.KKT[579]-work.L[296]*work.d[304]*1;
  residual += temp*temp;

  temp = work.KKT[581]-work.L[319]*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[583]-work.L[343]*work.d[306]*1;
  residual += temp*temp;

  temp = work.KKT[585]-work.L[368]*work.d[307]*1;
  residual += temp*temp;

  temp = work.KKT[587]-work.L[394]*work.d[308]*1;
  residual += temp*temp;

  temp = work.KKT[589]-work.L[421]*work.d[309]*1;
  residual += temp*temp;

  temp = work.KKT[591]-work.L[449]*work.d[310]*1;
  residual += temp*temp;

  temp = work.KKT[593]-work.L[478]*work.d[311]*1;
  residual += temp*temp;

  temp = work.KKT[595]-work.L[508]*work.d[312]*1;
  residual += temp*temp;

  temp = work.KKT[597]-work.L[539]*work.d[313]*1;
  residual += temp*temp;

  temp = work.KKT[599]-work.L[571]*work.d[314]*1;
  residual += temp*temp;

  temp = work.KKT[601]-work.L[604]*work.d[315]*1;
  residual += temp*temp;

  temp = work.KKT[603]-work.L[638]*work.d[316]*1;
  residual += temp*temp;

  temp = work.KKT[605]-work.L[673]*work.d[317]*1;
  residual += temp*temp;

  temp = work.KKT[607]-work.L[709]*work.d[318]*1;
  residual += temp*temp;

  temp = work.KKT[609]-work.L[746]*work.d[319]*1;
  residual += temp*temp;

  temp = work.KKT[611]-work.L[784]*work.d[320]*1;
  residual += temp*temp;

  temp = work.KKT[613]-work.L[823]*work.d[321]*1;
  residual += temp*temp;

  temp = work.KKT[615]-work.L[863]*work.d[322]*1;
  residual += temp*temp;

  temp = work.KKT[617]-work.L[904]*work.d[323]*1;
  residual += temp*temp;

  temp = work.KKT[619]-work.L[946]*work.d[324]*1;
  residual += temp*temp;

  temp = work.KKT[621]-work.L[989]*work.d[325]*1;
  residual += temp*temp;

  temp = work.KKT[623]-work.L[1033]*work.d[326]*1;
  residual += temp*temp;

  temp = work.KKT[625]-work.L[1078]*work.d[327]*1;
  residual += temp*temp;

  temp = work.KKT[627]-work.L[1124]*work.d[328]*1;
  residual += temp*temp;

  temp = work.KKT[629]-work.L[1201]*work.d[329]*1;
  residual += temp*temp;

  temp = work.KKT[636]-1*work.d[332]*work.L[219];
  residual += temp*temp;

  temp = work.KKT[681]-1*work.d[340]*work.L[238];
  residual += temp*temp;

  temp = work.KKT[725]-1*work.d[348]*work.L[258];
  residual += temp*temp;

  temp = work.KKT[768]-1*work.d[356]*work.L[279];
  residual += temp*temp;

  temp = work.KKT[810]-1*work.d[364]*work.L[301];
  residual += temp*temp;

  temp = work.KKT[851]-1*work.d[372]*work.L[324];
  residual += temp*temp;

  temp = work.KKT[891]-1*work.d[380]*work.L[348];
  residual += temp*temp;

  temp = work.KKT[930]-1*work.d[388]*work.L[373];
  residual += temp*temp;

  temp = work.KKT[968]-1*work.d[396]*work.L[399];
  residual += temp*temp;

  temp = work.KKT[1005]-1*work.d[404]*work.L[426];
  residual += temp*temp;

  temp = work.KKT[1041]-1*work.d[412]*work.L[454];
  residual += temp*temp;

  temp = work.KKT[1076]-1*work.d[420]*work.L[483];
  residual += temp*temp;

  temp = work.KKT[1110]-1*work.d[428]*work.L[513];
  residual += temp*temp;

  temp = work.KKT[1143]-1*work.d[436]*work.L[544];
  residual += temp*temp;

  temp = work.KKT[1175]-1*work.d[444]*work.L[576];
  residual += temp*temp;

  temp = work.KKT[1206]-1*work.d[452]*work.L[609];
  residual += temp*temp;

  temp = work.KKT[1236]-1*work.d[460]*work.L[643];
  residual += temp*temp;

  temp = work.KKT[1265]-1*work.d[468]*work.L[678];
  residual += temp*temp;

  temp = work.KKT[1293]-1*work.d[476]*work.L[714];
  residual += temp*temp;

  temp = work.KKT[1320]-1*work.d[484]*work.L[751];
  residual += temp*temp;

  temp = work.KKT[1346]-1*work.d[492]*work.L[789];
  residual += temp*temp;

  temp = work.KKT[1371]-1*work.d[500]*work.L[828];
  residual += temp*temp;

  temp = work.KKT[1395]-1*work.d[508]*work.L[868];
  residual += temp*temp;

  temp = work.KKT[1418]-1*work.d[516]*work.L[909];
  residual += temp*temp;

  temp = work.KKT[1440]-1*work.d[524]*work.L[951];
  residual += temp*temp;

  temp = work.KKT[1461]-1*work.d[532]*work.L[994];
  residual += temp*temp;

  temp = work.KKT[1481]-1*work.d[540]*work.L[1038];
  residual += temp*temp;

  temp = work.KKT[1500]-1*work.d[548]*work.L[1083];
  residual += temp*temp;

  temp = work.KKT[1518]-1*work.d[556]*work.L[1129];
  residual += temp*temp;

  temp = work.KKT[1539]-1*work.d[566]*work.L[1207];
  residual += temp*temp;

  temp = work.KKT[637]-1*work.d[332]*work.L[223];
  residual += temp*temp;

  temp = work.KKT[682]-1*work.d[340]*work.L[242];
  residual += temp*temp;

  temp = work.KKT[726]-1*work.d[348]*work.L[262];
  residual += temp*temp;

  temp = work.KKT[769]-1*work.d[356]*work.L[283];
  residual += temp*temp;

  temp = work.KKT[811]-1*work.d[364]*work.L[305];
  residual += temp*temp;

  temp = work.KKT[852]-1*work.d[372]*work.L[328];
  residual += temp*temp;

  temp = work.KKT[892]-1*work.d[380]*work.L[352];
  residual += temp*temp;

  temp = work.KKT[931]-1*work.d[388]*work.L[377];
  residual += temp*temp;

  temp = work.KKT[969]-1*work.d[396]*work.L[403];
  residual += temp*temp;

  temp = work.KKT[1006]-1*work.d[404]*work.L[430];
  residual += temp*temp;

  temp = work.KKT[1042]-1*work.d[412]*work.L[458];
  residual += temp*temp;

  temp = work.KKT[1077]-1*work.d[420]*work.L[487];
  residual += temp*temp;

  temp = work.KKT[1111]-1*work.d[428]*work.L[517];
  residual += temp*temp;

  temp = work.KKT[1144]-1*work.d[436]*work.L[548];
  residual += temp*temp;

  temp = work.KKT[1176]-1*work.d[444]*work.L[580];
  residual += temp*temp;

  temp = work.KKT[1207]-1*work.d[452]*work.L[613];
  residual += temp*temp;

  temp = work.KKT[1237]-1*work.d[460]*work.L[647];
  residual += temp*temp;

  temp = work.KKT[1266]-1*work.d[468]*work.L[682];
  residual += temp*temp;

  temp = work.KKT[1294]-1*work.d[476]*work.L[718];
  residual += temp*temp;

  temp = work.KKT[1321]-1*work.d[484]*work.L[755];
  residual += temp*temp;

  temp = work.KKT[1347]-1*work.d[492]*work.L[793];
  residual += temp*temp;

  temp = work.KKT[1372]-1*work.d[500]*work.L[832];
  residual += temp*temp;

  temp = work.KKT[1396]-1*work.d[508]*work.L[872];
  residual += temp*temp;

  temp = work.KKT[1419]-1*work.d[516]*work.L[913];
  residual += temp*temp;

  temp = work.KKT[1441]-1*work.d[524]*work.L[955];
  residual += temp*temp;

  temp = work.KKT[1462]-1*work.d[532]*work.L[998];
  residual += temp*temp;

  temp = work.KKT[1482]-1*work.d[540]*work.L[1042];
  residual += temp*temp;

  temp = work.KKT[1501]-1*work.d[548]*work.L[1087];
  residual += temp*temp;

  temp = work.KKT[1519]-1*work.d[556]*work.L[1133];
  residual += temp*temp;

  temp = work.KKT[1540]-1*work.d[566]*work.L[1212];
  residual += temp*temp;

  temp = work.KKT[638]-1*work.d[333]*work.L[220];
  residual += temp*temp;

  temp = work.KKT[683]-1*work.d[341]*work.L[239];
  residual += temp*temp;

  temp = work.KKT[727]-1*work.d[349]*work.L[259];
  residual += temp*temp;

  temp = work.KKT[770]-1*work.d[357]*work.L[280];
  residual += temp*temp;

  temp = work.KKT[812]-1*work.d[365]*work.L[302];
  residual += temp*temp;

  temp = work.KKT[853]-1*work.d[373]*work.L[325];
  residual += temp*temp;

  temp = work.KKT[893]-1*work.d[381]*work.L[349];
  residual += temp*temp;

  temp = work.KKT[932]-1*work.d[389]*work.L[374];
  residual += temp*temp;

  temp = work.KKT[970]-1*work.d[397]*work.L[400];
  residual += temp*temp;

  temp = work.KKT[1007]-1*work.d[405]*work.L[427];
  residual += temp*temp;

  temp = work.KKT[1043]-1*work.d[413]*work.L[455];
  residual += temp*temp;

  temp = work.KKT[1078]-1*work.d[421]*work.L[484];
  residual += temp*temp;

  temp = work.KKT[1112]-1*work.d[429]*work.L[514];
  residual += temp*temp;

  temp = work.KKT[1145]-1*work.d[437]*work.L[545];
  residual += temp*temp;

  temp = work.KKT[1177]-1*work.d[445]*work.L[577];
  residual += temp*temp;

  temp = work.KKT[1208]-1*work.d[453]*work.L[610];
  residual += temp*temp;

  temp = work.KKT[1238]-1*work.d[461]*work.L[644];
  residual += temp*temp;

  temp = work.KKT[1267]-1*work.d[469]*work.L[679];
  residual += temp*temp;

  temp = work.KKT[1295]-1*work.d[477]*work.L[715];
  residual += temp*temp;

  temp = work.KKT[1322]-1*work.d[485]*work.L[752];
  residual += temp*temp;

  temp = work.KKT[1348]-1*work.d[493]*work.L[790];
  residual += temp*temp;

  temp = work.KKT[1373]-1*work.d[501]*work.L[829];
  residual += temp*temp;

  temp = work.KKT[1397]-1*work.d[509]*work.L[869];
  residual += temp*temp;

  temp = work.KKT[1420]-1*work.d[517]*work.L[910];
  residual += temp*temp;

  temp = work.KKT[1442]-1*work.d[525]*work.L[952];
  residual += temp*temp;

  temp = work.KKT[1463]-1*work.d[533]*work.L[995];
  residual += temp*temp;

  temp = work.KKT[1483]-1*work.d[541]*work.L[1039];
  residual += temp*temp;

  temp = work.KKT[1502]-1*work.d[549]*work.L[1084];
  residual += temp*temp;

  temp = work.KKT[1520]-1*work.d[557]*work.L[1130];
  residual += temp*temp;

  temp = work.KKT[1541]-1*work.d[567]*work.L[1208];
  residual += temp*temp;

  temp = work.KKT[639]-1*work.d[333]*work.L[224];
  residual += temp*temp;

  temp = work.KKT[684]-1*work.d[341]*work.L[243];
  residual += temp*temp;

  temp = work.KKT[728]-1*work.d[349]*work.L[263];
  residual += temp*temp;

  temp = work.KKT[771]-1*work.d[357]*work.L[284];
  residual += temp*temp;

  temp = work.KKT[813]-1*work.d[365]*work.L[306];
  residual += temp*temp;

  temp = work.KKT[854]-1*work.d[373]*work.L[329];
  residual += temp*temp;

  temp = work.KKT[894]-1*work.d[381]*work.L[353];
  residual += temp*temp;

  temp = work.KKT[933]-1*work.d[389]*work.L[378];
  residual += temp*temp;

  temp = work.KKT[971]-1*work.d[397]*work.L[404];
  residual += temp*temp;

  temp = work.KKT[1008]-1*work.d[405]*work.L[431];
  residual += temp*temp;

  temp = work.KKT[1044]-1*work.d[413]*work.L[459];
  residual += temp*temp;

  temp = work.KKT[1079]-1*work.d[421]*work.L[488];
  residual += temp*temp;

  temp = work.KKT[1113]-1*work.d[429]*work.L[518];
  residual += temp*temp;

  temp = work.KKT[1146]-1*work.d[437]*work.L[549];
  residual += temp*temp;

  temp = work.KKT[1178]-1*work.d[445]*work.L[581];
  residual += temp*temp;

  temp = work.KKT[1209]-1*work.d[453]*work.L[614];
  residual += temp*temp;

  temp = work.KKT[1239]-1*work.d[461]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[1268]-1*work.d[469]*work.L[683];
  residual += temp*temp;

  temp = work.KKT[1296]-1*work.d[477]*work.L[719];
  residual += temp*temp;

  temp = work.KKT[1323]-1*work.d[485]*work.L[756];
  residual += temp*temp;

  temp = work.KKT[1349]-1*work.d[493]*work.L[794];
  residual += temp*temp;

  temp = work.KKT[1374]-1*work.d[501]*work.L[833];
  residual += temp*temp;

  temp = work.KKT[1398]-1*work.d[509]*work.L[873];
  residual += temp*temp;

  temp = work.KKT[1421]-1*work.d[517]*work.L[914];
  residual += temp*temp;

  temp = work.KKT[1443]-1*work.d[525]*work.L[956];
  residual += temp*temp;

  temp = work.KKT[1464]-1*work.d[533]*work.L[999];
  residual += temp*temp;

  temp = work.KKT[1484]-1*work.d[541]*work.L[1043];
  residual += temp*temp;

  temp = work.KKT[1503]-1*work.d[549]*work.L[1088];
  residual += temp*temp;

  temp = work.KKT[1521]-1*work.d[557]*work.L[1134];
  residual += temp*temp;

  temp = work.KKT[1542]-1*work.d[567]*work.L[1213];
  residual += temp*temp;

  return residual;
}

void matrix_multiply(double *result, double *source) {
  /* Finds result = A*source. */

  result[0] = work.KKT[301]*source[330]+work.KKT[300]*source[360];
  result[1] = work.KKT[304]*source[331]+work.KKT[303]*source[361];
  result[2] = work.KKT[307]*source[332]+work.KKT[306]*source[362];
  result[3] = work.KKT[310]*source[333]+work.KKT[309]*source[363];
  result[4] = work.KKT[313]*source[334]+work.KKT[312]*source[364];
  result[5] = work.KKT[316]*source[335]+work.KKT[315]*source[365];
  result[6] = work.KKT[319]*source[336]+work.KKT[318]*source[366];
  result[7] = work.KKT[322]*source[337]+work.KKT[321]*source[367];
  result[8] = work.KKT[325]*source[338]+work.KKT[324]*source[368];
  result[9] = work.KKT[328]*source[339]+work.KKT[327]*source[369];
  result[10] = work.KKT[331]*source[340]+work.KKT[330]*source[370];
  result[11] = work.KKT[334]*source[341]+work.KKT[333]*source[371];
  result[12] = work.KKT[337]*source[342]+work.KKT[336]*source[372];
  result[13] = work.KKT[340]*source[343]+work.KKT[339]*source[373];
  result[14] = work.KKT[343]*source[344]+work.KKT[342]*source[374];
  result[15] = work.KKT[346]*source[345]+work.KKT[345]*source[375];
  result[16] = work.KKT[349]*source[346]+work.KKT[348]*source[376];
  result[17] = work.KKT[352]*source[347]+work.KKT[351]*source[377];
  result[18] = work.KKT[355]*source[348]+work.KKT[354]*source[378];
  result[19] = work.KKT[358]*source[349]+work.KKT[357]*source[379];
  result[20] = work.KKT[361]*source[350]+work.KKT[360]*source[380];
  result[21] = work.KKT[364]*source[351]+work.KKT[363]*source[381];
  result[22] = work.KKT[367]*source[352]+work.KKT[366]*source[382];
  result[23] = work.KKT[370]*source[353]+work.KKT[369]*source[383];
  result[24] = work.KKT[373]*source[354]+work.KKT[372]*source[384];
  result[25] = work.KKT[376]*source[355]+work.KKT[375]*source[385];
  result[26] = work.KKT[379]*source[356]+work.KKT[378]*source[386];
  result[27] = work.KKT[382]*source[357]+work.KKT[381]*source[387];
  result[28] = work.KKT[385]*source[358]+work.KKT[384]*source[388];
  result[29] = work.KKT[388]*source[359]+work.KKT[387]*source[389];
  result[30] = work.KKT[390]*source[390]+work.KKT[391]*source[420];
  result[31] = work.KKT[396]*source[391]+work.KKT[397]*source[421];
  result[32] = work.KKT[402]*source[392]+work.KKT[403]*source[422];
  result[33] = work.KKT[408]*source[393]+work.KKT[409]*source[423];
  result[34] = work.KKT[414]*source[394]+work.KKT[415]*source[424];
  result[35] = work.KKT[420]*source[395]+work.KKT[421]*source[425];
  result[36] = work.KKT[426]*source[396]+work.KKT[427]*source[426];
  result[37] = work.KKT[432]*source[397]+work.KKT[433]*source[427];
  result[38] = work.KKT[438]*source[398]+work.KKT[439]*source[428];
  result[39] = work.KKT[444]*source[399]+work.KKT[445]*source[429];
  result[40] = work.KKT[450]*source[400]+work.KKT[451]*source[430];
  result[41] = work.KKT[456]*source[401]+work.KKT[457]*source[431];
  result[42] = work.KKT[462]*source[402]+work.KKT[463]*source[432];
  result[43] = work.KKT[468]*source[403]+work.KKT[469]*source[433];
  result[44] = work.KKT[474]*source[404]+work.KKT[475]*source[434];
  result[45] = work.KKT[480]*source[405]+work.KKT[481]*source[435];
  result[46] = work.KKT[486]*source[406]+work.KKT[487]*source[436];
  result[47] = work.KKT[492]*source[407]+work.KKT[493]*source[437];
  result[48] = work.KKT[498]*source[408]+work.KKT[499]*source[438];
  result[49] = work.KKT[504]*source[409]+work.KKT[505]*source[439];
  result[50] = work.KKT[510]*source[410]+work.KKT[511]*source[440];
  result[51] = work.KKT[516]*source[411]+work.KKT[517]*source[441];
  result[52] = work.KKT[522]*source[412]+work.KKT[523]*source[442];
  result[53] = work.KKT[528]*source[413]+work.KKT[529]*source[443];
  result[54] = work.KKT[534]*source[414]+work.KKT[535]*source[444];
  result[55] = work.KKT[540]*source[415]+work.KKT[541]*source[445];
  result[56] = work.KKT[546]*source[416]+work.KKT[547]*source[446];
  result[57] = work.KKT[552]*source[417]+work.KKT[553]*source[447];
  result[58] = work.KKT[558]*source[418]+work.KKT[559]*source[448];
  result[59] = work.KKT[564]*source[419]+work.KKT[565]*source[449];
  result[60] = work.KKT[645]*source[60]+work.KKT[646]*source[61]+work.KKT[647]*source[62]+work.KKT[648]*source[63]+work.KKT[649]*source[64]+work.KKT[650]*source[65]+work.KKT[651]*source[66]+work.KKT[652]*source[67]+work.KKT[653]*source[68]+work.KKT[654]*source[69]+work.KKT[655]*source[70]+work.KKT[656]*source[71]+work.KKT[657]*source[72]+work.KKT[658]*source[73]+work.KKT[659]*source[74]+work.KKT[660]*source[75]+work.KKT[661]*source[76]+work.KKT[662]*source[77]+work.KKT[663]*source[78]+work.KKT[664]*source[79]+work.KKT[665]*source[80]+work.KKT[666]*source[81]+work.KKT[667]*source[82]+work.KKT[668]*source[83]+work.KKT[669]*source[84]+work.KKT[670]*source[85]+work.KKT[671]*source[86]+work.KKT[672]*source[87]+work.KKT[673]*source[88]+work.KKT[674]*source[89]+work.KKT[644]*source[480];
  result[61] = work.KKT[646]*source[60]+work.KKT[690]*source[61]+work.KKT[691]*source[62]+work.KKT[692]*source[63]+work.KKT[693]*source[64]+work.KKT[694]*source[65]+work.KKT[695]*source[66]+work.KKT[696]*source[67]+work.KKT[697]*source[68]+work.KKT[698]*source[69]+work.KKT[699]*source[70]+work.KKT[700]*source[71]+work.KKT[701]*source[72]+work.KKT[702]*source[73]+work.KKT[703]*source[74]+work.KKT[704]*source[75]+work.KKT[705]*source[76]+work.KKT[706]*source[77]+work.KKT[707]*source[78]+work.KKT[708]*source[79]+work.KKT[709]*source[80]+work.KKT[710]*source[81]+work.KKT[711]*source[82]+work.KKT[712]*source[83]+work.KKT[713]*source[84]+work.KKT[714]*source[85]+work.KKT[715]*source[86]+work.KKT[716]*source[87]+work.KKT[717]*source[88]+work.KKT[718]*source[89]+work.KKT[689]*source[481];
  result[62] = work.KKT[647]*source[60]+work.KKT[691]*source[61]+work.KKT[734]*source[62]+work.KKT[735]*source[63]+work.KKT[736]*source[64]+work.KKT[737]*source[65]+work.KKT[738]*source[66]+work.KKT[739]*source[67]+work.KKT[740]*source[68]+work.KKT[741]*source[69]+work.KKT[742]*source[70]+work.KKT[743]*source[71]+work.KKT[744]*source[72]+work.KKT[745]*source[73]+work.KKT[746]*source[74]+work.KKT[747]*source[75]+work.KKT[748]*source[76]+work.KKT[749]*source[77]+work.KKT[750]*source[78]+work.KKT[751]*source[79]+work.KKT[752]*source[80]+work.KKT[753]*source[81]+work.KKT[754]*source[82]+work.KKT[755]*source[83]+work.KKT[756]*source[84]+work.KKT[757]*source[85]+work.KKT[758]*source[86]+work.KKT[759]*source[87]+work.KKT[760]*source[88]+work.KKT[761]*source[89]+work.KKT[733]*source[482];
  result[63] = work.KKT[648]*source[60]+work.KKT[692]*source[61]+work.KKT[735]*source[62]+work.KKT[777]*source[63]+work.KKT[778]*source[64]+work.KKT[779]*source[65]+work.KKT[780]*source[66]+work.KKT[781]*source[67]+work.KKT[782]*source[68]+work.KKT[783]*source[69]+work.KKT[784]*source[70]+work.KKT[785]*source[71]+work.KKT[786]*source[72]+work.KKT[787]*source[73]+work.KKT[788]*source[74]+work.KKT[789]*source[75]+work.KKT[790]*source[76]+work.KKT[791]*source[77]+work.KKT[792]*source[78]+work.KKT[793]*source[79]+work.KKT[794]*source[80]+work.KKT[795]*source[81]+work.KKT[796]*source[82]+work.KKT[797]*source[83]+work.KKT[798]*source[84]+work.KKT[799]*source[85]+work.KKT[800]*source[86]+work.KKT[801]*source[87]+work.KKT[802]*source[88]+work.KKT[803]*source[89]+work.KKT[776]*source[483];
  result[64] = work.KKT[649]*source[60]+work.KKT[693]*source[61]+work.KKT[736]*source[62]+work.KKT[778]*source[63]+work.KKT[819]*source[64]+work.KKT[820]*source[65]+work.KKT[821]*source[66]+work.KKT[822]*source[67]+work.KKT[823]*source[68]+work.KKT[824]*source[69]+work.KKT[825]*source[70]+work.KKT[826]*source[71]+work.KKT[827]*source[72]+work.KKT[828]*source[73]+work.KKT[829]*source[74]+work.KKT[830]*source[75]+work.KKT[831]*source[76]+work.KKT[832]*source[77]+work.KKT[833]*source[78]+work.KKT[834]*source[79]+work.KKT[835]*source[80]+work.KKT[836]*source[81]+work.KKT[837]*source[82]+work.KKT[838]*source[83]+work.KKT[839]*source[84]+work.KKT[840]*source[85]+work.KKT[841]*source[86]+work.KKT[842]*source[87]+work.KKT[843]*source[88]+work.KKT[844]*source[89]+work.KKT[818]*source[484];
  result[65] = work.KKT[650]*source[60]+work.KKT[694]*source[61]+work.KKT[737]*source[62]+work.KKT[779]*source[63]+work.KKT[820]*source[64]+work.KKT[860]*source[65]+work.KKT[861]*source[66]+work.KKT[862]*source[67]+work.KKT[863]*source[68]+work.KKT[864]*source[69]+work.KKT[865]*source[70]+work.KKT[866]*source[71]+work.KKT[867]*source[72]+work.KKT[868]*source[73]+work.KKT[869]*source[74]+work.KKT[870]*source[75]+work.KKT[871]*source[76]+work.KKT[872]*source[77]+work.KKT[873]*source[78]+work.KKT[874]*source[79]+work.KKT[875]*source[80]+work.KKT[876]*source[81]+work.KKT[877]*source[82]+work.KKT[878]*source[83]+work.KKT[879]*source[84]+work.KKT[880]*source[85]+work.KKT[881]*source[86]+work.KKT[882]*source[87]+work.KKT[883]*source[88]+work.KKT[884]*source[89]+work.KKT[859]*source[485];
  result[66] = work.KKT[651]*source[60]+work.KKT[695]*source[61]+work.KKT[738]*source[62]+work.KKT[780]*source[63]+work.KKT[821]*source[64]+work.KKT[861]*source[65]+work.KKT[900]*source[66]+work.KKT[901]*source[67]+work.KKT[902]*source[68]+work.KKT[903]*source[69]+work.KKT[904]*source[70]+work.KKT[905]*source[71]+work.KKT[906]*source[72]+work.KKT[907]*source[73]+work.KKT[908]*source[74]+work.KKT[909]*source[75]+work.KKT[910]*source[76]+work.KKT[911]*source[77]+work.KKT[912]*source[78]+work.KKT[913]*source[79]+work.KKT[914]*source[80]+work.KKT[915]*source[81]+work.KKT[916]*source[82]+work.KKT[917]*source[83]+work.KKT[918]*source[84]+work.KKT[919]*source[85]+work.KKT[920]*source[86]+work.KKT[921]*source[87]+work.KKT[922]*source[88]+work.KKT[923]*source[89]+work.KKT[899]*source[486];
  result[67] = work.KKT[652]*source[60]+work.KKT[696]*source[61]+work.KKT[739]*source[62]+work.KKT[781]*source[63]+work.KKT[822]*source[64]+work.KKT[862]*source[65]+work.KKT[901]*source[66]+work.KKT[939]*source[67]+work.KKT[940]*source[68]+work.KKT[941]*source[69]+work.KKT[942]*source[70]+work.KKT[943]*source[71]+work.KKT[944]*source[72]+work.KKT[945]*source[73]+work.KKT[946]*source[74]+work.KKT[947]*source[75]+work.KKT[948]*source[76]+work.KKT[949]*source[77]+work.KKT[950]*source[78]+work.KKT[951]*source[79]+work.KKT[952]*source[80]+work.KKT[953]*source[81]+work.KKT[954]*source[82]+work.KKT[955]*source[83]+work.KKT[956]*source[84]+work.KKT[957]*source[85]+work.KKT[958]*source[86]+work.KKT[959]*source[87]+work.KKT[960]*source[88]+work.KKT[961]*source[89]+work.KKT[938]*source[487];
  result[68] = work.KKT[653]*source[60]+work.KKT[697]*source[61]+work.KKT[740]*source[62]+work.KKT[782]*source[63]+work.KKT[823]*source[64]+work.KKT[863]*source[65]+work.KKT[902]*source[66]+work.KKT[940]*source[67]+work.KKT[977]*source[68]+work.KKT[978]*source[69]+work.KKT[979]*source[70]+work.KKT[980]*source[71]+work.KKT[981]*source[72]+work.KKT[982]*source[73]+work.KKT[983]*source[74]+work.KKT[984]*source[75]+work.KKT[985]*source[76]+work.KKT[986]*source[77]+work.KKT[987]*source[78]+work.KKT[988]*source[79]+work.KKT[989]*source[80]+work.KKT[990]*source[81]+work.KKT[991]*source[82]+work.KKT[992]*source[83]+work.KKT[993]*source[84]+work.KKT[994]*source[85]+work.KKT[995]*source[86]+work.KKT[996]*source[87]+work.KKT[997]*source[88]+work.KKT[998]*source[89]+work.KKT[976]*source[488];
  result[69] = work.KKT[654]*source[60]+work.KKT[698]*source[61]+work.KKT[741]*source[62]+work.KKT[783]*source[63]+work.KKT[824]*source[64]+work.KKT[864]*source[65]+work.KKT[903]*source[66]+work.KKT[941]*source[67]+work.KKT[978]*source[68]+work.KKT[1014]*source[69]+work.KKT[1015]*source[70]+work.KKT[1016]*source[71]+work.KKT[1017]*source[72]+work.KKT[1018]*source[73]+work.KKT[1019]*source[74]+work.KKT[1020]*source[75]+work.KKT[1021]*source[76]+work.KKT[1022]*source[77]+work.KKT[1023]*source[78]+work.KKT[1024]*source[79]+work.KKT[1025]*source[80]+work.KKT[1026]*source[81]+work.KKT[1027]*source[82]+work.KKT[1028]*source[83]+work.KKT[1029]*source[84]+work.KKT[1030]*source[85]+work.KKT[1031]*source[86]+work.KKT[1032]*source[87]+work.KKT[1033]*source[88]+work.KKT[1034]*source[89]+work.KKT[1013]*source[489];
  result[70] = work.KKT[655]*source[60]+work.KKT[699]*source[61]+work.KKT[742]*source[62]+work.KKT[784]*source[63]+work.KKT[825]*source[64]+work.KKT[865]*source[65]+work.KKT[904]*source[66]+work.KKT[942]*source[67]+work.KKT[979]*source[68]+work.KKT[1015]*source[69]+work.KKT[1050]*source[70]+work.KKT[1051]*source[71]+work.KKT[1052]*source[72]+work.KKT[1053]*source[73]+work.KKT[1054]*source[74]+work.KKT[1055]*source[75]+work.KKT[1056]*source[76]+work.KKT[1057]*source[77]+work.KKT[1058]*source[78]+work.KKT[1059]*source[79]+work.KKT[1060]*source[80]+work.KKT[1061]*source[81]+work.KKT[1062]*source[82]+work.KKT[1063]*source[83]+work.KKT[1064]*source[84]+work.KKT[1065]*source[85]+work.KKT[1066]*source[86]+work.KKT[1067]*source[87]+work.KKT[1068]*source[88]+work.KKT[1069]*source[89]+work.KKT[1049]*source[490];
  result[71] = work.KKT[656]*source[60]+work.KKT[700]*source[61]+work.KKT[743]*source[62]+work.KKT[785]*source[63]+work.KKT[826]*source[64]+work.KKT[866]*source[65]+work.KKT[905]*source[66]+work.KKT[943]*source[67]+work.KKT[980]*source[68]+work.KKT[1016]*source[69]+work.KKT[1051]*source[70]+work.KKT[1085]*source[71]+work.KKT[1086]*source[72]+work.KKT[1087]*source[73]+work.KKT[1088]*source[74]+work.KKT[1089]*source[75]+work.KKT[1090]*source[76]+work.KKT[1091]*source[77]+work.KKT[1092]*source[78]+work.KKT[1093]*source[79]+work.KKT[1094]*source[80]+work.KKT[1095]*source[81]+work.KKT[1096]*source[82]+work.KKT[1097]*source[83]+work.KKT[1098]*source[84]+work.KKT[1099]*source[85]+work.KKT[1100]*source[86]+work.KKT[1101]*source[87]+work.KKT[1102]*source[88]+work.KKT[1103]*source[89]+work.KKT[1084]*source[491];
  result[72] = work.KKT[657]*source[60]+work.KKT[701]*source[61]+work.KKT[744]*source[62]+work.KKT[786]*source[63]+work.KKT[827]*source[64]+work.KKT[867]*source[65]+work.KKT[906]*source[66]+work.KKT[944]*source[67]+work.KKT[981]*source[68]+work.KKT[1017]*source[69]+work.KKT[1052]*source[70]+work.KKT[1086]*source[71]+work.KKT[1119]*source[72]+work.KKT[1120]*source[73]+work.KKT[1121]*source[74]+work.KKT[1122]*source[75]+work.KKT[1123]*source[76]+work.KKT[1124]*source[77]+work.KKT[1125]*source[78]+work.KKT[1126]*source[79]+work.KKT[1127]*source[80]+work.KKT[1128]*source[81]+work.KKT[1129]*source[82]+work.KKT[1130]*source[83]+work.KKT[1131]*source[84]+work.KKT[1132]*source[85]+work.KKT[1133]*source[86]+work.KKT[1134]*source[87]+work.KKT[1135]*source[88]+work.KKT[1136]*source[89]+work.KKT[1118]*source[492];
  result[73] = work.KKT[658]*source[60]+work.KKT[702]*source[61]+work.KKT[745]*source[62]+work.KKT[787]*source[63]+work.KKT[828]*source[64]+work.KKT[868]*source[65]+work.KKT[907]*source[66]+work.KKT[945]*source[67]+work.KKT[982]*source[68]+work.KKT[1018]*source[69]+work.KKT[1053]*source[70]+work.KKT[1087]*source[71]+work.KKT[1120]*source[72]+work.KKT[1152]*source[73]+work.KKT[1153]*source[74]+work.KKT[1154]*source[75]+work.KKT[1155]*source[76]+work.KKT[1156]*source[77]+work.KKT[1157]*source[78]+work.KKT[1158]*source[79]+work.KKT[1159]*source[80]+work.KKT[1160]*source[81]+work.KKT[1161]*source[82]+work.KKT[1162]*source[83]+work.KKT[1163]*source[84]+work.KKT[1164]*source[85]+work.KKT[1165]*source[86]+work.KKT[1166]*source[87]+work.KKT[1167]*source[88]+work.KKT[1168]*source[89]+work.KKT[1151]*source[493];
  result[74] = work.KKT[659]*source[60]+work.KKT[703]*source[61]+work.KKT[746]*source[62]+work.KKT[788]*source[63]+work.KKT[829]*source[64]+work.KKT[869]*source[65]+work.KKT[908]*source[66]+work.KKT[946]*source[67]+work.KKT[983]*source[68]+work.KKT[1019]*source[69]+work.KKT[1054]*source[70]+work.KKT[1088]*source[71]+work.KKT[1121]*source[72]+work.KKT[1153]*source[73]+work.KKT[1184]*source[74]+work.KKT[1185]*source[75]+work.KKT[1186]*source[76]+work.KKT[1187]*source[77]+work.KKT[1188]*source[78]+work.KKT[1189]*source[79]+work.KKT[1190]*source[80]+work.KKT[1191]*source[81]+work.KKT[1192]*source[82]+work.KKT[1193]*source[83]+work.KKT[1194]*source[84]+work.KKT[1195]*source[85]+work.KKT[1196]*source[86]+work.KKT[1197]*source[87]+work.KKT[1198]*source[88]+work.KKT[1199]*source[89]+work.KKT[1183]*source[494];
  result[75] = work.KKT[660]*source[60]+work.KKT[704]*source[61]+work.KKT[747]*source[62]+work.KKT[789]*source[63]+work.KKT[830]*source[64]+work.KKT[870]*source[65]+work.KKT[909]*source[66]+work.KKT[947]*source[67]+work.KKT[984]*source[68]+work.KKT[1020]*source[69]+work.KKT[1055]*source[70]+work.KKT[1089]*source[71]+work.KKT[1122]*source[72]+work.KKT[1154]*source[73]+work.KKT[1185]*source[74]+work.KKT[1215]*source[75]+work.KKT[1216]*source[76]+work.KKT[1217]*source[77]+work.KKT[1218]*source[78]+work.KKT[1219]*source[79]+work.KKT[1220]*source[80]+work.KKT[1221]*source[81]+work.KKT[1222]*source[82]+work.KKT[1223]*source[83]+work.KKT[1224]*source[84]+work.KKT[1225]*source[85]+work.KKT[1226]*source[86]+work.KKT[1227]*source[87]+work.KKT[1228]*source[88]+work.KKT[1229]*source[89]+work.KKT[1214]*source[495];
  result[76] = work.KKT[661]*source[60]+work.KKT[705]*source[61]+work.KKT[748]*source[62]+work.KKT[790]*source[63]+work.KKT[831]*source[64]+work.KKT[871]*source[65]+work.KKT[910]*source[66]+work.KKT[948]*source[67]+work.KKT[985]*source[68]+work.KKT[1021]*source[69]+work.KKT[1056]*source[70]+work.KKT[1090]*source[71]+work.KKT[1123]*source[72]+work.KKT[1155]*source[73]+work.KKT[1186]*source[74]+work.KKT[1216]*source[75]+work.KKT[1245]*source[76]+work.KKT[1246]*source[77]+work.KKT[1247]*source[78]+work.KKT[1248]*source[79]+work.KKT[1249]*source[80]+work.KKT[1250]*source[81]+work.KKT[1251]*source[82]+work.KKT[1252]*source[83]+work.KKT[1253]*source[84]+work.KKT[1254]*source[85]+work.KKT[1255]*source[86]+work.KKT[1256]*source[87]+work.KKT[1257]*source[88]+work.KKT[1258]*source[89]+work.KKT[1244]*source[496];
  result[77] = work.KKT[662]*source[60]+work.KKT[706]*source[61]+work.KKT[749]*source[62]+work.KKT[791]*source[63]+work.KKT[832]*source[64]+work.KKT[872]*source[65]+work.KKT[911]*source[66]+work.KKT[949]*source[67]+work.KKT[986]*source[68]+work.KKT[1022]*source[69]+work.KKT[1057]*source[70]+work.KKT[1091]*source[71]+work.KKT[1124]*source[72]+work.KKT[1156]*source[73]+work.KKT[1187]*source[74]+work.KKT[1217]*source[75]+work.KKT[1246]*source[76]+work.KKT[1274]*source[77]+work.KKT[1275]*source[78]+work.KKT[1276]*source[79]+work.KKT[1277]*source[80]+work.KKT[1278]*source[81]+work.KKT[1279]*source[82]+work.KKT[1280]*source[83]+work.KKT[1281]*source[84]+work.KKT[1282]*source[85]+work.KKT[1283]*source[86]+work.KKT[1284]*source[87]+work.KKT[1285]*source[88]+work.KKT[1286]*source[89]+work.KKT[1273]*source[497];
  result[78] = work.KKT[663]*source[60]+work.KKT[707]*source[61]+work.KKT[750]*source[62]+work.KKT[792]*source[63]+work.KKT[833]*source[64]+work.KKT[873]*source[65]+work.KKT[912]*source[66]+work.KKT[950]*source[67]+work.KKT[987]*source[68]+work.KKT[1023]*source[69]+work.KKT[1058]*source[70]+work.KKT[1092]*source[71]+work.KKT[1125]*source[72]+work.KKT[1157]*source[73]+work.KKT[1188]*source[74]+work.KKT[1218]*source[75]+work.KKT[1247]*source[76]+work.KKT[1275]*source[77]+work.KKT[1302]*source[78]+work.KKT[1303]*source[79]+work.KKT[1304]*source[80]+work.KKT[1305]*source[81]+work.KKT[1306]*source[82]+work.KKT[1307]*source[83]+work.KKT[1308]*source[84]+work.KKT[1309]*source[85]+work.KKT[1310]*source[86]+work.KKT[1311]*source[87]+work.KKT[1312]*source[88]+work.KKT[1313]*source[89]+work.KKT[1301]*source[498];
  result[79] = work.KKT[664]*source[60]+work.KKT[708]*source[61]+work.KKT[751]*source[62]+work.KKT[793]*source[63]+work.KKT[834]*source[64]+work.KKT[874]*source[65]+work.KKT[913]*source[66]+work.KKT[951]*source[67]+work.KKT[988]*source[68]+work.KKT[1024]*source[69]+work.KKT[1059]*source[70]+work.KKT[1093]*source[71]+work.KKT[1126]*source[72]+work.KKT[1158]*source[73]+work.KKT[1189]*source[74]+work.KKT[1219]*source[75]+work.KKT[1248]*source[76]+work.KKT[1276]*source[77]+work.KKT[1303]*source[78]+work.KKT[1329]*source[79]+work.KKT[1330]*source[80]+work.KKT[1331]*source[81]+work.KKT[1332]*source[82]+work.KKT[1333]*source[83]+work.KKT[1334]*source[84]+work.KKT[1335]*source[85]+work.KKT[1336]*source[86]+work.KKT[1337]*source[87]+work.KKT[1338]*source[88]+work.KKT[1339]*source[89]+work.KKT[1328]*source[499];
  result[80] = work.KKT[665]*source[60]+work.KKT[709]*source[61]+work.KKT[752]*source[62]+work.KKT[794]*source[63]+work.KKT[835]*source[64]+work.KKT[875]*source[65]+work.KKT[914]*source[66]+work.KKT[952]*source[67]+work.KKT[989]*source[68]+work.KKT[1025]*source[69]+work.KKT[1060]*source[70]+work.KKT[1094]*source[71]+work.KKT[1127]*source[72]+work.KKT[1159]*source[73]+work.KKT[1190]*source[74]+work.KKT[1220]*source[75]+work.KKT[1249]*source[76]+work.KKT[1277]*source[77]+work.KKT[1304]*source[78]+work.KKT[1330]*source[79]+work.KKT[1355]*source[80]+work.KKT[1356]*source[81]+work.KKT[1357]*source[82]+work.KKT[1358]*source[83]+work.KKT[1359]*source[84]+work.KKT[1360]*source[85]+work.KKT[1361]*source[86]+work.KKT[1362]*source[87]+work.KKT[1363]*source[88]+work.KKT[1364]*source[89]+work.KKT[1354]*source[500];
  result[81] = work.KKT[666]*source[60]+work.KKT[710]*source[61]+work.KKT[753]*source[62]+work.KKT[795]*source[63]+work.KKT[836]*source[64]+work.KKT[876]*source[65]+work.KKT[915]*source[66]+work.KKT[953]*source[67]+work.KKT[990]*source[68]+work.KKT[1026]*source[69]+work.KKT[1061]*source[70]+work.KKT[1095]*source[71]+work.KKT[1128]*source[72]+work.KKT[1160]*source[73]+work.KKT[1191]*source[74]+work.KKT[1221]*source[75]+work.KKT[1250]*source[76]+work.KKT[1278]*source[77]+work.KKT[1305]*source[78]+work.KKT[1331]*source[79]+work.KKT[1356]*source[80]+work.KKT[1380]*source[81]+work.KKT[1381]*source[82]+work.KKT[1382]*source[83]+work.KKT[1383]*source[84]+work.KKT[1384]*source[85]+work.KKT[1385]*source[86]+work.KKT[1386]*source[87]+work.KKT[1387]*source[88]+work.KKT[1388]*source[89]+work.KKT[1379]*source[501];
  result[82] = work.KKT[667]*source[60]+work.KKT[711]*source[61]+work.KKT[754]*source[62]+work.KKT[796]*source[63]+work.KKT[837]*source[64]+work.KKT[877]*source[65]+work.KKT[916]*source[66]+work.KKT[954]*source[67]+work.KKT[991]*source[68]+work.KKT[1027]*source[69]+work.KKT[1062]*source[70]+work.KKT[1096]*source[71]+work.KKT[1129]*source[72]+work.KKT[1161]*source[73]+work.KKT[1192]*source[74]+work.KKT[1222]*source[75]+work.KKT[1251]*source[76]+work.KKT[1279]*source[77]+work.KKT[1306]*source[78]+work.KKT[1332]*source[79]+work.KKT[1357]*source[80]+work.KKT[1381]*source[81]+work.KKT[1404]*source[82]+work.KKT[1405]*source[83]+work.KKT[1406]*source[84]+work.KKT[1407]*source[85]+work.KKT[1408]*source[86]+work.KKT[1409]*source[87]+work.KKT[1410]*source[88]+work.KKT[1411]*source[89]+work.KKT[1403]*source[502];
  result[83] = work.KKT[668]*source[60]+work.KKT[712]*source[61]+work.KKT[755]*source[62]+work.KKT[797]*source[63]+work.KKT[838]*source[64]+work.KKT[878]*source[65]+work.KKT[917]*source[66]+work.KKT[955]*source[67]+work.KKT[992]*source[68]+work.KKT[1028]*source[69]+work.KKT[1063]*source[70]+work.KKT[1097]*source[71]+work.KKT[1130]*source[72]+work.KKT[1162]*source[73]+work.KKT[1193]*source[74]+work.KKT[1223]*source[75]+work.KKT[1252]*source[76]+work.KKT[1280]*source[77]+work.KKT[1307]*source[78]+work.KKT[1333]*source[79]+work.KKT[1358]*source[80]+work.KKT[1382]*source[81]+work.KKT[1405]*source[82]+work.KKT[1427]*source[83]+work.KKT[1428]*source[84]+work.KKT[1429]*source[85]+work.KKT[1430]*source[86]+work.KKT[1431]*source[87]+work.KKT[1432]*source[88]+work.KKT[1433]*source[89]+work.KKT[1426]*source[503];
  result[84] = work.KKT[669]*source[60]+work.KKT[713]*source[61]+work.KKT[756]*source[62]+work.KKT[798]*source[63]+work.KKT[839]*source[64]+work.KKT[879]*source[65]+work.KKT[918]*source[66]+work.KKT[956]*source[67]+work.KKT[993]*source[68]+work.KKT[1029]*source[69]+work.KKT[1064]*source[70]+work.KKT[1098]*source[71]+work.KKT[1131]*source[72]+work.KKT[1163]*source[73]+work.KKT[1194]*source[74]+work.KKT[1224]*source[75]+work.KKT[1253]*source[76]+work.KKT[1281]*source[77]+work.KKT[1308]*source[78]+work.KKT[1334]*source[79]+work.KKT[1359]*source[80]+work.KKT[1383]*source[81]+work.KKT[1406]*source[82]+work.KKT[1428]*source[83]+work.KKT[1449]*source[84]+work.KKT[1450]*source[85]+work.KKT[1451]*source[86]+work.KKT[1452]*source[87]+work.KKT[1453]*source[88]+work.KKT[1454]*source[89]+work.KKT[1448]*source[504];
  result[85] = work.KKT[670]*source[60]+work.KKT[714]*source[61]+work.KKT[757]*source[62]+work.KKT[799]*source[63]+work.KKT[840]*source[64]+work.KKT[880]*source[65]+work.KKT[919]*source[66]+work.KKT[957]*source[67]+work.KKT[994]*source[68]+work.KKT[1030]*source[69]+work.KKT[1065]*source[70]+work.KKT[1099]*source[71]+work.KKT[1132]*source[72]+work.KKT[1164]*source[73]+work.KKT[1195]*source[74]+work.KKT[1225]*source[75]+work.KKT[1254]*source[76]+work.KKT[1282]*source[77]+work.KKT[1309]*source[78]+work.KKT[1335]*source[79]+work.KKT[1360]*source[80]+work.KKT[1384]*source[81]+work.KKT[1407]*source[82]+work.KKT[1429]*source[83]+work.KKT[1450]*source[84]+work.KKT[1470]*source[85]+work.KKT[1471]*source[86]+work.KKT[1472]*source[87]+work.KKT[1473]*source[88]+work.KKT[1474]*source[89]+work.KKT[1469]*source[505];
  result[86] = work.KKT[671]*source[60]+work.KKT[715]*source[61]+work.KKT[758]*source[62]+work.KKT[800]*source[63]+work.KKT[841]*source[64]+work.KKT[881]*source[65]+work.KKT[920]*source[66]+work.KKT[958]*source[67]+work.KKT[995]*source[68]+work.KKT[1031]*source[69]+work.KKT[1066]*source[70]+work.KKT[1100]*source[71]+work.KKT[1133]*source[72]+work.KKT[1165]*source[73]+work.KKT[1196]*source[74]+work.KKT[1226]*source[75]+work.KKT[1255]*source[76]+work.KKT[1283]*source[77]+work.KKT[1310]*source[78]+work.KKT[1336]*source[79]+work.KKT[1361]*source[80]+work.KKT[1385]*source[81]+work.KKT[1408]*source[82]+work.KKT[1430]*source[83]+work.KKT[1451]*source[84]+work.KKT[1471]*source[85]+work.KKT[1490]*source[86]+work.KKT[1491]*source[87]+work.KKT[1492]*source[88]+work.KKT[1493]*source[89]+work.KKT[1489]*source[506];
  result[87] = work.KKT[672]*source[60]+work.KKT[716]*source[61]+work.KKT[759]*source[62]+work.KKT[801]*source[63]+work.KKT[842]*source[64]+work.KKT[882]*source[65]+work.KKT[921]*source[66]+work.KKT[959]*source[67]+work.KKT[996]*source[68]+work.KKT[1032]*source[69]+work.KKT[1067]*source[70]+work.KKT[1101]*source[71]+work.KKT[1134]*source[72]+work.KKT[1166]*source[73]+work.KKT[1197]*source[74]+work.KKT[1227]*source[75]+work.KKT[1256]*source[76]+work.KKT[1284]*source[77]+work.KKT[1311]*source[78]+work.KKT[1337]*source[79]+work.KKT[1362]*source[80]+work.KKT[1386]*source[81]+work.KKT[1409]*source[82]+work.KKT[1431]*source[83]+work.KKT[1452]*source[84]+work.KKT[1472]*source[85]+work.KKT[1491]*source[86]+work.KKT[1509]*source[87]+work.KKT[1510]*source[88]+work.KKT[1511]*source[89]+work.KKT[1508]*source[507];
  result[88] = work.KKT[673]*source[60]+work.KKT[717]*source[61]+work.KKT[760]*source[62]+work.KKT[802]*source[63]+work.KKT[843]*source[64]+work.KKT[883]*source[65]+work.KKT[922]*source[66]+work.KKT[960]*source[67]+work.KKT[997]*source[68]+work.KKT[1033]*source[69]+work.KKT[1068]*source[70]+work.KKT[1102]*source[71]+work.KKT[1135]*source[72]+work.KKT[1167]*source[73]+work.KKT[1198]*source[74]+work.KKT[1228]*source[75]+work.KKT[1257]*source[76]+work.KKT[1285]*source[77]+work.KKT[1312]*source[78]+work.KKT[1338]*source[79]+work.KKT[1363]*source[80]+work.KKT[1387]*source[81]+work.KKT[1410]*source[82]+work.KKT[1432]*source[83]+work.KKT[1453]*source[84]+work.KKT[1473]*source[85]+work.KKT[1492]*source[86]+work.KKT[1510]*source[87]+work.KKT[1527]*source[88]+work.KKT[1528]*source[89]+work.KKT[1526]*source[508];
  result[89] = work.KKT[674]*source[60]+work.KKT[718]*source[61]+work.KKT[761]*source[62]+work.KKT[803]*source[63]+work.KKT[844]*source[64]+work.KKT[884]*source[65]+work.KKT[923]*source[66]+work.KKT[961]*source[67]+work.KKT[998]*source[68]+work.KKT[1034]*source[69]+work.KKT[1069]*source[70]+work.KKT[1103]*source[71]+work.KKT[1136]*source[72]+work.KKT[1168]*source[73]+work.KKT[1199]*source[74]+work.KKT[1229]*source[75]+work.KKT[1258]*source[76]+work.KKT[1286]*source[77]+work.KKT[1313]*source[78]+work.KKT[1339]*source[79]+work.KKT[1364]*source[80]+work.KKT[1388]*source[81]+work.KKT[1411]*source[82]+work.KKT[1433]*source[83]+work.KKT[1454]*source[84]+work.KKT[1474]*source[85]+work.KKT[1493]*source[86]+work.KKT[1511]*source[87]+work.KKT[1528]*source[88]+work.KKT[1529]*source[89]+work.KKT[1530]*source[509];
  result[90] = work.KKT[570]*source[90]+work.KKT[571]*source[510];
  result[91] = work.KKT[572]*source[91]+work.KKT[573]*source[511];
  result[92] = work.KKT[574]*source[92]+work.KKT[575]*source[512];
  result[93] = work.KKT[576]*source[93]+work.KKT[577]*source[513];
  result[94] = work.KKT[578]*source[94]+work.KKT[579]*source[514];
  result[95] = work.KKT[580]*source[95]+work.KKT[581]*source[515];
  result[96] = work.KKT[582]*source[96]+work.KKT[583]*source[516];
  result[97] = work.KKT[584]*source[97]+work.KKT[585]*source[517];
  result[98] = work.KKT[586]*source[98]+work.KKT[587]*source[518];
  result[99] = work.KKT[588]*source[99]+work.KKT[589]*source[519];
  result[100] = work.KKT[590]*source[100]+work.KKT[591]*source[520];
  result[101] = work.KKT[592]*source[101]+work.KKT[593]*source[521];
  result[102] = work.KKT[594]*source[102]+work.KKT[595]*source[522];
  result[103] = work.KKT[596]*source[103]+work.KKT[597]*source[523];
  result[104] = work.KKT[598]*source[104]+work.KKT[599]*source[524];
  result[105] = work.KKT[600]*source[105]+work.KKT[601]*source[525];
  result[106] = work.KKT[602]*source[106]+work.KKT[603]*source[526];
  result[107] = work.KKT[604]*source[107]+work.KKT[605]*source[527];
  result[108] = work.KKT[606]*source[108]+work.KKT[607]*source[528];
  result[109] = work.KKT[608]*source[109]+work.KKT[609]*source[529];
  result[110] = work.KKT[610]*source[110]+work.KKT[611]*source[530];
  result[111] = work.KKT[612]*source[111]+work.KKT[613]*source[531];
  result[112] = work.KKT[614]*source[112]+work.KKT[615]*source[532];
  result[113] = work.KKT[616]*source[113]+work.KKT[617]*source[533];
  result[114] = work.KKT[618]*source[114]+work.KKT[619]*source[534];
  result[115] = work.KKT[620]*source[115]+work.KKT[621]*source[535];
  result[116] = work.KKT[622]*source[116]+work.KKT[623]*source[536];
  result[117] = work.KKT[624]*source[117]+work.KKT[625]*source[537];
  result[118] = work.KKT[626]*source[118]+work.KKT[627]*source[538];
  result[119] = work.KKT[628]*source[119]+work.KKT[629]*source[539];
  result[120] = work.KKT[640]*source[120]+work.KKT[631]*source[330]+work.KKT[393]*source[390]+work.KKT[395]*source[420]+work.KKT[634]*source[450]+work.KKT[641]*source[480]+work.KKT[636]*source[510]+work.KKT[638]*source[540];
  result[121] = work.KKT[685]*source[121]+work.KKT[676]*source[331]+work.KKT[399]*source[391]+work.KKT[401]*source[421]+work.KKT[679]*source[451]+work.KKT[686]*source[481]+work.KKT[681]*source[511]+work.KKT[683]*source[541];
  result[122] = work.KKT[729]*source[122]+work.KKT[720]*source[332]+work.KKT[405]*source[392]+work.KKT[407]*source[422]+work.KKT[723]*source[452]+work.KKT[730]*source[482]+work.KKT[725]*source[512]+work.KKT[727]*source[542];
  result[123] = work.KKT[772]*source[123]+work.KKT[763]*source[333]+work.KKT[411]*source[393]+work.KKT[413]*source[423]+work.KKT[766]*source[453]+work.KKT[773]*source[483]+work.KKT[768]*source[513]+work.KKT[770]*source[543];
  result[124] = work.KKT[814]*source[124]+work.KKT[805]*source[334]+work.KKT[417]*source[394]+work.KKT[419]*source[424]+work.KKT[808]*source[454]+work.KKT[815]*source[484]+work.KKT[810]*source[514]+work.KKT[812]*source[544];
  result[125] = work.KKT[855]*source[125]+work.KKT[846]*source[335]+work.KKT[423]*source[395]+work.KKT[425]*source[425]+work.KKT[849]*source[455]+work.KKT[856]*source[485]+work.KKT[851]*source[515]+work.KKT[853]*source[545];
  result[126] = work.KKT[895]*source[126]+work.KKT[886]*source[336]+work.KKT[429]*source[396]+work.KKT[431]*source[426]+work.KKT[889]*source[456]+work.KKT[896]*source[486]+work.KKT[891]*source[516]+work.KKT[893]*source[546];
  result[127] = work.KKT[934]*source[127]+work.KKT[925]*source[337]+work.KKT[435]*source[397]+work.KKT[437]*source[427]+work.KKT[928]*source[457]+work.KKT[935]*source[487]+work.KKT[930]*source[517]+work.KKT[932]*source[547];
  result[128] = work.KKT[972]*source[128]+work.KKT[963]*source[338]+work.KKT[441]*source[398]+work.KKT[443]*source[428]+work.KKT[966]*source[458]+work.KKT[973]*source[488]+work.KKT[968]*source[518]+work.KKT[970]*source[548];
  result[129] = work.KKT[1009]*source[129]+work.KKT[1000]*source[339]+work.KKT[447]*source[399]+work.KKT[449]*source[429]+work.KKT[1003]*source[459]+work.KKT[1010]*source[489]+work.KKT[1005]*source[519]+work.KKT[1007]*source[549];
  result[130] = work.KKT[1045]*source[130]+work.KKT[1036]*source[340]+work.KKT[453]*source[400]+work.KKT[455]*source[430]+work.KKT[1039]*source[460]+work.KKT[1046]*source[490]+work.KKT[1041]*source[520]+work.KKT[1043]*source[550];
  result[131] = work.KKT[1080]*source[131]+work.KKT[1071]*source[341]+work.KKT[459]*source[401]+work.KKT[461]*source[431]+work.KKT[1074]*source[461]+work.KKT[1081]*source[491]+work.KKT[1076]*source[521]+work.KKT[1078]*source[551];
  result[132] = work.KKT[1114]*source[132]+work.KKT[1105]*source[342]+work.KKT[465]*source[402]+work.KKT[467]*source[432]+work.KKT[1108]*source[462]+work.KKT[1115]*source[492]+work.KKT[1110]*source[522]+work.KKT[1112]*source[552];
  result[133] = work.KKT[1147]*source[133]+work.KKT[1138]*source[343]+work.KKT[471]*source[403]+work.KKT[473]*source[433]+work.KKT[1141]*source[463]+work.KKT[1148]*source[493]+work.KKT[1143]*source[523]+work.KKT[1145]*source[553];
  result[134] = work.KKT[1179]*source[134]+work.KKT[1170]*source[344]+work.KKT[477]*source[404]+work.KKT[479]*source[434]+work.KKT[1173]*source[464]+work.KKT[1180]*source[494]+work.KKT[1175]*source[524]+work.KKT[1177]*source[554];
  result[135] = work.KKT[1210]*source[135]+work.KKT[1201]*source[345]+work.KKT[483]*source[405]+work.KKT[485]*source[435]+work.KKT[1204]*source[465]+work.KKT[1211]*source[495]+work.KKT[1206]*source[525]+work.KKT[1208]*source[555];
  result[136] = work.KKT[1240]*source[136]+work.KKT[1231]*source[346]+work.KKT[489]*source[406]+work.KKT[491]*source[436]+work.KKT[1234]*source[466]+work.KKT[1241]*source[496]+work.KKT[1236]*source[526]+work.KKT[1238]*source[556];
  result[137] = work.KKT[1269]*source[137]+work.KKT[1260]*source[347]+work.KKT[495]*source[407]+work.KKT[497]*source[437]+work.KKT[1263]*source[467]+work.KKT[1270]*source[497]+work.KKT[1265]*source[527]+work.KKT[1267]*source[557];
  result[138] = work.KKT[1297]*source[138]+work.KKT[1288]*source[348]+work.KKT[501]*source[408]+work.KKT[503]*source[438]+work.KKT[1291]*source[468]+work.KKT[1298]*source[498]+work.KKT[1293]*source[528]+work.KKT[1295]*source[558];
  result[139] = work.KKT[1324]*source[139]+work.KKT[1315]*source[349]+work.KKT[507]*source[409]+work.KKT[509]*source[439]+work.KKT[1318]*source[469]+work.KKT[1325]*source[499]+work.KKT[1320]*source[529]+work.KKT[1322]*source[559];
  result[140] = work.KKT[1350]*source[140]+work.KKT[1341]*source[350]+work.KKT[513]*source[410]+work.KKT[515]*source[440]+work.KKT[1344]*source[470]+work.KKT[1351]*source[500]+work.KKT[1346]*source[530]+work.KKT[1348]*source[560];
  result[141] = work.KKT[1375]*source[141]+work.KKT[1366]*source[351]+work.KKT[519]*source[411]+work.KKT[521]*source[441]+work.KKT[1369]*source[471]+work.KKT[1376]*source[501]+work.KKT[1371]*source[531]+work.KKT[1373]*source[561];
  result[142] = work.KKT[1399]*source[142]+work.KKT[1390]*source[352]+work.KKT[525]*source[412]+work.KKT[527]*source[442]+work.KKT[1393]*source[472]+work.KKT[1400]*source[502]+work.KKT[1395]*source[532]+work.KKT[1397]*source[562];
  result[143] = work.KKT[1422]*source[143]+work.KKT[1413]*source[353]+work.KKT[531]*source[413]+work.KKT[533]*source[443]+work.KKT[1416]*source[473]+work.KKT[1423]*source[503]+work.KKT[1418]*source[533]+work.KKT[1420]*source[563];
  result[144] = work.KKT[1444]*source[144]+work.KKT[1435]*source[354]+work.KKT[537]*source[414]+work.KKT[539]*source[444]+work.KKT[1438]*source[474]+work.KKT[1445]*source[504]+work.KKT[1440]*source[534]+work.KKT[1442]*source[564];
  result[145] = work.KKT[1465]*source[145]+work.KKT[1456]*source[355]+work.KKT[543]*source[415]+work.KKT[545]*source[445]+work.KKT[1459]*source[475]+work.KKT[1466]*source[505]+work.KKT[1461]*source[535]+work.KKT[1463]*source[565];
  result[146] = work.KKT[1485]*source[146]+work.KKT[1476]*source[356]+work.KKT[549]*source[416]+work.KKT[551]*source[446]+work.KKT[1479]*source[476]+work.KKT[1486]*source[506]+work.KKT[1481]*source[536]+work.KKT[1483]*source[566];
  result[147] = work.KKT[1504]*source[147]+work.KKT[1495]*source[357]+work.KKT[555]*source[417]+work.KKT[557]*source[447]+work.KKT[1498]*source[477]+work.KKT[1505]*source[507]+work.KKT[1500]*source[537]+work.KKT[1502]*source[567];
  result[148] = work.KKT[1522]*source[148]+work.KKT[1513]*source[358]+work.KKT[561]*source[418]+work.KKT[563]*source[448]+work.KKT[1516]*source[478]+work.KKT[1523]*source[508]+work.KKT[1518]*source[538]+work.KKT[1520]*source[568];
  result[149] = work.KKT[1543]*source[149]+work.KKT[1532]*source[359]+work.KKT[567]*source[419]+work.KKT[569]*source[449]+work.KKT[1535]*source[479]+work.KKT[1537]*source[509]+work.KKT[1539]*source[539]+work.KKT[1541]*source[569];
  result[150] = work.KKT[642]*source[150]+work.KKT[632]*source[330]+work.KKT[635]*source[450]+work.KKT[643]*source[480]+work.KKT[637]*source[510]+work.KKT[639]*source[540];
  result[151] = work.KKT[687]*source[151]+work.KKT[677]*source[331]+work.KKT[680]*source[451]+work.KKT[688]*source[481]+work.KKT[682]*source[511]+work.KKT[684]*source[541];
  result[152] = work.KKT[731]*source[152]+work.KKT[721]*source[332]+work.KKT[724]*source[452]+work.KKT[732]*source[482]+work.KKT[726]*source[512]+work.KKT[728]*source[542];
  result[153] = work.KKT[774]*source[153]+work.KKT[764]*source[333]+work.KKT[767]*source[453]+work.KKT[775]*source[483]+work.KKT[769]*source[513]+work.KKT[771]*source[543];
  result[154] = work.KKT[816]*source[154]+work.KKT[806]*source[334]+work.KKT[809]*source[454]+work.KKT[817]*source[484]+work.KKT[811]*source[514]+work.KKT[813]*source[544];
  result[155] = work.KKT[857]*source[155]+work.KKT[847]*source[335]+work.KKT[850]*source[455]+work.KKT[858]*source[485]+work.KKT[852]*source[515]+work.KKT[854]*source[545];
  result[156] = work.KKT[897]*source[156]+work.KKT[887]*source[336]+work.KKT[890]*source[456]+work.KKT[898]*source[486]+work.KKT[892]*source[516]+work.KKT[894]*source[546];
  result[157] = work.KKT[936]*source[157]+work.KKT[926]*source[337]+work.KKT[929]*source[457]+work.KKT[937]*source[487]+work.KKT[931]*source[517]+work.KKT[933]*source[547];
  result[158] = work.KKT[974]*source[158]+work.KKT[964]*source[338]+work.KKT[967]*source[458]+work.KKT[975]*source[488]+work.KKT[969]*source[518]+work.KKT[971]*source[548];
  result[159] = work.KKT[1011]*source[159]+work.KKT[1001]*source[339]+work.KKT[1004]*source[459]+work.KKT[1012]*source[489]+work.KKT[1006]*source[519]+work.KKT[1008]*source[549];
  result[160] = work.KKT[1047]*source[160]+work.KKT[1037]*source[340]+work.KKT[1040]*source[460]+work.KKT[1048]*source[490]+work.KKT[1042]*source[520]+work.KKT[1044]*source[550];
  result[161] = work.KKT[1082]*source[161]+work.KKT[1072]*source[341]+work.KKT[1075]*source[461]+work.KKT[1083]*source[491]+work.KKT[1077]*source[521]+work.KKT[1079]*source[551];
  result[162] = work.KKT[1116]*source[162]+work.KKT[1106]*source[342]+work.KKT[1109]*source[462]+work.KKT[1117]*source[492]+work.KKT[1111]*source[522]+work.KKT[1113]*source[552];
  result[163] = work.KKT[1149]*source[163]+work.KKT[1139]*source[343]+work.KKT[1142]*source[463]+work.KKT[1150]*source[493]+work.KKT[1144]*source[523]+work.KKT[1146]*source[553];
  result[164] = work.KKT[1181]*source[164]+work.KKT[1171]*source[344]+work.KKT[1174]*source[464]+work.KKT[1182]*source[494]+work.KKT[1176]*source[524]+work.KKT[1178]*source[554];
  result[165] = work.KKT[1212]*source[165]+work.KKT[1202]*source[345]+work.KKT[1205]*source[465]+work.KKT[1213]*source[495]+work.KKT[1207]*source[525]+work.KKT[1209]*source[555];
  result[166] = work.KKT[1242]*source[166]+work.KKT[1232]*source[346]+work.KKT[1235]*source[466]+work.KKT[1243]*source[496]+work.KKT[1237]*source[526]+work.KKT[1239]*source[556];
  result[167] = work.KKT[1271]*source[167]+work.KKT[1261]*source[347]+work.KKT[1264]*source[467]+work.KKT[1272]*source[497]+work.KKT[1266]*source[527]+work.KKT[1268]*source[557];
  result[168] = work.KKT[1299]*source[168]+work.KKT[1289]*source[348]+work.KKT[1292]*source[468]+work.KKT[1300]*source[498]+work.KKT[1294]*source[528]+work.KKT[1296]*source[558];
  result[169] = work.KKT[1326]*source[169]+work.KKT[1316]*source[349]+work.KKT[1319]*source[469]+work.KKT[1327]*source[499]+work.KKT[1321]*source[529]+work.KKT[1323]*source[559];
  result[170] = work.KKT[1352]*source[170]+work.KKT[1342]*source[350]+work.KKT[1345]*source[470]+work.KKT[1353]*source[500]+work.KKT[1347]*source[530]+work.KKT[1349]*source[560];
  result[171] = work.KKT[1377]*source[171]+work.KKT[1367]*source[351]+work.KKT[1370]*source[471]+work.KKT[1378]*source[501]+work.KKT[1372]*source[531]+work.KKT[1374]*source[561];
  result[172] = work.KKT[1401]*source[172]+work.KKT[1391]*source[352]+work.KKT[1394]*source[472]+work.KKT[1402]*source[502]+work.KKT[1396]*source[532]+work.KKT[1398]*source[562];
  result[173] = work.KKT[1424]*source[173]+work.KKT[1414]*source[353]+work.KKT[1417]*source[473]+work.KKT[1425]*source[503]+work.KKT[1419]*source[533]+work.KKT[1421]*source[563];
  result[174] = work.KKT[1446]*source[174]+work.KKT[1436]*source[354]+work.KKT[1439]*source[474]+work.KKT[1447]*source[504]+work.KKT[1441]*source[534]+work.KKT[1443]*source[564];
  result[175] = work.KKT[1467]*source[175]+work.KKT[1457]*source[355]+work.KKT[1460]*source[475]+work.KKT[1468]*source[505]+work.KKT[1462]*source[535]+work.KKT[1464]*source[565];
  result[176] = work.KKT[1487]*source[176]+work.KKT[1477]*source[356]+work.KKT[1480]*source[476]+work.KKT[1488]*source[506]+work.KKT[1482]*source[536]+work.KKT[1484]*source[566];
  result[177] = work.KKT[1506]*source[177]+work.KKT[1496]*source[357]+work.KKT[1499]*source[477]+work.KKT[1507]*source[507]+work.KKT[1501]*source[537]+work.KKT[1503]*source[567];
  result[178] = work.KKT[1524]*source[178]+work.KKT[1514]*source[358]+work.KKT[1517]*source[478]+work.KKT[1525]*source[508]+work.KKT[1519]*source[538]+work.KKT[1521]*source[568];
  result[179] = work.KKT[1544]*source[179]+work.KKT[1533]*source[359]+work.KKT[1536]*source[479]+work.KKT[1538]*source[509]+work.KKT[1540]*source[539]+work.KKT[1542]*source[569];
  result[180] = work.KKT[0]*source[180]+work.KKT[1]*source[330];
  result[181] = work.KKT[2]*source[181]+work.KKT[3]*source[331];
  result[182] = work.KKT[4]*source[182]+work.KKT[5]*source[332];
  result[183] = work.KKT[6]*source[183]+work.KKT[7]*source[333];
  result[184] = work.KKT[8]*source[184]+work.KKT[9]*source[334];
  result[185] = work.KKT[10]*source[185]+work.KKT[11]*source[335];
  result[186] = work.KKT[12]*source[186]+work.KKT[13]*source[336];
  result[187] = work.KKT[14]*source[187]+work.KKT[15]*source[337];
  result[188] = work.KKT[16]*source[188]+work.KKT[17]*source[338];
  result[189] = work.KKT[18]*source[189]+work.KKT[19]*source[339];
  result[190] = work.KKT[20]*source[190]+work.KKT[21]*source[340];
  result[191] = work.KKT[22]*source[191]+work.KKT[23]*source[341];
  result[192] = work.KKT[24]*source[192]+work.KKT[25]*source[342];
  result[193] = work.KKT[26]*source[193]+work.KKT[27]*source[343];
  result[194] = work.KKT[28]*source[194]+work.KKT[29]*source[344];
  result[195] = work.KKT[30]*source[195]+work.KKT[31]*source[345];
  result[196] = work.KKT[32]*source[196]+work.KKT[33]*source[346];
  result[197] = work.KKT[34]*source[197]+work.KKT[35]*source[347];
  result[198] = work.KKT[36]*source[198]+work.KKT[37]*source[348];
  result[199] = work.KKT[38]*source[199]+work.KKT[39]*source[349];
  result[200] = work.KKT[40]*source[200]+work.KKT[41]*source[350];
  result[201] = work.KKT[42]*source[201]+work.KKT[43]*source[351];
  result[202] = work.KKT[44]*source[202]+work.KKT[45]*source[352];
  result[203] = work.KKT[46]*source[203]+work.KKT[47]*source[353];
  result[204] = work.KKT[48]*source[204]+work.KKT[49]*source[354];
  result[205] = work.KKT[50]*source[205]+work.KKT[51]*source[355];
  result[206] = work.KKT[52]*source[206]+work.KKT[53]*source[356];
  result[207] = work.KKT[54]*source[207]+work.KKT[55]*source[357];
  result[208] = work.KKT[56]*source[208]+work.KKT[57]*source[358];
  result[209] = work.KKT[58]*source[209]+work.KKT[59]*source[359];
  result[210] = work.KKT[60]*source[210]+work.KKT[61]*source[360];
  result[211] = work.KKT[62]*source[211]+work.KKT[63]*source[361];
  result[212] = work.KKT[64]*source[212]+work.KKT[65]*source[362];
  result[213] = work.KKT[66]*source[213]+work.KKT[67]*source[363];
  result[214] = work.KKT[68]*source[214]+work.KKT[69]*source[364];
  result[215] = work.KKT[70]*source[215]+work.KKT[71]*source[365];
  result[216] = work.KKT[72]*source[216]+work.KKT[73]*source[366];
  result[217] = work.KKT[74]*source[217]+work.KKT[75]*source[367];
  result[218] = work.KKT[76]*source[218]+work.KKT[77]*source[368];
  result[219] = work.KKT[78]*source[219]+work.KKT[79]*source[369];
  result[220] = work.KKT[80]*source[220]+work.KKT[81]*source[370];
  result[221] = work.KKT[82]*source[221]+work.KKT[83]*source[371];
  result[222] = work.KKT[84]*source[222]+work.KKT[85]*source[372];
  result[223] = work.KKT[86]*source[223]+work.KKT[87]*source[373];
  result[224] = work.KKT[88]*source[224]+work.KKT[89]*source[374];
  result[225] = work.KKT[90]*source[225]+work.KKT[91]*source[375];
  result[226] = work.KKT[92]*source[226]+work.KKT[93]*source[376];
  result[227] = work.KKT[94]*source[227]+work.KKT[95]*source[377];
  result[228] = work.KKT[96]*source[228]+work.KKT[97]*source[378];
  result[229] = work.KKT[98]*source[229]+work.KKT[99]*source[379];
  result[230] = work.KKT[100]*source[230]+work.KKT[101]*source[380];
  result[231] = work.KKT[102]*source[231]+work.KKT[103]*source[381];
  result[232] = work.KKT[104]*source[232]+work.KKT[105]*source[382];
  result[233] = work.KKT[106]*source[233]+work.KKT[107]*source[383];
  result[234] = work.KKT[108]*source[234]+work.KKT[109]*source[384];
  result[235] = work.KKT[110]*source[235]+work.KKT[111]*source[385];
  result[236] = work.KKT[112]*source[236]+work.KKT[113]*source[386];
  result[237] = work.KKT[114]*source[237]+work.KKT[115]*source[387];
  result[238] = work.KKT[116]*source[238]+work.KKT[117]*source[388];
  result[239] = work.KKT[118]*source[239]+work.KKT[119]*source[389];
  result[240] = work.KKT[120]*source[240]+work.KKT[121]*source[390];
  result[241] = work.KKT[122]*source[241]+work.KKT[123]*source[391];
  result[242] = work.KKT[124]*source[242]+work.KKT[125]*source[392];
  result[243] = work.KKT[126]*source[243]+work.KKT[127]*source[393];
  result[244] = work.KKT[128]*source[244]+work.KKT[129]*source[394];
  result[245] = work.KKT[130]*source[245]+work.KKT[131]*source[395];
  result[246] = work.KKT[132]*source[246]+work.KKT[133]*source[396];
  result[247] = work.KKT[134]*source[247]+work.KKT[135]*source[397];
  result[248] = work.KKT[136]*source[248]+work.KKT[137]*source[398];
  result[249] = work.KKT[138]*source[249]+work.KKT[139]*source[399];
  result[250] = work.KKT[140]*source[250]+work.KKT[141]*source[400];
  result[251] = work.KKT[142]*source[251]+work.KKT[143]*source[401];
  result[252] = work.KKT[144]*source[252]+work.KKT[145]*source[402];
  result[253] = work.KKT[146]*source[253]+work.KKT[147]*source[403];
  result[254] = work.KKT[148]*source[254]+work.KKT[149]*source[404];
  result[255] = work.KKT[150]*source[255]+work.KKT[151]*source[405];
  result[256] = work.KKT[152]*source[256]+work.KKT[153]*source[406];
  result[257] = work.KKT[154]*source[257]+work.KKT[155]*source[407];
  result[258] = work.KKT[156]*source[258]+work.KKT[157]*source[408];
  result[259] = work.KKT[158]*source[259]+work.KKT[159]*source[409];
  result[260] = work.KKT[160]*source[260]+work.KKT[161]*source[410];
  result[261] = work.KKT[162]*source[261]+work.KKT[163]*source[411];
  result[262] = work.KKT[164]*source[262]+work.KKT[165]*source[412];
  result[263] = work.KKT[166]*source[263]+work.KKT[167]*source[413];
  result[264] = work.KKT[168]*source[264]+work.KKT[169]*source[414];
  result[265] = work.KKT[170]*source[265]+work.KKT[171]*source[415];
  result[266] = work.KKT[172]*source[266]+work.KKT[173]*source[416];
  result[267] = work.KKT[174]*source[267]+work.KKT[175]*source[417];
  result[268] = work.KKT[176]*source[268]+work.KKT[177]*source[418];
  result[269] = work.KKT[178]*source[269]+work.KKT[179]*source[419];
  result[270] = work.KKT[180]*source[270]+work.KKT[181]*source[420];
  result[271] = work.KKT[182]*source[271]+work.KKT[183]*source[421];
  result[272] = work.KKT[184]*source[272]+work.KKT[185]*source[422];
  result[273] = work.KKT[186]*source[273]+work.KKT[187]*source[423];
  result[274] = work.KKT[188]*source[274]+work.KKT[189]*source[424];
  result[275] = work.KKT[190]*source[275]+work.KKT[191]*source[425];
  result[276] = work.KKT[192]*source[276]+work.KKT[193]*source[426];
  result[277] = work.KKT[194]*source[277]+work.KKT[195]*source[427];
  result[278] = work.KKT[196]*source[278]+work.KKT[197]*source[428];
  result[279] = work.KKT[198]*source[279]+work.KKT[199]*source[429];
  result[280] = work.KKT[200]*source[280]+work.KKT[201]*source[430];
  result[281] = work.KKT[202]*source[281]+work.KKT[203]*source[431];
  result[282] = work.KKT[204]*source[282]+work.KKT[205]*source[432];
  result[283] = work.KKT[206]*source[283]+work.KKT[207]*source[433];
  result[284] = work.KKT[208]*source[284]+work.KKT[209]*source[434];
  result[285] = work.KKT[210]*source[285]+work.KKT[211]*source[435];
  result[286] = work.KKT[212]*source[286]+work.KKT[213]*source[436];
  result[287] = work.KKT[214]*source[287]+work.KKT[215]*source[437];
  result[288] = work.KKT[216]*source[288]+work.KKT[217]*source[438];
  result[289] = work.KKT[218]*source[289]+work.KKT[219]*source[439];
  result[290] = work.KKT[220]*source[290]+work.KKT[221]*source[440];
  result[291] = work.KKT[222]*source[291]+work.KKT[223]*source[441];
  result[292] = work.KKT[224]*source[292]+work.KKT[225]*source[442];
  result[293] = work.KKT[226]*source[293]+work.KKT[227]*source[443];
  result[294] = work.KKT[228]*source[294]+work.KKT[229]*source[444];
  result[295] = work.KKT[230]*source[295]+work.KKT[231]*source[445];
  result[296] = work.KKT[232]*source[296]+work.KKT[233]*source[446];
  result[297] = work.KKT[234]*source[297]+work.KKT[235]*source[447];
  result[298] = work.KKT[236]*source[298]+work.KKT[237]*source[448];
  result[299] = work.KKT[238]*source[299]+work.KKT[239]*source[449];
  result[300] = work.KKT[240]*source[300]+work.KKT[241]*source[450];
  result[301] = work.KKT[242]*source[301]+work.KKT[243]*source[451];
  result[302] = work.KKT[244]*source[302]+work.KKT[245]*source[452];
  result[303] = work.KKT[246]*source[303]+work.KKT[247]*source[453];
  result[304] = work.KKT[248]*source[304]+work.KKT[249]*source[454];
  result[305] = work.KKT[250]*source[305]+work.KKT[251]*source[455];
  result[306] = work.KKT[252]*source[306]+work.KKT[253]*source[456];
  result[307] = work.KKT[254]*source[307]+work.KKT[255]*source[457];
  result[308] = work.KKT[256]*source[308]+work.KKT[257]*source[458];
  result[309] = work.KKT[258]*source[309]+work.KKT[259]*source[459];
  result[310] = work.KKT[260]*source[310]+work.KKT[261]*source[460];
  result[311] = work.KKT[262]*source[311]+work.KKT[263]*source[461];
  result[312] = work.KKT[264]*source[312]+work.KKT[265]*source[462];
  result[313] = work.KKT[266]*source[313]+work.KKT[267]*source[463];
  result[314] = work.KKT[268]*source[314]+work.KKT[269]*source[464];
  result[315] = work.KKT[270]*source[315]+work.KKT[271]*source[465];
  result[316] = work.KKT[272]*source[316]+work.KKT[273]*source[466];
  result[317] = work.KKT[274]*source[317]+work.KKT[275]*source[467];
  result[318] = work.KKT[276]*source[318]+work.KKT[277]*source[468];
  result[319] = work.KKT[278]*source[319]+work.KKT[279]*source[469];
  result[320] = work.KKT[280]*source[320]+work.KKT[281]*source[470];
  result[321] = work.KKT[282]*source[321]+work.KKT[283]*source[471];
  result[322] = work.KKT[284]*source[322]+work.KKT[285]*source[472];
  result[323] = work.KKT[286]*source[323]+work.KKT[287]*source[473];
  result[324] = work.KKT[288]*source[324]+work.KKT[289]*source[474];
  result[325] = work.KKT[290]*source[325]+work.KKT[291]*source[475];
  result[326] = work.KKT[292]*source[326]+work.KKT[293]*source[476];
  result[327] = work.KKT[294]*source[327]+work.KKT[295]*source[477];
  result[328] = work.KKT[296]*source[328]+work.KKT[297]*source[478];
  result[329] = work.KKT[298]*source[329]+work.KKT[299]*source[479];
  result[330] = work.KKT[1]*source[180]+work.KKT[630]*source[330]+work.KKT[301]*source[0]+work.KKT[631]*source[120]+work.KKT[632]*source[150];
  result[331] = work.KKT[3]*source[181]+work.KKT[675]*source[331]+work.KKT[304]*source[1]+work.KKT[676]*source[121]+work.KKT[677]*source[151];
  result[332] = work.KKT[5]*source[182]+work.KKT[719]*source[332]+work.KKT[307]*source[2]+work.KKT[720]*source[122]+work.KKT[721]*source[152];
  result[333] = work.KKT[7]*source[183]+work.KKT[762]*source[333]+work.KKT[310]*source[3]+work.KKT[763]*source[123]+work.KKT[764]*source[153];
  result[334] = work.KKT[9]*source[184]+work.KKT[804]*source[334]+work.KKT[313]*source[4]+work.KKT[805]*source[124]+work.KKT[806]*source[154];
  result[335] = work.KKT[11]*source[185]+work.KKT[845]*source[335]+work.KKT[316]*source[5]+work.KKT[846]*source[125]+work.KKT[847]*source[155];
  result[336] = work.KKT[13]*source[186]+work.KKT[885]*source[336]+work.KKT[319]*source[6]+work.KKT[886]*source[126]+work.KKT[887]*source[156];
  result[337] = work.KKT[15]*source[187]+work.KKT[924]*source[337]+work.KKT[322]*source[7]+work.KKT[925]*source[127]+work.KKT[926]*source[157];
  result[338] = work.KKT[17]*source[188]+work.KKT[962]*source[338]+work.KKT[325]*source[8]+work.KKT[963]*source[128]+work.KKT[964]*source[158];
  result[339] = work.KKT[19]*source[189]+work.KKT[999]*source[339]+work.KKT[328]*source[9]+work.KKT[1000]*source[129]+work.KKT[1001]*source[159];
  result[340] = work.KKT[21]*source[190]+work.KKT[1035]*source[340]+work.KKT[331]*source[10]+work.KKT[1036]*source[130]+work.KKT[1037]*source[160];
  result[341] = work.KKT[23]*source[191]+work.KKT[1070]*source[341]+work.KKT[334]*source[11]+work.KKT[1071]*source[131]+work.KKT[1072]*source[161];
  result[342] = work.KKT[25]*source[192]+work.KKT[1104]*source[342]+work.KKT[337]*source[12]+work.KKT[1105]*source[132]+work.KKT[1106]*source[162];
  result[343] = work.KKT[27]*source[193]+work.KKT[1137]*source[343]+work.KKT[340]*source[13]+work.KKT[1138]*source[133]+work.KKT[1139]*source[163];
  result[344] = work.KKT[29]*source[194]+work.KKT[1169]*source[344]+work.KKT[343]*source[14]+work.KKT[1170]*source[134]+work.KKT[1171]*source[164];
  result[345] = work.KKT[31]*source[195]+work.KKT[1200]*source[345]+work.KKT[346]*source[15]+work.KKT[1201]*source[135]+work.KKT[1202]*source[165];
  result[346] = work.KKT[33]*source[196]+work.KKT[1230]*source[346]+work.KKT[349]*source[16]+work.KKT[1231]*source[136]+work.KKT[1232]*source[166];
  result[347] = work.KKT[35]*source[197]+work.KKT[1259]*source[347]+work.KKT[352]*source[17]+work.KKT[1260]*source[137]+work.KKT[1261]*source[167];
  result[348] = work.KKT[37]*source[198]+work.KKT[1287]*source[348]+work.KKT[355]*source[18]+work.KKT[1288]*source[138]+work.KKT[1289]*source[168];
  result[349] = work.KKT[39]*source[199]+work.KKT[1314]*source[349]+work.KKT[358]*source[19]+work.KKT[1315]*source[139]+work.KKT[1316]*source[169];
  result[350] = work.KKT[41]*source[200]+work.KKT[1340]*source[350]+work.KKT[361]*source[20]+work.KKT[1341]*source[140]+work.KKT[1342]*source[170];
  result[351] = work.KKT[43]*source[201]+work.KKT[1365]*source[351]+work.KKT[364]*source[21]+work.KKT[1366]*source[141]+work.KKT[1367]*source[171];
  result[352] = work.KKT[45]*source[202]+work.KKT[1389]*source[352]+work.KKT[367]*source[22]+work.KKT[1390]*source[142]+work.KKT[1391]*source[172];
  result[353] = work.KKT[47]*source[203]+work.KKT[1412]*source[353]+work.KKT[370]*source[23]+work.KKT[1413]*source[143]+work.KKT[1414]*source[173];
  result[354] = work.KKT[49]*source[204]+work.KKT[1434]*source[354]+work.KKT[373]*source[24]+work.KKT[1435]*source[144]+work.KKT[1436]*source[174];
  result[355] = work.KKT[51]*source[205]+work.KKT[1455]*source[355]+work.KKT[376]*source[25]+work.KKT[1456]*source[145]+work.KKT[1457]*source[175];
  result[356] = work.KKT[53]*source[206]+work.KKT[1475]*source[356]+work.KKT[379]*source[26]+work.KKT[1476]*source[146]+work.KKT[1477]*source[176];
  result[357] = work.KKT[55]*source[207]+work.KKT[1494]*source[357]+work.KKT[382]*source[27]+work.KKT[1495]*source[147]+work.KKT[1496]*source[177];
  result[358] = work.KKT[57]*source[208]+work.KKT[1512]*source[358]+work.KKT[385]*source[28]+work.KKT[1513]*source[148]+work.KKT[1514]*source[178];
  result[359] = work.KKT[59]*source[209]+work.KKT[1531]*source[359]+work.KKT[388]*source[29]+work.KKT[1532]*source[149]+work.KKT[1533]*source[179];
  result[360] = work.KKT[61]*source[210]+work.KKT[302]*source[360]+work.KKT[300]*source[0];
  result[361] = work.KKT[63]*source[211]+work.KKT[305]*source[361]+work.KKT[303]*source[1];
  result[362] = work.KKT[65]*source[212]+work.KKT[308]*source[362]+work.KKT[306]*source[2];
  result[363] = work.KKT[67]*source[213]+work.KKT[311]*source[363]+work.KKT[309]*source[3];
  result[364] = work.KKT[69]*source[214]+work.KKT[314]*source[364]+work.KKT[312]*source[4];
  result[365] = work.KKT[71]*source[215]+work.KKT[317]*source[365]+work.KKT[315]*source[5];
  result[366] = work.KKT[73]*source[216]+work.KKT[320]*source[366]+work.KKT[318]*source[6];
  result[367] = work.KKT[75]*source[217]+work.KKT[323]*source[367]+work.KKT[321]*source[7];
  result[368] = work.KKT[77]*source[218]+work.KKT[326]*source[368]+work.KKT[324]*source[8];
  result[369] = work.KKT[79]*source[219]+work.KKT[329]*source[369]+work.KKT[327]*source[9];
  result[370] = work.KKT[81]*source[220]+work.KKT[332]*source[370]+work.KKT[330]*source[10];
  result[371] = work.KKT[83]*source[221]+work.KKT[335]*source[371]+work.KKT[333]*source[11];
  result[372] = work.KKT[85]*source[222]+work.KKT[338]*source[372]+work.KKT[336]*source[12];
  result[373] = work.KKT[87]*source[223]+work.KKT[341]*source[373]+work.KKT[339]*source[13];
  result[374] = work.KKT[89]*source[224]+work.KKT[344]*source[374]+work.KKT[342]*source[14];
  result[375] = work.KKT[91]*source[225]+work.KKT[347]*source[375]+work.KKT[345]*source[15];
  result[376] = work.KKT[93]*source[226]+work.KKT[350]*source[376]+work.KKT[348]*source[16];
  result[377] = work.KKT[95]*source[227]+work.KKT[353]*source[377]+work.KKT[351]*source[17];
  result[378] = work.KKT[97]*source[228]+work.KKT[356]*source[378]+work.KKT[354]*source[18];
  result[379] = work.KKT[99]*source[229]+work.KKT[359]*source[379]+work.KKT[357]*source[19];
  result[380] = work.KKT[101]*source[230]+work.KKT[362]*source[380]+work.KKT[360]*source[20];
  result[381] = work.KKT[103]*source[231]+work.KKT[365]*source[381]+work.KKT[363]*source[21];
  result[382] = work.KKT[105]*source[232]+work.KKT[368]*source[382]+work.KKT[366]*source[22];
  result[383] = work.KKT[107]*source[233]+work.KKT[371]*source[383]+work.KKT[369]*source[23];
  result[384] = work.KKT[109]*source[234]+work.KKT[374]*source[384]+work.KKT[372]*source[24];
  result[385] = work.KKT[111]*source[235]+work.KKT[377]*source[385]+work.KKT[375]*source[25];
  result[386] = work.KKT[113]*source[236]+work.KKT[380]*source[386]+work.KKT[378]*source[26];
  result[387] = work.KKT[115]*source[237]+work.KKT[383]*source[387]+work.KKT[381]*source[27];
  result[388] = work.KKT[117]*source[238]+work.KKT[386]*source[388]+work.KKT[384]*source[28];
  result[389] = work.KKT[119]*source[239]+work.KKT[389]*source[389]+work.KKT[387]*source[29];
  result[390] = work.KKT[121]*source[240]+work.KKT[392]*source[390]+work.KKT[390]*source[30]+work.KKT[393]*source[120];
  result[391] = work.KKT[123]*source[241]+work.KKT[398]*source[391]+work.KKT[396]*source[31]+work.KKT[399]*source[121];
  result[392] = work.KKT[125]*source[242]+work.KKT[404]*source[392]+work.KKT[402]*source[32]+work.KKT[405]*source[122];
  result[393] = work.KKT[127]*source[243]+work.KKT[410]*source[393]+work.KKT[408]*source[33]+work.KKT[411]*source[123];
  result[394] = work.KKT[129]*source[244]+work.KKT[416]*source[394]+work.KKT[414]*source[34]+work.KKT[417]*source[124];
  result[395] = work.KKT[131]*source[245]+work.KKT[422]*source[395]+work.KKT[420]*source[35]+work.KKT[423]*source[125];
  result[396] = work.KKT[133]*source[246]+work.KKT[428]*source[396]+work.KKT[426]*source[36]+work.KKT[429]*source[126];
  result[397] = work.KKT[135]*source[247]+work.KKT[434]*source[397]+work.KKT[432]*source[37]+work.KKT[435]*source[127];
  result[398] = work.KKT[137]*source[248]+work.KKT[440]*source[398]+work.KKT[438]*source[38]+work.KKT[441]*source[128];
  result[399] = work.KKT[139]*source[249]+work.KKT[446]*source[399]+work.KKT[444]*source[39]+work.KKT[447]*source[129];
  result[400] = work.KKT[141]*source[250]+work.KKT[452]*source[400]+work.KKT[450]*source[40]+work.KKT[453]*source[130];
  result[401] = work.KKT[143]*source[251]+work.KKT[458]*source[401]+work.KKT[456]*source[41]+work.KKT[459]*source[131];
  result[402] = work.KKT[145]*source[252]+work.KKT[464]*source[402]+work.KKT[462]*source[42]+work.KKT[465]*source[132];
  result[403] = work.KKT[147]*source[253]+work.KKT[470]*source[403]+work.KKT[468]*source[43]+work.KKT[471]*source[133];
  result[404] = work.KKT[149]*source[254]+work.KKT[476]*source[404]+work.KKT[474]*source[44]+work.KKT[477]*source[134];
  result[405] = work.KKT[151]*source[255]+work.KKT[482]*source[405]+work.KKT[480]*source[45]+work.KKT[483]*source[135];
  result[406] = work.KKT[153]*source[256]+work.KKT[488]*source[406]+work.KKT[486]*source[46]+work.KKT[489]*source[136];
  result[407] = work.KKT[155]*source[257]+work.KKT[494]*source[407]+work.KKT[492]*source[47]+work.KKT[495]*source[137];
  result[408] = work.KKT[157]*source[258]+work.KKT[500]*source[408]+work.KKT[498]*source[48]+work.KKT[501]*source[138];
  result[409] = work.KKT[159]*source[259]+work.KKT[506]*source[409]+work.KKT[504]*source[49]+work.KKT[507]*source[139];
  result[410] = work.KKT[161]*source[260]+work.KKT[512]*source[410]+work.KKT[510]*source[50]+work.KKT[513]*source[140];
  result[411] = work.KKT[163]*source[261]+work.KKT[518]*source[411]+work.KKT[516]*source[51]+work.KKT[519]*source[141];
  result[412] = work.KKT[165]*source[262]+work.KKT[524]*source[412]+work.KKT[522]*source[52]+work.KKT[525]*source[142];
  result[413] = work.KKT[167]*source[263]+work.KKT[530]*source[413]+work.KKT[528]*source[53]+work.KKT[531]*source[143];
  result[414] = work.KKT[169]*source[264]+work.KKT[536]*source[414]+work.KKT[534]*source[54]+work.KKT[537]*source[144];
  result[415] = work.KKT[171]*source[265]+work.KKT[542]*source[415]+work.KKT[540]*source[55]+work.KKT[543]*source[145];
  result[416] = work.KKT[173]*source[266]+work.KKT[548]*source[416]+work.KKT[546]*source[56]+work.KKT[549]*source[146];
  result[417] = work.KKT[175]*source[267]+work.KKT[554]*source[417]+work.KKT[552]*source[57]+work.KKT[555]*source[147];
  result[418] = work.KKT[177]*source[268]+work.KKT[560]*source[418]+work.KKT[558]*source[58]+work.KKT[561]*source[148];
  result[419] = work.KKT[179]*source[269]+work.KKT[566]*source[419]+work.KKT[564]*source[59]+work.KKT[567]*source[149];
  result[420] = work.KKT[181]*source[270]+work.KKT[394]*source[420]+work.KKT[391]*source[30]+work.KKT[395]*source[120];
  result[421] = work.KKT[183]*source[271]+work.KKT[400]*source[421]+work.KKT[397]*source[31]+work.KKT[401]*source[121];
  result[422] = work.KKT[185]*source[272]+work.KKT[406]*source[422]+work.KKT[403]*source[32]+work.KKT[407]*source[122];
  result[423] = work.KKT[187]*source[273]+work.KKT[412]*source[423]+work.KKT[409]*source[33]+work.KKT[413]*source[123];
  result[424] = work.KKT[189]*source[274]+work.KKT[418]*source[424]+work.KKT[415]*source[34]+work.KKT[419]*source[124];
  result[425] = work.KKT[191]*source[275]+work.KKT[424]*source[425]+work.KKT[421]*source[35]+work.KKT[425]*source[125];
  result[426] = work.KKT[193]*source[276]+work.KKT[430]*source[426]+work.KKT[427]*source[36]+work.KKT[431]*source[126];
  result[427] = work.KKT[195]*source[277]+work.KKT[436]*source[427]+work.KKT[433]*source[37]+work.KKT[437]*source[127];
  result[428] = work.KKT[197]*source[278]+work.KKT[442]*source[428]+work.KKT[439]*source[38]+work.KKT[443]*source[128];
  result[429] = work.KKT[199]*source[279]+work.KKT[448]*source[429]+work.KKT[445]*source[39]+work.KKT[449]*source[129];
  result[430] = work.KKT[201]*source[280]+work.KKT[454]*source[430]+work.KKT[451]*source[40]+work.KKT[455]*source[130];
  result[431] = work.KKT[203]*source[281]+work.KKT[460]*source[431]+work.KKT[457]*source[41]+work.KKT[461]*source[131];
  result[432] = work.KKT[205]*source[282]+work.KKT[466]*source[432]+work.KKT[463]*source[42]+work.KKT[467]*source[132];
  result[433] = work.KKT[207]*source[283]+work.KKT[472]*source[433]+work.KKT[469]*source[43]+work.KKT[473]*source[133];
  result[434] = work.KKT[209]*source[284]+work.KKT[478]*source[434]+work.KKT[475]*source[44]+work.KKT[479]*source[134];
  result[435] = work.KKT[211]*source[285]+work.KKT[484]*source[435]+work.KKT[481]*source[45]+work.KKT[485]*source[135];
  result[436] = work.KKT[213]*source[286]+work.KKT[490]*source[436]+work.KKT[487]*source[46]+work.KKT[491]*source[136];
  result[437] = work.KKT[215]*source[287]+work.KKT[496]*source[437]+work.KKT[493]*source[47]+work.KKT[497]*source[137];
  result[438] = work.KKT[217]*source[288]+work.KKT[502]*source[438]+work.KKT[499]*source[48]+work.KKT[503]*source[138];
  result[439] = work.KKT[219]*source[289]+work.KKT[508]*source[439]+work.KKT[505]*source[49]+work.KKT[509]*source[139];
  result[440] = work.KKT[221]*source[290]+work.KKT[514]*source[440]+work.KKT[511]*source[50]+work.KKT[515]*source[140];
  result[441] = work.KKT[223]*source[291]+work.KKT[520]*source[441]+work.KKT[517]*source[51]+work.KKT[521]*source[141];
  result[442] = work.KKT[225]*source[292]+work.KKT[526]*source[442]+work.KKT[523]*source[52]+work.KKT[527]*source[142];
  result[443] = work.KKT[227]*source[293]+work.KKT[532]*source[443]+work.KKT[529]*source[53]+work.KKT[533]*source[143];
  result[444] = work.KKT[229]*source[294]+work.KKT[538]*source[444]+work.KKT[535]*source[54]+work.KKT[539]*source[144];
  result[445] = work.KKT[231]*source[295]+work.KKT[544]*source[445]+work.KKT[541]*source[55]+work.KKT[545]*source[145];
  result[446] = work.KKT[233]*source[296]+work.KKT[550]*source[446]+work.KKT[547]*source[56]+work.KKT[551]*source[146];
  result[447] = work.KKT[235]*source[297]+work.KKT[556]*source[447]+work.KKT[553]*source[57]+work.KKT[557]*source[147];
  result[448] = work.KKT[237]*source[298]+work.KKT[562]*source[448]+work.KKT[559]*source[58]+work.KKT[563]*source[148];
  result[449] = work.KKT[239]*source[299]+work.KKT[568]*source[449]+work.KKT[565]*source[59]+work.KKT[569]*source[149];
  result[450] = work.KKT[241]*source[300]+work.KKT[633]*source[450]+work.KKT[634]*source[120]+work.KKT[635]*source[150];
  result[451] = work.KKT[243]*source[301]+work.KKT[678]*source[451]+work.KKT[679]*source[121]+work.KKT[680]*source[151];
  result[452] = work.KKT[245]*source[302]+work.KKT[722]*source[452]+work.KKT[723]*source[122]+work.KKT[724]*source[152];
  result[453] = work.KKT[247]*source[303]+work.KKT[765]*source[453]+work.KKT[766]*source[123]+work.KKT[767]*source[153];
  result[454] = work.KKT[249]*source[304]+work.KKT[807]*source[454]+work.KKT[808]*source[124]+work.KKT[809]*source[154];
  result[455] = work.KKT[251]*source[305]+work.KKT[848]*source[455]+work.KKT[849]*source[125]+work.KKT[850]*source[155];
  result[456] = work.KKT[253]*source[306]+work.KKT[888]*source[456]+work.KKT[889]*source[126]+work.KKT[890]*source[156];
  result[457] = work.KKT[255]*source[307]+work.KKT[927]*source[457]+work.KKT[928]*source[127]+work.KKT[929]*source[157];
  result[458] = work.KKT[257]*source[308]+work.KKT[965]*source[458]+work.KKT[966]*source[128]+work.KKT[967]*source[158];
  result[459] = work.KKT[259]*source[309]+work.KKT[1002]*source[459]+work.KKT[1003]*source[129]+work.KKT[1004]*source[159];
  result[460] = work.KKT[261]*source[310]+work.KKT[1038]*source[460]+work.KKT[1039]*source[130]+work.KKT[1040]*source[160];
  result[461] = work.KKT[263]*source[311]+work.KKT[1073]*source[461]+work.KKT[1074]*source[131]+work.KKT[1075]*source[161];
  result[462] = work.KKT[265]*source[312]+work.KKT[1107]*source[462]+work.KKT[1108]*source[132]+work.KKT[1109]*source[162];
  result[463] = work.KKT[267]*source[313]+work.KKT[1140]*source[463]+work.KKT[1141]*source[133]+work.KKT[1142]*source[163];
  result[464] = work.KKT[269]*source[314]+work.KKT[1172]*source[464]+work.KKT[1173]*source[134]+work.KKT[1174]*source[164];
  result[465] = work.KKT[271]*source[315]+work.KKT[1203]*source[465]+work.KKT[1204]*source[135]+work.KKT[1205]*source[165];
  result[466] = work.KKT[273]*source[316]+work.KKT[1233]*source[466]+work.KKT[1234]*source[136]+work.KKT[1235]*source[166];
  result[467] = work.KKT[275]*source[317]+work.KKT[1262]*source[467]+work.KKT[1263]*source[137]+work.KKT[1264]*source[167];
  result[468] = work.KKT[277]*source[318]+work.KKT[1290]*source[468]+work.KKT[1291]*source[138]+work.KKT[1292]*source[168];
  result[469] = work.KKT[279]*source[319]+work.KKT[1317]*source[469]+work.KKT[1318]*source[139]+work.KKT[1319]*source[169];
  result[470] = work.KKT[281]*source[320]+work.KKT[1343]*source[470]+work.KKT[1344]*source[140]+work.KKT[1345]*source[170];
  result[471] = work.KKT[283]*source[321]+work.KKT[1368]*source[471]+work.KKT[1369]*source[141]+work.KKT[1370]*source[171];
  result[472] = work.KKT[285]*source[322]+work.KKT[1392]*source[472]+work.KKT[1393]*source[142]+work.KKT[1394]*source[172];
  result[473] = work.KKT[287]*source[323]+work.KKT[1415]*source[473]+work.KKT[1416]*source[143]+work.KKT[1417]*source[173];
  result[474] = work.KKT[289]*source[324]+work.KKT[1437]*source[474]+work.KKT[1438]*source[144]+work.KKT[1439]*source[174];
  result[475] = work.KKT[291]*source[325]+work.KKT[1458]*source[475]+work.KKT[1459]*source[145]+work.KKT[1460]*source[175];
  result[476] = work.KKT[293]*source[326]+work.KKT[1478]*source[476]+work.KKT[1479]*source[146]+work.KKT[1480]*source[176];
  result[477] = work.KKT[295]*source[327]+work.KKT[1497]*source[477]+work.KKT[1498]*source[147]+work.KKT[1499]*source[177];
  result[478] = work.KKT[297]*source[328]+work.KKT[1515]*source[478]+work.KKT[1516]*source[148]+work.KKT[1517]*source[178];
  result[479] = work.KKT[299]*source[329]+work.KKT[1534]*source[479]+work.KKT[1535]*source[149]+work.KKT[1536]*source[179];
  result[480] = work.KKT[644]*source[60]+work.KKT[641]*source[120]+work.KKT[643]*source[150];
  result[481] = work.KKT[689]*source[61]+work.KKT[686]*source[121]+work.KKT[688]*source[151];
  result[482] = work.KKT[733]*source[62]+work.KKT[730]*source[122]+work.KKT[732]*source[152];
  result[483] = work.KKT[776]*source[63]+work.KKT[773]*source[123]+work.KKT[775]*source[153];
  result[484] = work.KKT[818]*source[64]+work.KKT[815]*source[124]+work.KKT[817]*source[154];
  result[485] = work.KKT[859]*source[65]+work.KKT[856]*source[125]+work.KKT[858]*source[155];
  result[486] = work.KKT[899]*source[66]+work.KKT[896]*source[126]+work.KKT[898]*source[156];
  result[487] = work.KKT[938]*source[67]+work.KKT[935]*source[127]+work.KKT[937]*source[157];
  result[488] = work.KKT[976]*source[68]+work.KKT[973]*source[128]+work.KKT[975]*source[158];
  result[489] = work.KKT[1013]*source[69]+work.KKT[1010]*source[129]+work.KKT[1012]*source[159];
  result[490] = work.KKT[1049]*source[70]+work.KKT[1046]*source[130]+work.KKT[1048]*source[160];
  result[491] = work.KKT[1084]*source[71]+work.KKT[1081]*source[131]+work.KKT[1083]*source[161];
  result[492] = work.KKT[1118]*source[72]+work.KKT[1115]*source[132]+work.KKT[1117]*source[162];
  result[493] = work.KKT[1151]*source[73]+work.KKT[1148]*source[133]+work.KKT[1150]*source[163];
  result[494] = work.KKT[1183]*source[74]+work.KKT[1180]*source[134]+work.KKT[1182]*source[164];
  result[495] = work.KKT[1214]*source[75]+work.KKT[1211]*source[135]+work.KKT[1213]*source[165];
  result[496] = work.KKT[1244]*source[76]+work.KKT[1241]*source[136]+work.KKT[1243]*source[166];
  result[497] = work.KKT[1273]*source[77]+work.KKT[1270]*source[137]+work.KKT[1272]*source[167];
  result[498] = work.KKT[1301]*source[78]+work.KKT[1298]*source[138]+work.KKT[1300]*source[168];
  result[499] = work.KKT[1328]*source[79]+work.KKT[1325]*source[139]+work.KKT[1327]*source[169];
  result[500] = work.KKT[1354]*source[80]+work.KKT[1351]*source[140]+work.KKT[1353]*source[170];
  result[501] = work.KKT[1379]*source[81]+work.KKT[1376]*source[141]+work.KKT[1378]*source[171];
  result[502] = work.KKT[1403]*source[82]+work.KKT[1400]*source[142]+work.KKT[1402]*source[172];
  result[503] = work.KKT[1426]*source[83]+work.KKT[1423]*source[143]+work.KKT[1425]*source[173];
  result[504] = work.KKT[1448]*source[84]+work.KKT[1445]*source[144]+work.KKT[1447]*source[174];
  result[505] = work.KKT[1469]*source[85]+work.KKT[1466]*source[145]+work.KKT[1468]*source[175];
  result[506] = work.KKT[1489]*source[86]+work.KKT[1486]*source[146]+work.KKT[1488]*source[176];
  result[507] = work.KKT[1508]*source[87]+work.KKT[1505]*source[147]+work.KKT[1507]*source[177];
  result[508] = work.KKT[1526]*source[88]+work.KKT[1523]*source[148]+work.KKT[1525]*source[178];
  result[509] = work.KKT[1530]*source[89]+work.KKT[1537]*source[149]+work.KKT[1538]*source[179];
  result[510] = work.KKT[571]*source[90]+work.KKT[636]*source[120]+work.KKT[637]*source[150];
  result[511] = work.KKT[573]*source[91]+work.KKT[681]*source[121]+work.KKT[682]*source[151];
  result[512] = work.KKT[575]*source[92]+work.KKT[725]*source[122]+work.KKT[726]*source[152];
  result[513] = work.KKT[577]*source[93]+work.KKT[768]*source[123]+work.KKT[769]*source[153];
  result[514] = work.KKT[579]*source[94]+work.KKT[810]*source[124]+work.KKT[811]*source[154];
  result[515] = work.KKT[581]*source[95]+work.KKT[851]*source[125]+work.KKT[852]*source[155];
  result[516] = work.KKT[583]*source[96]+work.KKT[891]*source[126]+work.KKT[892]*source[156];
  result[517] = work.KKT[585]*source[97]+work.KKT[930]*source[127]+work.KKT[931]*source[157];
  result[518] = work.KKT[587]*source[98]+work.KKT[968]*source[128]+work.KKT[969]*source[158];
  result[519] = work.KKT[589]*source[99]+work.KKT[1005]*source[129]+work.KKT[1006]*source[159];
  result[520] = work.KKT[591]*source[100]+work.KKT[1041]*source[130]+work.KKT[1042]*source[160];
  result[521] = work.KKT[593]*source[101]+work.KKT[1076]*source[131]+work.KKT[1077]*source[161];
  result[522] = work.KKT[595]*source[102]+work.KKT[1110]*source[132]+work.KKT[1111]*source[162];
  result[523] = work.KKT[597]*source[103]+work.KKT[1143]*source[133]+work.KKT[1144]*source[163];
  result[524] = work.KKT[599]*source[104]+work.KKT[1175]*source[134]+work.KKT[1176]*source[164];
  result[525] = work.KKT[601]*source[105]+work.KKT[1206]*source[135]+work.KKT[1207]*source[165];
  result[526] = work.KKT[603]*source[106]+work.KKT[1236]*source[136]+work.KKT[1237]*source[166];
  result[527] = work.KKT[605]*source[107]+work.KKT[1265]*source[137]+work.KKT[1266]*source[167];
  result[528] = work.KKT[607]*source[108]+work.KKT[1293]*source[138]+work.KKT[1294]*source[168];
  result[529] = work.KKT[609]*source[109]+work.KKT[1320]*source[139]+work.KKT[1321]*source[169];
  result[530] = work.KKT[611]*source[110]+work.KKT[1346]*source[140]+work.KKT[1347]*source[170];
  result[531] = work.KKT[613]*source[111]+work.KKT[1371]*source[141]+work.KKT[1372]*source[171];
  result[532] = work.KKT[615]*source[112]+work.KKT[1395]*source[142]+work.KKT[1396]*source[172];
  result[533] = work.KKT[617]*source[113]+work.KKT[1418]*source[143]+work.KKT[1419]*source[173];
  result[534] = work.KKT[619]*source[114]+work.KKT[1440]*source[144]+work.KKT[1441]*source[174];
  result[535] = work.KKT[621]*source[115]+work.KKT[1461]*source[145]+work.KKT[1462]*source[175];
  result[536] = work.KKT[623]*source[116]+work.KKT[1481]*source[146]+work.KKT[1482]*source[176];
  result[537] = work.KKT[625]*source[117]+work.KKT[1500]*source[147]+work.KKT[1501]*source[177];
  result[538] = work.KKT[627]*source[118]+work.KKT[1518]*source[148]+work.KKT[1519]*source[178];
  result[539] = work.KKT[629]*source[119]+work.KKT[1539]*source[149]+work.KKT[1540]*source[179];
  result[540] = work.KKT[638]*source[120]+work.KKT[639]*source[150];
  result[541] = work.KKT[683]*source[121]+work.KKT[684]*source[151];
  result[542] = work.KKT[727]*source[122]+work.KKT[728]*source[152];
  result[543] = work.KKT[770]*source[123]+work.KKT[771]*source[153];
  result[544] = work.KKT[812]*source[124]+work.KKT[813]*source[154];
  result[545] = work.KKT[853]*source[125]+work.KKT[854]*source[155];
  result[546] = work.KKT[893]*source[126]+work.KKT[894]*source[156];
  result[547] = work.KKT[932]*source[127]+work.KKT[933]*source[157];
  result[548] = work.KKT[970]*source[128]+work.KKT[971]*source[158];
  result[549] = work.KKT[1007]*source[129]+work.KKT[1008]*source[159];
  result[550] = work.KKT[1043]*source[130]+work.KKT[1044]*source[160];
  result[551] = work.KKT[1078]*source[131]+work.KKT[1079]*source[161];
  result[552] = work.KKT[1112]*source[132]+work.KKT[1113]*source[162];
  result[553] = work.KKT[1145]*source[133]+work.KKT[1146]*source[163];
  result[554] = work.KKT[1177]*source[134]+work.KKT[1178]*source[164];
  result[555] = work.KKT[1208]*source[135]+work.KKT[1209]*source[165];
  result[556] = work.KKT[1238]*source[136]+work.KKT[1239]*source[166];
  result[557] = work.KKT[1267]*source[137]+work.KKT[1268]*source[167];
  result[558] = work.KKT[1295]*source[138]+work.KKT[1296]*source[168];
  result[559] = work.KKT[1322]*source[139]+work.KKT[1323]*source[169];
  result[560] = work.KKT[1348]*source[140]+work.KKT[1349]*source[170];
  result[561] = work.KKT[1373]*source[141]+work.KKT[1374]*source[171];
  result[562] = work.KKT[1397]*source[142]+work.KKT[1398]*source[172];
  result[563] = work.KKT[1420]*source[143]+work.KKT[1421]*source[173];
  result[564] = work.KKT[1442]*source[144]+work.KKT[1443]*source[174];
  result[565] = work.KKT[1463]*source[145]+work.KKT[1464]*source[175];
  result[566] = work.KKT[1483]*source[146]+work.KKT[1484]*source[176];
  result[567] = work.KKT[1502]*source[147]+work.KKT[1503]*source[177];
  result[568] = work.KKT[1520]*source[148]+work.KKT[1521]*source[178];
  result[569] = work.KKT[1541]*source[149]+work.KKT[1542]*source[179];
}

double check_residual(double *target, double *multiplicand) {
  /* Returns the squared 2-norm of lhs - A*rhs. */
  /* Reuses v to find the residual. */
  int i;
  double residual;

  residual = 0;
  matrix_multiply(work.v, multiplicand);
  for (i = 0; i < 180; i++) {
    residual += (target[i] - work.v[i])*(target[i] - work.v[i]);
  }
  return residual;
}

void fill_KKT(void) {
  work.KKT[645] = 2*params.lambda[0]*params.Sigma[0];
  work.KKT[646] = 2*params.lambda[0]*params.Sigma[30];
  work.KKT[647] = 2*params.lambda[0]*params.Sigma[60];
  work.KKT[648] = 2*params.lambda[0]*params.Sigma[90];
  work.KKT[649] = 2*params.lambda[0]*params.Sigma[120];
  work.KKT[650] = 2*params.lambda[0]*params.Sigma[150];
  work.KKT[651] = 2*params.lambda[0]*params.Sigma[180];
  work.KKT[652] = 2*params.lambda[0]*params.Sigma[210];
  work.KKT[653] = 2*params.lambda[0]*params.Sigma[240];
  work.KKT[654] = 2*params.lambda[0]*params.Sigma[270];
  work.KKT[655] = 2*params.lambda[0]*params.Sigma[300];
  work.KKT[656] = 2*params.lambda[0]*params.Sigma[330];
  work.KKT[657] = 2*params.lambda[0]*params.Sigma[360];
  work.KKT[658] = 2*params.lambda[0]*params.Sigma[390];
  work.KKT[659] = 2*params.lambda[0]*params.Sigma[420];
  work.KKT[660] = 2*params.lambda[0]*params.Sigma[450];
  work.KKT[661] = 2*params.lambda[0]*params.Sigma[480];
  work.KKT[662] = 2*params.lambda[0]*params.Sigma[510];
  work.KKT[663] = 2*params.lambda[0]*params.Sigma[540];
  work.KKT[664] = 2*params.lambda[0]*params.Sigma[570];
  work.KKT[665] = 2*params.lambda[0]*params.Sigma[600];
  work.KKT[666] = 2*params.lambda[0]*params.Sigma[630];
  work.KKT[667] = 2*params.lambda[0]*params.Sigma[660];
  work.KKT[668] = 2*params.lambda[0]*params.Sigma[690];
  work.KKT[669] = 2*params.lambda[0]*params.Sigma[720];
  work.KKT[670] = 2*params.lambda[0]*params.Sigma[750];
  work.KKT[671] = 2*params.lambda[0]*params.Sigma[780];
  work.KKT[672] = 2*params.lambda[0]*params.Sigma[810];
  work.KKT[673] = 2*params.lambda[0]*params.Sigma[840];
  work.KKT[674] = 2*params.lambda[0]*params.Sigma[870];
  work.KKT[690] = 2*params.lambda[0]*params.Sigma[31];
  work.KKT[691] = 2*params.lambda[0]*params.Sigma[61];
  work.KKT[692] = 2*params.lambda[0]*params.Sigma[91];
  work.KKT[693] = 2*params.lambda[0]*params.Sigma[121];
  work.KKT[694] = 2*params.lambda[0]*params.Sigma[151];
  work.KKT[695] = 2*params.lambda[0]*params.Sigma[181];
  work.KKT[696] = 2*params.lambda[0]*params.Sigma[211];
  work.KKT[697] = 2*params.lambda[0]*params.Sigma[241];
  work.KKT[698] = 2*params.lambda[0]*params.Sigma[271];
  work.KKT[699] = 2*params.lambda[0]*params.Sigma[301];
  work.KKT[700] = 2*params.lambda[0]*params.Sigma[331];
  work.KKT[701] = 2*params.lambda[0]*params.Sigma[361];
  work.KKT[702] = 2*params.lambda[0]*params.Sigma[391];
  work.KKT[703] = 2*params.lambda[0]*params.Sigma[421];
  work.KKT[704] = 2*params.lambda[0]*params.Sigma[451];
  work.KKT[705] = 2*params.lambda[0]*params.Sigma[481];
  work.KKT[706] = 2*params.lambda[0]*params.Sigma[511];
  work.KKT[707] = 2*params.lambda[0]*params.Sigma[541];
  work.KKT[708] = 2*params.lambda[0]*params.Sigma[571];
  work.KKT[709] = 2*params.lambda[0]*params.Sigma[601];
  work.KKT[710] = 2*params.lambda[0]*params.Sigma[631];
  work.KKT[711] = 2*params.lambda[0]*params.Sigma[661];
  work.KKT[712] = 2*params.lambda[0]*params.Sigma[691];
  work.KKT[713] = 2*params.lambda[0]*params.Sigma[721];
  work.KKT[714] = 2*params.lambda[0]*params.Sigma[751];
  work.KKT[715] = 2*params.lambda[0]*params.Sigma[781];
  work.KKT[716] = 2*params.lambda[0]*params.Sigma[811];
  work.KKT[717] = 2*params.lambda[0]*params.Sigma[841];
  work.KKT[718] = 2*params.lambda[0]*params.Sigma[871];
  work.KKT[734] = 2*params.lambda[0]*params.Sigma[62];
  work.KKT[735] = 2*params.lambda[0]*params.Sigma[92];
  work.KKT[736] = 2*params.lambda[0]*params.Sigma[122];
  work.KKT[737] = 2*params.lambda[0]*params.Sigma[152];
  work.KKT[738] = 2*params.lambda[0]*params.Sigma[182];
  work.KKT[739] = 2*params.lambda[0]*params.Sigma[212];
  work.KKT[740] = 2*params.lambda[0]*params.Sigma[242];
  work.KKT[741] = 2*params.lambda[0]*params.Sigma[272];
  work.KKT[742] = 2*params.lambda[0]*params.Sigma[302];
  work.KKT[743] = 2*params.lambda[0]*params.Sigma[332];
  work.KKT[744] = 2*params.lambda[0]*params.Sigma[362];
  work.KKT[745] = 2*params.lambda[0]*params.Sigma[392];
  work.KKT[746] = 2*params.lambda[0]*params.Sigma[422];
  work.KKT[747] = 2*params.lambda[0]*params.Sigma[452];
  work.KKT[748] = 2*params.lambda[0]*params.Sigma[482];
  work.KKT[749] = 2*params.lambda[0]*params.Sigma[512];
  work.KKT[750] = 2*params.lambda[0]*params.Sigma[542];
  work.KKT[751] = 2*params.lambda[0]*params.Sigma[572];
  work.KKT[752] = 2*params.lambda[0]*params.Sigma[602];
  work.KKT[753] = 2*params.lambda[0]*params.Sigma[632];
  work.KKT[754] = 2*params.lambda[0]*params.Sigma[662];
  work.KKT[755] = 2*params.lambda[0]*params.Sigma[692];
  work.KKT[756] = 2*params.lambda[0]*params.Sigma[722];
  work.KKT[757] = 2*params.lambda[0]*params.Sigma[752];
  work.KKT[758] = 2*params.lambda[0]*params.Sigma[782];
  work.KKT[759] = 2*params.lambda[0]*params.Sigma[812];
  work.KKT[760] = 2*params.lambda[0]*params.Sigma[842];
  work.KKT[761] = 2*params.lambda[0]*params.Sigma[872];
  work.KKT[777] = 2*params.lambda[0]*params.Sigma[93];
  work.KKT[778] = 2*params.lambda[0]*params.Sigma[123];
  work.KKT[779] = 2*params.lambda[0]*params.Sigma[153];
  work.KKT[780] = 2*params.lambda[0]*params.Sigma[183];
  work.KKT[781] = 2*params.lambda[0]*params.Sigma[213];
  work.KKT[782] = 2*params.lambda[0]*params.Sigma[243];
  work.KKT[783] = 2*params.lambda[0]*params.Sigma[273];
  work.KKT[784] = 2*params.lambda[0]*params.Sigma[303];
  work.KKT[785] = 2*params.lambda[0]*params.Sigma[333];
  work.KKT[786] = 2*params.lambda[0]*params.Sigma[363];
  work.KKT[787] = 2*params.lambda[0]*params.Sigma[393];
  work.KKT[788] = 2*params.lambda[0]*params.Sigma[423];
  work.KKT[789] = 2*params.lambda[0]*params.Sigma[453];
  work.KKT[790] = 2*params.lambda[0]*params.Sigma[483];
  work.KKT[791] = 2*params.lambda[0]*params.Sigma[513];
  work.KKT[792] = 2*params.lambda[0]*params.Sigma[543];
  work.KKT[793] = 2*params.lambda[0]*params.Sigma[573];
  work.KKT[794] = 2*params.lambda[0]*params.Sigma[603];
  work.KKT[795] = 2*params.lambda[0]*params.Sigma[633];
  work.KKT[796] = 2*params.lambda[0]*params.Sigma[663];
  work.KKT[797] = 2*params.lambda[0]*params.Sigma[693];
  work.KKT[798] = 2*params.lambda[0]*params.Sigma[723];
  work.KKT[799] = 2*params.lambda[0]*params.Sigma[753];
  work.KKT[800] = 2*params.lambda[0]*params.Sigma[783];
  work.KKT[801] = 2*params.lambda[0]*params.Sigma[813];
  work.KKT[802] = 2*params.lambda[0]*params.Sigma[843];
  work.KKT[803] = 2*params.lambda[0]*params.Sigma[873];
  work.KKT[819] = 2*params.lambda[0]*params.Sigma[124];
  work.KKT[820] = 2*params.lambda[0]*params.Sigma[154];
  work.KKT[821] = 2*params.lambda[0]*params.Sigma[184];
  work.KKT[822] = 2*params.lambda[0]*params.Sigma[214];
  work.KKT[823] = 2*params.lambda[0]*params.Sigma[244];
  work.KKT[824] = 2*params.lambda[0]*params.Sigma[274];
  work.KKT[825] = 2*params.lambda[0]*params.Sigma[304];
  work.KKT[826] = 2*params.lambda[0]*params.Sigma[334];
  work.KKT[827] = 2*params.lambda[0]*params.Sigma[364];
  work.KKT[828] = 2*params.lambda[0]*params.Sigma[394];
  work.KKT[829] = 2*params.lambda[0]*params.Sigma[424];
  work.KKT[830] = 2*params.lambda[0]*params.Sigma[454];
  work.KKT[831] = 2*params.lambda[0]*params.Sigma[484];
  work.KKT[832] = 2*params.lambda[0]*params.Sigma[514];
  work.KKT[833] = 2*params.lambda[0]*params.Sigma[544];
  work.KKT[834] = 2*params.lambda[0]*params.Sigma[574];
  work.KKT[835] = 2*params.lambda[0]*params.Sigma[604];
  work.KKT[836] = 2*params.lambda[0]*params.Sigma[634];
  work.KKT[837] = 2*params.lambda[0]*params.Sigma[664];
  work.KKT[838] = 2*params.lambda[0]*params.Sigma[694];
  work.KKT[839] = 2*params.lambda[0]*params.Sigma[724];
  work.KKT[840] = 2*params.lambda[0]*params.Sigma[754];
  work.KKT[841] = 2*params.lambda[0]*params.Sigma[784];
  work.KKT[842] = 2*params.lambda[0]*params.Sigma[814];
  work.KKT[843] = 2*params.lambda[0]*params.Sigma[844];
  work.KKT[844] = 2*params.lambda[0]*params.Sigma[874];
  work.KKT[860] = 2*params.lambda[0]*params.Sigma[155];
  work.KKT[861] = 2*params.lambda[0]*params.Sigma[185];
  work.KKT[862] = 2*params.lambda[0]*params.Sigma[215];
  work.KKT[863] = 2*params.lambda[0]*params.Sigma[245];
  work.KKT[864] = 2*params.lambda[0]*params.Sigma[275];
  work.KKT[865] = 2*params.lambda[0]*params.Sigma[305];
  work.KKT[866] = 2*params.lambda[0]*params.Sigma[335];
  work.KKT[867] = 2*params.lambda[0]*params.Sigma[365];
  work.KKT[868] = 2*params.lambda[0]*params.Sigma[395];
  work.KKT[869] = 2*params.lambda[0]*params.Sigma[425];
  work.KKT[870] = 2*params.lambda[0]*params.Sigma[455];
  work.KKT[871] = 2*params.lambda[0]*params.Sigma[485];
  work.KKT[872] = 2*params.lambda[0]*params.Sigma[515];
  work.KKT[873] = 2*params.lambda[0]*params.Sigma[545];
  work.KKT[874] = 2*params.lambda[0]*params.Sigma[575];
  work.KKT[875] = 2*params.lambda[0]*params.Sigma[605];
  work.KKT[876] = 2*params.lambda[0]*params.Sigma[635];
  work.KKT[877] = 2*params.lambda[0]*params.Sigma[665];
  work.KKT[878] = 2*params.lambda[0]*params.Sigma[695];
  work.KKT[879] = 2*params.lambda[0]*params.Sigma[725];
  work.KKT[880] = 2*params.lambda[0]*params.Sigma[755];
  work.KKT[881] = 2*params.lambda[0]*params.Sigma[785];
  work.KKT[882] = 2*params.lambda[0]*params.Sigma[815];
  work.KKT[883] = 2*params.lambda[0]*params.Sigma[845];
  work.KKT[884] = 2*params.lambda[0]*params.Sigma[875];
  work.KKT[900] = 2*params.lambda[0]*params.Sigma[186];
  work.KKT[901] = 2*params.lambda[0]*params.Sigma[216];
  work.KKT[902] = 2*params.lambda[0]*params.Sigma[246];
  work.KKT[903] = 2*params.lambda[0]*params.Sigma[276];
  work.KKT[904] = 2*params.lambda[0]*params.Sigma[306];
  work.KKT[905] = 2*params.lambda[0]*params.Sigma[336];
  work.KKT[906] = 2*params.lambda[0]*params.Sigma[366];
  work.KKT[907] = 2*params.lambda[0]*params.Sigma[396];
  work.KKT[908] = 2*params.lambda[0]*params.Sigma[426];
  work.KKT[909] = 2*params.lambda[0]*params.Sigma[456];
  work.KKT[910] = 2*params.lambda[0]*params.Sigma[486];
  work.KKT[911] = 2*params.lambda[0]*params.Sigma[516];
  work.KKT[912] = 2*params.lambda[0]*params.Sigma[546];
  work.KKT[913] = 2*params.lambda[0]*params.Sigma[576];
  work.KKT[914] = 2*params.lambda[0]*params.Sigma[606];
  work.KKT[915] = 2*params.lambda[0]*params.Sigma[636];
  work.KKT[916] = 2*params.lambda[0]*params.Sigma[666];
  work.KKT[917] = 2*params.lambda[0]*params.Sigma[696];
  work.KKT[918] = 2*params.lambda[0]*params.Sigma[726];
  work.KKT[919] = 2*params.lambda[0]*params.Sigma[756];
  work.KKT[920] = 2*params.lambda[0]*params.Sigma[786];
  work.KKT[921] = 2*params.lambda[0]*params.Sigma[816];
  work.KKT[922] = 2*params.lambda[0]*params.Sigma[846];
  work.KKT[923] = 2*params.lambda[0]*params.Sigma[876];
  work.KKT[939] = 2*params.lambda[0]*params.Sigma[217];
  work.KKT[940] = 2*params.lambda[0]*params.Sigma[247];
  work.KKT[941] = 2*params.lambda[0]*params.Sigma[277];
  work.KKT[942] = 2*params.lambda[0]*params.Sigma[307];
  work.KKT[943] = 2*params.lambda[0]*params.Sigma[337];
  work.KKT[944] = 2*params.lambda[0]*params.Sigma[367];
  work.KKT[945] = 2*params.lambda[0]*params.Sigma[397];
  work.KKT[946] = 2*params.lambda[0]*params.Sigma[427];
  work.KKT[947] = 2*params.lambda[0]*params.Sigma[457];
  work.KKT[948] = 2*params.lambda[0]*params.Sigma[487];
  work.KKT[949] = 2*params.lambda[0]*params.Sigma[517];
  work.KKT[950] = 2*params.lambda[0]*params.Sigma[547];
  work.KKT[951] = 2*params.lambda[0]*params.Sigma[577];
  work.KKT[952] = 2*params.lambda[0]*params.Sigma[607];
  work.KKT[953] = 2*params.lambda[0]*params.Sigma[637];
  work.KKT[954] = 2*params.lambda[0]*params.Sigma[667];
  work.KKT[955] = 2*params.lambda[0]*params.Sigma[697];
  work.KKT[956] = 2*params.lambda[0]*params.Sigma[727];
  work.KKT[957] = 2*params.lambda[0]*params.Sigma[757];
  work.KKT[958] = 2*params.lambda[0]*params.Sigma[787];
  work.KKT[959] = 2*params.lambda[0]*params.Sigma[817];
  work.KKT[960] = 2*params.lambda[0]*params.Sigma[847];
  work.KKT[961] = 2*params.lambda[0]*params.Sigma[877];
  work.KKT[977] = 2*params.lambda[0]*params.Sigma[248];
  work.KKT[978] = 2*params.lambda[0]*params.Sigma[278];
  work.KKT[979] = 2*params.lambda[0]*params.Sigma[308];
  work.KKT[980] = 2*params.lambda[0]*params.Sigma[338];
  work.KKT[981] = 2*params.lambda[0]*params.Sigma[368];
  work.KKT[982] = 2*params.lambda[0]*params.Sigma[398];
  work.KKT[983] = 2*params.lambda[0]*params.Sigma[428];
  work.KKT[984] = 2*params.lambda[0]*params.Sigma[458];
  work.KKT[985] = 2*params.lambda[0]*params.Sigma[488];
  work.KKT[986] = 2*params.lambda[0]*params.Sigma[518];
  work.KKT[987] = 2*params.lambda[0]*params.Sigma[548];
  work.KKT[988] = 2*params.lambda[0]*params.Sigma[578];
  work.KKT[989] = 2*params.lambda[0]*params.Sigma[608];
  work.KKT[990] = 2*params.lambda[0]*params.Sigma[638];
  work.KKT[991] = 2*params.lambda[0]*params.Sigma[668];
  work.KKT[992] = 2*params.lambda[0]*params.Sigma[698];
  work.KKT[993] = 2*params.lambda[0]*params.Sigma[728];
  work.KKT[994] = 2*params.lambda[0]*params.Sigma[758];
  work.KKT[995] = 2*params.lambda[0]*params.Sigma[788];
  work.KKT[996] = 2*params.lambda[0]*params.Sigma[818];
  work.KKT[997] = 2*params.lambda[0]*params.Sigma[848];
  work.KKT[998] = 2*params.lambda[0]*params.Sigma[878];
  work.KKT[1014] = 2*params.lambda[0]*params.Sigma[279];
  work.KKT[1015] = 2*params.lambda[0]*params.Sigma[309];
  work.KKT[1016] = 2*params.lambda[0]*params.Sigma[339];
  work.KKT[1017] = 2*params.lambda[0]*params.Sigma[369];
  work.KKT[1018] = 2*params.lambda[0]*params.Sigma[399];
  work.KKT[1019] = 2*params.lambda[0]*params.Sigma[429];
  work.KKT[1020] = 2*params.lambda[0]*params.Sigma[459];
  work.KKT[1021] = 2*params.lambda[0]*params.Sigma[489];
  work.KKT[1022] = 2*params.lambda[0]*params.Sigma[519];
  work.KKT[1023] = 2*params.lambda[0]*params.Sigma[549];
  work.KKT[1024] = 2*params.lambda[0]*params.Sigma[579];
  work.KKT[1025] = 2*params.lambda[0]*params.Sigma[609];
  work.KKT[1026] = 2*params.lambda[0]*params.Sigma[639];
  work.KKT[1027] = 2*params.lambda[0]*params.Sigma[669];
  work.KKT[1028] = 2*params.lambda[0]*params.Sigma[699];
  work.KKT[1029] = 2*params.lambda[0]*params.Sigma[729];
  work.KKT[1030] = 2*params.lambda[0]*params.Sigma[759];
  work.KKT[1031] = 2*params.lambda[0]*params.Sigma[789];
  work.KKT[1032] = 2*params.lambda[0]*params.Sigma[819];
  work.KKT[1033] = 2*params.lambda[0]*params.Sigma[849];
  work.KKT[1034] = 2*params.lambda[0]*params.Sigma[879];
  work.KKT[1050] = 2*params.lambda[0]*params.Sigma[310];
  work.KKT[1051] = 2*params.lambda[0]*params.Sigma[340];
  work.KKT[1052] = 2*params.lambda[0]*params.Sigma[370];
  work.KKT[1053] = 2*params.lambda[0]*params.Sigma[400];
  work.KKT[1054] = 2*params.lambda[0]*params.Sigma[430];
  work.KKT[1055] = 2*params.lambda[0]*params.Sigma[460];
  work.KKT[1056] = 2*params.lambda[0]*params.Sigma[490];
  work.KKT[1057] = 2*params.lambda[0]*params.Sigma[520];
  work.KKT[1058] = 2*params.lambda[0]*params.Sigma[550];
  work.KKT[1059] = 2*params.lambda[0]*params.Sigma[580];
  work.KKT[1060] = 2*params.lambda[0]*params.Sigma[610];
  work.KKT[1061] = 2*params.lambda[0]*params.Sigma[640];
  work.KKT[1062] = 2*params.lambda[0]*params.Sigma[670];
  work.KKT[1063] = 2*params.lambda[0]*params.Sigma[700];
  work.KKT[1064] = 2*params.lambda[0]*params.Sigma[730];
  work.KKT[1065] = 2*params.lambda[0]*params.Sigma[760];
  work.KKT[1066] = 2*params.lambda[0]*params.Sigma[790];
  work.KKT[1067] = 2*params.lambda[0]*params.Sigma[820];
  work.KKT[1068] = 2*params.lambda[0]*params.Sigma[850];
  work.KKT[1069] = 2*params.lambda[0]*params.Sigma[880];
  work.KKT[1085] = 2*params.lambda[0]*params.Sigma[341];
  work.KKT[1086] = 2*params.lambda[0]*params.Sigma[371];
  work.KKT[1087] = 2*params.lambda[0]*params.Sigma[401];
  work.KKT[1088] = 2*params.lambda[0]*params.Sigma[431];
  work.KKT[1089] = 2*params.lambda[0]*params.Sigma[461];
  work.KKT[1090] = 2*params.lambda[0]*params.Sigma[491];
  work.KKT[1091] = 2*params.lambda[0]*params.Sigma[521];
  work.KKT[1092] = 2*params.lambda[0]*params.Sigma[551];
  work.KKT[1093] = 2*params.lambda[0]*params.Sigma[581];
  work.KKT[1094] = 2*params.lambda[0]*params.Sigma[611];
  work.KKT[1095] = 2*params.lambda[0]*params.Sigma[641];
  work.KKT[1096] = 2*params.lambda[0]*params.Sigma[671];
  work.KKT[1097] = 2*params.lambda[0]*params.Sigma[701];
  work.KKT[1098] = 2*params.lambda[0]*params.Sigma[731];
  work.KKT[1099] = 2*params.lambda[0]*params.Sigma[761];
  work.KKT[1100] = 2*params.lambda[0]*params.Sigma[791];
  work.KKT[1101] = 2*params.lambda[0]*params.Sigma[821];
  work.KKT[1102] = 2*params.lambda[0]*params.Sigma[851];
  work.KKT[1103] = 2*params.lambda[0]*params.Sigma[881];
  work.KKT[1119] = 2*params.lambda[0]*params.Sigma[372];
  work.KKT[1120] = 2*params.lambda[0]*params.Sigma[402];
  work.KKT[1121] = 2*params.lambda[0]*params.Sigma[432];
  work.KKT[1122] = 2*params.lambda[0]*params.Sigma[462];
  work.KKT[1123] = 2*params.lambda[0]*params.Sigma[492];
  work.KKT[1124] = 2*params.lambda[0]*params.Sigma[522];
  work.KKT[1125] = 2*params.lambda[0]*params.Sigma[552];
  work.KKT[1126] = 2*params.lambda[0]*params.Sigma[582];
  work.KKT[1127] = 2*params.lambda[0]*params.Sigma[612];
  work.KKT[1128] = 2*params.lambda[0]*params.Sigma[642];
  work.KKT[1129] = 2*params.lambda[0]*params.Sigma[672];
  work.KKT[1130] = 2*params.lambda[0]*params.Sigma[702];
  work.KKT[1131] = 2*params.lambda[0]*params.Sigma[732];
  work.KKT[1132] = 2*params.lambda[0]*params.Sigma[762];
  work.KKT[1133] = 2*params.lambda[0]*params.Sigma[792];
  work.KKT[1134] = 2*params.lambda[0]*params.Sigma[822];
  work.KKT[1135] = 2*params.lambda[0]*params.Sigma[852];
  work.KKT[1136] = 2*params.lambda[0]*params.Sigma[882];
  work.KKT[1152] = 2*params.lambda[0]*params.Sigma[403];
  work.KKT[1153] = 2*params.lambda[0]*params.Sigma[433];
  work.KKT[1154] = 2*params.lambda[0]*params.Sigma[463];
  work.KKT[1155] = 2*params.lambda[0]*params.Sigma[493];
  work.KKT[1156] = 2*params.lambda[0]*params.Sigma[523];
  work.KKT[1157] = 2*params.lambda[0]*params.Sigma[553];
  work.KKT[1158] = 2*params.lambda[0]*params.Sigma[583];
  work.KKT[1159] = 2*params.lambda[0]*params.Sigma[613];
  work.KKT[1160] = 2*params.lambda[0]*params.Sigma[643];
  work.KKT[1161] = 2*params.lambda[0]*params.Sigma[673];
  work.KKT[1162] = 2*params.lambda[0]*params.Sigma[703];
  work.KKT[1163] = 2*params.lambda[0]*params.Sigma[733];
  work.KKT[1164] = 2*params.lambda[0]*params.Sigma[763];
  work.KKT[1165] = 2*params.lambda[0]*params.Sigma[793];
  work.KKT[1166] = 2*params.lambda[0]*params.Sigma[823];
  work.KKT[1167] = 2*params.lambda[0]*params.Sigma[853];
  work.KKT[1168] = 2*params.lambda[0]*params.Sigma[883];
  work.KKT[1184] = 2*params.lambda[0]*params.Sigma[434];
  work.KKT[1185] = 2*params.lambda[0]*params.Sigma[464];
  work.KKT[1186] = 2*params.lambda[0]*params.Sigma[494];
  work.KKT[1187] = 2*params.lambda[0]*params.Sigma[524];
  work.KKT[1188] = 2*params.lambda[0]*params.Sigma[554];
  work.KKT[1189] = 2*params.lambda[0]*params.Sigma[584];
  work.KKT[1190] = 2*params.lambda[0]*params.Sigma[614];
  work.KKT[1191] = 2*params.lambda[0]*params.Sigma[644];
  work.KKT[1192] = 2*params.lambda[0]*params.Sigma[674];
  work.KKT[1193] = 2*params.lambda[0]*params.Sigma[704];
  work.KKT[1194] = 2*params.lambda[0]*params.Sigma[734];
  work.KKT[1195] = 2*params.lambda[0]*params.Sigma[764];
  work.KKT[1196] = 2*params.lambda[0]*params.Sigma[794];
  work.KKT[1197] = 2*params.lambda[0]*params.Sigma[824];
  work.KKT[1198] = 2*params.lambda[0]*params.Sigma[854];
  work.KKT[1199] = 2*params.lambda[0]*params.Sigma[884];
  work.KKT[1215] = 2*params.lambda[0]*params.Sigma[465];
  work.KKT[1216] = 2*params.lambda[0]*params.Sigma[495];
  work.KKT[1217] = 2*params.lambda[0]*params.Sigma[525];
  work.KKT[1218] = 2*params.lambda[0]*params.Sigma[555];
  work.KKT[1219] = 2*params.lambda[0]*params.Sigma[585];
  work.KKT[1220] = 2*params.lambda[0]*params.Sigma[615];
  work.KKT[1221] = 2*params.lambda[0]*params.Sigma[645];
  work.KKT[1222] = 2*params.lambda[0]*params.Sigma[675];
  work.KKT[1223] = 2*params.lambda[0]*params.Sigma[705];
  work.KKT[1224] = 2*params.lambda[0]*params.Sigma[735];
  work.KKT[1225] = 2*params.lambda[0]*params.Sigma[765];
  work.KKT[1226] = 2*params.lambda[0]*params.Sigma[795];
  work.KKT[1227] = 2*params.lambda[0]*params.Sigma[825];
  work.KKT[1228] = 2*params.lambda[0]*params.Sigma[855];
  work.KKT[1229] = 2*params.lambda[0]*params.Sigma[885];
  work.KKT[1245] = 2*params.lambda[0]*params.Sigma[496];
  work.KKT[1246] = 2*params.lambda[0]*params.Sigma[526];
  work.KKT[1247] = 2*params.lambda[0]*params.Sigma[556];
  work.KKT[1248] = 2*params.lambda[0]*params.Sigma[586];
  work.KKT[1249] = 2*params.lambda[0]*params.Sigma[616];
  work.KKT[1250] = 2*params.lambda[0]*params.Sigma[646];
  work.KKT[1251] = 2*params.lambda[0]*params.Sigma[676];
  work.KKT[1252] = 2*params.lambda[0]*params.Sigma[706];
  work.KKT[1253] = 2*params.lambda[0]*params.Sigma[736];
  work.KKT[1254] = 2*params.lambda[0]*params.Sigma[766];
  work.KKT[1255] = 2*params.lambda[0]*params.Sigma[796];
  work.KKT[1256] = 2*params.lambda[0]*params.Sigma[826];
  work.KKT[1257] = 2*params.lambda[0]*params.Sigma[856];
  work.KKT[1258] = 2*params.lambda[0]*params.Sigma[886];
  work.KKT[1274] = 2*params.lambda[0]*params.Sigma[527];
  work.KKT[1275] = 2*params.lambda[0]*params.Sigma[557];
  work.KKT[1276] = 2*params.lambda[0]*params.Sigma[587];
  work.KKT[1277] = 2*params.lambda[0]*params.Sigma[617];
  work.KKT[1278] = 2*params.lambda[0]*params.Sigma[647];
  work.KKT[1279] = 2*params.lambda[0]*params.Sigma[677];
  work.KKT[1280] = 2*params.lambda[0]*params.Sigma[707];
  work.KKT[1281] = 2*params.lambda[0]*params.Sigma[737];
  work.KKT[1282] = 2*params.lambda[0]*params.Sigma[767];
  work.KKT[1283] = 2*params.lambda[0]*params.Sigma[797];
  work.KKT[1284] = 2*params.lambda[0]*params.Sigma[827];
  work.KKT[1285] = 2*params.lambda[0]*params.Sigma[857];
  work.KKT[1286] = 2*params.lambda[0]*params.Sigma[887];
  work.KKT[1302] = 2*params.lambda[0]*params.Sigma[558];
  work.KKT[1303] = 2*params.lambda[0]*params.Sigma[588];
  work.KKT[1304] = 2*params.lambda[0]*params.Sigma[618];
  work.KKT[1305] = 2*params.lambda[0]*params.Sigma[648];
  work.KKT[1306] = 2*params.lambda[0]*params.Sigma[678];
  work.KKT[1307] = 2*params.lambda[0]*params.Sigma[708];
  work.KKT[1308] = 2*params.lambda[0]*params.Sigma[738];
  work.KKT[1309] = 2*params.lambda[0]*params.Sigma[768];
  work.KKT[1310] = 2*params.lambda[0]*params.Sigma[798];
  work.KKT[1311] = 2*params.lambda[0]*params.Sigma[828];
  work.KKT[1312] = 2*params.lambda[0]*params.Sigma[858];
  work.KKT[1313] = 2*params.lambda[0]*params.Sigma[888];
  work.KKT[1329] = 2*params.lambda[0]*params.Sigma[589];
  work.KKT[1330] = 2*params.lambda[0]*params.Sigma[619];
  work.KKT[1331] = 2*params.lambda[0]*params.Sigma[649];
  work.KKT[1332] = 2*params.lambda[0]*params.Sigma[679];
  work.KKT[1333] = 2*params.lambda[0]*params.Sigma[709];
  work.KKT[1334] = 2*params.lambda[0]*params.Sigma[739];
  work.KKT[1335] = 2*params.lambda[0]*params.Sigma[769];
  work.KKT[1336] = 2*params.lambda[0]*params.Sigma[799];
  work.KKT[1337] = 2*params.lambda[0]*params.Sigma[829];
  work.KKT[1338] = 2*params.lambda[0]*params.Sigma[859];
  work.KKT[1339] = 2*params.lambda[0]*params.Sigma[889];
  work.KKT[1355] = 2*params.lambda[0]*params.Sigma[620];
  work.KKT[1356] = 2*params.lambda[0]*params.Sigma[650];
  work.KKT[1357] = 2*params.lambda[0]*params.Sigma[680];
  work.KKT[1358] = 2*params.lambda[0]*params.Sigma[710];
  work.KKT[1359] = 2*params.lambda[0]*params.Sigma[740];
  work.KKT[1360] = 2*params.lambda[0]*params.Sigma[770];
  work.KKT[1361] = 2*params.lambda[0]*params.Sigma[800];
  work.KKT[1362] = 2*params.lambda[0]*params.Sigma[830];
  work.KKT[1363] = 2*params.lambda[0]*params.Sigma[860];
  work.KKT[1364] = 2*params.lambda[0]*params.Sigma[890];
  work.KKT[1380] = 2*params.lambda[0]*params.Sigma[651];
  work.KKT[1381] = 2*params.lambda[0]*params.Sigma[681];
  work.KKT[1382] = 2*params.lambda[0]*params.Sigma[711];
  work.KKT[1383] = 2*params.lambda[0]*params.Sigma[741];
  work.KKT[1384] = 2*params.lambda[0]*params.Sigma[771];
  work.KKT[1385] = 2*params.lambda[0]*params.Sigma[801];
  work.KKT[1386] = 2*params.lambda[0]*params.Sigma[831];
  work.KKT[1387] = 2*params.lambda[0]*params.Sigma[861];
  work.KKT[1388] = 2*params.lambda[0]*params.Sigma[891];
  work.KKT[1404] = 2*params.lambda[0]*params.Sigma[682];
  work.KKT[1405] = 2*params.lambda[0]*params.Sigma[712];
  work.KKT[1406] = 2*params.lambda[0]*params.Sigma[742];
  work.KKT[1407] = 2*params.lambda[0]*params.Sigma[772];
  work.KKT[1408] = 2*params.lambda[0]*params.Sigma[802];
  work.KKT[1409] = 2*params.lambda[0]*params.Sigma[832];
  work.KKT[1410] = 2*params.lambda[0]*params.Sigma[862];
  work.KKT[1411] = 2*params.lambda[0]*params.Sigma[892];
  work.KKT[1427] = 2*params.lambda[0]*params.Sigma[713];
  work.KKT[1428] = 2*params.lambda[0]*params.Sigma[743];
  work.KKT[1429] = 2*params.lambda[0]*params.Sigma[773];
  work.KKT[1430] = 2*params.lambda[0]*params.Sigma[803];
  work.KKT[1431] = 2*params.lambda[0]*params.Sigma[833];
  work.KKT[1432] = 2*params.lambda[0]*params.Sigma[863];
  work.KKT[1433] = 2*params.lambda[0]*params.Sigma[893];
  work.KKT[1449] = 2*params.lambda[0]*params.Sigma[744];
  work.KKT[1450] = 2*params.lambda[0]*params.Sigma[774];
  work.KKT[1451] = 2*params.lambda[0]*params.Sigma[804];
  work.KKT[1452] = 2*params.lambda[0]*params.Sigma[834];
  work.KKT[1453] = 2*params.lambda[0]*params.Sigma[864];
  work.KKT[1454] = 2*params.lambda[0]*params.Sigma[894];
  work.KKT[1470] = 2*params.lambda[0]*params.Sigma[775];
  work.KKT[1471] = 2*params.lambda[0]*params.Sigma[805];
  work.KKT[1472] = 2*params.lambda[0]*params.Sigma[835];
  work.KKT[1473] = 2*params.lambda[0]*params.Sigma[865];
  work.KKT[1474] = 2*params.lambda[0]*params.Sigma[895];
  work.KKT[1490] = 2*params.lambda[0]*params.Sigma[806];
  work.KKT[1491] = 2*params.lambda[0]*params.Sigma[836];
  work.KKT[1492] = 2*params.lambda[0]*params.Sigma[866];
  work.KKT[1493] = 2*params.lambda[0]*params.Sigma[896];
  work.KKT[1509] = 2*params.lambda[0]*params.Sigma[837];
  work.KKT[1510] = 2*params.lambda[0]*params.Sigma[867];
  work.KKT[1511] = 2*params.lambda[0]*params.Sigma[897];
  work.KKT[1527] = 2*params.lambda[0]*params.Sigma[868];
  work.KKT[1528] = 2*params.lambda[0]*params.Sigma[898];
  work.KKT[1529] = 2*params.lambda[0]*params.Sigma[899];
  work.KKT[570] = 2*params.rtp1[0];
  work.KKT[572] = 2*params.rtp1[0];
  work.KKT[574] = 2*params.rtp1[0];
  work.KKT[576] = 2*params.rtp1[0];
  work.KKT[578] = 2*params.rtp1[0];
  work.KKT[580] = 2*params.rtp1[0];
  work.KKT[582] = 2*params.rtp1[0];
  work.KKT[584] = 2*params.rtp1[0];
  work.KKT[586] = 2*params.rtp1[0];
  work.KKT[588] = 2*params.rtp1[0];
  work.KKT[590] = 2*params.rtp1[0];
  work.KKT[592] = 2*params.rtp1[0];
  work.KKT[594] = 2*params.rtp1[0];
  work.KKT[596] = 2*params.rtp1[0];
  work.KKT[598] = 2*params.rtp1[0];
  work.KKT[600] = 2*params.rtp1[0];
  work.KKT[602] = 2*params.rtp1[0];
  work.KKT[604] = 2*params.rtp1[0];
  work.KKT[606] = 2*params.rtp1[0];
  work.KKT[608] = 2*params.rtp1[0];
  work.KKT[610] = 2*params.rtp1[0];
  work.KKT[612] = 2*params.rtp1[0];
  work.KKT[614] = 2*params.rtp1[0];
  work.KKT[616] = 2*params.rtp1[0];
  work.KKT[618] = 2*params.rtp1[0];
  work.KKT[620] = 2*params.rtp1[0];
  work.KKT[622] = 2*params.rtp1[0];
  work.KKT[624] = 2*params.rtp1[0];
  work.KKT[626] = 2*params.rtp1[0];
  work.KKT[628] = 2*params.rtp1[0];
  work.KKT[640] = 2*params.S[0];
  work.KKT[685] = 2*params.S[1];
  work.KKT[729] = 2*params.S[2];
  work.KKT[772] = 2*params.S[3];
  work.KKT[814] = 2*params.S[4];
  work.KKT[855] = 2*params.S[5];
  work.KKT[895] = 2*params.S[6];
  work.KKT[934] = 2*params.S[7];
  work.KKT[972] = 2*params.S[8];
  work.KKT[1009] = 2*params.S[9];
  work.KKT[1045] = 2*params.S[10];
  work.KKT[1080] = 2*params.S[11];
  work.KKT[1114] = 2*params.S[12];
  work.KKT[1147] = 2*params.S[13];
  work.KKT[1179] = 2*params.S[14];
  work.KKT[1210] = 2*params.S[15];
  work.KKT[1240] = 2*params.S[16];
  work.KKT[1269] = 2*params.S[17];
  work.KKT[1297] = 2*params.S[18];
  work.KKT[1324] = 2*params.S[19];
  work.KKT[1350] = 2*params.S[20];
  work.KKT[1375] = 2*params.S[21];
  work.KKT[1399] = 2*params.S[22];
  work.KKT[1422] = 2*params.S[23];
  work.KKT[1444] = 2*params.S[24];
  work.KKT[1465] = 2*params.S[25];
  work.KKT[1485] = 2*params.S[26];
  work.KKT[1504] = 2*params.S[27];
  work.KKT[1522] = 2*params.S[28];
  work.KKT[1543] = 2*params.S[29];
  work.KKT[642] = 2*params.rtm1[0];
  work.KKT[687] = 2*params.rtm1[0];
  work.KKT[731] = 2*params.rtm1[0];
  work.KKT[774] = 2*params.rtm1[0];
  work.KKT[816] = 2*params.rtm1[0];
  work.KKT[857] = 2*params.rtm1[0];
  work.KKT[897] = 2*params.rtm1[0];
  work.KKT[936] = 2*params.rtm1[0];
  work.KKT[974] = 2*params.rtm1[0];
  work.KKT[1011] = 2*params.rtm1[0];
  work.KKT[1047] = 2*params.rtm1[0];
  work.KKT[1082] = 2*params.rtm1[0];
  work.KKT[1116] = 2*params.rtm1[0];
  work.KKT[1149] = 2*params.rtm1[0];
  work.KKT[1181] = 2*params.rtm1[0];
  work.KKT[1212] = 2*params.rtm1[0];
  work.KKT[1242] = 2*params.rtm1[0];
  work.KKT[1271] = 2*params.rtm1[0];
  work.KKT[1299] = 2*params.rtm1[0];
  work.KKT[1326] = 2*params.rtm1[0];
  work.KKT[1352] = 2*params.rtm1[0];
  work.KKT[1377] = 2*params.rtm1[0];
  work.KKT[1401] = 2*params.rtm1[0];
  work.KKT[1424] = 2*params.rtm1[0];
  work.KKT[1446] = 2*params.rtm1[0];
  work.KKT[1467] = 2*params.rtm1[0];
  work.KKT[1487] = 2*params.rtm1[0];
  work.KKT[1506] = 2*params.rtm1[0];
  work.KKT[1524] = 2*params.rtm1[0];
  work.KKT[1544] = 2*params.rtm1[0];
  work.KKT[0] = work.s_inv_z[0];
  work.KKT[2] = work.s_inv_z[1];
  work.KKT[4] = work.s_inv_z[2];
  work.KKT[6] = work.s_inv_z[3];
  work.KKT[8] = work.s_inv_z[4];
  work.KKT[10] = work.s_inv_z[5];
  work.KKT[12] = work.s_inv_z[6];
  work.KKT[14] = work.s_inv_z[7];
  work.KKT[16] = work.s_inv_z[8];
  work.KKT[18] = work.s_inv_z[9];
  work.KKT[20] = work.s_inv_z[10];
  work.KKT[22] = work.s_inv_z[11];
  work.KKT[24] = work.s_inv_z[12];
  work.KKT[26] = work.s_inv_z[13];
  work.KKT[28] = work.s_inv_z[14];
  work.KKT[30] = work.s_inv_z[15];
  work.KKT[32] = work.s_inv_z[16];
  work.KKT[34] = work.s_inv_z[17];
  work.KKT[36] = work.s_inv_z[18];
  work.KKT[38] = work.s_inv_z[19];
  work.KKT[40] = work.s_inv_z[20];
  work.KKT[42] = work.s_inv_z[21];
  work.KKT[44] = work.s_inv_z[22];
  work.KKT[46] = work.s_inv_z[23];
  work.KKT[48] = work.s_inv_z[24];
  work.KKT[50] = work.s_inv_z[25];
  work.KKT[52] = work.s_inv_z[26];
  work.KKT[54] = work.s_inv_z[27];
  work.KKT[56] = work.s_inv_z[28];
  work.KKT[58] = work.s_inv_z[29];
  work.KKT[60] = work.s_inv_z[30];
  work.KKT[62] = work.s_inv_z[31];
  work.KKT[64] = work.s_inv_z[32];
  work.KKT[66] = work.s_inv_z[33];
  work.KKT[68] = work.s_inv_z[34];
  work.KKT[70] = work.s_inv_z[35];
  work.KKT[72] = work.s_inv_z[36];
  work.KKT[74] = work.s_inv_z[37];
  work.KKT[76] = work.s_inv_z[38];
  work.KKT[78] = work.s_inv_z[39];
  work.KKT[80] = work.s_inv_z[40];
  work.KKT[82] = work.s_inv_z[41];
  work.KKT[84] = work.s_inv_z[42];
  work.KKT[86] = work.s_inv_z[43];
  work.KKT[88] = work.s_inv_z[44];
  work.KKT[90] = work.s_inv_z[45];
  work.KKT[92] = work.s_inv_z[46];
  work.KKT[94] = work.s_inv_z[47];
  work.KKT[96] = work.s_inv_z[48];
  work.KKT[98] = work.s_inv_z[49];
  work.KKT[100] = work.s_inv_z[50];
  work.KKT[102] = work.s_inv_z[51];
  work.KKT[104] = work.s_inv_z[52];
  work.KKT[106] = work.s_inv_z[53];
  work.KKT[108] = work.s_inv_z[54];
  work.KKT[110] = work.s_inv_z[55];
  work.KKT[112] = work.s_inv_z[56];
  work.KKT[114] = work.s_inv_z[57];
  work.KKT[116] = work.s_inv_z[58];
  work.KKT[118] = work.s_inv_z[59];
  work.KKT[120] = work.s_inv_z[60];
  work.KKT[122] = work.s_inv_z[61];
  work.KKT[124] = work.s_inv_z[62];
  work.KKT[126] = work.s_inv_z[63];
  work.KKT[128] = work.s_inv_z[64];
  work.KKT[130] = work.s_inv_z[65];
  work.KKT[132] = work.s_inv_z[66];
  work.KKT[134] = work.s_inv_z[67];
  work.KKT[136] = work.s_inv_z[68];
  work.KKT[138] = work.s_inv_z[69];
  work.KKT[140] = work.s_inv_z[70];
  work.KKT[142] = work.s_inv_z[71];
  work.KKT[144] = work.s_inv_z[72];
  work.KKT[146] = work.s_inv_z[73];
  work.KKT[148] = work.s_inv_z[74];
  work.KKT[150] = work.s_inv_z[75];
  work.KKT[152] = work.s_inv_z[76];
  work.KKT[154] = work.s_inv_z[77];
  work.KKT[156] = work.s_inv_z[78];
  work.KKT[158] = work.s_inv_z[79];
  work.KKT[160] = work.s_inv_z[80];
  work.KKT[162] = work.s_inv_z[81];
  work.KKT[164] = work.s_inv_z[82];
  work.KKT[166] = work.s_inv_z[83];
  work.KKT[168] = work.s_inv_z[84];
  work.KKT[170] = work.s_inv_z[85];
  work.KKT[172] = work.s_inv_z[86];
  work.KKT[174] = work.s_inv_z[87];
  work.KKT[176] = work.s_inv_z[88];
  work.KKT[178] = work.s_inv_z[89];
  work.KKT[180] = work.s_inv_z[90];
  work.KKT[182] = work.s_inv_z[91];
  work.KKT[184] = work.s_inv_z[92];
  work.KKT[186] = work.s_inv_z[93];
  work.KKT[188] = work.s_inv_z[94];
  work.KKT[190] = work.s_inv_z[95];
  work.KKT[192] = work.s_inv_z[96];
  work.KKT[194] = work.s_inv_z[97];
  work.KKT[196] = work.s_inv_z[98];
  work.KKT[198] = work.s_inv_z[99];
  work.KKT[200] = work.s_inv_z[100];
  work.KKT[202] = work.s_inv_z[101];
  work.KKT[204] = work.s_inv_z[102];
  work.KKT[206] = work.s_inv_z[103];
  work.KKT[208] = work.s_inv_z[104];
  work.KKT[210] = work.s_inv_z[105];
  work.KKT[212] = work.s_inv_z[106];
  work.KKT[214] = work.s_inv_z[107];
  work.KKT[216] = work.s_inv_z[108];
  work.KKT[218] = work.s_inv_z[109];
  work.KKT[220] = work.s_inv_z[110];
  work.KKT[222] = work.s_inv_z[111];
  work.KKT[224] = work.s_inv_z[112];
  work.KKT[226] = work.s_inv_z[113];
  work.KKT[228] = work.s_inv_z[114];
  work.KKT[230] = work.s_inv_z[115];
  work.KKT[232] = work.s_inv_z[116];
  work.KKT[234] = work.s_inv_z[117];
  work.KKT[236] = work.s_inv_z[118];
  work.KKT[238] = work.s_inv_z[119];
  work.KKT[240] = work.s_inv_z[120];
  work.KKT[242] = work.s_inv_z[121];
  work.KKT[244] = work.s_inv_z[122];
  work.KKT[246] = work.s_inv_z[123];
  work.KKT[248] = work.s_inv_z[124];
  work.KKT[250] = work.s_inv_z[125];
  work.KKT[252] = work.s_inv_z[126];
  work.KKT[254] = work.s_inv_z[127];
  work.KKT[256] = work.s_inv_z[128];
  work.KKT[258] = work.s_inv_z[129];
  work.KKT[260] = work.s_inv_z[130];
  work.KKT[262] = work.s_inv_z[131];
  work.KKT[264] = work.s_inv_z[132];
  work.KKT[266] = work.s_inv_z[133];
  work.KKT[268] = work.s_inv_z[134];
  work.KKT[270] = work.s_inv_z[135];
  work.KKT[272] = work.s_inv_z[136];
  work.KKT[274] = work.s_inv_z[137];
  work.KKT[276] = work.s_inv_z[138];
  work.KKT[278] = work.s_inv_z[139];
  work.KKT[280] = work.s_inv_z[140];
  work.KKT[282] = work.s_inv_z[141];
  work.KKT[284] = work.s_inv_z[142];
  work.KKT[286] = work.s_inv_z[143];
  work.KKT[288] = work.s_inv_z[144];
  work.KKT[290] = work.s_inv_z[145];
  work.KKT[292] = work.s_inv_z[146];
  work.KKT[294] = work.s_inv_z[147];
  work.KKT[296] = work.s_inv_z[148];
  work.KKT[298] = work.s_inv_z[149];
  work.KKT[1] = 1;
  work.KKT[3] = 1;
  work.KKT[5] = 1;
  work.KKT[7] = 1;
  work.KKT[9] = 1;
  work.KKT[11] = 1;
  work.KKT[13] = 1;
  work.KKT[15] = 1;
  work.KKT[17] = 1;
  work.KKT[19] = 1;
  work.KKT[21] = 1;
  work.KKT[23] = 1;
  work.KKT[25] = 1;
  work.KKT[27] = 1;
  work.KKT[29] = 1;
  work.KKT[31] = 1;
  work.KKT[33] = 1;
  work.KKT[35] = 1;
  work.KKT[37] = 1;
  work.KKT[39] = 1;
  work.KKT[41] = 1;
  work.KKT[43] = 1;
  work.KKT[45] = 1;
  work.KKT[47] = 1;
  work.KKT[49] = 1;
  work.KKT[51] = 1;
  work.KKT[53] = 1;
  work.KKT[55] = 1;
  work.KKT[57] = 1;
  work.KKT[59] = 1;
  work.KKT[61] = 1;
  work.KKT[63] = 1;
  work.KKT[65] = 1;
  work.KKT[67] = 1;
  work.KKT[69] = 1;
  work.KKT[71] = 1;
  work.KKT[73] = 1;
  work.KKT[75] = 1;
  work.KKT[77] = 1;
  work.KKT[79] = 1;
  work.KKT[81] = 1;
  work.KKT[83] = 1;
  work.KKT[85] = 1;
  work.KKT[87] = 1;
  work.KKT[89] = 1;
  work.KKT[91] = 1;
  work.KKT[93] = 1;
  work.KKT[95] = 1;
  work.KKT[97] = 1;
  work.KKT[99] = 1;
  work.KKT[101] = 1;
  work.KKT[103] = 1;
  work.KKT[105] = 1;
  work.KKT[107] = 1;
  work.KKT[109] = 1;
  work.KKT[111] = 1;
  work.KKT[113] = 1;
  work.KKT[115] = 1;
  work.KKT[117] = 1;
  work.KKT[119] = 1;
  work.KKT[121] = 1;
  work.KKT[123] = 1;
  work.KKT[125] = 1;
  work.KKT[127] = 1;
  work.KKT[129] = 1;
  work.KKT[131] = 1;
  work.KKT[133] = 1;
  work.KKT[135] = 1;
  work.KKT[137] = 1;
  work.KKT[139] = 1;
  work.KKT[141] = 1;
  work.KKT[143] = 1;
  work.KKT[145] = 1;
  work.KKT[147] = 1;
  work.KKT[149] = 1;
  work.KKT[151] = 1;
  work.KKT[153] = 1;
  work.KKT[155] = 1;
  work.KKT[157] = 1;
  work.KKT[159] = 1;
  work.KKT[161] = 1;
  work.KKT[163] = 1;
  work.KKT[165] = 1;
  work.KKT[167] = 1;
  work.KKT[169] = 1;
  work.KKT[171] = 1;
  work.KKT[173] = 1;
  work.KKT[175] = 1;
  work.KKT[177] = 1;
  work.KKT[179] = 1;
  work.KKT[181] = 1;
  work.KKT[183] = 1;
  work.KKT[185] = 1;
  work.KKT[187] = 1;
  work.KKT[189] = 1;
  work.KKT[191] = 1;
  work.KKT[193] = 1;
  work.KKT[195] = 1;
  work.KKT[197] = 1;
  work.KKT[199] = 1;
  work.KKT[201] = 1;
  work.KKT[203] = 1;
  work.KKT[205] = 1;
  work.KKT[207] = 1;
  work.KKT[209] = 1;
  work.KKT[211] = 1;
  work.KKT[213] = 1;
  work.KKT[215] = 1;
  work.KKT[217] = 1;
  work.KKT[219] = 1;
  work.KKT[221] = 1;
  work.KKT[223] = 1;
  work.KKT[225] = 1;
  work.KKT[227] = 1;
  work.KKT[229] = 1;
  work.KKT[231] = 1;
  work.KKT[233] = 1;
  work.KKT[235] = 1;
  work.KKT[237] = 1;
  work.KKT[239] = 1;
  work.KKT[241] = 1;
  work.KKT[243] = 1;
  work.KKT[245] = 1;
  work.KKT[247] = 1;
  work.KKT[249] = 1;
  work.KKT[251] = 1;
  work.KKT[253] = 1;
  work.KKT[255] = 1;
  work.KKT[257] = 1;
  work.KKT[259] = 1;
  work.KKT[261] = 1;
  work.KKT[263] = 1;
  work.KKT[265] = 1;
  work.KKT[267] = 1;
  work.KKT[269] = 1;
  work.KKT[271] = 1;
  work.KKT[273] = 1;
  work.KKT[275] = 1;
  work.KKT[277] = 1;
  work.KKT[279] = 1;
  work.KKT[281] = 1;
  work.KKT[283] = 1;
  work.KKT[285] = 1;
  work.KKT[287] = 1;
  work.KKT[289] = 1;
  work.KKT[291] = 1;
  work.KKT[293] = 1;
  work.KKT[295] = 1;
  work.KKT[297] = 1;
  work.KKT[299] = 1;
  work.KKT[630] = work.block_33[0];
  work.KKT[675] = work.block_33[0];
  work.KKT[719] = work.block_33[0];
  work.KKT[762] = work.block_33[0];
  work.KKT[804] = work.block_33[0];
  work.KKT[845] = work.block_33[0];
  work.KKT[885] = work.block_33[0];
  work.KKT[924] = work.block_33[0];
  work.KKT[962] = work.block_33[0];
  work.KKT[999] = work.block_33[0];
  work.KKT[1035] = work.block_33[0];
  work.KKT[1070] = work.block_33[0];
  work.KKT[1104] = work.block_33[0];
  work.KKT[1137] = work.block_33[0];
  work.KKT[1169] = work.block_33[0];
  work.KKT[1200] = work.block_33[0];
  work.KKT[1230] = work.block_33[0];
  work.KKT[1259] = work.block_33[0];
  work.KKT[1287] = work.block_33[0];
  work.KKT[1314] = work.block_33[0];
  work.KKT[1340] = work.block_33[0];
  work.KKT[1365] = work.block_33[0];
  work.KKT[1389] = work.block_33[0];
  work.KKT[1412] = work.block_33[0];
  work.KKT[1434] = work.block_33[0];
  work.KKT[1455] = work.block_33[0];
  work.KKT[1475] = work.block_33[0];
  work.KKT[1494] = work.block_33[0];
  work.KKT[1512] = work.block_33[0];
  work.KKT[1531] = work.block_33[0];
  work.KKT[302] = work.block_33[0];
  work.KKT[305] = work.block_33[0];
  work.KKT[308] = work.block_33[0];
  work.KKT[311] = work.block_33[0];
  work.KKT[314] = work.block_33[0];
  work.KKT[317] = work.block_33[0];
  work.KKT[320] = work.block_33[0];
  work.KKT[323] = work.block_33[0];
  work.KKT[326] = work.block_33[0];
  work.KKT[329] = work.block_33[0];
  work.KKT[332] = work.block_33[0];
  work.KKT[335] = work.block_33[0];
  work.KKT[338] = work.block_33[0];
  work.KKT[341] = work.block_33[0];
  work.KKT[344] = work.block_33[0];
  work.KKT[347] = work.block_33[0];
  work.KKT[350] = work.block_33[0];
  work.KKT[353] = work.block_33[0];
  work.KKT[356] = work.block_33[0];
  work.KKT[359] = work.block_33[0];
  work.KKT[362] = work.block_33[0];
  work.KKT[365] = work.block_33[0];
  work.KKT[368] = work.block_33[0];
  work.KKT[371] = work.block_33[0];
  work.KKT[374] = work.block_33[0];
  work.KKT[377] = work.block_33[0];
  work.KKT[380] = work.block_33[0];
  work.KKT[383] = work.block_33[0];
  work.KKT[386] = work.block_33[0];
  work.KKT[389] = work.block_33[0];
  work.KKT[392] = work.block_33[0];
  work.KKT[398] = work.block_33[0];
  work.KKT[404] = work.block_33[0];
  work.KKT[410] = work.block_33[0];
  work.KKT[416] = work.block_33[0];
  work.KKT[422] = work.block_33[0];
  work.KKT[428] = work.block_33[0];
  work.KKT[434] = work.block_33[0];
  work.KKT[440] = work.block_33[0];
  work.KKT[446] = work.block_33[0];
  work.KKT[452] = work.block_33[0];
  work.KKT[458] = work.block_33[0];
  work.KKT[464] = work.block_33[0];
  work.KKT[470] = work.block_33[0];
  work.KKT[476] = work.block_33[0];
  work.KKT[482] = work.block_33[0];
  work.KKT[488] = work.block_33[0];
  work.KKT[494] = work.block_33[0];
  work.KKT[500] = work.block_33[0];
  work.KKT[506] = work.block_33[0];
  work.KKT[512] = work.block_33[0];
  work.KKT[518] = work.block_33[0];
  work.KKT[524] = work.block_33[0];
  work.KKT[530] = work.block_33[0];
  work.KKT[536] = work.block_33[0];
  work.KKT[542] = work.block_33[0];
  work.KKT[548] = work.block_33[0];
  work.KKT[554] = work.block_33[0];
  work.KKT[560] = work.block_33[0];
  work.KKT[566] = work.block_33[0];
  work.KKT[394] = work.block_33[0];
  work.KKT[400] = work.block_33[0];
  work.KKT[406] = work.block_33[0];
  work.KKT[412] = work.block_33[0];
  work.KKT[418] = work.block_33[0];
  work.KKT[424] = work.block_33[0];
  work.KKT[430] = work.block_33[0];
  work.KKT[436] = work.block_33[0];
  work.KKT[442] = work.block_33[0];
  work.KKT[448] = work.block_33[0];
  work.KKT[454] = work.block_33[0];
  work.KKT[460] = work.block_33[0];
  work.KKT[466] = work.block_33[0];
  work.KKT[472] = work.block_33[0];
  work.KKT[478] = work.block_33[0];
  work.KKT[484] = work.block_33[0];
  work.KKT[490] = work.block_33[0];
  work.KKT[496] = work.block_33[0];
  work.KKT[502] = work.block_33[0];
  work.KKT[508] = work.block_33[0];
  work.KKT[514] = work.block_33[0];
  work.KKT[520] = work.block_33[0];
  work.KKT[526] = work.block_33[0];
  work.KKT[532] = work.block_33[0];
  work.KKT[538] = work.block_33[0];
  work.KKT[544] = work.block_33[0];
  work.KKT[550] = work.block_33[0];
  work.KKT[556] = work.block_33[0];
  work.KKT[562] = work.block_33[0];
  work.KKT[568] = work.block_33[0];
  work.KKT[633] = work.block_33[0];
  work.KKT[678] = work.block_33[0];
  work.KKT[722] = work.block_33[0];
  work.KKT[765] = work.block_33[0];
  work.KKT[807] = work.block_33[0];
  work.KKT[848] = work.block_33[0];
  work.KKT[888] = work.block_33[0];
  work.KKT[927] = work.block_33[0];
  work.KKT[965] = work.block_33[0];
  work.KKT[1002] = work.block_33[0];
  work.KKT[1038] = work.block_33[0];
  work.KKT[1073] = work.block_33[0];
  work.KKT[1107] = work.block_33[0];
  work.KKT[1140] = work.block_33[0];
  work.KKT[1172] = work.block_33[0];
  work.KKT[1203] = work.block_33[0];
  work.KKT[1233] = work.block_33[0];
  work.KKT[1262] = work.block_33[0];
  work.KKT[1290] = work.block_33[0];
  work.KKT[1317] = work.block_33[0];
  work.KKT[1343] = work.block_33[0];
  work.KKT[1368] = work.block_33[0];
  work.KKT[1392] = work.block_33[0];
  work.KKT[1415] = work.block_33[0];
  work.KKT[1437] = work.block_33[0];
  work.KKT[1458] = work.block_33[0];
  work.KKT[1478] = work.block_33[0];
  work.KKT[1497] = work.block_33[0];
  work.KKT[1515] = work.block_33[0];
  work.KKT[1534] = work.block_33[0];
  work.KKT[301] = -1;
  work.KKT[304] = -1;
  work.KKT[307] = -1;
  work.KKT[310] = -1;
  work.KKT[313] = -1;
  work.KKT[316] = -1;
  work.KKT[319] = -1;
  work.KKT[322] = -1;
  work.KKT[325] = -1;
  work.KKT[328] = -1;
  work.KKT[331] = -1;
  work.KKT[334] = -1;
  work.KKT[337] = -1;
  work.KKT[340] = -1;
  work.KKT[343] = -1;
  work.KKT[346] = -1;
  work.KKT[349] = -1;
  work.KKT[352] = -1;
  work.KKT[355] = -1;
  work.KKT[358] = -1;
  work.KKT[361] = -1;
  work.KKT[364] = -1;
  work.KKT[367] = -1;
  work.KKT[370] = -1;
  work.KKT[373] = -1;
  work.KKT[376] = -1;
  work.KKT[379] = -1;
  work.KKT[382] = -1;
  work.KKT[385] = -1;
  work.KKT[388] = -1;
  work.KKT[631] = -1;
  work.KKT[676] = -1;
  work.KKT[720] = -1;
  work.KKT[763] = -1;
  work.KKT[805] = -1;
  work.KKT[846] = -1;
  work.KKT[886] = -1;
  work.KKT[925] = -1;
  work.KKT[963] = -1;
  work.KKT[1000] = -1;
  work.KKT[1036] = -1;
  work.KKT[1071] = -1;
  work.KKT[1105] = -1;
  work.KKT[1138] = -1;
  work.KKT[1170] = -1;
  work.KKT[1201] = -1;
  work.KKT[1231] = -1;
  work.KKT[1260] = -1;
  work.KKT[1288] = -1;
  work.KKT[1315] = -1;
  work.KKT[1341] = -1;
  work.KKT[1366] = -1;
  work.KKT[1390] = -1;
  work.KKT[1413] = -1;
  work.KKT[1435] = -1;
  work.KKT[1456] = -1;
  work.KKT[1476] = -1;
  work.KKT[1495] = -1;
  work.KKT[1513] = -1;
  work.KKT[1532] = -1;
  work.KKT[632] = -1;
  work.KKT[677] = -1;
  work.KKT[721] = -1;
  work.KKT[764] = -1;
  work.KKT[806] = -1;
  work.KKT[847] = -1;
  work.KKT[887] = -1;
  work.KKT[926] = -1;
  work.KKT[964] = -1;
  work.KKT[1001] = -1;
  work.KKT[1037] = -1;
  work.KKT[1072] = -1;
  work.KKT[1106] = -1;
  work.KKT[1139] = -1;
  work.KKT[1171] = -1;
  work.KKT[1202] = -1;
  work.KKT[1232] = -1;
  work.KKT[1261] = -1;
  work.KKT[1289] = -1;
  work.KKT[1316] = -1;
  work.KKT[1342] = -1;
  work.KKT[1367] = -1;
  work.KKT[1391] = -1;
  work.KKT[1414] = -1;
  work.KKT[1436] = -1;
  work.KKT[1457] = -1;
  work.KKT[1477] = -1;
  work.KKT[1496] = -1;
  work.KKT[1514] = -1;
  work.KKT[1533] = -1;
  work.KKT[300] = -1;
  work.KKT[303] = -1;
  work.KKT[306] = -1;
  work.KKT[309] = -1;
  work.KKT[312] = -1;
  work.KKT[315] = -1;
  work.KKT[318] = -1;
  work.KKT[321] = -1;
  work.KKT[324] = -1;
  work.KKT[327] = -1;
  work.KKT[330] = -1;
  work.KKT[333] = -1;
  work.KKT[336] = -1;
  work.KKT[339] = -1;
  work.KKT[342] = -1;
  work.KKT[345] = -1;
  work.KKT[348] = -1;
  work.KKT[351] = -1;
  work.KKT[354] = -1;
  work.KKT[357] = -1;
  work.KKT[360] = -1;
  work.KKT[363] = -1;
  work.KKT[366] = -1;
  work.KKT[369] = -1;
  work.KKT[372] = -1;
  work.KKT[375] = -1;
  work.KKT[378] = -1;
  work.KKT[381] = -1;
  work.KKT[384] = -1;
  work.KKT[387] = -1;
  work.KKT[390] = -1;
  work.KKT[396] = -1;
  work.KKT[402] = -1;
  work.KKT[408] = -1;
  work.KKT[414] = -1;
  work.KKT[420] = -1;
  work.KKT[426] = -1;
  work.KKT[432] = -1;
  work.KKT[438] = -1;
  work.KKT[444] = -1;
  work.KKT[450] = -1;
  work.KKT[456] = -1;
  work.KKT[462] = -1;
  work.KKT[468] = -1;
  work.KKT[474] = -1;
  work.KKT[480] = -1;
  work.KKT[486] = -1;
  work.KKT[492] = -1;
  work.KKT[498] = -1;
  work.KKT[504] = -1;
  work.KKT[510] = -1;
  work.KKT[516] = -1;
  work.KKT[522] = -1;
  work.KKT[528] = -1;
  work.KKT[534] = -1;
  work.KKT[540] = -1;
  work.KKT[546] = -1;
  work.KKT[552] = -1;
  work.KKT[558] = -1;
  work.KKT[564] = -1;
  work.KKT[393] = 1;
  work.KKT[399] = 1;
  work.KKT[405] = 1;
  work.KKT[411] = 1;
  work.KKT[417] = 1;
  work.KKT[423] = 1;
  work.KKT[429] = 1;
  work.KKT[435] = 1;
  work.KKT[441] = 1;
  work.KKT[447] = 1;
  work.KKT[453] = 1;
  work.KKT[459] = 1;
  work.KKT[465] = 1;
  work.KKT[471] = 1;
  work.KKT[477] = 1;
  work.KKT[483] = 1;
  work.KKT[489] = 1;
  work.KKT[495] = 1;
  work.KKT[501] = 1;
  work.KKT[507] = 1;
  work.KKT[513] = 1;
  work.KKT[519] = 1;
  work.KKT[525] = 1;
  work.KKT[531] = 1;
  work.KKT[537] = 1;
  work.KKT[543] = 1;
  work.KKT[549] = 1;
  work.KKT[555] = 1;
  work.KKT[561] = 1;
  work.KKT[567] = 1;
  work.KKT[391] = -1;
  work.KKT[397] = -1;
  work.KKT[403] = -1;
  work.KKT[409] = -1;
  work.KKT[415] = -1;
  work.KKT[421] = -1;
  work.KKT[427] = -1;
  work.KKT[433] = -1;
  work.KKT[439] = -1;
  work.KKT[445] = -1;
  work.KKT[451] = -1;
  work.KKT[457] = -1;
  work.KKT[463] = -1;
  work.KKT[469] = -1;
  work.KKT[475] = -1;
  work.KKT[481] = -1;
  work.KKT[487] = -1;
  work.KKT[493] = -1;
  work.KKT[499] = -1;
  work.KKT[505] = -1;
  work.KKT[511] = -1;
  work.KKT[517] = -1;
  work.KKT[523] = -1;
  work.KKT[529] = -1;
  work.KKT[535] = -1;
  work.KKT[541] = -1;
  work.KKT[547] = -1;
  work.KKT[553] = -1;
  work.KKT[559] = -1;
  work.KKT[565] = -1;
  work.KKT[395] = -1;
  work.KKT[401] = -1;
  work.KKT[407] = -1;
  work.KKT[413] = -1;
  work.KKT[419] = -1;
  work.KKT[425] = -1;
  work.KKT[431] = -1;
  work.KKT[437] = -1;
  work.KKT[443] = -1;
  work.KKT[449] = -1;
  work.KKT[455] = -1;
  work.KKT[461] = -1;
  work.KKT[467] = -1;
  work.KKT[473] = -1;
  work.KKT[479] = -1;
  work.KKT[485] = -1;
  work.KKT[491] = -1;
  work.KKT[497] = -1;
  work.KKT[503] = -1;
  work.KKT[509] = -1;
  work.KKT[515] = -1;
  work.KKT[521] = -1;
  work.KKT[527] = -1;
  work.KKT[533] = -1;
  work.KKT[539] = -1;
  work.KKT[545] = -1;
  work.KKT[551] = -1;
  work.KKT[557] = -1;
  work.KKT[563] = -1;
  work.KKT[569] = -1;
  work.KKT[634] = -1;
  work.KKT[679] = -1;
  work.KKT[723] = -1;
  work.KKT[766] = -1;
  work.KKT[808] = -1;
  work.KKT[849] = -1;
  work.KKT[889] = -1;
  work.KKT[928] = -1;
  work.KKT[966] = -1;
  work.KKT[1003] = -1;
  work.KKT[1039] = -1;
  work.KKT[1074] = -1;
  work.KKT[1108] = -1;
  work.KKT[1141] = -1;
  work.KKT[1173] = -1;
  work.KKT[1204] = -1;
  work.KKT[1234] = -1;
  work.KKT[1263] = -1;
  work.KKT[1291] = -1;
  work.KKT[1318] = -1;
  work.KKT[1344] = -1;
  work.KKT[1369] = -1;
  work.KKT[1393] = -1;
  work.KKT[1416] = -1;
  work.KKT[1438] = -1;
  work.KKT[1459] = -1;
  work.KKT[1479] = -1;
  work.KKT[1498] = -1;
  work.KKT[1516] = -1;
  work.KKT[1535] = -1;
  work.KKT[635] = -1;
  work.KKT[680] = -1;
  work.KKT[724] = -1;
  work.KKT[767] = -1;
  work.KKT[809] = -1;
  work.KKT[850] = -1;
  work.KKT[890] = -1;
  work.KKT[929] = -1;
  work.KKT[967] = -1;
  work.KKT[1004] = -1;
  work.KKT[1040] = -1;
  work.KKT[1075] = -1;
  work.KKT[1109] = -1;
  work.KKT[1142] = -1;
  work.KKT[1174] = -1;
  work.KKT[1205] = -1;
  work.KKT[1235] = -1;
  work.KKT[1264] = -1;
  work.KKT[1292] = -1;
  work.KKT[1319] = -1;
  work.KKT[1345] = -1;
  work.KKT[1370] = -1;
  work.KKT[1394] = -1;
  work.KKT[1417] = -1;
  work.KKT[1439] = -1;
  work.KKT[1460] = -1;
  work.KKT[1480] = -1;
  work.KKT[1499] = -1;
  work.KKT[1517] = -1;
  work.KKT[1536] = -1;
  work.KKT[644] = -1;
  work.KKT[689] = -1;
  work.KKT[733] = -1;
  work.KKT[776] = -1;
  work.KKT[818] = -1;
  work.KKT[859] = -1;
  work.KKT[899] = -1;
  work.KKT[938] = -1;
  work.KKT[976] = -1;
  work.KKT[1013] = -1;
  work.KKT[1049] = -1;
  work.KKT[1084] = -1;
  work.KKT[1118] = -1;
  work.KKT[1151] = -1;
  work.KKT[1183] = -1;
  work.KKT[1214] = -1;
  work.KKT[1244] = -1;
  work.KKT[1273] = -1;
  work.KKT[1301] = -1;
  work.KKT[1328] = -1;
  work.KKT[1354] = -1;
  work.KKT[1379] = -1;
  work.KKT[1403] = -1;
  work.KKT[1426] = -1;
  work.KKT[1448] = -1;
  work.KKT[1469] = -1;
  work.KKT[1489] = -1;
  work.KKT[1508] = -1;
  work.KKT[1526] = -1;
  work.KKT[1530] = -1;
  work.KKT[641] = 1;
  work.KKT[686] = 1;
  work.KKT[730] = 1;
  work.KKT[773] = 1;
  work.KKT[815] = 1;
  work.KKT[856] = 1;
  work.KKT[896] = 1;
  work.KKT[935] = 1;
  work.KKT[973] = 1;
  work.KKT[1010] = 1;
  work.KKT[1046] = 1;
  work.KKT[1081] = 1;
  work.KKT[1115] = 1;
  work.KKT[1148] = 1;
  work.KKT[1180] = 1;
  work.KKT[1211] = 1;
  work.KKT[1241] = 1;
  work.KKT[1270] = 1;
  work.KKT[1298] = 1;
  work.KKT[1325] = 1;
  work.KKT[1351] = 1;
  work.KKT[1376] = 1;
  work.KKT[1400] = 1;
  work.KKT[1423] = 1;
  work.KKT[1445] = 1;
  work.KKT[1466] = 1;
  work.KKT[1486] = 1;
  work.KKT[1505] = 1;
  work.KKT[1523] = 1;
  work.KKT[1537] = 1;
  work.KKT[643] = 1;
  work.KKT[688] = 1;
  work.KKT[732] = 1;
  work.KKT[775] = 1;
  work.KKT[817] = 1;
  work.KKT[858] = 1;
  work.KKT[898] = 1;
  work.KKT[937] = 1;
  work.KKT[975] = 1;
  work.KKT[1012] = 1;
  work.KKT[1048] = 1;
  work.KKT[1083] = 1;
  work.KKT[1117] = 1;
  work.KKT[1150] = 1;
  work.KKT[1182] = 1;
  work.KKT[1213] = 1;
  work.KKT[1243] = 1;
  work.KKT[1272] = 1;
  work.KKT[1300] = 1;
  work.KKT[1327] = 1;
  work.KKT[1353] = 1;
  work.KKT[1378] = 1;
  work.KKT[1402] = 1;
  work.KKT[1425] = 1;
  work.KKT[1447] = 1;
  work.KKT[1468] = 1;
  work.KKT[1488] = 1;
  work.KKT[1507] = 1;
  work.KKT[1525] = 1;
  work.KKT[1538] = 1;
  work.KKT[571] = -1;
  work.KKT[573] = -1;
  work.KKT[575] = -1;
  work.KKT[577] = -1;
  work.KKT[579] = -1;
  work.KKT[581] = -1;
  work.KKT[583] = -1;
  work.KKT[585] = -1;
  work.KKT[587] = -1;
  work.KKT[589] = -1;
  work.KKT[591] = -1;
  work.KKT[593] = -1;
  work.KKT[595] = -1;
  work.KKT[597] = -1;
  work.KKT[599] = -1;
  work.KKT[601] = -1;
  work.KKT[603] = -1;
  work.KKT[605] = -1;
  work.KKT[607] = -1;
  work.KKT[609] = -1;
  work.KKT[611] = -1;
  work.KKT[613] = -1;
  work.KKT[615] = -1;
  work.KKT[617] = -1;
  work.KKT[619] = -1;
  work.KKT[621] = -1;
  work.KKT[623] = -1;
  work.KKT[625] = -1;
  work.KKT[627] = -1;
  work.KKT[629] = -1;
  work.KKT[636] = -params.r_bar[0];
  work.KKT[681] = -params.r_bar[1];
  work.KKT[725] = -params.r_bar[2];
  work.KKT[768] = -params.r_bar[3];
  work.KKT[810] = -params.r_bar[4];
  work.KKT[851] = -params.r_bar[5];
  work.KKT[891] = -params.r_bar[6];
  work.KKT[930] = -params.r_bar[7];
  work.KKT[968] = -params.r_bar[8];
  work.KKT[1005] = -params.r_bar[9];
  work.KKT[1041] = -params.r_bar[10];
  work.KKT[1076] = -params.r_bar[11];
  work.KKT[1110] = -params.r_bar[12];
  work.KKT[1143] = -params.r_bar[13];
  work.KKT[1175] = -params.r_bar[14];
  work.KKT[1206] = -params.r_bar[15];
  work.KKT[1236] = -params.r_bar[16];
  work.KKT[1265] = -params.r_bar[17];
  work.KKT[1293] = -params.r_bar[18];
  work.KKT[1320] = -params.r_bar[19];
  work.KKT[1346] = -params.r_bar[20];
  work.KKT[1371] = -params.r_bar[21];
  work.KKT[1395] = -params.r_bar[22];
  work.KKT[1418] = -params.r_bar[23];
  work.KKT[1440] = -params.r_bar[24];
  work.KKT[1461] = -params.r_bar[25];
  work.KKT[1481] = -params.r_bar[26];
  work.KKT[1500] = -params.r_bar[27];
  work.KKT[1518] = -params.r_bar[28];
  work.KKT[1539] = -params.r_bar[29];
  work.KKT[637] = -params.r_bar[0];
  work.KKT[682] = -params.r_bar[1];
  work.KKT[726] = -params.r_bar[2];
  work.KKT[769] = -params.r_bar[3];
  work.KKT[811] = -params.r_bar[4];
  work.KKT[852] = -params.r_bar[5];
  work.KKT[892] = -params.r_bar[6];
  work.KKT[931] = -params.r_bar[7];
  work.KKT[969] = -params.r_bar[8];
  work.KKT[1006] = -params.r_bar[9];
  work.KKT[1042] = -params.r_bar[10];
  work.KKT[1077] = -params.r_bar[11];
  work.KKT[1111] = -params.r_bar[12];
  work.KKT[1144] = -params.r_bar[13];
  work.KKT[1176] = -params.r_bar[14];
  work.KKT[1207] = -params.r_bar[15];
  work.KKT[1237] = -params.r_bar[16];
  work.KKT[1266] = -params.r_bar[17];
  work.KKT[1294] = -params.r_bar[18];
  work.KKT[1321] = -params.r_bar[19];
  work.KKT[1347] = -params.r_bar[20];
  work.KKT[1372] = -params.r_bar[21];
  work.KKT[1396] = -params.r_bar[22];
  work.KKT[1419] = -params.r_bar[23];
  work.KKT[1441] = -params.r_bar[24];
  work.KKT[1462] = -params.r_bar[25];
  work.KKT[1482] = -params.r_bar[26];
  work.KKT[1501] = -params.r_bar[27];
  work.KKT[1519] = -params.r_bar[28];
  work.KKT[1540] = -params.r_bar[29];
  work.KKT[638] = params.av[0];
  work.KKT[683] = params.av[0];
  work.KKT[727] = params.av[0];
  work.KKT[770] = params.av[0];
  work.KKT[812] = params.av[0];
  work.KKT[853] = params.av[0];
  work.KKT[893] = params.av[0];
  work.KKT[932] = params.av[0];
  work.KKT[970] = params.av[0];
  work.KKT[1007] = params.av[0];
  work.KKT[1043] = params.av[0];
  work.KKT[1078] = params.av[0];
  work.KKT[1112] = params.av[0];
  work.KKT[1145] = params.av[0];
  work.KKT[1177] = params.av[0];
  work.KKT[1208] = params.av[0];
  work.KKT[1238] = params.av[0];
  work.KKT[1267] = params.av[0];
  work.KKT[1295] = params.av[0];
  work.KKT[1322] = params.av[0];
  work.KKT[1348] = params.av[0];
  work.KKT[1373] = params.av[0];
  work.KKT[1397] = params.av[0];
  work.KKT[1420] = params.av[0];
  work.KKT[1442] = params.av[0];
  work.KKT[1463] = params.av[0];
  work.KKT[1483] = params.av[0];
  work.KKT[1502] = params.av[0];
  work.KKT[1520] = params.av[0];
  work.KKT[1541] = params.av[0];
  work.KKT[639] = params.az[0];
  work.KKT[684] = params.az[0];
  work.KKT[728] = params.az[0];
  work.KKT[771] = params.az[0];
  work.KKT[813] = params.az[0];
  work.KKT[854] = params.az[0];
  work.KKT[894] = params.az[0];
  work.KKT[933] = params.az[0];
  work.KKT[971] = params.az[0];
  work.KKT[1008] = params.az[0];
  work.KKT[1044] = params.az[0];
  work.KKT[1079] = params.az[0];
  work.KKT[1113] = params.az[0];
  work.KKT[1146] = params.az[0];
  work.KKT[1178] = params.az[0];
  work.KKT[1209] = params.az[0];
  work.KKT[1239] = params.az[0];
  work.KKT[1268] = params.az[0];
  work.KKT[1296] = params.az[0];
  work.KKT[1323] = params.az[0];
  work.KKT[1349] = params.az[0];
  work.KKT[1374] = params.az[0];
  work.KKT[1398] = params.az[0];
  work.KKT[1421] = params.az[0];
  work.KKT[1443] = params.az[0];
  work.KKT[1464] = params.az[0];
  work.KKT[1484] = params.az[0];
  work.KKT[1503] = params.az[0];
  work.KKT[1521] = params.az[0];
  work.KKT[1542] = params.az[0];
}

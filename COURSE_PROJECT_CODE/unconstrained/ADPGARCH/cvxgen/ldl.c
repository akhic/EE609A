/* Produced by CVXGEN, 2011-10-19 15:59:15 -0700.  */
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
  work.v[0] = target[90];
  work.v[1] = target[91];
  work.v[2] = target[92];
  work.v[3] = target[93];
  work.v[4] = target[94];
  work.v[5] = target[95];
  work.v[6] = target[96];
  work.v[7] = target[97];
  work.v[8] = target[98];
  work.v[9] = target[99];
  work.v[10] = target[100];
  work.v[11] = target[101];
  work.v[12] = target[102];
  work.v[13] = target[103];
  work.v[14] = target[104];
  work.v[15] = target[105];
  work.v[16] = target[106];
  work.v[17] = target[107];
  work.v[18] = target[108];
  work.v[19] = target[109];
  work.v[20] = target[110];
  work.v[21] = target[111];
  work.v[22] = target[112];
  work.v[23] = target[113];
  work.v[24] = target[114];
  work.v[25] = target[115];
  work.v[26] = target[116];
  work.v[27] = target[117];
  work.v[28] = target[118];
  work.v[29] = target[119];
  work.v[30] = target[120];
  work.v[31] = target[121];
  work.v[32] = target[122];
  work.v[33] = target[123];
  work.v[34] = target[124];
  work.v[35] = target[125];
  work.v[36] = target[126];
  work.v[37] = target[127];
  work.v[38] = target[128];
  work.v[39] = target[129];
  work.v[40] = target[130];
  work.v[41] = target[131];
  work.v[42] = target[132];
  work.v[43] = target[133];
  work.v[44] = target[134];
  work.v[45] = target[135];
  work.v[46] = target[136];
  work.v[47] = target[137];
  work.v[48] = target[138];
  work.v[49] = target[139];
  work.v[50] = target[140];
  work.v[51] = target[141];
  work.v[52] = target[142];
  work.v[53] = target[143];
  work.v[54] = target[144];
  work.v[55] = target[145];
  work.v[56] = target[146];
  work.v[57] = target[147];
  work.v[58] = target[148];
  work.v[59] = target[149];
  work.v[60] = target[150];
  work.v[61] = target[151];
  work.v[62] = target[152];
  work.v[63] = target[153];
  work.v[64] = target[154];
  work.v[65] = target[155];
  work.v[66] = target[156];
  work.v[67] = target[157];
  work.v[68] = target[158];
  work.v[69] = target[159];
  work.v[70] = target[160];
  work.v[71] = target[161];
  work.v[72] = target[162];
  work.v[73] = target[163];
  work.v[74] = target[164];
  work.v[75] = target[165];
  work.v[76] = target[166];
  work.v[77] = target[167];
  work.v[78] = target[168];
  work.v[79] = target[169];
  work.v[80] = target[170];
  work.v[81] = target[171];
  work.v[82] = target[172];
  work.v[83] = target[173];
  work.v[84] = target[174];
  work.v[85] = target[175];
  work.v[86] = target[176];
  work.v[87] = target[177];
  work.v[88] = target[178];
  work.v[89] = target[179];
  work.v[90] = target[180];
  work.v[91] = target[181];
  work.v[92] = target[182];
  work.v[93] = target[183];
  work.v[94] = target[184];
  work.v[95] = target[185];
  work.v[96] = target[186];
  work.v[97] = target[187];
  work.v[98] = target[188];
  work.v[99] = target[189];
  work.v[100] = target[190];
  work.v[101] = target[191];
  work.v[102] = target[192];
  work.v[103] = target[193];
  work.v[104] = target[194];
  work.v[105] = target[195];
  work.v[106] = target[196];
  work.v[107] = target[197];
  work.v[108] = target[198];
  work.v[109] = target[199];
  work.v[110] = target[200];
  work.v[111] = target[201];
  work.v[112] = target[202];
  work.v[113] = target[203];
  work.v[114] = target[204];
  work.v[115] = target[205];
  work.v[116] = target[206];
  work.v[117] = target[207];
  work.v[118] = target[208];
  work.v[119] = target[209];
  work.v[120] = target[0];
  work.v[121] = target[240]-work.L[0]*work.v[30]-work.L[1]*work.v[120];
  work.v[122] = target[210]-work.L[2]*work.v[0]-work.L[3]*work.v[120]-work.L[4]*work.v[121];
  work.v[123] = target[1];
  work.v[124] = target[241]-work.L[5]*work.v[31]-work.L[6]*work.v[123];
  work.v[125] = target[211]-work.L[7]*work.v[1]-work.L[8]*work.v[123]-work.L[9]*work.v[124];
  work.v[126] = target[2];
  work.v[127] = target[242]-work.L[10]*work.v[32]-work.L[11]*work.v[126];
  work.v[128] = target[212]-work.L[12]*work.v[2]-work.L[13]*work.v[126]-work.L[14]*work.v[127];
  work.v[129] = target[3];
  work.v[130] = target[243]-work.L[15]*work.v[33]-work.L[16]*work.v[129];
  work.v[131] = target[213]-work.L[17]*work.v[3]-work.L[18]*work.v[129]-work.L[19]*work.v[130];
  work.v[132] = target[4];
  work.v[133] = target[244]-work.L[20]*work.v[34]-work.L[21]*work.v[132];
  work.v[134] = target[214]-work.L[22]*work.v[4]-work.L[23]*work.v[132]-work.L[24]*work.v[133];
  work.v[135] = target[5];
  work.v[136] = target[245]-work.L[25]*work.v[35]-work.L[26]*work.v[135];
  work.v[137] = target[215]-work.L[27]*work.v[5]-work.L[28]*work.v[135]-work.L[29]*work.v[136];
  work.v[138] = target[6];
  work.v[139] = target[246]-work.L[30]*work.v[36]-work.L[31]*work.v[138];
  work.v[140] = target[216]-work.L[32]*work.v[6]-work.L[33]*work.v[138]-work.L[34]*work.v[139];
  work.v[141] = target[7];
  work.v[142] = target[247]-work.L[35]*work.v[37]-work.L[36]*work.v[141];
  work.v[143] = target[217]-work.L[37]*work.v[7]-work.L[38]*work.v[141]-work.L[39]*work.v[142];
  work.v[144] = target[8];
  work.v[145] = target[248]-work.L[40]*work.v[38]-work.L[41]*work.v[144];
  work.v[146] = target[218]-work.L[42]*work.v[8]-work.L[43]*work.v[144]-work.L[44]*work.v[145];
  work.v[147] = target[9];
  work.v[148] = target[249]-work.L[45]*work.v[39]-work.L[46]*work.v[147];
  work.v[149] = target[219]-work.L[47]*work.v[9]-work.L[48]*work.v[147]-work.L[49]*work.v[148];
  work.v[150] = target[10];
  work.v[151] = target[250]-work.L[50]*work.v[40]-work.L[51]*work.v[150];
  work.v[152] = target[220]-work.L[52]*work.v[10]-work.L[53]*work.v[150]-work.L[54]*work.v[151];
  work.v[153] = target[11];
  work.v[154] = target[251]-work.L[55]*work.v[41]-work.L[56]*work.v[153];
  work.v[155] = target[221]-work.L[57]*work.v[11]-work.L[58]*work.v[153]-work.L[59]*work.v[154];
  work.v[156] = target[12];
  work.v[157] = target[252]-work.L[60]*work.v[42]-work.L[61]*work.v[156];
  work.v[158] = target[222]-work.L[62]*work.v[12]-work.L[63]*work.v[156]-work.L[64]*work.v[157];
  work.v[159] = target[13];
  work.v[160] = target[253]-work.L[65]*work.v[43]-work.L[66]*work.v[159];
  work.v[161] = target[223]-work.L[67]*work.v[13]-work.L[68]*work.v[159]-work.L[69]*work.v[160];
  work.v[162] = target[14];
  work.v[163] = target[254]-work.L[70]*work.v[44]-work.L[71]*work.v[162];
  work.v[164] = target[224]-work.L[72]*work.v[14]-work.L[73]*work.v[162]-work.L[74]*work.v[163];
  work.v[165] = target[15];
  work.v[166] = target[255]-work.L[75]*work.v[45]-work.L[76]*work.v[165];
  work.v[167] = target[225]-work.L[77]*work.v[15]-work.L[78]*work.v[165]-work.L[79]*work.v[166];
  work.v[168] = target[16];
  work.v[169] = target[256]-work.L[80]*work.v[46]-work.L[81]*work.v[168];
  work.v[170] = target[226]-work.L[82]*work.v[16]-work.L[83]*work.v[168]-work.L[84]*work.v[169];
  work.v[171] = target[17];
  work.v[172] = target[257]-work.L[85]*work.v[47]-work.L[86]*work.v[171];
  work.v[173] = target[227]-work.L[87]*work.v[17]-work.L[88]*work.v[171]-work.L[89]*work.v[172];
  work.v[174] = target[18];
  work.v[175] = target[258]-work.L[90]*work.v[48]-work.L[91]*work.v[174];
  work.v[176] = target[228]-work.L[92]*work.v[18]-work.L[93]*work.v[174]-work.L[94]*work.v[175];
  work.v[177] = target[19];
  work.v[178] = target[259]-work.L[95]*work.v[49]-work.L[96]*work.v[177];
  work.v[179] = target[229]-work.L[97]*work.v[19]-work.L[98]*work.v[177]-work.L[99]*work.v[178];
  work.v[180] = target[20];
  work.v[181] = target[260]-work.L[100]*work.v[50]-work.L[101]*work.v[180];
  work.v[182] = target[230]-work.L[102]*work.v[20]-work.L[103]*work.v[180]-work.L[104]*work.v[181];
  work.v[183] = target[21];
  work.v[184] = target[261]-work.L[105]*work.v[51]-work.L[106]*work.v[183];
  work.v[185] = target[231]-work.L[107]*work.v[21]-work.L[108]*work.v[183]-work.L[109]*work.v[184];
  work.v[186] = target[22];
  work.v[187] = target[262]-work.L[110]*work.v[52]-work.L[111]*work.v[186];
  work.v[188] = target[232]-work.L[112]*work.v[22]-work.L[113]*work.v[186]-work.L[114]*work.v[187];
  work.v[189] = target[23];
  work.v[190] = target[263]-work.L[115]*work.v[53]-work.L[116]*work.v[189];
  work.v[191] = target[233]-work.L[117]*work.v[23]-work.L[118]*work.v[189]-work.L[119]*work.v[190];
  work.v[192] = target[24];
  work.v[193] = target[264]-work.L[120]*work.v[54]-work.L[121]*work.v[192];
  work.v[194] = target[234]-work.L[122]*work.v[24]-work.L[123]*work.v[192]-work.L[124]*work.v[193];
  work.v[195] = target[25];
  work.v[196] = target[265]-work.L[125]*work.v[55]-work.L[126]*work.v[195];
  work.v[197] = target[235]-work.L[127]*work.v[25]-work.L[128]*work.v[195]-work.L[129]*work.v[196];
  work.v[198] = target[26];
  work.v[199] = target[266]-work.L[130]*work.v[56]-work.L[131]*work.v[198];
  work.v[200] = target[236]-work.L[132]*work.v[26]-work.L[133]*work.v[198]-work.L[134]*work.v[199];
  work.v[201] = target[27];
  work.v[202] = target[267]-work.L[135]*work.v[57]-work.L[136]*work.v[201];
  work.v[203] = target[237]-work.L[137]*work.v[27]-work.L[138]*work.v[201]-work.L[139]*work.v[202];
  work.v[204] = target[28];
  work.v[205] = target[268]-work.L[140]*work.v[58]-work.L[141]*work.v[204];
  work.v[206] = target[238]-work.L[142]*work.v[28]-work.L[143]*work.v[204]-work.L[144]*work.v[205];
  work.v[207] = target[29];
  work.v[208] = target[269]-work.L[145]*work.v[59]-work.L[146]*work.v[207];
  work.v[209] = target[239]-work.L[147]*work.v[29]-work.L[148]*work.v[207]-work.L[149]*work.v[208];
  work.v[210] = target[30];
  work.v[211] = target[270]-work.L[150]*work.v[60]-work.L[151]*work.v[210];
  work.v[212] = target[300]-work.L[152]*work.v[90]-work.L[153]*work.v[210]-work.L[154]*work.v[211];
  work.v[213] = target[60]-work.L[155]*work.v[122]-work.L[156]*work.v[211]-work.L[157]*work.v[212];
  work.v[214] = target[31];
  work.v[215] = target[271]-work.L[158]*work.v[61]-work.L[159]*work.v[214];
  work.v[216] = target[301]-work.L[160]*work.v[91]-work.L[161]*work.v[214]-work.L[162]*work.v[215];
  work.v[217] = target[61]-work.L[163]*work.v[125]-work.L[164]*work.v[213]-work.L[165]*work.v[215]-work.L[166]*work.v[216];
  work.v[218] = target[32];
  work.v[219] = target[272]-work.L[167]*work.v[62]-work.L[168]*work.v[218];
  work.v[220] = target[302]-work.L[169]*work.v[92]-work.L[170]*work.v[218]-work.L[171]*work.v[219];
  work.v[221] = target[62]-work.L[172]*work.v[128]-work.L[173]*work.v[213]-work.L[174]*work.v[217]-work.L[175]*work.v[219]-work.L[176]*work.v[220];
  work.v[222] = target[33];
  work.v[223] = target[273]-work.L[177]*work.v[63]-work.L[178]*work.v[222];
  work.v[224] = target[303]-work.L[179]*work.v[93]-work.L[180]*work.v[222]-work.L[181]*work.v[223];
  work.v[225] = target[63]-work.L[182]*work.v[131]-work.L[183]*work.v[213]-work.L[184]*work.v[217]-work.L[185]*work.v[221]-work.L[186]*work.v[223]-work.L[187]*work.v[224];
  work.v[226] = target[34];
  work.v[227] = target[274]-work.L[188]*work.v[64]-work.L[189]*work.v[226];
  work.v[228] = target[304]-work.L[190]*work.v[94]-work.L[191]*work.v[226]-work.L[192]*work.v[227];
  work.v[229] = target[64]-work.L[193]*work.v[134]-work.L[194]*work.v[213]-work.L[195]*work.v[217]-work.L[196]*work.v[221]-work.L[197]*work.v[225]-work.L[198]*work.v[227]-work.L[199]*work.v[228];
  work.v[230] = target[35];
  work.v[231] = target[275]-work.L[200]*work.v[65]-work.L[201]*work.v[230];
  work.v[232] = target[305]-work.L[202]*work.v[95]-work.L[203]*work.v[230]-work.L[204]*work.v[231];
  work.v[233] = target[65]-work.L[205]*work.v[137]-work.L[206]*work.v[213]-work.L[207]*work.v[217]-work.L[208]*work.v[221]-work.L[209]*work.v[225]-work.L[210]*work.v[229]-work.L[211]*work.v[231]-work.L[212]*work.v[232];
  work.v[234] = target[36];
  work.v[235] = target[276]-work.L[213]*work.v[66]-work.L[214]*work.v[234];
  work.v[236] = target[306]-work.L[215]*work.v[96]-work.L[216]*work.v[234]-work.L[217]*work.v[235];
  work.v[237] = target[66]-work.L[218]*work.v[140]-work.L[219]*work.v[213]-work.L[220]*work.v[217]-work.L[221]*work.v[221]-work.L[222]*work.v[225]-work.L[223]*work.v[229]-work.L[224]*work.v[233]-work.L[225]*work.v[235]-work.L[226]*work.v[236];
  work.v[238] = target[37];
  work.v[239] = target[277]-work.L[227]*work.v[67]-work.L[228]*work.v[238];
  work.v[240] = target[307]-work.L[229]*work.v[97]-work.L[230]*work.v[238]-work.L[231]*work.v[239];
  work.v[241] = target[67]-work.L[232]*work.v[143]-work.L[233]*work.v[213]-work.L[234]*work.v[217]-work.L[235]*work.v[221]-work.L[236]*work.v[225]-work.L[237]*work.v[229]-work.L[238]*work.v[233]-work.L[239]*work.v[237]-work.L[240]*work.v[239]-work.L[241]*work.v[240];
  work.v[242] = target[38];
  work.v[243] = target[278]-work.L[242]*work.v[68]-work.L[243]*work.v[242];
  work.v[244] = target[308]-work.L[244]*work.v[98]-work.L[245]*work.v[242]-work.L[246]*work.v[243];
  work.v[245] = target[68]-work.L[247]*work.v[146]-work.L[248]*work.v[213]-work.L[249]*work.v[217]-work.L[250]*work.v[221]-work.L[251]*work.v[225]-work.L[252]*work.v[229]-work.L[253]*work.v[233]-work.L[254]*work.v[237]-work.L[255]*work.v[241]-work.L[256]*work.v[243]-work.L[257]*work.v[244];
  work.v[246] = target[39];
  work.v[247] = target[279]-work.L[258]*work.v[69]-work.L[259]*work.v[246];
  work.v[248] = target[309]-work.L[260]*work.v[99]-work.L[261]*work.v[246]-work.L[262]*work.v[247];
  work.v[249] = target[69]-work.L[263]*work.v[149]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221]-work.L[267]*work.v[225]-work.L[268]*work.v[229]-work.L[269]*work.v[233]-work.L[270]*work.v[237]-work.L[271]*work.v[241]-work.L[272]*work.v[245]-work.L[273]*work.v[247]-work.L[274]*work.v[248];
  work.v[250] = target[40];
  work.v[251] = target[280]-work.L[275]*work.v[70]-work.L[276]*work.v[250];
  work.v[252] = target[310]-work.L[277]*work.v[100]-work.L[278]*work.v[250]-work.L[279]*work.v[251];
  work.v[253] = target[70]-work.L[280]*work.v[152]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225]-work.L[285]*work.v[229]-work.L[286]*work.v[233]-work.L[287]*work.v[237]-work.L[288]*work.v[241]-work.L[289]*work.v[245]-work.L[290]*work.v[249]-work.L[291]*work.v[251]-work.L[292]*work.v[252];
  work.v[254] = target[41];
  work.v[255] = target[281]-work.L[293]*work.v[71]-work.L[294]*work.v[254];
  work.v[256] = target[311]-work.L[295]*work.v[101]-work.L[296]*work.v[254]-work.L[297]*work.v[255];
  work.v[257] = target[71]-work.L[298]*work.v[155]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229]-work.L[304]*work.v[233]-work.L[305]*work.v[237]-work.L[306]*work.v[241]-work.L[307]*work.v[245]-work.L[308]*work.v[249]-work.L[309]*work.v[253]-work.L[310]*work.v[255]-work.L[311]*work.v[256];
  work.v[258] = target[42];
  work.v[259] = target[282]-work.L[312]*work.v[72]-work.L[313]*work.v[258];
  work.v[260] = target[312]-work.L[314]*work.v[102]-work.L[315]*work.v[258]-work.L[316]*work.v[259];
  work.v[261] = target[72]-work.L[317]*work.v[158]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233]-work.L[324]*work.v[237]-work.L[325]*work.v[241]-work.L[326]*work.v[245]-work.L[327]*work.v[249]-work.L[328]*work.v[253]-work.L[329]*work.v[257]-work.L[330]*work.v[259]-work.L[331]*work.v[260];
  work.v[262] = target[43];
  work.v[263] = target[283]-work.L[332]*work.v[73]-work.L[333]*work.v[262];
  work.v[264] = target[313]-work.L[334]*work.v[103]-work.L[335]*work.v[262]-work.L[336]*work.v[263];
  work.v[265] = target[73]-work.L[337]*work.v[161]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237]-work.L[345]*work.v[241]-work.L[346]*work.v[245]-work.L[347]*work.v[249]-work.L[348]*work.v[253]-work.L[349]*work.v[257]-work.L[350]*work.v[261]-work.L[351]*work.v[263]-work.L[352]*work.v[264];
  work.v[266] = target[44];
  work.v[267] = target[284]-work.L[353]*work.v[74]-work.L[354]*work.v[266];
  work.v[268] = target[314]-work.L[355]*work.v[104]-work.L[356]*work.v[266]-work.L[357]*work.v[267];
  work.v[269] = target[74]-work.L[358]*work.v[164]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241]-work.L[367]*work.v[245]-work.L[368]*work.v[249]-work.L[369]*work.v[253]-work.L[370]*work.v[257]-work.L[371]*work.v[261]-work.L[372]*work.v[265]-work.L[373]*work.v[267]-work.L[374]*work.v[268];
  work.v[270] = target[45];
  work.v[271] = target[285]-work.L[375]*work.v[75]-work.L[376]*work.v[270];
  work.v[272] = target[315]-work.L[377]*work.v[105]-work.L[378]*work.v[270]-work.L[379]*work.v[271];
  work.v[273] = target[75]-work.L[380]*work.v[167]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245]-work.L[390]*work.v[249]-work.L[391]*work.v[253]-work.L[392]*work.v[257]-work.L[393]*work.v[261]-work.L[394]*work.v[265]-work.L[395]*work.v[269]-work.L[396]*work.v[271]-work.L[397]*work.v[272];
  work.v[274] = target[46];
  work.v[275] = target[286]-work.L[398]*work.v[76]-work.L[399]*work.v[274];
  work.v[276] = target[316]-work.L[400]*work.v[106]-work.L[401]*work.v[274]-work.L[402]*work.v[275];
  work.v[277] = target[76]-work.L[403]*work.v[170]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249]-work.L[414]*work.v[253]-work.L[415]*work.v[257]-work.L[416]*work.v[261]-work.L[417]*work.v[265]-work.L[418]*work.v[269]-work.L[419]*work.v[273]-work.L[420]*work.v[275]-work.L[421]*work.v[276];
  work.v[278] = target[47];
  work.v[279] = target[287]-work.L[422]*work.v[77]-work.L[423]*work.v[278];
  work.v[280] = target[317]-work.L[424]*work.v[107]-work.L[425]*work.v[278]-work.L[426]*work.v[279];
  work.v[281] = target[77]-work.L[427]*work.v[173]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253]-work.L[439]*work.v[257]-work.L[440]*work.v[261]-work.L[441]*work.v[265]-work.L[442]*work.v[269]-work.L[443]*work.v[273]-work.L[444]*work.v[277]-work.L[445]*work.v[279]-work.L[446]*work.v[280];
  work.v[282] = target[48];
  work.v[283] = target[288]-work.L[447]*work.v[78]-work.L[448]*work.v[282];
  work.v[284] = target[318]-work.L[449]*work.v[108]-work.L[450]*work.v[282]-work.L[451]*work.v[283];
  work.v[285] = target[78]-work.L[452]*work.v[176]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257]-work.L[465]*work.v[261]-work.L[466]*work.v[265]-work.L[467]*work.v[269]-work.L[468]*work.v[273]-work.L[469]*work.v[277]-work.L[470]*work.v[281]-work.L[471]*work.v[283]-work.L[472]*work.v[284];
  work.v[286] = target[49];
  work.v[287] = target[289]-work.L[473]*work.v[79]-work.L[474]*work.v[286];
  work.v[288] = target[319]-work.L[475]*work.v[109]-work.L[476]*work.v[286]-work.L[477]*work.v[287];
  work.v[289] = target[79]-work.L[478]*work.v[179]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261]-work.L[492]*work.v[265]-work.L[493]*work.v[269]-work.L[494]*work.v[273]-work.L[495]*work.v[277]-work.L[496]*work.v[281]-work.L[497]*work.v[285]-work.L[498]*work.v[287]-work.L[499]*work.v[288];
  work.v[290] = target[50];
  work.v[291] = target[290]-work.L[500]*work.v[80]-work.L[501]*work.v[290];
  work.v[292] = target[320]-work.L[502]*work.v[110]-work.L[503]*work.v[290]-work.L[504]*work.v[291];
  work.v[293] = target[80]-work.L[505]*work.v[182]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265]-work.L[520]*work.v[269]-work.L[521]*work.v[273]-work.L[522]*work.v[277]-work.L[523]*work.v[281]-work.L[524]*work.v[285]-work.L[525]*work.v[289]-work.L[526]*work.v[291]-work.L[527]*work.v[292];
  work.v[294] = target[51];
  work.v[295] = target[291]-work.L[528]*work.v[81]-work.L[529]*work.v[294];
  work.v[296] = target[321]-work.L[530]*work.v[111]-work.L[531]*work.v[294]-work.L[532]*work.v[295];
  work.v[297] = target[81]-work.L[533]*work.v[185]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269]-work.L[549]*work.v[273]-work.L[550]*work.v[277]-work.L[551]*work.v[281]-work.L[552]*work.v[285]-work.L[553]*work.v[289]-work.L[554]*work.v[293]-work.L[555]*work.v[295]-work.L[556]*work.v[296];
  work.v[298] = target[52];
  work.v[299] = target[292]-work.L[557]*work.v[82]-work.L[558]*work.v[298];
  work.v[300] = target[322]-work.L[559]*work.v[112]-work.L[560]*work.v[298]-work.L[561]*work.v[299];
  work.v[301] = target[82]-work.L[562]*work.v[188]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273]-work.L[579]*work.v[277]-work.L[580]*work.v[281]-work.L[581]*work.v[285]-work.L[582]*work.v[289]-work.L[583]*work.v[293]-work.L[584]*work.v[297]-work.L[585]*work.v[299]-work.L[586]*work.v[300];
  work.v[302] = target[53];
  work.v[303] = target[293]-work.L[587]*work.v[83]-work.L[588]*work.v[302];
  work.v[304] = target[323]-work.L[589]*work.v[113]-work.L[590]*work.v[302]-work.L[591]*work.v[303];
  work.v[305] = target[83]-work.L[592]*work.v[191]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277]-work.L[610]*work.v[281]-work.L[611]*work.v[285]-work.L[612]*work.v[289]-work.L[613]*work.v[293]-work.L[614]*work.v[297]-work.L[615]*work.v[301]-work.L[616]*work.v[303]-work.L[617]*work.v[304];
  work.v[306] = target[54];
  work.v[307] = target[294]-work.L[618]*work.v[84]-work.L[619]*work.v[306];
  work.v[308] = target[324]-work.L[620]*work.v[114]-work.L[621]*work.v[306]-work.L[622]*work.v[307];
  work.v[309] = target[84]-work.L[623]*work.v[194]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281]-work.L[642]*work.v[285]-work.L[643]*work.v[289]-work.L[644]*work.v[293]-work.L[645]*work.v[297]-work.L[646]*work.v[301]-work.L[647]*work.v[305]-work.L[648]*work.v[307]-work.L[649]*work.v[308];
  work.v[310] = target[55];
  work.v[311] = target[295]-work.L[650]*work.v[85]-work.L[651]*work.v[310];
  work.v[312] = target[325]-work.L[652]*work.v[115]-work.L[653]*work.v[310]-work.L[654]*work.v[311];
  work.v[313] = target[85]-work.L[655]*work.v[197]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285]-work.L[675]*work.v[289]-work.L[676]*work.v[293]-work.L[677]*work.v[297]-work.L[678]*work.v[301]-work.L[679]*work.v[305]-work.L[680]*work.v[309]-work.L[681]*work.v[311]-work.L[682]*work.v[312];
  work.v[314] = target[56];
  work.v[315] = target[296]-work.L[683]*work.v[86]-work.L[684]*work.v[314];
  work.v[316] = target[326]-work.L[685]*work.v[116]-work.L[686]*work.v[314]-work.L[687]*work.v[315];
  work.v[317] = target[86]-work.L[688]*work.v[200]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289]-work.L[709]*work.v[293]-work.L[710]*work.v[297]-work.L[711]*work.v[301]-work.L[712]*work.v[305]-work.L[713]*work.v[309]-work.L[714]*work.v[313]-work.L[715]*work.v[315]-work.L[716]*work.v[316];
  work.v[318] = target[57];
  work.v[319] = target[297]-work.L[717]*work.v[87]-work.L[718]*work.v[318];
  work.v[320] = target[327]-work.L[719]*work.v[117]-work.L[720]*work.v[318]-work.L[721]*work.v[319];
  work.v[321] = target[87]-work.L[722]*work.v[203]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293]-work.L[744]*work.v[297]-work.L[745]*work.v[301]-work.L[746]*work.v[305]-work.L[747]*work.v[309]-work.L[748]*work.v[313]-work.L[749]*work.v[317]-work.L[750]*work.v[319]-work.L[751]*work.v[320];
  work.v[322] = target[58];
  work.v[323] = target[298]-work.L[752]*work.v[88]-work.L[753]*work.v[322];
  work.v[324] = target[328]-work.L[754]*work.v[118]-work.L[755]*work.v[322]-work.L[756]*work.v[323];
  work.v[325] = target[88]-work.L[757]*work.v[206]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297]-work.L[780]*work.v[301]-work.L[781]*work.v[305]-work.L[782]*work.v[309]-work.L[783]*work.v[313]-work.L[784]*work.v[317]-work.L[785]*work.v[321]-work.L[786]*work.v[323]-work.L[787]*work.v[324];
  work.v[326] = target[59];
  work.v[327] = target[89]-work.L[788]*work.v[209]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301]-work.L[812]*work.v[305]-work.L[813]*work.v[309]-work.L[814]*work.v[313]-work.L[815]*work.v[317]-work.L[816]*work.v[321]-work.L[817]*work.v[325];
  work.v[328] = target[299]-work.L[818]*work.v[89]-work.L[819]*work.v[326]-work.L[820]*work.v[327];
  work.v[329] = target[329]-work.L[821]*work.v[119]-work.L[822]*work.v[326]-work.L[823]*work.v[327]-work.L[824]*work.v[328];
  /* Diagonal scaling. Assume correctness of work.d_inv. */
  for (i = 0; i < 330; i++)
    work.v[i] *= work.d_inv[i];
  /* Back substitution */
  work.v[328] -= work.L[824]*work.v[329];
  work.v[327] -= work.L[820]*work.v[328]+work.L[823]*work.v[329];
  work.v[326] -= work.L[819]*work.v[328]+work.L[822]*work.v[329];
  work.v[325] -= work.L[817]*work.v[327];
  work.v[324] -= work.L[787]*work.v[325];
  work.v[323] -= work.L[756]*work.v[324]+work.L[786]*work.v[325];
  work.v[322] -= work.L[753]*work.v[323]+work.L[755]*work.v[324];
  work.v[321] -= work.L[785]*work.v[325]+work.L[816]*work.v[327];
  work.v[320] -= work.L[751]*work.v[321];
  work.v[319] -= work.L[721]*work.v[320]+work.L[750]*work.v[321];
  work.v[318] -= work.L[718]*work.v[319]+work.L[720]*work.v[320];
  work.v[317] -= work.L[749]*work.v[321]+work.L[784]*work.v[325]+work.L[815]*work.v[327];
  work.v[316] -= work.L[716]*work.v[317];
  work.v[315] -= work.L[687]*work.v[316]+work.L[715]*work.v[317];
  work.v[314] -= work.L[684]*work.v[315]+work.L[686]*work.v[316];
  work.v[313] -= work.L[714]*work.v[317]+work.L[748]*work.v[321]+work.L[783]*work.v[325]+work.L[814]*work.v[327];
  work.v[312] -= work.L[682]*work.v[313];
  work.v[311] -= work.L[654]*work.v[312]+work.L[681]*work.v[313];
  work.v[310] -= work.L[651]*work.v[311]+work.L[653]*work.v[312];
  work.v[309] -= work.L[680]*work.v[313]+work.L[713]*work.v[317]+work.L[747]*work.v[321]+work.L[782]*work.v[325]+work.L[813]*work.v[327];
  work.v[308] -= work.L[649]*work.v[309];
  work.v[307] -= work.L[622]*work.v[308]+work.L[648]*work.v[309];
  work.v[306] -= work.L[619]*work.v[307]+work.L[621]*work.v[308];
  work.v[305] -= work.L[647]*work.v[309]+work.L[679]*work.v[313]+work.L[712]*work.v[317]+work.L[746]*work.v[321]+work.L[781]*work.v[325]+work.L[812]*work.v[327];
  work.v[304] -= work.L[617]*work.v[305];
  work.v[303] -= work.L[591]*work.v[304]+work.L[616]*work.v[305];
  work.v[302] -= work.L[588]*work.v[303]+work.L[590]*work.v[304];
  work.v[301] -= work.L[615]*work.v[305]+work.L[646]*work.v[309]+work.L[678]*work.v[313]+work.L[711]*work.v[317]+work.L[745]*work.v[321]+work.L[780]*work.v[325]+work.L[811]*work.v[327];
  work.v[300] -= work.L[586]*work.v[301];
  work.v[299] -= work.L[561]*work.v[300]+work.L[585]*work.v[301];
  work.v[298] -= work.L[558]*work.v[299]+work.L[560]*work.v[300];
  work.v[297] -= work.L[584]*work.v[301]+work.L[614]*work.v[305]+work.L[645]*work.v[309]+work.L[677]*work.v[313]+work.L[710]*work.v[317]+work.L[744]*work.v[321]+work.L[779]*work.v[325]+work.L[810]*work.v[327];
  work.v[296] -= work.L[556]*work.v[297];
  work.v[295] -= work.L[532]*work.v[296]+work.L[555]*work.v[297];
  work.v[294] -= work.L[529]*work.v[295]+work.L[531]*work.v[296];
  work.v[293] -= work.L[554]*work.v[297]+work.L[583]*work.v[301]+work.L[613]*work.v[305]+work.L[644]*work.v[309]+work.L[676]*work.v[313]+work.L[709]*work.v[317]+work.L[743]*work.v[321]+work.L[778]*work.v[325]+work.L[809]*work.v[327];
  work.v[292] -= work.L[527]*work.v[293];
  work.v[291] -= work.L[504]*work.v[292]+work.L[526]*work.v[293];
  work.v[290] -= work.L[501]*work.v[291]+work.L[503]*work.v[292];
  work.v[289] -= work.L[525]*work.v[293]+work.L[553]*work.v[297]+work.L[582]*work.v[301]+work.L[612]*work.v[305]+work.L[643]*work.v[309]+work.L[675]*work.v[313]+work.L[708]*work.v[317]+work.L[742]*work.v[321]+work.L[777]*work.v[325]+work.L[808]*work.v[327];
  work.v[288] -= work.L[499]*work.v[289];
  work.v[287] -= work.L[477]*work.v[288]+work.L[498]*work.v[289];
  work.v[286] -= work.L[474]*work.v[287]+work.L[476]*work.v[288];
  work.v[285] -= work.L[497]*work.v[289]+work.L[524]*work.v[293]+work.L[552]*work.v[297]+work.L[581]*work.v[301]+work.L[611]*work.v[305]+work.L[642]*work.v[309]+work.L[674]*work.v[313]+work.L[707]*work.v[317]+work.L[741]*work.v[321]+work.L[776]*work.v[325]+work.L[807]*work.v[327];
  work.v[284] -= work.L[472]*work.v[285];
  work.v[283] -= work.L[451]*work.v[284]+work.L[471]*work.v[285];
  work.v[282] -= work.L[448]*work.v[283]+work.L[450]*work.v[284];
  work.v[281] -= work.L[470]*work.v[285]+work.L[496]*work.v[289]+work.L[523]*work.v[293]+work.L[551]*work.v[297]+work.L[580]*work.v[301]+work.L[610]*work.v[305]+work.L[641]*work.v[309]+work.L[673]*work.v[313]+work.L[706]*work.v[317]+work.L[740]*work.v[321]+work.L[775]*work.v[325]+work.L[806]*work.v[327];
  work.v[280] -= work.L[446]*work.v[281];
  work.v[279] -= work.L[426]*work.v[280]+work.L[445]*work.v[281];
  work.v[278] -= work.L[423]*work.v[279]+work.L[425]*work.v[280];
  work.v[277] -= work.L[444]*work.v[281]+work.L[469]*work.v[285]+work.L[495]*work.v[289]+work.L[522]*work.v[293]+work.L[550]*work.v[297]+work.L[579]*work.v[301]+work.L[609]*work.v[305]+work.L[640]*work.v[309]+work.L[672]*work.v[313]+work.L[705]*work.v[317]+work.L[739]*work.v[321]+work.L[774]*work.v[325]+work.L[805]*work.v[327];
  work.v[276] -= work.L[421]*work.v[277];
  work.v[275] -= work.L[402]*work.v[276]+work.L[420]*work.v[277];
  work.v[274] -= work.L[399]*work.v[275]+work.L[401]*work.v[276];
  work.v[273] -= work.L[419]*work.v[277]+work.L[443]*work.v[281]+work.L[468]*work.v[285]+work.L[494]*work.v[289]+work.L[521]*work.v[293]+work.L[549]*work.v[297]+work.L[578]*work.v[301]+work.L[608]*work.v[305]+work.L[639]*work.v[309]+work.L[671]*work.v[313]+work.L[704]*work.v[317]+work.L[738]*work.v[321]+work.L[773]*work.v[325]+work.L[804]*work.v[327];
  work.v[272] -= work.L[397]*work.v[273];
  work.v[271] -= work.L[379]*work.v[272]+work.L[396]*work.v[273];
  work.v[270] -= work.L[376]*work.v[271]+work.L[378]*work.v[272];
  work.v[269] -= work.L[395]*work.v[273]+work.L[418]*work.v[277]+work.L[442]*work.v[281]+work.L[467]*work.v[285]+work.L[493]*work.v[289]+work.L[520]*work.v[293]+work.L[548]*work.v[297]+work.L[577]*work.v[301]+work.L[607]*work.v[305]+work.L[638]*work.v[309]+work.L[670]*work.v[313]+work.L[703]*work.v[317]+work.L[737]*work.v[321]+work.L[772]*work.v[325]+work.L[803]*work.v[327];
  work.v[268] -= work.L[374]*work.v[269];
  work.v[267] -= work.L[357]*work.v[268]+work.L[373]*work.v[269];
  work.v[266] -= work.L[354]*work.v[267]+work.L[356]*work.v[268];
  work.v[265] -= work.L[372]*work.v[269]+work.L[394]*work.v[273]+work.L[417]*work.v[277]+work.L[441]*work.v[281]+work.L[466]*work.v[285]+work.L[492]*work.v[289]+work.L[519]*work.v[293]+work.L[547]*work.v[297]+work.L[576]*work.v[301]+work.L[606]*work.v[305]+work.L[637]*work.v[309]+work.L[669]*work.v[313]+work.L[702]*work.v[317]+work.L[736]*work.v[321]+work.L[771]*work.v[325]+work.L[802]*work.v[327];
  work.v[264] -= work.L[352]*work.v[265];
  work.v[263] -= work.L[336]*work.v[264]+work.L[351]*work.v[265];
  work.v[262] -= work.L[333]*work.v[263]+work.L[335]*work.v[264];
  work.v[261] -= work.L[350]*work.v[265]+work.L[371]*work.v[269]+work.L[393]*work.v[273]+work.L[416]*work.v[277]+work.L[440]*work.v[281]+work.L[465]*work.v[285]+work.L[491]*work.v[289]+work.L[518]*work.v[293]+work.L[546]*work.v[297]+work.L[575]*work.v[301]+work.L[605]*work.v[305]+work.L[636]*work.v[309]+work.L[668]*work.v[313]+work.L[701]*work.v[317]+work.L[735]*work.v[321]+work.L[770]*work.v[325]+work.L[801]*work.v[327];
  work.v[260] -= work.L[331]*work.v[261];
  work.v[259] -= work.L[316]*work.v[260]+work.L[330]*work.v[261];
  work.v[258] -= work.L[313]*work.v[259]+work.L[315]*work.v[260];
  work.v[257] -= work.L[329]*work.v[261]+work.L[349]*work.v[265]+work.L[370]*work.v[269]+work.L[392]*work.v[273]+work.L[415]*work.v[277]+work.L[439]*work.v[281]+work.L[464]*work.v[285]+work.L[490]*work.v[289]+work.L[517]*work.v[293]+work.L[545]*work.v[297]+work.L[574]*work.v[301]+work.L[604]*work.v[305]+work.L[635]*work.v[309]+work.L[667]*work.v[313]+work.L[700]*work.v[317]+work.L[734]*work.v[321]+work.L[769]*work.v[325]+work.L[800]*work.v[327];
  work.v[256] -= work.L[311]*work.v[257];
  work.v[255] -= work.L[297]*work.v[256]+work.L[310]*work.v[257];
  work.v[254] -= work.L[294]*work.v[255]+work.L[296]*work.v[256];
  work.v[253] -= work.L[309]*work.v[257]+work.L[328]*work.v[261]+work.L[348]*work.v[265]+work.L[369]*work.v[269]+work.L[391]*work.v[273]+work.L[414]*work.v[277]+work.L[438]*work.v[281]+work.L[463]*work.v[285]+work.L[489]*work.v[289]+work.L[516]*work.v[293]+work.L[544]*work.v[297]+work.L[573]*work.v[301]+work.L[603]*work.v[305]+work.L[634]*work.v[309]+work.L[666]*work.v[313]+work.L[699]*work.v[317]+work.L[733]*work.v[321]+work.L[768]*work.v[325]+work.L[799]*work.v[327];
  work.v[252] -= work.L[292]*work.v[253];
  work.v[251] -= work.L[279]*work.v[252]+work.L[291]*work.v[253];
  work.v[250] -= work.L[276]*work.v[251]+work.L[278]*work.v[252];
  work.v[249] -= work.L[290]*work.v[253]+work.L[308]*work.v[257]+work.L[327]*work.v[261]+work.L[347]*work.v[265]+work.L[368]*work.v[269]+work.L[390]*work.v[273]+work.L[413]*work.v[277]+work.L[437]*work.v[281]+work.L[462]*work.v[285]+work.L[488]*work.v[289]+work.L[515]*work.v[293]+work.L[543]*work.v[297]+work.L[572]*work.v[301]+work.L[602]*work.v[305]+work.L[633]*work.v[309]+work.L[665]*work.v[313]+work.L[698]*work.v[317]+work.L[732]*work.v[321]+work.L[767]*work.v[325]+work.L[798]*work.v[327];
  work.v[248] -= work.L[274]*work.v[249];
  work.v[247] -= work.L[262]*work.v[248]+work.L[273]*work.v[249];
  work.v[246] -= work.L[259]*work.v[247]+work.L[261]*work.v[248];
  work.v[245] -= work.L[272]*work.v[249]+work.L[289]*work.v[253]+work.L[307]*work.v[257]+work.L[326]*work.v[261]+work.L[346]*work.v[265]+work.L[367]*work.v[269]+work.L[389]*work.v[273]+work.L[412]*work.v[277]+work.L[436]*work.v[281]+work.L[461]*work.v[285]+work.L[487]*work.v[289]+work.L[514]*work.v[293]+work.L[542]*work.v[297]+work.L[571]*work.v[301]+work.L[601]*work.v[305]+work.L[632]*work.v[309]+work.L[664]*work.v[313]+work.L[697]*work.v[317]+work.L[731]*work.v[321]+work.L[766]*work.v[325]+work.L[797]*work.v[327];
  work.v[244] -= work.L[257]*work.v[245];
  work.v[243] -= work.L[246]*work.v[244]+work.L[256]*work.v[245];
  work.v[242] -= work.L[243]*work.v[243]+work.L[245]*work.v[244];
  work.v[241] -= work.L[255]*work.v[245]+work.L[271]*work.v[249]+work.L[288]*work.v[253]+work.L[306]*work.v[257]+work.L[325]*work.v[261]+work.L[345]*work.v[265]+work.L[366]*work.v[269]+work.L[388]*work.v[273]+work.L[411]*work.v[277]+work.L[435]*work.v[281]+work.L[460]*work.v[285]+work.L[486]*work.v[289]+work.L[513]*work.v[293]+work.L[541]*work.v[297]+work.L[570]*work.v[301]+work.L[600]*work.v[305]+work.L[631]*work.v[309]+work.L[663]*work.v[313]+work.L[696]*work.v[317]+work.L[730]*work.v[321]+work.L[765]*work.v[325]+work.L[796]*work.v[327];
  work.v[240] -= work.L[241]*work.v[241];
  work.v[239] -= work.L[231]*work.v[240]+work.L[240]*work.v[241];
  work.v[238] -= work.L[228]*work.v[239]+work.L[230]*work.v[240];
  work.v[237] -= work.L[239]*work.v[241]+work.L[254]*work.v[245]+work.L[270]*work.v[249]+work.L[287]*work.v[253]+work.L[305]*work.v[257]+work.L[324]*work.v[261]+work.L[344]*work.v[265]+work.L[365]*work.v[269]+work.L[387]*work.v[273]+work.L[410]*work.v[277]+work.L[434]*work.v[281]+work.L[459]*work.v[285]+work.L[485]*work.v[289]+work.L[512]*work.v[293]+work.L[540]*work.v[297]+work.L[569]*work.v[301]+work.L[599]*work.v[305]+work.L[630]*work.v[309]+work.L[662]*work.v[313]+work.L[695]*work.v[317]+work.L[729]*work.v[321]+work.L[764]*work.v[325]+work.L[795]*work.v[327];
  work.v[236] -= work.L[226]*work.v[237];
  work.v[235] -= work.L[217]*work.v[236]+work.L[225]*work.v[237];
  work.v[234] -= work.L[214]*work.v[235]+work.L[216]*work.v[236];
  work.v[233] -= work.L[224]*work.v[237]+work.L[238]*work.v[241]+work.L[253]*work.v[245]+work.L[269]*work.v[249]+work.L[286]*work.v[253]+work.L[304]*work.v[257]+work.L[323]*work.v[261]+work.L[343]*work.v[265]+work.L[364]*work.v[269]+work.L[386]*work.v[273]+work.L[409]*work.v[277]+work.L[433]*work.v[281]+work.L[458]*work.v[285]+work.L[484]*work.v[289]+work.L[511]*work.v[293]+work.L[539]*work.v[297]+work.L[568]*work.v[301]+work.L[598]*work.v[305]+work.L[629]*work.v[309]+work.L[661]*work.v[313]+work.L[694]*work.v[317]+work.L[728]*work.v[321]+work.L[763]*work.v[325]+work.L[794]*work.v[327];
  work.v[232] -= work.L[212]*work.v[233];
  work.v[231] -= work.L[204]*work.v[232]+work.L[211]*work.v[233];
  work.v[230] -= work.L[201]*work.v[231]+work.L[203]*work.v[232];
  work.v[229] -= work.L[210]*work.v[233]+work.L[223]*work.v[237]+work.L[237]*work.v[241]+work.L[252]*work.v[245]+work.L[268]*work.v[249]+work.L[285]*work.v[253]+work.L[303]*work.v[257]+work.L[322]*work.v[261]+work.L[342]*work.v[265]+work.L[363]*work.v[269]+work.L[385]*work.v[273]+work.L[408]*work.v[277]+work.L[432]*work.v[281]+work.L[457]*work.v[285]+work.L[483]*work.v[289]+work.L[510]*work.v[293]+work.L[538]*work.v[297]+work.L[567]*work.v[301]+work.L[597]*work.v[305]+work.L[628]*work.v[309]+work.L[660]*work.v[313]+work.L[693]*work.v[317]+work.L[727]*work.v[321]+work.L[762]*work.v[325]+work.L[793]*work.v[327];
  work.v[228] -= work.L[199]*work.v[229];
  work.v[227] -= work.L[192]*work.v[228]+work.L[198]*work.v[229];
  work.v[226] -= work.L[189]*work.v[227]+work.L[191]*work.v[228];
  work.v[225] -= work.L[197]*work.v[229]+work.L[209]*work.v[233]+work.L[222]*work.v[237]+work.L[236]*work.v[241]+work.L[251]*work.v[245]+work.L[267]*work.v[249]+work.L[284]*work.v[253]+work.L[302]*work.v[257]+work.L[321]*work.v[261]+work.L[341]*work.v[265]+work.L[362]*work.v[269]+work.L[384]*work.v[273]+work.L[407]*work.v[277]+work.L[431]*work.v[281]+work.L[456]*work.v[285]+work.L[482]*work.v[289]+work.L[509]*work.v[293]+work.L[537]*work.v[297]+work.L[566]*work.v[301]+work.L[596]*work.v[305]+work.L[627]*work.v[309]+work.L[659]*work.v[313]+work.L[692]*work.v[317]+work.L[726]*work.v[321]+work.L[761]*work.v[325]+work.L[792]*work.v[327];
  work.v[224] -= work.L[187]*work.v[225];
  work.v[223] -= work.L[181]*work.v[224]+work.L[186]*work.v[225];
  work.v[222] -= work.L[178]*work.v[223]+work.L[180]*work.v[224];
  work.v[221] -= work.L[185]*work.v[225]+work.L[196]*work.v[229]+work.L[208]*work.v[233]+work.L[221]*work.v[237]+work.L[235]*work.v[241]+work.L[250]*work.v[245]+work.L[266]*work.v[249]+work.L[283]*work.v[253]+work.L[301]*work.v[257]+work.L[320]*work.v[261]+work.L[340]*work.v[265]+work.L[361]*work.v[269]+work.L[383]*work.v[273]+work.L[406]*work.v[277]+work.L[430]*work.v[281]+work.L[455]*work.v[285]+work.L[481]*work.v[289]+work.L[508]*work.v[293]+work.L[536]*work.v[297]+work.L[565]*work.v[301]+work.L[595]*work.v[305]+work.L[626]*work.v[309]+work.L[658]*work.v[313]+work.L[691]*work.v[317]+work.L[725]*work.v[321]+work.L[760]*work.v[325]+work.L[791]*work.v[327];
  work.v[220] -= work.L[176]*work.v[221];
  work.v[219] -= work.L[171]*work.v[220]+work.L[175]*work.v[221];
  work.v[218] -= work.L[168]*work.v[219]+work.L[170]*work.v[220];
  work.v[217] -= work.L[174]*work.v[221]+work.L[184]*work.v[225]+work.L[195]*work.v[229]+work.L[207]*work.v[233]+work.L[220]*work.v[237]+work.L[234]*work.v[241]+work.L[249]*work.v[245]+work.L[265]*work.v[249]+work.L[282]*work.v[253]+work.L[300]*work.v[257]+work.L[319]*work.v[261]+work.L[339]*work.v[265]+work.L[360]*work.v[269]+work.L[382]*work.v[273]+work.L[405]*work.v[277]+work.L[429]*work.v[281]+work.L[454]*work.v[285]+work.L[480]*work.v[289]+work.L[507]*work.v[293]+work.L[535]*work.v[297]+work.L[564]*work.v[301]+work.L[594]*work.v[305]+work.L[625]*work.v[309]+work.L[657]*work.v[313]+work.L[690]*work.v[317]+work.L[724]*work.v[321]+work.L[759]*work.v[325]+work.L[790]*work.v[327];
  work.v[216] -= work.L[166]*work.v[217];
  work.v[215] -= work.L[162]*work.v[216]+work.L[165]*work.v[217];
  work.v[214] -= work.L[159]*work.v[215]+work.L[161]*work.v[216];
  work.v[213] -= work.L[164]*work.v[217]+work.L[173]*work.v[221]+work.L[183]*work.v[225]+work.L[194]*work.v[229]+work.L[206]*work.v[233]+work.L[219]*work.v[237]+work.L[233]*work.v[241]+work.L[248]*work.v[245]+work.L[264]*work.v[249]+work.L[281]*work.v[253]+work.L[299]*work.v[257]+work.L[318]*work.v[261]+work.L[338]*work.v[265]+work.L[359]*work.v[269]+work.L[381]*work.v[273]+work.L[404]*work.v[277]+work.L[428]*work.v[281]+work.L[453]*work.v[285]+work.L[479]*work.v[289]+work.L[506]*work.v[293]+work.L[534]*work.v[297]+work.L[563]*work.v[301]+work.L[593]*work.v[305]+work.L[624]*work.v[309]+work.L[656]*work.v[313]+work.L[689]*work.v[317]+work.L[723]*work.v[321]+work.L[758]*work.v[325]+work.L[789]*work.v[327];
  work.v[212] -= work.L[157]*work.v[213];
  work.v[211] -= work.L[154]*work.v[212]+work.L[156]*work.v[213];
  work.v[210] -= work.L[151]*work.v[211]+work.L[153]*work.v[212];
  work.v[209] -= work.L[788]*work.v[327];
  work.v[208] -= work.L[149]*work.v[209];
  work.v[207] -= work.L[146]*work.v[208]+work.L[148]*work.v[209];
  work.v[206] -= work.L[757]*work.v[325];
  work.v[205] -= work.L[144]*work.v[206];
  work.v[204] -= work.L[141]*work.v[205]+work.L[143]*work.v[206];
  work.v[203] -= work.L[722]*work.v[321];
  work.v[202] -= work.L[139]*work.v[203];
  work.v[201] -= work.L[136]*work.v[202]+work.L[138]*work.v[203];
  work.v[200] -= work.L[688]*work.v[317];
  work.v[199] -= work.L[134]*work.v[200];
  work.v[198] -= work.L[131]*work.v[199]+work.L[133]*work.v[200];
  work.v[197] -= work.L[655]*work.v[313];
  work.v[196] -= work.L[129]*work.v[197];
  work.v[195] -= work.L[126]*work.v[196]+work.L[128]*work.v[197];
  work.v[194] -= work.L[623]*work.v[309];
  work.v[193] -= work.L[124]*work.v[194];
  work.v[192] -= work.L[121]*work.v[193]+work.L[123]*work.v[194];
  work.v[191] -= work.L[592]*work.v[305];
  work.v[190] -= work.L[119]*work.v[191];
  work.v[189] -= work.L[116]*work.v[190]+work.L[118]*work.v[191];
  work.v[188] -= work.L[562]*work.v[301];
  work.v[187] -= work.L[114]*work.v[188];
  work.v[186] -= work.L[111]*work.v[187]+work.L[113]*work.v[188];
  work.v[185] -= work.L[533]*work.v[297];
  work.v[184] -= work.L[109]*work.v[185];
  work.v[183] -= work.L[106]*work.v[184]+work.L[108]*work.v[185];
  work.v[182] -= work.L[505]*work.v[293];
  work.v[181] -= work.L[104]*work.v[182];
  work.v[180] -= work.L[101]*work.v[181]+work.L[103]*work.v[182];
  work.v[179] -= work.L[478]*work.v[289];
  work.v[178] -= work.L[99]*work.v[179];
  work.v[177] -= work.L[96]*work.v[178]+work.L[98]*work.v[179];
  work.v[176] -= work.L[452]*work.v[285];
  work.v[175] -= work.L[94]*work.v[176];
  work.v[174] -= work.L[91]*work.v[175]+work.L[93]*work.v[176];
  work.v[173] -= work.L[427]*work.v[281];
  work.v[172] -= work.L[89]*work.v[173];
  work.v[171] -= work.L[86]*work.v[172]+work.L[88]*work.v[173];
  work.v[170] -= work.L[403]*work.v[277];
  work.v[169] -= work.L[84]*work.v[170];
  work.v[168] -= work.L[81]*work.v[169]+work.L[83]*work.v[170];
  work.v[167] -= work.L[380]*work.v[273];
  work.v[166] -= work.L[79]*work.v[167];
  work.v[165] -= work.L[76]*work.v[166]+work.L[78]*work.v[167];
  work.v[164] -= work.L[358]*work.v[269];
  work.v[163] -= work.L[74]*work.v[164];
  work.v[162] -= work.L[71]*work.v[163]+work.L[73]*work.v[164];
  work.v[161] -= work.L[337]*work.v[265];
  work.v[160] -= work.L[69]*work.v[161];
  work.v[159] -= work.L[66]*work.v[160]+work.L[68]*work.v[161];
  work.v[158] -= work.L[317]*work.v[261];
  work.v[157] -= work.L[64]*work.v[158];
  work.v[156] -= work.L[61]*work.v[157]+work.L[63]*work.v[158];
  work.v[155] -= work.L[298]*work.v[257];
  work.v[154] -= work.L[59]*work.v[155];
  work.v[153] -= work.L[56]*work.v[154]+work.L[58]*work.v[155];
  work.v[152] -= work.L[280]*work.v[253];
  work.v[151] -= work.L[54]*work.v[152];
  work.v[150] -= work.L[51]*work.v[151]+work.L[53]*work.v[152];
  work.v[149] -= work.L[263]*work.v[249];
  work.v[148] -= work.L[49]*work.v[149];
  work.v[147] -= work.L[46]*work.v[148]+work.L[48]*work.v[149];
  work.v[146] -= work.L[247]*work.v[245];
  work.v[145] -= work.L[44]*work.v[146];
  work.v[144] -= work.L[41]*work.v[145]+work.L[43]*work.v[146];
  work.v[143] -= work.L[232]*work.v[241];
  work.v[142] -= work.L[39]*work.v[143];
  work.v[141] -= work.L[36]*work.v[142]+work.L[38]*work.v[143];
  work.v[140] -= work.L[218]*work.v[237];
  work.v[139] -= work.L[34]*work.v[140];
  work.v[138] -= work.L[31]*work.v[139]+work.L[33]*work.v[140];
  work.v[137] -= work.L[205]*work.v[233];
  work.v[136] -= work.L[29]*work.v[137];
  work.v[135] -= work.L[26]*work.v[136]+work.L[28]*work.v[137];
  work.v[134] -= work.L[193]*work.v[229];
  work.v[133] -= work.L[24]*work.v[134];
  work.v[132] -= work.L[21]*work.v[133]+work.L[23]*work.v[134];
  work.v[131] -= work.L[182]*work.v[225];
  work.v[130] -= work.L[19]*work.v[131];
  work.v[129] -= work.L[16]*work.v[130]+work.L[18]*work.v[131];
  work.v[128] -= work.L[172]*work.v[221];
  work.v[127] -= work.L[14]*work.v[128];
  work.v[126] -= work.L[11]*work.v[127]+work.L[13]*work.v[128];
  work.v[125] -= work.L[163]*work.v[217];
  work.v[124] -= work.L[9]*work.v[125];
  work.v[123] -= work.L[6]*work.v[124]+work.L[8]*work.v[125];
  work.v[122] -= work.L[155]*work.v[213];
  work.v[121] -= work.L[4]*work.v[122];
  work.v[120] -= work.L[1]*work.v[121]+work.L[3]*work.v[122];
  work.v[119] -= work.L[821]*work.v[329];
  work.v[118] -= work.L[754]*work.v[324];
  work.v[117] -= work.L[719]*work.v[320];
  work.v[116] -= work.L[685]*work.v[316];
  work.v[115] -= work.L[652]*work.v[312];
  work.v[114] -= work.L[620]*work.v[308];
  work.v[113] -= work.L[589]*work.v[304];
  work.v[112] -= work.L[559]*work.v[300];
  work.v[111] -= work.L[530]*work.v[296];
  work.v[110] -= work.L[502]*work.v[292];
  work.v[109] -= work.L[475]*work.v[288];
  work.v[108] -= work.L[449]*work.v[284];
  work.v[107] -= work.L[424]*work.v[280];
  work.v[106] -= work.L[400]*work.v[276];
  work.v[105] -= work.L[377]*work.v[272];
  work.v[104] -= work.L[355]*work.v[268];
  work.v[103] -= work.L[334]*work.v[264];
  work.v[102] -= work.L[314]*work.v[260];
  work.v[101] -= work.L[295]*work.v[256];
  work.v[100] -= work.L[277]*work.v[252];
  work.v[99] -= work.L[260]*work.v[248];
  work.v[98] -= work.L[244]*work.v[244];
  work.v[97] -= work.L[229]*work.v[240];
  work.v[96] -= work.L[215]*work.v[236];
  work.v[95] -= work.L[202]*work.v[232];
  work.v[94] -= work.L[190]*work.v[228];
  work.v[93] -= work.L[179]*work.v[224];
  work.v[92] -= work.L[169]*work.v[220];
  work.v[91] -= work.L[160]*work.v[216];
  work.v[90] -= work.L[152]*work.v[212];
  work.v[89] -= work.L[818]*work.v[328];
  work.v[88] -= work.L[752]*work.v[323];
  work.v[87] -= work.L[717]*work.v[319];
  work.v[86] -= work.L[683]*work.v[315];
  work.v[85] -= work.L[650]*work.v[311];
  work.v[84] -= work.L[618]*work.v[307];
  work.v[83] -= work.L[587]*work.v[303];
  work.v[82] -= work.L[557]*work.v[299];
  work.v[81] -= work.L[528]*work.v[295];
  work.v[80] -= work.L[500]*work.v[291];
  work.v[79] -= work.L[473]*work.v[287];
  work.v[78] -= work.L[447]*work.v[283];
  work.v[77] -= work.L[422]*work.v[279];
  work.v[76] -= work.L[398]*work.v[275];
  work.v[75] -= work.L[375]*work.v[271];
  work.v[74] -= work.L[353]*work.v[267];
  work.v[73] -= work.L[332]*work.v[263];
  work.v[72] -= work.L[312]*work.v[259];
  work.v[71] -= work.L[293]*work.v[255];
  work.v[70] -= work.L[275]*work.v[251];
  work.v[69] -= work.L[258]*work.v[247];
  work.v[68] -= work.L[242]*work.v[243];
  work.v[67] -= work.L[227]*work.v[239];
  work.v[66] -= work.L[213]*work.v[235];
  work.v[65] -= work.L[200]*work.v[231];
  work.v[64] -= work.L[188]*work.v[227];
  work.v[63] -= work.L[177]*work.v[223];
  work.v[62] -= work.L[167]*work.v[219];
  work.v[61] -= work.L[158]*work.v[215];
  work.v[60] -= work.L[150]*work.v[211];
  work.v[59] -= work.L[145]*work.v[208];
  work.v[58] -= work.L[140]*work.v[205];
  work.v[57] -= work.L[135]*work.v[202];
  work.v[56] -= work.L[130]*work.v[199];
  work.v[55] -= work.L[125]*work.v[196];
  work.v[54] -= work.L[120]*work.v[193];
  work.v[53] -= work.L[115]*work.v[190];
  work.v[52] -= work.L[110]*work.v[187];
  work.v[51] -= work.L[105]*work.v[184];
  work.v[50] -= work.L[100]*work.v[181];
  work.v[49] -= work.L[95]*work.v[178];
  work.v[48] -= work.L[90]*work.v[175];
  work.v[47] -= work.L[85]*work.v[172];
  work.v[46] -= work.L[80]*work.v[169];
  work.v[45] -= work.L[75]*work.v[166];
  work.v[44] -= work.L[70]*work.v[163];
  work.v[43] -= work.L[65]*work.v[160];
  work.v[42] -= work.L[60]*work.v[157];
  work.v[41] -= work.L[55]*work.v[154];
  work.v[40] -= work.L[50]*work.v[151];
  work.v[39] -= work.L[45]*work.v[148];
  work.v[38] -= work.L[40]*work.v[145];
  work.v[37] -= work.L[35]*work.v[142];
  work.v[36] -= work.L[30]*work.v[139];
  work.v[35] -= work.L[25]*work.v[136];
  work.v[34] -= work.L[20]*work.v[133];
  work.v[33] -= work.L[15]*work.v[130];
  work.v[32] -= work.L[10]*work.v[127];
  work.v[31] -= work.L[5]*work.v[124];
  work.v[30] -= work.L[0]*work.v[121];
  work.v[29] -= work.L[147]*work.v[209];
  work.v[28] -= work.L[142]*work.v[206];
  work.v[27] -= work.L[137]*work.v[203];
  work.v[26] -= work.L[132]*work.v[200];
  work.v[25] -= work.L[127]*work.v[197];
  work.v[24] -= work.L[122]*work.v[194];
  work.v[23] -= work.L[117]*work.v[191];
  work.v[22] -= work.L[112]*work.v[188];
  work.v[21] -= work.L[107]*work.v[185];
  work.v[20] -= work.L[102]*work.v[182];
  work.v[19] -= work.L[97]*work.v[179];
  work.v[18] -= work.L[92]*work.v[176];
  work.v[17] -= work.L[87]*work.v[173];
  work.v[16] -= work.L[82]*work.v[170];
  work.v[15] -= work.L[77]*work.v[167];
  work.v[14] -= work.L[72]*work.v[164];
  work.v[13] -= work.L[67]*work.v[161];
  work.v[12] -= work.L[62]*work.v[158];
  work.v[11] -= work.L[57]*work.v[155];
  work.v[10] -= work.L[52]*work.v[152];
  work.v[9] -= work.L[47]*work.v[149];
  work.v[8] -= work.L[42]*work.v[146];
  work.v[7] -= work.L[37]*work.v[143];
  work.v[6] -= work.L[32]*work.v[140];
  work.v[5] -= work.L[27]*work.v[137];
  work.v[4] -= work.L[22]*work.v[134];
  work.v[3] -= work.L[17]*work.v[131];
  work.v[2] -= work.L[12]*work.v[128];
  work.v[1] -= work.L[7]*work.v[125];
  work.v[0] -= work.L[2]*work.v[122];
  /* Unpermute the result, from v to var. */
  var[0] = work.v[120];
  var[1] = work.v[123];
  var[2] = work.v[126];
  var[3] = work.v[129];
  var[4] = work.v[132];
  var[5] = work.v[135];
  var[6] = work.v[138];
  var[7] = work.v[141];
  var[8] = work.v[144];
  var[9] = work.v[147];
  var[10] = work.v[150];
  var[11] = work.v[153];
  var[12] = work.v[156];
  var[13] = work.v[159];
  var[14] = work.v[162];
  var[15] = work.v[165];
  var[16] = work.v[168];
  var[17] = work.v[171];
  var[18] = work.v[174];
  var[19] = work.v[177];
  var[20] = work.v[180];
  var[21] = work.v[183];
  var[22] = work.v[186];
  var[23] = work.v[189];
  var[24] = work.v[192];
  var[25] = work.v[195];
  var[26] = work.v[198];
  var[27] = work.v[201];
  var[28] = work.v[204];
  var[29] = work.v[207];
  var[30] = work.v[210];
  var[31] = work.v[214];
  var[32] = work.v[218];
  var[33] = work.v[222];
  var[34] = work.v[226];
  var[35] = work.v[230];
  var[36] = work.v[234];
  var[37] = work.v[238];
  var[38] = work.v[242];
  var[39] = work.v[246];
  var[40] = work.v[250];
  var[41] = work.v[254];
  var[42] = work.v[258];
  var[43] = work.v[262];
  var[44] = work.v[266];
  var[45] = work.v[270];
  var[46] = work.v[274];
  var[47] = work.v[278];
  var[48] = work.v[282];
  var[49] = work.v[286];
  var[50] = work.v[290];
  var[51] = work.v[294];
  var[52] = work.v[298];
  var[53] = work.v[302];
  var[54] = work.v[306];
  var[55] = work.v[310];
  var[56] = work.v[314];
  var[57] = work.v[318];
  var[58] = work.v[322];
  var[59] = work.v[326];
  var[60] = work.v[213];
  var[61] = work.v[217];
  var[62] = work.v[221];
  var[63] = work.v[225];
  var[64] = work.v[229];
  var[65] = work.v[233];
  var[66] = work.v[237];
  var[67] = work.v[241];
  var[68] = work.v[245];
  var[69] = work.v[249];
  var[70] = work.v[253];
  var[71] = work.v[257];
  var[72] = work.v[261];
  var[73] = work.v[265];
  var[74] = work.v[269];
  var[75] = work.v[273];
  var[76] = work.v[277];
  var[77] = work.v[281];
  var[78] = work.v[285];
  var[79] = work.v[289];
  var[80] = work.v[293];
  var[81] = work.v[297];
  var[82] = work.v[301];
  var[83] = work.v[305];
  var[84] = work.v[309];
  var[85] = work.v[313];
  var[86] = work.v[317];
  var[87] = work.v[321];
  var[88] = work.v[325];
  var[89] = work.v[327];
  var[90] = work.v[0];
  var[91] = work.v[1];
  var[92] = work.v[2];
  var[93] = work.v[3];
  var[94] = work.v[4];
  var[95] = work.v[5];
  var[96] = work.v[6];
  var[97] = work.v[7];
  var[98] = work.v[8];
  var[99] = work.v[9];
  var[100] = work.v[10];
  var[101] = work.v[11];
  var[102] = work.v[12];
  var[103] = work.v[13];
  var[104] = work.v[14];
  var[105] = work.v[15];
  var[106] = work.v[16];
  var[107] = work.v[17];
  var[108] = work.v[18];
  var[109] = work.v[19];
  var[110] = work.v[20];
  var[111] = work.v[21];
  var[112] = work.v[22];
  var[113] = work.v[23];
  var[114] = work.v[24];
  var[115] = work.v[25];
  var[116] = work.v[26];
  var[117] = work.v[27];
  var[118] = work.v[28];
  var[119] = work.v[29];
  var[120] = work.v[30];
  var[121] = work.v[31];
  var[122] = work.v[32];
  var[123] = work.v[33];
  var[124] = work.v[34];
  var[125] = work.v[35];
  var[126] = work.v[36];
  var[127] = work.v[37];
  var[128] = work.v[38];
  var[129] = work.v[39];
  var[130] = work.v[40];
  var[131] = work.v[41];
  var[132] = work.v[42];
  var[133] = work.v[43];
  var[134] = work.v[44];
  var[135] = work.v[45];
  var[136] = work.v[46];
  var[137] = work.v[47];
  var[138] = work.v[48];
  var[139] = work.v[49];
  var[140] = work.v[50];
  var[141] = work.v[51];
  var[142] = work.v[52];
  var[143] = work.v[53];
  var[144] = work.v[54];
  var[145] = work.v[55];
  var[146] = work.v[56];
  var[147] = work.v[57];
  var[148] = work.v[58];
  var[149] = work.v[59];
  var[150] = work.v[60];
  var[151] = work.v[61];
  var[152] = work.v[62];
  var[153] = work.v[63];
  var[154] = work.v[64];
  var[155] = work.v[65];
  var[156] = work.v[66];
  var[157] = work.v[67];
  var[158] = work.v[68];
  var[159] = work.v[69];
  var[160] = work.v[70];
  var[161] = work.v[71];
  var[162] = work.v[72];
  var[163] = work.v[73];
  var[164] = work.v[74];
  var[165] = work.v[75];
  var[166] = work.v[76];
  var[167] = work.v[77];
  var[168] = work.v[78];
  var[169] = work.v[79];
  var[170] = work.v[80];
  var[171] = work.v[81];
  var[172] = work.v[82];
  var[173] = work.v[83];
  var[174] = work.v[84];
  var[175] = work.v[85];
  var[176] = work.v[86];
  var[177] = work.v[87];
  var[178] = work.v[88];
  var[179] = work.v[89];
  var[180] = work.v[90];
  var[181] = work.v[91];
  var[182] = work.v[92];
  var[183] = work.v[93];
  var[184] = work.v[94];
  var[185] = work.v[95];
  var[186] = work.v[96];
  var[187] = work.v[97];
  var[188] = work.v[98];
  var[189] = work.v[99];
  var[190] = work.v[100];
  var[191] = work.v[101];
  var[192] = work.v[102];
  var[193] = work.v[103];
  var[194] = work.v[104];
  var[195] = work.v[105];
  var[196] = work.v[106];
  var[197] = work.v[107];
  var[198] = work.v[108];
  var[199] = work.v[109];
  var[200] = work.v[110];
  var[201] = work.v[111];
  var[202] = work.v[112];
  var[203] = work.v[113];
  var[204] = work.v[114];
  var[205] = work.v[115];
  var[206] = work.v[116];
  var[207] = work.v[117];
  var[208] = work.v[118];
  var[209] = work.v[119];
  var[210] = work.v[122];
  var[211] = work.v[125];
  var[212] = work.v[128];
  var[213] = work.v[131];
  var[214] = work.v[134];
  var[215] = work.v[137];
  var[216] = work.v[140];
  var[217] = work.v[143];
  var[218] = work.v[146];
  var[219] = work.v[149];
  var[220] = work.v[152];
  var[221] = work.v[155];
  var[222] = work.v[158];
  var[223] = work.v[161];
  var[224] = work.v[164];
  var[225] = work.v[167];
  var[226] = work.v[170];
  var[227] = work.v[173];
  var[228] = work.v[176];
  var[229] = work.v[179];
  var[230] = work.v[182];
  var[231] = work.v[185];
  var[232] = work.v[188];
  var[233] = work.v[191];
  var[234] = work.v[194];
  var[235] = work.v[197];
  var[236] = work.v[200];
  var[237] = work.v[203];
  var[238] = work.v[206];
  var[239] = work.v[209];
  var[240] = work.v[121];
  var[241] = work.v[124];
  var[242] = work.v[127];
  var[243] = work.v[130];
  var[244] = work.v[133];
  var[245] = work.v[136];
  var[246] = work.v[139];
  var[247] = work.v[142];
  var[248] = work.v[145];
  var[249] = work.v[148];
  var[250] = work.v[151];
  var[251] = work.v[154];
  var[252] = work.v[157];
  var[253] = work.v[160];
  var[254] = work.v[163];
  var[255] = work.v[166];
  var[256] = work.v[169];
  var[257] = work.v[172];
  var[258] = work.v[175];
  var[259] = work.v[178];
  var[260] = work.v[181];
  var[261] = work.v[184];
  var[262] = work.v[187];
  var[263] = work.v[190];
  var[264] = work.v[193];
  var[265] = work.v[196];
  var[266] = work.v[199];
  var[267] = work.v[202];
  var[268] = work.v[205];
  var[269] = work.v[208];
  var[270] = work.v[211];
  var[271] = work.v[215];
  var[272] = work.v[219];
  var[273] = work.v[223];
  var[274] = work.v[227];
  var[275] = work.v[231];
  var[276] = work.v[235];
  var[277] = work.v[239];
  var[278] = work.v[243];
  var[279] = work.v[247];
  var[280] = work.v[251];
  var[281] = work.v[255];
  var[282] = work.v[259];
  var[283] = work.v[263];
  var[284] = work.v[267];
  var[285] = work.v[271];
  var[286] = work.v[275];
  var[287] = work.v[279];
  var[288] = work.v[283];
  var[289] = work.v[287];
  var[290] = work.v[291];
  var[291] = work.v[295];
  var[292] = work.v[299];
  var[293] = work.v[303];
  var[294] = work.v[307];
  var[295] = work.v[311];
  var[296] = work.v[315];
  var[297] = work.v[319];
  var[298] = work.v[323];
  var[299] = work.v[328];
  var[300] = work.v[212];
  var[301] = work.v[216];
  var[302] = work.v[220];
  var[303] = work.v[224];
  var[304] = work.v[228];
  var[305] = work.v[232];
  var[306] = work.v[236];
  var[307] = work.v[240];
  var[308] = work.v[244];
  var[309] = work.v[248];
  var[310] = work.v[252];
  var[311] = work.v[256];
  var[312] = work.v[260];
  var[313] = work.v[264];
  var[314] = work.v[268];
  var[315] = work.v[272];
  var[316] = work.v[276];
  var[317] = work.v[280];
  var[318] = work.v[284];
  var[319] = work.v[288];
  var[320] = work.v[292];
  var[321] = work.v[296];
  var[322] = work.v[300];
  var[323] = work.v[304];
  var[324] = work.v[308];
  var[325] = work.v[312];
  var[326] = work.v[316];
  var[327] = work.v[320];
  var[328] = work.v[324];
  var[329] = work.v[329];
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

  work.L[2] = work.KKT[1]*work.d_inv[0];

  work.v[1] = work.KKT[2];
  work.d[1] = work.v[1];

  if (work.d[1] < 0)
    work.d[1] = settings.kkt_reg;
  else
    work.d[1] += settings.kkt_reg;
  work.d_inv[1] = 1/work.d[1];

  work.L[7] = (work.KKT[3])*work.d_inv[1];
  work.v[2] = work.KKT[4];
  work.d[2] = work.v[2];

  if (work.d[2] < 0)
    work.d[2] = settings.kkt_reg;
  else
    work.d[2] += settings.kkt_reg;
  work.d_inv[2] = 1/work.d[2];

  work.L[12] = (work.KKT[5])*work.d_inv[2];
  work.v[3] = work.KKT[6];
  work.d[3] = work.v[3];

  if (work.d[3] < 0)
    work.d[3] = settings.kkt_reg;
  else
    work.d[3] += settings.kkt_reg;
  work.d_inv[3] = 1/work.d[3];

  work.L[17] = (work.KKT[7])*work.d_inv[3];
  work.v[4] = work.KKT[8];
  work.d[4] = work.v[4];

  if (work.d[4] < 0)
    work.d[4] = settings.kkt_reg;
  else
    work.d[4] += settings.kkt_reg;
  work.d_inv[4] = 1/work.d[4];

  work.L[22] = (work.KKT[9])*work.d_inv[4];
  work.v[5] = work.KKT[10];
  work.d[5] = work.v[5];

  if (work.d[5] < 0)
    work.d[5] = settings.kkt_reg;
  else
    work.d[5] += settings.kkt_reg;
  work.d_inv[5] = 1/work.d[5];

  work.L[27] = (work.KKT[11])*work.d_inv[5];
  work.v[6] = work.KKT[12];
  work.d[6] = work.v[6];

  if (work.d[6] < 0)
    work.d[6] = settings.kkt_reg;
  else
    work.d[6] += settings.kkt_reg;
  work.d_inv[6] = 1/work.d[6];

  work.L[32] = (work.KKT[13])*work.d_inv[6];
  work.v[7] = work.KKT[14];
  work.d[7] = work.v[7];

  if (work.d[7] < 0)
    work.d[7] = settings.kkt_reg;
  else
    work.d[7] += settings.kkt_reg;
  work.d_inv[7] = 1/work.d[7];

  work.L[37] = (work.KKT[15])*work.d_inv[7];
  work.v[8] = work.KKT[16];
  work.d[8] = work.v[8];

  if (work.d[8] < 0)
    work.d[8] = settings.kkt_reg;
  else
    work.d[8] += settings.kkt_reg;
  work.d_inv[8] = 1/work.d[8];

  work.L[42] = (work.KKT[17])*work.d_inv[8];
  work.v[9] = work.KKT[18];
  work.d[9] = work.v[9];

  if (work.d[9] < 0)
    work.d[9] = settings.kkt_reg;
  else
    work.d[9] += settings.kkt_reg;
  work.d_inv[9] = 1/work.d[9];

  work.L[47] = (work.KKT[19])*work.d_inv[9];
  work.v[10] = work.KKT[20];
  work.d[10] = work.v[10];

  if (work.d[10] < 0)
    work.d[10] = settings.kkt_reg;
  else
    work.d[10] += settings.kkt_reg;
  work.d_inv[10] = 1/work.d[10];

  work.L[52] = (work.KKT[21])*work.d_inv[10];
  work.v[11] = work.KKT[22];
  work.d[11] = work.v[11];

  if (work.d[11] < 0)
    work.d[11] = settings.kkt_reg;
  else
    work.d[11] += settings.kkt_reg;
  work.d_inv[11] = 1/work.d[11];

  work.L[57] = (work.KKT[23])*work.d_inv[11];
  work.v[12] = work.KKT[24];
  work.d[12] = work.v[12];

  if (work.d[12] < 0)
    work.d[12] = settings.kkt_reg;
  else
    work.d[12] += settings.kkt_reg;
  work.d_inv[12] = 1/work.d[12];

  work.L[62] = (work.KKT[25])*work.d_inv[12];
  work.v[13] = work.KKT[26];
  work.d[13] = work.v[13];

  if (work.d[13] < 0)
    work.d[13] = settings.kkt_reg;
  else
    work.d[13] += settings.kkt_reg;
  work.d_inv[13] = 1/work.d[13];

  work.L[67] = (work.KKT[27])*work.d_inv[13];
  work.v[14] = work.KKT[28];
  work.d[14] = work.v[14];

  if (work.d[14] < 0)
    work.d[14] = settings.kkt_reg;
  else
    work.d[14] += settings.kkt_reg;
  work.d_inv[14] = 1/work.d[14];

  work.L[72] = (work.KKT[29])*work.d_inv[14];
  work.v[15] = work.KKT[30];
  work.d[15] = work.v[15];

  if (work.d[15] < 0)
    work.d[15] = settings.kkt_reg;
  else
    work.d[15] += settings.kkt_reg;
  work.d_inv[15] = 1/work.d[15];

  work.L[77] = (work.KKT[31])*work.d_inv[15];
  work.v[16] = work.KKT[32];
  work.d[16] = work.v[16];

  if (work.d[16] < 0)
    work.d[16] = settings.kkt_reg;
  else
    work.d[16] += settings.kkt_reg;
  work.d_inv[16] = 1/work.d[16];

  work.L[82] = (work.KKT[33])*work.d_inv[16];
  work.v[17] = work.KKT[34];
  work.d[17] = work.v[17];

  if (work.d[17] < 0)
    work.d[17] = settings.kkt_reg;
  else
    work.d[17] += settings.kkt_reg;
  work.d_inv[17] = 1/work.d[17];

  work.L[87] = (work.KKT[35])*work.d_inv[17];
  work.v[18] = work.KKT[36];
  work.d[18] = work.v[18];

  if (work.d[18] < 0)
    work.d[18] = settings.kkt_reg;
  else
    work.d[18] += settings.kkt_reg;
  work.d_inv[18] = 1/work.d[18];

  work.L[92] = (work.KKT[37])*work.d_inv[18];
  work.v[19] = work.KKT[38];
  work.d[19] = work.v[19];

  if (work.d[19] < 0)
    work.d[19] = settings.kkt_reg;
  else
    work.d[19] += settings.kkt_reg;
  work.d_inv[19] = 1/work.d[19];

  work.L[97] = (work.KKT[39])*work.d_inv[19];
  work.v[20] = work.KKT[40];
  work.d[20] = work.v[20];

  if (work.d[20] < 0)
    work.d[20] = settings.kkt_reg;
  else
    work.d[20] += settings.kkt_reg;
  work.d_inv[20] = 1/work.d[20];

  work.L[102] = (work.KKT[41])*work.d_inv[20];
  work.v[21] = work.KKT[42];
  work.d[21] = work.v[21];

  if (work.d[21] < 0)
    work.d[21] = settings.kkt_reg;
  else
    work.d[21] += settings.kkt_reg;
  work.d_inv[21] = 1/work.d[21];

  work.L[107] = (work.KKT[43])*work.d_inv[21];
  work.v[22] = work.KKT[44];
  work.d[22] = work.v[22];

  if (work.d[22] < 0)
    work.d[22] = settings.kkt_reg;
  else
    work.d[22] += settings.kkt_reg;
  work.d_inv[22] = 1/work.d[22];

  work.L[112] = (work.KKT[45])*work.d_inv[22];
  work.v[23] = work.KKT[46];
  work.d[23] = work.v[23];

  if (work.d[23] < 0)
    work.d[23] = settings.kkt_reg;
  else
    work.d[23] += settings.kkt_reg;
  work.d_inv[23] = 1/work.d[23];

  work.L[117] = (work.KKT[47])*work.d_inv[23];
  work.v[24] = work.KKT[48];
  work.d[24] = work.v[24];

  if (work.d[24] < 0)
    work.d[24] = settings.kkt_reg;
  else
    work.d[24] += settings.kkt_reg;
  work.d_inv[24] = 1/work.d[24];

  work.L[122] = (work.KKT[49])*work.d_inv[24];
  work.v[25] = work.KKT[50];
  work.d[25] = work.v[25];

  if (work.d[25] < 0)
    work.d[25] = settings.kkt_reg;
  else
    work.d[25] += settings.kkt_reg;
  work.d_inv[25] = 1/work.d[25];

  work.L[127] = (work.KKT[51])*work.d_inv[25];
  work.v[26] = work.KKT[52];
  work.d[26] = work.v[26];

  if (work.d[26] < 0)
    work.d[26] = settings.kkt_reg;
  else
    work.d[26] += settings.kkt_reg;
  work.d_inv[26] = 1/work.d[26];

  work.L[132] = (work.KKT[53])*work.d_inv[26];
  work.v[27] = work.KKT[54];
  work.d[27] = work.v[27];

  if (work.d[27] < 0)
    work.d[27] = settings.kkt_reg;
  else
    work.d[27] += settings.kkt_reg;
  work.d_inv[27] = 1/work.d[27];

  work.L[137] = (work.KKT[55])*work.d_inv[27];
  work.v[28] = work.KKT[56];
  work.d[28] = work.v[28];

  if (work.d[28] < 0)
    work.d[28] = settings.kkt_reg;
  else
    work.d[28] += settings.kkt_reg;
  work.d_inv[28] = 1/work.d[28];

  work.L[142] = (work.KKT[57])*work.d_inv[28];
  work.v[29] = work.KKT[58];
  work.d[29] = work.v[29];

  if (work.d[29] < 0)
    work.d[29] = settings.kkt_reg;
  else
    work.d[29] += settings.kkt_reg;
  work.d_inv[29] = 1/work.d[29];

  work.L[147] = (work.KKT[59])*work.d_inv[29];
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

  work.L[5] = (work.KKT[63])*work.d_inv[31];
  work.v[32] = work.KKT[64];
  work.d[32] = work.v[32];

  if (work.d[32] < 0)
    work.d[32] = settings.kkt_reg;
  else
    work.d[32] += settings.kkt_reg;
  work.d_inv[32] = 1/work.d[32];

  work.L[10] = (work.KKT[65])*work.d_inv[32];
  work.v[33] = work.KKT[66];
  work.d[33] = work.v[33];

  if (work.d[33] < 0)
    work.d[33] = settings.kkt_reg;
  else
    work.d[33] += settings.kkt_reg;
  work.d_inv[33] = 1/work.d[33];

  work.L[15] = (work.KKT[67])*work.d_inv[33];
  work.v[34] = work.KKT[68];
  work.d[34] = work.v[34];

  if (work.d[34] < 0)
    work.d[34] = settings.kkt_reg;
  else
    work.d[34] += settings.kkt_reg;
  work.d_inv[34] = 1/work.d[34];

  work.L[20] = (work.KKT[69])*work.d_inv[34];
  work.v[35] = work.KKT[70];
  work.d[35] = work.v[35];

  if (work.d[35] < 0)
    work.d[35] = settings.kkt_reg;
  else
    work.d[35] += settings.kkt_reg;
  work.d_inv[35] = 1/work.d[35];

  work.L[25] = (work.KKT[71])*work.d_inv[35];
  work.v[36] = work.KKT[72];
  work.d[36] = work.v[36];

  if (work.d[36] < 0)
    work.d[36] = settings.kkt_reg;
  else
    work.d[36] += settings.kkt_reg;
  work.d_inv[36] = 1/work.d[36];

  work.L[30] = (work.KKT[73])*work.d_inv[36];
  work.v[37] = work.KKT[74];
  work.d[37] = work.v[37];

  if (work.d[37] < 0)
    work.d[37] = settings.kkt_reg;
  else
    work.d[37] += settings.kkt_reg;
  work.d_inv[37] = 1/work.d[37];

  work.L[35] = (work.KKT[75])*work.d_inv[37];
  work.v[38] = work.KKT[76];
  work.d[38] = work.v[38];

  if (work.d[38] < 0)
    work.d[38] = settings.kkt_reg;
  else
    work.d[38] += settings.kkt_reg;
  work.d_inv[38] = 1/work.d[38];

  work.L[40] = (work.KKT[77])*work.d_inv[38];
  work.v[39] = work.KKT[78];
  work.d[39] = work.v[39];

  if (work.d[39] < 0)
    work.d[39] = settings.kkt_reg;
  else
    work.d[39] += settings.kkt_reg;
  work.d_inv[39] = 1/work.d[39];

  work.L[45] = (work.KKT[79])*work.d_inv[39];
  work.v[40] = work.KKT[80];
  work.d[40] = work.v[40];

  if (work.d[40] < 0)
    work.d[40] = settings.kkt_reg;
  else
    work.d[40] += settings.kkt_reg;
  work.d_inv[40] = 1/work.d[40];

  work.L[50] = (work.KKT[81])*work.d_inv[40];
  work.v[41] = work.KKT[82];
  work.d[41] = work.v[41];

  if (work.d[41] < 0)
    work.d[41] = settings.kkt_reg;
  else
    work.d[41] += settings.kkt_reg;
  work.d_inv[41] = 1/work.d[41];

  work.L[55] = (work.KKT[83])*work.d_inv[41];
  work.v[42] = work.KKT[84];
  work.d[42] = work.v[42];

  if (work.d[42] < 0)
    work.d[42] = settings.kkt_reg;
  else
    work.d[42] += settings.kkt_reg;
  work.d_inv[42] = 1/work.d[42];

  work.L[60] = (work.KKT[85])*work.d_inv[42];
  work.v[43] = work.KKT[86];
  work.d[43] = work.v[43];

  if (work.d[43] < 0)
    work.d[43] = settings.kkt_reg;
  else
    work.d[43] += settings.kkt_reg;
  work.d_inv[43] = 1/work.d[43];

  work.L[65] = (work.KKT[87])*work.d_inv[43];
  work.v[44] = work.KKT[88];
  work.d[44] = work.v[44];

  if (work.d[44] < 0)
    work.d[44] = settings.kkt_reg;
  else
    work.d[44] += settings.kkt_reg;
  work.d_inv[44] = 1/work.d[44];

  work.L[70] = (work.KKT[89])*work.d_inv[44];
  work.v[45] = work.KKT[90];
  work.d[45] = work.v[45];

  if (work.d[45] < 0)
    work.d[45] = settings.kkt_reg;
  else
    work.d[45] += settings.kkt_reg;
  work.d_inv[45] = 1/work.d[45];

  work.L[75] = (work.KKT[91])*work.d_inv[45];
  work.v[46] = work.KKT[92];
  work.d[46] = work.v[46];

  if (work.d[46] < 0)
    work.d[46] = settings.kkt_reg;
  else
    work.d[46] += settings.kkt_reg;
  work.d_inv[46] = 1/work.d[46];

  work.L[80] = (work.KKT[93])*work.d_inv[46];
  work.v[47] = work.KKT[94];
  work.d[47] = work.v[47];

  if (work.d[47] < 0)
    work.d[47] = settings.kkt_reg;
  else
    work.d[47] += settings.kkt_reg;
  work.d_inv[47] = 1/work.d[47];

  work.L[85] = (work.KKT[95])*work.d_inv[47];
  work.v[48] = work.KKT[96];
  work.d[48] = work.v[48];

  if (work.d[48] < 0)
    work.d[48] = settings.kkt_reg;
  else
    work.d[48] += settings.kkt_reg;
  work.d_inv[48] = 1/work.d[48];

  work.L[90] = (work.KKT[97])*work.d_inv[48];
  work.v[49] = work.KKT[98];
  work.d[49] = work.v[49];

  if (work.d[49] < 0)
    work.d[49] = settings.kkt_reg;
  else
    work.d[49] += settings.kkt_reg;
  work.d_inv[49] = 1/work.d[49];

  work.L[95] = (work.KKT[99])*work.d_inv[49];
  work.v[50] = work.KKT[100];
  work.d[50] = work.v[50];

  if (work.d[50] < 0)
    work.d[50] = settings.kkt_reg;
  else
    work.d[50] += settings.kkt_reg;
  work.d_inv[50] = 1/work.d[50];

  work.L[100] = (work.KKT[101])*work.d_inv[50];
  work.v[51] = work.KKT[102];
  work.d[51] = work.v[51];

  if (work.d[51] < 0)
    work.d[51] = settings.kkt_reg;
  else
    work.d[51] += settings.kkt_reg;
  work.d_inv[51] = 1/work.d[51];

  work.L[105] = (work.KKT[103])*work.d_inv[51];
  work.v[52] = work.KKT[104];
  work.d[52] = work.v[52];

  if (work.d[52] < 0)
    work.d[52] = settings.kkt_reg;
  else
    work.d[52] += settings.kkt_reg;
  work.d_inv[52] = 1/work.d[52];

  work.L[110] = (work.KKT[105])*work.d_inv[52];
  work.v[53] = work.KKT[106];
  work.d[53] = work.v[53];

  if (work.d[53] < 0)
    work.d[53] = settings.kkt_reg;
  else
    work.d[53] += settings.kkt_reg;
  work.d_inv[53] = 1/work.d[53];

  work.L[115] = (work.KKT[107])*work.d_inv[53];
  work.v[54] = work.KKT[108];
  work.d[54] = work.v[54];

  if (work.d[54] < 0)
    work.d[54] = settings.kkt_reg;
  else
    work.d[54] += settings.kkt_reg;
  work.d_inv[54] = 1/work.d[54];

  work.L[120] = (work.KKT[109])*work.d_inv[54];
  work.v[55] = work.KKT[110];
  work.d[55] = work.v[55];

  if (work.d[55] < 0)
    work.d[55] = settings.kkt_reg;
  else
    work.d[55] += settings.kkt_reg;
  work.d_inv[55] = 1/work.d[55];

  work.L[125] = (work.KKT[111])*work.d_inv[55];
  work.v[56] = work.KKT[112];
  work.d[56] = work.v[56];

  if (work.d[56] < 0)
    work.d[56] = settings.kkt_reg;
  else
    work.d[56] += settings.kkt_reg;
  work.d_inv[56] = 1/work.d[56];

  work.L[130] = (work.KKT[113])*work.d_inv[56];
  work.v[57] = work.KKT[114];
  work.d[57] = work.v[57];

  if (work.d[57] < 0)
    work.d[57] = settings.kkt_reg;
  else
    work.d[57] += settings.kkt_reg;
  work.d_inv[57] = 1/work.d[57];

  work.L[135] = (work.KKT[115])*work.d_inv[57];
  work.v[58] = work.KKT[116];
  work.d[58] = work.v[58];

  if (work.d[58] < 0)
    work.d[58] = settings.kkt_reg;
  else
    work.d[58] += settings.kkt_reg;
  work.d_inv[58] = 1/work.d[58];

  work.L[140] = (work.KKT[117])*work.d_inv[58];
  work.v[59] = work.KKT[118];
  work.d[59] = work.v[59];

  if (work.d[59] < 0)
    work.d[59] = settings.kkt_reg;
  else
    work.d[59] += settings.kkt_reg;
  work.d_inv[59] = 1/work.d[59];

  work.L[145] = (work.KKT[119])*work.d_inv[59];
  work.v[60] = work.KKT[120];
  work.d[60] = work.v[60];

  if (work.d[60] < 0)
    work.d[60] = settings.kkt_reg;
  else
    work.d[60] += settings.kkt_reg;
  work.d_inv[60] = 1/work.d[60];

  work.L[150] = (work.KKT[121])*work.d_inv[60];
  work.v[61] = work.KKT[122];
  work.d[61] = work.v[61];

  if (work.d[61] < 0)
    work.d[61] = settings.kkt_reg;
  else
    work.d[61] += settings.kkt_reg;
  work.d_inv[61] = 1/work.d[61];

  work.L[158] = (work.KKT[123])*work.d_inv[61];
  work.v[62] = work.KKT[124];
  work.d[62] = work.v[62];

  if (work.d[62] < 0)
    work.d[62] = settings.kkt_reg;
  else
    work.d[62] += settings.kkt_reg;
  work.d_inv[62] = 1/work.d[62];

  work.L[167] = (work.KKT[125])*work.d_inv[62];
  work.v[63] = work.KKT[126];
  work.d[63] = work.v[63];

  if (work.d[63] < 0)
    work.d[63] = settings.kkt_reg;
  else
    work.d[63] += settings.kkt_reg;
  work.d_inv[63] = 1/work.d[63];

  work.L[177] = (work.KKT[127])*work.d_inv[63];
  work.v[64] = work.KKT[128];
  work.d[64] = work.v[64];

  if (work.d[64] < 0)
    work.d[64] = settings.kkt_reg;
  else
    work.d[64] += settings.kkt_reg;
  work.d_inv[64] = 1/work.d[64];

  work.L[188] = (work.KKT[129])*work.d_inv[64];
  work.v[65] = work.KKT[130];
  work.d[65] = work.v[65];

  if (work.d[65] < 0)
    work.d[65] = settings.kkt_reg;
  else
    work.d[65] += settings.kkt_reg;
  work.d_inv[65] = 1/work.d[65];

  work.L[200] = (work.KKT[131])*work.d_inv[65];
  work.v[66] = work.KKT[132];
  work.d[66] = work.v[66];

  if (work.d[66] < 0)
    work.d[66] = settings.kkt_reg;
  else
    work.d[66] += settings.kkt_reg;
  work.d_inv[66] = 1/work.d[66];

  work.L[213] = (work.KKT[133])*work.d_inv[66];
  work.v[67] = work.KKT[134];
  work.d[67] = work.v[67];

  if (work.d[67] < 0)
    work.d[67] = settings.kkt_reg;
  else
    work.d[67] += settings.kkt_reg;
  work.d_inv[67] = 1/work.d[67];

  work.L[227] = (work.KKT[135])*work.d_inv[67];
  work.v[68] = work.KKT[136];
  work.d[68] = work.v[68];

  if (work.d[68] < 0)
    work.d[68] = settings.kkt_reg;
  else
    work.d[68] += settings.kkt_reg;
  work.d_inv[68] = 1/work.d[68];

  work.L[242] = (work.KKT[137])*work.d_inv[68];
  work.v[69] = work.KKT[138];
  work.d[69] = work.v[69];

  if (work.d[69] < 0)
    work.d[69] = settings.kkt_reg;
  else
    work.d[69] += settings.kkt_reg;
  work.d_inv[69] = 1/work.d[69];

  work.L[258] = (work.KKT[139])*work.d_inv[69];
  work.v[70] = work.KKT[140];
  work.d[70] = work.v[70];

  if (work.d[70] < 0)
    work.d[70] = settings.kkt_reg;
  else
    work.d[70] += settings.kkt_reg;
  work.d_inv[70] = 1/work.d[70];

  work.L[275] = (work.KKT[141])*work.d_inv[70];
  work.v[71] = work.KKT[142];
  work.d[71] = work.v[71];

  if (work.d[71] < 0)
    work.d[71] = settings.kkt_reg;
  else
    work.d[71] += settings.kkt_reg;
  work.d_inv[71] = 1/work.d[71];

  work.L[293] = (work.KKT[143])*work.d_inv[71];
  work.v[72] = work.KKT[144];
  work.d[72] = work.v[72];

  if (work.d[72] < 0)
    work.d[72] = settings.kkt_reg;
  else
    work.d[72] += settings.kkt_reg;
  work.d_inv[72] = 1/work.d[72];

  work.L[312] = (work.KKT[145])*work.d_inv[72];
  work.v[73] = work.KKT[146];
  work.d[73] = work.v[73];

  if (work.d[73] < 0)
    work.d[73] = settings.kkt_reg;
  else
    work.d[73] += settings.kkt_reg;
  work.d_inv[73] = 1/work.d[73];

  work.L[332] = (work.KKT[147])*work.d_inv[73];
  work.v[74] = work.KKT[148];
  work.d[74] = work.v[74];

  if (work.d[74] < 0)
    work.d[74] = settings.kkt_reg;
  else
    work.d[74] += settings.kkt_reg;
  work.d_inv[74] = 1/work.d[74];

  work.L[353] = (work.KKT[149])*work.d_inv[74];
  work.v[75] = work.KKT[150];
  work.d[75] = work.v[75];

  if (work.d[75] < 0)
    work.d[75] = settings.kkt_reg;
  else
    work.d[75] += settings.kkt_reg;
  work.d_inv[75] = 1/work.d[75];

  work.L[375] = (work.KKT[151])*work.d_inv[75];
  work.v[76] = work.KKT[152];
  work.d[76] = work.v[76];

  if (work.d[76] < 0)
    work.d[76] = settings.kkt_reg;
  else
    work.d[76] += settings.kkt_reg;
  work.d_inv[76] = 1/work.d[76];

  work.L[398] = (work.KKT[153])*work.d_inv[76];
  work.v[77] = work.KKT[154];
  work.d[77] = work.v[77];

  if (work.d[77] < 0)
    work.d[77] = settings.kkt_reg;
  else
    work.d[77] += settings.kkt_reg;
  work.d_inv[77] = 1/work.d[77];

  work.L[422] = (work.KKT[155])*work.d_inv[77];
  work.v[78] = work.KKT[156];
  work.d[78] = work.v[78];

  if (work.d[78] < 0)
    work.d[78] = settings.kkt_reg;
  else
    work.d[78] += settings.kkt_reg;
  work.d_inv[78] = 1/work.d[78];

  work.L[447] = (work.KKT[157])*work.d_inv[78];
  work.v[79] = work.KKT[158];
  work.d[79] = work.v[79];

  if (work.d[79] < 0)
    work.d[79] = settings.kkt_reg;
  else
    work.d[79] += settings.kkt_reg;
  work.d_inv[79] = 1/work.d[79];

  work.L[473] = (work.KKT[159])*work.d_inv[79];
  work.v[80] = work.KKT[160];
  work.d[80] = work.v[80];

  if (work.d[80] < 0)
    work.d[80] = settings.kkt_reg;
  else
    work.d[80] += settings.kkt_reg;
  work.d_inv[80] = 1/work.d[80];

  work.L[500] = (work.KKT[161])*work.d_inv[80];
  work.v[81] = work.KKT[162];
  work.d[81] = work.v[81];

  if (work.d[81] < 0)
    work.d[81] = settings.kkt_reg;
  else
    work.d[81] += settings.kkt_reg;
  work.d_inv[81] = 1/work.d[81];

  work.L[528] = (work.KKT[163])*work.d_inv[81];
  work.v[82] = work.KKT[164];
  work.d[82] = work.v[82];

  if (work.d[82] < 0)
    work.d[82] = settings.kkt_reg;
  else
    work.d[82] += settings.kkt_reg;
  work.d_inv[82] = 1/work.d[82];

  work.L[557] = (work.KKT[165])*work.d_inv[82];
  work.v[83] = work.KKT[166];
  work.d[83] = work.v[83];

  if (work.d[83] < 0)
    work.d[83] = settings.kkt_reg;
  else
    work.d[83] += settings.kkt_reg;
  work.d_inv[83] = 1/work.d[83];

  work.L[587] = (work.KKT[167])*work.d_inv[83];
  work.v[84] = work.KKT[168];
  work.d[84] = work.v[84];

  if (work.d[84] < 0)
    work.d[84] = settings.kkt_reg;
  else
    work.d[84] += settings.kkt_reg;
  work.d_inv[84] = 1/work.d[84];

  work.L[618] = (work.KKT[169])*work.d_inv[84];
  work.v[85] = work.KKT[170];
  work.d[85] = work.v[85];

  if (work.d[85] < 0)
    work.d[85] = settings.kkt_reg;
  else
    work.d[85] += settings.kkt_reg;
  work.d_inv[85] = 1/work.d[85];

  work.L[650] = (work.KKT[171])*work.d_inv[85];
  work.v[86] = work.KKT[172];
  work.d[86] = work.v[86];

  if (work.d[86] < 0)
    work.d[86] = settings.kkt_reg;
  else
    work.d[86] += settings.kkt_reg;
  work.d_inv[86] = 1/work.d[86];

  work.L[683] = (work.KKT[173])*work.d_inv[86];
  work.v[87] = work.KKT[174];
  work.d[87] = work.v[87];

  if (work.d[87] < 0)
    work.d[87] = settings.kkt_reg;
  else
    work.d[87] += settings.kkt_reg;
  work.d_inv[87] = 1/work.d[87];

  work.L[717] = (work.KKT[175])*work.d_inv[87];
  work.v[88] = work.KKT[176];
  work.d[88] = work.v[88];

  if (work.d[88] < 0)
    work.d[88] = settings.kkt_reg;
  else
    work.d[88] += settings.kkt_reg;
  work.d_inv[88] = 1/work.d[88];

  work.L[752] = (work.KKT[177])*work.d_inv[88];
  work.v[89] = work.KKT[178];
  work.d[89] = work.v[89];

  if (work.d[89] < 0)
    work.d[89] = settings.kkt_reg;
  else
    work.d[89] += settings.kkt_reg;
  work.d_inv[89] = 1/work.d[89];

  work.L[818] = (work.KKT[179])*work.d_inv[89];
  work.v[90] = work.KKT[180];
  work.d[90] = work.v[90];

  if (work.d[90] < 0)
    work.d[90] = settings.kkt_reg;
  else
    work.d[90] += settings.kkt_reg;
  work.d_inv[90] = 1/work.d[90];

  work.L[152] = (work.KKT[181])*work.d_inv[90];
  work.v[91] = work.KKT[182];
  work.d[91] = work.v[91];

  if (work.d[91] < 0)
    work.d[91] = settings.kkt_reg;
  else
    work.d[91] += settings.kkt_reg;
  work.d_inv[91] = 1/work.d[91];

  work.L[160] = (work.KKT[183])*work.d_inv[91];
  work.v[92] = work.KKT[184];
  work.d[92] = work.v[92];

  if (work.d[92] < 0)
    work.d[92] = settings.kkt_reg;
  else
    work.d[92] += settings.kkt_reg;
  work.d_inv[92] = 1/work.d[92];

  work.L[169] = (work.KKT[185])*work.d_inv[92];
  work.v[93] = work.KKT[186];
  work.d[93] = work.v[93];

  if (work.d[93] < 0)
    work.d[93] = settings.kkt_reg;
  else
    work.d[93] += settings.kkt_reg;
  work.d_inv[93] = 1/work.d[93];

  work.L[179] = (work.KKT[187])*work.d_inv[93];
  work.v[94] = work.KKT[188];
  work.d[94] = work.v[94];

  if (work.d[94] < 0)
    work.d[94] = settings.kkt_reg;
  else
    work.d[94] += settings.kkt_reg;
  work.d_inv[94] = 1/work.d[94];

  work.L[190] = (work.KKT[189])*work.d_inv[94];
  work.v[95] = work.KKT[190];
  work.d[95] = work.v[95];

  if (work.d[95] < 0)
    work.d[95] = settings.kkt_reg;
  else
    work.d[95] += settings.kkt_reg;
  work.d_inv[95] = 1/work.d[95];

  work.L[202] = (work.KKT[191])*work.d_inv[95];
  work.v[96] = work.KKT[192];
  work.d[96] = work.v[96];

  if (work.d[96] < 0)
    work.d[96] = settings.kkt_reg;
  else
    work.d[96] += settings.kkt_reg;
  work.d_inv[96] = 1/work.d[96];

  work.L[215] = (work.KKT[193])*work.d_inv[96];
  work.v[97] = work.KKT[194];
  work.d[97] = work.v[97];

  if (work.d[97] < 0)
    work.d[97] = settings.kkt_reg;
  else
    work.d[97] += settings.kkt_reg;
  work.d_inv[97] = 1/work.d[97];

  work.L[229] = (work.KKT[195])*work.d_inv[97];
  work.v[98] = work.KKT[196];
  work.d[98] = work.v[98];

  if (work.d[98] < 0)
    work.d[98] = settings.kkt_reg;
  else
    work.d[98] += settings.kkt_reg;
  work.d_inv[98] = 1/work.d[98];

  work.L[244] = (work.KKT[197])*work.d_inv[98];
  work.v[99] = work.KKT[198];
  work.d[99] = work.v[99];

  if (work.d[99] < 0)
    work.d[99] = settings.kkt_reg;
  else
    work.d[99] += settings.kkt_reg;
  work.d_inv[99] = 1/work.d[99];

  work.L[260] = (work.KKT[199])*work.d_inv[99];
  work.v[100] = work.KKT[200];
  work.d[100] = work.v[100];

  if (work.d[100] < 0)
    work.d[100] = settings.kkt_reg;
  else
    work.d[100] += settings.kkt_reg;
  work.d_inv[100] = 1/work.d[100];

  work.L[277] = (work.KKT[201])*work.d_inv[100];
  work.v[101] = work.KKT[202];
  work.d[101] = work.v[101];

  if (work.d[101] < 0)
    work.d[101] = settings.kkt_reg;
  else
    work.d[101] += settings.kkt_reg;
  work.d_inv[101] = 1/work.d[101];

  work.L[295] = (work.KKT[203])*work.d_inv[101];
  work.v[102] = work.KKT[204];
  work.d[102] = work.v[102];

  if (work.d[102] < 0)
    work.d[102] = settings.kkt_reg;
  else
    work.d[102] += settings.kkt_reg;
  work.d_inv[102] = 1/work.d[102];

  work.L[314] = (work.KKT[205])*work.d_inv[102];
  work.v[103] = work.KKT[206];
  work.d[103] = work.v[103];

  if (work.d[103] < 0)
    work.d[103] = settings.kkt_reg;
  else
    work.d[103] += settings.kkt_reg;
  work.d_inv[103] = 1/work.d[103];

  work.L[334] = (work.KKT[207])*work.d_inv[103];
  work.v[104] = work.KKT[208];
  work.d[104] = work.v[104];

  if (work.d[104] < 0)
    work.d[104] = settings.kkt_reg;
  else
    work.d[104] += settings.kkt_reg;
  work.d_inv[104] = 1/work.d[104];

  work.L[355] = (work.KKT[209])*work.d_inv[104];
  work.v[105] = work.KKT[210];
  work.d[105] = work.v[105];

  if (work.d[105] < 0)
    work.d[105] = settings.kkt_reg;
  else
    work.d[105] += settings.kkt_reg;
  work.d_inv[105] = 1/work.d[105];

  work.L[377] = (work.KKT[211])*work.d_inv[105];
  work.v[106] = work.KKT[212];
  work.d[106] = work.v[106];

  if (work.d[106] < 0)
    work.d[106] = settings.kkt_reg;
  else
    work.d[106] += settings.kkt_reg;
  work.d_inv[106] = 1/work.d[106];

  work.L[400] = (work.KKT[213])*work.d_inv[106];
  work.v[107] = work.KKT[214];
  work.d[107] = work.v[107];

  if (work.d[107] < 0)
    work.d[107] = settings.kkt_reg;
  else
    work.d[107] += settings.kkt_reg;
  work.d_inv[107] = 1/work.d[107];

  work.L[424] = (work.KKT[215])*work.d_inv[107];
  work.v[108] = work.KKT[216];
  work.d[108] = work.v[108];

  if (work.d[108] < 0)
    work.d[108] = settings.kkt_reg;
  else
    work.d[108] += settings.kkt_reg;
  work.d_inv[108] = 1/work.d[108];

  work.L[449] = (work.KKT[217])*work.d_inv[108];
  work.v[109] = work.KKT[218];
  work.d[109] = work.v[109];

  if (work.d[109] < 0)
    work.d[109] = settings.kkt_reg;
  else
    work.d[109] += settings.kkt_reg;
  work.d_inv[109] = 1/work.d[109];

  work.L[475] = (work.KKT[219])*work.d_inv[109];
  work.v[110] = work.KKT[220];
  work.d[110] = work.v[110];

  if (work.d[110] < 0)
    work.d[110] = settings.kkt_reg;
  else
    work.d[110] += settings.kkt_reg;
  work.d_inv[110] = 1/work.d[110];

  work.L[502] = (work.KKT[221])*work.d_inv[110];
  work.v[111] = work.KKT[222];
  work.d[111] = work.v[111];

  if (work.d[111] < 0)
    work.d[111] = settings.kkt_reg;
  else
    work.d[111] += settings.kkt_reg;
  work.d_inv[111] = 1/work.d[111];

  work.L[530] = (work.KKT[223])*work.d_inv[111];
  work.v[112] = work.KKT[224];
  work.d[112] = work.v[112];

  if (work.d[112] < 0)
    work.d[112] = settings.kkt_reg;
  else
    work.d[112] += settings.kkt_reg;
  work.d_inv[112] = 1/work.d[112];

  work.L[559] = (work.KKT[225])*work.d_inv[112];
  work.v[113] = work.KKT[226];
  work.d[113] = work.v[113];

  if (work.d[113] < 0)
    work.d[113] = settings.kkt_reg;
  else
    work.d[113] += settings.kkt_reg;
  work.d_inv[113] = 1/work.d[113];

  work.L[589] = (work.KKT[227])*work.d_inv[113];
  work.v[114] = work.KKT[228];
  work.d[114] = work.v[114];

  if (work.d[114] < 0)
    work.d[114] = settings.kkt_reg;
  else
    work.d[114] += settings.kkt_reg;
  work.d_inv[114] = 1/work.d[114];

  work.L[620] = (work.KKT[229])*work.d_inv[114];
  work.v[115] = work.KKT[230];
  work.d[115] = work.v[115];

  if (work.d[115] < 0)
    work.d[115] = settings.kkt_reg;
  else
    work.d[115] += settings.kkt_reg;
  work.d_inv[115] = 1/work.d[115];

  work.L[652] = (work.KKT[231])*work.d_inv[115];
  work.v[116] = work.KKT[232];
  work.d[116] = work.v[116];

  if (work.d[116] < 0)
    work.d[116] = settings.kkt_reg;
  else
    work.d[116] += settings.kkt_reg;
  work.d_inv[116] = 1/work.d[116];

  work.L[685] = (work.KKT[233])*work.d_inv[116];
  work.v[117] = work.KKT[234];
  work.d[117] = work.v[117];

  if (work.d[117] < 0)
    work.d[117] = settings.kkt_reg;
  else
    work.d[117] += settings.kkt_reg;
  work.d_inv[117] = 1/work.d[117];

  work.L[719] = (work.KKT[235])*work.d_inv[117];
  work.v[118] = work.KKT[236];
  work.d[118] = work.v[118];

  if (work.d[118] < 0)
    work.d[118] = settings.kkt_reg;
  else
    work.d[118] += settings.kkt_reg;
  work.d_inv[118] = 1/work.d[118];

  work.L[754] = (work.KKT[237])*work.d_inv[118];
  work.v[119] = work.KKT[238];
  work.d[119] = work.v[119];

  if (work.d[119] < 0)
    work.d[119] = settings.kkt_reg;
  else
    work.d[119] += settings.kkt_reg;
  work.d_inv[119] = 1/work.d[119];

  work.L[821] = (work.KKT[239])*work.d_inv[119];
  work.v[120] = 0;
  work.d[120] = work.v[120];

  if (work.d[120] < 0)
    work.d[120] = settings.kkt_reg;
  else
    work.d[120] += settings.kkt_reg;
  work.d_inv[120] = 1/work.d[120];

  work.L[1] = (work.KKT[240])*work.d_inv[120];
  work.L[3] = (work.KKT[241])*work.d_inv[120];
  work.v[30] = work.L[0]*work.d[30];
  work.v[120] = work.L[1]*work.d[120];
  work.v[121] = work.KKT[242]-work.L[0]*work.v[30]-work.L[1]*work.v[120];
  work.d[121] = work.v[121];

  if (work.d[121] > 0)
    work.d[121] = -settings.kkt_reg;
  else
    work.d[121] -= settings.kkt_reg;

  work.d_inv[121] = 1/work.d[121];

  work.L[4] = (-work.L[3]*work.v[120])*work.d_inv[121];
  work.v[0] = work.L[2]*work.d[0];
  work.v[120] = work.L[3]*work.d[120];
  work.v[121] = work.L[4]*work.d[121];
  work.v[122] = work.KKT[243]-work.L[2]*work.v[0]-work.L[3]*work.v[120]-work.L[4]*work.v[121];
  work.d[122] = work.v[122];

  if (work.d[122] > 0)
    work.d[122] = -settings.kkt_reg;
  else
    work.d[122] -= settings.kkt_reg;

  work.d_inv[122] = 1/work.d[122];

  work.L[155] = (work.KKT[244])*work.d_inv[122];
  work.v[123] = 0;
  work.d[123] = work.v[123];

  if (work.d[123] < 0)
    work.d[123] = settings.kkt_reg;
  else
    work.d[123] += settings.kkt_reg;
  work.d_inv[123] = 1/work.d[123];

  work.L[6] = (work.KKT[245])*work.d_inv[123];
  work.L[8] = (work.KKT[246])*work.d_inv[123];
  work.v[31] = work.L[5]*work.d[31];
  work.v[123] = work.L[6]*work.d[123];
  work.v[124] = work.KKT[247]-work.L[5]*work.v[31]-work.L[6]*work.v[123];
  work.d[124] = work.v[124];

  if (work.d[124] > 0)
    work.d[124] = -settings.kkt_reg;
  else
    work.d[124] -= settings.kkt_reg;

  work.d_inv[124] = 1/work.d[124];

  work.L[9] = (-work.L[8]*work.v[123])*work.d_inv[124];
  work.v[1] = work.L[7]*work.d[1];
  work.v[123] = work.L[8]*work.d[123];
  work.v[124] = work.L[9]*work.d[124];
  work.v[125] = work.KKT[248]-work.L[7]*work.v[1]-work.L[8]*work.v[123]-work.L[9]*work.v[124];
  work.d[125] = work.v[125];

  if (work.d[125] > 0)
    work.d[125] = -settings.kkt_reg;
  else
    work.d[125] -= settings.kkt_reg;

  work.d_inv[125] = 1/work.d[125];

  work.L[163] = (work.KKT[249])*work.d_inv[125];
  work.v[126] = 0;
  work.d[126] = work.v[126];

  if (work.d[126] < 0)
    work.d[126] = settings.kkt_reg;
  else
    work.d[126] += settings.kkt_reg;
  work.d_inv[126] = 1/work.d[126];

  work.L[11] = (work.KKT[250])*work.d_inv[126];
  work.L[13] = (work.KKT[251])*work.d_inv[126];
  work.v[32] = work.L[10]*work.d[32];
  work.v[126] = work.L[11]*work.d[126];
  work.v[127] = work.KKT[252]-work.L[10]*work.v[32]-work.L[11]*work.v[126];
  work.d[127] = work.v[127];

  if (work.d[127] > 0)
    work.d[127] = -settings.kkt_reg;
  else
    work.d[127] -= settings.kkt_reg;

  work.d_inv[127] = 1/work.d[127];

  work.L[14] = (-work.L[13]*work.v[126])*work.d_inv[127];
  work.v[2] = work.L[12]*work.d[2];
  work.v[126] = work.L[13]*work.d[126];
  work.v[127] = work.L[14]*work.d[127];
  work.v[128] = work.KKT[253]-work.L[12]*work.v[2]-work.L[13]*work.v[126]-work.L[14]*work.v[127];
  work.d[128] = work.v[128];

  if (work.d[128] > 0)
    work.d[128] = -settings.kkt_reg;
  else
    work.d[128] -= settings.kkt_reg;

  work.d_inv[128] = 1/work.d[128];

  work.L[172] = (work.KKT[254])*work.d_inv[128];
  work.v[129] = 0;
  work.d[129] = work.v[129];

  if (work.d[129] < 0)
    work.d[129] = settings.kkt_reg;
  else
    work.d[129] += settings.kkt_reg;
  work.d_inv[129] = 1/work.d[129];

  work.L[16] = (work.KKT[255])*work.d_inv[129];
  work.L[18] = (work.KKT[256])*work.d_inv[129];
  work.v[33] = work.L[15]*work.d[33];
  work.v[129] = work.L[16]*work.d[129];
  work.v[130] = work.KKT[257]-work.L[15]*work.v[33]-work.L[16]*work.v[129];
  work.d[130] = work.v[130];

  if (work.d[130] > 0)
    work.d[130] = -settings.kkt_reg;
  else
    work.d[130] -= settings.kkt_reg;

  work.d_inv[130] = 1/work.d[130];

  work.L[19] = (-work.L[18]*work.v[129])*work.d_inv[130];
  work.v[3] = work.L[17]*work.d[3];
  work.v[129] = work.L[18]*work.d[129];
  work.v[130] = work.L[19]*work.d[130];
  work.v[131] = work.KKT[258]-work.L[17]*work.v[3]-work.L[18]*work.v[129]-work.L[19]*work.v[130];
  work.d[131] = work.v[131];

  if (work.d[131] > 0)
    work.d[131] = -settings.kkt_reg;
  else
    work.d[131] -= settings.kkt_reg;

  work.d_inv[131] = 1/work.d[131];

  work.L[182] = (work.KKT[259])*work.d_inv[131];
  work.v[132] = 0;
  work.d[132] = work.v[132];

  if (work.d[132] < 0)
    work.d[132] = settings.kkt_reg;
  else
    work.d[132] += settings.kkt_reg;
  work.d_inv[132] = 1/work.d[132];

  work.L[21] = (work.KKT[260])*work.d_inv[132];
  work.L[23] = (work.KKT[261])*work.d_inv[132];
  work.v[34] = work.L[20]*work.d[34];
  work.v[132] = work.L[21]*work.d[132];
  work.v[133] = work.KKT[262]-work.L[20]*work.v[34]-work.L[21]*work.v[132];
  work.d[133] = work.v[133];

  if (work.d[133] > 0)
    work.d[133] = -settings.kkt_reg;
  else
    work.d[133] -= settings.kkt_reg;

  work.d_inv[133] = 1/work.d[133];

  work.L[24] = (-work.L[23]*work.v[132])*work.d_inv[133];
  work.v[4] = work.L[22]*work.d[4];
  work.v[132] = work.L[23]*work.d[132];
  work.v[133] = work.L[24]*work.d[133];
  work.v[134] = work.KKT[263]-work.L[22]*work.v[4]-work.L[23]*work.v[132]-work.L[24]*work.v[133];
  work.d[134] = work.v[134];

  if (work.d[134] > 0)
    work.d[134] = -settings.kkt_reg;
  else
    work.d[134] -= settings.kkt_reg;

  work.d_inv[134] = 1/work.d[134];

  work.L[193] = (work.KKT[264])*work.d_inv[134];
  work.v[135] = 0;
  work.d[135] = work.v[135];

  if (work.d[135] < 0)
    work.d[135] = settings.kkt_reg;
  else
    work.d[135] += settings.kkt_reg;
  work.d_inv[135] = 1/work.d[135];

  work.L[26] = (work.KKT[265])*work.d_inv[135];
  work.L[28] = (work.KKT[266])*work.d_inv[135];
  work.v[35] = work.L[25]*work.d[35];
  work.v[135] = work.L[26]*work.d[135];
  work.v[136] = work.KKT[267]-work.L[25]*work.v[35]-work.L[26]*work.v[135];
  work.d[136] = work.v[136];

  if (work.d[136] > 0)
    work.d[136] = -settings.kkt_reg;
  else
    work.d[136] -= settings.kkt_reg;

  work.d_inv[136] = 1/work.d[136];

  work.L[29] = (-work.L[28]*work.v[135])*work.d_inv[136];
  work.v[5] = work.L[27]*work.d[5];
  work.v[135] = work.L[28]*work.d[135];
  work.v[136] = work.L[29]*work.d[136];
  work.v[137] = work.KKT[268]-work.L[27]*work.v[5]-work.L[28]*work.v[135]-work.L[29]*work.v[136];
  work.d[137] = work.v[137];

  if (work.d[137] > 0)
    work.d[137] = -settings.kkt_reg;
  else
    work.d[137] -= settings.kkt_reg;

  work.d_inv[137] = 1/work.d[137];

  work.L[205] = (work.KKT[269])*work.d_inv[137];
  work.v[138] = 0;
  work.d[138] = work.v[138];

  if (work.d[138] < 0)
    work.d[138] = settings.kkt_reg;
  else
    work.d[138] += settings.kkt_reg;
  work.d_inv[138] = 1/work.d[138];

  work.L[31] = (work.KKT[270])*work.d_inv[138];
  work.L[33] = (work.KKT[271])*work.d_inv[138];
  work.v[36] = work.L[30]*work.d[36];
  work.v[138] = work.L[31]*work.d[138];
  work.v[139] = work.KKT[272]-work.L[30]*work.v[36]-work.L[31]*work.v[138];
  work.d[139] = work.v[139];

  if (work.d[139] > 0)
    work.d[139] = -settings.kkt_reg;
  else
    work.d[139] -= settings.kkt_reg;

  work.d_inv[139] = 1/work.d[139];

  work.L[34] = (-work.L[33]*work.v[138])*work.d_inv[139];
  work.v[6] = work.L[32]*work.d[6];
  work.v[138] = work.L[33]*work.d[138];
  work.v[139] = work.L[34]*work.d[139];
  work.v[140] = work.KKT[273]-work.L[32]*work.v[6]-work.L[33]*work.v[138]-work.L[34]*work.v[139];
  work.d[140] = work.v[140];

  if (work.d[140] > 0)
    work.d[140] = -settings.kkt_reg;
  else
    work.d[140] -= settings.kkt_reg;

  work.d_inv[140] = 1/work.d[140];

  work.L[218] = (work.KKT[274])*work.d_inv[140];
  work.v[141] = 0;
  work.d[141] = work.v[141];

  if (work.d[141] < 0)
    work.d[141] = settings.kkt_reg;
  else
    work.d[141] += settings.kkt_reg;
  work.d_inv[141] = 1/work.d[141];

  work.L[36] = (work.KKT[275])*work.d_inv[141];
  work.L[38] = (work.KKT[276])*work.d_inv[141];
  work.v[37] = work.L[35]*work.d[37];
  work.v[141] = work.L[36]*work.d[141];
  work.v[142] = work.KKT[277]-work.L[35]*work.v[37]-work.L[36]*work.v[141];
  work.d[142] = work.v[142];

  if (work.d[142] > 0)
    work.d[142] = -settings.kkt_reg;
  else
    work.d[142] -= settings.kkt_reg;

  work.d_inv[142] = 1/work.d[142];

  work.L[39] = (-work.L[38]*work.v[141])*work.d_inv[142];
  work.v[7] = work.L[37]*work.d[7];
  work.v[141] = work.L[38]*work.d[141];
  work.v[142] = work.L[39]*work.d[142];
  work.v[143] = work.KKT[278]-work.L[37]*work.v[7]-work.L[38]*work.v[141]-work.L[39]*work.v[142];
  work.d[143] = work.v[143];

  if (work.d[143] > 0)
    work.d[143] = -settings.kkt_reg;
  else
    work.d[143] -= settings.kkt_reg;

  work.d_inv[143] = 1/work.d[143];

  work.L[232] = (work.KKT[279])*work.d_inv[143];
  work.v[144] = 0;
  work.d[144] = work.v[144];

  if (work.d[144] < 0)
    work.d[144] = settings.kkt_reg;
  else
    work.d[144] += settings.kkt_reg;
  work.d_inv[144] = 1/work.d[144];

  work.L[41] = (work.KKT[280])*work.d_inv[144];
  work.L[43] = (work.KKT[281])*work.d_inv[144];
  work.v[38] = work.L[40]*work.d[38];
  work.v[144] = work.L[41]*work.d[144];
  work.v[145] = work.KKT[282]-work.L[40]*work.v[38]-work.L[41]*work.v[144];
  work.d[145] = work.v[145];

  if (work.d[145] > 0)
    work.d[145] = -settings.kkt_reg;
  else
    work.d[145] -= settings.kkt_reg;

  work.d_inv[145] = 1/work.d[145];

  work.L[44] = (-work.L[43]*work.v[144])*work.d_inv[145];
  work.v[8] = work.L[42]*work.d[8];
  work.v[144] = work.L[43]*work.d[144];
  work.v[145] = work.L[44]*work.d[145];
  work.v[146] = work.KKT[283]-work.L[42]*work.v[8]-work.L[43]*work.v[144]-work.L[44]*work.v[145];
  work.d[146] = work.v[146];

  if (work.d[146] > 0)
    work.d[146] = -settings.kkt_reg;
  else
    work.d[146] -= settings.kkt_reg;

  work.d_inv[146] = 1/work.d[146];

  work.L[247] = (work.KKT[284])*work.d_inv[146];
  work.v[147] = 0;
  work.d[147] = work.v[147];

  if (work.d[147] < 0)
    work.d[147] = settings.kkt_reg;
  else
    work.d[147] += settings.kkt_reg;
  work.d_inv[147] = 1/work.d[147];

  work.L[46] = (work.KKT[285])*work.d_inv[147];
  work.L[48] = (work.KKT[286])*work.d_inv[147];
  work.v[39] = work.L[45]*work.d[39];
  work.v[147] = work.L[46]*work.d[147];
  work.v[148] = work.KKT[287]-work.L[45]*work.v[39]-work.L[46]*work.v[147];
  work.d[148] = work.v[148];

  if (work.d[148] > 0)
    work.d[148] = -settings.kkt_reg;
  else
    work.d[148] -= settings.kkt_reg;

  work.d_inv[148] = 1/work.d[148];

  work.L[49] = (-work.L[48]*work.v[147])*work.d_inv[148];
  work.v[9] = work.L[47]*work.d[9];
  work.v[147] = work.L[48]*work.d[147];
  work.v[148] = work.L[49]*work.d[148];
  work.v[149] = work.KKT[288]-work.L[47]*work.v[9]-work.L[48]*work.v[147]-work.L[49]*work.v[148];
  work.d[149] = work.v[149];

  if (work.d[149] > 0)
    work.d[149] = -settings.kkt_reg;
  else
    work.d[149] -= settings.kkt_reg;

  work.d_inv[149] = 1/work.d[149];

  work.L[263] = (work.KKT[289])*work.d_inv[149];
  work.v[150] = 0;
  work.d[150] = work.v[150];

  if (work.d[150] < 0)
    work.d[150] = settings.kkt_reg;
  else
    work.d[150] += settings.kkt_reg;
  work.d_inv[150] = 1/work.d[150];

  work.L[51] = (work.KKT[290])*work.d_inv[150];
  work.L[53] = (work.KKT[291])*work.d_inv[150];
  work.v[40] = work.L[50]*work.d[40];
  work.v[150] = work.L[51]*work.d[150];
  work.v[151] = work.KKT[292]-work.L[50]*work.v[40]-work.L[51]*work.v[150];
  work.d[151] = work.v[151];

  if (work.d[151] > 0)
    work.d[151] = -settings.kkt_reg;
  else
    work.d[151] -= settings.kkt_reg;

  work.d_inv[151] = 1/work.d[151];

  work.L[54] = (-work.L[53]*work.v[150])*work.d_inv[151];
  work.v[10] = work.L[52]*work.d[10];
  work.v[150] = work.L[53]*work.d[150];
  work.v[151] = work.L[54]*work.d[151];
  work.v[152] = work.KKT[293]-work.L[52]*work.v[10]-work.L[53]*work.v[150]-work.L[54]*work.v[151];
  work.d[152] = work.v[152];

  if (work.d[152] > 0)
    work.d[152] = -settings.kkt_reg;
  else
    work.d[152] -= settings.kkt_reg;

  work.d_inv[152] = 1/work.d[152];

  work.L[280] = (work.KKT[294])*work.d_inv[152];
  work.v[153] = 0;
  work.d[153] = work.v[153];

  if (work.d[153] < 0)
    work.d[153] = settings.kkt_reg;
  else
    work.d[153] += settings.kkt_reg;
  work.d_inv[153] = 1/work.d[153];

  work.L[56] = (work.KKT[295])*work.d_inv[153];
  work.L[58] = (work.KKT[296])*work.d_inv[153];
  work.v[41] = work.L[55]*work.d[41];
  work.v[153] = work.L[56]*work.d[153];
  work.v[154] = work.KKT[297]-work.L[55]*work.v[41]-work.L[56]*work.v[153];
  work.d[154] = work.v[154];

  if (work.d[154] > 0)
    work.d[154] = -settings.kkt_reg;
  else
    work.d[154] -= settings.kkt_reg;

  work.d_inv[154] = 1/work.d[154];

  work.L[59] = (-work.L[58]*work.v[153])*work.d_inv[154];
  work.v[11] = work.L[57]*work.d[11];
  work.v[153] = work.L[58]*work.d[153];
  work.v[154] = work.L[59]*work.d[154];
  work.v[155] = work.KKT[298]-work.L[57]*work.v[11]-work.L[58]*work.v[153]-work.L[59]*work.v[154];
  work.d[155] = work.v[155];

  if (work.d[155] > 0)
    work.d[155] = -settings.kkt_reg;
  else
    work.d[155] -= settings.kkt_reg;

  work.d_inv[155] = 1/work.d[155];

  work.L[298] = (work.KKT[299])*work.d_inv[155];
  work.v[156] = 0;
  work.d[156] = work.v[156];

  if (work.d[156] < 0)
    work.d[156] = settings.kkt_reg;
  else
    work.d[156] += settings.kkt_reg;
  work.d_inv[156] = 1/work.d[156];

  work.L[61] = (work.KKT[300])*work.d_inv[156];
  work.L[63] = (work.KKT[301])*work.d_inv[156];
  work.v[42] = work.L[60]*work.d[42];
  work.v[156] = work.L[61]*work.d[156];
  work.v[157] = work.KKT[302]-work.L[60]*work.v[42]-work.L[61]*work.v[156];
  work.d[157] = work.v[157];

  if (work.d[157] > 0)
    work.d[157] = -settings.kkt_reg;
  else
    work.d[157] -= settings.kkt_reg;

  work.d_inv[157] = 1/work.d[157];

  work.L[64] = (-work.L[63]*work.v[156])*work.d_inv[157];
  work.v[12] = work.L[62]*work.d[12];
  work.v[156] = work.L[63]*work.d[156];
  work.v[157] = work.L[64]*work.d[157];
  work.v[158] = work.KKT[303]-work.L[62]*work.v[12]-work.L[63]*work.v[156]-work.L[64]*work.v[157];
  work.d[158] = work.v[158];

  if (work.d[158] > 0)
    work.d[158] = -settings.kkt_reg;
  else
    work.d[158] -= settings.kkt_reg;

  work.d_inv[158] = 1/work.d[158];

  work.L[317] = (work.KKT[304])*work.d_inv[158];
  work.v[159] = 0;
  work.d[159] = work.v[159];

  if (work.d[159] < 0)
    work.d[159] = settings.kkt_reg;
  else
    work.d[159] += settings.kkt_reg;
  work.d_inv[159] = 1/work.d[159];

  work.L[66] = (work.KKT[305])*work.d_inv[159];
  work.L[68] = (work.KKT[306])*work.d_inv[159];
  work.v[43] = work.L[65]*work.d[43];
  work.v[159] = work.L[66]*work.d[159];
  work.v[160] = work.KKT[307]-work.L[65]*work.v[43]-work.L[66]*work.v[159];
  work.d[160] = work.v[160];

  if (work.d[160] > 0)
    work.d[160] = -settings.kkt_reg;
  else
    work.d[160] -= settings.kkt_reg;

  work.d_inv[160] = 1/work.d[160];

  work.L[69] = (-work.L[68]*work.v[159])*work.d_inv[160];
  work.v[13] = work.L[67]*work.d[13];
  work.v[159] = work.L[68]*work.d[159];
  work.v[160] = work.L[69]*work.d[160];
  work.v[161] = work.KKT[308]-work.L[67]*work.v[13]-work.L[68]*work.v[159]-work.L[69]*work.v[160];
  work.d[161] = work.v[161];

  if (work.d[161] > 0)
    work.d[161] = -settings.kkt_reg;
  else
    work.d[161] -= settings.kkt_reg;

  work.d_inv[161] = 1/work.d[161];

  work.L[337] = (work.KKT[309])*work.d_inv[161];
  work.v[162] = 0;
  work.d[162] = work.v[162];

  if (work.d[162] < 0)
    work.d[162] = settings.kkt_reg;
  else
    work.d[162] += settings.kkt_reg;
  work.d_inv[162] = 1/work.d[162];

  work.L[71] = (work.KKT[310])*work.d_inv[162];
  work.L[73] = (work.KKT[311])*work.d_inv[162];
  work.v[44] = work.L[70]*work.d[44];
  work.v[162] = work.L[71]*work.d[162];
  work.v[163] = work.KKT[312]-work.L[70]*work.v[44]-work.L[71]*work.v[162];
  work.d[163] = work.v[163];

  if (work.d[163] > 0)
    work.d[163] = -settings.kkt_reg;
  else
    work.d[163] -= settings.kkt_reg;

  work.d_inv[163] = 1/work.d[163];

  work.L[74] = (-work.L[73]*work.v[162])*work.d_inv[163];
  work.v[14] = work.L[72]*work.d[14];
  work.v[162] = work.L[73]*work.d[162];
  work.v[163] = work.L[74]*work.d[163];
  work.v[164] = work.KKT[313]-work.L[72]*work.v[14]-work.L[73]*work.v[162]-work.L[74]*work.v[163];
  work.d[164] = work.v[164];

  if (work.d[164] > 0)
    work.d[164] = -settings.kkt_reg;
  else
    work.d[164] -= settings.kkt_reg;

  work.d_inv[164] = 1/work.d[164];

  work.L[358] = (work.KKT[314])*work.d_inv[164];
  work.v[165] = 0;
  work.d[165] = work.v[165];

  if (work.d[165] < 0)
    work.d[165] = settings.kkt_reg;
  else
    work.d[165] += settings.kkt_reg;
  work.d_inv[165] = 1/work.d[165];

  work.L[76] = (work.KKT[315])*work.d_inv[165];
  work.L[78] = (work.KKT[316])*work.d_inv[165];
  work.v[45] = work.L[75]*work.d[45];
  work.v[165] = work.L[76]*work.d[165];
  work.v[166] = work.KKT[317]-work.L[75]*work.v[45]-work.L[76]*work.v[165];
  work.d[166] = work.v[166];

  if (work.d[166] > 0)
    work.d[166] = -settings.kkt_reg;
  else
    work.d[166] -= settings.kkt_reg;

  work.d_inv[166] = 1/work.d[166];

  work.L[79] = (-work.L[78]*work.v[165])*work.d_inv[166];
  work.v[15] = work.L[77]*work.d[15];
  work.v[165] = work.L[78]*work.d[165];
  work.v[166] = work.L[79]*work.d[166];
  work.v[167] = work.KKT[318]-work.L[77]*work.v[15]-work.L[78]*work.v[165]-work.L[79]*work.v[166];
  work.d[167] = work.v[167];

  if (work.d[167] > 0)
    work.d[167] = -settings.kkt_reg;
  else
    work.d[167] -= settings.kkt_reg;

  work.d_inv[167] = 1/work.d[167];

  work.L[380] = (work.KKT[319])*work.d_inv[167];
  work.v[168] = 0;
  work.d[168] = work.v[168];

  if (work.d[168] < 0)
    work.d[168] = settings.kkt_reg;
  else
    work.d[168] += settings.kkt_reg;
  work.d_inv[168] = 1/work.d[168];

  work.L[81] = (work.KKT[320])*work.d_inv[168];
  work.L[83] = (work.KKT[321])*work.d_inv[168];
  work.v[46] = work.L[80]*work.d[46];
  work.v[168] = work.L[81]*work.d[168];
  work.v[169] = work.KKT[322]-work.L[80]*work.v[46]-work.L[81]*work.v[168];
  work.d[169] = work.v[169];

  if (work.d[169] > 0)
    work.d[169] = -settings.kkt_reg;
  else
    work.d[169] -= settings.kkt_reg;

  work.d_inv[169] = 1/work.d[169];

  work.L[84] = (-work.L[83]*work.v[168])*work.d_inv[169];
  work.v[16] = work.L[82]*work.d[16];
  work.v[168] = work.L[83]*work.d[168];
  work.v[169] = work.L[84]*work.d[169];
  work.v[170] = work.KKT[323]-work.L[82]*work.v[16]-work.L[83]*work.v[168]-work.L[84]*work.v[169];
  work.d[170] = work.v[170];

  if (work.d[170] > 0)
    work.d[170] = -settings.kkt_reg;
  else
    work.d[170] -= settings.kkt_reg;

  work.d_inv[170] = 1/work.d[170];

  work.L[403] = (work.KKT[324])*work.d_inv[170];
  work.v[171] = 0;
  work.d[171] = work.v[171];

  if (work.d[171] < 0)
    work.d[171] = settings.kkt_reg;
  else
    work.d[171] += settings.kkt_reg;
  work.d_inv[171] = 1/work.d[171];

  work.L[86] = (work.KKT[325])*work.d_inv[171];
  work.L[88] = (work.KKT[326])*work.d_inv[171];
  work.v[47] = work.L[85]*work.d[47];
  work.v[171] = work.L[86]*work.d[171];
  work.v[172] = work.KKT[327]-work.L[85]*work.v[47]-work.L[86]*work.v[171];
  work.d[172] = work.v[172];

  if (work.d[172] > 0)
    work.d[172] = -settings.kkt_reg;
  else
    work.d[172] -= settings.kkt_reg;

  work.d_inv[172] = 1/work.d[172];

  work.L[89] = (-work.L[88]*work.v[171])*work.d_inv[172];
  work.v[17] = work.L[87]*work.d[17];
  work.v[171] = work.L[88]*work.d[171];
  work.v[172] = work.L[89]*work.d[172];
  work.v[173] = work.KKT[328]-work.L[87]*work.v[17]-work.L[88]*work.v[171]-work.L[89]*work.v[172];
  work.d[173] = work.v[173];

  if (work.d[173] > 0)
    work.d[173] = -settings.kkt_reg;
  else
    work.d[173] -= settings.kkt_reg;

  work.d_inv[173] = 1/work.d[173];

  work.L[427] = (work.KKT[329])*work.d_inv[173];
  work.v[174] = 0;
  work.d[174] = work.v[174];

  if (work.d[174] < 0)
    work.d[174] = settings.kkt_reg;
  else
    work.d[174] += settings.kkt_reg;
  work.d_inv[174] = 1/work.d[174];

  work.L[91] = (work.KKT[330])*work.d_inv[174];
  work.L[93] = (work.KKT[331])*work.d_inv[174];
  work.v[48] = work.L[90]*work.d[48];
  work.v[174] = work.L[91]*work.d[174];
  work.v[175] = work.KKT[332]-work.L[90]*work.v[48]-work.L[91]*work.v[174];
  work.d[175] = work.v[175];

  if (work.d[175] > 0)
    work.d[175] = -settings.kkt_reg;
  else
    work.d[175] -= settings.kkt_reg;

  work.d_inv[175] = 1/work.d[175];

  work.L[94] = (-work.L[93]*work.v[174])*work.d_inv[175];
  work.v[18] = work.L[92]*work.d[18];
  work.v[174] = work.L[93]*work.d[174];
  work.v[175] = work.L[94]*work.d[175];
  work.v[176] = work.KKT[333]-work.L[92]*work.v[18]-work.L[93]*work.v[174]-work.L[94]*work.v[175];
  work.d[176] = work.v[176];

  if (work.d[176] > 0)
    work.d[176] = -settings.kkt_reg;
  else
    work.d[176] -= settings.kkt_reg;

  work.d_inv[176] = 1/work.d[176];

  work.L[452] = (work.KKT[334])*work.d_inv[176];
  work.v[177] = 0;
  work.d[177] = work.v[177];

  if (work.d[177] < 0)
    work.d[177] = settings.kkt_reg;
  else
    work.d[177] += settings.kkt_reg;
  work.d_inv[177] = 1/work.d[177];

  work.L[96] = (work.KKT[335])*work.d_inv[177];
  work.L[98] = (work.KKT[336])*work.d_inv[177];
  work.v[49] = work.L[95]*work.d[49];
  work.v[177] = work.L[96]*work.d[177];
  work.v[178] = work.KKT[337]-work.L[95]*work.v[49]-work.L[96]*work.v[177];
  work.d[178] = work.v[178];

  if (work.d[178] > 0)
    work.d[178] = -settings.kkt_reg;
  else
    work.d[178] -= settings.kkt_reg;

  work.d_inv[178] = 1/work.d[178];

  work.L[99] = (-work.L[98]*work.v[177])*work.d_inv[178];
  work.v[19] = work.L[97]*work.d[19];
  work.v[177] = work.L[98]*work.d[177];
  work.v[178] = work.L[99]*work.d[178];
  work.v[179] = work.KKT[338]-work.L[97]*work.v[19]-work.L[98]*work.v[177]-work.L[99]*work.v[178];
  work.d[179] = work.v[179];

  if (work.d[179] > 0)
    work.d[179] = -settings.kkt_reg;
  else
    work.d[179] -= settings.kkt_reg;

  work.d_inv[179] = 1/work.d[179];

  work.L[478] = (work.KKT[339])*work.d_inv[179];
  work.v[180] = 0;
  work.d[180] = work.v[180];

  if (work.d[180] < 0)
    work.d[180] = settings.kkt_reg;
  else
    work.d[180] += settings.kkt_reg;
  work.d_inv[180] = 1/work.d[180];

  work.L[101] = (work.KKT[340])*work.d_inv[180];
  work.L[103] = (work.KKT[341])*work.d_inv[180];
  work.v[50] = work.L[100]*work.d[50];
  work.v[180] = work.L[101]*work.d[180];
  work.v[181] = work.KKT[342]-work.L[100]*work.v[50]-work.L[101]*work.v[180];
  work.d[181] = work.v[181];

  if (work.d[181] > 0)
    work.d[181] = -settings.kkt_reg;
  else
    work.d[181] -= settings.kkt_reg;

  work.d_inv[181] = 1/work.d[181];

  work.L[104] = (-work.L[103]*work.v[180])*work.d_inv[181];
  work.v[20] = work.L[102]*work.d[20];
  work.v[180] = work.L[103]*work.d[180];
  work.v[181] = work.L[104]*work.d[181];
  work.v[182] = work.KKT[343]-work.L[102]*work.v[20]-work.L[103]*work.v[180]-work.L[104]*work.v[181];
  work.d[182] = work.v[182];

  if (work.d[182] > 0)
    work.d[182] = -settings.kkt_reg;
  else
    work.d[182] -= settings.kkt_reg;

  work.d_inv[182] = 1/work.d[182];

  work.L[505] = (work.KKT[344])*work.d_inv[182];
  work.v[183] = 0;
  work.d[183] = work.v[183];

  if (work.d[183] < 0)
    work.d[183] = settings.kkt_reg;
  else
    work.d[183] += settings.kkt_reg;
  work.d_inv[183] = 1/work.d[183];

  work.L[106] = (work.KKT[345])*work.d_inv[183];
  work.L[108] = (work.KKT[346])*work.d_inv[183];
  work.v[51] = work.L[105]*work.d[51];
  work.v[183] = work.L[106]*work.d[183];
  work.v[184] = work.KKT[347]-work.L[105]*work.v[51]-work.L[106]*work.v[183];
  work.d[184] = work.v[184];

  if (work.d[184] > 0)
    work.d[184] = -settings.kkt_reg;
  else
    work.d[184] -= settings.kkt_reg;

  work.d_inv[184] = 1/work.d[184];

  work.L[109] = (-work.L[108]*work.v[183])*work.d_inv[184];
  work.v[21] = work.L[107]*work.d[21];
  work.v[183] = work.L[108]*work.d[183];
  work.v[184] = work.L[109]*work.d[184];
  work.v[185] = work.KKT[348]-work.L[107]*work.v[21]-work.L[108]*work.v[183]-work.L[109]*work.v[184];
  work.d[185] = work.v[185];

  if (work.d[185] > 0)
    work.d[185] = -settings.kkt_reg;
  else
    work.d[185] -= settings.kkt_reg;

  work.d_inv[185] = 1/work.d[185];

  work.L[533] = (work.KKT[349])*work.d_inv[185];
  work.v[186] = 0;
  work.d[186] = work.v[186];

  if (work.d[186] < 0)
    work.d[186] = settings.kkt_reg;
  else
    work.d[186] += settings.kkt_reg;
  work.d_inv[186] = 1/work.d[186];

  work.L[111] = (work.KKT[350])*work.d_inv[186];
  work.L[113] = (work.KKT[351])*work.d_inv[186];
  work.v[52] = work.L[110]*work.d[52];
  work.v[186] = work.L[111]*work.d[186];
  work.v[187] = work.KKT[352]-work.L[110]*work.v[52]-work.L[111]*work.v[186];
  work.d[187] = work.v[187];

  if (work.d[187] > 0)
    work.d[187] = -settings.kkt_reg;
  else
    work.d[187] -= settings.kkt_reg;

  work.d_inv[187] = 1/work.d[187];

  work.L[114] = (-work.L[113]*work.v[186])*work.d_inv[187];
  work.v[22] = work.L[112]*work.d[22];
  work.v[186] = work.L[113]*work.d[186];
  work.v[187] = work.L[114]*work.d[187];
  work.v[188] = work.KKT[353]-work.L[112]*work.v[22]-work.L[113]*work.v[186]-work.L[114]*work.v[187];
  work.d[188] = work.v[188];

  if (work.d[188] > 0)
    work.d[188] = -settings.kkt_reg;
  else
    work.d[188] -= settings.kkt_reg;

  work.d_inv[188] = 1/work.d[188];

  work.L[562] = (work.KKT[354])*work.d_inv[188];
  work.v[189] = 0;
  work.d[189] = work.v[189];

  if (work.d[189] < 0)
    work.d[189] = settings.kkt_reg;
  else
    work.d[189] += settings.kkt_reg;
  work.d_inv[189] = 1/work.d[189];

  work.L[116] = (work.KKT[355])*work.d_inv[189];
  work.L[118] = (work.KKT[356])*work.d_inv[189];
  work.v[53] = work.L[115]*work.d[53];
  work.v[189] = work.L[116]*work.d[189];
  work.v[190] = work.KKT[357]-work.L[115]*work.v[53]-work.L[116]*work.v[189];
  work.d[190] = work.v[190];

  if (work.d[190] > 0)
    work.d[190] = -settings.kkt_reg;
  else
    work.d[190] -= settings.kkt_reg;

  work.d_inv[190] = 1/work.d[190];

  work.L[119] = (-work.L[118]*work.v[189])*work.d_inv[190];
  work.v[23] = work.L[117]*work.d[23];
  work.v[189] = work.L[118]*work.d[189];
  work.v[190] = work.L[119]*work.d[190];
  work.v[191] = work.KKT[358]-work.L[117]*work.v[23]-work.L[118]*work.v[189]-work.L[119]*work.v[190];
  work.d[191] = work.v[191];

  if (work.d[191] > 0)
    work.d[191] = -settings.kkt_reg;
  else
    work.d[191] -= settings.kkt_reg;

  work.d_inv[191] = 1/work.d[191];

  work.L[592] = (work.KKT[359])*work.d_inv[191];
  work.v[192] = 0;
  work.d[192] = work.v[192];

  if (work.d[192] < 0)
    work.d[192] = settings.kkt_reg;
  else
    work.d[192] += settings.kkt_reg;
  work.d_inv[192] = 1/work.d[192];

  work.L[121] = (work.KKT[360])*work.d_inv[192];
  work.L[123] = (work.KKT[361])*work.d_inv[192];
  work.v[54] = work.L[120]*work.d[54];
  work.v[192] = work.L[121]*work.d[192];
  work.v[193] = work.KKT[362]-work.L[120]*work.v[54]-work.L[121]*work.v[192];
  work.d[193] = work.v[193];

  if (work.d[193] > 0)
    work.d[193] = -settings.kkt_reg;
  else
    work.d[193] -= settings.kkt_reg;

  work.d_inv[193] = 1/work.d[193];

  work.L[124] = (-work.L[123]*work.v[192])*work.d_inv[193];
  work.v[24] = work.L[122]*work.d[24];
  work.v[192] = work.L[123]*work.d[192];
  work.v[193] = work.L[124]*work.d[193];
  work.v[194] = work.KKT[363]-work.L[122]*work.v[24]-work.L[123]*work.v[192]-work.L[124]*work.v[193];
  work.d[194] = work.v[194];

  if (work.d[194] > 0)
    work.d[194] = -settings.kkt_reg;
  else
    work.d[194] -= settings.kkt_reg;

  work.d_inv[194] = 1/work.d[194];

  work.L[623] = (work.KKT[364])*work.d_inv[194];
  work.v[195] = 0;
  work.d[195] = work.v[195];

  if (work.d[195] < 0)
    work.d[195] = settings.kkt_reg;
  else
    work.d[195] += settings.kkt_reg;
  work.d_inv[195] = 1/work.d[195];

  work.L[126] = (work.KKT[365])*work.d_inv[195];
  work.L[128] = (work.KKT[366])*work.d_inv[195];
  work.v[55] = work.L[125]*work.d[55];
  work.v[195] = work.L[126]*work.d[195];
  work.v[196] = work.KKT[367]-work.L[125]*work.v[55]-work.L[126]*work.v[195];
  work.d[196] = work.v[196];

  if (work.d[196] > 0)
    work.d[196] = -settings.kkt_reg;
  else
    work.d[196] -= settings.kkt_reg;

  work.d_inv[196] = 1/work.d[196];

  work.L[129] = (-work.L[128]*work.v[195])*work.d_inv[196];
  work.v[25] = work.L[127]*work.d[25];
  work.v[195] = work.L[128]*work.d[195];
  work.v[196] = work.L[129]*work.d[196];
  work.v[197] = work.KKT[368]-work.L[127]*work.v[25]-work.L[128]*work.v[195]-work.L[129]*work.v[196];
  work.d[197] = work.v[197];

  if (work.d[197] > 0)
    work.d[197] = -settings.kkt_reg;
  else
    work.d[197] -= settings.kkt_reg;

  work.d_inv[197] = 1/work.d[197];

  work.L[655] = (work.KKT[369])*work.d_inv[197];
  work.v[198] = 0;
  work.d[198] = work.v[198];

  if (work.d[198] < 0)
    work.d[198] = settings.kkt_reg;
  else
    work.d[198] += settings.kkt_reg;
  work.d_inv[198] = 1/work.d[198];

  work.L[131] = (work.KKT[370])*work.d_inv[198];
  work.L[133] = (work.KKT[371])*work.d_inv[198];
  work.v[56] = work.L[130]*work.d[56];
  work.v[198] = work.L[131]*work.d[198];
  work.v[199] = work.KKT[372]-work.L[130]*work.v[56]-work.L[131]*work.v[198];
  work.d[199] = work.v[199];

  if (work.d[199] > 0)
    work.d[199] = -settings.kkt_reg;
  else
    work.d[199] -= settings.kkt_reg;

  work.d_inv[199] = 1/work.d[199];

  work.L[134] = (-work.L[133]*work.v[198])*work.d_inv[199];
  work.v[26] = work.L[132]*work.d[26];
  work.v[198] = work.L[133]*work.d[198];
  work.v[199] = work.L[134]*work.d[199];
  work.v[200] = work.KKT[373]-work.L[132]*work.v[26]-work.L[133]*work.v[198]-work.L[134]*work.v[199];
  work.d[200] = work.v[200];

  if (work.d[200] > 0)
    work.d[200] = -settings.kkt_reg;
  else
    work.d[200] -= settings.kkt_reg;

  work.d_inv[200] = 1/work.d[200];

  work.L[688] = (work.KKT[374])*work.d_inv[200];
  work.v[201] = 0;
  work.d[201] = work.v[201];

  if (work.d[201] < 0)
    work.d[201] = settings.kkt_reg;
  else
    work.d[201] += settings.kkt_reg;
  work.d_inv[201] = 1/work.d[201];

  work.L[136] = (work.KKT[375])*work.d_inv[201];
  work.L[138] = (work.KKT[376])*work.d_inv[201];
  work.v[57] = work.L[135]*work.d[57];
  work.v[201] = work.L[136]*work.d[201];
  work.v[202] = work.KKT[377]-work.L[135]*work.v[57]-work.L[136]*work.v[201];
  work.d[202] = work.v[202];

  if (work.d[202] > 0)
    work.d[202] = -settings.kkt_reg;
  else
    work.d[202] -= settings.kkt_reg;

  work.d_inv[202] = 1/work.d[202];

  work.L[139] = (-work.L[138]*work.v[201])*work.d_inv[202];
  work.v[27] = work.L[137]*work.d[27];
  work.v[201] = work.L[138]*work.d[201];
  work.v[202] = work.L[139]*work.d[202];
  work.v[203] = work.KKT[378]-work.L[137]*work.v[27]-work.L[138]*work.v[201]-work.L[139]*work.v[202];
  work.d[203] = work.v[203];

  if (work.d[203] > 0)
    work.d[203] = -settings.kkt_reg;
  else
    work.d[203] -= settings.kkt_reg;

  work.d_inv[203] = 1/work.d[203];

  work.L[722] = (work.KKT[379])*work.d_inv[203];
  work.v[204] = 0;
  work.d[204] = work.v[204];

  if (work.d[204] < 0)
    work.d[204] = settings.kkt_reg;
  else
    work.d[204] += settings.kkt_reg;
  work.d_inv[204] = 1/work.d[204];

  work.L[141] = (work.KKT[380])*work.d_inv[204];
  work.L[143] = (work.KKT[381])*work.d_inv[204];
  work.v[58] = work.L[140]*work.d[58];
  work.v[204] = work.L[141]*work.d[204];
  work.v[205] = work.KKT[382]-work.L[140]*work.v[58]-work.L[141]*work.v[204];
  work.d[205] = work.v[205];

  if (work.d[205] > 0)
    work.d[205] = -settings.kkt_reg;
  else
    work.d[205] -= settings.kkt_reg;

  work.d_inv[205] = 1/work.d[205];

  work.L[144] = (-work.L[143]*work.v[204])*work.d_inv[205];
  work.v[28] = work.L[142]*work.d[28];
  work.v[204] = work.L[143]*work.d[204];
  work.v[205] = work.L[144]*work.d[205];
  work.v[206] = work.KKT[383]-work.L[142]*work.v[28]-work.L[143]*work.v[204]-work.L[144]*work.v[205];
  work.d[206] = work.v[206];

  if (work.d[206] > 0)
    work.d[206] = -settings.kkt_reg;
  else
    work.d[206] -= settings.kkt_reg;

  work.d_inv[206] = 1/work.d[206];

  work.L[757] = (work.KKT[384])*work.d_inv[206];
  work.v[207] = 0;
  work.d[207] = work.v[207];

  if (work.d[207] < 0)
    work.d[207] = settings.kkt_reg;
  else
    work.d[207] += settings.kkt_reg;
  work.d_inv[207] = 1/work.d[207];

  work.L[146] = (work.KKT[385])*work.d_inv[207];
  work.L[148] = (work.KKT[386])*work.d_inv[207];
  work.v[59] = work.L[145]*work.d[59];
  work.v[207] = work.L[146]*work.d[207];
  work.v[208] = work.KKT[387]-work.L[145]*work.v[59]-work.L[146]*work.v[207];
  work.d[208] = work.v[208];

  if (work.d[208] > 0)
    work.d[208] = -settings.kkt_reg;
  else
    work.d[208] -= settings.kkt_reg;

  work.d_inv[208] = 1/work.d[208];

  work.L[149] = (-work.L[148]*work.v[207])*work.d_inv[208];
  work.v[29] = work.L[147]*work.d[29];
  work.v[207] = work.L[148]*work.d[207];
  work.v[208] = work.L[149]*work.d[208];
  work.v[209] = work.KKT[388]-work.L[147]*work.v[29]-work.L[148]*work.v[207]-work.L[149]*work.v[208];
  work.d[209] = work.v[209];

  if (work.d[209] > 0)
    work.d[209] = -settings.kkt_reg;
  else
    work.d[209] -= settings.kkt_reg;

  work.d_inv[209] = 1/work.d[209];

  work.L[788] = (work.KKT[389])*work.d_inv[209];
  work.v[210] = 0;
  work.d[210] = work.v[210];

  if (work.d[210] < 0)
    work.d[210] = settings.kkt_reg;
  else
    work.d[210] += settings.kkt_reg;
  work.d_inv[210] = 1/work.d[210];

  work.L[151] = (work.KKT[390])*work.d_inv[210];
  work.L[153] = (work.KKT[391])*work.d_inv[210];
  work.v[60] = work.L[150]*work.d[60];
  work.v[210] = work.L[151]*work.d[210];
  work.v[211] = work.KKT[392]-work.L[150]*work.v[60]-work.L[151]*work.v[210];
  work.d[211] = work.v[211];

  if (work.d[211] > 0)
    work.d[211] = -settings.kkt_reg;
  else
    work.d[211] -= settings.kkt_reg;

  work.d_inv[211] = 1/work.d[211];

  work.L[154] = (-work.L[153]*work.v[210])*work.d_inv[211];
  work.L[156] = (work.KKT[393])*work.d_inv[211];
  work.v[90] = work.L[152]*work.d[90];
  work.v[210] = work.L[153]*work.d[210];
  work.v[211] = work.L[154]*work.d[211];
  work.v[212] = work.KKT[394]-work.L[152]*work.v[90]-work.L[153]*work.v[210]-work.L[154]*work.v[211];
  work.d[212] = work.v[212];

  if (work.d[212] > 0)
    work.d[212] = -settings.kkt_reg;
  else
    work.d[212] -= settings.kkt_reg;

  work.d_inv[212] = 1/work.d[212];

  work.L[157] = (work.KKT[395]-work.L[156]*work.v[211])*work.d_inv[212];
  work.v[122] = work.L[155]*work.d[122];
  work.v[211] = work.L[156]*work.d[211];
  work.v[212] = work.L[157]*work.d[212];
  work.v[213] = work.KKT[396]-work.L[155]*work.v[122]-work.L[156]*work.v[211]-work.L[157]*work.v[212];
  work.d[213] = work.v[213];

  if (work.d[213] < 0)
    work.d[213] = settings.kkt_reg;
  else
    work.d[213] += settings.kkt_reg;
  work.d_inv[213] = 1/work.d[213];

  work.L[164] = (work.KKT[397])*work.d_inv[213];
  work.L[173] = (work.KKT[398])*work.d_inv[213];
  work.L[183] = (work.KKT[399])*work.d_inv[213];
  work.L[194] = (work.KKT[400])*work.d_inv[213];
  work.L[206] = (work.KKT[401])*work.d_inv[213];
  work.L[219] = (work.KKT[402])*work.d_inv[213];
  work.L[233] = (work.KKT[403])*work.d_inv[213];
  work.L[248] = (work.KKT[404])*work.d_inv[213];
  work.L[264] = (work.KKT[405])*work.d_inv[213];
  work.L[281] = (work.KKT[406])*work.d_inv[213];
  work.L[299] = (work.KKT[407])*work.d_inv[213];
  work.L[318] = (work.KKT[408])*work.d_inv[213];
  work.L[338] = (work.KKT[409])*work.d_inv[213];
  work.L[359] = (work.KKT[410])*work.d_inv[213];
  work.L[381] = (work.KKT[411])*work.d_inv[213];
  work.L[404] = (work.KKT[412])*work.d_inv[213];
  work.L[428] = (work.KKT[413])*work.d_inv[213];
  work.L[453] = (work.KKT[414])*work.d_inv[213];
  work.L[479] = (work.KKT[415])*work.d_inv[213];
  work.L[506] = (work.KKT[416])*work.d_inv[213];
  work.L[534] = (work.KKT[417])*work.d_inv[213];
  work.L[563] = (work.KKT[418])*work.d_inv[213];
  work.L[593] = (work.KKT[419])*work.d_inv[213];
  work.L[624] = (work.KKT[420])*work.d_inv[213];
  work.L[656] = (work.KKT[421])*work.d_inv[213];
  work.L[689] = (work.KKT[422])*work.d_inv[213];
  work.L[723] = (work.KKT[423])*work.d_inv[213];
  work.L[758] = (work.KKT[424])*work.d_inv[213];
  work.L[789] = (work.KKT[425])*work.d_inv[213];
  work.v[214] = 0;
  work.d[214] = work.v[214];

  if (work.d[214] < 0)
    work.d[214] = settings.kkt_reg;
  else
    work.d[214] += settings.kkt_reg;
  work.d_inv[214] = 1/work.d[214];

  work.L[159] = (work.KKT[426])*work.d_inv[214];
  work.L[161] = (work.KKT[427])*work.d_inv[214];
  work.v[61] = work.L[158]*work.d[61];
  work.v[214] = work.L[159]*work.d[214];
  work.v[215] = work.KKT[428]-work.L[158]*work.v[61]-work.L[159]*work.v[214];
  work.d[215] = work.v[215];

  if (work.d[215] > 0)
    work.d[215] = -settings.kkt_reg;
  else
    work.d[215] -= settings.kkt_reg;

  work.d_inv[215] = 1/work.d[215];

  work.L[162] = (-work.L[161]*work.v[214])*work.d_inv[215];
  work.L[165] = (work.KKT[429])*work.d_inv[215];
  work.v[91] = work.L[160]*work.d[91];
  work.v[214] = work.L[161]*work.d[214];
  work.v[215] = work.L[162]*work.d[215];
  work.v[216] = work.KKT[430]-work.L[160]*work.v[91]-work.L[161]*work.v[214]-work.L[162]*work.v[215];
  work.d[216] = work.v[216];

  if (work.d[216] > 0)
    work.d[216] = -settings.kkt_reg;
  else
    work.d[216] -= settings.kkt_reg;

  work.d_inv[216] = 1/work.d[216];

  work.L[166] = (work.KKT[431]-work.L[165]*work.v[215])*work.d_inv[216];
  work.v[125] = work.L[163]*work.d[125];
  work.v[213] = work.L[164]*work.d[213];
  work.v[215] = work.L[165]*work.d[215];
  work.v[216] = work.L[166]*work.d[216];
  work.v[217] = work.KKT[432]-work.L[163]*work.v[125]-work.L[164]*work.v[213]-work.L[165]*work.v[215]-work.L[166]*work.v[216];
  work.d[217] = work.v[217];

  if (work.d[217] < 0)
    work.d[217] = settings.kkt_reg;
  else
    work.d[217] += settings.kkt_reg;
  work.d_inv[217] = 1/work.d[217];

  work.L[174] = (work.KKT[433]-work.L[173]*work.v[213])*work.d_inv[217];
  work.L[184] = (work.KKT[434]-work.L[183]*work.v[213])*work.d_inv[217];
  work.L[195] = (work.KKT[435]-work.L[194]*work.v[213])*work.d_inv[217];
  work.L[207] = (work.KKT[436]-work.L[206]*work.v[213])*work.d_inv[217];
  work.L[220] = (work.KKT[437]-work.L[219]*work.v[213])*work.d_inv[217];
  work.L[234] = (work.KKT[438]-work.L[233]*work.v[213])*work.d_inv[217];
  work.L[249] = (work.KKT[439]-work.L[248]*work.v[213])*work.d_inv[217];
  work.L[265] = (work.KKT[440]-work.L[264]*work.v[213])*work.d_inv[217];
  work.L[282] = (work.KKT[441]-work.L[281]*work.v[213])*work.d_inv[217];
  work.L[300] = (work.KKT[442]-work.L[299]*work.v[213])*work.d_inv[217];
  work.L[319] = (work.KKT[443]-work.L[318]*work.v[213])*work.d_inv[217];
  work.L[339] = (work.KKT[444]-work.L[338]*work.v[213])*work.d_inv[217];
  work.L[360] = (work.KKT[445]-work.L[359]*work.v[213])*work.d_inv[217];
  work.L[382] = (work.KKT[446]-work.L[381]*work.v[213])*work.d_inv[217];
  work.L[405] = (work.KKT[447]-work.L[404]*work.v[213])*work.d_inv[217];
  work.L[429] = (work.KKT[448]-work.L[428]*work.v[213])*work.d_inv[217];
  work.L[454] = (work.KKT[449]-work.L[453]*work.v[213])*work.d_inv[217];
  work.L[480] = (work.KKT[450]-work.L[479]*work.v[213])*work.d_inv[217];
  work.L[507] = (work.KKT[451]-work.L[506]*work.v[213])*work.d_inv[217];
  work.L[535] = (work.KKT[452]-work.L[534]*work.v[213])*work.d_inv[217];
  work.L[564] = (work.KKT[453]-work.L[563]*work.v[213])*work.d_inv[217];
  work.L[594] = (work.KKT[454]-work.L[593]*work.v[213])*work.d_inv[217];
  work.L[625] = (work.KKT[455]-work.L[624]*work.v[213])*work.d_inv[217];
  work.L[657] = (work.KKT[456]-work.L[656]*work.v[213])*work.d_inv[217];
  work.L[690] = (work.KKT[457]-work.L[689]*work.v[213])*work.d_inv[217];
  work.L[724] = (work.KKT[458]-work.L[723]*work.v[213])*work.d_inv[217];
  work.L[759] = (work.KKT[459]-work.L[758]*work.v[213])*work.d_inv[217];
  work.L[790] = (work.KKT[460]-work.L[789]*work.v[213])*work.d_inv[217];
  work.v[218] = 0;
  work.d[218] = work.v[218];

  if (work.d[218] < 0)
    work.d[218] = settings.kkt_reg;
  else
    work.d[218] += settings.kkt_reg;
  work.d_inv[218] = 1/work.d[218];

  work.L[168] = (work.KKT[461])*work.d_inv[218];
  work.L[170] = (work.KKT[462])*work.d_inv[218];
  work.v[62] = work.L[167]*work.d[62];
  work.v[218] = work.L[168]*work.d[218];
  work.v[219] = work.KKT[463]-work.L[167]*work.v[62]-work.L[168]*work.v[218];
  work.d[219] = work.v[219];

  if (work.d[219] > 0)
    work.d[219] = -settings.kkt_reg;
  else
    work.d[219] -= settings.kkt_reg;

  work.d_inv[219] = 1/work.d[219];

  work.L[171] = (-work.L[170]*work.v[218])*work.d_inv[219];
  work.L[175] = (work.KKT[464])*work.d_inv[219];
  work.v[92] = work.L[169]*work.d[92];
  work.v[218] = work.L[170]*work.d[218];
  work.v[219] = work.L[171]*work.d[219];
  work.v[220] = work.KKT[465]-work.L[169]*work.v[92]-work.L[170]*work.v[218]-work.L[171]*work.v[219];
  work.d[220] = work.v[220];

  if (work.d[220] > 0)
    work.d[220] = -settings.kkt_reg;
  else
    work.d[220] -= settings.kkt_reg;

  work.d_inv[220] = 1/work.d[220];

  work.L[176] = (work.KKT[466]-work.L[175]*work.v[219])*work.d_inv[220];
  work.v[128] = work.L[172]*work.d[128];
  work.v[213] = work.L[173]*work.d[213];
  work.v[217] = work.L[174]*work.d[217];
  work.v[219] = work.L[175]*work.d[219];
  work.v[220] = work.L[176]*work.d[220];
  work.v[221] = work.KKT[467]-work.L[172]*work.v[128]-work.L[173]*work.v[213]-work.L[174]*work.v[217]-work.L[175]*work.v[219]-work.L[176]*work.v[220];
  work.d[221] = work.v[221];

  if (work.d[221] < 0)
    work.d[221] = settings.kkt_reg;
  else
    work.d[221] += settings.kkt_reg;
  work.d_inv[221] = 1/work.d[221];

  work.L[185] = (work.KKT[468]-work.L[183]*work.v[213]-work.L[184]*work.v[217])*work.d_inv[221];
  work.L[196] = (work.KKT[469]-work.L[194]*work.v[213]-work.L[195]*work.v[217])*work.d_inv[221];
  work.L[208] = (work.KKT[470]-work.L[206]*work.v[213]-work.L[207]*work.v[217])*work.d_inv[221];
  work.L[221] = (work.KKT[471]-work.L[219]*work.v[213]-work.L[220]*work.v[217])*work.d_inv[221];
  work.L[235] = (work.KKT[472]-work.L[233]*work.v[213]-work.L[234]*work.v[217])*work.d_inv[221];
  work.L[250] = (work.KKT[473]-work.L[248]*work.v[213]-work.L[249]*work.v[217])*work.d_inv[221];
  work.L[266] = (work.KKT[474]-work.L[264]*work.v[213]-work.L[265]*work.v[217])*work.d_inv[221];
  work.L[283] = (work.KKT[475]-work.L[281]*work.v[213]-work.L[282]*work.v[217])*work.d_inv[221];
  work.L[301] = (work.KKT[476]-work.L[299]*work.v[213]-work.L[300]*work.v[217])*work.d_inv[221];
  work.L[320] = (work.KKT[477]-work.L[318]*work.v[213]-work.L[319]*work.v[217])*work.d_inv[221];
  work.L[340] = (work.KKT[478]-work.L[338]*work.v[213]-work.L[339]*work.v[217])*work.d_inv[221];
  work.L[361] = (work.KKT[479]-work.L[359]*work.v[213]-work.L[360]*work.v[217])*work.d_inv[221];
  work.L[383] = (work.KKT[480]-work.L[381]*work.v[213]-work.L[382]*work.v[217])*work.d_inv[221];
  work.L[406] = (work.KKT[481]-work.L[404]*work.v[213]-work.L[405]*work.v[217])*work.d_inv[221];
  work.L[430] = (work.KKT[482]-work.L[428]*work.v[213]-work.L[429]*work.v[217])*work.d_inv[221];
  work.L[455] = (work.KKT[483]-work.L[453]*work.v[213]-work.L[454]*work.v[217])*work.d_inv[221];
  work.L[481] = (work.KKT[484]-work.L[479]*work.v[213]-work.L[480]*work.v[217])*work.d_inv[221];
  work.L[508] = (work.KKT[485]-work.L[506]*work.v[213]-work.L[507]*work.v[217])*work.d_inv[221];
  work.L[536] = (work.KKT[486]-work.L[534]*work.v[213]-work.L[535]*work.v[217])*work.d_inv[221];
  work.L[565] = (work.KKT[487]-work.L[563]*work.v[213]-work.L[564]*work.v[217])*work.d_inv[221];
  work.L[595] = (work.KKT[488]-work.L[593]*work.v[213]-work.L[594]*work.v[217])*work.d_inv[221];
  work.L[626] = (work.KKT[489]-work.L[624]*work.v[213]-work.L[625]*work.v[217])*work.d_inv[221];
  work.L[658] = (work.KKT[490]-work.L[656]*work.v[213]-work.L[657]*work.v[217])*work.d_inv[221];
  work.L[691] = (work.KKT[491]-work.L[689]*work.v[213]-work.L[690]*work.v[217])*work.d_inv[221];
  work.L[725] = (work.KKT[492]-work.L[723]*work.v[213]-work.L[724]*work.v[217])*work.d_inv[221];
  work.L[760] = (work.KKT[493]-work.L[758]*work.v[213]-work.L[759]*work.v[217])*work.d_inv[221];
  work.L[791] = (work.KKT[494]-work.L[789]*work.v[213]-work.L[790]*work.v[217])*work.d_inv[221];
  work.v[222] = 0;
  work.d[222] = work.v[222];

  if (work.d[222] < 0)
    work.d[222] = settings.kkt_reg;
  else
    work.d[222] += settings.kkt_reg;
  work.d_inv[222] = 1/work.d[222];

  work.L[178] = (work.KKT[495])*work.d_inv[222];
  work.L[180] = (work.KKT[496])*work.d_inv[222];
  work.v[63] = work.L[177]*work.d[63];
  work.v[222] = work.L[178]*work.d[222];
  work.v[223] = work.KKT[497]-work.L[177]*work.v[63]-work.L[178]*work.v[222];
  work.d[223] = work.v[223];

  if (work.d[223] > 0)
    work.d[223] = -settings.kkt_reg;
  else
    work.d[223] -= settings.kkt_reg;

  work.d_inv[223] = 1/work.d[223];

  work.L[181] = (-work.L[180]*work.v[222])*work.d_inv[223];
  work.L[186] = (work.KKT[498])*work.d_inv[223];
  work.v[93] = work.L[179]*work.d[93];
  work.v[222] = work.L[180]*work.d[222];
  work.v[223] = work.L[181]*work.d[223];
  work.v[224] = work.KKT[499]-work.L[179]*work.v[93]-work.L[180]*work.v[222]-work.L[181]*work.v[223];
  work.d[224] = work.v[224];

  if (work.d[224] > 0)
    work.d[224] = -settings.kkt_reg;
  else
    work.d[224] -= settings.kkt_reg;

  work.d_inv[224] = 1/work.d[224];

  work.L[187] = (work.KKT[500]-work.L[186]*work.v[223])*work.d_inv[224];
  work.v[131] = work.L[182]*work.d[131];
  work.v[213] = work.L[183]*work.d[213];
  work.v[217] = work.L[184]*work.d[217];
  work.v[221] = work.L[185]*work.d[221];
  work.v[223] = work.L[186]*work.d[223];
  work.v[224] = work.L[187]*work.d[224];
  work.v[225] = work.KKT[501]-work.L[182]*work.v[131]-work.L[183]*work.v[213]-work.L[184]*work.v[217]-work.L[185]*work.v[221]-work.L[186]*work.v[223]-work.L[187]*work.v[224];
  work.d[225] = work.v[225];

  if (work.d[225] < 0)
    work.d[225] = settings.kkt_reg;
  else
    work.d[225] += settings.kkt_reg;
  work.d_inv[225] = 1/work.d[225];

  work.L[197] = (work.KKT[502]-work.L[194]*work.v[213]-work.L[195]*work.v[217]-work.L[196]*work.v[221])*work.d_inv[225];
  work.L[209] = (work.KKT[503]-work.L[206]*work.v[213]-work.L[207]*work.v[217]-work.L[208]*work.v[221])*work.d_inv[225];
  work.L[222] = (work.KKT[504]-work.L[219]*work.v[213]-work.L[220]*work.v[217]-work.L[221]*work.v[221])*work.d_inv[225];
  work.L[236] = (work.KKT[505]-work.L[233]*work.v[213]-work.L[234]*work.v[217]-work.L[235]*work.v[221])*work.d_inv[225];
  work.L[251] = (work.KKT[506]-work.L[248]*work.v[213]-work.L[249]*work.v[217]-work.L[250]*work.v[221])*work.d_inv[225];
  work.L[267] = (work.KKT[507]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221])*work.d_inv[225];
  work.L[284] = (work.KKT[508]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221])*work.d_inv[225];
  work.L[302] = (work.KKT[509]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221])*work.d_inv[225];
  work.L[321] = (work.KKT[510]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221])*work.d_inv[225];
  work.L[341] = (work.KKT[511]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221])*work.d_inv[225];
  work.L[362] = (work.KKT[512]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221])*work.d_inv[225];
  work.L[384] = (work.KKT[513]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221])*work.d_inv[225];
  work.L[407] = (work.KKT[514]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221])*work.d_inv[225];
  work.L[431] = (work.KKT[515]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221])*work.d_inv[225];
  work.L[456] = (work.KKT[516]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221])*work.d_inv[225];
  work.L[482] = (work.KKT[517]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221])*work.d_inv[225];
  work.L[509] = (work.KKT[518]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221])*work.d_inv[225];
  work.L[537] = (work.KKT[519]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221])*work.d_inv[225];
  work.L[566] = (work.KKT[520]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221])*work.d_inv[225];
  work.L[596] = (work.KKT[521]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221])*work.d_inv[225];
  work.L[627] = (work.KKT[522]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221])*work.d_inv[225];
  work.L[659] = (work.KKT[523]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221])*work.d_inv[225];
  work.L[692] = (work.KKT[524]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221])*work.d_inv[225];
  work.L[726] = (work.KKT[525]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221])*work.d_inv[225];
  work.L[761] = (work.KKT[526]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221])*work.d_inv[225];
  work.L[792] = (work.KKT[527]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221])*work.d_inv[225];
  work.v[226] = 0;
  work.d[226] = work.v[226];

  if (work.d[226] < 0)
    work.d[226] = settings.kkt_reg;
  else
    work.d[226] += settings.kkt_reg;
  work.d_inv[226] = 1/work.d[226];

  work.L[189] = (work.KKT[528])*work.d_inv[226];
  work.L[191] = (work.KKT[529])*work.d_inv[226];
  work.v[64] = work.L[188]*work.d[64];
  work.v[226] = work.L[189]*work.d[226];
  work.v[227] = work.KKT[530]-work.L[188]*work.v[64]-work.L[189]*work.v[226];
  work.d[227] = work.v[227];

  if (work.d[227] > 0)
    work.d[227] = -settings.kkt_reg;
  else
    work.d[227] -= settings.kkt_reg;

  work.d_inv[227] = 1/work.d[227];

  work.L[192] = (-work.L[191]*work.v[226])*work.d_inv[227];
  work.L[198] = (work.KKT[531])*work.d_inv[227];
  work.v[94] = work.L[190]*work.d[94];
  work.v[226] = work.L[191]*work.d[226];
  work.v[227] = work.L[192]*work.d[227];
  work.v[228] = work.KKT[532]-work.L[190]*work.v[94]-work.L[191]*work.v[226]-work.L[192]*work.v[227];
  work.d[228] = work.v[228];

  if (work.d[228] > 0)
    work.d[228] = -settings.kkt_reg;
  else
    work.d[228] -= settings.kkt_reg;

  work.d_inv[228] = 1/work.d[228];

  work.L[199] = (work.KKT[533]-work.L[198]*work.v[227])*work.d_inv[228];
  work.v[134] = work.L[193]*work.d[134];
  work.v[213] = work.L[194]*work.d[213];
  work.v[217] = work.L[195]*work.d[217];
  work.v[221] = work.L[196]*work.d[221];
  work.v[225] = work.L[197]*work.d[225];
  work.v[227] = work.L[198]*work.d[227];
  work.v[228] = work.L[199]*work.d[228];
  work.v[229] = work.KKT[534]-work.L[193]*work.v[134]-work.L[194]*work.v[213]-work.L[195]*work.v[217]-work.L[196]*work.v[221]-work.L[197]*work.v[225]-work.L[198]*work.v[227]-work.L[199]*work.v[228];
  work.d[229] = work.v[229];

  if (work.d[229] < 0)
    work.d[229] = settings.kkt_reg;
  else
    work.d[229] += settings.kkt_reg;
  work.d_inv[229] = 1/work.d[229];

  work.L[210] = (work.KKT[535]-work.L[206]*work.v[213]-work.L[207]*work.v[217]-work.L[208]*work.v[221]-work.L[209]*work.v[225])*work.d_inv[229];
  work.L[223] = (work.KKT[536]-work.L[219]*work.v[213]-work.L[220]*work.v[217]-work.L[221]*work.v[221]-work.L[222]*work.v[225])*work.d_inv[229];
  work.L[237] = (work.KKT[537]-work.L[233]*work.v[213]-work.L[234]*work.v[217]-work.L[235]*work.v[221]-work.L[236]*work.v[225])*work.d_inv[229];
  work.L[252] = (work.KKT[538]-work.L[248]*work.v[213]-work.L[249]*work.v[217]-work.L[250]*work.v[221]-work.L[251]*work.v[225])*work.d_inv[229];
  work.L[268] = (work.KKT[539]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221]-work.L[267]*work.v[225])*work.d_inv[229];
  work.L[285] = (work.KKT[540]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225])*work.d_inv[229];
  work.L[303] = (work.KKT[541]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225])*work.d_inv[229];
  work.L[322] = (work.KKT[542]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225])*work.d_inv[229];
  work.L[342] = (work.KKT[543]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225])*work.d_inv[229];
  work.L[363] = (work.KKT[544]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225])*work.d_inv[229];
  work.L[385] = (work.KKT[545]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225])*work.d_inv[229];
  work.L[408] = (work.KKT[546]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225])*work.d_inv[229];
  work.L[432] = (work.KKT[547]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225])*work.d_inv[229];
  work.L[457] = (work.KKT[548]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225])*work.d_inv[229];
  work.L[483] = (work.KKT[549]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225])*work.d_inv[229];
  work.L[510] = (work.KKT[550]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225])*work.d_inv[229];
  work.L[538] = (work.KKT[551]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225])*work.d_inv[229];
  work.L[567] = (work.KKT[552]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225])*work.d_inv[229];
  work.L[597] = (work.KKT[553]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225])*work.d_inv[229];
  work.L[628] = (work.KKT[554]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225])*work.d_inv[229];
  work.L[660] = (work.KKT[555]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225])*work.d_inv[229];
  work.L[693] = (work.KKT[556]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225])*work.d_inv[229];
  work.L[727] = (work.KKT[557]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225])*work.d_inv[229];
  work.L[762] = (work.KKT[558]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225])*work.d_inv[229];
  work.L[793] = (work.KKT[559]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225])*work.d_inv[229];
  work.v[230] = 0;
  work.d[230] = work.v[230];

  if (work.d[230] < 0)
    work.d[230] = settings.kkt_reg;
  else
    work.d[230] += settings.kkt_reg;
  work.d_inv[230] = 1/work.d[230];

  work.L[201] = (work.KKT[560])*work.d_inv[230];
  work.L[203] = (work.KKT[561])*work.d_inv[230];
  work.v[65] = work.L[200]*work.d[65];
  work.v[230] = work.L[201]*work.d[230];
  work.v[231] = work.KKT[562]-work.L[200]*work.v[65]-work.L[201]*work.v[230];
  work.d[231] = work.v[231];

  if (work.d[231] > 0)
    work.d[231] = -settings.kkt_reg;
  else
    work.d[231] -= settings.kkt_reg;

  work.d_inv[231] = 1/work.d[231];

  work.L[204] = (-work.L[203]*work.v[230])*work.d_inv[231];
  work.L[211] = (work.KKT[563])*work.d_inv[231];
  work.v[95] = work.L[202]*work.d[95];
  work.v[230] = work.L[203]*work.d[230];
  work.v[231] = work.L[204]*work.d[231];
  work.v[232] = work.KKT[564]-work.L[202]*work.v[95]-work.L[203]*work.v[230]-work.L[204]*work.v[231];
  work.d[232] = work.v[232];

  if (work.d[232] > 0)
    work.d[232] = -settings.kkt_reg;
  else
    work.d[232] -= settings.kkt_reg;

  work.d_inv[232] = 1/work.d[232];

  work.L[212] = (work.KKT[565]-work.L[211]*work.v[231])*work.d_inv[232];
  work.v[137] = work.L[205]*work.d[137];
  work.v[213] = work.L[206]*work.d[213];
  work.v[217] = work.L[207]*work.d[217];
  work.v[221] = work.L[208]*work.d[221];
  work.v[225] = work.L[209]*work.d[225];
  work.v[229] = work.L[210]*work.d[229];
  work.v[231] = work.L[211]*work.d[231];
  work.v[232] = work.L[212]*work.d[232];
  work.v[233] = work.KKT[566]-work.L[205]*work.v[137]-work.L[206]*work.v[213]-work.L[207]*work.v[217]-work.L[208]*work.v[221]-work.L[209]*work.v[225]-work.L[210]*work.v[229]-work.L[211]*work.v[231]-work.L[212]*work.v[232];
  work.d[233] = work.v[233];

  if (work.d[233] < 0)
    work.d[233] = settings.kkt_reg;
  else
    work.d[233] += settings.kkt_reg;
  work.d_inv[233] = 1/work.d[233];

  work.L[224] = (work.KKT[567]-work.L[219]*work.v[213]-work.L[220]*work.v[217]-work.L[221]*work.v[221]-work.L[222]*work.v[225]-work.L[223]*work.v[229])*work.d_inv[233];
  work.L[238] = (work.KKT[568]-work.L[233]*work.v[213]-work.L[234]*work.v[217]-work.L[235]*work.v[221]-work.L[236]*work.v[225]-work.L[237]*work.v[229])*work.d_inv[233];
  work.L[253] = (work.KKT[569]-work.L[248]*work.v[213]-work.L[249]*work.v[217]-work.L[250]*work.v[221]-work.L[251]*work.v[225]-work.L[252]*work.v[229])*work.d_inv[233];
  work.L[269] = (work.KKT[570]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221]-work.L[267]*work.v[225]-work.L[268]*work.v[229])*work.d_inv[233];
  work.L[286] = (work.KKT[571]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225]-work.L[285]*work.v[229])*work.d_inv[233];
  work.L[304] = (work.KKT[572]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229])*work.d_inv[233];
  work.L[323] = (work.KKT[573]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229])*work.d_inv[233];
  work.L[343] = (work.KKT[574]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229])*work.d_inv[233];
  work.L[364] = (work.KKT[575]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229])*work.d_inv[233];
  work.L[386] = (work.KKT[576]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229])*work.d_inv[233];
  work.L[409] = (work.KKT[577]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229])*work.d_inv[233];
  work.L[433] = (work.KKT[578]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229])*work.d_inv[233];
  work.L[458] = (work.KKT[579]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229])*work.d_inv[233];
  work.L[484] = (work.KKT[580]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229])*work.d_inv[233];
  work.L[511] = (work.KKT[581]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229])*work.d_inv[233];
  work.L[539] = (work.KKT[582]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229])*work.d_inv[233];
  work.L[568] = (work.KKT[583]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229])*work.d_inv[233];
  work.L[598] = (work.KKT[584]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229])*work.d_inv[233];
  work.L[629] = (work.KKT[585]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229])*work.d_inv[233];
  work.L[661] = (work.KKT[586]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229])*work.d_inv[233];
  work.L[694] = (work.KKT[587]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229])*work.d_inv[233];
  work.L[728] = (work.KKT[588]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229])*work.d_inv[233];
  work.L[763] = (work.KKT[589]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229])*work.d_inv[233];
  work.L[794] = (work.KKT[590]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229])*work.d_inv[233];
  work.v[234] = 0;
  work.d[234] = work.v[234];

  if (work.d[234] < 0)
    work.d[234] = settings.kkt_reg;
  else
    work.d[234] += settings.kkt_reg;
  work.d_inv[234] = 1/work.d[234];

  work.L[214] = (work.KKT[591])*work.d_inv[234];
  work.L[216] = (work.KKT[592])*work.d_inv[234];
  work.v[66] = work.L[213]*work.d[66];
  work.v[234] = work.L[214]*work.d[234];
  work.v[235] = work.KKT[593]-work.L[213]*work.v[66]-work.L[214]*work.v[234];
  work.d[235] = work.v[235];

  if (work.d[235] > 0)
    work.d[235] = -settings.kkt_reg;
  else
    work.d[235] -= settings.kkt_reg;

  work.d_inv[235] = 1/work.d[235];

  work.L[217] = (-work.L[216]*work.v[234])*work.d_inv[235];
  work.L[225] = (work.KKT[594])*work.d_inv[235];
  work.v[96] = work.L[215]*work.d[96];
  work.v[234] = work.L[216]*work.d[234];
  work.v[235] = work.L[217]*work.d[235];
  work.v[236] = work.KKT[595]-work.L[215]*work.v[96]-work.L[216]*work.v[234]-work.L[217]*work.v[235];
  work.d[236] = work.v[236];

  if (work.d[236] > 0)
    work.d[236] = -settings.kkt_reg;
  else
    work.d[236] -= settings.kkt_reg;

  work.d_inv[236] = 1/work.d[236];

  work.L[226] = (work.KKT[596]-work.L[225]*work.v[235])*work.d_inv[236];
  work.v[140] = work.L[218]*work.d[140];
  work.v[213] = work.L[219]*work.d[213];
  work.v[217] = work.L[220]*work.d[217];
  work.v[221] = work.L[221]*work.d[221];
  work.v[225] = work.L[222]*work.d[225];
  work.v[229] = work.L[223]*work.d[229];
  work.v[233] = work.L[224]*work.d[233];
  work.v[235] = work.L[225]*work.d[235];
  work.v[236] = work.L[226]*work.d[236];
  work.v[237] = work.KKT[597]-work.L[218]*work.v[140]-work.L[219]*work.v[213]-work.L[220]*work.v[217]-work.L[221]*work.v[221]-work.L[222]*work.v[225]-work.L[223]*work.v[229]-work.L[224]*work.v[233]-work.L[225]*work.v[235]-work.L[226]*work.v[236];
  work.d[237] = work.v[237];

  if (work.d[237] < 0)
    work.d[237] = settings.kkt_reg;
  else
    work.d[237] += settings.kkt_reg;
  work.d_inv[237] = 1/work.d[237];

  work.L[239] = (work.KKT[598]-work.L[233]*work.v[213]-work.L[234]*work.v[217]-work.L[235]*work.v[221]-work.L[236]*work.v[225]-work.L[237]*work.v[229]-work.L[238]*work.v[233])*work.d_inv[237];
  work.L[254] = (work.KKT[599]-work.L[248]*work.v[213]-work.L[249]*work.v[217]-work.L[250]*work.v[221]-work.L[251]*work.v[225]-work.L[252]*work.v[229]-work.L[253]*work.v[233])*work.d_inv[237];
  work.L[270] = (work.KKT[600]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221]-work.L[267]*work.v[225]-work.L[268]*work.v[229]-work.L[269]*work.v[233])*work.d_inv[237];
  work.L[287] = (work.KKT[601]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225]-work.L[285]*work.v[229]-work.L[286]*work.v[233])*work.d_inv[237];
  work.L[305] = (work.KKT[602]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229]-work.L[304]*work.v[233])*work.d_inv[237];
  work.L[324] = (work.KKT[603]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233])*work.d_inv[237];
  work.L[344] = (work.KKT[604]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233])*work.d_inv[237];
  work.L[365] = (work.KKT[605]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233])*work.d_inv[237];
  work.L[387] = (work.KKT[606]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233])*work.d_inv[237];
  work.L[410] = (work.KKT[607]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233])*work.d_inv[237];
  work.L[434] = (work.KKT[608]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233])*work.d_inv[237];
  work.L[459] = (work.KKT[609]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233])*work.d_inv[237];
  work.L[485] = (work.KKT[610]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233])*work.d_inv[237];
  work.L[512] = (work.KKT[611]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233])*work.d_inv[237];
  work.L[540] = (work.KKT[612]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233])*work.d_inv[237];
  work.L[569] = (work.KKT[613]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233])*work.d_inv[237];
  work.L[599] = (work.KKT[614]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233])*work.d_inv[237];
  work.L[630] = (work.KKT[615]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233])*work.d_inv[237];
  work.L[662] = (work.KKT[616]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233])*work.d_inv[237];
  work.L[695] = (work.KKT[617]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233])*work.d_inv[237];
  work.L[729] = (work.KKT[618]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233])*work.d_inv[237];
  work.L[764] = (work.KKT[619]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233])*work.d_inv[237];
  work.L[795] = (work.KKT[620]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233])*work.d_inv[237];
  work.v[238] = 0;
  work.d[238] = work.v[238];

  if (work.d[238] < 0)
    work.d[238] = settings.kkt_reg;
  else
    work.d[238] += settings.kkt_reg;
  work.d_inv[238] = 1/work.d[238];

  work.L[228] = (work.KKT[621])*work.d_inv[238];
  work.L[230] = (work.KKT[622])*work.d_inv[238];
  work.v[67] = work.L[227]*work.d[67];
  work.v[238] = work.L[228]*work.d[238];
  work.v[239] = work.KKT[623]-work.L[227]*work.v[67]-work.L[228]*work.v[238];
  work.d[239] = work.v[239];

  if (work.d[239] > 0)
    work.d[239] = -settings.kkt_reg;
  else
    work.d[239] -= settings.kkt_reg;

  work.d_inv[239] = 1/work.d[239];

  work.L[231] = (-work.L[230]*work.v[238])*work.d_inv[239];
  work.L[240] = (work.KKT[624])*work.d_inv[239];
  work.v[97] = work.L[229]*work.d[97];
  work.v[238] = work.L[230]*work.d[238];
  work.v[239] = work.L[231]*work.d[239];
  work.v[240] = work.KKT[625]-work.L[229]*work.v[97]-work.L[230]*work.v[238]-work.L[231]*work.v[239];
  work.d[240] = work.v[240];

  if (work.d[240] > 0)
    work.d[240] = -settings.kkt_reg;
  else
    work.d[240] -= settings.kkt_reg;

  work.d_inv[240] = 1/work.d[240];

  work.L[241] = (work.KKT[626]-work.L[240]*work.v[239])*work.d_inv[240];
  work.v[143] = work.L[232]*work.d[143];
  work.v[213] = work.L[233]*work.d[213];
  work.v[217] = work.L[234]*work.d[217];
  work.v[221] = work.L[235]*work.d[221];
  work.v[225] = work.L[236]*work.d[225];
  work.v[229] = work.L[237]*work.d[229];
  work.v[233] = work.L[238]*work.d[233];
  work.v[237] = work.L[239]*work.d[237];
  work.v[239] = work.L[240]*work.d[239];
  work.v[240] = work.L[241]*work.d[240];
  work.v[241] = work.KKT[627]-work.L[232]*work.v[143]-work.L[233]*work.v[213]-work.L[234]*work.v[217]-work.L[235]*work.v[221]-work.L[236]*work.v[225]-work.L[237]*work.v[229]-work.L[238]*work.v[233]-work.L[239]*work.v[237]-work.L[240]*work.v[239]-work.L[241]*work.v[240];
  work.d[241] = work.v[241];

  if (work.d[241] < 0)
    work.d[241] = settings.kkt_reg;
  else
    work.d[241] += settings.kkt_reg;
  work.d_inv[241] = 1/work.d[241];

  work.L[255] = (work.KKT[628]-work.L[248]*work.v[213]-work.L[249]*work.v[217]-work.L[250]*work.v[221]-work.L[251]*work.v[225]-work.L[252]*work.v[229]-work.L[253]*work.v[233]-work.L[254]*work.v[237])*work.d_inv[241];
  work.L[271] = (work.KKT[629]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221]-work.L[267]*work.v[225]-work.L[268]*work.v[229]-work.L[269]*work.v[233]-work.L[270]*work.v[237])*work.d_inv[241];
  work.L[288] = (work.KKT[630]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225]-work.L[285]*work.v[229]-work.L[286]*work.v[233]-work.L[287]*work.v[237])*work.d_inv[241];
  work.L[306] = (work.KKT[631]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229]-work.L[304]*work.v[233]-work.L[305]*work.v[237])*work.d_inv[241];
  work.L[325] = (work.KKT[632]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233]-work.L[324]*work.v[237])*work.d_inv[241];
  work.L[345] = (work.KKT[633]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237])*work.d_inv[241];
  work.L[366] = (work.KKT[634]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237])*work.d_inv[241];
  work.L[388] = (work.KKT[635]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237])*work.d_inv[241];
  work.L[411] = (work.KKT[636]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237])*work.d_inv[241];
  work.L[435] = (work.KKT[637]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237])*work.d_inv[241];
  work.L[460] = (work.KKT[638]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237])*work.d_inv[241];
  work.L[486] = (work.KKT[639]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237])*work.d_inv[241];
  work.L[513] = (work.KKT[640]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237])*work.d_inv[241];
  work.L[541] = (work.KKT[641]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237])*work.d_inv[241];
  work.L[570] = (work.KKT[642]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237])*work.d_inv[241];
  work.L[600] = (work.KKT[643]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237])*work.d_inv[241];
  work.L[631] = (work.KKT[644]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237])*work.d_inv[241];
  work.L[663] = (work.KKT[645]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237])*work.d_inv[241];
  work.L[696] = (work.KKT[646]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237])*work.d_inv[241];
  work.L[730] = (work.KKT[647]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237])*work.d_inv[241];
  work.L[765] = (work.KKT[648]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237])*work.d_inv[241];
  work.L[796] = (work.KKT[649]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237])*work.d_inv[241];
  work.v[242] = 0;
  work.d[242] = work.v[242];

  if (work.d[242] < 0)
    work.d[242] = settings.kkt_reg;
  else
    work.d[242] += settings.kkt_reg;
  work.d_inv[242] = 1/work.d[242];

  work.L[243] = (work.KKT[650])*work.d_inv[242];
  work.L[245] = (work.KKT[651])*work.d_inv[242];
  work.v[68] = work.L[242]*work.d[68];
  work.v[242] = work.L[243]*work.d[242];
  work.v[243] = work.KKT[652]-work.L[242]*work.v[68]-work.L[243]*work.v[242];
  work.d[243] = work.v[243];

  if (work.d[243] > 0)
    work.d[243] = -settings.kkt_reg;
  else
    work.d[243] -= settings.kkt_reg;

  work.d_inv[243] = 1/work.d[243];

  work.L[246] = (-work.L[245]*work.v[242])*work.d_inv[243];
  work.L[256] = (work.KKT[653])*work.d_inv[243];
  work.v[98] = work.L[244]*work.d[98];
  work.v[242] = work.L[245]*work.d[242];
  work.v[243] = work.L[246]*work.d[243];
  work.v[244] = work.KKT[654]-work.L[244]*work.v[98]-work.L[245]*work.v[242]-work.L[246]*work.v[243];
  work.d[244] = work.v[244];

  if (work.d[244] > 0)
    work.d[244] = -settings.kkt_reg;
  else
    work.d[244] -= settings.kkt_reg;

  work.d_inv[244] = 1/work.d[244];

  work.L[257] = (work.KKT[655]-work.L[256]*work.v[243])*work.d_inv[244];
  work.v[146] = work.L[247]*work.d[146];
  work.v[213] = work.L[248]*work.d[213];
  work.v[217] = work.L[249]*work.d[217];
  work.v[221] = work.L[250]*work.d[221];
  work.v[225] = work.L[251]*work.d[225];
  work.v[229] = work.L[252]*work.d[229];
  work.v[233] = work.L[253]*work.d[233];
  work.v[237] = work.L[254]*work.d[237];
  work.v[241] = work.L[255]*work.d[241];
  work.v[243] = work.L[256]*work.d[243];
  work.v[244] = work.L[257]*work.d[244];
  work.v[245] = work.KKT[656]-work.L[247]*work.v[146]-work.L[248]*work.v[213]-work.L[249]*work.v[217]-work.L[250]*work.v[221]-work.L[251]*work.v[225]-work.L[252]*work.v[229]-work.L[253]*work.v[233]-work.L[254]*work.v[237]-work.L[255]*work.v[241]-work.L[256]*work.v[243]-work.L[257]*work.v[244];
  work.d[245] = work.v[245];

  if (work.d[245] < 0)
    work.d[245] = settings.kkt_reg;
  else
    work.d[245] += settings.kkt_reg;
  work.d_inv[245] = 1/work.d[245];

  work.L[272] = (work.KKT[657]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221]-work.L[267]*work.v[225]-work.L[268]*work.v[229]-work.L[269]*work.v[233]-work.L[270]*work.v[237]-work.L[271]*work.v[241])*work.d_inv[245];
  work.L[289] = (work.KKT[658]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225]-work.L[285]*work.v[229]-work.L[286]*work.v[233]-work.L[287]*work.v[237]-work.L[288]*work.v[241])*work.d_inv[245];
  work.L[307] = (work.KKT[659]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229]-work.L[304]*work.v[233]-work.L[305]*work.v[237]-work.L[306]*work.v[241])*work.d_inv[245];
  work.L[326] = (work.KKT[660]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233]-work.L[324]*work.v[237]-work.L[325]*work.v[241])*work.d_inv[245];
  work.L[346] = (work.KKT[661]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237]-work.L[345]*work.v[241])*work.d_inv[245];
  work.L[367] = (work.KKT[662]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241])*work.d_inv[245];
  work.L[389] = (work.KKT[663]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241])*work.d_inv[245];
  work.L[412] = (work.KKT[664]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241])*work.d_inv[245];
  work.L[436] = (work.KKT[665]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241])*work.d_inv[245];
  work.L[461] = (work.KKT[666]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241])*work.d_inv[245];
  work.L[487] = (work.KKT[667]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241])*work.d_inv[245];
  work.L[514] = (work.KKT[668]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241])*work.d_inv[245];
  work.L[542] = (work.KKT[669]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241])*work.d_inv[245];
  work.L[571] = (work.KKT[670]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241])*work.d_inv[245];
  work.L[601] = (work.KKT[671]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241])*work.d_inv[245];
  work.L[632] = (work.KKT[672]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241])*work.d_inv[245];
  work.L[664] = (work.KKT[673]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241])*work.d_inv[245];
  work.L[697] = (work.KKT[674]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241])*work.d_inv[245];
  work.L[731] = (work.KKT[675]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241])*work.d_inv[245];
  work.L[766] = (work.KKT[676]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241])*work.d_inv[245];
  work.L[797] = (work.KKT[677]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241])*work.d_inv[245];
  work.v[246] = 0;
  work.d[246] = work.v[246];

  if (work.d[246] < 0)
    work.d[246] = settings.kkt_reg;
  else
    work.d[246] += settings.kkt_reg;
  work.d_inv[246] = 1/work.d[246];

  work.L[259] = (work.KKT[678])*work.d_inv[246];
  work.L[261] = (work.KKT[679])*work.d_inv[246];
  work.v[69] = work.L[258]*work.d[69];
  work.v[246] = work.L[259]*work.d[246];
  work.v[247] = work.KKT[680]-work.L[258]*work.v[69]-work.L[259]*work.v[246];
  work.d[247] = work.v[247];

  if (work.d[247] > 0)
    work.d[247] = -settings.kkt_reg;
  else
    work.d[247] -= settings.kkt_reg;

  work.d_inv[247] = 1/work.d[247];

  work.L[262] = (-work.L[261]*work.v[246])*work.d_inv[247];
  work.L[273] = (work.KKT[681])*work.d_inv[247];
  work.v[99] = work.L[260]*work.d[99];
  work.v[246] = work.L[261]*work.d[246];
  work.v[247] = work.L[262]*work.d[247];
  work.v[248] = work.KKT[682]-work.L[260]*work.v[99]-work.L[261]*work.v[246]-work.L[262]*work.v[247];
  work.d[248] = work.v[248];

  if (work.d[248] > 0)
    work.d[248] = -settings.kkt_reg;
  else
    work.d[248] -= settings.kkt_reg;

  work.d_inv[248] = 1/work.d[248];

  work.L[274] = (work.KKT[683]-work.L[273]*work.v[247])*work.d_inv[248];
  work.v[149] = work.L[263]*work.d[149];
  work.v[213] = work.L[264]*work.d[213];
  work.v[217] = work.L[265]*work.d[217];
  work.v[221] = work.L[266]*work.d[221];
  work.v[225] = work.L[267]*work.d[225];
  work.v[229] = work.L[268]*work.d[229];
  work.v[233] = work.L[269]*work.d[233];
  work.v[237] = work.L[270]*work.d[237];
  work.v[241] = work.L[271]*work.d[241];
  work.v[245] = work.L[272]*work.d[245];
  work.v[247] = work.L[273]*work.d[247];
  work.v[248] = work.L[274]*work.d[248];
  work.v[249] = work.KKT[684]-work.L[263]*work.v[149]-work.L[264]*work.v[213]-work.L[265]*work.v[217]-work.L[266]*work.v[221]-work.L[267]*work.v[225]-work.L[268]*work.v[229]-work.L[269]*work.v[233]-work.L[270]*work.v[237]-work.L[271]*work.v[241]-work.L[272]*work.v[245]-work.L[273]*work.v[247]-work.L[274]*work.v[248];
  work.d[249] = work.v[249];

  if (work.d[249] < 0)
    work.d[249] = settings.kkt_reg;
  else
    work.d[249] += settings.kkt_reg;
  work.d_inv[249] = 1/work.d[249];

  work.L[290] = (work.KKT[685]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225]-work.L[285]*work.v[229]-work.L[286]*work.v[233]-work.L[287]*work.v[237]-work.L[288]*work.v[241]-work.L[289]*work.v[245])*work.d_inv[249];
  work.L[308] = (work.KKT[686]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229]-work.L[304]*work.v[233]-work.L[305]*work.v[237]-work.L[306]*work.v[241]-work.L[307]*work.v[245])*work.d_inv[249];
  work.L[327] = (work.KKT[687]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233]-work.L[324]*work.v[237]-work.L[325]*work.v[241]-work.L[326]*work.v[245])*work.d_inv[249];
  work.L[347] = (work.KKT[688]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237]-work.L[345]*work.v[241]-work.L[346]*work.v[245])*work.d_inv[249];
  work.L[368] = (work.KKT[689]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241]-work.L[367]*work.v[245])*work.d_inv[249];
  work.L[390] = (work.KKT[690]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245])*work.d_inv[249];
  work.L[413] = (work.KKT[691]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245])*work.d_inv[249];
  work.L[437] = (work.KKT[692]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245])*work.d_inv[249];
  work.L[462] = (work.KKT[693]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245])*work.d_inv[249];
  work.L[488] = (work.KKT[694]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245])*work.d_inv[249];
  work.L[515] = (work.KKT[695]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245])*work.d_inv[249];
  work.L[543] = (work.KKT[696]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245])*work.d_inv[249];
  work.L[572] = (work.KKT[697]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245])*work.d_inv[249];
  work.L[602] = (work.KKT[698]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245])*work.d_inv[249];
  work.L[633] = (work.KKT[699]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245])*work.d_inv[249];
  work.L[665] = (work.KKT[700]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245])*work.d_inv[249];
  work.L[698] = (work.KKT[701]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245])*work.d_inv[249];
  work.L[732] = (work.KKT[702]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245])*work.d_inv[249];
  work.L[767] = (work.KKT[703]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245])*work.d_inv[249];
  work.L[798] = (work.KKT[704]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245])*work.d_inv[249];
  work.v[250] = 0;
  work.d[250] = work.v[250];

  if (work.d[250] < 0)
    work.d[250] = settings.kkt_reg;
  else
    work.d[250] += settings.kkt_reg;
  work.d_inv[250] = 1/work.d[250];

  work.L[276] = (work.KKT[705])*work.d_inv[250];
  work.L[278] = (work.KKT[706])*work.d_inv[250];
  work.v[70] = work.L[275]*work.d[70];
  work.v[250] = work.L[276]*work.d[250];
  work.v[251] = work.KKT[707]-work.L[275]*work.v[70]-work.L[276]*work.v[250];
  work.d[251] = work.v[251];

  if (work.d[251] > 0)
    work.d[251] = -settings.kkt_reg;
  else
    work.d[251] -= settings.kkt_reg;

  work.d_inv[251] = 1/work.d[251];

  work.L[279] = (-work.L[278]*work.v[250])*work.d_inv[251];
  work.L[291] = (work.KKT[708])*work.d_inv[251];
  work.v[100] = work.L[277]*work.d[100];
  work.v[250] = work.L[278]*work.d[250];
  work.v[251] = work.L[279]*work.d[251];
  work.v[252] = work.KKT[709]-work.L[277]*work.v[100]-work.L[278]*work.v[250]-work.L[279]*work.v[251];
  work.d[252] = work.v[252];

  if (work.d[252] > 0)
    work.d[252] = -settings.kkt_reg;
  else
    work.d[252] -= settings.kkt_reg;

  work.d_inv[252] = 1/work.d[252];

  work.L[292] = (work.KKT[710]-work.L[291]*work.v[251])*work.d_inv[252];
  work.v[152] = work.L[280]*work.d[152];
  work.v[213] = work.L[281]*work.d[213];
  work.v[217] = work.L[282]*work.d[217];
  work.v[221] = work.L[283]*work.d[221];
  work.v[225] = work.L[284]*work.d[225];
  work.v[229] = work.L[285]*work.d[229];
  work.v[233] = work.L[286]*work.d[233];
  work.v[237] = work.L[287]*work.d[237];
  work.v[241] = work.L[288]*work.d[241];
  work.v[245] = work.L[289]*work.d[245];
  work.v[249] = work.L[290]*work.d[249];
  work.v[251] = work.L[291]*work.d[251];
  work.v[252] = work.L[292]*work.d[252];
  work.v[253] = work.KKT[711]-work.L[280]*work.v[152]-work.L[281]*work.v[213]-work.L[282]*work.v[217]-work.L[283]*work.v[221]-work.L[284]*work.v[225]-work.L[285]*work.v[229]-work.L[286]*work.v[233]-work.L[287]*work.v[237]-work.L[288]*work.v[241]-work.L[289]*work.v[245]-work.L[290]*work.v[249]-work.L[291]*work.v[251]-work.L[292]*work.v[252];
  work.d[253] = work.v[253];

  if (work.d[253] < 0)
    work.d[253] = settings.kkt_reg;
  else
    work.d[253] += settings.kkt_reg;
  work.d_inv[253] = 1/work.d[253];

  work.L[309] = (work.KKT[712]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229]-work.L[304]*work.v[233]-work.L[305]*work.v[237]-work.L[306]*work.v[241]-work.L[307]*work.v[245]-work.L[308]*work.v[249])*work.d_inv[253];
  work.L[328] = (work.KKT[713]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233]-work.L[324]*work.v[237]-work.L[325]*work.v[241]-work.L[326]*work.v[245]-work.L[327]*work.v[249])*work.d_inv[253];
  work.L[348] = (work.KKT[714]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237]-work.L[345]*work.v[241]-work.L[346]*work.v[245]-work.L[347]*work.v[249])*work.d_inv[253];
  work.L[369] = (work.KKT[715]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241]-work.L[367]*work.v[245]-work.L[368]*work.v[249])*work.d_inv[253];
  work.L[391] = (work.KKT[716]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245]-work.L[390]*work.v[249])*work.d_inv[253];
  work.L[414] = (work.KKT[717]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249])*work.d_inv[253];
  work.L[438] = (work.KKT[718]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249])*work.d_inv[253];
  work.L[463] = (work.KKT[719]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249])*work.d_inv[253];
  work.L[489] = (work.KKT[720]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249])*work.d_inv[253];
  work.L[516] = (work.KKT[721]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249])*work.d_inv[253];
  work.L[544] = (work.KKT[722]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249])*work.d_inv[253];
  work.L[573] = (work.KKT[723]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249])*work.d_inv[253];
  work.L[603] = (work.KKT[724]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249])*work.d_inv[253];
  work.L[634] = (work.KKT[725]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249])*work.d_inv[253];
  work.L[666] = (work.KKT[726]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249])*work.d_inv[253];
  work.L[699] = (work.KKT[727]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249])*work.d_inv[253];
  work.L[733] = (work.KKT[728]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249])*work.d_inv[253];
  work.L[768] = (work.KKT[729]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249])*work.d_inv[253];
  work.L[799] = (work.KKT[730]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249])*work.d_inv[253];
  work.v[254] = 0;
  work.d[254] = work.v[254];

  if (work.d[254] < 0)
    work.d[254] = settings.kkt_reg;
  else
    work.d[254] += settings.kkt_reg;
  work.d_inv[254] = 1/work.d[254];

  work.L[294] = (work.KKT[731])*work.d_inv[254];
  work.L[296] = (work.KKT[732])*work.d_inv[254];
  work.v[71] = work.L[293]*work.d[71];
  work.v[254] = work.L[294]*work.d[254];
  work.v[255] = work.KKT[733]-work.L[293]*work.v[71]-work.L[294]*work.v[254];
  work.d[255] = work.v[255];

  if (work.d[255] > 0)
    work.d[255] = -settings.kkt_reg;
  else
    work.d[255] -= settings.kkt_reg;

  work.d_inv[255] = 1/work.d[255];

  work.L[297] = (-work.L[296]*work.v[254])*work.d_inv[255];
  work.L[310] = (work.KKT[734])*work.d_inv[255];
  work.v[101] = work.L[295]*work.d[101];
  work.v[254] = work.L[296]*work.d[254];
  work.v[255] = work.L[297]*work.d[255];
  work.v[256] = work.KKT[735]-work.L[295]*work.v[101]-work.L[296]*work.v[254]-work.L[297]*work.v[255];
  work.d[256] = work.v[256];

  if (work.d[256] > 0)
    work.d[256] = -settings.kkt_reg;
  else
    work.d[256] -= settings.kkt_reg;

  work.d_inv[256] = 1/work.d[256];

  work.L[311] = (work.KKT[736]-work.L[310]*work.v[255])*work.d_inv[256];
  work.v[155] = work.L[298]*work.d[155];
  work.v[213] = work.L[299]*work.d[213];
  work.v[217] = work.L[300]*work.d[217];
  work.v[221] = work.L[301]*work.d[221];
  work.v[225] = work.L[302]*work.d[225];
  work.v[229] = work.L[303]*work.d[229];
  work.v[233] = work.L[304]*work.d[233];
  work.v[237] = work.L[305]*work.d[237];
  work.v[241] = work.L[306]*work.d[241];
  work.v[245] = work.L[307]*work.d[245];
  work.v[249] = work.L[308]*work.d[249];
  work.v[253] = work.L[309]*work.d[253];
  work.v[255] = work.L[310]*work.d[255];
  work.v[256] = work.L[311]*work.d[256];
  work.v[257] = work.KKT[737]-work.L[298]*work.v[155]-work.L[299]*work.v[213]-work.L[300]*work.v[217]-work.L[301]*work.v[221]-work.L[302]*work.v[225]-work.L[303]*work.v[229]-work.L[304]*work.v[233]-work.L[305]*work.v[237]-work.L[306]*work.v[241]-work.L[307]*work.v[245]-work.L[308]*work.v[249]-work.L[309]*work.v[253]-work.L[310]*work.v[255]-work.L[311]*work.v[256];
  work.d[257] = work.v[257];

  if (work.d[257] < 0)
    work.d[257] = settings.kkt_reg;
  else
    work.d[257] += settings.kkt_reg;
  work.d_inv[257] = 1/work.d[257];

  work.L[329] = (work.KKT[738]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233]-work.L[324]*work.v[237]-work.L[325]*work.v[241]-work.L[326]*work.v[245]-work.L[327]*work.v[249]-work.L[328]*work.v[253])*work.d_inv[257];
  work.L[349] = (work.KKT[739]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237]-work.L[345]*work.v[241]-work.L[346]*work.v[245]-work.L[347]*work.v[249]-work.L[348]*work.v[253])*work.d_inv[257];
  work.L[370] = (work.KKT[740]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241]-work.L[367]*work.v[245]-work.L[368]*work.v[249]-work.L[369]*work.v[253])*work.d_inv[257];
  work.L[392] = (work.KKT[741]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245]-work.L[390]*work.v[249]-work.L[391]*work.v[253])*work.d_inv[257];
  work.L[415] = (work.KKT[742]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249]-work.L[414]*work.v[253])*work.d_inv[257];
  work.L[439] = (work.KKT[743]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253])*work.d_inv[257];
  work.L[464] = (work.KKT[744]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253])*work.d_inv[257];
  work.L[490] = (work.KKT[745]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253])*work.d_inv[257];
  work.L[517] = (work.KKT[746]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253])*work.d_inv[257];
  work.L[545] = (work.KKT[747]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253])*work.d_inv[257];
  work.L[574] = (work.KKT[748]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253])*work.d_inv[257];
  work.L[604] = (work.KKT[749]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253])*work.d_inv[257];
  work.L[635] = (work.KKT[750]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253])*work.d_inv[257];
  work.L[667] = (work.KKT[751]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253])*work.d_inv[257];
  work.L[700] = (work.KKT[752]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253])*work.d_inv[257];
  work.L[734] = (work.KKT[753]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253])*work.d_inv[257];
  work.L[769] = (work.KKT[754]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253])*work.d_inv[257];
  work.L[800] = (work.KKT[755]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253])*work.d_inv[257];
  work.v[258] = 0;
  work.d[258] = work.v[258];

  if (work.d[258] < 0)
    work.d[258] = settings.kkt_reg;
  else
    work.d[258] += settings.kkt_reg;
  work.d_inv[258] = 1/work.d[258];

  work.L[313] = (work.KKT[756])*work.d_inv[258];
  work.L[315] = (work.KKT[757])*work.d_inv[258];
  work.v[72] = work.L[312]*work.d[72];
  work.v[258] = work.L[313]*work.d[258];
  work.v[259] = work.KKT[758]-work.L[312]*work.v[72]-work.L[313]*work.v[258];
  work.d[259] = work.v[259];

  if (work.d[259] > 0)
    work.d[259] = -settings.kkt_reg;
  else
    work.d[259] -= settings.kkt_reg;

  work.d_inv[259] = 1/work.d[259];

  work.L[316] = (-work.L[315]*work.v[258])*work.d_inv[259];
  work.L[330] = (work.KKT[759])*work.d_inv[259];
  work.v[102] = work.L[314]*work.d[102];
  work.v[258] = work.L[315]*work.d[258];
  work.v[259] = work.L[316]*work.d[259];
  work.v[260] = work.KKT[760]-work.L[314]*work.v[102]-work.L[315]*work.v[258]-work.L[316]*work.v[259];
  work.d[260] = work.v[260];

  if (work.d[260] > 0)
    work.d[260] = -settings.kkt_reg;
  else
    work.d[260] -= settings.kkt_reg;

  work.d_inv[260] = 1/work.d[260];

  work.L[331] = (work.KKT[761]-work.L[330]*work.v[259])*work.d_inv[260];
  work.v[158] = work.L[317]*work.d[158];
  work.v[213] = work.L[318]*work.d[213];
  work.v[217] = work.L[319]*work.d[217];
  work.v[221] = work.L[320]*work.d[221];
  work.v[225] = work.L[321]*work.d[225];
  work.v[229] = work.L[322]*work.d[229];
  work.v[233] = work.L[323]*work.d[233];
  work.v[237] = work.L[324]*work.d[237];
  work.v[241] = work.L[325]*work.d[241];
  work.v[245] = work.L[326]*work.d[245];
  work.v[249] = work.L[327]*work.d[249];
  work.v[253] = work.L[328]*work.d[253];
  work.v[257] = work.L[329]*work.d[257];
  work.v[259] = work.L[330]*work.d[259];
  work.v[260] = work.L[331]*work.d[260];
  work.v[261] = work.KKT[762]-work.L[317]*work.v[158]-work.L[318]*work.v[213]-work.L[319]*work.v[217]-work.L[320]*work.v[221]-work.L[321]*work.v[225]-work.L[322]*work.v[229]-work.L[323]*work.v[233]-work.L[324]*work.v[237]-work.L[325]*work.v[241]-work.L[326]*work.v[245]-work.L[327]*work.v[249]-work.L[328]*work.v[253]-work.L[329]*work.v[257]-work.L[330]*work.v[259]-work.L[331]*work.v[260];
  work.d[261] = work.v[261];

  if (work.d[261] < 0)
    work.d[261] = settings.kkt_reg;
  else
    work.d[261] += settings.kkt_reg;
  work.d_inv[261] = 1/work.d[261];

  work.L[350] = (work.KKT[763]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237]-work.L[345]*work.v[241]-work.L[346]*work.v[245]-work.L[347]*work.v[249]-work.L[348]*work.v[253]-work.L[349]*work.v[257])*work.d_inv[261];
  work.L[371] = (work.KKT[764]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241]-work.L[367]*work.v[245]-work.L[368]*work.v[249]-work.L[369]*work.v[253]-work.L[370]*work.v[257])*work.d_inv[261];
  work.L[393] = (work.KKT[765]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245]-work.L[390]*work.v[249]-work.L[391]*work.v[253]-work.L[392]*work.v[257])*work.d_inv[261];
  work.L[416] = (work.KKT[766]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249]-work.L[414]*work.v[253]-work.L[415]*work.v[257])*work.d_inv[261];
  work.L[440] = (work.KKT[767]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253]-work.L[439]*work.v[257])*work.d_inv[261];
  work.L[465] = (work.KKT[768]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257])*work.d_inv[261];
  work.L[491] = (work.KKT[769]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257])*work.d_inv[261];
  work.L[518] = (work.KKT[770]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257])*work.d_inv[261];
  work.L[546] = (work.KKT[771]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257])*work.d_inv[261];
  work.L[575] = (work.KKT[772]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257])*work.d_inv[261];
  work.L[605] = (work.KKT[773]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257])*work.d_inv[261];
  work.L[636] = (work.KKT[774]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257])*work.d_inv[261];
  work.L[668] = (work.KKT[775]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257])*work.d_inv[261];
  work.L[701] = (work.KKT[776]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257])*work.d_inv[261];
  work.L[735] = (work.KKT[777]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257])*work.d_inv[261];
  work.L[770] = (work.KKT[778]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257])*work.d_inv[261];
  work.L[801] = (work.KKT[779]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257])*work.d_inv[261];
  work.v[262] = 0;
  work.d[262] = work.v[262];

  if (work.d[262] < 0)
    work.d[262] = settings.kkt_reg;
  else
    work.d[262] += settings.kkt_reg;
  work.d_inv[262] = 1/work.d[262];

  work.L[333] = (work.KKT[780])*work.d_inv[262];
  work.L[335] = (work.KKT[781])*work.d_inv[262];
  work.v[73] = work.L[332]*work.d[73];
  work.v[262] = work.L[333]*work.d[262];
  work.v[263] = work.KKT[782]-work.L[332]*work.v[73]-work.L[333]*work.v[262];
  work.d[263] = work.v[263];

  if (work.d[263] > 0)
    work.d[263] = -settings.kkt_reg;
  else
    work.d[263] -= settings.kkt_reg;

  work.d_inv[263] = 1/work.d[263];

  work.L[336] = (-work.L[335]*work.v[262])*work.d_inv[263];
  work.L[351] = (work.KKT[783])*work.d_inv[263];
  work.v[103] = work.L[334]*work.d[103];
  work.v[262] = work.L[335]*work.d[262];
  work.v[263] = work.L[336]*work.d[263];
  work.v[264] = work.KKT[784]-work.L[334]*work.v[103]-work.L[335]*work.v[262]-work.L[336]*work.v[263];
  work.d[264] = work.v[264];

  if (work.d[264] > 0)
    work.d[264] = -settings.kkt_reg;
  else
    work.d[264] -= settings.kkt_reg;

  work.d_inv[264] = 1/work.d[264];

  work.L[352] = (work.KKT[785]-work.L[351]*work.v[263])*work.d_inv[264];
  work.v[161] = work.L[337]*work.d[161];
  work.v[213] = work.L[338]*work.d[213];
  work.v[217] = work.L[339]*work.d[217];
  work.v[221] = work.L[340]*work.d[221];
  work.v[225] = work.L[341]*work.d[225];
  work.v[229] = work.L[342]*work.d[229];
  work.v[233] = work.L[343]*work.d[233];
  work.v[237] = work.L[344]*work.d[237];
  work.v[241] = work.L[345]*work.d[241];
  work.v[245] = work.L[346]*work.d[245];
  work.v[249] = work.L[347]*work.d[249];
  work.v[253] = work.L[348]*work.d[253];
  work.v[257] = work.L[349]*work.d[257];
  work.v[261] = work.L[350]*work.d[261];
  work.v[263] = work.L[351]*work.d[263];
  work.v[264] = work.L[352]*work.d[264];
  work.v[265] = work.KKT[786]-work.L[337]*work.v[161]-work.L[338]*work.v[213]-work.L[339]*work.v[217]-work.L[340]*work.v[221]-work.L[341]*work.v[225]-work.L[342]*work.v[229]-work.L[343]*work.v[233]-work.L[344]*work.v[237]-work.L[345]*work.v[241]-work.L[346]*work.v[245]-work.L[347]*work.v[249]-work.L[348]*work.v[253]-work.L[349]*work.v[257]-work.L[350]*work.v[261]-work.L[351]*work.v[263]-work.L[352]*work.v[264];
  work.d[265] = work.v[265];

  if (work.d[265] < 0)
    work.d[265] = settings.kkt_reg;
  else
    work.d[265] += settings.kkt_reg;
  work.d_inv[265] = 1/work.d[265];

  work.L[372] = (work.KKT[787]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241]-work.L[367]*work.v[245]-work.L[368]*work.v[249]-work.L[369]*work.v[253]-work.L[370]*work.v[257]-work.L[371]*work.v[261])*work.d_inv[265];
  work.L[394] = (work.KKT[788]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245]-work.L[390]*work.v[249]-work.L[391]*work.v[253]-work.L[392]*work.v[257]-work.L[393]*work.v[261])*work.d_inv[265];
  work.L[417] = (work.KKT[789]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249]-work.L[414]*work.v[253]-work.L[415]*work.v[257]-work.L[416]*work.v[261])*work.d_inv[265];
  work.L[441] = (work.KKT[790]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253]-work.L[439]*work.v[257]-work.L[440]*work.v[261])*work.d_inv[265];
  work.L[466] = (work.KKT[791]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257]-work.L[465]*work.v[261])*work.d_inv[265];
  work.L[492] = (work.KKT[792]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261])*work.d_inv[265];
  work.L[519] = (work.KKT[793]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261])*work.d_inv[265];
  work.L[547] = (work.KKT[794]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261])*work.d_inv[265];
  work.L[576] = (work.KKT[795]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261])*work.d_inv[265];
  work.L[606] = (work.KKT[796]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261])*work.d_inv[265];
  work.L[637] = (work.KKT[797]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261])*work.d_inv[265];
  work.L[669] = (work.KKT[798]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261])*work.d_inv[265];
  work.L[702] = (work.KKT[799]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261])*work.d_inv[265];
  work.L[736] = (work.KKT[800]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261])*work.d_inv[265];
  work.L[771] = (work.KKT[801]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261])*work.d_inv[265];
  work.L[802] = (work.KKT[802]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261])*work.d_inv[265];
  work.v[266] = 0;
  work.d[266] = work.v[266];

  if (work.d[266] < 0)
    work.d[266] = settings.kkt_reg;
  else
    work.d[266] += settings.kkt_reg;
  work.d_inv[266] = 1/work.d[266];

  work.L[354] = (work.KKT[803])*work.d_inv[266];
  work.L[356] = (work.KKT[804])*work.d_inv[266];
  work.v[74] = work.L[353]*work.d[74];
  work.v[266] = work.L[354]*work.d[266];
  work.v[267] = work.KKT[805]-work.L[353]*work.v[74]-work.L[354]*work.v[266];
  work.d[267] = work.v[267];

  if (work.d[267] > 0)
    work.d[267] = -settings.kkt_reg;
  else
    work.d[267] -= settings.kkt_reg;

  work.d_inv[267] = 1/work.d[267];

  work.L[357] = (-work.L[356]*work.v[266])*work.d_inv[267];
  work.L[373] = (work.KKT[806])*work.d_inv[267];
  work.v[104] = work.L[355]*work.d[104];
  work.v[266] = work.L[356]*work.d[266];
  work.v[267] = work.L[357]*work.d[267];
  work.v[268] = work.KKT[807]-work.L[355]*work.v[104]-work.L[356]*work.v[266]-work.L[357]*work.v[267];
  work.d[268] = work.v[268];

  if (work.d[268] > 0)
    work.d[268] = -settings.kkt_reg;
  else
    work.d[268] -= settings.kkt_reg;

  work.d_inv[268] = 1/work.d[268];

  work.L[374] = (work.KKT[808]-work.L[373]*work.v[267])*work.d_inv[268];
  work.v[164] = work.L[358]*work.d[164];
  work.v[213] = work.L[359]*work.d[213];
  work.v[217] = work.L[360]*work.d[217];
  work.v[221] = work.L[361]*work.d[221];
  work.v[225] = work.L[362]*work.d[225];
  work.v[229] = work.L[363]*work.d[229];
  work.v[233] = work.L[364]*work.d[233];
  work.v[237] = work.L[365]*work.d[237];
  work.v[241] = work.L[366]*work.d[241];
  work.v[245] = work.L[367]*work.d[245];
  work.v[249] = work.L[368]*work.d[249];
  work.v[253] = work.L[369]*work.d[253];
  work.v[257] = work.L[370]*work.d[257];
  work.v[261] = work.L[371]*work.d[261];
  work.v[265] = work.L[372]*work.d[265];
  work.v[267] = work.L[373]*work.d[267];
  work.v[268] = work.L[374]*work.d[268];
  work.v[269] = work.KKT[809]-work.L[358]*work.v[164]-work.L[359]*work.v[213]-work.L[360]*work.v[217]-work.L[361]*work.v[221]-work.L[362]*work.v[225]-work.L[363]*work.v[229]-work.L[364]*work.v[233]-work.L[365]*work.v[237]-work.L[366]*work.v[241]-work.L[367]*work.v[245]-work.L[368]*work.v[249]-work.L[369]*work.v[253]-work.L[370]*work.v[257]-work.L[371]*work.v[261]-work.L[372]*work.v[265]-work.L[373]*work.v[267]-work.L[374]*work.v[268];
  work.d[269] = work.v[269];

  if (work.d[269] < 0)
    work.d[269] = settings.kkt_reg;
  else
    work.d[269] += settings.kkt_reg;
  work.d_inv[269] = 1/work.d[269];

  work.L[395] = (work.KKT[810]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245]-work.L[390]*work.v[249]-work.L[391]*work.v[253]-work.L[392]*work.v[257]-work.L[393]*work.v[261]-work.L[394]*work.v[265])*work.d_inv[269];
  work.L[418] = (work.KKT[811]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249]-work.L[414]*work.v[253]-work.L[415]*work.v[257]-work.L[416]*work.v[261]-work.L[417]*work.v[265])*work.d_inv[269];
  work.L[442] = (work.KKT[812]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253]-work.L[439]*work.v[257]-work.L[440]*work.v[261]-work.L[441]*work.v[265])*work.d_inv[269];
  work.L[467] = (work.KKT[813]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257]-work.L[465]*work.v[261]-work.L[466]*work.v[265])*work.d_inv[269];
  work.L[493] = (work.KKT[814]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261]-work.L[492]*work.v[265])*work.d_inv[269];
  work.L[520] = (work.KKT[815]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265])*work.d_inv[269];
  work.L[548] = (work.KKT[816]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265])*work.d_inv[269];
  work.L[577] = (work.KKT[817]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265])*work.d_inv[269];
  work.L[607] = (work.KKT[818]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265])*work.d_inv[269];
  work.L[638] = (work.KKT[819]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265])*work.d_inv[269];
  work.L[670] = (work.KKT[820]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265])*work.d_inv[269];
  work.L[703] = (work.KKT[821]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265])*work.d_inv[269];
  work.L[737] = (work.KKT[822]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265])*work.d_inv[269];
  work.L[772] = (work.KKT[823]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265])*work.d_inv[269];
  work.L[803] = (work.KKT[824]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265])*work.d_inv[269];
  work.v[270] = 0;
  work.d[270] = work.v[270];

  if (work.d[270] < 0)
    work.d[270] = settings.kkt_reg;
  else
    work.d[270] += settings.kkt_reg;
  work.d_inv[270] = 1/work.d[270];

  work.L[376] = (work.KKT[825])*work.d_inv[270];
  work.L[378] = (work.KKT[826])*work.d_inv[270];
  work.v[75] = work.L[375]*work.d[75];
  work.v[270] = work.L[376]*work.d[270];
  work.v[271] = work.KKT[827]-work.L[375]*work.v[75]-work.L[376]*work.v[270];
  work.d[271] = work.v[271];

  if (work.d[271] > 0)
    work.d[271] = -settings.kkt_reg;
  else
    work.d[271] -= settings.kkt_reg;

  work.d_inv[271] = 1/work.d[271];

  work.L[379] = (-work.L[378]*work.v[270])*work.d_inv[271];
  work.L[396] = (work.KKT[828])*work.d_inv[271];
  work.v[105] = work.L[377]*work.d[105];
  work.v[270] = work.L[378]*work.d[270];
  work.v[271] = work.L[379]*work.d[271];
  work.v[272] = work.KKT[829]-work.L[377]*work.v[105]-work.L[378]*work.v[270]-work.L[379]*work.v[271];
  work.d[272] = work.v[272];

  if (work.d[272] > 0)
    work.d[272] = -settings.kkt_reg;
  else
    work.d[272] -= settings.kkt_reg;

  work.d_inv[272] = 1/work.d[272];

  work.L[397] = (work.KKT[830]-work.L[396]*work.v[271])*work.d_inv[272];
  work.v[167] = work.L[380]*work.d[167];
  work.v[213] = work.L[381]*work.d[213];
  work.v[217] = work.L[382]*work.d[217];
  work.v[221] = work.L[383]*work.d[221];
  work.v[225] = work.L[384]*work.d[225];
  work.v[229] = work.L[385]*work.d[229];
  work.v[233] = work.L[386]*work.d[233];
  work.v[237] = work.L[387]*work.d[237];
  work.v[241] = work.L[388]*work.d[241];
  work.v[245] = work.L[389]*work.d[245];
  work.v[249] = work.L[390]*work.d[249];
  work.v[253] = work.L[391]*work.d[253];
  work.v[257] = work.L[392]*work.d[257];
  work.v[261] = work.L[393]*work.d[261];
  work.v[265] = work.L[394]*work.d[265];
  work.v[269] = work.L[395]*work.d[269];
  work.v[271] = work.L[396]*work.d[271];
  work.v[272] = work.L[397]*work.d[272];
  work.v[273] = work.KKT[831]-work.L[380]*work.v[167]-work.L[381]*work.v[213]-work.L[382]*work.v[217]-work.L[383]*work.v[221]-work.L[384]*work.v[225]-work.L[385]*work.v[229]-work.L[386]*work.v[233]-work.L[387]*work.v[237]-work.L[388]*work.v[241]-work.L[389]*work.v[245]-work.L[390]*work.v[249]-work.L[391]*work.v[253]-work.L[392]*work.v[257]-work.L[393]*work.v[261]-work.L[394]*work.v[265]-work.L[395]*work.v[269]-work.L[396]*work.v[271]-work.L[397]*work.v[272];
  work.d[273] = work.v[273];

  if (work.d[273] < 0)
    work.d[273] = settings.kkt_reg;
  else
    work.d[273] += settings.kkt_reg;
  work.d_inv[273] = 1/work.d[273];

  work.L[419] = (work.KKT[832]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249]-work.L[414]*work.v[253]-work.L[415]*work.v[257]-work.L[416]*work.v[261]-work.L[417]*work.v[265]-work.L[418]*work.v[269])*work.d_inv[273];
  work.L[443] = (work.KKT[833]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253]-work.L[439]*work.v[257]-work.L[440]*work.v[261]-work.L[441]*work.v[265]-work.L[442]*work.v[269])*work.d_inv[273];
  work.L[468] = (work.KKT[834]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257]-work.L[465]*work.v[261]-work.L[466]*work.v[265]-work.L[467]*work.v[269])*work.d_inv[273];
  work.L[494] = (work.KKT[835]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261]-work.L[492]*work.v[265]-work.L[493]*work.v[269])*work.d_inv[273];
  work.L[521] = (work.KKT[836]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265]-work.L[520]*work.v[269])*work.d_inv[273];
  work.L[549] = (work.KKT[837]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269])*work.d_inv[273];
  work.L[578] = (work.KKT[838]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269])*work.d_inv[273];
  work.L[608] = (work.KKT[839]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269])*work.d_inv[273];
  work.L[639] = (work.KKT[840]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269])*work.d_inv[273];
  work.L[671] = (work.KKT[841]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269])*work.d_inv[273];
  work.L[704] = (work.KKT[842]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269])*work.d_inv[273];
  work.L[738] = (work.KKT[843]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269])*work.d_inv[273];
  work.L[773] = (work.KKT[844]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269])*work.d_inv[273];
  work.L[804] = (work.KKT[845]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269])*work.d_inv[273];
  work.v[274] = 0;
  work.d[274] = work.v[274];

  if (work.d[274] < 0)
    work.d[274] = settings.kkt_reg;
  else
    work.d[274] += settings.kkt_reg;
  work.d_inv[274] = 1/work.d[274];

  work.L[399] = (work.KKT[846])*work.d_inv[274];
  work.L[401] = (work.KKT[847])*work.d_inv[274];
  work.v[76] = work.L[398]*work.d[76];
  work.v[274] = work.L[399]*work.d[274];
  work.v[275] = work.KKT[848]-work.L[398]*work.v[76]-work.L[399]*work.v[274];
  work.d[275] = work.v[275];

  if (work.d[275] > 0)
    work.d[275] = -settings.kkt_reg;
  else
    work.d[275] -= settings.kkt_reg;

  work.d_inv[275] = 1/work.d[275];

  work.L[402] = (-work.L[401]*work.v[274])*work.d_inv[275];
  work.L[420] = (work.KKT[849])*work.d_inv[275];
  work.v[106] = work.L[400]*work.d[106];
  work.v[274] = work.L[401]*work.d[274];
  work.v[275] = work.L[402]*work.d[275];
  work.v[276] = work.KKT[850]-work.L[400]*work.v[106]-work.L[401]*work.v[274]-work.L[402]*work.v[275];
  work.d[276] = work.v[276];

  if (work.d[276] > 0)
    work.d[276] = -settings.kkt_reg;
  else
    work.d[276] -= settings.kkt_reg;

  work.d_inv[276] = 1/work.d[276];

  work.L[421] = (work.KKT[851]-work.L[420]*work.v[275])*work.d_inv[276];
  work.v[170] = work.L[403]*work.d[170];
  work.v[213] = work.L[404]*work.d[213];
  work.v[217] = work.L[405]*work.d[217];
  work.v[221] = work.L[406]*work.d[221];
  work.v[225] = work.L[407]*work.d[225];
  work.v[229] = work.L[408]*work.d[229];
  work.v[233] = work.L[409]*work.d[233];
  work.v[237] = work.L[410]*work.d[237];
  work.v[241] = work.L[411]*work.d[241];
  work.v[245] = work.L[412]*work.d[245];
  work.v[249] = work.L[413]*work.d[249];
  work.v[253] = work.L[414]*work.d[253];
  work.v[257] = work.L[415]*work.d[257];
  work.v[261] = work.L[416]*work.d[261];
  work.v[265] = work.L[417]*work.d[265];
  work.v[269] = work.L[418]*work.d[269];
  work.v[273] = work.L[419]*work.d[273];
  work.v[275] = work.L[420]*work.d[275];
  work.v[276] = work.L[421]*work.d[276];
  work.v[277] = work.KKT[852]-work.L[403]*work.v[170]-work.L[404]*work.v[213]-work.L[405]*work.v[217]-work.L[406]*work.v[221]-work.L[407]*work.v[225]-work.L[408]*work.v[229]-work.L[409]*work.v[233]-work.L[410]*work.v[237]-work.L[411]*work.v[241]-work.L[412]*work.v[245]-work.L[413]*work.v[249]-work.L[414]*work.v[253]-work.L[415]*work.v[257]-work.L[416]*work.v[261]-work.L[417]*work.v[265]-work.L[418]*work.v[269]-work.L[419]*work.v[273]-work.L[420]*work.v[275]-work.L[421]*work.v[276];
  work.d[277] = work.v[277];

  if (work.d[277] < 0)
    work.d[277] = settings.kkt_reg;
  else
    work.d[277] += settings.kkt_reg;
  work.d_inv[277] = 1/work.d[277];

  work.L[444] = (work.KKT[853]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253]-work.L[439]*work.v[257]-work.L[440]*work.v[261]-work.L[441]*work.v[265]-work.L[442]*work.v[269]-work.L[443]*work.v[273])*work.d_inv[277];
  work.L[469] = (work.KKT[854]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257]-work.L[465]*work.v[261]-work.L[466]*work.v[265]-work.L[467]*work.v[269]-work.L[468]*work.v[273])*work.d_inv[277];
  work.L[495] = (work.KKT[855]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261]-work.L[492]*work.v[265]-work.L[493]*work.v[269]-work.L[494]*work.v[273])*work.d_inv[277];
  work.L[522] = (work.KKT[856]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265]-work.L[520]*work.v[269]-work.L[521]*work.v[273])*work.d_inv[277];
  work.L[550] = (work.KKT[857]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269]-work.L[549]*work.v[273])*work.d_inv[277];
  work.L[579] = (work.KKT[858]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273])*work.d_inv[277];
  work.L[609] = (work.KKT[859]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273])*work.d_inv[277];
  work.L[640] = (work.KKT[860]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273])*work.d_inv[277];
  work.L[672] = (work.KKT[861]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273])*work.d_inv[277];
  work.L[705] = (work.KKT[862]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273])*work.d_inv[277];
  work.L[739] = (work.KKT[863]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273])*work.d_inv[277];
  work.L[774] = (work.KKT[864]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273])*work.d_inv[277];
  work.L[805] = (work.KKT[865]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273])*work.d_inv[277];
  work.v[278] = 0;
  work.d[278] = work.v[278];

  if (work.d[278] < 0)
    work.d[278] = settings.kkt_reg;
  else
    work.d[278] += settings.kkt_reg;
  work.d_inv[278] = 1/work.d[278];

  work.L[423] = (work.KKT[866])*work.d_inv[278];
  work.L[425] = (work.KKT[867])*work.d_inv[278];
  work.v[77] = work.L[422]*work.d[77];
  work.v[278] = work.L[423]*work.d[278];
  work.v[279] = work.KKT[868]-work.L[422]*work.v[77]-work.L[423]*work.v[278];
  work.d[279] = work.v[279];

  if (work.d[279] > 0)
    work.d[279] = -settings.kkt_reg;
  else
    work.d[279] -= settings.kkt_reg;

  work.d_inv[279] = 1/work.d[279];

  work.L[426] = (-work.L[425]*work.v[278])*work.d_inv[279];
  work.L[445] = (work.KKT[869])*work.d_inv[279];
  work.v[107] = work.L[424]*work.d[107];
  work.v[278] = work.L[425]*work.d[278];
  work.v[279] = work.L[426]*work.d[279];
  work.v[280] = work.KKT[870]-work.L[424]*work.v[107]-work.L[425]*work.v[278]-work.L[426]*work.v[279];
  work.d[280] = work.v[280];

  if (work.d[280] > 0)
    work.d[280] = -settings.kkt_reg;
  else
    work.d[280] -= settings.kkt_reg;

  work.d_inv[280] = 1/work.d[280];

  work.L[446] = (work.KKT[871]-work.L[445]*work.v[279])*work.d_inv[280];
  work.v[173] = work.L[427]*work.d[173];
  work.v[213] = work.L[428]*work.d[213];
  work.v[217] = work.L[429]*work.d[217];
  work.v[221] = work.L[430]*work.d[221];
  work.v[225] = work.L[431]*work.d[225];
  work.v[229] = work.L[432]*work.d[229];
  work.v[233] = work.L[433]*work.d[233];
  work.v[237] = work.L[434]*work.d[237];
  work.v[241] = work.L[435]*work.d[241];
  work.v[245] = work.L[436]*work.d[245];
  work.v[249] = work.L[437]*work.d[249];
  work.v[253] = work.L[438]*work.d[253];
  work.v[257] = work.L[439]*work.d[257];
  work.v[261] = work.L[440]*work.d[261];
  work.v[265] = work.L[441]*work.d[265];
  work.v[269] = work.L[442]*work.d[269];
  work.v[273] = work.L[443]*work.d[273];
  work.v[277] = work.L[444]*work.d[277];
  work.v[279] = work.L[445]*work.d[279];
  work.v[280] = work.L[446]*work.d[280];
  work.v[281] = work.KKT[872]-work.L[427]*work.v[173]-work.L[428]*work.v[213]-work.L[429]*work.v[217]-work.L[430]*work.v[221]-work.L[431]*work.v[225]-work.L[432]*work.v[229]-work.L[433]*work.v[233]-work.L[434]*work.v[237]-work.L[435]*work.v[241]-work.L[436]*work.v[245]-work.L[437]*work.v[249]-work.L[438]*work.v[253]-work.L[439]*work.v[257]-work.L[440]*work.v[261]-work.L[441]*work.v[265]-work.L[442]*work.v[269]-work.L[443]*work.v[273]-work.L[444]*work.v[277]-work.L[445]*work.v[279]-work.L[446]*work.v[280];
  work.d[281] = work.v[281];

  if (work.d[281] < 0)
    work.d[281] = settings.kkt_reg;
  else
    work.d[281] += settings.kkt_reg;
  work.d_inv[281] = 1/work.d[281];

  work.L[470] = (work.KKT[873]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257]-work.L[465]*work.v[261]-work.L[466]*work.v[265]-work.L[467]*work.v[269]-work.L[468]*work.v[273]-work.L[469]*work.v[277])*work.d_inv[281];
  work.L[496] = (work.KKT[874]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261]-work.L[492]*work.v[265]-work.L[493]*work.v[269]-work.L[494]*work.v[273]-work.L[495]*work.v[277])*work.d_inv[281];
  work.L[523] = (work.KKT[875]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265]-work.L[520]*work.v[269]-work.L[521]*work.v[273]-work.L[522]*work.v[277])*work.d_inv[281];
  work.L[551] = (work.KKT[876]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269]-work.L[549]*work.v[273]-work.L[550]*work.v[277])*work.d_inv[281];
  work.L[580] = (work.KKT[877]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273]-work.L[579]*work.v[277])*work.d_inv[281];
  work.L[610] = (work.KKT[878]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277])*work.d_inv[281];
  work.L[641] = (work.KKT[879]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277])*work.d_inv[281];
  work.L[673] = (work.KKT[880]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277])*work.d_inv[281];
  work.L[706] = (work.KKT[881]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277])*work.d_inv[281];
  work.L[740] = (work.KKT[882]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277])*work.d_inv[281];
  work.L[775] = (work.KKT[883]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277])*work.d_inv[281];
  work.L[806] = (work.KKT[884]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277])*work.d_inv[281];
  work.v[282] = 0;
  work.d[282] = work.v[282];

  if (work.d[282] < 0)
    work.d[282] = settings.kkt_reg;
  else
    work.d[282] += settings.kkt_reg;
  work.d_inv[282] = 1/work.d[282];

  work.L[448] = (work.KKT[885])*work.d_inv[282];
  work.L[450] = (work.KKT[886])*work.d_inv[282];
  work.v[78] = work.L[447]*work.d[78];
  work.v[282] = work.L[448]*work.d[282];
  work.v[283] = work.KKT[887]-work.L[447]*work.v[78]-work.L[448]*work.v[282];
  work.d[283] = work.v[283];

  if (work.d[283] > 0)
    work.d[283] = -settings.kkt_reg;
  else
    work.d[283] -= settings.kkt_reg;

  work.d_inv[283] = 1/work.d[283];

  work.L[451] = (-work.L[450]*work.v[282])*work.d_inv[283];
  work.L[471] = (work.KKT[888])*work.d_inv[283];
  work.v[108] = work.L[449]*work.d[108];
  work.v[282] = work.L[450]*work.d[282];
  work.v[283] = work.L[451]*work.d[283];
  work.v[284] = work.KKT[889]-work.L[449]*work.v[108]-work.L[450]*work.v[282]-work.L[451]*work.v[283];
  work.d[284] = work.v[284];

  if (work.d[284] > 0)
    work.d[284] = -settings.kkt_reg;
  else
    work.d[284] -= settings.kkt_reg;

  work.d_inv[284] = 1/work.d[284];

  work.L[472] = (work.KKT[890]-work.L[471]*work.v[283])*work.d_inv[284];
  work.v[176] = work.L[452]*work.d[176];
  work.v[213] = work.L[453]*work.d[213];
  work.v[217] = work.L[454]*work.d[217];
  work.v[221] = work.L[455]*work.d[221];
  work.v[225] = work.L[456]*work.d[225];
  work.v[229] = work.L[457]*work.d[229];
  work.v[233] = work.L[458]*work.d[233];
  work.v[237] = work.L[459]*work.d[237];
  work.v[241] = work.L[460]*work.d[241];
  work.v[245] = work.L[461]*work.d[245];
  work.v[249] = work.L[462]*work.d[249];
  work.v[253] = work.L[463]*work.d[253];
  work.v[257] = work.L[464]*work.d[257];
  work.v[261] = work.L[465]*work.d[261];
  work.v[265] = work.L[466]*work.d[265];
  work.v[269] = work.L[467]*work.d[269];
  work.v[273] = work.L[468]*work.d[273];
  work.v[277] = work.L[469]*work.d[277];
  work.v[281] = work.L[470]*work.d[281];
  work.v[283] = work.L[471]*work.d[283];
  work.v[284] = work.L[472]*work.d[284];
  work.v[285] = work.KKT[891]-work.L[452]*work.v[176]-work.L[453]*work.v[213]-work.L[454]*work.v[217]-work.L[455]*work.v[221]-work.L[456]*work.v[225]-work.L[457]*work.v[229]-work.L[458]*work.v[233]-work.L[459]*work.v[237]-work.L[460]*work.v[241]-work.L[461]*work.v[245]-work.L[462]*work.v[249]-work.L[463]*work.v[253]-work.L[464]*work.v[257]-work.L[465]*work.v[261]-work.L[466]*work.v[265]-work.L[467]*work.v[269]-work.L[468]*work.v[273]-work.L[469]*work.v[277]-work.L[470]*work.v[281]-work.L[471]*work.v[283]-work.L[472]*work.v[284];
  work.d[285] = work.v[285];

  if (work.d[285] < 0)
    work.d[285] = settings.kkt_reg;
  else
    work.d[285] += settings.kkt_reg;
  work.d_inv[285] = 1/work.d[285];

  work.L[497] = (work.KKT[892]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261]-work.L[492]*work.v[265]-work.L[493]*work.v[269]-work.L[494]*work.v[273]-work.L[495]*work.v[277]-work.L[496]*work.v[281])*work.d_inv[285];
  work.L[524] = (work.KKT[893]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265]-work.L[520]*work.v[269]-work.L[521]*work.v[273]-work.L[522]*work.v[277]-work.L[523]*work.v[281])*work.d_inv[285];
  work.L[552] = (work.KKT[894]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269]-work.L[549]*work.v[273]-work.L[550]*work.v[277]-work.L[551]*work.v[281])*work.d_inv[285];
  work.L[581] = (work.KKT[895]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273]-work.L[579]*work.v[277]-work.L[580]*work.v[281])*work.d_inv[285];
  work.L[611] = (work.KKT[896]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277]-work.L[610]*work.v[281])*work.d_inv[285];
  work.L[642] = (work.KKT[897]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281])*work.d_inv[285];
  work.L[674] = (work.KKT[898]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281])*work.d_inv[285];
  work.L[707] = (work.KKT[899]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281])*work.d_inv[285];
  work.L[741] = (work.KKT[900]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281])*work.d_inv[285];
  work.L[776] = (work.KKT[901]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281])*work.d_inv[285];
  work.L[807] = (work.KKT[902]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281])*work.d_inv[285];
  work.v[286] = 0;
  work.d[286] = work.v[286];

  if (work.d[286] < 0)
    work.d[286] = settings.kkt_reg;
  else
    work.d[286] += settings.kkt_reg;
  work.d_inv[286] = 1/work.d[286];

  work.L[474] = (work.KKT[903])*work.d_inv[286];
  work.L[476] = (work.KKT[904])*work.d_inv[286];
  work.v[79] = work.L[473]*work.d[79];
  work.v[286] = work.L[474]*work.d[286];
  work.v[287] = work.KKT[905]-work.L[473]*work.v[79]-work.L[474]*work.v[286];
  work.d[287] = work.v[287];

  if (work.d[287] > 0)
    work.d[287] = -settings.kkt_reg;
  else
    work.d[287] -= settings.kkt_reg;

  work.d_inv[287] = 1/work.d[287];

  work.L[477] = (-work.L[476]*work.v[286])*work.d_inv[287];
  work.L[498] = (work.KKT[906])*work.d_inv[287];
  work.v[109] = work.L[475]*work.d[109];
  work.v[286] = work.L[476]*work.d[286];
  work.v[287] = work.L[477]*work.d[287];
  work.v[288] = work.KKT[907]-work.L[475]*work.v[109]-work.L[476]*work.v[286]-work.L[477]*work.v[287];
  work.d[288] = work.v[288];

  if (work.d[288] > 0)
    work.d[288] = -settings.kkt_reg;
  else
    work.d[288] -= settings.kkt_reg;

  work.d_inv[288] = 1/work.d[288];

  work.L[499] = (work.KKT[908]-work.L[498]*work.v[287])*work.d_inv[288];
  work.v[179] = work.L[478]*work.d[179];
  work.v[213] = work.L[479]*work.d[213];
  work.v[217] = work.L[480]*work.d[217];
  work.v[221] = work.L[481]*work.d[221];
  work.v[225] = work.L[482]*work.d[225];
  work.v[229] = work.L[483]*work.d[229];
  work.v[233] = work.L[484]*work.d[233];
  work.v[237] = work.L[485]*work.d[237];
  work.v[241] = work.L[486]*work.d[241];
  work.v[245] = work.L[487]*work.d[245];
  work.v[249] = work.L[488]*work.d[249];
  work.v[253] = work.L[489]*work.d[253];
  work.v[257] = work.L[490]*work.d[257];
  work.v[261] = work.L[491]*work.d[261];
  work.v[265] = work.L[492]*work.d[265];
  work.v[269] = work.L[493]*work.d[269];
  work.v[273] = work.L[494]*work.d[273];
  work.v[277] = work.L[495]*work.d[277];
  work.v[281] = work.L[496]*work.d[281];
  work.v[285] = work.L[497]*work.d[285];
  work.v[287] = work.L[498]*work.d[287];
  work.v[288] = work.L[499]*work.d[288];
  work.v[289] = work.KKT[909]-work.L[478]*work.v[179]-work.L[479]*work.v[213]-work.L[480]*work.v[217]-work.L[481]*work.v[221]-work.L[482]*work.v[225]-work.L[483]*work.v[229]-work.L[484]*work.v[233]-work.L[485]*work.v[237]-work.L[486]*work.v[241]-work.L[487]*work.v[245]-work.L[488]*work.v[249]-work.L[489]*work.v[253]-work.L[490]*work.v[257]-work.L[491]*work.v[261]-work.L[492]*work.v[265]-work.L[493]*work.v[269]-work.L[494]*work.v[273]-work.L[495]*work.v[277]-work.L[496]*work.v[281]-work.L[497]*work.v[285]-work.L[498]*work.v[287]-work.L[499]*work.v[288];
  work.d[289] = work.v[289];

  if (work.d[289] < 0)
    work.d[289] = settings.kkt_reg;
  else
    work.d[289] += settings.kkt_reg;
  work.d_inv[289] = 1/work.d[289];

  work.L[525] = (work.KKT[910]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265]-work.L[520]*work.v[269]-work.L[521]*work.v[273]-work.L[522]*work.v[277]-work.L[523]*work.v[281]-work.L[524]*work.v[285])*work.d_inv[289];
  work.L[553] = (work.KKT[911]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269]-work.L[549]*work.v[273]-work.L[550]*work.v[277]-work.L[551]*work.v[281]-work.L[552]*work.v[285])*work.d_inv[289];
  work.L[582] = (work.KKT[912]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273]-work.L[579]*work.v[277]-work.L[580]*work.v[281]-work.L[581]*work.v[285])*work.d_inv[289];
  work.L[612] = (work.KKT[913]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277]-work.L[610]*work.v[281]-work.L[611]*work.v[285])*work.d_inv[289];
  work.L[643] = (work.KKT[914]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281]-work.L[642]*work.v[285])*work.d_inv[289];
  work.L[675] = (work.KKT[915]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285])*work.d_inv[289];
  work.L[708] = (work.KKT[916]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285])*work.d_inv[289];
  work.L[742] = (work.KKT[917]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285])*work.d_inv[289];
  work.L[777] = (work.KKT[918]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285])*work.d_inv[289];
  work.L[808] = (work.KKT[919]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285])*work.d_inv[289];
  work.v[290] = 0;
  work.d[290] = work.v[290];

  if (work.d[290] < 0)
    work.d[290] = settings.kkt_reg;
  else
    work.d[290] += settings.kkt_reg;
  work.d_inv[290] = 1/work.d[290];

  work.L[501] = (work.KKT[920])*work.d_inv[290];
  work.L[503] = (work.KKT[921])*work.d_inv[290];
  work.v[80] = work.L[500]*work.d[80];
  work.v[290] = work.L[501]*work.d[290];
  work.v[291] = work.KKT[922]-work.L[500]*work.v[80]-work.L[501]*work.v[290];
  work.d[291] = work.v[291];

  if (work.d[291] > 0)
    work.d[291] = -settings.kkt_reg;
  else
    work.d[291] -= settings.kkt_reg;

  work.d_inv[291] = 1/work.d[291];

  work.L[504] = (-work.L[503]*work.v[290])*work.d_inv[291];
  work.L[526] = (work.KKT[923])*work.d_inv[291];
  work.v[110] = work.L[502]*work.d[110];
  work.v[290] = work.L[503]*work.d[290];
  work.v[291] = work.L[504]*work.d[291];
  work.v[292] = work.KKT[924]-work.L[502]*work.v[110]-work.L[503]*work.v[290]-work.L[504]*work.v[291];
  work.d[292] = work.v[292];

  if (work.d[292] > 0)
    work.d[292] = -settings.kkt_reg;
  else
    work.d[292] -= settings.kkt_reg;

  work.d_inv[292] = 1/work.d[292];

  work.L[527] = (work.KKT[925]-work.L[526]*work.v[291])*work.d_inv[292];
  work.v[182] = work.L[505]*work.d[182];
  work.v[213] = work.L[506]*work.d[213];
  work.v[217] = work.L[507]*work.d[217];
  work.v[221] = work.L[508]*work.d[221];
  work.v[225] = work.L[509]*work.d[225];
  work.v[229] = work.L[510]*work.d[229];
  work.v[233] = work.L[511]*work.d[233];
  work.v[237] = work.L[512]*work.d[237];
  work.v[241] = work.L[513]*work.d[241];
  work.v[245] = work.L[514]*work.d[245];
  work.v[249] = work.L[515]*work.d[249];
  work.v[253] = work.L[516]*work.d[253];
  work.v[257] = work.L[517]*work.d[257];
  work.v[261] = work.L[518]*work.d[261];
  work.v[265] = work.L[519]*work.d[265];
  work.v[269] = work.L[520]*work.d[269];
  work.v[273] = work.L[521]*work.d[273];
  work.v[277] = work.L[522]*work.d[277];
  work.v[281] = work.L[523]*work.d[281];
  work.v[285] = work.L[524]*work.d[285];
  work.v[289] = work.L[525]*work.d[289];
  work.v[291] = work.L[526]*work.d[291];
  work.v[292] = work.L[527]*work.d[292];
  work.v[293] = work.KKT[926]-work.L[505]*work.v[182]-work.L[506]*work.v[213]-work.L[507]*work.v[217]-work.L[508]*work.v[221]-work.L[509]*work.v[225]-work.L[510]*work.v[229]-work.L[511]*work.v[233]-work.L[512]*work.v[237]-work.L[513]*work.v[241]-work.L[514]*work.v[245]-work.L[515]*work.v[249]-work.L[516]*work.v[253]-work.L[517]*work.v[257]-work.L[518]*work.v[261]-work.L[519]*work.v[265]-work.L[520]*work.v[269]-work.L[521]*work.v[273]-work.L[522]*work.v[277]-work.L[523]*work.v[281]-work.L[524]*work.v[285]-work.L[525]*work.v[289]-work.L[526]*work.v[291]-work.L[527]*work.v[292];
  work.d[293] = work.v[293];

  if (work.d[293] < 0)
    work.d[293] = settings.kkt_reg;
  else
    work.d[293] += settings.kkt_reg;
  work.d_inv[293] = 1/work.d[293];

  work.L[554] = (work.KKT[927]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269]-work.L[549]*work.v[273]-work.L[550]*work.v[277]-work.L[551]*work.v[281]-work.L[552]*work.v[285]-work.L[553]*work.v[289])*work.d_inv[293];
  work.L[583] = (work.KKT[928]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273]-work.L[579]*work.v[277]-work.L[580]*work.v[281]-work.L[581]*work.v[285]-work.L[582]*work.v[289])*work.d_inv[293];
  work.L[613] = (work.KKT[929]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277]-work.L[610]*work.v[281]-work.L[611]*work.v[285]-work.L[612]*work.v[289])*work.d_inv[293];
  work.L[644] = (work.KKT[930]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281]-work.L[642]*work.v[285]-work.L[643]*work.v[289])*work.d_inv[293];
  work.L[676] = (work.KKT[931]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285]-work.L[675]*work.v[289])*work.d_inv[293];
  work.L[709] = (work.KKT[932]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289])*work.d_inv[293];
  work.L[743] = (work.KKT[933]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289])*work.d_inv[293];
  work.L[778] = (work.KKT[934]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289])*work.d_inv[293];
  work.L[809] = (work.KKT[935]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289])*work.d_inv[293];
  work.v[294] = 0;
  work.d[294] = work.v[294];

  if (work.d[294] < 0)
    work.d[294] = settings.kkt_reg;
  else
    work.d[294] += settings.kkt_reg;
  work.d_inv[294] = 1/work.d[294];

  work.L[529] = (work.KKT[936])*work.d_inv[294];
  work.L[531] = (work.KKT[937])*work.d_inv[294];
  work.v[81] = work.L[528]*work.d[81];
  work.v[294] = work.L[529]*work.d[294];
  work.v[295] = work.KKT[938]-work.L[528]*work.v[81]-work.L[529]*work.v[294];
  work.d[295] = work.v[295];

  if (work.d[295] > 0)
    work.d[295] = -settings.kkt_reg;
  else
    work.d[295] -= settings.kkt_reg;

  work.d_inv[295] = 1/work.d[295];

  work.L[532] = (-work.L[531]*work.v[294])*work.d_inv[295];
  work.L[555] = (work.KKT[939])*work.d_inv[295];
  work.v[111] = work.L[530]*work.d[111];
  work.v[294] = work.L[531]*work.d[294];
  work.v[295] = work.L[532]*work.d[295];
  work.v[296] = work.KKT[940]-work.L[530]*work.v[111]-work.L[531]*work.v[294]-work.L[532]*work.v[295];
  work.d[296] = work.v[296];

  if (work.d[296] > 0)
    work.d[296] = -settings.kkt_reg;
  else
    work.d[296] -= settings.kkt_reg;

  work.d_inv[296] = 1/work.d[296];

  work.L[556] = (work.KKT[941]-work.L[555]*work.v[295])*work.d_inv[296];
  work.v[185] = work.L[533]*work.d[185];
  work.v[213] = work.L[534]*work.d[213];
  work.v[217] = work.L[535]*work.d[217];
  work.v[221] = work.L[536]*work.d[221];
  work.v[225] = work.L[537]*work.d[225];
  work.v[229] = work.L[538]*work.d[229];
  work.v[233] = work.L[539]*work.d[233];
  work.v[237] = work.L[540]*work.d[237];
  work.v[241] = work.L[541]*work.d[241];
  work.v[245] = work.L[542]*work.d[245];
  work.v[249] = work.L[543]*work.d[249];
  work.v[253] = work.L[544]*work.d[253];
  work.v[257] = work.L[545]*work.d[257];
  work.v[261] = work.L[546]*work.d[261];
  work.v[265] = work.L[547]*work.d[265];
  work.v[269] = work.L[548]*work.d[269];
  work.v[273] = work.L[549]*work.d[273];
  work.v[277] = work.L[550]*work.d[277];
  work.v[281] = work.L[551]*work.d[281];
  work.v[285] = work.L[552]*work.d[285];
  work.v[289] = work.L[553]*work.d[289];
  work.v[293] = work.L[554]*work.d[293];
  work.v[295] = work.L[555]*work.d[295];
  work.v[296] = work.L[556]*work.d[296];
  work.v[297] = work.KKT[942]-work.L[533]*work.v[185]-work.L[534]*work.v[213]-work.L[535]*work.v[217]-work.L[536]*work.v[221]-work.L[537]*work.v[225]-work.L[538]*work.v[229]-work.L[539]*work.v[233]-work.L[540]*work.v[237]-work.L[541]*work.v[241]-work.L[542]*work.v[245]-work.L[543]*work.v[249]-work.L[544]*work.v[253]-work.L[545]*work.v[257]-work.L[546]*work.v[261]-work.L[547]*work.v[265]-work.L[548]*work.v[269]-work.L[549]*work.v[273]-work.L[550]*work.v[277]-work.L[551]*work.v[281]-work.L[552]*work.v[285]-work.L[553]*work.v[289]-work.L[554]*work.v[293]-work.L[555]*work.v[295]-work.L[556]*work.v[296];
  work.d[297] = work.v[297];

  if (work.d[297] < 0)
    work.d[297] = settings.kkt_reg;
  else
    work.d[297] += settings.kkt_reg;
  work.d_inv[297] = 1/work.d[297];

  work.L[584] = (work.KKT[943]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273]-work.L[579]*work.v[277]-work.L[580]*work.v[281]-work.L[581]*work.v[285]-work.L[582]*work.v[289]-work.L[583]*work.v[293])*work.d_inv[297];
  work.L[614] = (work.KKT[944]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277]-work.L[610]*work.v[281]-work.L[611]*work.v[285]-work.L[612]*work.v[289]-work.L[613]*work.v[293])*work.d_inv[297];
  work.L[645] = (work.KKT[945]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281]-work.L[642]*work.v[285]-work.L[643]*work.v[289]-work.L[644]*work.v[293])*work.d_inv[297];
  work.L[677] = (work.KKT[946]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285]-work.L[675]*work.v[289]-work.L[676]*work.v[293])*work.d_inv[297];
  work.L[710] = (work.KKT[947]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289]-work.L[709]*work.v[293])*work.d_inv[297];
  work.L[744] = (work.KKT[948]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293])*work.d_inv[297];
  work.L[779] = (work.KKT[949]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293])*work.d_inv[297];
  work.L[810] = (work.KKT[950]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293])*work.d_inv[297];
  work.v[298] = 0;
  work.d[298] = work.v[298];

  if (work.d[298] < 0)
    work.d[298] = settings.kkt_reg;
  else
    work.d[298] += settings.kkt_reg;
  work.d_inv[298] = 1/work.d[298];

  work.L[558] = (work.KKT[951])*work.d_inv[298];
  work.L[560] = (work.KKT[952])*work.d_inv[298];
  work.v[82] = work.L[557]*work.d[82];
  work.v[298] = work.L[558]*work.d[298];
  work.v[299] = work.KKT[953]-work.L[557]*work.v[82]-work.L[558]*work.v[298];
  work.d[299] = work.v[299];

  if (work.d[299] > 0)
    work.d[299] = -settings.kkt_reg;
  else
    work.d[299] -= settings.kkt_reg;

  work.d_inv[299] = 1/work.d[299];

  work.L[561] = (-work.L[560]*work.v[298])*work.d_inv[299];
  work.L[585] = (work.KKT[954])*work.d_inv[299];
  work.v[112] = work.L[559]*work.d[112];
  work.v[298] = work.L[560]*work.d[298];
  work.v[299] = work.L[561]*work.d[299];
  work.v[300] = work.KKT[955]-work.L[559]*work.v[112]-work.L[560]*work.v[298]-work.L[561]*work.v[299];
  work.d[300] = work.v[300];

  if (work.d[300] > 0)
    work.d[300] = -settings.kkt_reg;
  else
    work.d[300] -= settings.kkt_reg;

  work.d_inv[300] = 1/work.d[300];

  work.L[586] = (work.KKT[956]-work.L[585]*work.v[299])*work.d_inv[300];
  work.v[188] = work.L[562]*work.d[188];
  work.v[213] = work.L[563]*work.d[213];
  work.v[217] = work.L[564]*work.d[217];
  work.v[221] = work.L[565]*work.d[221];
  work.v[225] = work.L[566]*work.d[225];
  work.v[229] = work.L[567]*work.d[229];
  work.v[233] = work.L[568]*work.d[233];
  work.v[237] = work.L[569]*work.d[237];
  work.v[241] = work.L[570]*work.d[241];
  work.v[245] = work.L[571]*work.d[245];
  work.v[249] = work.L[572]*work.d[249];
  work.v[253] = work.L[573]*work.d[253];
  work.v[257] = work.L[574]*work.d[257];
  work.v[261] = work.L[575]*work.d[261];
  work.v[265] = work.L[576]*work.d[265];
  work.v[269] = work.L[577]*work.d[269];
  work.v[273] = work.L[578]*work.d[273];
  work.v[277] = work.L[579]*work.d[277];
  work.v[281] = work.L[580]*work.d[281];
  work.v[285] = work.L[581]*work.d[285];
  work.v[289] = work.L[582]*work.d[289];
  work.v[293] = work.L[583]*work.d[293];
  work.v[297] = work.L[584]*work.d[297];
  work.v[299] = work.L[585]*work.d[299];
  work.v[300] = work.L[586]*work.d[300];
  work.v[301] = work.KKT[957]-work.L[562]*work.v[188]-work.L[563]*work.v[213]-work.L[564]*work.v[217]-work.L[565]*work.v[221]-work.L[566]*work.v[225]-work.L[567]*work.v[229]-work.L[568]*work.v[233]-work.L[569]*work.v[237]-work.L[570]*work.v[241]-work.L[571]*work.v[245]-work.L[572]*work.v[249]-work.L[573]*work.v[253]-work.L[574]*work.v[257]-work.L[575]*work.v[261]-work.L[576]*work.v[265]-work.L[577]*work.v[269]-work.L[578]*work.v[273]-work.L[579]*work.v[277]-work.L[580]*work.v[281]-work.L[581]*work.v[285]-work.L[582]*work.v[289]-work.L[583]*work.v[293]-work.L[584]*work.v[297]-work.L[585]*work.v[299]-work.L[586]*work.v[300];
  work.d[301] = work.v[301];

  if (work.d[301] < 0)
    work.d[301] = settings.kkt_reg;
  else
    work.d[301] += settings.kkt_reg;
  work.d_inv[301] = 1/work.d[301];

  work.L[615] = (work.KKT[958]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277]-work.L[610]*work.v[281]-work.L[611]*work.v[285]-work.L[612]*work.v[289]-work.L[613]*work.v[293]-work.L[614]*work.v[297])*work.d_inv[301];
  work.L[646] = (work.KKT[959]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281]-work.L[642]*work.v[285]-work.L[643]*work.v[289]-work.L[644]*work.v[293]-work.L[645]*work.v[297])*work.d_inv[301];
  work.L[678] = (work.KKT[960]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285]-work.L[675]*work.v[289]-work.L[676]*work.v[293]-work.L[677]*work.v[297])*work.d_inv[301];
  work.L[711] = (work.KKT[961]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289]-work.L[709]*work.v[293]-work.L[710]*work.v[297])*work.d_inv[301];
  work.L[745] = (work.KKT[962]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293]-work.L[744]*work.v[297])*work.d_inv[301];
  work.L[780] = (work.KKT[963]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297])*work.d_inv[301];
  work.L[811] = (work.KKT[964]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297])*work.d_inv[301];
  work.v[302] = 0;
  work.d[302] = work.v[302];

  if (work.d[302] < 0)
    work.d[302] = settings.kkt_reg;
  else
    work.d[302] += settings.kkt_reg;
  work.d_inv[302] = 1/work.d[302];

  work.L[588] = (work.KKT[965])*work.d_inv[302];
  work.L[590] = (work.KKT[966])*work.d_inv[302];
  work.v[83] = work.L[587]*work.d[83];
  work.v[302] = work.L[588]*work.d[302];
  work.v[303] = work.KKT[967]-work.L[587]*work.v[83]-work.L[588]*work.v[302];
  work.d[303] = work.v[303];

  if (work.d[303] > 0)
    work.d[303] = -settings.kkt_reg;
  else
    work.d[303] -= settings.kkt_reg;

  work.d_inv[303] = 1/work.d[303];

  work.L[591] = (-work.L[590]*work.v[302])*work.d_inv[303];
  work.L[616] = (work.KKT[968])*work.d_inv[303];
  work.v[113] = work.L[589]*work.d[113];
  work.v[302] = work.L[590]*work.d[302];
  work.v[303] = work.L[591]*work.d[303];
  work.v[304] = work.KKT[969]-work.L[589]*work.v[113]-work.L[590]*work.v[302]-work.L[591]*work.v[303];
  work.d[304] = work.v[304];

  if (work.d[304] > 0)
    work.d[304] = -settings.kkt_reg;
  else
    work.d[304] -= settings.kkt_reg;

  work.d_inv[304] = 1/work.d[304];

  work.L[617] = (work.KKT[970]-work.L[616]*work.v[303])*work.d_inv[304];
  work.v[191] = work.L[592]*work.d[191];
  work.v[213] = work.L[593]*work.d[213];
  work.v[217] = work.L[594]*work.d[217];
  work.v[221] = work.L[595]*work.d[221];
  work.v[225] = work.L[596]*work.d[225];
  work.v[229] = work.L[597]*work.d[229];
  work.v[233] = work.L[598]*work.d[233];
  work.v[237] = work.L[599]*work.d[237];
  work.v[241] = work.L[600]*work.d[241];
  work.v[245] = work.L[601]*work.d[245];
  work.v[249] = work.L[602]*work.d[249];
  work.v[253] = work.L[603]*work.d[253];
  work.v[257] = work.L[604]*work.d[257];
  work.v[261] = work.L[605]*work.d[261];
  work.v[265] = work.L[606]*work.d[265];
  work.v[269] = work.L[607]*work.d[269];
  work.v[273] = work.L[608]*work.d[273];
  work.v[277] = work.L[609]*work.d[277];
  work.v[281] = work.L[610]*work.d[281];
  work.v[285] = work.L[611]*work.d[285];
  work.v[289] = work.L[612]*work.d[289];
  work.v[293] = work.L[613]*work.d[293];
  work.v[297] = work.L[614]*work.d[297];
  work.v[301] = work.L[615]*work.d[301];
  work.v[303] = work.L[616]*work.d[303];
  work.v[304] = work.L[617]*work.d[304];
  work.v[305] = work.KKT[971]-work.L[592]*work.v[191]-work.L[593]*work.v[213]-work.L[594]*work.v[217]-work.L[595]*work.v[221]-work.L[596]*work.v[225]-work.L[597]*work.v[229]-work.L[598]*work.v[233]-work.L[599]*work.v[237]-work.L[600]*work.v[241]-work.L[601]*work.v[245]-work.L[602]*work.v[249]-work.L[603]*work.v[253]-work.L[604]*work.v[257]-work.L[605]*work.v[261]-work.L[606]*work.v[265]-work.L[607]*work.v[269]-work.L[608]*work.v[273]-work.L[609]*work.v[277]-work.L[610]*work.v[281]-work.L[611]*work.v[285]-work.L[612]*work.v[289]-work.L[613]*work.v[293]-work.L[614]*work.v[297]-work.L[615]*work.v[301]-work.L[616]*work.v[303]-work.L[617]*work.v[304];
  work.d[305] = work.v[305];

  if (work.d[305] < 0)
    work.d[305] = settings.kkt_reg;
  else
    work.d[305] += settings.kkt_reg;
  work.d_inv[305] = 1/work.d[305];

  work.L[647] = (work.KKT[972]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281]-work.L[642]*work.v[285]-work.L[643]*work.v[289]-work.L[644]*work.v[293]-work.L[645]*work.v[297]-work.L[646]*work.v[301])*work.d_inv[305];
  work.L[679] = (work.KKT[973]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285]-work.L[675]*work.v[289]-work.L[676]*work.v[293]-work.L[677]*work.v[297]-work.L[678]*work.v[301])*work.d_inv[305];
  work.L[712] = (work.KKT[974]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289]-work.L[709]*work.v[293]-work.L[710]*work.v[297]-work.L[711]*work.v[301])*work.d_inv[305];
  work.L[746] = (work.KKT[975]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293]-work.L[744]*work.v[297]-work.L[745]*work.v[301])*work.d_inv[305];
  work.L[781] = (work.KKT[976]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297]-work.L[780]*work.v[301])*work.d_inv[305];
  work.L[812] = (work.KKT[977]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301])*work.d_inv[305];
  work.v[306] = 0;
  work.d[306] = work.v[306];

  if (work.d[306] < 0)
    work.d[306] = settings.kkt_reg;
  else
    work.d[306] += settings.kkt_reg;
  work.d_inv[306] = 1/work.d[306];

  work.L[619] = (work.KKT[978])*work.d_inv[306];
  work.L[621] = (work.KKT[979])*work.d_inv[306];
  work.v[84] = work.L[618]*work.d[84];
  work.v[306] = work.L[619]*work.d[306];
  work.v[307] = work.KKT[980]-work.L[618]*work.v[84]-work.L[619]*work.v[306];
  work.d[307] = work.v[307];

  if (work.d[307] > 0)
    work.d[307] = -settings.kkt_reg;
  else
    work.d[307] -= settings.kkt_reg;

  work.d_inv[307] = 1/work.d[307];

  work.L[622] = (-work.L[621]*work.v[306])*work.d_inv[307];
  work.L[648] = (work.KKT[981])*work.d_inv[307];
  work.v[114] = work.L[620]*work.d[114];
  work.v[306] = work.L[621]*work.d[306];
  work.v[307] = work.L[622]*work.d[307];
  work.v[308] = work.KKT[982]-work.L[620]*work.v[114]-work.L[621]*work.v[306]-work.L[622]*work.v[307];
  work.d[308] = work.v[308];

  if (work.d[308] > 0)
    work.d[308] = -settings.kkt_reg;
  else
    work.d[308] -= settings.kkt_reg;

  work.d_inv[308] = 1/work.d[308];

  work.L[649] = (work.KKT[983]-work.L[648]*work.v[307])*work.d_inv[308];
  work.v[194] = work.L[623]*work.d[194];
  work.v[213] = work.L[624]*work.d[213];
  work.v[217] = work.L[625]*work.d[217];
  work.v[221] = work.L[626]*work.d[221];
  work.v[225] = work.L[627]*work.d[225];
  work.v[229] = work.L[628]*work.d[229];
  work.v[233] = work.L[629]*work.d[233];
  work.v[237] = work.L[630]*work.d[237];
  work.v[241] = work.L[631]*work.d[241];
  work.v[245] = work.L[632]*work.d[245];
  work.v[249] = work.L[633]*work.d[249];
  work.v[253] = work.L[634]*work.d[253];
  work.v[257] = work.L[635]*work.d[257];
  work.v[261] = work.L[636]*work.d[261];
  work.v[265] = work.L[637]*work.d[265];
  work.v[269] = work.L[638]*work.d[269];
  work.v[273] = work.L[639]*work.d[273];
  work.v[277] = work.L[640]*work.d[277];
  work.v[281] = work.L[641]*work.d[281];
  work.v[285] = work.L[642]*work.d[285];
  work.v[289] = work.L[643]*work.d[289];
  work.v[293] = work.L[644]*work.d[293];
  work.v[297] = work.L[645]*work.d[297];
  work.v[301] = work.L[646]*work.d[301];
  work.v[305] = work.L[647]*work.d[305];
  work.v[307] = work.L[648]*work.d[307];
  work.v[308] = work.L[649]*work.d[308];
  work.v[309] = work.KKT[984]-work.L[623]*work.v[194]-work.L[624]*work.v[213]-work.L[625]*work.v[217]-work.L[626]*work.v[221]-work.L[627]*work.v[225]-work.L[628]*work.v[229]-work.L[629]*work.v[233]-work.L[630]*work.v[237]-work.L[631]*work.v[241]-work.L[632]*work.v[245]-work.L[633]*work.v[249]-work.L[634]*work.v[253]-work.L[635]*work.v[257]-work.L[636]*work.v[261]-work.L[637]*work.v[265]-work.L[638]*work.v[269]-work.L[639]*work.v[273]-work.L[640]*work.v[277]-work.L[641]*work.v[281]-work.L[642]*work.v[285]-work.L[643]*work.v[289]-work.L[644]*work.v[293]-work.L[645]*work.v[297]-work.L[646]*work.v[301]-work.L[647]*work.v[305]-work.L[648]*work.v[307]-work.L[649]*work.v[308];
  work.d[309] = work.v[309];

  if (work.d[309] < 0)
    work.d[309] = settings.kkt_reg;
  else
    work.d[309] += settings.kkt_reg;
  work.d_inv[309] = 1/work.d[309];

  work.L[680] = (work.KKT[985]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285]-work.L[675]*work.v[289]-work.L[676]*work.v[293]-work.L[677]*work.v[297]-work.L[678]*work.v[301]-work.L[679]*work.v[305])*work.d_inv[309];
  work.L[713] = (work.KKT[986]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289]-work.L[709]*work.v[293]-work.L[710]*work.v[297]-work.L[711]*work.v[301]-work.L[712]*work.v[305])*work.d_inv[309];
  work.L[747] = (work.KKT[987]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293]-work.L[744]*work.v[297]-work.L[745]*work.v[301]-work.L[746]*work.v[305])*work.d_inv[309];
  work.L[782] = (work.KKT[988]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297]-work.L[780]*work.v[301]-work.L[781]*work.v[305])*work.d_inv[309];
  work.L[813] = (work.KKT[989]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301]-work.L[812]*work.v[305])*work.d_inv[309];
  work.v[310] = 0;
  work.d[310] = work.v[310];

  if (work.d[310] < 0)
    work.d[310] = settings.kkt_reg;
  else
    work.d[310] += settings.kkt_reg;
  work.d_inv[310] = 1/work.d[310];

  work.L[651] = (work.KKT[990])*work.d_inv[310];
  work.L[653] = (work.KKT[991])*work.d_inv[310];
  work.v[85] = work.L[650]*work.d[85];
  work.v[310] = work.L[651]*work.d[310];
  work.v[311] = work.KKT[992]-work.L[650]*work.v[85]-work.L[651]*work.v[310];
  work.d[311] = work.v[311];

  if (work.d[311] > 0)
    work.d[311] = -settings.kkt_reg;
  else
    work.d[311] -= settings.kkt_reg;

  work.d_inv[311] = 1/work.d[311];

  work.L[654] = (-work.L[653]*work.v[310])*work.d_inv[311];
  work.L[681] = (work.KKT[993])*work.d_inv[311];
  work.v[115] = work.L[652]*work.d[115];
  work.v[310] = work.L[653]*work.d[310];
  work.v[311] = work.L[654]*work.d[311];
  work.v[312] = work.KKT[994]-work.L[652]*work.v[115]-work.L[653]*work.v[310]-work.L[654]*work.v[311];
  work.d[312] = work.v[312];

  if (work.d[312] > 0)
    work.d[312] = -settings.kkt_reg;
  else
    work.d[312] -= settings.kkt_reg;

  work.d_inv[312] = 1/work.d[312];

  work.L[682] = (work.KKT[995]-work.L[681]*work.v[311])*work.d_inv[312];
  work.v[197] = work.L[655]*work.d[197];
  work.v[213] = work.L[656]*work.d[213];
  work.v[217] = work.L[657]*work.d[217];
  work.v[221] = work.L[658]*work.d[221];
  work.v[225] = work.L[659]*work.d[225];
  work.v[229] = work.L[660]*work.d[229];
  work.v[233] = work.L[661]*work.d[233];
  work.v[237] = work.L[662]*work.d[237];
  work.v[241] = work.L[663]*work.d[241];
  work.v[245] = work.L[664]*work.d[245];
  work.v[249] = work.L[665]*work.d[249];
  work.v[253] = work.L[666]*work.d[253];
  work.v[257] = work.L[667]*work.d[257];
  work.v[261] = work.L[668]*work.d[261];
  work.v[265] = work.L[669]*work.d[265];
  work.v[269] = work.L[670]*work.d[269];
  work.v[273] = work.L[671]*work.d[273];
  work.v[277] = work.L[672]*work.d[277];
  work.v[281] = work.L[673]*work.d[281];
  work.v[285] = work.L[674]*work.d[285];
  work.v[289] = work.L[675]*work.d[289];
  work.v[293] = work.L[676]*work.d[293];
  work.v[297] = work.L[677]*work.d[297];
  work.v[301] = work.L[678]*work.d[301];
  work.v[305] = work.L[679]*work.d[305];
  work.v[309] = work.L[680]*work.d[309];
  work.v[311] = work.L[681]*work.d[311];
  work.v[312] = work.L[682]*work.d[312];
  work.v[313] = work.KKT[996]-work.L[655]*work.v[197]-work.L[656]*work.v[213]-work.L[657]*work.v[217]-work.L[658]*work.v[221]-work.L[659]*work.v[225]-work.L[660]*work.v[229]-work.L[661]*work.v[233]-work.L[662]*work.v[237]-work.L[663]*work.v[241]-work.L[664]*work.v[245]-work.L[665]*work.v[249]-work.L[666]*work.v[253]-work.L[667]*work.v[257]-work.L[668]*work.v[261]-work.L[669]*work.v[265]-work.L[670]*work.v[269]-work.L[671]*work.v[273]-work.L[672]*work.v[277]-work.L[673]*work.v[281]-work.L[674]*work.v[285]-work.L[675]*work.v[289]-work.L[676]*work.v[293]-work.L[677]*work.v[297]-work.L[678]*work.v[301]-work.L[679]*work.v[305]-work.L[680]*work.v[309]-work.L[681]*work.v[311]-work.L[682]*work.v[312];
  work.d[313] = work.v[313];

  if (work.d[313] < 0)
    work.d[313] = settings.kkt_reg;
  else
    work.d[313] += settings.kkt_reg;
  work.d_inv[313] = 1/work.d[313];

  work.L[714] = (work.KKT[997]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289]-work.L[709]*work.v[293]-work.L[710]*work.v[297]-work.L[711]*work.v[301]-work.L[712]*work.v[305]-work.L[713]*work.v[309])*work.d_inv[313];
  work.L[748] = (work.KKT[998]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293]-work.L[744]*work.v[297]-work.L[745]*work.v[301]-work.L[746]*work.v[305]-work.L[747]*work.v[309])*work.d_inv[313];
  work.L[783] = (work.KKT[999]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297]-work.L[780]*work.v[301]-work.L[781]*work.v[305]-work.L[782]*work.v[309])*work.d_inv[313];
  work.L[814] = (work.KKT[1000]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301]-work.L[812]*work.v[305]-work.L[813]*work.v[309])*work.d_inv[313];
  work.v[314] = 0;
  work.d[314] = work.v[314];

  if (work.d[314] < 0)
    work.d[314] = settings.kkt_reg;
  else
    work.d[314] += settings.kkt_reg;
  work.d_inv[314] = 1/work.d[314];

  work.L[684] = (work.KKT[1001])*work.d_inv[314];
  work.L[686] = (work.KKT[1002])*work.d_inv[314];
  work.v[86] = work.L[683]*work.d[86];
  work.v[314] = work.L[684]*work.d[314];
  work.v[315] = work.KKT[1003]-work.L[683]*work.v[86]-work.L[684]*work.v[314];
  work.d[315] = work.v[315];

  if (work.d[315] > 0)
    work.d[315] = -settings.kkt_reg;
  else
    work.d[315] -= settings.kkt_reg;

  work.d_inv[315] = 1/work.d[315];

  work.L[687] = (-work.L[686]*work.v[314])*work.d_inv[315];
  work.L[715] = (work.KKT[1004])*work.d_inv[315];
  work.v[116] = work.L[685]*work.d[116];
  work.v[314] = work.L[686]*work.d[314];
  work.v[315] = work.L[687]*work.d[315];
  work.v[316] = work.KKT[1005]-work.L[685]*work.v[116]-work.L[686]*work.v[314]-work.L[687]*work.v[315];
  work.d[316] = work.v[316];

  if (work.d[316] > 0)
    work.d[316] = -settings.kkt_reg;
  else
    work.d[316] -= settings.kkt_reg;

  work.d_inv[316] = 1/work.d[316];

  work.L[716] = (work.KKT[1006]-work.L[715]*work.v[315])*work.d_inv[316];
  work.v[200] = work.L[688]*work.d[200];
  work.v[213] = work.L[689]*work.d[213];
  work.v[217] = work.L[690]*work.d[217];
  work.v[221] = work.L[691]*work.d[221];
  work.v[225] = work.L[692]*work.d[225];
  work.v[229] = work.L[693]*work.d[229];
  work.v[233] = work.L[694]*work.d[233];
  work.v[237] = work.L[695]*work.d[237];
  work.v[241] = work.L[696]*work.d[241];
  work.v[245] = work.L[697]*work.d[245];
  work.v[249] = work.L[698]*work.d[249];
  work.v[253] = work.L[699]*work.d[253];
  work.v[257] = work.L[700]*work.d[257];
  work.v[261] = work.L[701]*work.d[261];
  work.v[265] = work.L[702]*work.d[265];
  work.v[269] = work.L[703]*work.d[269];
  work.v[273] = work.L[704]*work.d[273];
  work.v[277] = work.L[705]*work.d[277];
  work.v[281] = work.L[706]*work.d[281];
  work.v[285] = work.L[707]*work.d[285];
  work.v[289] = work.L[708]*work.d[289];
  work.v[293] = work.L[709]*work.d[293];
  work.v[297] = work.L[710]*work.d[297];
  work.v[301] = work.L[711]*work.d[301];
  work.v[305] = work.L[712]*work.d[305];
  work.v[309] = work.L[713]*work.d[309];
  work.v[313] = work.L[714]*work.d[313];
  work.v[315] = work.L[715]*work.d[315];
  work.v[316] = work.L[716]*work.d[316];
  work.v[317] = work.KKT[1007]-work.L[688]*work.v[200]-work.L[689]*work.v[213]-work.L[690]*work.v[217]-work.L[691]*work.v[221]-work.L[692]*work.v[225]-work.L[693]*work.v[229]-work.L[694]*work.v[233]-work.L[695]*work.v[237]-work.L[696]*work.v[241]-work.L[697]*work.v[245]-work.L[698]*work.v[249]-work.L[699]*work.v[253]-work.L[700]*work.v[257]-work.L[701]*work.v[261]-work.L[702]*work.v[265]-work.L[703]*work.v[269]-work.L[704]*work.v[273]-work.L[705]*work.v[277]-work.L[706]*work.v[281]-work.L[707]*work.v[285]-work.L[708]*work.v[289]-work.L[709]*work.v[293]-work.L[710]*work.v[297]-work.L[711]*work.v[301]-work.L[712]*work.v[305]-work.L[713]*work.v[309]-work.L[714]*work.v[313]-work.L[715]*work.v[315]-work.L[716]*work.v[316];
  work.d[317] = work.v[317];

  if (work.d[317] < 0)
    work.d[317] = settings.kkt_reg;
  else
    work.d[317] += settings.kkt_reg;
  work.d_inv[317] = 1/work.d[317];

  work.L[749] = (work.KKT[1008]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293]-work.L[744]*work.v[297]-work.L[745]*work.v[301]-work.L[746]*work.v[305]-work.L[747]*work.v[309]-work.L[748]*work.v[313])*work.d_inv[317];
  work.L[784] = (work.KKT[1009]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297]-work.L[780]*work.v[301]-work.L[781]*work.v[305]-work.L[782]*work.v[309]-work.L[783]*work.v[313])*work.d_inv[317];
  work.L[815] = (work.KKT[1010]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301]-work.L[812]*work.v[305]-work.L[813]*work.v[309]-work.L[814]*work.v[313])*work.d_inv[317];
  work.v[318] = 0;
  work.d[318] = work.v[318];

  if (work.d[318] < 0)
    work.d[318] = settings.kkt_reg;
  else
    work.d[318] += settings.kkt_reg;
  work.d_inv[318] = 1/work.d[318];

  work.L[718] = (work.KKT[1011])*work.d_inv[318];
  work.L[720] = (work.KKT[1012])*work.d_inv[318];
  work.v[87] = work.L[717]*work.d[87];
  work.v[318] = work.L[718]*work.d[318];
  work.v[319] = work.KKT[1013]-work.L[717]*work.v[87]-work.L[718]*work.v[318];
  work.d[319] = work.v[319];

  if (work.d[319] > 0)
    work.d[319] = -settings.kkt_reg;
  else
    work.d[319] -= settings.kkt_reg;

  work.d_inv[319] = 1/work.d[319];

  work.L[721] = (-work.L[720]*work.v[318])*work.d_inv[319];
  work.L[750] = (work.KKT[1014])*work.d_inv[319];
  work.v[117] = work.L[719]*work.d[117];
  work.v[318] = work.L[720]*work.d[318];
  work.v[319] = work.L[721]*work.d[319];
  work.v[320] = work.KKT[1015]-work.L[719]*work.v[117]-work.L[720]*work.v[318]-work.L[721]*work.v[319];
  work.d[320] = work.v[320];

  if (work.d[320] > 0)
    work.d[320] = -settings.kkt_reg;
  else
    work.d[320] -= settings.kkt_reg;

  work.d_inv[320] = 1/work.d[320];

  work.L[751] = (work.KKT[1016]-work.L[750]*work.v[319])*work.d_inv[320];
  work.v[203] = work.L[722]*work.d[203];
  work.v[213] = work.L[723]*work.d[213];
  work.v[217] = work.L[724]*work.d[217];
  work.v[221] = work.L[725]*work.d[221];
  work.v[225] = work.L[726]*work.d[225];
  work.v[229] = work.L[727]*work.d[229];
  work.v[233] = work.L[728]*work.d[233];
  work.v[237] = work.L[729]*work.d[237];
  work.v[241] = work.L[730]*work.d[241];
  work.v[245] = work.L[731]*work.d[245];
  work.v[249] = work.L[732]*work.d[249];
  work.v[253] = work.L[733]*work.d[253];
  work.v[257] = work.L[734]*work.d[257];
  work.v[261] = work.L[735]*work.d[261];
  work.v[265] = work.L[736]*work.d[265];
  work.v[269] = work.L[737]*work.d[269];
  work.v[273] = work.L[738]*work.d[273];
  work.v[277] = work.L[739]*work.d[277];
  work.v[281] = work.L[740]*work.d[281];
  work.v[285] = work.L[741]*work.d[285];
  work.v[289] = work.L[742]*work.d[289];
  work.v[293] = work.L[743]*work.d[293];
  work.v[297] = work.L[744]*work.d[297];
  work.v[301] = work.L[745]*work.d[301];
  work.v[305] = work.L[746]*work.d[305];
  work.v[309] = work.L[747]*work.d[309];
  work.v[313] = work.L[748]*work.d[313];
  work.v[317] = work.L[749]*work.d[317];
  work.v[319] = work.L[750]*work.d[319];
  work.v[320] = work.L[751]*work.d[320];
  work.v[321] = work.KKT[1017]-work.L[722]*work.v[203]-work.L[723]*work.v[213]-work.L[724]*work.v[217]-work.L[725]*work.v[221]-work.L[726]*work.v[225]-work.L[727]*work.v[229]-work.L[728]*work.v[233]-work.L[729]*work.v[237]-work.L[730]*work.v[241]-work.L[731]*work.v[245]-work.L[732]*work.v[249]-work.L[733]*work.v[253]-work.L[734]*work.v[257]-work.L[735]*work.v[261]-work.L[736]*work.v[265]-work.L[737]*work.v[269]-work.L[738]*work.v[273]-work.L[739]*work.v[277]-work.L[740]*work.v[281]-work.L[741]*work.v[285]-work.L[742]*work.v[289]-work.L[743]*work.v[293]-work.L[744]*work.v[297]-work.L[745]*work.v[301]-work.L[746]*work.v[305]-work.L[747]*work.v[309]-work.L[748]*work.v[313]-work.L[749]*work.v[317]-work.L[750]*work.v[319]-work.L[751]*work.v[320];
  work.d[321] = work.v[321];

  if (work.d[321] < 0)
    work.d[321] = settings.kkt_reg;
  else
    work.d[321] += settings.kkt_reg;
  work.d_inv[321] = 1/work.d[321];

  work.L[785] = (work.KKT[1018]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297]-work.L[780]*work.v[301]-work.L[781]*work.v[305]-work.L[782]*work.v[309]-work.L[783]*work.v[313]-work.L[784]*work.v[317])*work.d_inv[321];
  work.L[816] = (work.KKT[1019]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301]-work.L[812]*work.v[305]-work.L[813]*work.v[309]-work.L[814]*work.v[313]-work.L[815]*work.v[317])*work.d_inv[321];
  work.v[322] = 0;
  work.d[322] = work.v[322];

  if (work.d[322] < 0)
    work.d[322] = settings.kkt_reg;
  else
    work.d[322] += settings.kkt_reg;
  work.d_inv[322] = 1/work.d[322];

  work.L[753] = (work.KKT[1020])*work.d_inv[322];
  work.L[755] = (work.KKT[1021])*work.d_inv[322];
  work.v[88] = work.L[752]*work.d[88];
  work.v[322] = work.L[753]*work.d[322];
  work.v[323] = work.KKT[1022]-work.L[752]*work.v[88]-work.L[753]*work.v[322];
  work.d[323] = work.v[323];

  if (work.d[323] > 0)
    work.d[323] = -settings.kkt_reg;
  else
    work.d[323] -= settings.kkt_reg;

  work.d_inv[323] = 1/work.d[323];

  work.L[756] = (-work.L[755]*work.v[322])*work.d_inv[323];
  work.L[786] = (work.KKT[1023])*work.d_inv[323];
  work.v[118] = work.L[754]*work.d[118];
  work.v[322] = work.L[755]*work.d[322];
  work.v[323] = work.L[756]*work.d[323];
  work.v[324] = work.KKT[1024]-work.L[754]*work.v[118]-work.L[755]*work.v[322]-work.L[756]*work.v[323];
  work.d[324] = work.v[324];

  if (work.d[324] > 0)
    work.d[324] = -settings.kkt_reg;
  else
    work.d[324] -= settings.kkt_reg;

  work.d_inv[324] = 1/work.d[324];

  work.L[787] = (work.KKT[1025]-work.L[786]*work.v[323])*work.d_inv[324];
  work.v[206] = work.L[757]*work.d[206];
  work.v[213] = work.L[758]*work.d[213];
  work.v[217] = work.L[759]*work.d[217];
  work.v[221] = work.L[760]*work.d[221];
  work.v[225] = work.L[761]*work.d[225];
  work.v[229] = work.L[762]*work.d[229];
  work.v[233] = work.L[763]*work.d[233];
  work.v[237] = work.L[764]*work.d[237];
  work.v[241] = work.L[765]*work.d[241];
  work.v[245] = work.L[766]*work.d[245];
  work.v[249] = work.L[767]*work.d[249];
  work.v[253] = work.L[768]*work.d[253];
  work.v[257] = work.L[769]*work.d[257];
  work.v[261] = work.L[770]*work.d[261];
  work.v[265] = work.L[771]*work.d[265];
  work.v[269] = work.L[772]*work.d[269];
  work.v[273] = work.L[773]*work.d[273];
  work.v[277] = work.L[774]*work.d[277];
  work.v[281] = work.L[775]*work.d[281];
  work.v[285] = work.L[776]*work.d[285];
  work.v[289] = work.L[777]*work.d[289];
  work.v[293] = work.L[778]*work.d[293];
  work.v[297] = work.L[779]*work.d[297];
  work.v[301] = work.L[780]*work.d[301];
  work.v[305] = work.L[781]*work.d[305];
  work.v[309] = work.L[782]*work.d[309];
  work.v[313] = work.L[783]*work.d[313];
  work.v[317] = work.L[784]*work.d[317];
  work.v[321] = work.L[785]*work.d[321];
  work.v[323] = work.L[786]*work.d[323];
  work.v[324] = work.L[787]*work.d[324];
  work.v[325] = work.KKT[1026]-work.L[757]*work.v[206]-work.L[758]*work.v[213]-work.L[759]*work.v[217]-work.L[760]*work.v[221]-work.L[761]*work.v[225]-work.L[762]*work.v[229]-work.L[763]*work.v[233]-work.L[764]*work.v[237]-work.L[765]*work.v[241]-work.L[766]*work.v[245]-work.L[767]*work.v[249]-work.L[768]*work.v[253]-work.L[769]*work.v[257]-work.L[770]*work.v[261]-work.L[771]*work.v[265]-work.L[772]*work.v[269]-work.L[773]*work.v[273]-work.L[774]*work.v[277]-work.L[775]*work.v[281]-work.L[776]*work.v[285]-work.L[777]*work.v[289]-work.L[778]*work.v[293]-work.L[779]*work.v[297]-work.L[780]*work.v[301]-work.L[781]*work.v[305]-work.L[782]*work.v[309]-work.L[783]*work.v[313]-work.L[784]*work.v[317]-work.L[785]*work.v[321]-work.L[786]*work.v[323]-work.L[787]*work.v[324];
  work.d[325] = work.v[325];

  if (work.d[325] < 0)
    work.d[325] = settings.kkt_reg;
  else
    work.d[325] += settings.kkt_reg;
  work.d_inv[325] = 1/work.d[325];

  work.L[817] = (work.KKT[1027]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301]-work.L[812]*work.v[305]-work.L[813]*work.v[309]-work.L[814]*work.v[313]-work.L[815]*work.v[317]-work.L[816]*work.v[321])*work.d_inv[325];
  work.v[326] = 0;
  work.d[326] = work.v[326];

  if (work.d[326] < 0)
    work.d[326] = settings.kkt_reg;
  else
    work.d[326] += settings.kkt_reg;
  work.d_inv[326] = 1/work.d[326];

  work.L[819] = (work.KKT[1028])*work.d_inv[326];
  work.L[822] = (work.KKT[1029])*work.d_inv[326];
  work.v[209] = work.L[788]*work.d[209];
  work.v[213] = work.L[789]*work.d[213];
  work.v[217] = work.L[790]*work.d[217];
  work.v[221] = work.L[791]*work.d[221];
  work.v[225] = work.L[792]*work.d[225];
  work.v[229] = work.L[793]*work.d[229];
  work.v[233] = work.L[794]*work.d[233];
  work.v[237] = work.L[795]*work.d[237];
  work.v[241] = work.L[796]*work.d[241];
  work.v[245] = work.L[797]*work.d[245];
  work.v[249] = work.L[798]*work.d[249];
  work.v[253] = work.L[799]*work.d[253];
  work.v[257] = work.L[800]*work.d[257];
  work.v[261] = work.L[801]*work.d[261];
  work.v[265] = work.L[802]*work.d[265];
  work.v[269] = work.L[803]*work.d[269];
  work.v[273] = work.L[804]*work.d[273];
  work.v[277] = work.L[805]*work.d[277];
  work.v[281] = work.L[806]*work.d[281];
  work.v[285] = work.L[807]*work.d[285];
  work.v[289] = work.L[808]*work.d[289];
  work.v[293] = work.L[809]*work.d[293];
  work.v[297] = work.L[810]*work.d[297];
  work.v[301] = work.L[811]*work.d[301];
  work.v[305] = work.L[812]*work.d[305];
  work.v[309] = work.L[813]*work.d[309];
  work.v[313] = work.L[814]*work.d[313];
  work.v[317] = work.L[815]*work.d[317];
  work.v[321] = work.L[816]*work.d[321];
  work.v[325] = work.L[817]*work.d[325];
  work.v[327] = work.KKT[1030]-work.L[788]*work.v[209]-work.L[789]*work.v[213]-work.L[790]*work.v[217]-work.L[791]*work.v[221]-work.L[792]*work.v[225]-work.L[793]*work.v[229]-work.L[794]*work.v[233]-work.L[795]*work.v[237]-work.L[796]*work.v[241]-work.L[797]*work.v[245]-work.L[798]*work.v[249]-work.L[799]*work.v[253]-work.L[800]*work.v[257]-work.L[801]*work.v[261]-work.L[802]*work.v[265]-work.L[803]*work.v[269]-work.L[804]*work.v[273]-work.L[805]*work.v[277]-work.L[806]*work.v[281]-work.L[807]*work.v[285]-work.L[808]*work.v[289]-work.L[809]*work.v[293]-work.L[810]*work.v[297]-work.L[811]*work.v[301]-work.L[812]*work.v[305]-work.L[813]*work.v[309]-work.L[814]*work.v[313]-work.L[815]*work.v[317]-work.L[816]*work.v[321]-work.L[817]*work.v[325];
  work.d[327] = work.v[327];

  if (work.d[327] < 0)
    work.d[327] = settings.kkt_reg;
  else
    work.d[327] += settings.kkt_reg;
  work.d_inv[327] = 1/work.d[327];

  work.L[820] = (work.KKT[1031])*work.d_inv[327];
  work.L[823] = (work.KKT[1032])*work.d_inv[327];
  work.v[89] = work.L[818]*work.d[89];
  work.v[326] = work.L[819]*work.d[326];
  work.v[327] = work.L[820]*work.d[327];
  work.v[328] = work.KKT[1033]-work.L[818]*work.v[89]-work.L[819]*work.v[326]-work.L[820]*work.v[327];
  work.d[328] = work.v[328];

  if (work.d[328] > 0)
    work.d[328] = -settings.kkt_reg;
  else
    work.d[328] -= settings.kkt_reg;

  work.d_inv[328] = 1/work.d[328];

  work.L[824] = (-work.L[822]*work.v[326]-work.L[823]*work.v[327])*work.d_inv[328];
  work.v[119] = work.L[821]*work.d[119];
  work.v[326] = work.L[822]*work.d[326];
  work.v[327] = work.L[823]*work.d[327];
  work.v[328] = work.L[824]*work.d[328];
  work.v[329] = work.KKT[1034]-work.L[821]*work.v[119]-work.L[822]*work.v[326]-work.L[823]*work.v[327]-work.L[824]*work.v[328];
  work.d[329] = work.v[329];

  if (work.d[329] > 0)
    work.d[329] = -settings.kkt_reg;
  else
    work.d[329] -= settings.kkt_reg;

  work.d_inv[329] = 1/work.d[329];

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
  temp = work.KKT[396]-1*work.d[213]*1-work.L[155]*work.d[122]*work.L[155]-work.L[156]*work.d[211]*work.L[156]-work.L[157]*work.d[212]*work.L[157];
  residual += temp*temp;

  temp = work.KKT[397]-work.L[164]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[398]-work.L[173]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[399]-work.L[183]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[400]-work.L[194]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[401]-work.L[206]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[402]-work.L[219]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[403]-work.L[233]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[404]-work.L[248]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[405]-work.L[264]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[406]-work.L[281]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[407]-work.L[299]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[408]-work.L[318]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[409]-work.L[338]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[410]-work.L[359]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[411]-work.L[381]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[412]-work.L[404]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[413]-work.L[428]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[414]-work.L[453]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[415]-work.L[479]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[416]-work.L[506]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[417]-work.L[534]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[418]-work.L[563]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[419]-work.L[593]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[420]-work.L[624]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[421]-work.L[656]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[422]-work.L[689]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[423]-work.L[723]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[424]-work.L[758]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[425]-work.L[789]*work.d[213]*1;
  residual += temp*temp;

  temp = work.KKT[432]-work.L[164]*work.d[213]*work.L[164]-1*work.d[217]*1-work.L[163]*work.d[125]*work.L[163]-work.L[165]*work.d[215]*work.L[165]-work.L[166]*work.d[216]*work.L[166];
  residual += temp*temp;

  temp = work.KKT[433]-work.L[173]*work.d[213]*work.L[164]-work.L[174]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[434]-work.L[183]*work.d[213]*work.L[164]-work.L[184]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[435]-work.L[194]*work.d[213]*work.L[164]-work.L[195]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[436]-work.L[206]*work.d[213]*work.L[164]-work.L[207]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[437]-work.L[219]*work.d[213]*work.L[164]-work.L[220]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[438]-work.L[233]*work.d[213]*work.L[164]-work.L[234]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[439]-work.L[248]*work.d[213]*work.L[164]-work.L[249]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[440]-work.L[264]*work.d[213]*work.L[164]-work.L[265]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[441]-work.L[281]*work.d[213]*work.L[164]-work.L[282]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[442]-work.L[299]*work.d[213]*work.L[164]-work.L[300]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[443]-work.L[318]*work.d[213]*work.L[164]-work.L[319]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[444]-work.L[338]*work.d[213]*work.L[164]-work.L[339]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[445]-work.L[359]*work.d[213]*work.L[164]-work.L[360]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[446]-work.L[381]*work.d[213]*work.L[164]-work.L[382]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[447]-work.L[404]*work.d[213]*work.L[164]-work.L[405]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[448]-work.L[428]*work.d[213]*work.L[164]-work.L[429]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[449]-work.L[453]*work.d[213]*work.L[164]-work.L[454]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[450]-work.L[479]*work.d[213]*work.L[164]-work.L[480]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[451]-work.L[506]*work.d[213]*work.L[164]-work.L[507]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[452]-work.L[534]*work.d[213]*work.L[164]-work.L[535]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[453]-work.L[563]*work.d[213]*work.L[164]-work.L[564]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[454]-work.L[593]*work.d[213]*work.L[164]-work.L[594]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[455]-work.L[624]*work.d[213]*work.L[164]-work.L[625]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[456]-work.L[656]*work.d[213]*work.L[164]-work.L[657]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[457]-work.L[689]*work.d[213]*work.L[164]-work.L[690]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[458]-work.L[723]*work.d[213]*work.L[164]-work.L[724]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[459]-work.L[758]*work.d[213]*work.L[164]-work.L[759]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[460]-work.L[789]*work.d[213]*work.L[164]-work.L[790]*work.d[217]*1;
  residual += temp*temp;

  temp = work.KKT[467]-work.L[173]*work.d[213]*work.L[173]-work.L[174]*work.d[217]*work.L[174]-1*work.d[221]*1-work.L[172]*work.d[128]*work.L[172]-work.L[175]*work.d[219]*work.L[175]-work.L[176]*work.d[220]*work.L[176];
  residual += temp*temp;

  temp = work.KKT[468]-work.L[183]*work.d[213]*work.L[173]-work.L[184]*work.d[217]*work.L[174]-work.L[185]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[469]-work.L[194]*work.d[213]*work.L[173]-work.L[195]*work.d[217]*work.L[174]-work.L[196]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[470]-work.L[206]*work.d[213]*work.L[173]-work.L[207]*work.d[217]*work.L[174]-work.L[208]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[471]-work.L[219]*work.d[213]*work.L[173]-work.L[220]*work.d[217]*work.L[174]-work.L[221]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[472]-work.L[233]*work.d[213]*work.L[173]-work.L[234]*work.d[217]*work.L[174]-work.L[235]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[473]-work.L[248]*work.d[213]*work.L[173]-work.L[249]*work.d[217]*work.L[174]-work.L[250]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[474]-work.L[264]*work.d[213]*work.L[173]-work.L[265]*work.d[217]*work.L[174]-work.L[266]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[475]-work.L[281]*work.d[213]*work.L[173]-work.L[282]*work.d[217]*work.L[174]-work.L[283]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[476]-work.L[299]*work.d[213]*work.L[173]-work.L[300]*work.d[217]*work.L[174]-work.L[301]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[477]-work.L[318]*work.d[213]*work.L[173]-work.L[319]*work.d[217]*work.L[174]-work.L[320]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[478]-work.L[338]*work.d[213]*work.L[173]-work.L[339]*work.d[217]*work.L[174]-work.L[340]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[479]-work.L[359]*work.d[213]*work.L[173]-work.L[360]*work.d[217]*work.L[174]-work.L[361]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[480]-work.L[381]*work.d[213]*work.L[173]-work.L[382]*work.d[217]*work.L[174]-work.L[383]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[481]-work.L[404]*work.d[213]*work.L[173]-work.L[405]*work.d[217]*work.L[174]-work.L[406]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[482]-work.L[428]*work.d[213]*work.L[173]-work.L[429]*work.d[217]*work.L[174]-work.L[430]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[483]-work.L[453]*work.d[213]*work.L[173]-work.L[454]*work.d[217]*work.L[174]-work.L[455]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[484]-work.L[479]*work.d[213]*work.L[173]-work.L[480]*work.d[217]*work.L[174]-work.L[481]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[485]-work.L[506]*work.d[213]*work.L[173]-work.L[507]*work.d[217]*work.L[174]-work.L[508]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[486]-work.L[534]*work.d[213]*work.L[173]-work.L[535]*work.d[217]*work.L[174]-work.L[536]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[487]-work.L[563]*work.d[213]*work.L[173]-work.L[564]*work.d[217]*work.L[174]-work.L[565]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[488]-work.L[593]*work.d[213]*work.L[173]-work.L[594]*work.d[217]*work.L[174]-work.L[595]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[489]-work.L[624]*work.d[213]*work.L[173]-work.L[625]*work.d[217]*work.L[174]-work.L[626]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[490]-work.L[656]*work.d[213]*work.L[173]-work.L[657]*work.d[217]*work.L[174]-work.L[658]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[491]-work.L[689]*work.d[213]*work.L[173]-work.L[690]*work.d[217]*work.L[174]-work.L[691]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[492]-work.L[723]*work.d[213]*work.L[173]-work.L[724]*work.d[217]*work.L[174]-work.L[725]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[493]-work.L[758]*work.d[213]*work.L[173]-work.L[759]*work.d[217]*work.L[174]-work.L[760]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[494]-work.L[789]*work.d[213]*work.L[173]-work.L[790]*work.d[217]*work.L[174]-work.L[791]*work.d[221]*1;
  residual += temp*temp;

  temp = work.KKT[501]-work.L[183]*work.d[213]*work.L[183]-work.L[184]*work.d[217]*work.L[184]-work.L[185]*work.d[221]*work.L[185]-1*work.d[225]*1-work.L[182]*work.d[131]*work.L[182]-work.L[186]*work.d[223]*work.L[186]-work.L[187]*work.d[224]*work.L[187];
  residual += temp*temp;

  temp = work.KKT[502]-work.L[194]*work.d[213]*work.L[183]-work.L[195]*work.d[217]*work.L[184]-work.L[196]*work.d[221]*work.L[185]-work.L[197]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[503]-work.L[206]*work.d[213]*work.L[183]-work.L[207]*work.d[217]*work.L[184]-work.L[208]*work.d[221]*work.L[185]-work.L[209]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[504]-work.L[219]*work.d[213]*work.L[183]-work.L[220]*work.d[217]*work.L[184]-work.L[221]*work.d[221]*work.L[185]-work.L[222]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[505]-work.L[233]*work.d[213]*work.L[183]-work.L[234]*work.d[217]*work.L[184]-work.L[235]*work.d[221]*work.L[185]-work.L[236]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[506]-work.L[248]*work.d[213]*work.L[183]-work.L[249]*work.d[217]*work.L[184]-work.L[250]*work.d[221]*work.L[185]-work.L[251]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[507]-work.L[264]*work.d[213]*work.L[183]-work.L[265]*work.d[217]*work.L[184]-work.L[266]*work.d[221]*work.L[185]-work.L[267]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[508]-work.L[281]*work.d[213]*work.L[183]-work.L[282]*work.d[217]*work.L[184]-work.L[283]*work.d[221]*work.L[185]-work.L[284]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[509]-work.L[299]*work.d[213]*work.L[183]-work.L[300]*work.d[217]*work.L[184]-work.L[301]*work.d[221]*work.L[185]-work.L[302]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[510]-work.L[318]*work.d[213]*work.L[183]-work.L[319]*work.d[217]*work.L[184]-work.L[320]*work.d[221]*work.L[185]-work.L[321]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[511]-work.L[338]*work.d[213]*work.L[183]-work.L[339]*work.d[217]*work.L[184]-work.L[340]*work.d[221]*work.L[185]-work.L[341]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[512]-work.L[359]*work.d[213]*work.L[183]-work.L[360]*work.d[217]*work.L[184]-work.L[361]*work.d[221]*work.L[185]-work.L[362]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[513]-work.L[381]*work.d[213]*work.L[183]-work.L[382]*work.d[217]*work.L[184]-work.L[383]*work.d[221]*work.L[185]-work.L[384]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[514]-work.L[404]*work.d[213]*work.L[183]-work.L[405]*work.d[217]*work.L[184]-work.L[406]*work.d[221]*work.L[185]-work.L[407]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[515]-work.L[428]*work.d[213]*work.L[183]-work.L[429]*work.d[217]*work.L[184]-work.L[430]*work.d[221]*work.L[185]-work.L[431]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[516]-work.L[453]*work.d[213]*work.L[183]-work.L[454]*work.d[217]*work.L[184]-work.L[455]*work.d[221]*work.L[185]-work.L[456]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[517]-work.L[479]*work.d[213]*work.L[183]-work.L[480]*work.d[217]*work.L[184]-work.L[481]*work.d[221]*work.L[185]-work.L[482]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[518]-work.L[506]*work.d[213]*work.L[183]-work.L[507]*work.d[217]*work.L[184]-work.L[508]*work.d[221]*work.L[185]-work.L[509]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[519]-work.L[534]*work.d[213]*work.L[183]-work.L[535]*work.d[217]*work.L[184]-work.L[536]*work.d[221]*work.L[185]-work.L[537]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[520]-work.L[563]*work.d[213]*work.L[183]-work.L[564]*work.d[217]*work.L[184]-work.L[565]*work.d[221]*work.L[185]-work.L[566]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[521]-work.L[593]*work.d[213]*work.L[183]-work.L[594]*work.d[217]*work.L[184]-work.L[595]*work.d[221]*work.L[185]-work.L[596]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[522]-work.L[624]*work.d[213]*work.L[183]-work.L[625]*work.d[217]*work.L[184]-work.L[626]*work.d[221]*work.L[185]-work.L[627]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[523]-work.L[656]*work.d[213]*work.L[183]-work.L[657]*work.d[217]*work.L[184]-work.L[658]*work.d[221]*work.L[185]-work.L[659]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[524]-work.L[689]*work.d[213]*work.L[183]-work.L[690]*work.d[217]*work.L[184]-work.L[691]*work.d[221]*work.L[185]-work.L[692]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[525]-work.L[723]*work.d[213]*work.L[183]-work.L[724]*work.d[217]*work.L[184]-work.L[725]*work.d[221]*work.L[185]-work.L[726]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[526]-work.L[758]*work.d[213]*work.L[183]-work.L[759]*work.d[217]*work.L[184]-work.L[760]*work.d[221]*work.L[185]-work.L[761]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[527]-work.L[789]*work.d[213]*work.L[183]-work.L[790]*work.d[217]*work.L[184]-work.L[791]*work.d[221]*work.L[185]-work.L[792]*work.d[225]*1;
  residual += temp*temp;

  temp = work.KKT[534]-work.L[194]*work.d[213]*work.L[194]-work.L[195]*work.d[217]*work.L[195]-work.L[196]*work.d[221]*work.L[196]-work.L[197]*work.d[225]*work.L[197]-1*work.d[229]*1-work.L[193]*work.d[134]*work.L[193]-work.L[198]*work.d[227]*work.L[198]-work.L[199]*work.d[228]*work.L[199];
  residual += temp*temp;

  temp = work.KKT[535]-work.L[206]*work.d[213]*work.L[194]-work.L[207]*work.d[217]*work.L[195]-work.L[208]*work.d[221]*work.L[196]-work.L[209]*work.d[225]*work.L[197]-work.L[210]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[536]-work.L[219]*work.d[213]*work.L[194]-work.L[220]*work.d[217]*work.L[195]-work.L[221]*work.d[221]*work.L[196]-work.L[222]*work.d[225]*work.L[197]-work.L[223]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[537]-work.L[233]*work.d[213]*work.L[194]-work.L[234]*work.d[217]*work.L[195]-work.L[235]*work.d[221]*work.L[196]-work.L[236]*work.d[225]*work.L[197]-work.L[237]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[538]-work.L[248]*work.d[213]*work.L[194]-work.L[249]*work.d[217]*work.L[195]-work.L[250]*work.d[221]*work.L[196]-work.L[251]*work.d[225]*work.L[197]-work.L[252]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[539]-work.L[264]*work.d[213]*work.L[194]-work.L[265]*work.d[217]*work.L[195]-work.L[266]*work.d[221]*work.L[196]-work.L[267]*work.d[225]*work.L[197]-work.L[268]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[540]-work.L[281]*work.d[213]*work.L[194]-work.L[282]*work.d[217]*work.L[195]-work.L[283]*work.d[221]*work.L[196]-work.L[284]*work.d[225]*work.L[197]-work.L[285]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[541]-work.L[299]*work.d[213]*work.L[194]-work.L[300]*work.d[217]*work.L[195]-work.L[301]*work.d[221]*work.L[196]-work.L[302]*work.d[225]*work.L[197]-work.L[303]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[542]-work.L[318]*work.d[213]*work.L[194]-work.L[319]*work.d[217]*work.L[195]-work.L[320]*work.d[221]*work.L[196]-work.L[321]*work.d[225]*work.L[197]-work.L[322]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[543]-work.L[338]*work.d[213]*work.L[194]-work.L[339]*work.d[217]*work.L[195]-work.L[340]*work.d[221]*work.L[196]-work.L[341]*work.d[225]*work.L[197]-work.L[342]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[544]-work.L[359]*work.d[213]*work.L[194]-work.L[360]*work.d[217]*work.L[195]-work.L[361]*work.d[221]*work.L[196]-work.L[362]*work.d[225]*work.L[197]-work.L[363]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[545]-work.L[381]*work.d[213]*work.L[194]-work.L[382]*work.d[217]*work.L[195]-work.L[383]*work.d[221]*work.L[196]-work.L[384]*work.d[225]*work.L[197]-work.L[385]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[546]-work.L[404]*work.d[213]*work.L[194]-work.L[405]*work.d[217]*work.L[195]-work.L[406]*work.d[221]*work.L[196]-work.L[407]*work.d[225]*work.L[197]-work.L[408]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[547]-work.L[428]*work.d[213]*work.L[194]-work.L[429]*work.d[217]*work.L[195]-work.L[430]*work.d[221]*work.L[196]-work.L[431]*work.d[225]*work.L[197]-work.L[432]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[548]-work.L[453]*work.d[213]*work.L[194]-work.L[454]*work.d[217]*work.L[195]-work.L[455]*work.d[221]*work.L[196]-work.L[456]*work.d[225]*work.L[197]-work.L[457]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[549]-work.L[479]*work.d[213]*work.L[194]-work.L[480]*work.d[217]*work.L[195]-work.L[481]*work.d[221]*work.L[196]-work.L[482]*work.d[225]*work.L[197]-work.L[483]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[550]-work.L[506]*work.d[213]*work.L[194]-work.L[507]*work.d[217]*work.L[195]-work.L[508]*work.d[221]*work.L[196]-work.L[509]*work.d[225]*work.L[197]-work.L[510]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[551]-work.L[534]*work.d[213]*work.L[194]-work.L[535]*work.d[217]*work.L[195]-work.L[536]*work.d[221]*work.L[196]-work.L[537]*work.d[225]*work.L[197]-work.L[538]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[552]-work.L[563]*work.d[213]*work.L[194]-work.L[564]*work.d[217]*work.L[195]-work.L[565]*work.d[221]*work.L[196]-work.L[566]*work.d[225]*work.L[197]-work.L[567]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[553]-work.L[593]*work.d[213]*work.L[194]-work.L[594]*work.d[217]*work.L[195]-work.L[595]*work.d[221]*work.L[196]-work.L[596]*work.d[225]*work.L[197]-work.L[597]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[554]-work.L[624]*work.d[213]*work.L[194]-work.L[625]*work.d[217]*work.L[195]-work.L[626]*work.d[221]*work.L[196]-work.L[627]*work.d[225]*work.L[197]-work.L[628]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[555]-work.L[656]*work.d[213]*work.L[194]-work.L[657]*work.d[217]*work.L[195]-work.L[658]*work.d[221]*work.L[196]-work.L[659]*work.d[225]*work.L[197]-work.L[660]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[556]-work.L[689]*work.d[213]*work.L[194]-work.L[690]*work.d[217]*work.L[195]-work.L[691]*work.d[221]*work.L[196]-work.L[692]*work.d[225]*work.L[197]-work.L[693]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[557]-work.L[723]*work.d[213]*work.L[194]-work.L[724]*work.d[217]*work.L[195]-work.L[725]*work.d[221]*work.L[196]-work.L[726]*work.d[225]*work.L[197]-work.L[727]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[558]-work.L[758]*work.d[213]*work.L[194]-work.L[759]*work.d[217]*work.L[195]-work.L[760]*work.d[221]*work.L[196]-work.L[761]*work.d[225]*work.L[197]-work.L[762]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[559]-work.L[789]*work.d[213]*work.L[194]-work.L[790]*work.d[217]*work.L[195]-work.L[791]*work.d[221]*work.L[196]-work.L[792]*work.d[225]*work.L[197]-work.L[793]*work.d[229]*1;
  residual += temp*temp;

  temp = work.KKT[566]-work.L[206]*work.d[213]*work.L[206]-work.L[207]*work.d[217]*work.L[207]-work.L[208]*work.d[221]*work.L[208]-work.L[209]*work.d[225]*work.L[209]-work.L[210]*work.d[229]*work.L[210]-1*work.d[233]*1-work.L[205]*work.d[137]*work.L[205]-work.L[211]*work.d[231]*work.L[211]-work.L[212]*work.d[232]*work.L[212];
  residual += temp*temp;

  temp = work.KKT[567]-work.L[219]*work.d[213]*work.L[206]-work.L[220]*work.d[217]*work.L[207]-work.L[221]*work.d[221]*work.L[208]-work.L[222]*work.d[225]*work.L[209]-work.L[223]*work.d[229]*work.L[210]-work.L[224]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[568]-work.L[233]*work.d[213]*work.L[206]-work.L[234]*work.d[217]*work.L[207]-work.L[235]*work.d[221]*work.L[208]-work.L[236]*work.d[225]*work.L[209]-work.L[237]*work.d[229]*work.L[210]-work.L[238]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[569]-work.L[248]*work.d[213]*work.L[206]-work.L[249]*work.d[217]*work.L[207]-work.L[250]*work.d[221]*work.L[208]-work.L[251]*work.d[225]*work.L[209]-work.L[252]*work.d[229]*work.L[210]-work.L[253]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[570]-work.L[264]*work.d[213]*work.L[206]-work.L[265]*work.d[217]*work.L[207]-work.L[266]*work.d[221]*work.L[208]-work.L[267]*work.d[225]*work.L[209]-work.L[268]*work.d[229]*work.L[210]-work.L[269]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[571]-work.L[281]*work.d[213]*work.L[206]-work.L[282]*work.d[217]*work.L[207]-work.L[283]*work.d[221]*work.L[208]-work.L[284]*work.d[225]*work.L[209]-work.L[285]*work.d[229]*work.L[210]-work.L[286]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[572]-work.L[299]*work.d[213]*work.L[206]-work.L[300]*work.d[217]*work.L[207]-work.L[301]*work.d[221]*work.L[208]-work.L[302]*work.d[225]*work.L[209]-work.L[303]*work.d[229]*work.L[210]-work.L[304]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[573]-work.L[318]*work.d[213]*work.L[206]-work.L[319]*work.d[217]*work.L[207]-work.L[320]*work.d[221]*work.L[208]-work.L[321]*work.d[225]*work.L[209]-work.L[322]*work.d[229]*work.L[210]-work.L[323]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[574]-work.L[338]*work.d[213]*work.L[206]-work.L[339]*work.d[217]*work.L[207]-work.L[340]*work.d[221]*work.L[208]-work.L[341]*work.d[225]*work.L[209]-work.L[342]*work.d[229]*work.L[210]-work.L[343]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[575]-work.L[359]*work.d[213]*work.L[206]-work.L[360]*work.d[217]*work.L[207]-work.L[361]*work.d[221]*work.L[208]-work.L[362]*work.d[225]*work.L[209]-work.L[363]*work.d[229]*work.L[210]-work.L[364]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[576]-work.L[381]*work.d[213]*work.L[206]-work.L[382]*work.d[217]*work.L[207]-work.L[383]*work.d[221]*work.L[208]-work.L[384]*work.d[225]*work.L[209]-work.L[385]*work.d[229]*work.L[210]-work.L[386]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[577]-work.L[404]*work.d[213]*work.L[206]-work.L[405]*work.d[217]*work.L[207]-work.L[406]*work.d[221]*work.L[208]-work.L[407]*work.d[225]*work.L[209]-work.L[408]*work.d[229]*work.L[210]-work.L[409]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[578]-work.L[428]*work.d[213]*work.L[206]-work.L[429]*work.d[217]*work.L[207]-work.L[430]*work.d[221]*work.L[208]-work.L[431]*work.d[225]*work.L[209]-work.L[432]*work.d[229]*work.L[210]-work.L[433]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[579]-work.L[453]*work.d[213]*work.L[206]-work.L[454]*work.d[217]*work.L[207]-work.L[455]*work.d[221]*work.L[208]-work.L[456]*work.d[225]*work.L[209]-work.L[457]*work.d[229]*work.L[210]-work.L[458]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[580]-work.L[479]*work.d[213]*work.L[206]-work.L[480]*work.d[217]*work.L[207]-work.L[481]*work.d[221]*work.L[208]-work.L[482]*work.d[225]*work.L[209]-work.L[483]*work.d[229]*work.L[210]-work.L[484]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[581]-work.L[506]*work.d[213]*work.L[206]-work.L[507]*work.d[217]*work.L[207]-work.L[508]*work.d[221]*work.L[208]-work.L[509]*work.d[225]*work.L[209]-work.L[510]*work.d[229]*work.L[210]-work.L[511]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[582]-work.L[534]*work.d[213]*work.L[206]-work.L[535]*work.d[217]*work.L[207]-work.L[536]*work.d[221]*work.L[208]-work.L[537]*work.d[225]*work.L[209]-work.L[538]*work.d[229]*work.L[210]-work.L[539]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[583]-work.L[563]*work.d[213]*work.L[206]-work.L[564]*work.d[217]*work.L[207]-work.L[565]*work.d[221]*work.L[208]-work.L[566]*work.d[225]*work.L[209]-work.L[567]*work.d[229]*work.L[210]-work.L[568]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[584]-work.L[593]*work.d[213]*work.L[206]-work.L[594]*work.d[217]*work.L[207]-work.L[595]*work.d[221]*work.L[208]-work.L[596]*work.d[225]*work.L[209]-work.L[597]*work.d[229]*work.L[210]-work.L[598]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[585]-work.L[624]*work.d[213]*work.L[206]-work.L[625]*work.d[217]*work.L[207]-work.L[626]*work.d[221]*work.L[208]-work.L[627]*work.d[225]*work.L[209]-work.L[628]*work.d[229]*work.L[210]-work.L[629]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[586]-work.L[656]*work.d[213]*work.L[206]-work.L[657]*work.d[217]*work.L[207]-work.L[658]*work.d[221]*work.L[208]-work.L[659]*work.d[225]*work.L[209]-work.L[660]*work.d[229]*work.L[210]-work.L[661]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[587]-work.L[689]*work.d[213]*work.L[206]-work.L[690]*work.d[217]*work.L[207]-work.L[691]*work.d[221]*work.L[208]-work.L[692]*work.d[225]*work.L[209]-work.L[693]*work.d[229]*work.L[210]-work.L[694]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[588]-work.L[723]*work.d[213]*work.L[206]-work.L[724]*work.d[217]*work.L[207]-work.L[725]*work.d[221]*work.L[208]-work.L[726]*work.d[225]*work.L[209]-work.L[727]*work.d[229]*work.L[210]-work.L[728]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[589]-work.L[758]*work.d[213]*work.L[206]-work.L[759]*work.d[217]*work.L[207]-work.L[760]*work.d[221]*work.L[208]-work.L[761]*work.d[225]*work.L[209]-work.L[762]*work.d[229]*work.L[210]-work.L[763]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[590]-work.L[789]*work.d[213]*work.L[206]-work.L[790]*work.d[217]*work.L[207]-work.L[791]*work.d[221]*work.L[208]-work.L[792]*work.d[225]*work.L[209]-work.L[793]*work.d[229]*work.L[210]-work.L[794]*work.d[233]*1;
  residual += temp*temp;

  temp = work.KKT[597]-work.L[219]*work.d[213]*work.L[219]-work.L[220]*work.d[217]*work.L[220]-work.L[221]*work.d[221]*work.L[221]-work.L[222]*work.d[225]*work.L[222]-work.L[223]*work.d[229]*work.L[223]-work.L[224]*work.d[233]*work.L[224]-1*work.d[237]*1-work.L[218]*work.d[140]*work.L[218]-work.L[225]*work.d[235]*work.L[225]-work.L[226]*work.d[236]*work.L[226];
  residual += temp*temp;

  temp = work.KKT[598]-work.L[233]*work.d[213]*work.L[219]-work.L[234]*work.d[217]*work.L[220]-work.L[235]*work.d[221]*work.L[221]-work.L[236]*work.d[225]*work.L[222]-work.L[237]*work.d[229]*work.L[223]-work.L[238]*work.d[233]*work.L[224]-work.L[239]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[599]-work.L[248]*work.d[213]*work.L[219]-work.L[249]*work.d[217]*work.L[220]-work.L[250]*work.d[221]*work.L[221]-work.L[251]*work.d[225]*work.L[222]-work.L[252]*work.d[229]*work.L[223]-work.L[253]*work.d[233]*work.L[224]-work.L[254]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[600]-work.L[264]*work.d[213]*work.L[219]-work.L[265]*work.d[217]*work.L[220]-work.L[266]*work.d[221]*work.L[221]-work.L[267]*work.d[225]*work.L[222]-work.L[268]*work.d[229]*work.L[223]-work.L[269]*work.d[233]*work.L[224]-work.L[270]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[601]-work.L[281]*work.d[213]*work.L[219]-work.L[282]*work.d[217]*work.L[220]-work.L[283]*work.d[221]*work.L[221]-work.L[284]*work.d[225]*work.L[222]-work.L[285]*work.d[229]*work.L[223]-work.L[286]*work.d[233]*work.L[224]-work.L[287]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[602]-work.L[299]*work.d[213]*work.L[219]-work.L[300]*work.d[217]*work.L[220]-work.L[301]*work.d[221]*work.L[221]-work.L[302]*work.d[225]*work.L[222]-work.L[303]*work.d[229]*work.L[223]-work.L[304]*work.d[233]*work.L[224]-work.L[305]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[603]-work.L[318]*work.d[213]*work.L[219]-work.L[319]*work.d[217]*work.L[220]-work.L[320]*work.d[221]*work.L[221]-work.L[321]*work.d[225]*work.L[222]-work.L[322]*work.d[229]*work.L[223]-work.L[323]*work.d[233]*work.L[224]-work.L[324]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[604]-work.L[338]*work.d[213]*work.L[219]-work.L[339]*work.d[217]*work.L[220]-work.L[340]*work.d[221]*work.L[221]-work.L[341]*work.d[225]*work.L[222]-work.L[342]*work.d[229]*work.L[223]-work.L[343]*work.d[233]*work.L[224]-work.L[344]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[605]-work.L[359]*work.d[213]*work.L[219]-work.L[360]*work.d[217]*work.L[220]-work.L[361]*work.d[221]*work.L[221]-work.L[362]*work.d[225]*work.L[222]-work.L[363]*work.d[229]*work.L[223]-work.L[364]*work.d[233]*work.L[224]-work.L[365]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[606]-work.L[381]*work.d[213]*work.L[219]-work.L[382]*work.d[217]*work.L[220]-work.L[383]*work.d[221]*work.L[221]-work.L[384]*work.d[225]*work.L[222]-work.L[385]*work.d[229]*work.L[223]-work.L[386]*work.d[233]*work.L[224]-work.L[387]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[607]-work.L[404]*work.d[213]*work.L[219]-work.L[405]*work.d[217]*work.L[220]-work.L[406]*work.d[221]*work.L[221]-work.L[407]*work.d[225]*work.L[222]-work.L[408]*work.d[229]*work.L[223]-work.L[409]*work.d[233]*work.L[224]-work.L[410]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[608]-work.L[428]*work.d[213]*work.L[219]-work.L[429]*work.d[217]*work.L[220]-work.L[430]*work.d[221]*work.L[221]-work.L[431]*work.d[225]*work.L[222]-work.L[432]*work.d[229]*work.L[223]-work.L[433]*work.d[233]*work.L[224]-work.L[434]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[609]-work.L[453]*work.d[213]*work.L[219]-work.L[454]*work.d[217]*work.L[220]-work.L[455]*work.d[221]*work.L[221]-work.L[456]*work.d[225]*work.L[222]-work.L[457]*work.d[229]*work.L[223]-work.L[458]*work.d[233]*work.L[224]-work.L[459]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[610]-work.L[479]*work.d[213]*work.L[219]-work.L[480]*work.d[217]*work.L[220]-work.L[481]*work.d[221]*work.L[221]-work.L[482]*work.d[225]*work.L[222]-work.L[483]*work.d[229]*work.L[223]-work.L[484]*work.d[233]*work.L[224]-work.L[485]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[611]-work.L[506]*work.d[213]*work.L[219]-work.L[507]*work.d[217]*work.L[220]-work.L[508]*work.d[221]*work.L[221]-work.L[509]*work.d[225]*work.L[222]-work.L[510]*work.d[229]*work.L[223]-work.L[511]*work.d[233]*work.L[224]-work.L[512]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[612]-work.L[534]*work.d[213]*work.L[219]-work.L[535]*work.d[217]*work.L[220]-work.L[536]*work.d[221]*work.L[221]-work.L[537]*work.d[225]*work.L[222]-work.L[538]*work.d[229]*work.L[223]-work.L[539]*work.d[233]*work.L[224]-work.L[540]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[613]-work.L[563]*work.d[213]*work.L[219]-work.L[564]*work.d[217]*work.L[220]-work.L[565]*work.d[221]*work.L[221]-work.L[566]*work.d[225]*work.L[222]-work.L[567]*work.d[229]*work.L[223]-work.L[568]*work.d[233]*work.L[224]-work.L[569]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[614]-work.L[593]*work.d[213]*work.L[219]-work.L[594]*work.d[217]*work.L[220]-work.L[595]*work.d[221]*work.L[221]-work.L[596]*work.d[225]*work.L[222]-work.L[597]*work.d[229]*work.L[223]-work.L[598]*work.d[233]*work.L[224]-work.L[599]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[615]-work.L[624]*work.d[213]*work.L[219]-work.L[625]*work.d[217]*work.L[220]-work.L[626]*work.d[221]*work.L[221]-work.L[627]*work.d[225]*work.L[222]-work.L[628]*work.d[229]*work.L[223]-work.L[629]*work.d[233]*work.L[224]-work.L[630]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[616]-work.L[656]*work.d[213]*work.L[219]-work.L[657]*work.d[217]*work.L[220]-work.L[658]*work.d[221]*work.L[221]-work.L[659]*work.d[225]*work.L[222]-work.L[660]*work.d[229]*work.L[223]-work.L[661]*work.d[233]*work.L[224]-work.L[662]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[617]-work.L[689]*work.d[213]*work.L[219]-work.L[690]*work.d[217]*work.L[220]-work.L[691]*work.d[221]*work.L[221]-work.L[692]*work.d[225]*work.L[222]-work.L[693]*work.d[229]*work.L[223]-work.L[694]*work.d[233]*work.L[224]-work.L[695]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[618]-work.L[723]*work.d[213]*work.L[219]-work.L[724]*work.d[217]*work.L[220]-work.L[725]*work.d[221]*work.L[221]-work.L[726]*work.d[225]*work.L[222]-work.L[727]*work.d[229]*work.L[223]-work.L[728]*work.d[233]*work.L[224]-work.L[729]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[619]-work.L[758]*work.d[213]*work.L[219]-work.L[759]*work.d[217]*work.L[220]-work.L[760]*work.d[221]*work.L[221]-work.L[761]*work.d[225]*work.L[222]-work.L[762]*work.d[229]*work.L[223]-work.L[763]*work.d[233]*work.L[224]-work.L[764]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[620]-work.L[789]*work.d[213]*work.L[219]-work.L[790]*work.d[217]*work.L[220]-work.L[791]*work.d[221]*work.L[221]-work.L[792]*work.d[225]*work.L[222]-work.L[793]*work.d[229]*work.L[223]-work.L[794]*work.d[233]*work.L[224]-work.L[795]*work.d[237]*1;
  residual += temp*temp;

  temp = work.KKT[627]-work.L[233]*work.d[213]*work.L[233]-work.L[234]*work.d[217]*work.L[234]-work.L[235]*work.d[221]*work.L[235]-work.L[236]*work.d[225]*work.L[236]-work.L[237]*work.d[229]*work.L[237]-work.L[238]*work.d[233]*work.L[238]-work.L[239]*work.d[237]*work.L[239]-1*work.d[241]*1-work.L[232]*work.d[143]*work.L[232]-work.L[240]*work.d[239]*work.L[240]-work.L[241]*work.d[240]*work.L[241];
  residual += temp*temp;

  temp = work.KKT[628]-work.L[248]*work.d[213]*work.L[233]-work.L[249]*work.d[217]*work.L[234]-work.L[250]*work.d[221]*work.L[235]-work.L[251]*work.d[225]*work.L[236]-work.L[252]*work.d[229]*work.L[237]-work.L[253]*work.d[233]*work.L[238]-work.L[254]*work.d[237]*work.L[239]-work.L[255]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[629]-work.L[264]*work.d[213]*work.L[233]-work.L[265]*work.d[217]*work.L[234]-work.L[266]*work.d[221]*work.L[235]-work.L[267]*work.d[225]*work.L[236]-work.L[268]*work.d[229]*work.L[237]-work.L[269]*work.d[233]*work.L[238]-work.L[270]*work.d[237]*work.L[239]-work.L[271]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[630]-work.L[281]*work.d[213]*work.L[233]-work.L[282]*work.d[217]*work.L[234]-work.L[283]*work.d[221]*work.L[235]-work.L[284]*work.d[225]*work.L[236]-work.L[285]*work.d[229]*work.L[237]-work.L[286]*work.d[233]*work.L[238]-work.L[287]*work.d[237]*work.L[239]-work.L[288]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[631]-work.L[299]*work.d[213]*work.L[233]-work.L[300]*work.d[217]*work.L[234]-work.L[301]*work.d[221]*work.L[235]-work.L[302]*work.d[225]*work.L[236]-work.L[303]*work.d[229]*work.L[237]-work.L[304]*work.d[233]*work.L[238]-work.L[305]*work.d[237]*work.L[239]-work.L[306]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[632]-work.L[318]*work.d[213]*work.L[233]-work.L[319]*work.d[217]*work.L[234]-work.L[320]*work.d[221]*work.L[235]-work.L[321]*work.d[225]*work.L[236]-work.L[322]*work.d[229]*work.L[237]-work.L[323]*work.d[233]*work.L[238]-work.L[324]*work.d[237]*work.L[239]-work.L[325]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[633]-work.L[338]*work.d[213]*work.L[233]-work.L[339]*work.d[217]*work.L[234]-work.L[340]*work.d[221]*work.L[235]-work.L[341]*work.d[225]*work.L[236]-work.L[342]*work.d[229]*work.L[237]-work.L[343]*work.d[233]*work.L[238]-work.L[344]*work.d[237]*work.L[239]-work.L[345]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[634]-work.L[359]*work.d[213]*work.L[233]-work.L[360]*work.d[217]*work.L[234]-work.L[361]*work.d[221]*work.L[235]-work.L[362]*work.d[225]*work.L[236]-work.L[363]*work.d[229]*work.L[237]-work.L[364]*work.d[233]*work.L[238]-work.L[365]*work.d[237]*work.L[239]-work.L[366]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[635]-work.L[381]*work.d[213]*work.L[233]-work.L[382]*work.d[217]*work.L[234]-work.L[383]*work.d[221]*work.L[235]-work.L[384]*work.d[225]*work.L[236]-work.L[385]*work.d[229]*work.L[237]-work.L[386]*work.d[233]*work.L[238]-work.L[387]*work.d[237]*work.L[239]-work.L[388]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[636]-work.L[404]*work.d[213]*work.L[233]-work.L[405]*work.d[217]*work.L[234]-work.L[406]*work.d[221]*work.L[235]-work.L[407]*work.d[225]*work.L[236]-work.L[408]*work.d[229]*work.L[237]-work.L[409]*work.d[233]*work.L[238]-work.L[410]*work.d[237]*work.L[239]-work.L[411]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[637]-work.L[428]*work.d[213]*work.L[233]-work.L[429]*work.d[217]*work.L[234]-work.L[430]*work.d[221]*work.L[235]-work.L[431]*work.d[225]*work.L[236]-work.L[432]*work.d[229]*work.L[237]-work.L[433]*work.d[233]*work.L[238]-work.L[434]*work.d[237]*work.L[239]-work.L[435]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[638]-work.L[453]*work.d[213]*work.L[233]-work.L[454]*work.d[217]*work.L[234]-work.L[455]*work.d[221]*work.L[235]-work.L[456]*work.d[225]*work.L[236]-work.L[457]*work.d[229]*work.L[237]-work.L[458]*work.d[233]*work.L[238]-work.L[459]*work.d[237]*work.L[239]-work.L[460]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[639]-work.L[479]*work.d[213]*work.L[233]-work.L[480]*work.d[217]*work.L[234]-work.L[481]*work.d[221]*work.L[235]-work.L[482]*work.d[225]*work.L[236]-work.L[483]*work.d[229]*work.L[237]-work.L[484]*work.d[233]*work.L[238]-work.L[485]*work.d[237]*work.L[239]-work.L[486]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[640]-work.L[506]*work.d[213]*work.L[233]-work.L[507]*work.d[217]*work.L[234]-work.L[508]*work.d[221]*work.L[235]-work.L[509]*work.d[225]*work.L[236]-work.L[510]*work.d[229]*work.L[237]-work.L[511]*work.d[233]*work.L[238]-work.L[512]*work.d[237]*work.L[239]-work.L[513]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[641]-work.L[534]*work.d[213]*work.L[233]-work.L[535]*work.d[217]*work.L[234]-work.L[536]*work.d[221]*work.L[235]-work.L[537]*work.d[225]*work.L[236]-work.L[538]*work.d[229]*work.L[237]-work.L[539]*work.d[233]*work.L[238]-work.L[540]*work.d[237]*work.L[239]-work.L[541]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[642]-work.L[563]*work.d[213]*work.L[233]-work.L[564]*work.d[217]*work.L[234]-work.L[565]*work.d[221]*work.L[235]-work.L[566]*work.d[225]*work.L[236]-work.L[567]*work.d[229]*work.L[237]-work.L[568]*work.d[233]*work.L[238]-work.L[569]*work.d[237]*work.L[239]-work.L[570]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[643]-work.L[593]*work.d[213]*work.L[233]-work.L[594]*work.d[217]*work.L[234]-work.L[595]*work.d[221]*work.L[235]-work.L[596]*work.d[225]*work.L[236]-work.L[597]*work.d[229]*work.L[237]-work.L[598]*work.d[233]*work.L[238]-work.L[599]*work.d[237]*work.L[239]-work.L[600]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[644]-work.L[624]*work.d[213]*work.L[233]-work.L[625]*work.d[217]*work.L[234]-work.L[626]*work.d[221]*work.L[235]-work.L[627]*work.d[225]*work.L[236]-work.L[628]*work.d[229]*work.L[237]-work.L[629]*work.d[233]*work.L[238]-work.L[630]*work.d[237]*work.L[239]-work.L[631]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[645]-work.L[656]*work.d[213]*work.L[233]-work.L[657]*work.d[217]*work.L[234]-work.L[658]*work.d[221]*work.L[235]-work.L[659]*work.d[225]*work.L[236]-work.L[660]*work.d[229]*work.L[237]-work.L[661]*work.d[233]*work.L[238]-work.L[662]*work.d[237]*work.L[239]-work.L[663]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[646]-work.L[689]*work.d[213]*work.L[233]-work.L[690]*work.d[217]*work.L[234]-work.L[691]*work.d[221]*work.L[235]-work.L[692]*work.d[225]*work.L[236]-work.L[693]*work.d[229]*work.L[237]-work.L[694]*work.d[233]*work.L[238]-work.L[695]*work.d[237]*work.L[239]-work.L[696]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[647]-work.L[723]*work.d[213]*work.L[233]-work.L[724]*work.d[217]*work.L[234]-work.L[725]*work.d[221]*work.L[235]-work.L[726]*work.d[225]*work.L[236]-work.L[727]*work.d[229]*work.L[237]-work.L[728]*work.d[233]*work.L[238]-work.L[729]*work.d[237]*work.L[239]-work.L[730]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[648]-work.L[758]*work.d[213]*work.L[233]-work.L[759]*work.d[217]*work.L[234]-work.L[760]*work.d[221]*work.L[235]-work.L[761]*work.d[225]*work.L[236]-work.L[762]*work.d[229]*work.L[237]-work.L[763]*work.d[233]*work.L[238]-work.L[764]*work.d[237]*work.L[239]-work.L[765]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[649]-work.L[789]*work.d[213]*work.L[233]-work.L[790]*work.d[217]*work.L[234]-work.L[791]*work.d[221]*work.L[235]-work.L[792]*work.d[225]*work.L[236]-work.L[793]*work.d[229]*work.L[237]-work.L[794]*work.d[233]*work.L[238]-work.L[795]*work.d[237]*work.L[239]-work.L[796]*work.d[241]*1;
  residual += temp*temp;

  temp = work.KKT[656]-work.L[248]*work.d[213]*work.L[248]-work.L[249]*work.d[217]*work.L[249]-work.L[250]*work.d[221]*work.L[250]-work.L[251]*work.d[225]*work.L[251]-work.L[252]*work.d[229]*work.L[252]-work.L[253]*work.d[233]*work.L[253]-work.L[254]*work.d[237]*work.L[254]-work.L[255]*work.d[241]*work.L[255]-1*work.d[245]*1-work.L[247]*work.d[146]*work.L[247]-work.L[256]*work.d[243]*work.L[256]-work.L[257]*work.d[244]*work.L[257];
  residual += temp*temp;

  temp = work.KKT[657]-work.L[264]*work.d[213]*work.L[248]-work.L[265]*work.d[217]*work.L[249]-work.L[266]*work.d[221]*work.L[250]-work.L[267]*work.d[225]*work.L[251]-work.L[268]*work.d[229]*work.L[252]-work.L[269]*work.d[233]*work.L[253]-work.L[270]*work.d[237]*work.L[254]-work.L[271]*work.d[241]*work.L[255]-work.L[272]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[658]-work.L[281]*work.d[213]*work.L[248]-work.L[282]*work.d[217]*work.L[249]-work.L[283]*work.d[221]*work.L[250]-work.L[284]*work.d[225]*work.L[251]-work.L[285]*work.d[229]*work.L[252]-work.L[286]*work.d[233]*work.L[253]-work.L[287]*work.d[237]*work.L[254]-work.L[288]*work.d[241]*work.L[255]-work.L[289]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[659]-work.L[299]*work.d[213]*work.L[248]-work.L[300]*work.d[217]*work.L[249]-work.L[301]*work.d[221]*work.L[250]-work.L[302]*work.d[225]*work.L[251]-work.L[303]*work.d[229]*work.L[252]-work.L[304]*work.d[233]*work.L[253]-work.L[305]*work.d[237]*work.L[254]-work.L[306]*work.d[241]*work.L[255]-work.L[307]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[660]-work.L[318]*work.d[213]*work.L[248]-work.L[319]*work.d[217]*work.L[249]-work.L[320]*work.d[221]*work.L[250]-work.L[321]*work.d[225]*work.L[251]-work.L[322]*work.d[229]*work.L[252]-work.L[323]*work.d[233]*work.L[253]-work.L[324]*work.d[237]*work.L[254]-work.L[325]*work.d[241]*work.L[255]-work.L[326]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[661]-work.L[338]*work.d[213]*work.L[248]-work.L[339]*work.d[217]*work.L[249]-work.L[340]*work.d[221]*work.L[250]-work.L[341]*work.d[225]*work.L[251]-work.L[342]*work.d[229]*work.L[252]-work.L[343]*work.d[233]*work.L[253]-work.L[344]*work.d[237]*work.L[254]-work.L[345]*work.d[241]*work.L[255]-work.L[346]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[662]-work.L[359]*work.d[213]*work.L[248]-work.L[360]*work.d[217]*work.L[249]-work.L[361]*work.d[221]*work.L[250]-work.L[362]*work.d[225]*work.L[251]-work.L[363]*work.d[229]*work.L[252]-work.L[364]*work.d[233]*work.L[253]-work.L[365]*work.d[237]*work.L[254]-work.L[366]*work.d[241]*work.L[255]-work.L[367]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[663]-work.L[381]*work.d[213]*work.L[248]-work.L[382]*work.d[217]*work.L[249]-work.L[383]*work.d[221]*work.L[250]-work.L[384]*work.d[225]*work.L[251]-work.L[385]*work.d[229]*work.L[252]-work.L[386]*work.d[233]*work.L[253]-work.L[387]*work.d[237]*work.L[254]-work.L[388]*work.d[241]*work.L[255]-work.L[389]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[664]-work.L[404]*work.d[213]*work.L[248]-work.L[405]*work.d[217]*work.L[249]-work.L[406]*work.d[221]*work.L[250]-work.L[407]*work.d[225]*work.L[251]-work.L[408]*work.d[229]*work.L[252]-work.L[409]*work.d[233]*work.L[253]-work.L[410]*work.d[237]*work.L[254]-work.L[411]*work.d[241]*work.L[255]-work.L[412]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[665]-work.L[428]*work.d[213]*work.L[248]-work.L[429]*work.d[217]*work.L[249]-work.L[430]*work.d[221]*work.L[250]-work.L[431]*work.d[225]*work.L[251]-work.L[432]*work.d[229]*work.L[252]-work.L[433]*work.d[233]*work.L[253]-work.L[434]*work.d[237]*work.L[254]-work.L[435]*work.d[241]*work.L[255]-work.L[436]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[666]-work.L[453]*work.d[213]*work.L[248]-work.L[454]*work.d[217]*work.L[249]-work.L[455]*work.d[221]*work.L[250]-work.L[456]*work.d[225]*work.L[251]-work.L[457]*work.d[229]*work.L[252]-work.L[458]*work.d[233]*work.L[253]-work.L[459]*work.d[237]*work.L[254]-work.L[460]*work.d[241]*work.L[255]-work.L[461]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[667]-work.L[479]*work.d[213]*work.L[248]-work.L[480]*work.d[217]*work.L[249]-work.L[481]*work.d[221]*work.L[250]-work.L[482]*work.d[225]*work.L[251]-work.L[483]*work.d[229]*work.L[252]-work.L[484]*work.d[233]*work.L[253]-work.L[485]*work.d[237]*work.L[254]-work.L[486]*work.d[241]*work.L[255]-work.L[487]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[668]-work.L[506]*work.d[213]*work.L[248]-work.L[507]*work.d[217]*work.L[249]-work.L[508]*work.d[221]*work.L[250]-work.L[509]*work.d[225]*work.L[251]-work.L[510]*work.d[229]*work.L[252]-work.L[511]*work.d[233]*work.L[253]-work.L[512]*work.d[237]*work.L[254]-work.L[513]*work.d[241]*work.L[255]-work.L[514]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[669]-work.L[534]*work.d[213]*work.L[248]-work.L[535]*work.d[217]*work.L[249]-work.L[536]*work.d[221]*work.L[250]-work.L[537]*work.d[225]*work.L[251]-work.L[538]*work.d[229]*work.L[252]-work.L[539]*work.d[233]*work.L[253]-work.L[540]*work.d[237]*work.L[254]-work.L[541]*work.d[241]*work.L[255]-work.L[542]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[670]-work.L[563]*work.d[213]*work.L[248]-work.L[564]*work.d[217]*work.L[249]-work.L[565]*work.d[221]*work.L[250]-work.L[566]*work.d[225]*work.L[251]-work.L[567]*work.d[229]*work.L[252]-work.L[568]*work.d[233]*work.L[253]-work.L[569]*work.d[237]*work.L[254]-work.L[570]*work.d[241]*work.L[255]-work.L[571]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[671]-work.L[593]*work.d[213]*work.L[248]-work.L[594]*work.d[217]*work.L[249]-work.L[595]*work.d[221]*work.L[250]-work.L[596]*work.d[225]*work.L[251]-work.L[597]*work.d[229]*work.L[252]-work.L[598]*work.d[233]*work.L[253]-work.L[599]*work.d[237]*work.L[254]-work.L[600]*work.d[241]*work.L[255]-work.L[601]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[672]-work.L[624]*work.d[213]*work.L[248]-work.L[625]*work.d[217]*work.L[249]-work.L[626]*work.d[221]*work.L[250]-work.L[627]*work.d[225]*work.L[251]-work.L[628]*work.d[229]*work.L[252]-work.L[629]*work.d[233]*work.L[253]-work.L[630]*work.d[237]*work.L[254]-work.L[631]*work.d[241]*work.L[255]-work.L[632]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[673]-work.L[656]*work.d[213]*work.L[248]-work.L[657]*work.d[217]*work.L[249]-work.L[658]*work.d[221]*work.L[250]-work.L[659]*work.d[225]*work.L[251]-work.L[660]*work.d[229]*work.L[252]-work.L[661]*work.d[233]*work.L[253]-work.L[662]*work.d[237]*work.L[254]-work.L[663]*work.d[241]*work.L[255]-work.L[664]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[674]-work.L[689]*work.d[213]*work.L[248]-work.L[690]*work.d[217]*work.L[249]-work.L[691]*work.d[221]*work.L[250]-work.L[692]*work.d[225]*work.L[251]-work.L[693]*work.d[229]*work.L[252]-work.L[694]*work.d[233]*work.L[253]-work.L[695]*work.d[237]*work.L[254]-work.L[696]*work.d[241]*work.L[255]-work.L[697]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[675]-work.L[723]*work.d[213]*work.L[248]-work.L[724]*work.d[217]*work.L[249]-work.L[725]*work.d[221]*work.L[250]-work.L[726]*work.d[225]*work.L[251]-work.L[727]*work.d[229]*work.L[252]-work.L[728]*work.d[233]*work.L[253]-work.L[729]*work.d[237]*work.L[254]-work.L[730]*work.d[241]*work.L[255]-work.L[731]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[676]-work.L[758]*work.d[213]*work.L[248]-work.L[759]*work.d[217]*work.L[249]-work.L[760]*work.d[221]*work.L[250]-work.L[761]*work.d[225]*work.L[251]-work.L[762]*work.d[229]*work.L[252]-work.L[763]*work.d[233]*work.L[253]-work.L[764]*work.d[237]*work.L[254]-work.L[765]*work.d[241]*work.L[255]-work.L[766]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[677]-work.L[789]*work.d[213]*work.L[248]-work.L[790]*work.d[217]*work.L[249]-work.L[791]*work.d[221]*work.L[250]-work.L[792]*work.d[225]*work.L[251]-work.L[793]*work.d[229]*work.L[252]-work.L[794]*work.d[233]*work.L[253]-work.L[795]*work.d[237]*work.L[254]-work.L[796]*work.d[241]*work.L[255]-work.L[797]*work.d[245]*1;
  residual += temp*temp;

  temp = work.KKT[684]-work.L[264]*work.d[213]*work.L[264]-work.L[265]*work.d[217]*work.L[265]-work.L[266]*work.d[221]*work.L[266]-work.L[267]*work.d[225]*work.L[267]-work.L[268]*work.d[229]*work.L[268]-work.L[269]*work.d[233]*work.L[269]-work.L[270]*work.d[237]*work.L[270]-work.L[271]*work.d[241]*work.L[271]-work.L[272]*work.d[245]*work.L[272]-1*work.d[249]*1-work.L[263]*work.d[149]*work.L[263]-work.L[273]*work.d[247]*work.L[273]-work.L[274]*work.d[248]*work.L[274];
  residual += temp*temp;

  temp = work.KKT[685]-work.L[281]*work.d[213]*work.L[264]-work.L[282]*work.d[217]*work.L[265]-work.L[283]*work.d[221]*work.L[266]-work.L[284]*work.d[225]*work.L[267]-work.L[285]*work.d[229]*work.L[268]-work.L[286]*work.d[233]*work.L[269]-work.L[287]*work.d[237]*work.L[270]-work.L[288]*work.d[241]*work.L[271]-work.L[289]*work.d[245]*work.L[272]-work.L[290]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[686]-work.L[299]*work.d[213]*work.L[264]-work.L[300]*work.d[217]*work.L[265]-work.L[301]*work.d[221]*work.L[266]-work.L[302]*work.d[225]*work.L[267]-work.L[303]*work.d[229]*work.L[268]-work.L[304]*work.d[233]*work.L[269]-work.L[305]*work.d[237]*work.L[270]-work.L[306]*work.d[241]*work.L[271]-work.L[307]*work.d[245]*work.L[272]-work.L[308]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[687]-work.L[318]*work.d[213]*work.L[264]-work.L[319]*work.d[217]*work.L[265]-work.L[320]*work.d[221]*work.L[266]-work.L[321]*work.d[225]*work.L[267]-work.L[322]*work.d[229]*work.L[268]-work.L[323]*work.d[233]*work.L[269]-work.L[324]*work.d[237]*work.L[270]-work.L[325]*work.d[241]*work.L[271]-work.L[326]*work.d[245]*work.L[272]-work.L[327]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[688]-work.L[338]*work.d[213]*work.L[264]-work.L[339]*work.d[217]*work.L[265]-work.L[340]*work.d[221]*work.L[266]-work.L[341]*work.d[225]*work.L[267]-work.L[342]*work.d[229]*work.L[268]-work.L[343]*work.d[233]*work.L[269]-work.L[344]*work.d[237]*work.L[270]-work.L[345]*work.d[241]*work.L[271]-work.L[346]*work.d[245]*work.L[272]-work.L[347]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[689]-work.L[359]*work.d[213]*work.L[264]-work.L[360]*work.d[217]*work.L[265]-work.L[361]*work.d[221]*work.L[266]-work.L[362]*work.d[225]*work.L[267]-work.L[363]*work.d[229]*work.L[268]-work.L[364]*work.d[233]*work.L[269]-work.L[365]*work.d[237]*work.L[270]-work.L[366]*work.d[241]*work.L[271]-work.L[367]*work.d[245]*work.L[272]-work.L[368]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[690]-work.L[381]*work.d[213]*work.L[264]-work.L[382]*work.d[217]*work.L[265]-work.L[383]*work.d[221]*work.L[266]-work.L[384]*work.d[225]*work.L[267]-work.L[385]*work.d[229]*work.L[268]-work.L[386]*work.d[233]*work.L[269]-work.L[387]*work.d[237]*work.L[270]-work.L[388]*work.d[241]*work.L[271]-work.L[389]*work.d[245]*work.L[272]-work.L[390]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[691]-work.L[404]*work.d[213]*work.L[264]-work.L[405]*work.d[217]*work.L[265]-work.L[406]*work.d[221]*work.L[266]-work.L[407]*work.d[225]*work.L[267]-work.L[408]*work.d[229]*work.L[268]-work.L[409]*work.d[233]*work.L[269]-work.L[410]*work.d[237]*work.L[270]-work.L[411]*work.d[241]*work.L[271]-work.L[412]*work.d[245]*work.L[272]-work.L[413]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[692]-work.L[428]*work.d[213]*work.L[264]-work.L[429]*work.d[217]*work.L[265]-work.L[430]*work.d[221]*work.L[266]-work.L[431]*work.d[225]*work.L[267]-work.L[432]*work.d[229]*work.L[268]-work.L[433]*work.d[233]*work.L[269]-work.L[434]*work.d[237]*work.L[270]-work.L[435]*work.d[241]*work.L[271]-work.L[436]*work.d[245]*work.L[272]-work.L[437]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[693]-work.L[453]*work.d[213]*work.L[264]-work.L[454]*work.d[217]*work.L[265]-work.L[455]*work.d[221]*work.L[266]-work.L[456]*work.d[225]*work.L[267]-work.L[457]*work.d[229]*work.L[268]-work.L[458]*work.d[233]*work.L[269]-work.L[459]*work.d[237]*work.L[270]-work.L[460]*work.d[241]*work.L[271]-work.L[461]*work.d[245]*work.L[272]-work.L[462]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[694]-work.L[479]*work.d[213]*work.L[264]-work.L[480]*work.d[217]*work.L[265]-work.L[481]*work.d[221]*work.L[266]-work.L[482]*work.d[225]*work.L[267]-work.L[483]*work.d[229]*work.L[268]-work.L[484]*work.d[233]*work.L[269]-work.L[485]*work.d[237]*work.L[270]-work.L[486]*work.d[241]*work.L[271]-work.L[487]*work.d[245]*work.L[272]-work.L[488]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[695]-work.L[506]*work.d[213]*work.L[264]-work.L[507]*work.d[217]*work.L[265]-work.L[508]*work.d[221]*work.L[266]-work.L[509]*work.d[225]*work.L[267]-work.L[510]*work.d[229]*work.L[268]-work.L[511]*work.d[233]*work.L[269]-work.L[512]*work.d[237]*work.L[270]-work.L[513]*work.d[241]*work.L[271]-work.L[514]*work.d[245]*work.L[272]-work.L[515]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[696]-work.L[534]*work.d[213]*work.L[264]-work.L[535]*work.d[217]*work.L[265]-work.L[536]*work.d[221]*work.L[266]-work.L[537]*work.d[225]*work.L[267]-work.L[538]*work.d[229]*work.L[268]-work.L[539]*work.d[233]*work.L[269]-work.L[540]*work.d[237]*work.L[270]-work.L[541]*work.d[241]*work.L[271]-work.L[542]*work.d[245]*work.L[272]-work.L[543]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[697]-work.L[563]*work.d[213]*work.L[264]-work.L[564]*work.d[217]*work.L[265]-work.L[565]*work.d[221]*work.L[266]-work.L[566]*work.d[225]*work.L[267]-work.L[567]*work.d[229]*work.L[268]-work.L[568]*work.d[233]*work.L[269]-work.L[569]*work.d[237]*work.L[270]-work.L[570]*work.d[241]*work.L[271]-work.L[571]*work.d[245]*work.L[272]-work.L[572]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[698]-work.L[593]*work.d[213]*work.L[264]-work.L[594]*work.d[217]*work.L[265]-work.L[595]*work.d[221]*work.L[266]-work.L[596]*work.d[225]*work.L[267]-work.L[597]*work.d[229]*work.L[268]-work.L[598]*work.d[233]*work.L[269]-work.L[599]*work.d[237]*work.L[270]-work.L[600]*work.d[241]*work.L[271]-work.L[601]*work.d[245]*work.L[272]-work.L[602]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[699]-work.L[624]*work.d[213]*work.L[264]-work.L[625]*work.d[217]*work.L[265]-work.L[626]*work.d[221]*work.L[266]-work.L[627]*work.d[225]*work.L[267]-work.L[628]*work.d[229]*work.L[268]-work.L[629]*work.d[233]*work.L[269]-work.L[630]*work.d[237]*work.L[270]-work.L[631]*work.d[241]*work.L[271]-work.L[632]*work.d[245]*work.L[272]-work.L[633]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[700]-work.L[656]*work.d[213]*work.L[264]-work.L[657]*work.d[217]*work.L[265]-work.L[658]*work.d[221]*work.L[266]-work.L[659]*work.d[225]*work.L[267]-work.L[660]*work.d[229]*work.L[268]-work.L[661]*work.d[233]*work.L[269]-work.L[662]*work.d[237]*work.L[270]-work.L[663]*work.d[241]*work.L[271]-work.L[664]*work.d[245]*work.L[272]-work.L[665]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[701]-work.L[689]*work.d[213]*work.L[264]-work.L[690]*work.d[217]*work.L[265]-work.L[691]*work.d[221]*work.L[266]-work.L[692]*work.d[225]*work.L[267]-work.L[693]*work.d[229]*work.L[268]-work.L[694]*work.d[233]*work.L[269]-work.L[695]*work.d[237]*work.L[270]-work.L[696]*work.d[241]*work.L[271]-work.L[697]*work.d[245]*work.L[272]-work.L[698]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[702]-work.L[723]*work.d[213]*work.L[264]-work.L[724]*work.d[217]*work.L[265]-work.L[725]*work.d[221]*work.L[266]-work.L[726]*work.d[225]*work.L[267]-work.L[727]*work.d[229]*work.L[268]-work.L[728]*work.d[233]*work.L[269]-work.L[729]*work.d[237]*work.L[270]-work.L[730]*work.d[241]*work.L[271]-work.L[731]*work.d[245]*work.L[272]-work.L[732]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[703]-work.L[758]*work.d[213]*work.L[264]-work.L[759]*work.d[217]*work.L[265]-work.L[760]*work.d[221]*work.L[266]-work.L[761]*work.d[225]*work.L[267]-work.L[762]*work.d[229]*work.L[268]-work.L[763]*work.d[233]*work.L[269]-work.L[764]*work.d[237]*work.L[270]-work.L[765]*work.d[241]*work.L[271]-work.L[766]*work.d[245]*work.L[272]-work.L[767]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[704]-work.L[789]*work.d[213]*work.L[264]-work.L[790]*work.d[217]*work.L[265]-work.L[791]*work.d[221]*work.L[266]-work.L[792]*work.d[225]*work.L[267]-work.L[793]*work.d[229]*work.L[268]-work.L[794]*work.d[233]*work.L[269]-work.L[795]*work.d[237]*work.L[270]-work.L[796]*work.d[241]*work.L[271]-work.L[797]*work.d[245]*work.L[272]-work.L[798]*work.d[249]*1;
  residual += temp*temp;

  temp = work.KKT[711]-work.L[281]*work.d[213]*work.L[281]-work.L[282]*work.d[217]*work.L[282]-work.L[283]*work.d[221]*work.L[283]-work.L[284]*work.d[225]*work.L[284]-work.L[285]*work.d[229]*work.L[285]-work.L[286]*work.d[233]*work.L[286]-work.L[287]*work.d[237]*work.L[287]-work.L[288]*work.d[241]*work.L[288]-work.L[289]*work.d[245]*work.L[289]-work.L[290]*work.d[249]*work.L[290]-1*work.d[253]*1-work.L[280]*work.d[152]*work.L[280]-work.L[291]*work.d[251]*work.L[291]-work.L[292]*work.d[252]*work.L[292];
  residual += temp*temp;

  temp = work.KKT[712]-work.L[299]*work.d[213]*work.L[281]-work.L[300]*work.d[217]*work.L[282]-work.L[301]*work.d[221]*work.L[283]-work.L[302]*work.d[225]*work.L[284]-work.L[303]*work.d[229]*work.L[285]-work.L[304]*work.d[233]*work.L[286]-work.L[305]*work.d[237]*work.L[287]-work.L[306]*work.d[241]*work.L[288]-work.L[307]*work.d[245]*work.L[289]-work.L[308]*work.d[249]*work.L[290]-work.L[309]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[713]-work.L[318]*work.d[213]*work.L[281]-work.L[319]*work.d[217]*work.L[282]-work.L[320]*work.d[221]*work.L[283]-work.L[321]*work.d[225]*work.L[284]-work.L[322]*work.d[229]*work.L[285]-work.L[323]*work.d[233]*work.L[286]-work.L[324]*work.d[237]*work.L[287]-work.L[325]*work.d[241]*work.L[288]-work.L[326]*work.d[245]*work.L[289]-work.L[327]*work.d[249]*work.L[290]-work.L[328]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[714]-work.L[338]*work.d[213]*work.L[281]-work.L[339]*work.d[217]*work.L[282]-work.L[340]*work.d[221]*work.L[283]-work.L[341]*work.d[225]*work.L[284]-work.L[342]*work.d[229]*work.L[285]-work.L[343]*work.d[233]*work.L[286]-work.L[344]*work.d[237]*work.L[287]-work.L[345]*work.d[241]*work.L[288]-work.L[346]*work.d[245]*work.L[289]-work.L[347]*work.d[249]*work.L[290]-work.L[348]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[715]-work.L[359]*work.d[213]*work.L[281]-work.L[360]*work.d[217]*work.L[282]-work.L[361]*work.d[221]*work.L[283]-work.L[362]*work.d[225]*work.L[284]-work.L[363]*work.d[229]*work.L[285]-work.L[364]*work.d[233]*work.L[286]-work.L[365]*work.d[237]*work.L[287]-work.L[366]*work.d[241]*work.L[288]-work.L[367]*work.d[245]*work.L[289]-work.L[368]*work.d[249]*work.L[290]-work.L[369]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[716]-work.L[381]*work.d[213]*work.L[281]-work.L[382]*work.d[217]*work.L[282]-work.L[383]*work.d[221]*work.L[283]-work.L[384]*work.d[225]*work.L[284]-work.L[385]*work.d[229]*work.L[285]-work.L[386]*work.d[233]*work.L[286]-work.L[387]*work.d[237]*work.L[287]-work.L[388]*work.d[241]*work.L[288]-work.L[389]*work.d[245]*work.L[289]-work.L[390]*work.d[249]*work.L[290]-work.L[391]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[717]-work.L[404]*work.d[213]*work.L[281]-work.L[405]*work.d[217]*work.L[282]-work.L[406]*work.d[221]*work.L[283]-work.L[407]*work.d[225]*work.L[284]-work.L[408]*work.d[229]*work.L[285]-work.L[409]*work.d[233]*work.L[286]-work.L[410]*work.d[237]*work.L[287]-work.L[411]*work.d[241]*work.L[288]-work.L[412]*work.d[245]*work.L[289]-work.L[413]*work.d[249]*work.L[290]-work.L[414]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[718]-work.L[428]*work.d[213]*work.L[281]-work.L[429]*work.d[217]*work.L[282]-work.L[430]*work.d[221]*work.L[283]-work.L[431]*work.d[225]*work.L[284]-work.L[432]*work.d[229]*work.L[285]-work.L[433]*work.d[233]*work.L[286]-work.L[434]*work.d[237]*work.L[287]-work.L[435]*work.d[241]*work.L[288]-work.L[436]*work.d[245]*work.L[289]-work.L[437]*work.d[249]*work.L[290]-work.L[438]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[719]-work.L[453]*work.d[213]*work.L[281]-work.L[454]*work.d[217]*work.L[282]-work.L[455]*work.d[221]*work.L[283]-work.L[456]*work.d[225]*work.L[284]-work.L[457]*work.d[229]*work.L[285]-work.L[458]*work.d[233]*work.L[286]-work.L[459]*work.d[237]*work.L[287]-work.L[460]*work.d[241]*work.L[288]-work.L[461]*work.d[245]*work.L[289]-work.L[462]*work.d[249]*work.L[290]-work.L[463]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[720]-work.L[479]*work.d[213]*work.L[281]-work.L[480]*work.d[217]*work.L[282]-work.L[481]*work.d[221]*work.L[283]-work.L[482]*work.d[225]*work.L[284]-work.L[483]*work.d[229]*work.L[285]-work.L[484]*work.d[233]*work.L[286]-work.L[485]*work.d[237]*work.L[287]-work.L[486]*work.d[241]*work.L[288]-work.L[487]*work.d[245]*work.L[289]-work.L[488]*work.d[249]*work.L[290]-work.L[489]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[721]-work.L[506]*work.d[213]*work.L[281]-work.L[507]*work.d[217]*work.L[282]-work.L[508]*work.d[221]*work.L[283]-work.L[509]*work.d[225]*work.L[284]-work.L[510]*work.d[229]*work.L[285]-work.L[511]*work.d[233]*work.L[286]-work.L[512]*work.d[237]*work.L[287]-work.L[513]*work.d[241]*work.L[288]-work.L[514]*work.d[245]*work.L[289]-work.L[515]*work.d[249]*work.L[290]-work.L[516]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[722]-work.L[534]*work.d[213]*work.L[281]-work.L[535]*work.d[217]*work.L[282]-work.L[536]*work.d[221]*work.L[283]-work.L[537]*work.d[225]*work.L[284]-work.L[538]*work.d[229]*work.L[285]-work.L[539]*work.d[233]*work.L[286]-work.L[540]*work.d[237]*work.L[287]-work.L[541]*work.d[241]*work.L[288]-work.L[542]*work.d[245]*work.L[289]-work.L[543]*work.d[249]*work.L[290]-work.L[544]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[723]-work.L[563]*work.d[213]*work.L[281]-work.L[564]*work.d[217]*work.L[282]-work.L[565]*work.d[221]*work.L[283]-work.L[566]*work.d[225]*work.L[284]-work.L[567]*work.d[229]*work.L[285]-work.L[568]*work.d[233]*work.L[286]-work.L[569]*work.d[237]*work.L[287]-work.L[570]*work.d[241]*work.L[288]-work.L[571]*work.d[245]*work.L[289]-work.L[572]*work.d[249]*work.L[290]-work.L[573]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[724]-work.L[593]*work.d[213]*work.L[281]-work.L[594]*work.d[217]*work.L[282]-work.L[595]*work.d[221]*work.L[283]-work.L[596]*work.d[225]*work.L[284]-work.L[597]*work.d[229]*work.L[285]-work.L[598]*work.d[233]*work.L[286]-work.L[599]*work.d[237]*work.L[287]-work.L[600]*work.d[241]*work.L[288]-work.L[601]*work.d[245]*work.L[289]-work.L[602]*work.d[249]*work.L[290]-work.L[603]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[725]-work.L[624]*work.d[213]*work.L[281]-work.L[625]*work.d[217]*work.L[282]-work.L[626]*work.d[221]*work.L[283]-work.L[627]*work.d[225]*work.L[284]-work.L[628]*work.d[229]*work.L[285]-work.L[629]*work.d[233]*work.L[286]-work.L[630]*work.d[237]*work.L[287]-work.L[631]*work.d[241]*work.L[288]-work.L[632]*work.d[245]*work.L[289]-work.L[633]*work.d[249]*work.L[290]-work.L[634]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[726]-work.L[656]*work.d[213]*work.L[281]-work.L[657]*work.d[217]*work.L[282]-work.L[658]*work.d[221]*work.L[283]-work.L[659]*work.d[225]*work.L[284]-work.L[660]*work.d[229]*work.L[285]-work.L[661]*work.d[233]*work.L[286]-work.L[662]*work.d[237]*work.L[287]-work.L[663]*work.d[241]*work.L[288]-work.L[664]*work.d[245]*work.L[289]-work.L[665]*work.d[249]*work.L[290]-work.L[666]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[727]-work.L[689]*work.d[213]*work.L[281]-work.L[690]*work.d[217]*work.L[282]-work.L[691]*work.d[221]*work.L[283]-work.L[692]*work.d[225]*work.L[284]-work.L[693]*work.d[229]*work.L[285]-work.L[694]*work.d[233]*work.L[286]-work.L[695]*work.d[237]*work.L[287]-work.L[696]*work.d[241]*work.L[288]-work.L[697]*work.d[245]*work.L[289]-work.L[698]*work.d[249]*work.L[290]-work.L[699]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[728]-work.L[723]*work.d[213]*work.L[281]-work.L[724]*work.d[217]*work.L[282]-work.L[725]*work.d[221]*work.L[283]-work.L[726]*work.d[225]*work.L[284]-work.L[727]*work.d[229]*work.L[285]-work.L[728]*work.d[233]*work.L[286]-work.L[729]*work.d[237]*work.L[287]-work.L[730]*work.d[241]*work.L[288]-work.L[731]*work.d[245]*work.L[289]-work.L[732]*work.d[249]*work.L[290]-work.L[733]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[729]-work.L[758]*work.d[213]*work.L[281]-work.L[759]*work.d[217]*work.L[282]-work.L[760]*work.d[221]*work.L[283]-work.L[761]*work.d[225]*work.L[284]-work.L[762]*work.d[229]*work.L[285]-work.L[763]*work.d[233]*work.L[286]-work.L[764]*work.d[237]*work.L[287]-work.L[765]*work.d[241]*work.L[288]-work.L[766]*work.d[245]*work.L[289]-work.L[767]*work.d[249]*work.L[290]-work.L[768]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[730]-work.L[789]*work.d[213]*work.L[281]-work.L[790]*work.d[217]*work.L[282]-work.L[791]*work.d[221]*work.L[283]-work.L[792]*work.d[225]*work.L[284]-work.L[793]*work.d[229]*work.L[285]-work.L[794]*work.d[233]*work.L[286]-work.L[795]*work.d[237]*work.L[287]-work.L[796]*work.d[241]*work.L[288]-work.L[797]*work.d[245]*work.L[289]-work.L[798]*work.d[249]*work.L[290]-work.L[799]*work.d[253]*1;
  residual += temp*temp;

  temp = work.KKT[737]-work.L[299]*work.d[213]*work.L[299]-work.L[300]*work.d[217]*work.L[300]-work.L[301]*work.d[221]*work.L[301]-work.L[302]*work.d[225]*work.L[302]-work.L[303]*work.d[229]*work.L[303]-work.L[304]*work.d[233]*work.L[304]-work.L[305]*work.d[237]*work.L[305]-work.L[306]*work.d[241]*work.L[306]-work.L[307]*work.d[245]*work.L[307]-work.L[308]*work.d[249]*work.L[308]-work.L[309]*work.d[253]*work.L[309]-1*work.d[257]*1-work.L[298]*work.d[155]*work.L[298]-work.L[310]*work.d[255]*work.L[310]-work.L[311]*work.d[256]*work.L[311];
  residual += temp*temp;

  temp = work.KKT[738]-work.L[318]*work.d[213]*work.L[299]-work.L[319]*work.d[217]*work.L[300]-work.L[320]*work.d[221]*work.L[301]-work.L[321]*work.d[225]*work.L[302]-work.L[322]*work.d[229]*work.L[303]-work.L[323]*work.d[233]*work.L[304]-work.L[324]*work.d[237]*work.L[305]-work.L[325]*work.d[241]*work.L[306]-work.L[326]*work.d[245]*work.L[307]-work.L[327]*work.d[249]*work.L[308]-work.L[328]*work.d[253]*work.L[309]-work.L[329]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[739]-work.L[338]*work.d[213]*work.L[299]-work.L[339]*work.d[217]*work.L[300]-work.L[340]*work.d[221]*work.L[301]-work.L[341]*work.d[225]*work.L[302]-work.L[342]*work.d[229]*work.L[303]-work.L[343]*work.d[233]*work.L[304]-work.L[344]*work.d[237]*work.L[305]-work.L[345]*work.d[241]*work.L[306]-work.L[346]*work.d[245]*work.L[307]-work.L[347]*work.d[249]*work.L[308]-work.L[348]*work.d[253]*work.L[309]-work.L[349]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[740]-work.L[359]*work.d[213]*work.L[299]-work.L[360]*work.d[217]*work.L[300]-work.L[361]*work.d[221]*work.L[301]-work.L[362]*work.d[225]*work.L[302]-work.L[363]*work.d[229]*work.L[303]-work.L[364]*work.d[233]*work.L[304]-work.L[365]*work.d[237]*work.L[305]-work.L[366]*work.d[241]*work.L[306]-work.L[367]*work.d[245]*work.L[307]-work.L[368]*work.d[249]*work.L[308]-work.L[369]*work.d[253]*work.L[309]-work.L[370]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[741]-work.L[381]*work.d[213]*work.L[299]-work.L[382]*work.d[217]*work.L[300]-work.L[383]*work.d[221]*work.L[301]-work.L[384]*work.d[225]*work.L[302]-work.L[385]*work.d[229]*work.L[303]-work.L[386]*work.d[233]*work.L[304]-work.L[387]*work.d[237]*work.L[305]-work.L[388]*work.d[241]*work.L[306]-work.L[389]*work.d[245]*work.L[307]-work.L[390]*work.d[249]*work.L[308]-work.L[391]*work.d[253]*work.L[309]-work.L[392]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[742]-work.L[404]*work.d[213]*work.L[299]-work.L[405]*work.d[217]*work.L[300]-work.L[406]*work.d[221]*work.L[301]-work.L[407]*work.d[225]*work.L[302]-work.L[408]*work.d[229]*work.L[303]-work.L[409]*work.d[233]*work.L[304]-work.L[410]*work.d[237]*work.L[305]-work.L[411]*work.d[241]*work.L[306]-work.L[412]*work.d[245]*work.L[307]-work.L[413]*work.d[249]*work.L[308]-work.L[414]*work.d[253]*work.L[309]-work.L[415]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[743]-work.L[428]*work.d[213]*work.L[299]-work.L[429]*work.d[217]*work.L[300]-work.L[430]*work.d[221]*work.L[301]-work.L[431]*work.d[225]*work.L[302]-work.L[432]*work.d[229]*work.L[303]-work.L[433]*work.d[233]*work.L[304]-work.L[434]*work.d[237]*work.L[305]-work.L[435]*work.d[241]*work.L[306]-work.L[436]*work.d[245]*work.L[307]-work.L[437]*work.d[249]*work.L[308]-work.L[438]*work.d[253]*work.L[309]-work.L[439]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[744]-work.L[453]*work.d[213]*work.L[299]-work.L[454]*work.d[217]*work.L[300]-work.L[455]*work.d[221]*work.L[301]-work.L[456]*work.d[225]*work.L[302]-work.L[457]*work.d[229]*work.L[303]-work.L[458]*work.d[233]*work.L[304]-work.L[459]*work.d[237]*work.L[305]-work.L[460]*work.d[241]*work.L[306]-work.L[461]*work.d[245]*work.L[307]-work.L[462]*work.d[249]*work.L[308]-work.L[463]*work.d[253]*work.L[309]-work.L[464]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[745]-work.L[479]*work.d[213]*work.L[299]-work.L[480]*work.d[217]*work.L[300]-work.L[481]*work.d[221]*work.L[301]-work.L[482]*work.d[225]*work.L[302]-work.L[483]*work.d[229]*work.L[303]-work.L[484]*work.d[233]*work.L[304]-work.L[485]*work.d[237]*work.L[305]-work.L[486]*work.d[241]*work.L[306]-work.L[487]*work.d[245]*work.L[307]-work.L[488]*work.d[249]*work.L[308]-work.L[489]*work.d[253]*work.L[309]-work.L[490]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[746]-work.L[506]*work.d[213]*work.L[299]-work.L[507]*work.d[217]*work.L[300]-work.L[508]*work.d[221]*work.L[301]-work.L[509]*work.d[225]*work.L[302]-work.L[510]*work.d[229]*work.L[303]-work.L[511]*work.d[233]*work.L[304]-work.L[512]*work.d[237]*work.L[305]-work.L[513]*work.d[241]*work.L[306]-work.L[514]*work.d[245]*work.L[307]-work.L[515]*work.d[249]*work.L[308]-work.L[516]*work.d[253]*work.L[309]-work.L[517]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[747]-work.L[534]*work.d[213]*work.L[299]-work.L[535]*work.d[217]*work.L[300]-work.L[536]*work.d[221]*work.L[301]-work.L[537]*work.d[225]*work.L[302]-work.L[538]*work.d[229]*work.L[303]-work.L[539]*work.d[233]*work.L[304]-work.L[540]*work.d[237]*work.L[305]-work.L[541]*work.d[241]*work.L[306]-work.L[542]*work.d[245]*work.L[307]-work.L[543]*work.d[249]*work.L[308]-work.L[544]*work.d[253]*work.L[309]-work.L[545]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[748]-work.L[563]*work.d[213]*work.L[299]-work.L[564]*work.d[217]*work.L[300]-work.L[565]*work.d[221]*work.L[301]-work.L[566]*work.d[225]*work.L[302]-work.L[567]*work.d[229]*work.L[303]-work.L[568]*work.d[233]*work.L[304]-work.L[569]*work.d[237]*work.L[305]-work.L[570]*work.d[241]*work.L[306]-work.L[571]*work.d[245]*work.L[307]-work.L[572]*work.d[249]*work.L[308]-work.L[573]*work.d[253]*work.L[309]-work.L[574]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[749]-work.L[593]*work.d[213]*work.L[299]-work.L[594]*work.d[217]*work.L[300]-work.L[595]*work.d[221]*work.L[301]-work.L[596]*work.d[225]*work.L[302]-work.L[597]*work.d[229]*work.L[303]-work.L[598]*work.d[233]*work.L[304]-work.L[599]*work.d[237]*work.L[305]-work.L[600]*work.d[241]*work.L[306]-work.L[601]*work.d[245]*work.L[307]-work.L[602]*work.d[249]*work.L[308]-work.L[603]*work.d[253]*work.L[309]-work.L[604]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[750]-work.L[624]*work.d[213]*work.L[299]-work.L[625]*work.d[217]*work.L[300]-work.L[626]*work.d[221]*work.L[301]-work.L[627]*work.d[225]*work.L[302]-work.L[628]*work.d[229]*work.L[303]-work.L[629]*work.d[233]*work.L[304]-work.L[630]*work.d[237]*work.L[305]-work.L[631]*work.d[241]*work.L[306]-work.L[632]*work.d[245]*work.L[307]-work.L[633]*work.d[249]*work.L[308]-work.L[634]*work.d[253]*work.L[309]-work.L[635]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[751]-work.L[656]*work.d[213]*work.L[299]-work.L[657]*work.d[217]*work.L[300]-work.L[658]*work.d[221]*work.L[301]-work.L[659]*work.d[225]*work.L[302]-work.L[660]*work.d[229]*work.L[303]-work.L[661]*work.d[233]*work.L[304]-work.L[662]*work.d[237]*work.L[305]-work.L[663]*work.d[241]*work.L[306]-work.L[664]*work.d[245]*work.L[307]-work.L[665]*work.d[249]*work.L[308]-work.L[666]*work.d[253]*work.L[309]-work.L[667]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[752]-work.L[689]*work.d[213]*work.L[299]-work.L[690]*work.d[217]*work.L[300]-work.L[691]*work.d[221]*work.L[301]-work.L[692]*work.d[225]*work.L[302]-work.L[693]*work.d[229]*work.L[303]-work.L[694]*work.d[233]*work.L[304]-work.L[695]*work.d[237]*work.L[305]-work.L[696]*work.d[241]*work.L[306]-work.L[697]*work.d[245]*work.L[307]-work.L[698]*work.d[249]*work.L[308]-work.L[699]*work.d[253]*work.L[309]-work.L[700]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[753]-work.L[723]*work.d[213]*work.L[299]-work.L[724]*work.d[217]*work.L[300]-work.L[725]*work.d[221]*work.L[301]-work.L[726]*work.d[225]*work.L[302]-work.L[727]*work.d[229]*work.L[303]-work.L[728]*work.d[233]*work.L[304]-work.L[729]*work.d[237]*work.L[305]-work.L[730]*work.d[241]*work.L[306]-work.L[731]*work.d[245]*work.L[307]-work.L[732]*work.d[249]*work.L[308]-work.L[733]*work.d[253]*work.L[309]-work.L[734]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[754]-work.L[758]*work.d[213]*work.L[299]-work.L[759]*work.d[217]*work.L[300]-work.L[760]*work.d[221]*work.L[301]-work.L[761]*work.d[225]*work.L[302]-work.L[762]*work.d[229]*work.L[303]-work.L[763]*work.d[233]*work.L[304]-work.L[764]*work.d[237]*work.L[305]-work.L[765]*work.d[241]*work.L[306]-work.L[766]*work.d[245]*work.L[307]-work.L[767]*work.d[249]*work.L[308]-work.L[768]*work.d[253]*work.L[309]-work.L[769]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[755]-work.L[789]*work.d[213]*work.L[299]-work.L[790]*work.d[217]*work.L[300]-work.L[791]*work.d[221]*work.L[301]-work.L[792]*work.d[225]*work.L[302]-work.L[793]*work.d[229]*work.L[303]-work.L[794]*work.d[233]*work.L[304]-work.L[795]*work.d[237]*work.L[305]-work.L[796]*work.d[241]*work.L[306]-work.L[797]*work.d[245]*work.L[307]-work.L[798]*work.d[249]*work.L[308]-work.L[799]*work.d[253]*work.L[309]-work.L[800]*work.d[257]*1;
  residual += temp*temp;

  temp = work.KKT[762]-work.L[318]*work.d[213]*work.L[318]-work.L[319]*work.d[217]*work.L[319]-work.L[320]*work.d[221]*work.L[320]-work.L[321]*work.d[225]*work.L[321]-work.L[322]*work.d[229]*work.L[322]-work.L[323]*work.d[233]*work.L[323]-work.L[324]*work.d[237]*work.L[324]-work.L[325]*work.d[241]*work.L[325]-work.L[326]*work.d[245]*work.L[326]-work.L[327]*work.d[249]*work.L[327]-work.L[328]*work.d[253]*work.L[328]-work.L[329]*work.d[257]*work.L[329]-1*work.d[261]*1-work.L[317]*work.d[158]*work.L[317]-work.L[330]*work.d[259]*work.L[330]-work.L[331]*work.d[260]*work.L[331];
  residual += temp*temp;

  temp = work.KKT[763]-work.L[338]*work.d[213]*work.L[318]-work.L[339]*work.d[217]*work.L[319]-work.L[340]*work.d[221]*work.L[320]-work.L[341]*work.d[225]*work.L[321]-work.L[342]*work.d[229]*work.L[322]-work.L[343]*work.d[233]*work.L[323]-work.L[344]*work.d[237]*work.L[324]-work.L[345]*work.d[241]*work.L[325]-work.L[346]*work.d[245]*work.L[326]-work.L[347]*work.d[249]*work.L[327]-work.L[348]*work.d[253]*work.L[328]-work.L[349]*work.d[257]*work.L[329]-work.L[350]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[764]-work.L[359]*work.d[213]*work.L[318]-work.L[360]*work.d[217]*work.L[319]-work.L[361]*work.d[221]*work.L[320]-work.L[362]*work.d[225]*work.L[321]-work.L[363]*work.d[229]*work.L[322]-work.L[364]*work.d[233]*work.L[323]-work.L[365]*work.d[237]*work.L[324]-work.L[366]*work.d[241]*work.L[325]-work.L[367]*work.d[245]*work.L[326]-work.L[368]*work.d[249]*work.L[327]-work.L[369]*work.d[253]*work.L[328]-work.L[370]*work.d[257]*work.L[329]-work.L[371]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[765]-work.L[381]*work.d[213]*work.L[318]-work.L[382]*work.d[217]*work.L[319]-work.L[383]*work.d[221]*work.L[320]-work.L[384]*work.d[225]*work.L[321]-work.L[385]*work.d[229]*work.L[322]-work.L[386]*work.d[233]*work.L[323]-work.L[387]*work.d[237]*work.L[324]-work.L[388]*work.d[241]*work.L[325]-work.L[389]*work.d[245]*work.L[326]-work.L[390]*work.d[249]*work.L[327]-work.L[391]*work.d[253]*work.L[328]-work.L[392]*work.d[257]*work.L[329]-work.L[393]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[766]-work.L[404]*work.d[213]*work.L[318]-work.L[405]*work.d[217]*work.L[319]-work.L[406]*work.d[221]*work.L[320]-work.L[407]*work.d[225]*work.L[321]-work.L[408]*work.d[229]*work.L[322]-work.L[409]*work.d[233]*work.L[323]-work.L[410]*work.d[237]*work.L[324]-work.L[411]*work.d[241]*work.L[325]-work.L[412]*work.d[245]*work.L[326]-work.L[413]*work.d[249]*work.L[327]-work.L[414]*work.d[253]*work.L[328]-work.L[415]*work.d[257]*work.L[329]-work.L[416]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[767]-work.L[428]*work.d[213]*work.L[318]-work.L[429]*work.d[217]*work.L[319]-work.L[430]*work.d[221]*work.L[320]-work.L[431]*work.d[225]*work.L[321]-work.L[432]*work.d[229]*work.L[322]-work.L[433]*work.d[233]*work.L[323]-work.L[434]*work.d[237]*work.L[324]-work.L[435]*work.d[241]*work.L[325]-work.L[436]*work.d[245]*work.L[326]-work.L[437]*work.d[249]*work.L[327]-work.L[438]*work.d[253]*work.L[328]-work.L[439]*work.d[257]*work.L[329]-work.L[440]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[768]-work.L[453]*work.d[213]*work.L[318]-work.L[454]*work.d[217]*work.L[319]-work.L[455]*work.d[221]*work.L[320]-work.L[456]*work.d[225]*work.L[321]-work.L[457]*work.d[229]*work.L[322]-work.L[458]*work.d[233]*work.L[323]-work.L[459]*work.d[237]*work.L[324]-work.L[460]*work.d[241]*work.L[325]-work.L[461]*work.d[245]*work.L[326]-work.L[462]*work.d[249]*work.L[327]-work.L[463]*work.d[253]*work.L[328]-work.L[464]*work.d[257]*work.L[329]-work.L[465]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[769]-work.L[479]*work.d[213]*work.L[318]-work.L[480]*work.d[217]*work.L[319]-work.L[481]*work.d[221]*work.L[320]-work.L[482]*work.d[225]*work.L[321]-work.L[483]*work.d[229]*work.L[322]-work.L[484]*work.d[233]*work.L[323]-work.L[485]*work.d[237]*work.L[324]-work.L[486]*work.d[241]*work.L[325]-work.L[487]*work.d[245]*work.L[326]-work.L[488]*work.d[249]*work.L[327]-work.L[489]*work.d[253]*work.L[328]-work.L[490]*work.d[257]*work.L[329]-work.L[491]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[770]-work.L[506]*work.d[213]*work.L[318]-work.L[507]*work.d[217]*work.L[319]-work.L[508]*work.d[221]*work.L[320]-work.L[509]*work.d[225]*work.L[321]-work.L[510]*work.d[229]*work.L[322]-work.L[511]*work.d[233]*work.L[323]-work.L[512]*work.d[237]*work.L[324]-work.L[513]*work.d[241]*work.L[325]-work.L[514]*work.d[245]*work.L[326]-work.L[515]*work.d[249]*work.L[327]-work.L[516]*work.d[253]*work.L[328]-work.L[517]*work.d[257]*work.L[329]-work.L[518]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[771]-work.L[534]*work.d[213]*work.L[318]-work.L[535]*work.d[217]*work.L[319]-work.L[536]*work.d[221]*work.L[320]-work.L[537]*work.d[225]*work.L[321]-work.L[538]*work.d[229]*work.L[322]-work.L[539]*work.d[233]*work.L[323]-work.L[540]*work.d[237]*work.L[324]-work.L[541]*work.d[241]*work.L[325]-work.L[542]*work.d[245]*work.L[326]-work.L[543]*work.d[249]*work.L[327]-work.L[544]*work.d[253]*work.L[328]-work.L[545]*work.d[257]*work.L[329]-work.L[546]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[772]-work.L[563]*work.d[213]*work.L[318]-work.L[564]*work.d[217]*work.L[319]-work.L[565]*work.d[221]*work.L[320]-work.L[566]*work.d[225]*work.L[321]-work.L[567]*work.d[229]*work.L[322]-work.L[568]*work.d[233]*work.L[323]-work.L[569]*work.d[237]*work.L[324]-work.L[570]*work.d[241]*work.L[325]-work.L[571]*work.d[245]*work.L[326]-work.L[572]*work.d[249]*work.L[327]-work.L[573]*work.d[253]*work.L[328]-work.L[574]*work.d[257]*work.L[329]-work.L[575]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[773]-work.L[593]*work.d[213]*work.L[318]-work.L[594]*work.d[217]*work.L[319]-work.L[595]*work.d[221]*work.L[320]-work.L[596]*work.d[225]*work.L[321]-work.L[597]*work.d[229]*work.L[322]-work.L[598]*work.d[233]*work.L[323]-work.L[599]*work.d[237]*work.L[324]-work.L[600]*work.d[241]*work.L[325]-work.L[601]*work.d[245]*work.L[326]-work.L[602]*work.d[249]*work.L[327]-work.L[603]*work.d[253]*work.L[328]-work.L[604]*work.d[257]*work.L[329]-work.L[605]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[774]-work.L[624]*work.d[213]*work.L[318]-work.L[625]*work.d[217]*work.L[319]-work.L[626]*work.d[221]*work.L[320]-work.L[627]*work.d[225]*work.L[321]-work.L[628]*work.d[229]*work.L[322]-work.L[629]*work.d[233]*work.L[323]-work.L[630]*work.d[237]*work.L[324]-work.L[631]*work.d[241]*work.L[325]-work.L[632]*work.d[245]*work.L[326]-work.L[633]*work.d[249]*work.L[327]-work.L[634]*work.d[253]*work.L[328]-work.L[635]*work.d[257]*work.L[329]-work.L[636]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[775]-work.L[656]*work.d[213]*work.L[318]-work.L[657]*work.d[217]*work.L[319]-work.L[658]*work.d[221]*work.L[320]-work.L[659]*work.d[225]*work.L[321]-work.L[660]*work.d[229]*work.L[322]-work.L[661]*work.d[233]*work.L[323]-work.L[662]*work.d[237]*work.L[324]-work.L[663]*work.d[241]*work.L[325]-work.L[664]*work.d[245]*work.L[326]-work.L[665]*work.d[249]*work.L[327]-work.L[666]*work.d[253]*work.L[328]-work.L[667]*work.d[257]*work.L[329]-work.L[668]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[776]-work.L[689]*work.d[213]*work.L[318]-work.L[690]*work.d[217]*work.L[319]-work.L[691]*work.d[221]*work.L[320]-work.L[692]*work.d[225]*work.L[321]-work.L[693]*work.d[229]*work.L[322]-work.L[694]*work.d[233]*work.L[323]-work.L[695]*work.d[237]*work.L[324]-work.L[696]*work.d[241]*work.L[325]-work.L[697]*work.d[245]*work.L[326]-work.L[698]*work.d[249]*work.L[327]-work.L[699]*work.d[253]*work.L[328]-work.L[700]*work.d[257]*work.L[329]-work.L[701]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[777]-work.L[723]*work.d[213]*work.L[318]-work.L[724]*work.d[217]*work.L[319]-work.L[725]*work.d[221]*work.L[320]-work.L[726]*work.d[225]*work.L[321]-work.L[727]*work.d[229]*work.L[322]-work.L[728]*work.d[233]*work.L[323]-work.L[729]*work.d[237]*work.L[324]-work.L[730]*work.d[241]*work.L[325]-work.L[731]*work.d[245]*work.L[326]-work.L[732]*work.d[249]*work.L[327]-work.L[733]*work.d[253]*work.L[328]-work.L[734]*work.d[257]*work.L[329]-work.L[735]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[778]-work.L[758]*work.d[213]*work.L[318]-work.L[759]*work.d[217]*work.L[319]-work.L[760]*work.d[221]*work.L[320]-work.L[761]*work.d[225]*work.L[321]-work.L[762]*work.d[229]*work.L[322]-work.L[763]*work.d[233]*work.L[323]-work.L[764]*work.d[237]*work.L[324]-work.L[765]*work.d[241]*work.L[325]-work.L[766]*work.d[245]*work.L[326]-work.L[767]*work.d[249]*work.L[327]-work.L[768]*work.d[253]*work.L[328]-work.L[769]*work.d[257]*work.L[329]-work.L[770]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[779]-work.L[789]*work.d[213]*work.L[318]-work.L[790]*work.d[217]*work.L[319]-work.L[791]*work.d[221]*work.L[320]-work.L[792]*work.d[225]*work.L[321]-work.L[793]*work.d[229]*work.L[322]-work.L[794]*work.d[233]*work.L[323]-work.L[795]*work.d[237]*work.L[324]-work.L[796]*work.d[241]*work.L[325]-work.L[797]*work.d[245]*work.L[326]-work.L[798]*work.d[249]*work.L[327]-work.L[799]*work.d[253]*work.L[328]-work.L[800]*work.d[257]*work.L[329]-work.L[801]*work.d[261]*1;
  residual += temp*temp;

  temp = work.KKT[786]-work.L[338]*work.d[213]*work.L[338]-work.L[339]*work.d[217]*work.L[339]-work.L[340]*work.d[221]*work.L[340]-work.L[341]*work.d[225]*work.L[341]-work.L[342]*work.d[229]*work.L[342]-work.L[343]*work.d[233]*work.L[343]-work.L[344]*work.d[237]*work.L[344]-work.L[345]*work.d[241]*work.L[345]-work.L[346]*work.d[245]*work.L[346]-work.L[347]*work.d[249]*work.L[347]-work.L[348]*work.d[253]*work.L[348]-work.L[349]*work.d[257]*work.L[349]-work.L[350]*work.d[261]*work.L[350]-1*work.d[265]*1-work.L[337]*work.d[161]*work.L[337]-work.L[351]*work.d[263]*work.L[351]-work.L[352]*work.d[264]*work.L[352];
  residual += temp*temp;

  temp = work.KKT[787]-work.L[359]*work.d[213]*work.L[338]-work.L[360]*work.d[217]*work.L[339]-work.L[361]*work.d[221]*work.L[340]-work.L[362]*work.d[225]*work.L[341]-work.L[363]*work.d[229]*work.L[342]-work.L[364]*work.d[233]*work.L[343]-work.L[365]*work.d[237]*work.L[344]-work.L[366]*work.d[241]*work.L[345]-work.L[367]*work.d[245]*work.L[346]-work.L[368]*work.d[249]*work.L[347]-work.L[369]*work.d[253]*work.L[348]-work.L[370]*work.d[257]*work.L[349]-work.L[371]*work.d[261]*work.L[350]-work.L[372]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[788]-work.L[381]*work.d[213]*work.L[338]-work.L[382]*work.d[217]*work.L[339]-work.L[383]*work.d[221]*work.L[340]-work.L[384]*work.d[225]*work.L[341]-work.L[385]*work.d[229]*work.L[342]-work.L[386]*work.d[233]*work.L[343]-work.L[387]*work.d[237]*work.L[344]-work.L[388]*work.d[241]*work.L[345]-work.L[389]*work.d[245]*work.L[346]-work.L[390]*work.d[249]*work.L[347]-work.L[391]*work.d[253]*work.L[348]-work.L[392]*work.d[257]*work.L[349]-work.L[393]*work.d[261]*work.L[350]-work.L[394]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[789]-work.L[404]*work.d[213]*work.L[338]-work.L[405]*work.d[217]*work.L[339]-work.L[406]*work.d[221]*work.L[340]-work.L[407]*work.d[225]*work.L[341]-work.L[408]*work.d[229]*work.L[342]-work.L[409]*work.d[233]*work.L[343]-work.L[410]*work.d[237]*work.L[344]-work.L[411]*work.d[241]*work.L[345]-work.L[412]*work.d[245]*work.L[346]-work.L[413]*work.d[249]*work.L[347]-work.L[414]*work.d[253]*work.L[348]-work.L[415]*work.d[257]*work.L[349]-work.L[416]*work.d[261]*work.L[350]-work.L[417]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[790]-work.L[428]*work.d[213]*work.L[338]-work.L[429]*work.d[217]*work.L[339]-work.L[430]*work.d[221]*work.L[340]-work.L[431]*work.d[225]*work.L[341]-work.L[432]*work.d[229]*work.L[342]-work.L[433]*work.d[233]*work.L[343]-work.L[434]*work.d[237]*work.L[344]-work.L[435]*work.d[241]*work.L[345]-work.L[436]*work.d[245]*work.L[346]-work.L[437]*work.d[249]*work.L[347]-work.L[438]*work.d[253]*work.L[348]-work.L[439]*work.d[257]*work.L[349]-work.L[440]*work.d[261]*work.L[350]-work.L[441]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[791]-work.L[453]*work.d[213]*work.L[338]-work.L[454]*work.d[217]*work.L[339]-work.L[455]*work.d[221]*work.L[340]-work.L[456]*work.d[225]*work.L[341]-work.L[457]*work.d[229]*work.L[342]-work.L[458]*work.d[233]*work.L[343]-work.L[459]*work.d[237]*work.L[344]-work.L[460]*work.d[241]*work.L[345]-work.L[461]*work.d[245]*work.L[346]-work.L[462]*work.d[249]*work.L[347]-work.L[463]*work.d[253]*work.L[348]-work.L[464]*work.d[257]*work.L[349]-work.L[465]*work.d[261]*work.L[350]-work.L[466]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[792]-work.L[479]*work.d[213]*work.L[338]-work.L[480]*work.d[217]*work.L[339]-work.L[481]*work.d[221]*work.L[340]-work.L[482]*work.d[225]*work.L[341]-work.L[483]*work.d[229]*work.L[342]-work.L[484]*work.d[233]*work.L[343]-work.L[485]*work.d[237]*work.L[344]-work.L[486]*work.d[241]*work.L[345]-work.L[487]*work.d[245]*work.L[346]-work.L[488]*work.d[249]*work.L[347]-work.L[489]*work.d[253]*work.L[348]-work.L[490]*work.d[257]*work.L[349]-work.L[491]*work.d[261]*work.L[350]-work.L[492]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[793]-work.L[506]*work.d[213]*work.L[338]-work.L[507]*work.d[217]*work.L[339]-work.L[508]*work.d[221]*work.L[340]-work.L[509]*work.d[225]*work.L[341]-work.L[510]*work.d[229]*work.L[342]-work.L[511]*work.d[233]*work.L[343]-work.L[512]*work.d[237]*work.L[344]-work.L[513]*work.d[241]*work.L[345]-work.L[514]*work.d[245]*work.L[346]-work.L[515]*work.d[249]*work.L[347]-work.L[516]*work.d[253]*work.L[348]-work.L[517]*work.d[257]*work.L[349]-work.L[518]*work.d[261]*work.L[350]-work.L[519]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[794]-work.L[534]*work.d[213]*work.L[338]-work.L[535]*work.d[217]*work.L[339]-work.L[536]*work.d[221]*work.L[340]-work.L[537]*work.d[225]*work.L[341]-work.L[538]*work.d[229]*work.L[342]-work.L[539]*work.d[233]*work.L[343]-work.L[540]*work.d[237]*work.L[344]-work.L[541]*work.d[241]*work.L[345]-work.L[542]*work.d[245]*work.L[346]-work.L[543]*work.d[249]*work.L[347]-work.L[544]*work.d[253]*work.L[348]-work.L[545]*work.d[257]*work.L[349]-work.L[546]*work.d[261]*work.L[350]-work.L[547]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[795]-work.L[563]*work.d[213]*work.L[338]-work.L[564]*work.d[217]*work.L[339]-work.L[565]*work.d[221]*work.L[340]-work.L[566]*work.d[225]*work.L[341]-work.L[567]*work.d[229]*work.L[342]-work.L[568]*work.d[233]*work.L[343]-work.L[569]*work.d[237]*work.L[344]-work.L[570]*work.d[241]*work.L[345]-work.L[571]*work.d[245]*work.L[346]-work.L[572]*work.d[249]*work.L[347]-work.L[573]*work.d[253]*work.L[348]-work.L[574]*work.d[257]*work.L[349]-work.L[575]*work.d[261]*work.L[350]-work.L[576]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[796]-work.L[593]*work.d[213]*work.L[338]-work.L[594]*work.d[217]*work.L[339]-work.L[595]*work.d[221]*work.L[340]-work.L[596]*work.d[225]*work.L[341]-work.L[597]*work.d[229]*work.L[342]-work.L[598]*work.d[233]*work.L[343]-work.L[599]*work.d[237]*work.L[344]-work.L[600]*work.d[241]*work.L[345]-work.L[601]*work.d[245]*work.L[346]-work.L[602]*work.d[249]*work.L[347]-work.L[603]*work.d[253]*work.L[348]-work.L[604]*work.d[257]*work.L[349]-work.L[605]*work.d[261]*work.L[350]-work.L[606]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[797]-work.L[624]*work.d[213]*work.L[338]-work.L[625]*work.d[217]*work.L[339]-work.L[626]*work.d[221]*work.L[340]-work.L[627]*work.d[225]*work.L[341]-work.L[628]*work.d[229]*work.L[342]-work.L[629]*work.d[233]*work.L[343]-work.L[630]*work.d[237]*work.L[344]-work.L[631]*work.d[241]*work.L[345]-work.L[632]*work.d[245]*work.L[346]-work.L[633]*work.d[249]*work.L[347]-work.L[634]*work.d[253]*work.L[348]-work.L[635]*work.d[257]*work.L[349]-work.L[636]*work.d[261]*work.L[350]-work.L[637]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[798]-work.L[656]*work.d[213]*work.L[338]-work.L[657]*work.d[217]*work.L[339]-work.L[658]*work.d[221]*work.L[340]-work.L[659]*work.d[225]*work.L[341]-work.L[660]*work.d[229]*work.L[342]-work.L[661]*work.d[233]*work.L[343]-work.L[662]*work.d[237]*work.L[344]-work.L[663]*work.d[241]*work.L[345]-work.L[664]*work.d[245]*work.L[346]-work.L[665]*work.d[249]*work.L[347]-work.L[666]*work.d[253]*work.L[348]-work.L[667]*work.d[257]*work.L[349]-work.L[668]*work.d[261]*work.L[350]-work.L[669]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[799]-work.L[689]*work.d[213]*work.L[338]-work.L[690]*work.d[217]*work.L[339]-work.L[691]*work.d[221]*work.L[340]-work.L[692]*work.d[225]*work.L[341]-work.L[693]*work.d[229]*work.L[342]-work.L[694]*work.d[233]*work.L[343]-work.L[695]*work.d[237]*work.L[344]-work.L[696]*work.d[241]*work.L[345]-work.L[697]*work.d[245]*work.L[346]-work.L[698]*work.d[249]*work.L[347]-work.L[699]*work.d[253]*work.L[348]-work.L[700]*work.d[257]*work.L[349]-work.L[701]*work.d[261]*work.L[350]-work.L[702]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[800]-work.L[723]*work.d[213]*work.L[338]-work.L[724]*work.d[217]*work.L[339]-work.L[725]*work.d[221]*work.L[340]-work.L[726]*work.d[225]*work.L[341]-work.L[727]*work.d[229]*work.L[342]-work.L[728]*work.d[233]*work.L[343]-work.L[729]*work.d[237]*work.L[344]-work.L[730]*work.d[241]*work.L[345]-work.L[731]*work.d[245]*work.L[346]-work.L[732]*work.d[249]*work.L[347]-work.L[733]*work.d[253]*work.L[348]-work.L[734]*work.d[257]*work.L[349]-work.L[735]*work.d[261]*work.L[350]-work.L[736]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[801]-work.L[758]*work.d[213]*work.L[338]-work.L[759]*work.d[217]*work.L[339]-work.L[760]*work.d[221]*work.L[340]-work.L[761]*work.d[225]*work.L[341]-work.L[762]*work.d[229]*work.L[342]-work.L[763]*work.d[233]*work.L[343]-work.L[764]*work.d[237]*work.L[344]-work.L[765]*work.d[241]*work.L[345]-work.L[766]*work.d[245]*work.L[346]-work.L[767]*work.d[249]*work.L[347]-work.L[768]*work.d[253]*work.L[348]-work.L[769]*work.d[257]*work.L[349]-work.L[770]*work.d[261]*work.L[350]-work.L[771]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[802]-work.L[789]*work.d[213]*work.L[338]-work.L[790]*work.d[217]*work.L[339]-work.L[791]*work.d[221]*work.L[340]-work.L[792]*work.d[225]*work.L[341]-work.L[793]*work.d[229]*work.L[342]-work.L[794]*work.d[233]*work.L[343]-work.L[795]*work.d[237]*work.L[344]-work.L[796]*work.d[241]*work.L[345]-work.L[797]*work.d[245]*work.L[346]-work.L[798]*work.d[249]*work.L[347]-work.L[799]*work.d[253]*work.L[348]-work.L[800]*work.d[257]*work.L[349]-work.L[801]*work.d[261]*work.L[350]-work.L[802]*work.d[265]*1;
  residual += temp*temp;

  temp = work.KKT[809]-work.L[359]*work.d[213]*work.L[359]-work.L[360]*work.d[217]*work.L[360]-work.L[361]*work.d[221]*work.L[361]-work.L[362]*work.d[225]*work.L[362]-work.L[363]*work.d[229]*work.L[363]-work.L[364]*work.d[233]*work.L[364]-work.L[365]*work.d[237]*work.L[365]-work.L[366]*work.d[241]*work.L[366]-work.L[367]*work.d[245]*work.L[367]-work.L[368]*work.d[249]*work.L[368]-work.L[369]*work.d[253]*work.L[369]-work.L[370]*work.d[257]*work.L[370]-work.L[371]*work.d[261]*work.L[371]-work.L[372]*work.d[265]*work.L[372]-1*work.d[269]*1-work.L[358]*work.d[164]*work.L[358]-work.L[373]*work.d[267]*work.L[373]-work.L[374]*work.d[268]*work.L[374];
  residual += temp*temp;

  temp = work.KKT[810]-work.L[381]*work.d[213]*work.L[359]-work.L[382]*work.d[217]*work.L[360]-work.L[383]*work.d[221]*work.L[361]-work.L[384]*work.d[225]*work.L[362]-work.L[385]*work.d[229]*work.L[363]-work.L[386]*work.d[233]*work.L[364]-work.L[387]*work.d[237]*work.L[365]-work.L[388]*work.d[241]*work.L[366]-work.L[389]*work.d[245]*work.L[367]-work.L[390]*work.d[249]*work.L[368]-work.L[391]*work.d[253]*work.L[369]-work.L[392]*work.d[257]*work.L[370]-work.L[393]*work.d[261]*work.L[371]-work.L[394]*work.d[265]*work.L[372]-work.L[395]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[811]-work.L[404]*work.d[213]*work.L[359]-work.L[405]*work.d[217]*work.L[360]-work.L[406]*work.d[221]*work.L[361]-work.L[407]*work.d[225]*work.L[362]-work.L[408]*work.d[229]*work.L[363]-work.L[409]*work.d[233]*work.L[364]-work.L[410]*work.d[237]*work.L[365]-work.L[411]*work.d[241]*work.L[366]-work.L[412]*work.d[245]*work.L[367]-work.L[413]*work.d[249]*work.L[368]-work.L[414]*work.d[253]*work.L[369]-work.L[415]*work.d[257]*work.L[370]-work.L[416]*work.d[261]*work.L[371]-work.L[417]*work.d[265]*work.L[372]-work.L[418]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[812]-work.L[428]*work.d[213]*work.L[359]-work.L[429]*work.d[217]*work.L[360]-work.L[430]*work.d[221]*work.L[361]-work.L[431]*work.d[225]*work.L[362]-work.L[432]*work.d[229]*work.L[363]-work.L[433]*work.d[233]*work.L[364]-work.L[434]*work.d[237]*work.L[365]-work.L[435]*work.d[241]*work.L[366]-work.L[436]*work.d[245]*work.L[367]-work.L[437]*work.d[249]*work.L[368]-work.L[438]*work.d[253]*work.L[369]-work.L[439]*work.d[257]*work.L[370]-work.L[440]*work.d[261]*work.L[371]-work.L[441]*work.d[265]*work.L[372]-work.L[442]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[813]-work.L[453]*work.d[213]*work.L[359]-work.L[454]*work.d[217]*work.L[360]-work.L[455]*work.d[221]*work.L[361]-work.L[456]*work.d[225]*work.L[362]-work.L[457]*work.d[229]*work.L[363]-work.L[458]*work.d[233]*work.L[364]-work.L[459]*work.d[237]*work.L[365]-work.L[460]*work.d[241]*work.L[366]-work.L[461]*work.d[245]*work.L[367]-work.L[462]*work.d[249]*work.L[368]-work.L[463]*work.d[253]*work.L[369]-work.L[464]*work.d[257]*work.L[370]-work.L[465]*work.d[261]*work.L[371]-work.L[466]*work.d[265]*work.L[372]-work.L[467]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[814]-work.L[479]*work.d[213]*work.L[359]-work.L[480]*work.d[217]*work.L[360]-work.L[481]*work.d[221]*work.L[361]-work.L[482]*work.d[225]*work.L[362]-work.L[483]*work.d[229]*work.L[363]-work.L[484]*work.d[233]*work.L[364]-work.L[485]*work.d[237]*work.L[365]-work.L[486]*work.d[241]*work.L[366]-work.L[487]*work.d[245]*work.L[367]-work.L[488]*work.d[249]*work.L[368]-work.L[489]*work.d[253]*work.L[369]-work.L[490]*work.d[257]*work.L[370]-work.L[491]*work.d[261]*work.L[371]-work.L[492]*work.d[265]*work.L[372]-work.L[493]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[815]-work.L[506]*work.d[213]*work.L[359]-work.L[507]*work.d[217]*work.L[360]-work.L[508]*work.d[221]*work.L[361]-work.L[509]*work.d[225]*work.L[362]-work.L[510]*work.d[229]*work.L[363]-work.L[511]*work.d[233]*work.L[364]-work.L[512]*work.d[237]*work.L[365]-work.L[513]*work.d[241]*work.L[366]-work.L[514]*work.d[245]*work.L[367]-work.L[515]*work.d[249]*work.L[368]-work.L[516]*work.d[253]*work.L[369]-work.L[517]*work.d[257]*work.L[370]-work.L[518]*work.d[261]*work.L[371]-work.L[519]*work.d[265]*work.L[372]-work.L[520]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[816]-work.L[534]*work.d[213]*work.L[359]-work.L[535]*work.d[217]*work.L[360]-work.L[536]*work.d[221]*work.L[361]-work.L[537]*work.d[225]*work.L[362]-work.L[538]*work.d[229]*work.L[363]-work.L[539]*work.d[233]*work.L[364]-work.L[540]*work.d[237]*work.L[365]-work.L[541]*work.d[241]*work.L[366]-work.L[542]*work.d[245]*work.L[367]-work.L[543]*work.d[249]*work.L[368]-work.L[544]*work.d[253]*work.L[369]-work.L[545]*work.d[257]*work.L[370]-work.L[546]*work.d[261]*work.L[371]-work.L[547]*work.d[265]*work.L[372]-work.L[548]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[817]-work.L[563]*work.d[213]*work.L[359]-work.L[564]*work.d[217]*work.L[360]-work.L[565]*work.d[221]*work.L[361]-work.L[566]*work.d[225]*work.L[362]-work.L[567]*work.d[229]*work.L[363]-work.L[568]*work.d[233]*work.L[364]-work.L[569]*work.d[237]*work.L[365]-work.L[570]*work.d[241]*work.L[366]-work.L[571]*work.d[245]*work.L[367]-work.L[572]*work.d[249]*work.L[368]-work.L[573]*work.d[253]*work.L[369]-work.L[574]*work.d[257]*work.L[370]-work.L[575]*work.d[261]*work.L[371]-work.L[576]*work.d[265]*work.L[372]-work.L[577]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[818]-work.L[593]*work.d[213]*work.L[359]-work.L[594]*work.d[217]*work.L[360]-work.L[595]*work.d[221]*work.L[361]-work.L[596]*work.d[225]*work.L[362]-work.L[597]*work.d[229]*work.L[363]-work.L[598]*work.d[233]*work.L[364]-work.L[599]*work.d[237]*work.L[365]-work.L[600]*work.d[241]*work.L[366]-work.L[601]*work.d[245]*work.L[367]-work.L[602]*work.d[249]*work.L[368]-work.L[603]*work.d[253]*work.L[369]-work.L[604]*work.d[257]*work.L[370]-work.L[605]*work.d[261]*work.L[371]-work.L[606]*work.d[265]*work.L[372]-work.L[607]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[819]-work.L[624]*work.d[213]*work.L[359]-work.L[625]*work.d[217]*work.L[360]-work.L[626]*work.d[221]*work.L[361]-work.L[627]*work.d[225]*work.L[362]-work.L[628]*work.d[229]*work.L[363]-work.L[629]*work.d[233]*work.L[364]-work.L[630]*work.d[237]*work.L[365]-work.L[631]*work.d[241]*work.L[366]-work.L[632]*work.d[245]*work.L[367]-work.L[633]*work.d[249]*work.L[368]-work.L[634]*work.d[253]*work.L[369]-work.L[635]*work.d[257]*work.L[370]-work.L[636]*work.d[261]*work.L[371]-work.L[637]*work.d[265]*work.L[372]-work.L[638]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[820]-work.L[656]*work.d[213]*work.L[359]-work.L[657]*work.d[217]*work.L[360]-work.L[658]*work.d[221]*work.L[361]-work.L[659]*work.d[225]*work.L[362]-work.L[660]*work.d[229]*work.L[363]-work.L[661]*work.d[233]*work.L[364]-work.L[662]*work.d[237]*work.L[365]-work.L[663]*work.d[241]*work.L[366]-work.L[664]*work.d[245]*work.L[367]-work.L[665]*work.d[249]*work.L[368]-work.L[666]*work.d[253]*work.L[369]-work.L[667]*work.d[257]*work.L[370]-work.L[668]*work.d[261]*work.L[371]-work.L[669]*work.d[265]*work.L[372]-work.L[670]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[821]-work.L[689]*work.d[213]*work.L[359]-work.L[690]*work.d[217]*work.L[360]-work.L[691]*work.d[221]*work.L[361]-work.L[692]*work.d[225]*work.L[362]-work.L[693]*work.d[229]*work.L[363]-work.L[694]*work.d[233]*work.L[364]-work.L[695]*work.d[237]*work.L[365]-work.L[696]*work.d[241]*work.L[366]-work.L[697]*work.d[245]*work.L[367]-work.L[698]*work.d[249]*work.L[368]-work.L[699]*work.d[253]*work.L[369]-work.L[700]*work.d[257]*work.L[370]-work.L[701]*work.d[261]*work.L[371]-work.L[702]*work.d[265]*work.L[372]-work.L[703]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[822]-work.L[723]*work.d[213]*work.L[359]-work.L[724]*work.d[217]*work.L[360]-work.L[725]*work.d[221]*work.L[361]-work.L[726]*work.d[225]*work.L[362]-work.L[727]*work.d[229]*work.L[363]-work.L[728]*work.d[233]*work.L[364]-work.L[729]*work.d[237]*work.L[365]-work.L[730]*work.d[241]*work.L[366]-work.L[731]*work.d[245]*work.L[367]-work.L[732]*work.d[249]*work.L[368]-work.L[733]*work.d[253]*work.L[369]-work.L[734]*work.d[257]*work.L[370]-work.L[735]*work.d[261]*work.L[371]-work.L[736]*work.d[265]*work.L[372]-work.L[737]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[823]-work.L[758]*work.d[213]*work.L[359]-work.L[759]*work.d[217]*work.L[360]-work.L[760]*work.d[221]*work.L[361]-work.L[761]*work.d[225]*work.L[362]-work.L[762]*work.d[229]*work.L[363]-work.L[763]*work.d[233]*work.L[364]-work.L[764]*work.d[237]*work.L[365]-work.L[765]*work.d[241]*work.L[366]-work.L[766]*work.d[245]*work.L[367]-work.L[767]*work.d[249]*work.L[368]-work.L[768]*work.d[253]*work.L[369]-work.L[769]*work.d[257]*work.L[370]-work.L[770]*work.d[261]*work.L[371]-work.L[771]*work.d[265]*work.L[372]-work.L[772]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[824]-work.L[789]*work.d[213]*work.L[359]-work.L[790]*work.d[217]*work.L[360]-work.L[791]*work.d[221]*work.L[361]-work.L[792]*work.d[225]*work.L[362]-work.L[793]*work.d[229]*work.L[363]-work.L[794]*work.d[233]*work.L[364]-work.L[795]*work.d[237]*work.L[365]-work.L[796]*work.d[241]*work.L[366]-work.L[797]*work.d[245]*work.L[367]-work.L[798]*work.d[249]*work.L[368]-work.L[799]*work.d[253]*work.L[369]-work.L[800]*work.d[257]*work.L[370]-work.L[801]*work.d[261]*work.L[371]-work.L[802]*work.d[265]*work.L[372]-work.L[803]*work.d[269]*1;
  residual += temp*temp;

  temp = work.KKT[831]-work.L[381]*work.d[213]*work.L[381]-work.L[382]*work.d[217]*work.L[382]-work.L[383]*work.d[221]*work.L[383]-work.L[384]*work.d[225]*work.L[384]-work.L[385]*work.d[229]*work.L[385]-work.L[386]*work.d[233]*work.L[386]-work.L[387]*work.d[237]*work.L[387]-work.L[388]*work.d[241]*work.L[388]-work.L[389]*work.d[245]*work.L[389]-work.L[390]*work.d[249]*work.L[390]-work.L[391]*work.d[253]*work.L[391]-work.L[392]*work.d[257]*work.L[392]-work.L[393]*work.d[261]*work.L[393]-work.L[394]*work.d[265]*work.L[394]-work.L[395]*work.d[269]*work.L[395]-1*work.d[273]*1-work.L[380]*work.d[167]*work.L[380]-work.L[396]*work.d[271]*work.L[396]-work.L[397]*work.d[272]*work.L[397];
  residual += temp*temp;

  temp = work.KKT[832]-work.L[404]*work.d[213]*work.L[381]-work.L[405]*work.d[217]*work.L[382]-work.L[406]*work.d[221]*work.L[383]-work.L[407]*work.d[225]*work.L[384]-work.L[408]*work.d[229]*work.L[385]-work.L[409]*work.d[233]*work.L[386]-work.L[410]*work.d[237]*work.L[387]-work.L[411]*work.d[241]*work.L[388]-work.L[412]*work.d[245]*work.L[389]-work.L[413]*work.d[249]*work.L[390]-work.L[414]*work.d[253]*work.L[391]-work.L[415]*work.d[257]*work.L[392]-work.L[416]*work.d[261]*work.L[393]-work.L[417]*work.d[265]*work.L[394]-work.L[418]*work.d[269]*work.L[395]-work.L[419]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[833]-work.L[428]*work.d[213]*work.L[381]-work.L[429]*work.d[217]*work.L[382]-work.L[430]*work.d[221]*work.L[383]-work.L[431]*work.d[225]*work.L[384]-work.L[432]*work.d[229]*work.L[385]-work.L[433]*work.d[233]*work.L[386]-work.L[434]*work.d[237]*work.L[387]-work.L[435]*work.d[241]*work.L[388]-work.L[436]*work.d[245]*work.L[389]-work.L[437]*work.d[249]*work.L[390]-work.L[438]*work.d[253]*work.L[391]-work.L[439]*work.d[257]*work.L[392]-work.L[440]*work.d[261]*work.L[393]-work.L[441]*work.d[265]*work.L[394]-work.L[442]*work.d[269]*work.L[395]-work.L[443]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[834]-work.L[453]*work.d[213]*work.L[381]-work.L[454]*work.d[217]*work.L[382]-work.L[455]*work.d[221]*work.L[383]-work.L[456]*work.d[225]*work.L[384]-work.L[457]*work.d[229]*work.L[385]-work.L[458]*work.d[233]*work.L[386]-work.L[459]*work.d[237]*work.L[387]-work.L[460]*work.d[241]*work.L[388]-work.L[461]*work.d[245]*work.L[389]-work.L[462]*work.d[249]*work.L[390]-work.L[463]*work.d[253]*work.L[391]-work.L[464]*work.d[257]*work.L[392]-work.L[465]*work.d[261]*work.L[393]-work.L[466]*work.d[265]*work.L[394]-work.L[467]*work.d[269]*work.L[395]-work.L[468]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[835]-work.L[479]*work.d[213]*work.L[381]-work.L[480]*work.d[217]*work.L[382]-work.L[481]*work.d[221]*work.L[383]-work.L[482]*work.d[225]*work.L[384]-work.L[483]*work.d[229]*work.L[385]-work.L[484]*work.d[233]*work.L[386]-work.L[485]*work.d[237]*work.L[387]-work.L[486]*work.d[241]*work.L[388]-work.L[487]*work.d[245]*work.L[389]-work.L[488]*work.d[249]*work.L[390]-work.L[489]*work.d[253]*work.L[391]-work.L[490]*work.d[257]*work.L[392]-work.L[491]*work.d[261]*work.L[393]-work.L[492]*work.d[265]*work.L[394]-work.L[493]*work.d[269]*work.L[395]-work.L[494]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[836]-work.L[506]*work.d[213]*work.L[381]-work.L[507]*work.d[217]*work.L[382]-work.L[508]*work.d[221]*work.L[383]-work.L[509]*work.d[225]*work.L[384]-work.L[510]*work.d[229]*work.L[385]-work.L[511]*work.d[233]*work.L[386]-work.L[512]*work.d[237]*work.L[387]-work.L[513]*work.d[241]*work.L[388]-work.L[514]*work.d[245]*work.L[389]-work.L[515]*work.d[249]*work.L[390]-work.L[516]*work.d[253]*work.L[391]-work.L[517]*work.d[257]*work.L[392]-work.L[518]*work.d[261]*work.L[393]-work.L[519]*work.d[265]*work.L[394]-work.L[520]*work.d[269]*work.L[395]-work.L[521]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[837]-work.L[534]*work.d[213]*work.L[381]-work.L[535]*work.d[217]*work.L[382]-work.L[536]*work.d[221]*work.L[383]-work.L[537]*work.d[225]*work.L[384]-work.L[538]*work.d[229]*work.L[385]-work.L[539]*work.d[233]*work.L[386]-work.L[540]*work.d[237]*work.L[387]-work.L[541]*work.d[241]*work.L[388]-work.L[542]*work.d[245]*work.L[389]-work.L[543]*work.d[249]*work.L[390]-work.L[544]*work.d[253]*work.L[391]-work.L[545]*work.d[257]*work.L[392]-work.L[546]*work.d[261]*work.L[393]-work.L[547]*work.d[265]*work.L[394]-work.L[548]*work.d[269]*work.L[395]-work.L[549]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[838]-work.L[563]*work.d[213]*work.L[381]-work.L[564]*work.d[217]*work.L[382]-work.L[565]*work.d[221]*work.L[383]-work.L[566]*work.d[225]*work.L[384]-work.L[567]*work.d[229]*work.L[385]-work.L[568]*work.d[233]*work.L[386]-work.L[569]*work.d[237]*work.L[387]-work.L[570]*work.d[241]*work.L[388]-work.L[571]*work.d[245]*work.L[389]-work.L[572]*work.d[249]*work.L[390]-work.L[573]*work.d[253]*work.L[391]-work.L[574]*work.d[257]*work.L[392]-work.L[575]*work.d[261]*work.L[393]-work.L[576]*work.d[265]*work.L[394]-work.L[577]*work.d[269]*work.L[395]-work.L[578]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[839]-work.L[593]*work.d[213]*work.L[381]-work.L[594]*work.d[217]*work.L[382]-work.L[595]*work.d[221]*work.L[383]-work.L[596]*work.d[225]*work.L[384]-work.L[597]*work.d[229]*work.L[385]-work.L[598]*work.d[233]*work.L[386]-work.L[599]*work.d[237]*work.L[387]-work.L[600]*work.d[241]*work.L[388]-work.L[601]*work.d[245]*work.L[389]-work.L[602]*work.d[249]*work.L[390]-work.L[603]*work.d[253]*work.L[391]-work.L[604]*work.d[257]*work.L[392]-work.L[605]*work.d[261]*work.L[393]-work.L[606]*work.d[265]*work.L[394]-work.L[607]*work.d[269]*work.L[395]-work.L[608]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[840]-work.L[624]*work.d[213]*work.L[381]-work.L[625]*work.d[217]*work.L[382]-work.L[626]*work.d[221]*work.L[383]-work.L[627]*work.d[225]*work.L[384]-work.L[628]*work.d[229]*work.L[385]-work.L[629]*work.d[233]*work.L[386]-work.L[630]*work.d[237]*work.L[387]-work.L[631]*work.d[241]*work.L[388]-work.L[632]*work.d[245]*work.L[389]-work.L[633]*work.d[249]*work.L[390]-work.L[634]*work.d[253]*work.L[391]-work.L[635]*work.d[257]*work.L[392]-work.L[636]*work.d[261]*work.L[393]-work.L[637]*work.d[265]*work.L[394]-work.L[638]*work.d[269]*work.L[395]-work.L[639]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[841]-work.L[656]*work.d[213]*work.L[381]-work.L[657]*work.d[217]*work.L[382]-work.L[658]*work.d[221]*work.L[383]-work.L[659]*work.d[225]*work.L[384]-work.L[660]*work.d[229]*work.L[385]-work.L[661]*work.d[233]*work.L[386]-work.L[662]*work.d[237]*work.L[387]-work.L[663]*work.d[241]*work.L[388]-work.L[664]*work.d[245]*work.L[389]-work.L[665]*work.d[249]*work.L[390]-work.L[666]*work.d[253]*work.L[391]-work.L[667]*work.d[257]*work.L[392]-work.L[668]*work.d[261]*work.L[393]-work.L[669]*work.d[265]*work.L[394]-work.L[670]*work.d[269]*work.L[395]-work.L[671]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[842]-work.L[689]*work.d[213]*work.L[381]-work.L[690]*work.d[217]*work.L[382]-work.L[691]*work.d[221]*work.L[383]-work.L[692]*work.d[225]*work.L[384]-work.L[693]*work.d[229]*work.L[385]-work.L[694]*work.d[233]*work.L[386]-work.L[695]*work.d[237]*work.L[387]-work.L[696]*work.d[241]*work.L[388]-work.L[697]*work.d[245]*work.L[389]-work.L[698]*work.d[249]*work.L[390]-work.L[699]*work.d[253]*work.L[391]-work.L[700]*work.d[257]*work.L[392]-work.L[701]*work.d[261]*work.L[393]-work.L[702]*work.d[265]*work.L[394]-work.L[703]*work.d[269]*work.L[395]-work.L[704]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[843]-work.L[723]*work.d[213]*work.L[381]-work.L[724]*work.d[217]*work.L[382]-work.L[725]*work.d[221]*work.L[383]-work.L[726]*work.d[225]*work.L[384]-work.L[727]*work.d[229]*work.L[385]-work.L[728]*work.d[233]*work.L[386]-work.L[729]*work.d[237]*work.L[387]-work.L[730]*work.d[241]*work.L[388]-work.L[731]*work.d[245]*work.L[389]-work.L[732]*work.d[249]*work.L[390]-work.L[733]*work.d[253]*work.L[391]-work.L[734]*work.d[257]*work.L[392]-work.L[735]*work.d[261]*work.L[393]-work.L[736]*work.d[265]*work.L[394]-work.L[737]*work.d[269]*work.L[395]-work.L[738]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[844]-work.L[758]*work.d[213]*work.L[381]-work.L[759]*work.d[217]*work.L[382]-work.L[760]*work.d[221]*work.L[383]-work.L[761]*work.d[225]*work.L[384]-work.L[762]*work.d[229]*work.L[385]-work.L[763]*work.d[233]*work.L[386]-work.L[764]*work.d[237]*work.L[387]-work.L[765]*work.d[241]*work.L[388]-work.L[766]*work.d[245]*work.L[389]-work.L[767]*work.d[249]*work.L[390]-work.L[768]*work.d[253]*work.L[391]-work.L[769]*work.d[257]*work.L[392]-work.L[770]*work.d[261]*work.L[393]-work.L[771]*work.d[265]*work.L[394]-work.L[772]*work.d[269]*work.L[395]-work.L[773]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[845]-work.L[789]*work.d[213]*work.L[381]-work.L[790]*work.d[217]*work.L[382]-work.L[791]*work.d[221]*work.L[383]-work.L[792]*work.d[225]*work.L[384]-work.L[793]*work.d[229]*work.L[385]-work.L[794]*work.d[233]*work.L[386]-work.L[795]*work.d[237]*work.L[387]-work.L[796]*work.d[241]*work.L[388]-work.L[797]*work.d[245]*work.L[389]-work.L[798]*work.d[249]*work.L[390]-work.L[799]*work.d[253]*work.L[391]-work.L[800]*work.d[257]*work.L[392]-work.L[801]*work.d[261]*work.L[393]-work.L[802]*work.d[265]*work.L[394]-work.L[803]*work.d[269]*work.L[395]-work.L[804]*work.d[273]*1;
  residual += temp*temp;

  temp = work.KKT[852]-work.L[404]*work.d[213]*work.L[404]-work.L[405]*work.d[217]*work.L[405]-work.L[406]*work.d[221]*work.L[406]-work.L[407]*work.d[225]*work.L[407]-work.L[408]*work.d[229]*work.L[408]-work.L[409]*work.d[233]*work.L[409]-work.L[410]*work.d[237]*work.L[410]-work.L[411]*work.d[241]*work.L[411]-work.L[412]*work.d[245]*work.L[412]-work.L[413]*work.d[249]*work.L[413]-work.L[414]*work.d[253]*work.L[414]-work.L[415]*work.d[257]*work.L[415]-work.L[416]*work.d[261]*work.L[416]-work.L[417]*work.d[265]*work.L[417]-work.L[418]*work.d[269]*work.L[418]-work.L[419]*work.d[273]*work.L[419]-1*work.d[277]*1-work.L[403]*work.d[170]*work.L[403]-work.L[420]*work.d[275]*work.L[420]-work.L[421]*work.d[276]*work.L[421];
  residual += temp*temp;

  temp = work.KKT[853]-work.L[428]*work.d[213]*work.L[404]-work.L[429]*work.d[217]*work.L[405]-work.L[430]*work.d[221]*work.L[406]-work.L[431]*work.d[225]*work.L[407]-work.L[432]*work.d[229]*work.L[408]-work.L[433]*work.d[233]*work.L[409]-work.L[434]*work.d[237]*work.L[410]-work.L[435]*work.d[241]*work.L[411]-work.L[436]*work.d[245]*work.L[412]-work.L[437]*work.d[249]*work.L[413]-work.L[438]*work.d[253]*work.L[414]-work.L[439]*work.d[257]*work.L[415]-work.L[440]*work.d[261]*work.L[416]-work.L[441]*work.d[265]*work.L[417]-work.L[442]*work.d[269]*work.L[418]-work.L[443]*work.d[273]*work.L[419]-work.L[444]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[854]-work.L[453]*work.d[213]*work.L[404]-work.L[454]*work.d[217]*work.L[405]-work.L[455]*work.d[221]*work.L[406]-work.L[456]*work.d[225]*work.L[407]-work.L[457]*work.d[229]*work.L[408]-work.L[458]*work.d[233]*work.L[409]-work.L[459]*work.d[237]*work.L[410]-work.L[460]*work.d[241]*work.L[411]-work.L[461]*work.d[245]*work.L[412]-work.L[462]*work.d[249]*work.L[413]-work.L[463]*work.d[253]*work.L[414]-work.L[464]*work.d[257]*work.L[415]-work.L[465]*work.d[261]*work.L[416]-work.L[466]*work.d[265]*work.L[417]-work.L[467]*work.d[269]*work.L[418]-work.L[468]*work.d[273]*work.L[419]-work.L[469]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[855]-work.L[479]*work.d[213]*work.L[404]-work.L[480]*work.d[217]*work.L[405]-work.L[481]*work.d[221]*work.L[406]-work.L[482]*work.d[225]*work.L[407]-work.L[483]*work.d[229]*work.L[408]-work.L[484]*work.d[233]*work.L[409]-work.L[485]*work.d[237]*work.L[410]-work.L[486]*work.d[241]*work.L[411]-work.L[487]*work.d[245]*work.L[412]-work.L[488]*work.d[249]*work.L[413]-work.L[489]*work.d[253]*work.L[414]-work.L[490]*work.d[257]*work.L[415]-work.L[491]*work.d[261]*work.L[416]-work.L[492]*work.d[265]*work.L[417]-work.L[493]*work.d[269]*work.L[418]-work.L[494]*work.d[273]*work.L[419]-work.L[495]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[856]-work.L[506]*work.d[213]*work.L[404]-work.L[507]*work.d[217]*work.L[405]-work.L[508]*work.d[221]*work.L[406]-work.L[509]*work.d[225]*work.L[407]-work.L[510]*work.d[229]*work.L[408]-work.L[511]*work.d[233]*work.L[409]-work.L[512]*work.d[237]*work.L[410]-work.L[513]*work.d[241]*work.L[411]-work.L[514]*work.d[245]*work.L[412]-work.L[515]*work.d[249]*work.L[413]-work.L[516]*work.d[253]*work.L[414]-work.L[517]*work.d[257]*work.L[415]-work.L[518]*work.d[261]*work.L[416]-work.L[519]*work.d[265]*work.L[417]-work.L[520]*work.d[269]*work.L[418]-work.L[521]*work.d[273]*work.L[419]-work.L[522]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[857]-work.L[534]*work.d[213]*work.L[404]-work.L[535]*work.d[217]*work.L[405]-work.L[536]*work.d[221]*work.L[406]-work.L[537]*work.d[225]*work.L[407]-work.L[538]*work.d[229]*work.L[408]-work.L[539]*work.d[233]*work.L[409]-work.L[540]*work.d[237]*work.L[410]-work.L[541]*work.d[241]*work.L[411]-work.L[542]*work.d[245]*work.L[412]-work.L[543]*work.d[249]*work.L[413]-work.L[544]*work.d[253]*work.L[414]-work.L[545]*work.d[257]*work.L[415]-work.L[546]*work.d[261]*work.L[416]-work.L[547]*work.d[265]*work.L[417]-work.L[548]*work.d[269]*work.L[418]-work.L[549]*work.d[273]*work.L[419]-work.L[550]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[858]-work.L[563]*work.d[213]*work.L[404]-work.L[564]*work.d[217]*work.L[405]-work.L[565]*work.d[221]*work.L[406]-work.L[566]*work.d[225]*work.L[407]-work.L[567]*work.d[229]*work.L[408]-work.L[568]*work.d[233]*work.L[409]-work.L[569]*work.d[237]*work.L[410]-work.L[570]*work.d[241]*work.L[411]-work.L[571]*work.d[245]*work.L[412]-work.L[572]*work.d[249]*work.L[413]-work.L[573]*work.d[253]*work.L[414]-work.L[574]*work.d[257]*work.L[415]-work.L[575]*work.d[261]*work.L[416]-work.L[576]*work.d[265]*work.L[417]-work.L[577]*work.d[269]*work.L[418]-work.L[578]*work.d[273]*work.L[419]-work.L[579]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[859]-work.L[593]*work.d[213]*work.L[404]-work.L[594]*work.d[217]*work.L[405]-work.L[595]*work.d[221]*work.L[406]-work.L[596]*work.d[225]*work.L[407]-work.L[597]*work.d[229]*work.L[408]-work.L[598]*work.d[233]*work.L[409]-work.L[599]*work.d[237]*work.L[410]-work.L[600]*work.d[241]*work.L[411]-work.L[601]*work.d[245]*work.L[412]-work.L[602]*work.d[249]*work.L[413]-work.L[603]*work.d[253]*work.L[414]-work.L[604]*work.d[257]*work.L[415]-work.L[605]*work.d[261]*work.L[416]-work.L[606]*work.d[265]*work.L[417]-work.L[607]*work.d[269]*work.L[418]-work.L[608]*work.d[273]*work.L[419]-work.L[609]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[860]-work.L[624]*work.d[213]*work.L[404]-work.L[625]*work.d[217]*work.L[405]-work.L[626]*work.d[221]*work.L[406]-work.L[627]*work.d[225]*work.L[407]-work.L[628]*work.d[229]*work.L[408]-work.L[629]*work.d[233]*work.L[409]-work.L[630]*work.d[237]*work.L[410]-work.L[631]*work.d[241]*work.L[411]-work.L[632]*work.d[245]*work.L[412]-work.L[633]*work.d[249]*work.L[413]-work.L[634]*work.d[253]*work.L[414]-work.L[635]*work.d[257]*work.L[415]-work.L[636]*work.d[261]*work.L[416]-work.L[637]*work.d[265]*work.L[417]-work.L[638]*work.d[269]*work.L[418]-work.L[639]*work.d[273]*work.L[419]-work.L[640]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[861]-work.L[656]*work.d[213]*work.L[404]-work.L[657]*work.d[217]*work.L[405]-work.L[658]*work.d[221]*work.L[406]-work.L[659]*work.d[225]*work.L[407]-work.L[660]*work.d[229]*work.L[408]-work.L[661]*work.d[233]*work.L[409]-work.L[662]*work.d[237]*work.L[410]-work.L[663]*work.d[241]*work.L[411]-work.L[664]*work.d[245]*work.L[412]-work.L[665]*work.d[249]*work.L[413]-work.L[666]*work.d[253]*work.L[414]-work.L[667]*work.d[257]*work.L[415]-work.L[668]*work.d[261]*work.L[416]-work.L[669]*work.d[265]*work.L[417]-work.L[670]*work.d[269]*work.L[418]-work.L[671]*work.d[273]*work.L[419]-work.L[672]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[862]-work.L[689]*work.d[213]*work.L[404]-work.L[690]*work.d[217]*work.L[405]-work.L[691]*work.d[221]*work.L[406]-work.L[692]*work.d[225]*work.L[407]-work.L[693]*work.d[229]*work.L[408]-work.L[694]*work.d[233]*work.L[409]-work.L[695]*work.d[237]*work.L[410]-work.L[696]*work.d[241]*work.L[411]-work.L[697]*work.d[245]*work.L[412]-work.L[698]*work.d[249]*work.L[413]-work.L[699]*work.d[253]*work.L[414]-work.L[700]*work.d[257]*work.L[415]-work.L[701]*work.d[261]*work.L[416]-work.L[702]*work.d[265]*work.L[417]-work.L[703]*work.d[269]*work.L[418]-work.L[704]*work.d[273]*work.L[419]-work.L[705]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[863]-work.L[723]*work.d[213]*work.L[404]-work.L[724]*work.d[217]*work.L[405]-work.L[725]*work.d[221]*work.L[406]-work.L[726]*work.d[225]*work.L[407]-work.L[727]*work.d[229]*work.L[408]-work.L[728]*work.d[233]*work.L[409]-work.L[729]*work.d[237]*work.L[410]-work.L[730]*work.d[241]*work.L[411]-work.L[731]*work.d[245]*work.L[412]-work.L[732]*work.d[249]*work.L[413]-work.L[733]*work.d[253]*work.L[414]-work.L[734]*work.d[257]*work.L[415]-work.L[735]*work.d[261]*work.L[416]-work.L[736]*work.d[265]*work.L[417]-work.L[737]*work.d[269]*work.L[418]-work.L[738]*work.d[273]*work.L[419]-work.L[739]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[864]-work.L[758]*work.d[213]*work.L[404]-work.L[759]*work.d[217]*work.L[405]-work.L[760]*work.d[221]*work.L[406]-work.L[761]*work.d[225]*work.L[407]-work.L[762]*work.d[229]*work.L[408]-work.L[763]*work.d[233]*work.L[409]-work.L[764]*work.d[237]*work.L[410]-work.L[765]*work.d[241]*work.L[411]-work.L[766]*work.d[245]*work.L[412]-work.L[767]*work.d[249]*work.L[413]-work.L[768]*work.d[253]*work.L[414]-work.L[769]*work.d[257]*work.L[415]-work.L[770]*work.d[261]*work.L[416]-work.L[771]*work.d[265]*work.L[417]-work.L[772]*work.d[269]*work.L[418]-work.L[773]*work.d[273]*work.L[419]-work.L[774]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[865]-work.L[789]*work.d[213]*work.L[404]-work.L[790]*work.d[217]*work.L[405]-work.L[791]*work.d[221]*work.L[406]-work.L[792]*work.d[225]*work.L[407]-work.L[793]*work.d[229]*work.L[408]-work.L[794]*work.d[233]*work.L[409]-work.L[795]*work.d[237]*work.L[410]-work.L[796]*work.d[241]*work.L[411]-work.L[797]*work.d[245]*work.L[412]-work.L[798]*work.d[249]*work.L[413]-work.L[799]*work.d[253]*work.L[414]-work.L[800]*work.d[257]*work.L[415]-work.L[801]*work.d[261]*work.L[416]-work.L[802]*work.d[265]*work.L[417]-work.L[803]*work.d[269]*work.L[418]-work.L[804]*work.d[273]*work.L[419]-work.L[805]*work.d[277]*1;
  residual += temp*temp;

  temp = work.KKT[872]-work.L[428]*work.d[213]*work.L[428]-work.L[429]*work.d[217]*work.L[429]-work.L[430]*work.d[221]*work.L[430]-work.L[431]*work.d[225]*work.L[431]-work.L[432]*work.d[229]*work.L[432]-work.L[433]*work.d[233]*work.L[433]-work.L[434]*work.d[237]*work.L[434]-work.L[435]*work.d[241]*work.L[435]-work.L[436]*work.d[245]*work.L[436]-work.L[437]*work.d[249]*work.L[437]-work.L[438]*work.d[253]*work.L[438]-work.L[439]*work.d[257]*work.L[439]-work.L[440]*work.d[261]*work.L[440]-work.L[441]*work.d[265]*work.L[441]-work.L[442]*work.d[269]*work.L[442]-work.L[443]*work.d[273]*work.L[443]-work.L[444]*work.d[277]*work.L[444]-1*work.d[281]*1-work.L[427]*work.d[173]*work.L[427]-work.L[445]*work.d[279]*work.L[445]-work.L[446]*work.d[280]*work.L[446];
  residual += temp*temp;

  temp = work.KKT[873]-work.L[453]*work.d[213]*work.L[428]-work.L[454]*work.d[217]*work.L[429]-work.L[455]*work.d[221]*work.L[430]-work.L[456]*work.d[225]*work.L[431]-work.L[457]*work.d[229]*work.L[432]-work.L[458]*work.d[233]*work.L[433]-work.L[459]*work.d[237]*work.L[434]-work.L[460]*work.d[241]*work.L[435]-work.L[461]*work.d[245]*work.L[436]-work.L[462]*work.d[249]*work.L[437]-work.L[463]*work.d[253]*work.L[438]-work.L[464]*work.d[257]*work.L[439]-work.L[465]*work.d[261]*work.L[440]-work.L[466]*work.d[265]*work.L[441]-work.L[467]*work.d[269]*work.L[442]-work.L[468]*work.d[273]*work.L[443]-work.L[469]*work.d[277]*work.L[444]-work.L[470]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[874]-work.L[479]*work.d[213]*work.L[428]-work.L[480]*work.d[217]*work.L[429]-work.L[481]*work.d[221]*work.L[430]-work.L[482]*work.d[225]*work.L[431]-work.L[483]*work.d[229]*work.L[432]-work.L[484]*work.d[233]*work.L[433]-work.L[485]*work.d[237]*work.L[434]-work.L[486]*work.d[241]*work.L[435]-work.L[487]*work.d[245]*work.L[436]-work.L[488]*work.d[249]*work.L[437]-work.L[489]*work.d[253]*work.L[438]-work.L[490]*work.d[257]*work.L[439]-work.L[491]*work.d[261]*work.L[440]-work.L[492]*work.d[265]*work.L[441]-work.L[493]*work.d[269]*work.L[442]-work.L[494]*work.d[273]*work.L[443]-work.L[495]*work.d[277]*work.L[444]-work.L[496]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[875]-work.L[506]*work.d[213]*work.L[428]-work.L[507]*work.d[217]*work.L[429]-work.L[508]*work.d[221]*work.L[430]-work.L[509]*work.d[225]*work.L[431]-work.L[510]*work.d[229]*work.L[432]-work.L[511]*work.d[233]*work.L[433]-work.L[512]*work.d[237]*work.L[434]-work.L[513]*work.d[241]*work.L[435]-work.L[514]*work.d[245]*work.L[436]-work.L[515]*work.d[249]*work.L[437]-work.L[516]*work.d[253]*work.L[438]-work.L[517]*work.d[257]*work.L[439]-work.L[518]*work.d[261]*work.L[440]-work.L[519]*work.d[265]*work.L[441]-work.L[520]*work.d[269]*work.L[442]-work.L[521]*work.d[273]*work.L[443]-work.L[522]*work.d[277]*work.L[444]-work.L[523]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[876]-work.L[534]*work.d[213]*work.L[428]-work.L[535]*work.d[217]*work.L[429]-work.L[536]*work.d[221]*work.L[430]-work.L[537]*work.d[225]*work.L[431]-work.L[538]*work.d[229]*work.L[432]-work.L[539]*work.d[233]*work.L[433]-work.L[540]*work.d[237]*work.L[434]-work.L[541]*work.d[241]*work.L[435]-work.L[542]*work.d[245]*work.L[436]-work.L[543]*work.d[249]*work.L[437]-work.L[544]*work.d[253]*work.L[438]-work.L[545]*work.d[257]*work.L[439]-work.L[546]*work.d[261]*work.L[440]-work.L[547]*work.d[265]*work.L[441]-work.L[548]*work.d[269]*work.L[442]-work.L[549]*work.d[273]*work.L[443]-work.L[550]*work.d[277]*work.L[444]-work.L[551]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[877]-work.L[563]*work.d[213]*work.L[428]-work.L[564]*work.d[217]*work.L[429]-work.L[565]*work.d[221]*work.L[430]-work.L[566]*work.d[225]*work.L[431]-work.L[567]*work.d[229]*work.L[432]-work.L[568]*work.d[233]*work.L[433]-work.L[569]*work.d[237]*work.L[434]-work.L[570]*work.d[241]*work.L[435]-work.L[571]*work.d[245]*work.L[436]-work.L[572]*work.d[249]*work.L[437]-work.L[573]*work.d[253]*work.L[438]-work.L[574]*work.d[257]*work.L[439]-work.L[575]*work.d[261]*work.L[440]-work.L[576]*work.d[265]*work.L[441]-work.L[577]*work.d[269]*work.L[442]-work.L[578]*work.d[273]*work.L[443]-work.L[579]*work.d[277]*work.L[444]-work.L[580]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[878]-work.L[593]*work.d[213]*work.L[428]-work.L[594]*work.d[217]*work.L[429]-work.L[595]*work.d[221]*work.L[430]-work.L[596]*work.d[225]*work.L[431]-work.L[597]*work.d[229]*work.L[432]-work.L[598]*work.d[233]*work.L[433]-work.L[599]*work.d[237]*work.L[434]-work.L[600]*work.d[241]*work.L[435]-work.L[601]*work.d[245]*work.L[436]-work.L[602]*work.d[249]*work.L[437]-work.L[603]*work.d[253]*work.L[438]-work.L[604]*work.d[257]*work.L[439]-work.L[605]*work.d[261]*work.L[440]-work.L[606]*work.d[265]*work.L[441]-work.L[607]*work.d[269]*work.L[442]-work.L[608]*work.d[273]*work.L[443]-work.L[609]*work.d[277]*work.L[444]-work.L[610]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[879]-work.L[624]*work.d[213]*work.L[428]-work.L[625]*work.d[217]*work.L[429]-work.L[626]*work.d[221]*work.L[430]-work.L[627]*work.d[225]*work.L[431]-work.L[628]*work.d[229]*work.L[432]-work.L[629]*work.d[233]*work.L[433]-work.L[630]*work.d[237]*work.L[434]-work.L[631]*work.d[241]*work.L[435]-work.L[632]*work.d[245]*work.L[436]-work.L[633]*work.d[249]*work.L[437]-work.L[634]*work.d[253]*work.L[438]-work.L[635]*work.d[257]*work.L[439]-work.L[636]*work.d[261]*work.L[440]-work.L[637]*work.d[265]*work.L[441]-work.L[638]*work.d[269]*work.L[442]-work.L[639]*work.d[273]*work.L[443]-work.L[640]*work.d[277]*work.L[444]-work.L[641]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[880]-work.L[656]*work.d[213]*work.L[428]-work.L[657]*work.d[217]*work.L[429]-work.L[658]*work.d[221]*work.L[430]-work.L[659]*work.d[225]*work.L[431]-work.L[660]*work.d[229]*work.L[432]-work.L[661]*work.d[233]*work.L[433]-work.L[662]*work.d[237]*work.L[434]-work.L[663]*work.d[241]*work.L[435]-work.L[664]*work.d[245]*work.L[436]-work.L[665]*work.d[249]*work.L[437]-work.L[666]*work.d[253]*work.L[438]-work.L[667]*work.d[257]*work.L[439]-work.L[668]*work.d[261]*work.L[440]-work.L[669]*work.d[265]*work.L[441]-work.L[670]*work.d[269]*work.L[442]-work.L[671]*work.d[273]*work.L[443]-work.L[672]*work.d[277]*work.L[444]-work.L[673]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[881]-work.L[689]*work.d[213]*work.L[428]-work.L[690]*work.d[217]*work.L[429]-work.L[691]*work.d[221]*work.L[430]-work.L[692]*work.d[225]*work.L[431]-work.L[693]*work.d[229]*work.L[432]-work.L[694]*work.d[233]*work.L[433]-work.L[695]*work.d[237]*work.L[434]-work.L[696]*work.d[241]*work.L[435]-work.L[697]*work.d[245]*work.L[436]-work.L[698]*work.d[249]*work.L[437]-work.L[699]*work.d[253]*work.L[438]-work.L[700]*work.d[257]*work.L[439]-work.L[701]*work.d[261]*work.L[440]-work.L[702]*work.d[265]*work.L[441]-work.L[703]*work.d[269]*work.L[442]-work.L[704]*work.d[273]*work.L[443]-work.L[705]*work.d[277]*work.L[444]-work.L[706]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[882]-work.L[723]*work.d[213]*work.L[428]-work.L[724]*work.d[217]*work.L[429]-work.L[725]*work.d[221]*work.L[430]-work.L[726]*work.d[225]*work.L[431]-work.L[727]*work.d[229]*work.L[432]-work.L[728]*work.d[233]*work.L[433]-work.L[729]*work.d[237]*work.L[434]-work.L[730]*work.d[241]*work.L[435]-work.L[731]*work.d[245]*work.L[436]-work.L[732]*work.d[249]*work.L[437]-work.L[733]*work.d[253]*work.L[438]-work.L[734]*work.d[257]*work.L[439]-work.L[735]*work.d[261]*work.L[440]-work.L[736]*work.d[265]*work.L[441]-work.L[737]*work.d[269]*work.L[442]-work.L[738]*work.d[273]*work.L[443]-work.L[739]*work.d[277]*work.L[444]-work.L[740]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[883]-work.L[758]*work.d[213]*work.L[428]-work.L[759]*work.d[217]*work.L[429]-work.L[760]*work.d[221]*work.L[430]-work.L[761]*work.d[225]*work.L[431]-work.L[762]*work.d[229]*work.L[432]-work.L[763]*work.d[233]*work.L[433]-work.L[764]*work.d[237]*work.L[434]-work.L[765]*work.d[241]*work.L[435]-work.L[766]*work.d[245]*work.L[436]-work.L[767]*work.d[249]*work.L[437]-work.L[768]*work.d[253]*work.L[438]-work.L[769]*work.d[257]*work.L[439]-work.L[770]*work.d[261]*work.L[440]-work.L[771]*work.d[265]*work.L[441]-work.L[772]*work.d[269]*work.L[442]-work.L[773]*work.d[273]*work.L[443]-work.L[774]*work.d[277]*work.L[444]-work.L[775]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[884]-work.L[789]*work.d[213]*work.L[428]-work.L[790]*work.d[217]*work.L[429]-work.L[791]*work.d[221]*work.L[430]-work.L[792]*work.d[225]*work.L[431]-work.L[793]*work.d[229]*work.L[432]-work.L[794]*work.d[233]*work.L[433]-work.L[795]*work.d[237]*work.L[434]-work.L[796]*work.d[241]*work.L[435]-work.L[797]*work.d[245]*work.L[436]-work.L[798]*work.d[249]*work.L[437]-work.L[799]*work.d[253]*work.L[438]-work.L[800]*work.d[257]*work.L[439]-work.L[801]*work.d[261]*work.L[440]-work.L[802]*work.d[265]*work.L[441]-work.L[803]*work.d[269]*work.L[442]-work.L[804]*work.d[273]*work.L[443]-work.L[805]*work.d[277]*work.L[444]-work.L[806]*work.d[281]*1;
  residual += temp*temp;

  temp = work.KKT[891]-work.L[453]*work.d[213]*work.L[453]-work.L[454]*work.d[217]*work.L[454]-work.L[455]*work.d[221]*work.L[455]-work.L[456]*work.d[225]*work.L[456]-work.L[457]*work.d[229]*work.L[457]-work.L[458]*work.d[233]*work.L[458]-work.L[459]*work.d[237]*work.L[459]-work.L[460]*work.d[241]*work.L[460]-work.L[461]*work.d[245]*work.L[461]-work.L[462]*work.d[249]*work.L[462]-work.L[463]*work.d[253]*work.L[463]-work.L[464]*work.d[257]*work.L[464]-work.L[465]*work.d[261]*work.L[465]-work.L[466]*work.d[265]*work.L[466]-work.L[467]*work.d[269]*work.L[467]-work.L[468]*work.d[273]*work.L[468]-work.L[469]*work.d[277]*work.L[469]-work.L[470]*work.d[281]*work.L[470]-1*work.d[285]*1-work.L[452]*work.d[176]*work.L[452]-work.L[471]*work.d[283]*work.L[471]-work.L[472]*work.d[284]*work.L[472];
  residual += temp*temp;

  temp = work.KKT[892]-work.L[479]*work.d[213]*work.L[453]-work.L[480]*work.d[217]*work.L[454]-work.L[481]*work.d[221]*work.L[455]-work.L[482]*work.d[225]*work.L[456]-work.L[483]*work.d[229]*work.L[457]-work.L[484]*work.d[233]*work.L[458]-work.L[485]*work.d[237]*work.L[459]-work.L[486]*work.d[241]*work.L[460]-work.L[487]*work.d[245]*work.L[461]-work.L[488]*work.d[249]*work.L[462]-work.L[489]*work.d[253]*work.L[463]-work.L[490]*work.d[257]*work.L[464]-work.L[491]*work.d[261]*work.L[465]-work.L[492]*work.d[265]*work.L[466]-work.L[493]*work.d[269]*work.L[467]-work.L[494]*work.d[273]*work.L[468]-work.L[495]*work.d[277]*work.L[469]-work.L[496]*work.d[281]*work.L[470]-work.L[497]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[893]-work.L[506]*work.d[213]*work.L[453]-work.L[507]*work.d[217]*work.L[454]-work.L[508]*work.d[221]*work.L[455]-work.L[509]*work.d[225]*work.L[456]-work.L[510]*work.d[229]*work.L[457]-work.L[511]*work.d[233]*work.L[458]-work.L[512]*work.d[237]*work.L[459]-work.L[513]*work.d[241]*work.L[460]-work.L[514]*work.d[245]*work.L[461]-work.L[515]*work.d[249]*work.L[462]-work.L[516]*work.d[253]*work.L[463]-work.L[517]*work.d[257]*work.L[464]-work.L[518]*work.d[261]*work.L[465]-work.L[519]*work.d[265]*work.L[466]-work.L[520]*work.d[269]*work.L[467]-work.L[521]*work.d[273]*work.L[468]-work.L[522]*work.d[277]*work.L[469]-work.L[523]*work.d[281]*work.L[470]-work.L[524]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[894]-work.L[534]*work.d[213]*work.L[453]-work.L[535]*work.d[217]*work.L[454]-work.L[536]*work.d[221]*work.L[455]-work.L[537]*work.d[225]*work.L[456]-work.L[538]*work.d[229]*work.L[457]-work.L[539]*work.d[233]*work.L[458]-work.L[540]*work.d[237]*work.L[459]-work.L[541]*work.d[241]*work.L[460]-work.L[542]*work.d[245]*work.L[461]-work.L[543]*work.d[249]*work.L[462]-work.L[544]*work.d[253]*work.L[463]-work.L[545]*work.d[257]*work.L[464]-work.L[546]*work.d[261]*work.L[465]-work.L[547]*work.d[265]*work.L[466]-work.L[548]*work.d[269]*work.L[467]-work.L[549]*work.d[273]*work.L[468]-work.L[550]*work.d[277]*work.L[469]-work.L[551]*work.d[281]*work.L[470]-work.L[552]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[895]-work.L[563]*work.d[213]*work.L[453]-work.L[564]*work.d[217]*work.L[454]-work.L[565]*work.d[221]*work.L[455]-work.L[566]*work.d[225]*work.L[456]-work.L[567]*work.d[229]*work.L[457]-work.L[568]*work.d[233]*work.L[458]-work.L[569]*work.d[237]*work.L[459]-work.L[570]*work.d[241]*work.L[460]-work.L[571]*work.d[245]*work.L[461]-work.L[572]*work.d[249]*work.L[462]-work.L[573]*work.d[253]*work.L[463]-work.L[574]*work.d[257]*work.L[464]-work.L[575]*work.d[261]*work.L[465]-work.L[576]*work.d[265]*work.L[466]-work.L[577]*work.d[269]*work.L[467]-work.L[578]*work.d[273]*work.L[468]-work.L[579]*work.d[277]*work.L[469]-work.L[580]*work.d[281]*work.L[470]-work.L[581]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[896]-work.L[593]*work.d[213]*work.L[453]-work.L[594]*work.d[217]*work.L[454]-work.L[595]*work.d[221]*work.L[455]-work.L[596]*work.d[225]*work.L[456]-work.L[597]*work.d[229]*work.L[457]-work.L[598]*work.d[233]*work.L[458]-work.L[599]*work.d[237]*work.L[459]-work.L[600]*work.d[241]*work.L[460]-work.L[601]*work.d[245]*work.L[461]-work.L[602]*work.d[249]*work.L[462]-work.L[603]*work.d[253]*work.L[463]-work.L[604]*work.d[257]*work.L[464]-work.L[605]*work.d[261]*work.L[465]-work.L[606]*work.d[265]*work.L[466]-work.L[607]*work.d[269]*work.L[467]-work.L[608]*work.d[273]*work.L[468]-work.L[609]*work.d[277]*work.L[469]-work.L[610]*work.d[281]*work.L[470]-work.L[611]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[897]-work.L[624]*work.d[213]*work.L[453]-work.L[625]*work.d[217]*work.L[454]-work.L[626]*work.d[221]*work.L[455]-work.L[627]*work.d[225]*work.L[456]-work.L[628]*work.d[229]*work.L[457]-work.L[629]*work.d[233]*work.L[458]-work.L[630]*work.d[237]*work.L[459]-work.L[631]*work.d[241]*work.L[460]-work.L[632]*work.d[245]*work.L[461]-work.L[633]*work.d[249]*work.L[462]-work.L[634]*work.d[253]*work.L[463]-work.L[635]*work.d[257]*work.L[464]-work.L[636]*work.d[261]*work.L[465]-work.L[637]*work.d[265]*work.L[466]-work.L[638]*work.d[269]*work.L[467]-work.L[639]*work.d[273]*work.L[468]-work.L[640]*work.d[277]*work.L[469]-work.L[641]*work.d[281]*work.L[470]-work.L[642]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[898]-work.L[656]*work.d[213]*work.L[453]-work.L[657]*work.d[217]*work.L[454]-work.L[658]*work.d[221]*work.L[455]-work.L[659]*work.d[225]*work.L[456]-work.L[660]*work.d[229]*work.L[457]-work.L[661]*work.d[233]*work.L[458]-work.L[662]*work.d[237]*work.L[459]-work.L[663]*work.d[241]*work.L[460]-work.L[664]*work.d[245]*work.L[461]-work.L[665]*work.d[249]*work.L[462]-work.L[666]*work.d[253]*work.L[463]-work.L[667]*work.d[257]*work.L[464]-work.L[668]*work.d[261]*work.L[465]-work.L[669]*work.d[265]*work.L[466]-work.L[670]*work.d[269]*work.L[467]-work.L[671]*work.d[273]*work.L[468]-work.L[672]*work.d[277]*work.L[469]-work.L[673]*work.d[281]*work.L[470]-work.L[674]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[899]-work.L[689]*work.d[213]*work.L[453]-work.L[690]*work.d[217]*work.L[454]-work.L[691]*work.d[221]*work.L[455]-work.L[692]*work.d[225]*work.L[456]-work.L[693]*work.d[229]*work.L[457]-work.L[694]*work.d[233]*work.L[458]-work.L[695]*work.d[237]*work.L[459]-work.L[696]*work.d[241]*work.L[460]-work.L[697]*work.d[245]*work.L[461]-work.L[698]*work.d[249]*work.L[462]-work.L[699]*work.d[253]*work.L[463]-work.L[700]*work.d[257]*work.L[464]-work.L[701]*work.d[261]*work.L[465]-work.L[702]*work.d[265]*work.L[466]-work.L[703]*work.d[269]*work.L[467]-work.L[704]*work.d[273]*work.L[468]-work.L[705]*work.d[277]*work.L[469]-work.L[706]*work.d[281]*work.L[470]-work.L[707]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[900]-work.L[723]*work.d[213]*work.L[453]-work.L[724]*work.d[217]*work.L[454]-work.L[725]*work.d[221]*work.L[455]-work.L[726]*work.d[225]*work.L[456]-work.L[727]*work.d[229]*work.L[457]-work.L[728]*work.d[233]*work.L[458]-work.L[729]*work.d[237]*work.L[459]-work.L[730]*work.d[241]*work.L[460]-work.L[731]*work.d[245]*work.L[461]-work.L[732]*work.d[249]*work.L[462]-work.L[733]*work.d[253]*work.L[463]-work.L[734]*work.d[257]*work.L[464]-work.L[735]*work.d[261]*work.L[465]-work.L[736]*work.d[265]*work.L[466]-work.L[737]*work.d[269]*work.L[467]-work.L[738]*work.d[273]*work.L[468]-work.L[739]*work.d[277]*work.L[469]-work.L[740]*work.d[281]*work.L[470]-work.L[741]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[901]-work.L[758]*work.d[213]*work.L[453]-work.L[759]*work.d[217]*work.L[454]-work.L[760]*work.d[221]*work.L[455]-work.L[761]*work.d[225]*work.L[456]-work.L[762]*work.d[229]*work.L[457]-work.L[763]*work.d[233]*work.L[458]-work.L[764]*work.d[237]*work.L[459]-work.L[765]*work.d[241]*work.L[460]-work.L[766]*work.d[245]*work.L[461]-work.L[767]*work.d[249]*work.L[462]-work.L[768]*work.d[253]*work.L[463]-work.L[769]*work.d[257]*work.L[464]-work.L[770]*work.d[261]*work.L[465]-work.L[771]*work.d[265]*work.L[466]-work.L[772]*work.d[269]*work.L[467]-work.L[773]*work.d[273]*work.L[468]-work.L[774]*work.d[277]*work.L[469]-work.L[775]*work.d[281]*work.L[470]-work.L[776]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[902]-work.L[789]*work.d[213]*work.L[453]-work.L[790]*work.d[217]*work.L[454]-work.L[791]*work.d[221]*work.L[455]-work.L[792]*work.d[225]*work.L[456]-work.L[793]*work.d[229]*work.L[457]-work.L[794]*work.d[233]*work.L[458]-work.L[795]*work.d[237]*work.L[459]-work.L[796]*work.d[241]*work.L[460]-work.L[797]*work.d[245]*work.L[461]-work.L[798]*work.d[249]*work.L[462]-work.L[799]*work.d[253]*work.L[463]-work.L[800]*work.d[257]*work.L[464]-work.L[801]*work.d[261]*work.L[465]-work.L[802]*work.d[265]*work.L[466]-work.L[803]*work.d[269]*work.L[467]-work.L[804]*work.d[273]*work.L[468]-work.L[805]*work.d[277]*work.L[469]-work.L[806]*work.d[281]*work.L[470]-work.L[807]*work.d[285]*1;
  residual += temp*temp;

  temp = work.KKT[909]-work.L[479]*work.d[213]*work.L[479]-work.L[480]*work.d[217]*work.L[480]-work.L[481]*work.d[221]*work.L[481]-work.L[482]*work.d[225]*work.L[482]-work.L[483]*work.d[229]*work.L[483]-work.L[484]*work.d[233]*work.L[484]-work.L[485]*work.d[237]*work.L[485]-work.L[486]*work.d[241]*work.L[486]-work.L[487]*work.d[245]*work.L[487]-work.L[488]*work.d[249]*work.L[488]-work.L[489]*work.d[253]*work.L[489]-work.L[490]*work.d[257]*work.L[490]-work.L[491]*work.d[261]*work.L[491]-work.L[492]*work.d[265]*work.L[492]-work.L[493]*work.d[269]*work.L[493]-work.L[494]*work.d[273]*work.L[494]-work.L[495]*work.d[277]*work.L[495]-work.L[496]*work.d[281]*work.L[496]-work.L[497]*work.d[285]*work.L[497]-1*work.d[289]*1-work.L[478]*work.d[179]*work.L[478]-work.L[498]*work.d[287]*work.L[498]-work.L[499]*work.d[288]*work.L[499];
  residual += temp*temp;

  temp = work.KKT[910]-work.L[506]*work.d[213]*work.L[479]-work.L[507]*work.d[217]*work.L[480]-work.L[508]*work.d[221]*work.L[481]-work.L[509]*work.d[225]*work.L[482]-work.L[510]*work.d[229]*work.L[483]-work.L[511]*work.d[233]*work.L[484]-work.L[512]*work.d[237]*work.L[485]-work.L[513]*work.d[241]*work.L[486]-work.L[514]*work.d[245]*work.L[487]-work.L[515]*work.d[249]*work.L[488]-work.L[516]*work.d[253]*work.L[489]-work.L[517]*work.d[257]*work.L[490]-work.L[518]*work.d[261]*work.L[491]-work.L[519]*work.d[265]*work.L[492]-work.L[520]*work.d[269]*work.L[493]-work.L[521]*work.d[273]*work.L[494]-work.L[522]*work.d[277]*work.L[495]-work.L[523]*work.d[281]*work.L[496]-work.L[524]*work.d[285]*work.L[497]-work.L[525]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[911]-work.L[534]*work.d[213]*work.L[479]-work.L[535]*work.d[217]*work.L[480]-work.L[536]*work.d[221]*work.L[481]-work.L[537]*work.d[225]*work.L[482]-work.L[538]*work.d[229]*work.L[483]-work.L[539]*work.d[233]*work.L[484]-work.L[540]*work.d[237]*work.L[485]-work.L[541]*work.d[241]*work.L[486]-work.L[542]*work.d[245]*work.L[487]-work.L[543]*work.d[249]*work.L[488]-work.L[544]*work.d[253]*work.L[489]-work.L[545]*work.d[257]*work.L[490]-work.L[546]*work.d[261]*work.L[491]-work.L[547]*work.d[265]*work.L[492]-work.L[548]*work.d[269]*work.L[493]-work.L[549]*work.d[273]*work.L[494]-work.L[550]*work.d[277]*work.L[495]-work.L[551]*work.d[281]*work.L[496]-work.L[552]*work.d[285]*work.L[497]-work.L[553]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[912]-work.L[563]*work.d[213]*work.L[479]-work.L[564]*work.d[217]*work.L[480]-work.L[565]*work.d[221]*work.L[481]-work.L[566]*work.d[225]*work.L[482]-work.L[567]*work.d[229]*work.L[483]-work.L[568]*work.d[233]*work.L[484]-work.L[569]*work.d[237]*work.L[485]-work.L[570]*work.d[241]*work.L[486]-work.L[571]*work.d[245]*work.L[487]-work.L[572]*work.d[249]*work.L[488]-work.L[573]*work.d[253]*work.L[489]-work.L[574]*work.d[257]*work.L[490]-work.L[575]*work.d[261]*work.L[491]-work.L[576]*work.d[265]*work.L[492]-work.L[577]*work.d[269]*work.L[493]-work.L[578]*work.d[273]*work.L[494]-work.L[579]*work.d[277]*work.L[495]-work.L[580]*work.d[281]*work.L[496]-work.L[581]*work.d[285]*work.L[497]-work.L[582]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[913]-work.L[593]*work.d[213]*work.L[479]-work.L[594]*work.d[217]*work.L[480]-work.L[595]*work.d[221]*work.L[481]-work.L[596]*work.d[225]*work.L[482]-work.L[597]*work.d[229]*work.L[483]-work.L[598]*work.d[233]*work.L[484]-work.L[599]*work.d[237]*work.L[485]-work.L[600]*work.d[241]*work.L[486]-work.L[601]*work.d[245]*work.L[487]-work.L[602]*work.d[249]*work.L[488]-work.L[603]*work.d[253]*work.L[489]-work.L[604]*work.d[257]*work.L[490]-work.L[605]*work.d[261]*work.L[491]-work.L[606]*work.d[265]*work.L[492]-work.L[607]*work.d[269]*work.L[493]-work.L[608]*work.d[273]*work.L[494]-work.L[609]*work.d[277]*work.L[495]-work.L[610]*work.d[281]*work.L[496]-work.L[611]*work.d[285]*work.L[497]-work.L[612]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[914]-work.L[624]*work.d[213]*work.L[479]-work.L[625]*work.d[217]*work.L[480]-work.L[626]*work.d[221]*work.L[481]-work.L[627]*work.d[225]*work.L[482]-work.L[628]*work.d[229]*work.L[483]-work.L[629]*work.d[233]*work.L[484]-work.L[630]*work.d[237]*work.L[485]-work.L[631]*work.d[241]*work.L[486]-work.L[632]*work.d[245]*work.L[487]-work.L[633]*work.d[249]*work.L[488]-work.L[634]*work.d[253]*work.L[489]-work.L[635]*work.d[257]*work.L[490]-work.L[636]*work.d[261]*work.L[491]-work.L[637]*work.d[265]*work.L[492]-work.L[638]*work.d[269]*work.L[493]-work.L[639]*work.d[273]*work.L[494]-work.L[640]*work.d[277]*work.L[495]-work.L[641]*work.d[281]*work.L[496]-work.L[642]*work.d[285]*work.L[497]-work.L[643]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[915]-work.L[656]*work.d[213]*work.L[479]-work.L[657]*work.d[217]*work.L[480]-work.L[658]*work.d[221]*work.L[481]-work.L[659]*work.d[225]*work.L[482]-work.L[660]*work.d[229]*work.L[483]-work.L[661]*work.d[233]*work.L[484]-work.L[662]*work.d[237]*work.L[485]-work.L[663]*work.d[241]*work.L[486]-work.L[664]*work.d[245]*work.L[487]-work.L[665]*work.d[249]*work.L[488]-work.L[666]*work.d[253]*work.L[489]-work.L[667]*work.d[257]*work.L[490]-work.L[668]*work.d[261]*work.L[491]-work.L[669]*work.d[265]*work.L[492]-work.L[670]*work.d[269]*work.L[493]-work.L[671]*work.d[273]*work.L[494]-work.L[672]*work.d[277]*work.L[495]-work.L[673]*work.d[281]*work.L[496]-work.L[674]*work.d[285]*work.L[497]-work.L[675]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[916]-work.L[689]*work.d[213]*work.L[479]-work.L[690]*work.d[217]*work.L[480]-work.L[691]*work.d[221]*work.L[481]-work.L[692]*work.d[225]*work.L[482]-work.L[693]*work.d[229]*work.L[483]-work.L[694]*work.d[233]*work.L[484]-work.L[695]*work.d[237]*work.L[485]-work.L[696]*work.d[241]*work.L[486]-work.L[697]*work.d[245]*work.L[487]-work.L[698]*work.d[249]*work.L[488]-work.L[699]*work.d[253]*work.L[489]-work.L[700]*work.d[257]*work.L[490]-work.L[701]*work.d[261]*work.L[491]-work.L[702]*work.d[265]*work.L[492]-work.L[703]*work.d[269]*work.L[493]-work.L[704]*work.d[273]*work.L[494]-work.L[705]*work.d[277]*work.L[495]-work.L[706]*work.d[281]*work.L[496]-work.L[707]*work.d[285]*work.L[497]-work.L[708]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[917]-work.L[723]*work.d[213]*work.L[479]-work.L[724]*work.d[217]*work.L[480]-work.L[725]*work.d[221]*work.L[481]-work.L[726]*work.d[225]*work.L[482]-work.L[727]*work.d[229]*work.L[483]-work.L[728]*work.d[233]*work.L[484]-work.L[729]*work.d[237]*work.L[485]-work.L[730]*work.d[241]*work.L[486]-work.L[731]*work.d[245]*work.L[487]-work.L[732]*work.d[249]*work.L[488]-work.L[733]*work.d[253]*work.L[489]-work.L[734]*work.d[257]*work.L[490]-work.L[735]*work.d[261]*work.L[491]-work.L[736]*work.d[265]*work.L[492]-work.L[737]*work.d[269]*work.L[493]-work.L[738]*work.d[273]*work.L[494]-work.L[739]*work.d[277]*work.L[495]-work.L[740]*work.d[281]*work.L[496]-work.L[741]*work.d[285]*work.L[497]-work.L[742]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[918]-work.L[758]*work.d[213]*work.L[479]-work.L[759]*work.d[217]*work.L[480]-work.L[760]*work.d[221]*work.L[481]-work.L[761]*work.d[225]*work.L[482]-work.L[762]*work.d[229]*work.L[483]-work.L[763]*work.d[233]*work.L[484]-work.L[764]*work.d[237]*work.L[485]-work.L[765]*work.d[241]*work.L[486]-work.L[766]*work.d[245]*work.L[487]-work.L[767]*work.d[249]*work.L[488]-work.L[768]*work.d[253]*work.L[489]-work.L[769]*work.d[257]*work.L[490]-work.L[770]*work.d[261]*work.L[491]-work.L[771]*work.d[265]*work.L[492]-work.L[772]*work.d[269]*work.L[493]-work.L[773]*work.d[273]*work.L[494]-work.L[774]*work.d[277]*work.L[495]-work.L[775]*work.d[281]*work.L[496]-work.L[776]*work.d[285]*work.L[497]-work.L[777]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[919]-work.L[789]*work.d[213]*work.L[479]-work.L[790]*work.d[217]*work.L[480]-work.L[791]*work.d[221]*work.L[481]-work.L[792]*work.d[225]*work.L[482]-work.L[793]*work.d[229]*work.L[483]-work.L[794]*work.d[233]*work.L[484]-work.L[795]*work.d[237]*work.L[485]-work.L[796]*work.d[241]*work.L[486]-work.L[797]*work.d[245]*work.L[487]-work.L[798]*work.d[249]*work.L[488]-work.L[799]*work.d[253]*work.L[489]-work.L[800]*work.d[257]*work.L[490]-work.L[801]*work.d[261]*work.L[491]-work.L[802]*work.d[265]*work.L[492]-work.L[803]*work.d[269]*work.L[493]-work.L[804]*work.d[273]*work.L[494]-work.L[805]*work.d[277]*work.L[495]-work.L[806]*work.d[281]*work.L[496]-work.L[807]*work.d[285]*work.L[497]-work.L[808]*work.d[289]*1;
  residual += temp*temp;

  temp = work.KKT[926]-work.L[506]*work.d[213]*work.L[506]-work.L[507]*work.d[217]*work.L[507]-work.L[508]*work.d[221]*work.L[508]-work.L[509]*work.d[225]*work.L[509]-work.L[510]*work.d[229]*work.L[510]-work.L[511]*work.d[233]*work.L[511]-work.L[512]*work.d[237]*work.L[512]-work.L[513]*work.d[241]*work.L[513]-work.L[514]*work.d[245]*work.L[514]-work.L[515]*work.d[249]*work.L[515]-work.L[516]*work.d[253]*work.L[516]-work.L[517]*work.d[257]*work.L[517]-work.L[518]*work.d[261]*work.L[518]-work.L[519]*work.d[265]*work.L[519]-work.L[520]*work.d[269]*work.L[520]-work.L[521]*work.d[273]*work.L[521]-work.L[522]*work.d[277]*work.L[522]-work.L[523]*work.d[281]*work.L[523]-work.L[524]*work.d[285]*work.L[524]-work.L[525]*work.d[289]*work.L[525]-1*work.d[293]*1-work.L[505]*work.d[182]*work.L[505]-work.L[526]*work.d[291]*work.L[526]-work.L[527]*work.d[292]*work.L[527];
  residual += temp*temp;

  temp = work.KKT[927]-work.L[534]*work.d[213]*work.L[506]-work.L[535]*work.d[217]*work.L[507]-work.L[536]*work.d[221]*work.L[508]-work.L[537]*work.d[225]*work.L[509]-work.L[538]*work.d[229]*work.L[510]-work.L[539]*work.d[233]*work.L[511]-work.L[540]*work.d[237]*work.L[512]-work.L[541]*work.d[241]*work.L[513]-work.L[542]*work.d[245]*work.L[514]-work.L[543]*work.d[249]*work.L[515]-work.L[544]*work.d[253]*work.L[516]-work.L[545]*work.d[257]*work.L[517]-work.L[546]*work.d[261]*work.L[518]-work.L[547]*work.d[265]*work.L[519]-work.L[548]*work.d[269]*work.L[520]-work.L[549]*work.d[273]*work.L[521]-work.L[550]*work.d[277]*work.L[522]-work.L[551]*work.d[281]*work.L[523]-work.L[552]*work.d[285]*work.L[524]-work.L[553]*work.d[289]*work.L[525]-work.L[554]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[928]-work.L[563]*work.d[213]*work.L[506]-work.L[564]*work.d[217]*work.L[507]-work.L[565]*work.d[221]*work.L[508]-work.L[566]*work.d[225]*work.L[509]-work.L[567]*work.d[229]*work.L[510]-work.L[568]*work.d[233]*work.L[511]-work.L[569]*work.d[237]*work.L[512]-work.L[570]*work.d[241]*work.L[513]-work.L[571]*work.d[245]*work.L[514]-work.L[572]*work.d[249]*work.L[515]-work.L[573]*work.d[253]*work.L[516]-work.L[574]*work.d[257]*work.L[517]-work.L[575]*work.d[261]*work.L[518]-work.L[576]*work.d[265]*work.L[519]-work.L[577]*work.d[269]*work.L[520]-work.L[578]*work.d[273]*work.L[521]-work.L[579]*work.d[277]*work.L[522]-work.L[580]*work.d[281]*work.L[523]-work.L[581]*work.d[285]*work.L[524]-work.L[582]*work.d[289]*work.L[525]-work.L[583]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[929]-work.L[593]*work.d[213]*work.L[506]-work.L[594]*work.d[217]*work.L[507]-work.L[595]*work.d[221]*work.L[508]-work.L[596]*work.d[225]*work.L[509]-work.L[597]*work.d[229]*work.L[510]-work.L[598]*work.d[233]*work.L[511]-work.L[599]*work.d[237]*work.L[512]-work.L[600]*work.d[241]*work.L[513]-work.L[601]*work.d[245]*work.L[514]-work.L[602]*work.d[249]*work.L[515]-work.L[603]*work.d[253]*work.L[516]-work.L[604]*work.d[257]*work.L[517]-work.L[605]*work.d[261]*work.L[518]-work.L[606]*work.d[265]*work.L[519]-work.L[607]*work.d[269]*work.L[520]-work.L[608]*work.d[273]*work.L[521]-work.L[609]*work.d[277]*work.L[522]-work.L[610]*work.d[281]*work.L[523]-work.L[611]*work.d[285]*work.L[524]-work.L[612]*work.d[289]*work.L[525]-work.L[613]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[930]-work.L[624]*work.d[213]*work.L[506]-work.L[625]*work.d[217]*work.L[507]-work.L[626]*work.d[221]*work.L[508]-work.L[627]*work.d[225]*work.L[509]-work.L[628]*work.d[229]*work.L[510]-work.L[629]*work.d[233]*work.L[511]-work.L[630]*work.d[237]*work.L[512]-work.L[631]*work.d[241]*work.L[513]-work.L[632]*work.d[245]*work.L[514]-work.L[633]*work.d[249]*work.L[515]-work.L[634]*work.d[253]*work.L[516]-work.L[635]*work.d[257]*work.L[517]-work.L[636]*work.d[261]*work.L[518]-work.L[637]*work.d[265]*work.L[519]-work.L[638]*work.d[269]*work.L[520]-work.L[639]*work.d[273]*work.L[521]-work.L[640]*work.d[277]*work.L[522]-work.L[641]*work.d[281]*work.L[523]-work.L[642]*work.d[285]*work.L[524]-work.L[643]*work.d[289]*work.L[525]-work.L[644]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[931]-work.L[656]*work.d[213]*work.L[506]-work.L[657]*work.d[217]*work.L[507]-work.L[658]*work.d[221]*work.L[508]-work.L[659]*work.d[225]*work.L[509]-work.L[660]*work.d[229]*work.L[510]-work.L[661]*work.d[233]*work.L[511]-work.L[662]*work.d[237]*work.L[512]-work.L[663]*work.d[241]*work.L[513]-work.L[664]*work.d[245]*work.L[514]-work.L[665]*work.d[249]*work.L[515]-work.L[666]*work.d[253]*work.L[516]-work.L[667]*work.d[257]*work.L[517]-work.L[668]*work.d[261]*work.L[518]-work.L[669]*work.d[265]*work.L[519]-work.L[670]*work.d[269]*work.L[520]-work.L[671]*work.d[273]*work.L[521]-work.L[672]*work.d[277]*work.L[522]-work.L[673]*work.d[281]*work.L[523]-work.L[674]*work.d[285]*work.L[524]-work.L[675]*work.d[289]*work.L[525]-work.L[676]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[932]-work.L[689]*work.d[213]*work.L[506]-work.L[690]*work.d[217]*work.L[507]-work.L[691]*work.d[221]*work.L[508]-work.L[692]*work.d[225]*work.L[509]-work.L[693]*work.d[229]*work.L[510]-work.L[694]*work.d[233]*work.L[511]-work.L[695]*work.d[237]*work.L[512]-work.L[696]*work.d[241]*work.L[513]-work.L[697]*work.d[245]*work.L[514]-work.L[698]*work.d[249]*work.L[515]-work.L[699]*work.d[253]*work.L[516]-work.L[700]*work.d[257]*work.L[517]-work.L[701]*work.d[261]*work.L[518]-work.L[702]*work.d[265]*work.L[519]-work.L[703]*work.d[269]*work.L[520]-work.L[704]*work.d[273]*work.L[521]-work.L[705]*work.d[277]*work.L[522]-work.L[706]*work.d[281]*work.L[523]-work.L[707]*work.d[285]*work.L[524]-work.L[708]*work.d[289]*work.L[525]-work.L[709]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[933]-work.L[723]*work.d[213]*work.L[506]-work.L[724]*work.d[217]*work.L[507]-work.L[725]*work.d[221]*work.L[508]-work.L[726]*work.d[225]*work.L[509]-work.L[727]*work.d[229]*work.L[510]-work.L[728]*work.d[233]*work.L[511]-work.L[729]*work.d[237]*work.L[512]-work.L[730]*work.d[241]*work.L[513]-work.L[731]*work.d[245]*work.L[514]-work.L[732]*work.d[249]*work.L[515]-work.L[733]*work.d[253]*work.L[516]-work.L[734]*work.d[257]*work.L[517]-work.L[735]*work.d[261]*work.L[518]-work.L[736]*work.d[265]*work.L[519]-work.L[737]*work.d[269]*work.L[520]-work.L[738]*work.d[273]*work.L[521]-work.L[739]*work.d[277]*work.L[522]-work.L[740]*work.d[281]*work.L[523]-work.L[741]*work.d[285]*work.L[524]-work.L[742]*work.d[289]*work.L[525]-work.L[743]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[934]-work.L[758]*work.d[213]*work.L[506]-work.L[759]*work.d[217]*work.L[507]-work.L[760]*work.d[221]*work.L[508]-work.L[761]*work.d[225]*work.L[509]-work.L[762]*work.d[229]*work.L[510]-work.L[763]*work.d[233]*work.L[511]-work.L[764]*work.d[237]*work.L[512]-work.L[765]*work.d[241]*work.L[513]-work.L[766]*work.d[245]*work.L[514]-work.L[767]*work.d[249]*work.L[515]-work.L[768]*work.d[253]*work.L[516]-work.L[769]*work.d[257]*work.L[517]-work.L[770]*work.d[261]*work.L[518]-work.L[771]*work.d[265]*work.L[519]-work.L[772]*work.d[269]*work.L[520]-work.L[773]*work.d[273]*work.L[521]-work.L[774]*work.d[277]*work.L[522]-work.L[775]*work.d[281]*work.L[523]-work.L[776]*work.d[285]*work.L[524]-work.L[777]*work.d[289]*work.L[525]-work.L[778]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[935]-work.L[789]*work.d[213]*work.L[506]-work.L[790]*work.d[217]*work.L[507]-work.L[791]*work.d[221]*work.L[508]-work.L[792]*work.d[225]*work.L[509]-work.L[793]*work.d[229]*work.L[510]-work.L[794]*work.d[233]*work.L[511]-work.L[795]*work.d[237]*work.L[512]-work.L[796]*work.d[241]*work.L[513]-work.L[797]*work.d[245]*work.L[514]-work.L[798]*work.d[249]*work.L[515]-work.L[799]*work.d[253]*work.L[516]-work.L[800]*work.d[257]*work.L[517]-work.L[801]*work.d[261]*work.L[518]-work.L[802]*work.d[265]*work.L[519]-work.L[803]*work.d[269]*work.L[520]-work.L[804]*work.d[273]*work.L[521]-work.L[805]*work.d[277]*work.L[522]-work.L[806]*work.d[281]*work.L[523]-work.L[807]*work.d[285]*work.L[524]-work.L[808]*work.d[289]*work.L[525]-work.L[809]*work.d[293]*1;
  residual += temp*temp;

  temp = work.KKT[942]-work.L[534]*work.d[213]*work.L[534]-work.L[535]*work.d[217]*work.L[535]-work.L[536]*work.d[221]*work.L[536]-work.L[537]*work.d[225]*work.L[537]-work.L[538]*work.d[229]*work.L[538]-work.L[539]*work.d[233]*work.L[539]-work.L[540]*work.d[237]*work.L[540]-work.L[541]*work.d[241]*work.L[541]-work.L[542]*work.d[245]*work.L[542]-work.L[543]*work.d[249]*work.L[543]-work.L[544]*work.d[253]*work.L[544]-work.L[545]*work.d[257]*work.L[545]-work.L[546]*work.d[261]*work.L[546]-work.L[547]*work.d[265]*work.L[547]-work.L[548]*work.d[269]*work.L[548]-work.L[549]*work.d[273]*work.L[549]-work.L[550]*work.d[277]*work.L[550]-work.L[551]*work.d[281]*work.L[551]-work.L[552]*work.d[285]*work.L[552]-work.L[553]*work.d[289]*work.L[553]-work.L[554]*work.d[293]*work.L[554]-1*work.d[297]*1-work.L[533]*work.d[185]*work.L[533]-work.L[555]*work.d[295]*work.L[555]-work.L[556]*work.d[296]*work.L[556];
  residual += temp*temp;

  temp = work.KKT[943]-work.L[563]*work.d[213]*work.L[534]-work.L[564]*work.d[217]*work.L[535]-work.L[565]*work.d[221]*work.L[536]-work.L[566]*work.d[225]*work.L[537]-work.L[567]*work.d[229]*work.L[538]-work.L[568]*work.d[233]*work.L[539]-work.L[569]*work.d[237]*work.L[540]-work.L[570]*work.d[241]*work.L[541]-work.L[571]*work.d[245]*work.L[542]-work.L[572]*work.d[249]*work.L[543]-work.L[573]*work.d[253]*work.L[544]-work.L[574]*work.d[257]*work.L[545]-work.L[575]*work.d[261]*work.L[546]-work.L[576]*work.d[265]*work.L[547]-work.L[577]*work.d[269]*work.L[548]-work.L[578]*work.d[273]*work.L[549]-work.L[579]*work.d[277]*work.L[550]-work.L[580]*work.d[281]*work.L[551]-work.L[581]*work.d[285]*work.L[552]-work.L[582]*work.d[289]*work.L[553]-work.L[583]*work.d[293]*work.L[554]-work.L[584]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[944]-work.L[593]*work.d[213]*work.L[534]-work.L[594]*work.d[217]*work.L[535]-work.L[595]*work.d[221]*work.L[536]-work.L[596]*work.d[225]*work.L[537]-work.L[597]*work.d[229]*work.L[538]-work.L[598]*work.d[233]*work.L[539]-work.L[599]*work.d[237]*work.L[540]-work.L[600]*work.d[241]*work.L[541]-work.L[601]*work.d[245]*work.L[542]-work.L[602]*work.d[249]*work.L[543]-work.L[603]*work.d[253]*work.L[544]-work.L[604]*work.d[257]*work.L[545]-work.L[605]*work.d[261]*work.L[546]-work.L[606]*work.d[265]*work.L[547]-work.L[607]*work.d[269]*work.L[548]-work.L[608]*work.d[273]*work.L[549]-work.L[609]*work.d[277]*work.L[550]-work.L[610]*work.d[281]*work.L[551]-work.L[611]*work.d[285]*work.L[552]-work.L[612]*work.d[289]*work.L[553]-work.L[613]*work.d[293]*work.L[554]-work.L[614]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[945]-work.L[624]*work.d[213]*work.L[534]-work.L[625]*work.d[217]*work.L[535]-work.L[626]*work.d[221]*work.L[536]-work.L[627]*work.d[225]*work.L[537]-work.L[628]*work.d[229]*work.L[538]-work.L[629]*work.d[233]*work.L[539]-work.L[630]*work.d[237]*work.L[540]-work.L[631]*work.d[241]*work.L[541]-work.L[632]*work.d[245]*work.L[542]-work.L[633]*work.d[249]*work.L[543]-work.L[634]*work.d[253]*work.L[544]-work.L[635]*work.d[257]*work.L[545]-work.L[636]*work.d[261]*work.L[546]-work.L[637]*work.d[265]*work.L[547]-work.L[638]*work.d[269]*work.L[548]-work.L[639]*work.d[273]*work.L[549]-work.L[640]*work.d[277]*work.L[550]-work.L[641]*work.d[281]*work.L[551]-work.L[642]*work.d[285]*work.L[552]-work.L[643]*work.d[289]*work.L[553]-work.L[644]*work.d[293]*work.L[554]-work.L[645]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[946]-work.L[656]*work.d[213]*work.L[534]-work.L[657]*work.d[217]*work.L[535]-work.L[658]*work.d[221]*work.L[536]-work.L[659]*work.d[225]*work.L[537]-work.L[660]*work.d[229]*work.L[538]-work.L[661]*work.d[233]*work.L[539]-work.L[662]*work.d[237]*work.L[540]-work.L[663]*work.d[241]*work.L[541]-work.L[664]*work.d[245]*work.L[542]-work.L[665]*work.d[249]*work.L[543]-work.L[666]*work.d[253]*work.L[544]-work.L[667]*work.d[257]*work.L[545]-work.L[668]*work.d[261]*work.L[546]-work.L[669]*work.d[265]*work.L[547]-work.L[670]*work.d[269]*work.L[548]-work.L[671]*work.d[273]*work.L[549]-work.L[672]*work.d[277]*work.L[550]-work.L[673]*work.d[281]*work.L[551]-work.L[674]*work.d[285]*work.L[552]-work.L[675]*work.d[289]*work.L[553]-work.L[676]*work.d[293]*work.L[554]-work.L[677]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[947]-work.L[689]*work.d[213]*work.L[534]-work.L[690]*work.d[217]*work.L[535]-work.L[691]*work.d[221]*work.L[536]-work.L[692]*work.d[225]*work.L[537]-work.L[693]*work.d[229]*work.L[538]-work.L[694]*work.d[233]*work.L[539]-work.L[695]*work.d[237]*work.L[540]-work.L[696]*work.d[241]*work.L[541]-work.L[697]*work.d[245]*work.L[542]-work.L[698]*work.d[249]*work.L[543]-work.L[699]*work.d[253]*work.L[544]-work.L[700]*work.d[257]*work.L[545]-work.L[701]*work.d[261]*work.L[546]-work.L[702]*work.d[265]*work.L[547]-work.L[703]*work.d[269]*work.L[548]-work.L[704]*work.d[273]*work.L[549]-work.L[705]*work.d[277]*work.L[550]-work.L[706]*work.d[281]*work.L[551]-work.L[707]*work.d[285]*work.L[552]-work.L[708]*work.d[289]*work.L[553]-work.L[709]*work.d[293]*work.L[554]-work.L[710]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[948]-work.L[723]*work.d[213]*work.L[534]-work.L[724]*work.d[217]*work.L[535]-work.L[725]*work.d[221]*work.L[536]-work.L[726]*work.d[225]*work.L[537]-work.L[727]*work.d[229]*work.L[538]-work.L[728]*work.d[233]*work.L[539]-work.L[729]*work.d[237]*work.L[540]-work.L[730]*work.d[241]*work.L[541]-work.L[731]*work.d[245]*work.L[542]-work.L[732]*work.d[249]*work.L[543]-work.L[733]*work.d[253]*work.L[544]-work.L[734]*work.d[257]*work.L[545]-work.L[735]*work.d[261]*work.L[546]-work.L[736]*work.d[265]*work.L[547]-work.L[737]*work.d[269]*work.L[548]-work.L[738]*work.d[273]*work.L[549]-work.L[739]*work.d[277]*work.L[550]-work.L[740]*work.d[281]*work.L[551]-work.L[741]*work.d[285]*work.L[552]-work.L[742]*work.d[289]*work.L[553]-work.L[743]*work.d[293]*work.L[554]-work.L[744]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[949]-work.L[758]*work.d[213]*work.L[534]-work.L[759]*work.d[217]*work.L[535]-work.L[760]*work.d[221]*work.L[536]-work.L[761]*work.d[225]*work.L[537]-work.L[762]*work.d[229]*work.L[538]-work.L[763]*work.d[233]*work.L[539]-work.L[764]*work.d[237]*work.L[540]-work.L[765]*work.d[241]*work.L[541]-work.L[766]*work.d[245]*work.L[542]-work.L[767]*work.d[249]*work.L[543]-work.L[768]*work.d[253]*work.L[544]-work.L[769]*work.d[257]*work.L[545]-work.L[770]*work.d[261]*work.L[546]-work.L[771]*work.d[265]*work.L[547]-work.L[772]*work.d[269]*work.L[548]-work.L[773]*work.d[273]*work.L[549]-work.L[774]*work.d[277]*work.L[550]-work.L[775]*work.d[281]*work.L[551]-work.L[776]*work.d[285]*work.L[552]-work.L[777]*work.d[289]*work.L[553]-work.L[778]*work.d[293]*work.L[554]-work.L[779]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[950]-work.L[789]*work.d[213]*work.L[534]-work.L[790]*work.d[217]*work.L[535]-work.L[791]*work.d[221]*work.L[536]-work.L[792]*work.d[225]*work.L[537]-work.L[793]*work.d[229]*work.L[538]-work.L[794]*work.d[233]*work.L[539]-work.L[795]*work.d[237]*work.L[540]-work.L[796]*work.d[241]*work.L[541]-work.L[797]*work.d[245]*work.L[542]-work.L[798]*work.d[249]*work.L[543]-work.L[799]*work.d[253]*work.L[544]-work.L[800]*work.d[257]*work.L[545]-work.L[801]*work.d[261]*work.L[546]-work.L[802]*work.d[265]*work.L[547]-work.L[803]*work.d[269]*work.L[548]-work.L[804]*work.d[273]*work.L[549]-work.L[805]*work.d[277]*work.L[550]-work.L[806]*work.d[281]*work.L[551]-work.L[807]*work.d[285]*work.L[552]-work.L[808]*work.d[289]*work.L[553]-work.L[809]*work.d[293]*work.L[554]-work.L[810]*work.d[297]*1;
  residual += temp*temp;

  temp = work.KKT[957]-work.L[563]*work.d[213]*work.L[563]-work.L[564]*work.d[217]*work.L[564]-work.L[565]*work.d[221]*work.L[565]-work.L[566]*work.d[225]*work.L[566]-work.L[567]*work.d[229]*work.L[567]-work.L[568]*work.d[233]*work.L[568]-work.L[569]*work.d[237]*work.L[569]-work.L[570]*work.d[241]*work.L[570]-work.L[571]*work.d[245]*work.L[571]-work.L[572]*work.d[249]*work.L[572]-work.L[573]*work.d[253]*work.L[573]-work.L[574]*work.d[257]*work.L[574]-work.L[575]*work.d[261]*work.L[575]-work.L[576]*work.d[265]*work.L[576]-work.L[577]*work.d[269]*work.L[577]-work.L[578]*work.d[273]*work.L[578]-work.L[579]*work.d[277]*work.L[579]-work.L[580]*work.d[281]*work.L[580]-work.L[581]*work.d[285]*work.L[581]-work.L[582]*work.d[289]*work.L[582]-work.L[583]*work.d[293]*work.L[583]-work.L[584]*work.d[297]*work.L[584]-1*work.d[301]*1-work.L[562]*work.d[188]*work.L[562]-work.L[585]*work.d[299]*work.L[585]-work.L[586]*work.d[300]*work.L[586];
  residual += temp*temp;

  temp = work.KKT[958]-work.L[593]*work.d[213]*work.L[563]-work.L[594]*work.d[217]*work.L[564]-work.L[595]*work.d[221]*work.L[565]-work.L[596]*work.d[225]*work.L[566]-work.L[597]*work.d[229]*work.L[567]-work.L[598]*work.d[233]*work.L[568]-work.L[599]*work.d[237]*work.L[569]-work.L[600]*work.d[241]*work.L[570]-work.L[601]*work.d[245]*work.L[571]-work.L[602]*work.d[249]*work.L[572]-work.L[603]*work.d[253]*work.L[573]-work.L[604]*work.d[257]*work.L[574]-work.L[605]*work.d[261]*work.L[575]-work.L[606]*work.d[265]*work.L[576]-work.L[607]*work.d[269]*work.L[577]-work.L[608]*work.d[273]*work.L[578]-work.L[609]*work.d[277]*work.L[579]-work.L[610]*work.d[281]*work.L[580]-work.L[611]*work.d[285]*work.L[581]-work.L[612]*work.d[289]*work.L[582]-work.L[613]*work.d[293]*work.L[583]-work.L[614]*work.d[297]*work.L[584]-work.L[615]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[959]-work.L[624]*work.d[213]*work.L[563]-work.L[625]*work.d[217]*work.L[564]-work.L[626]*work.d[221]*work.L[565]-work.L[627]*work.d[225]*work.L[566]-work.L[628]*work.d[229]*work.L[567]-work.L[629]*work.d[233]*work.L[568]-work.L[630]*work.d[237]*work.L[569]-work.L[631]*work.d[241]*work.L[570]-work.L[632]*work.d[245]*work.L[571]-work.L[633]*work.d[249]*work.L[572]-work.L[634]*work.d[253]*work.L[573]-work.L[635]*work.d[257]*work.L[574]-work.L[636]*work.d[261]*work.L[575]-work.L[637]*work.d[265]*work.L[576]-work.L[638]*work.d[269]*work.L[577]-work.L[639]*work.d[273]*work.L[578]-work.L[640]*work.d[277]*work.L[579]-work.L[641]*work.d[281]*work.L[580]-work.L[642]*work.d[285]*work.L[581]-work.L[643]*work.d[289]*work.L[582]-work.L[644]*work.d[293]*work.L[583]-work.L[645]*work.d[297]*work.L[584]-work.L[646]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[960]-work.L[656]*work.d[213]*work.L[563]-work.L[657]*work.d[217]*work.L[564]-work.L[658]*work.d[221]*work.L[565]-work.L[659]*work.d[225]*work.L[566]-work.L[660]*work.d[229]*work.L[567]-work.L[661]*work.d[233]*work.L[568]-work.L[662]*work.d[237]*work.L[569]-work.L[663]*work.d[241]*work.L[570]-work.L[664]*work.d[245]*work.L[571]-work.L[665]*work.d[249]*work.L[572]-work.L[666]*work.d[253]*work.L[573]-work.L[667]*work.d[257]*work.L[574]-work.L[668]*work.d[261]*work.L[575]-work.L[669]*work.d[265]*work.L[576]-work.L[670]*work.d[269]*work.L[577]-work.L[671]*work.d[273]*work.L[578]-work.L[672]*work.d[277]*work.L[579]-work.L[673]*work.d[281]*work.L[580]-work.L[674]*work.d[285]*work.L[581]-work.L[675]*work.d[289]*work.L[582]-work.L[676]*work.d[293]*work.L[583]-work.L[677]*work.d[297]*work.L[584]-work.L[678]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[961]-work.L[689]*work.d[213]*work.L[563]-work.L[690]*work.d[217]*work.L[564]-work.L[691]*work.d[221]*work.L[565]-work.L[692]*work.d[225]*work.L[566]-work.L[693]*work.d[229]*work.L[567]-work.L[694]*work.d[233]*work.L[568]-work.L[695]*work.d[237]*work.L[569]-work.L[696]*work.d[241]*work.L[570]-work.L[697]*work.d[245]*work.L[571]-work.L[698]*work.d[249]*work.L[572]-work.L[699]*work.d[253]*work.L[573]-work.L[700]*work.d[257]*work.L[574]-work.L[701]*work.d[261]*work.L[575]-work.L[702]*work.d[265]*work.L[576]-work.L[703]*work.d[269]*work.L[577]-work.L[704]*work.d[273]*work.L[578]-work.L[705]*work.d[277]*work.L[579]-work.L[706]*work.d[281]*work.L[580]-work.L[707]*work.d[285]*work.L[581]-work.L[708]*work.d[289]*work.L[582]-work.L[709]*work.d[293]*work.L[583]-work.L[710]*work.d[297]*work.L[584]-work.L[711]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[962]-work.L[723]*work.d[213]*work.L[563]-work.L[724]*work.d[217]*work.L[564]-work.L[725]*work.d[221]*work.L[565]-work.L[726]*work.d[225]*work.L[566]-work.L[727]*work.d[229]*work.L[567]-work.L[728]*work.d[233]*work.L[568]-work.L[729]*work.d[237]*work.L[569]-work.L[730]*work.d[241]*work.L[570]-work.L[731]*work.d[245]*work.L[571]-work.L[732]*work.d[249]*work.L[572]-work.L[733]*work.d[253]*work.L[573]-work.L[734]*work.d[257]*work.L[574]-work.L[735]*work.d[261]*work.L[575]-work.L[736]*work.d[265]*work.L[576]-work.L[737]*work.d[269]*work.L[577]-work.L[738]*work.d[273]*work.L[578]-work.L[739]*work.d[277]*work.L[579]-work.L[740]*work.d[281]*work.L[580]-work.L[741]*work.d[285]*work.L[581]-work.L[742]*work.d[289]*work.L[582]-work.L[743]*work.d[293]*work.L[583]-work.L[744]*work.d[297]*work.L[584]-work.L[745]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[963]-work.L[758]*work.d[213]*work.L[563]-work.L[759]*work.d[217]*work.L[564]-work.L[760]*work.d[221]*work.L[565]-work.L[761]*work.d[225]*work.L[566]-work.L[762]*work.d[229]*work.L[567]-work.L[763]*work.d[233]*work.L[568]-work.L[764]*work.d[237]*work.L[569]-work.L[765]*work.d[241]*work.L[570]-work.L[766]*work.d[245]*work.L[571]-work.L[767]*work.d[249]*work.L[572]-work.L[768]*work.d[253]*work.L[573]-work.L[769]*work.d[257]*work.L[574]-work.L[770]*work.d[261]*work.L[575]-work.L[771]*work.d[265]*work.L[576]-work.L[772]*work.d[269]*work.L[577]-work.L[773]*work.d[273]*work.L[578]-work.L[774]*work.d[277]*work.L[579]-work.L[775]*work.d[281]*work.L[580]-work.L[776]*work.d[285]*work.L[581]-work.L[777]*work.d[289]*work.L[582]-work.L[778]*work.d[293]*work.L[583]-work.L[779]*work.d[297]*work.L[584]-work.L[780]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[964]-work.L[789]*work.d[213]*work.L[563]-work.L[790]*work.d[217]*work.L[564]-work.L[791]*work.d[221]*work.L[565]-work.L[792]*work.d[225]*work.L[566]-work.L[793]*work.d[229]*work.L[567]-work.L[794]*work.d[233]*work.L[568]-work.L[795]*work.d[237]*work.L[569]-work.L[796]*work.d[241]*work.L[570]-work.L[797]*work.d[245]*work.L[571]-work.L[798]*work.d[249]*work.L[572]-work.L[799]*work.d[253]*work.L[573]-work.L[800]*work.d[257]*work.L[574]-work.L[801]*work.d[261]*work.L[575]-work.L[802]*work.d[265]*work.L[576]-work.L[803]*work.d[269]*work.L[577]-work.L[804]*work.d[273]*work.L[578]-work.L[805]*work.d[277]*work.L[579]-work.L[806]*work.d[281]*work.L[580]-work.L[807]*work.d[285]*work.L[581]-work.L[808]*work.d[289]*work.L[582]-work.L[809]*work.d[293]*work.L[583]-work.L[810]*work.d[297]*work.L[584]-work.L[811]*work.d[301]*1;
  residual += temp*temp;

  temp = work.KKT[971]-work.L[593]*work.d[213]*work.L[593]-work.L[594]*work.d[217]*work.L[594]-work.L[595]*work.d[221]*work.L[595]-work.L[596]*work.d[225]*work.L[596]-work.L[597]*work.d[229]*work.L[597]-work.L[598]*work.d[233]*work.L[598]-work.L[599]*work.d[237]*work.L[599]-work.L[600]*work.d[241]*work.L[600]-work.L[601]*work.d[245]*work.L[601]-work.L[602]*work.d[249]*work.L[602]-work.L[603]*work.d[253]*work.L[603]-work.L[604]*work.d[257]*work.L[604]-work.L[605]*work.d[261]*work.L[605]-work.L[606]*work.d[265]*work.L[606]-work.L[607]*work.d[269]*work.L[607]-work.L[608]*work.d[273]*work.L[608]-work.L[609]*work.d[277]*work.L[609]-work.L[610]*work.d[281]*work.L[610]-work.L[611]*work.d[285]*work.L[611]-work.L[612]*work.d[289]*work.L[612]-work.L[613]*work.d[293]*work.L[613]-work.L[614]*work.d[297]*work.L[614]-work.L[615]*work.d[301]*work.L[615]-1*work.d[305]*1-work.L[592]*work.d[191]*work.L[592]-work.L[616]*work.d[303]*work.L[616]-work.L[617]*work.d[304]*work.L[617];
  residual += temp*temp;

  temp = work.KKT[972]-work.L[624]*work.d[213]*work.L[593]-work.L[625]*work.d[217]*work.L[594]-work.L[626]*work.d[221]*work.L[595]-work.L[627]*work.d[225]*work.L[596]-work.L[628]*work.d[229]*work.L[597]-work.L[629]*work.d[233]*work.L[598]-work.L[630]*work.d[237]*work.L[599]-work.L[631]*work.d[241]*work.L[600]-work.L[632]*work.d[245]*work.L[601]-work.L[633]*work.d[249]*work.L[602]-work.L[634]*work.d[253]*work.L[603]-work.L[635]*work.d[257]*work.L[604]-work.L[636]*work.d[261]*work.L[605]-work.L[637]*work.d[265]*work.L[606]-work.L[638]*work.d[269]*work.L[607]-work.L[639]*work.d[273]*work.L[608]-work.L[640]*work.d[277]*work.L[609]-work.L[641]*work.d[281]*work.L[610]-work.L[642]*work.d[285]*work.L[611]-work.L[643]*work.d[289]*work.L[612]-work.L[644]*work.d[293]*work.L[613]-work.L[645]*work.d[297]*work.L[614]-work.L[646]*work.d[301]*work.L[615]-work.L[647]*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[973]-work.L[656]*work.d[213]*work.L[593]-work.L[657]*work.d[217]*work.L[594]-work.L[658]*work.d[221]*work.L[595]-work.L[659]*work.d[225]*work.L[596]-work.L[660]*work.d[229]*work.L[597]-work.L[661]*work.d[233]*work.L[598]-work.L[662]*work.d[237]*work.L[599]-work.L[663]*work.d[241]*work.L[600]-work.L[664]*work.d[245]*work.L[601]-work.L[665]*work.d[249]*work.L[602]-work.L[666]*work.d[253]*work.L[603]-work.L[667]*work.d[257]*work.L[604]-work.L[668]*work.d[261]*work.L[605]-work.L[669]*work.d[265]*work.L[606]-work.L[670]*work.d[269]*work.L[607]-work.L[671]*work.d[273]*work.L[608]-work.L[672]*work.d[277]*work.L[609]-work.L[673]*work.d[281]*work.L[610]-work.L[674]*work.d[285]*work.L[611]-work.L[675]*work.d[289]*work.L[612]-work.L[676]*work.d[293]*work.L[613]-work.L[677]*work.d[297]*work.L[614]-work.L[678]*work.d[301]*work.L[615]-work.L[679]*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[974]-work.L[689]*work.d[213]*work.L[593]-work.L[690]*work.d[217]*work.L[594]-work.L[691]*work.d[221]*work.L[595]-work.L[692]*work.d[225]*work.L[596]-work.L[693]*work.d[229]*work.L[597]-work.L[694]*work.d[233]*work.L[598]-work.L[695]*work.d[237]*work.L[599]-work.L[696]*work.d[241]*work.L[600]-work.L[697]*work.d[245]*work.L[601]-work.L[698]*work.d[249]*work.L[602]-work.L[699]*work.d[253]*work.L[603]-work.L[700]*work.d[257]*work.L[604]-work.L[701]*work.d[261]*work.L[605]-work.L[702]*work.d[265]*work.L[606]-work.L[703]*work.d[269]*work.L[607]-work.L[704]*work.d[273]*work.L[608]-work.L[705]*work.d[277]*work.L[609]-work.L[706]*work.d[281]*work.L[610]-work.L[707]*work.d[285]*work.L[611]-work.L[708]*work.d[289]*work.L[612]-work.L[709]*work.d[293]*work.L[613]-work.L[710]*work.d[297]*work.L[614]-work.L[711]*work.d[301]*work.L[615]-work.L[712]*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[975]-work.L[723]*work.d[213]*work.L[593]-work.L[724]*work.d[217]*work.L[594]-work.L[725]*work.d[221]*work.L[595]-work.L[726]*work.d[225]*work.L[596]-work.L[727]*work.d[229]*work.L[597]-work.L[728]*work.d[233]*work.L[598]-work.L[729]*work.d[237]*work.L[599]-work.L[730]*work.d[241]*work.L[600]-work.L[731]*work.d[245]*work.L[601]-work.L[732]*work.d[249]*work.L[602]-work.L[733]*work.d[253]*work.L[603]-work.L[734]*work.d[257]*work.L[604]-work.L[735]*work.d[261]*work.L[605]-work.L[736]*work.d[265]*work.L[606]-work.L[737]*work.d[269]*work.L[607]-work.L[738]*work.d[273]*work.L[608]-work.L[739]*work.d[277]*work.L[609]-work.L[740]*work.d[281]*work.L[610]-work.L[741]*work.d[285]*work.L[611]-work.L[742]*work.d[289]*work.L[612]-work.L[743]*work.d[293]*work.L[613]-work.L[744]*work.d[297]*work.L[614]-work.L[745]*work.d[301]*work.L[615]-work.L[746]*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[976]-work.L[758]*work.d[213]*work.L[593]-work.L[759]*work.d[217]*work.L[594]-work.L[760]*work.d[221]*work.L[595]-work.L[761]*work.d[225]*work.L[596]-work.L[762]*work.d[229]*work.L[597]-work.L[763]*work.d[233]*work.L[598]-work.L[764]*work.d[237]*work.L[599]-work.L[765]*work.d[241]*work.L[600]-work.L[766]*work.d[245]*work.L[601]-work.L[767]*work.d[249]*work.L[602]-work.L[768]*work.d[253]*work.L[603]-work.L[769]*work.d[257]*work.L[604]-work.L[770]*work.d[261]*work.L[605]-work.L[771]*work.d[265]*work.L[606]-work.L[772]*work.d[269]*work.L[607]-work.L[773]*work.d[273]*work.L[608]-work.L[774]*work.d[277]*work.L[609]-work.L[775]*work.d[281]*work.L[610]-work.L[776]*work.d[285]*work.L[611]-work.L[777]*work.d[289]*work.L[612]-work.L[778]*work.d[293]*work.L[613]-work.L[779]*work.d[297]*work.L[614]-work.L[780]*work.d[301]*work.L[615]-work.L[781]*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[977]-work.L[789]*work.d[213]*work.L[593]-work.L[790]*work.d[217]*work.L[594]-work.L[791]*work.d[221]*work.L[595]-work.L[792]*work.d[225]*work.L[596]-work.L[793]*work.d[229]*work.L[597]-work.L[794]*work.d[233]*work.L[598]-work.L[795]*work.d[237]*work.L[599]-work.L[796]*work.d[241]*work.L[600]-work.L[797]*work.d[245]*work.L[601]-work.L[798]*work.d[249]*work.L[602]-work.L[799]*work.d[253]*work.L[603]-work.L[800]*work.d[257]*work.L[604]-work.L[801]*work.d[261]*work.L[605]-work.L[802]*work.d[265]*work.L[606]-work.L[803]*work.d[269]*work.L[607]-work.L[804]*work.d[273]*work.L[608]-work.L[805]*work.d[277]*work.L[609]-work.L[806]*work.d[281]*work.L[610]-work.L[807]*work.d[285]*work.L[611]-work.L[808]*work.d[289]*work.L[612]-work.L[809]*work.d[293]*work.L[613]-work.L[810]*work.d[297]*work.L[614]-work.L[811]*work.d[301]*work.L[615]-work.L[812]*work.d[305]*1;
  residual += temp*temp;

  temp = work.KKT[984]-work.L[624]*work.d[213]*work.L[624]-work.L[625]*work.d[217]*work.L[625]-work.L[626]*work.d[221]*work.L[626]-work.L[627]*work.d[225]*work.L[627]-work.L[628]*work.d[229]*work.L[628]-work.L[629]*work.d[233]*work.L[629]-work.L[630]*work.d[237]*work.L[630]-work.L[631]*work.d[241]*work.L[631]-work.L[632]*work.d[245]*work.L[632]-work.L[633]*work.d[249]*work.L[633]-work.L[634]*work.d[253]*work.L[634]-work.L[635]*work.d[257]*work.L[635]-work.L[636]*work.d[261]*work.L[636]-work.L[637]*work.d[265]*work.L[637]-work.L[638]*work.d[269]*work.L[638]-work.L[639]*work.d[273]*work.L[639]-work.L[640]*work.d[277]*work.L[640]-work.L[641]*work.d[281]*work.L[641]-work.L[642]*work.d[285]*work.L[642]-work.L[643]*work.d[289]*work.L[643]-work.L[644]*work.d[293]*work.L[644]-work.L[645]*work.d[297]*work.L[645]-work.L[646]*work.d[301]*work.L[646]-work.L[647]*work.d[305]*work.L[647]-1*work.d[309]*1-work.L[623]*work.d[194]*work.L[623]-work.L[648]*work.d[307]*work.L[648]-work.L[649]*work.d[308]*work.L[649];
  residual += temp*temp;

  temp = work.KKT[985]-work.L[656]*work.d[213]*work.L[624]-work.L[657]*work.d[217]*work.L[625]-work.L[658]*work.d[221]*work.L[626]-work.L[659]*work.d[225]*work.L[627]-work.L[660]*work.d[229]*work.L[628]-work.L[661]*work.d[233]*work.L[629]-work.L[662]*work.d[237]*work.L[630]-work.L[663]*work.d[241]*work.L[631]-work.L[664]*work.d[245]*work.L[632]-work.L[665]*work.d[249]*work.L[633]-work.L[666]*work.d[253]*work.L[634]-work.L[667]*work.d[257]*work.L[635]-work.L[668]*work.d[261]*work.L[636]-work.L[669]*work.d[265]*work.L[637]-work.L[670]*work.d[269]*work.L[638]-work.L[671]*work.d[273]*work.L[639]-work.L[672]*work.d[277]*work.L[640]-work.L[673]*work.d[281]*work.L[641]-work.L[674]*work.d[285]*work.L[642]-work.L[675]*work.d[289]*work.L[643]-work.L[676]*work.d[293]*work.L[644]-work.L[677]*work.d[297]*work.L[645]-work.L[678]*work.d[301]*work.L[646]-work.L[679]*work.d[305]*work.L[647]-work.L[680]*work.d[309]*1;
  residual += temp*temp;

  temp = work.KKT[986]-work.L[689]*work.d[213]*work.L[624]-work.L[690]*work.d[217]*work.L[625]-work.L[691]*work.d[221]*work.L[626]-work.L[692]*work.d[225]*work.L[627]-work.L[693]*work.d[229]*work.L[628]-work.L[694]*work.d[233]*work.L[629]-work.L[695]*work.d[237]*work.L[630]-work.L[696]*work.d[241]*work.L[631]-work.L[697]*work.d[245]*work.L[632]-work.L[698]*work.d[249]*work.L[633]-work.L[699]*work.d[253]*work.L[634]-work.L[700]*work.d[257]*work.L[635]-work.L[701]*work.d[261]*work.L[636]-work.L[702]*work.d[265]*work.L[637]-work.L[703]*work.d[269]*work.L[638]-work.L[704]*work.d[273]*work.L[639]-work.L[705]*work.d[277]*work.L[640]-work.L[706]*work.d[281]*work.L[641]-work.L[707]*work.d[285]*work.L[642]-work.L[708]*work.d[289]*work.L[643]-work.L[709]*work.d[293]*work.L[644]-work.L[710]*work.d[297]*work.L[645]-work.L[711]*work.d[301]*work.L[646]-work.L[712]*work.d[305]*work.L[647]-work.L[713]*work.d[309]*1;
  residual += temp*temp;

  temp = work.KKT[987]-work.L[723]*work.d[213]*work.L[624]-work.L[724]*work.d[217]*work.L[625]-work.L[725]*work.d[221]*work.L[626]-work.L[726]*work.d[225]*work.L[627]-work.L[727]*work.d[229]*work.L[628]-work.L[728]*work.d[233]*work.L[629]-work.L[729]*work.d[237]*work.L[630]-work.L[730]*work.d[241]*work.L[631]-work.L[731]*work.d[245]*work.L[632]-work.L[732]*work.d[249]*work.L[633]-work.L[733]*work.d[253]*work.L[634]-work.L[734]*work.d[257]*work.L[635]-work.L[735]*work.d[261]*work.L[636]-work.L[736]*work.d[265]*work.L[637]-work.L[737]*work.d[269]*work.L[638]-work.L[738]*work.d[273]*work.L[639]-work.L[739]*work.d[277]*work.L[640]-work.L[740]*work.d[281]*work.L[641]-work.L[741]*work.d[285]*work.L[642]-work.L[742]*work.d[289]*work.L[643]-work.L[743]*work.d[293]*work.L[644]-work.L[744]*work.d[297]*work.L[645]-work.L[745]*work.d[301]*work.L[646]-work.L[746]*work.d[305]*work.L[647]-work.L[747]*work.d[309]*1;
  residual += temp*temp;

  temp = work.KKT[988]-work.L[758]*work.d[213]*work.L[624]-work.L[759]*work.d[217]*work.L[625]-work.L[760]*work.d[221]*work.L[626]-work.L[761]*work.d[225]*work.L[627]-work.L[762]*work.d[229]*work.L[628]-work.L[763]*work.d[233]*work.L[629]-work.L[764]*work.d[237]*work.L[630]-work.L[765]*work.d[241]*work.L[631]-work.L[766]*work.d[245]*work.L[632]-work.L[767]*work.d[249]*work.L[633]-work.L[768]*work.d[253]*work.L[634]-work.L[769]*work.d[257]*work.L[635]-work.L[770]*work.d[261]*work.L[636]-work.L[771]*work.d[265]*work.L[637]-work.L[772]*work.d[269]*work.L[638]-work.L[773]*work.d[273]*work.L[639]-work.L[774]*work.d[277]*work.L[640]-work.L[775]*work.d[281]*work.L[641]-work.L[776]*work.d[285]*work.L[642]-work.L[777]*work.d[289]*work.L[643]-work.L[778]*work.d[293]*work.L[644]-work.L[779]*work.d[297]*work.L[645]-work.L[780]*work.d[301]*work.L[646]-work.L[781]*work.d[305]*work.L[647]-work.L[782]*work.d[309]*1;
  residual += temp*temp;

  temp = work.KKT[989]-work.L[789]*work.d[213]*work.L[624]-work.L[790]*work.d[217]*work.L[625]-work.L[791]*work.d[221]*work.L[626]-work.L[792]*work.d[225]*work.L[627]-work.L[793]*work.d[229]*work.L[628]-work.L[794]*work.d[233]*work.L[629]-work.L[795]*work.d[237]*work.L[630]-work.L[796]*work.d[241]*work.L[631]-work.L[797]*work.d[245]*work.L[632]-work.L[798]*work.d[249]*work.L[633]-work.L[799]*work.d[253]*work.L[634]-work.L[800]*work.d[257]*work.L[635]-work.L[801]*work.d[261]*work.L[636]-work.L[802]*work.d[265]*work.L[637]-work.L[803]*work.d[269]*work.L[638]-work.L[804]*work.d[273]*work.L[639]-work.L[805]*work.d[277]*work.L[640]-work.L[806]*work.d[281]*work.L[641]-work.L[807]*work.d[285]*work.L[642]-work.L[808]*work.d[289]*work.L[643]-work.L[809]*work.d[293]*work.L[644]-work.L[810]*work.d[297]*work.L[645]-work.L[811]*work.d[301]*work.L[646]-work.L[812]*work.d[305]*work.L[647]-work.L[813]*work.d[309]*1;
  residual += temp*temp;

  temp = work.KKT[996]-work.L[656]*work.d[213]*work.L[656]-work.L[657]*work.d[217]*work.L[657]-work.L[658]*work.d[221]*work.L[658]-work.L[659]*work.d[225]*work.L[659]-work.L[660]*work.d[229]*work.L[660]-work.L[661]*work.d[233]*work.L[661]-work.L[662]*work.d[237]*work.L[662]-work.L[663]*work.d[241]*work.L[663]-work.L[664]*work.d[245]*work.L[664]-work.L[665]*work.d[249]*work.L[665]-work.L[666]*work.d[253]*work.L[666]-work.L[667]*work.d[257]*work.L[667]-work.L[668]*work.d[261]*work.L[668]-work.L[669]*work.d[265]*work.L[669]-work.L[670]*work.d[269]*work.L[670]-work.L[671]*work.d[273]*work.L[671]-work.L[672]*work.d[277]*work.L[672]-work.L[673]*work.d[281]*work.L[673]-work.L[674]*work.d[285]*work.L[674]-work.L[675]*work.d[289]*work.L[675]-work.L[676]*work.d[293]*work.L[676]-work.L[677]*work.d[297]*work.L[677]-work.L[678]*work.d[301]*work.L[678]-work.L[679]*work.d[305]*work.L[679]-work.L[680]*work.d[309]*work.L[680]-1*work.d[313]*1-work.L[655]*work.d[197]*work.L[655]-work.L[681]*work.d[311]*work.L[681]-work.L[682]*work.d[312]*work.L[682];
  residual += temp*temp;

  temp = work.KKT[997]-work.L[689]*work.d[213]*work.L[656]-work.L[690]*work.d[217]*work.L[657]-work.L[691]*work.d[221]*work.L[658]-work.L[692]*work.d[225]*work.L[659]-work.L[693]*work.d[229]*work.L[660]-work.L[694]*work.d[233]*work.L[661]-work.L[695]*work.d[237]*work.L[662]-work.L[696]*work.d[241]*work.L[663]-work.L[697]*work.d[245]*work.L[664]-work.L[698]*work.d[249]*work.L[665]-work.L[699]*work.d[253]*work.L[666]-work.L[700]*work.d[257]*work.L[667]-work.L[701]*work.d[261]*work.L[668]-work.L[702]*work.d[265]*work.L[669]-work.L[703]*work.d[269]*work.L[670]-work.L[704]*work.d[273]*work.L[671]-work.L[705]*work.d[277]*work.L[672]-work.L[706]*work.d[281]*work.L[673]-work.L[707]*work.d[285]*work.L[674]-work.L[708]*work.d[289]*work.L[675]-work.L[709]*work.d[293]*work.L[676]-work.L[710]*work.d[297]*work.L[677]-work.L[711]*work.d[301]*work.L[678]-work.L[712]*work.d[305]*work.L[679]-work.L[713]*work.d[309]*work.L[680]-work.L[714]*work.d[313]*1;
  residual += temp*temp;

  temp = work.KKT[998]-work.L[723]*work.d[213]*work.L[656]-work.L[724]*work.d[217]*work.L[657]-work.L[725]*work.d[221]*work.L[658]-work.L[726]*work.d[225]*work.L[659]-work.L[727]*work.d[229]*work.L[660]-work.L[728]*work.d[233]*work.L[661]-work.L[729]*work.d[237]*work.L[662]-work.L[730]*work.d[241]*work.L[663]-work.L[731]*work.d[245]*work.L[664]-work.L[732]*work.d[249]*work.L[665]-work.L[733]*work.d[253]*work.L[666]-work.L[734]*work.d[257]*work.L[667]-work.L[735]*work.d[261]*work.L[668]-work.L[736]*work.d[265]*work.L[669]-work.L[737]*work.d[269]*work.L[670]-work.L[738]*work.d[273]*work.L[671]-work.L[739]*work.d[277]*work.L[672]-work.L[740]*work.d[281]*work.L[673]-work.L[741]*work.d[285]*work.L[674]-work.L[742]*work.d[289]*work.L[675]-work.L[743]*work.d[293]*work.L[676]-work.L[744]*work.d[297]*work.L[677]-work.L[745]*work.d[301]*work.L[678]-work.L[746]*work.d[305]*work.L[679]-work.L[747]*work.d[309]*work.L[680]-work.L[748]*work.d[313]*1;
  residual += temp*temp;

  temp = work.KKT[999]-work.L[758]*work.d[213]*work.L[656]-work.L[759]*work.d[217]*work.L[657]-work.L[760]*work.d[221]*work.L[658]-work.L[761]*work.d[225]*work.L[659]-work.L[762]*work.d[229]*work.L[660]-work.L[763]*work.d[233]*work.L[661]-work.L[764]*work.d[237]*work.L[662]-work.L[765]*work.d[241]*work.L[663]-work.L[766]*work.d[245]*work.L[664]-work.L[767]*work.d[249]*work.L[665]-work.L[768]*work.d[253]*work.L[666]-work.L[769]*work.d[257]*work.L[667]-work.L[770]*work.d[261]*work.L[668]-work.L[771]*work.d[265]*work.L[669]-work.L[772]*work.d[269]*work.L[670]-work.L[773]*work.d[273]*work.L[671]-work.L[774]*work.d[277]*work.L[672]-work.L[775]*work.d[281]*work.L[673]-work.L[776]*work.d[285]*work.L[674]-work.L[777]*work.d[289]*work.L[675]-work.L[778]*work.d[293]*work.L[676]-work.L[779]*work.d[297]*work.L[677]-work.L[780]*work.d[301]*work.L[678]-work.L[781]*work.d[305]*work.L[679]-work.L[782]*work.d[309]*work.L[680]-work.L[783]*work.d[313]*1;
  residual += temp*temp;

  temp = work.KKT[1000]-work.L[789]*work.d[213]*work.L[656]-work.L[790]*work.d[217]*work.L[657]-work.L[791]*work.d[221]*work.L[658]-work.L[792]*work.d[225]*work.L[659]-work.L[793]*work.d[229]*work.L[660]-work.L[794]*work.d[233]*work.L[661]-work.L[795]*work.d[237]*work.L[662]-work.L[796]*work.d[241]*work.L[663]-work.L[797]*work.d[245]*work.L[664]-work.L[798]*work.d[249]*work.L[665]-work.L[799]*work.d[253]*work.L[666]-work.L[800]*work.d[257]*work.L[667]-work.L[801]*work.d[261]*work.L[668]-work.L[802]*work.d[265]*work.L[669]-work.L[803]*work.d[269]*work.L[670]-work.L[804]*work.d[273]*work.L[671]-work.L[805]*work.d[277]*work.L[672]-work.L[806]*work.d[281]*work.L[673]-work.L[807]*work.d[285]*work.L[674]-work.L[808]*work.d[289]*work.L[675]-work.L[809]*work.d[293]*work.L[676]-work.L[810]*work.d[297]*work.L[677]-work.L[811]*work.d[301]*work.L[678]-work.L[812]*work.d[305]*work.L[679]-work.L[813]*work.d[309]*work.L[680]-work.L[814]*work.d[313]*1;
  residual += temp*temp;

  temp = work.KKT[1007]-work.L[689]*work.d[213]*work.L[689]-work.L[690]*work.d[217]*work.L[690]-work.L[691]*work.d[221]*work.L[691]-work.L[692]*work.d[225]*work.L[692]-work.L[693]*work.d[229]*work.L[693]-work.L[694]*work.d[233]*work.L[694]-work.L[695]*work.d[237]*work.L[695]-work.L[696]*work.d[241]*work.L[696]-work.L[697]*work.d[245]*work.L[697]-work.L[698]*work.d[249]*work.L[698]-work.L[699]*work.d[253]*work.L[699]-work.L[700]*work.d[257]*work.L[700]-work.L[701]*work.d[261]*work.L[701]-work.L[702]*work.d[265]*work.L[702]-work.L[703]*work.d[269]*work.L[703]-work.L[704]*work.d[273]*work.L[704]-work.L[705]*work.d[277]*work.L[705]-work.L[706]*work.d[281]*work.L[706]-work.L[707]*work.d[285]*work.L[707]-work.L[708]*work.d[289]*work.L[708]-work.L[709]*work.d[293]*work.L[709]-work.L[710]*work.d[297]*work.L[710]-work.L[711]*work.d[301]*work.L[711]-work.L[712]*work.d[305]*work.L[712]-work.L[713]*work.d[309]*work.L[713]-work.L[714]*work.d[313]*work.L[714]-1*work.d[317]*1-work.L[688]*work.d[200]*work.L[688]-work.L[715]*work.d[315]*work.L[715]-work.L[716]*work.d[316]*work.L[716];
  residual += temp*temp;

  temp = work.KKT[1008]-work.L[723]*work.d[213]*work.L[689]-work.L[724]*work.d[217]*work.L[690]-work.L[725]*work.d[221]*work.L[691]-work.L[726]*work.d[225]*work.L[692]-work.L[727]*work.d[229]*work.L[693]-work.L[728]*work.d[233]*work.L[694]-work.L[729]*work.d[237]*work.L[695]-work.L[730]*work.d[241]*work.L[696]-work.L[731]*work.d[245]*work.L[697]-work.L[732]*work.d[249]*work.L[698]-work.L[733]*work.d[253]*work.L[699]-work.L[734]*work.d[257]*work.L[700]-work.L[735]*work.d[261]*work.L[701]-work.L[736]*work.d[265]*work.L[702]-work.L[737]*work.d[269]*work.L[703]-work.L[738]*work.d[273]*work.L[704]-work.L[739]*work.d[277]*work.L[705]-work.L[740]*work.d[281]*work.L[706]-work.L[741]*work.d[285]*work.L[707]-work.L[742]*work.d[289]*work.L[708]-work.L[743]*work.d[293]*work.L[709]-work.L[744]*work.d[297]*work.L[710]-work.L[745]*work.d[301]*work.L[711]-work.L[746]*work.d[305]*work.L[712]-work.L[747]*work.d[309]*work.L[713]-work.L[748]*work.d[313]*work.L[714]-work.L[749]*work.d[317]*1;
  residual += temp*temp;

  temp = work.KKT[1009]-work.L[758]*work.d[213]*work.L[689]-work.L[759]*work.d[217]*work.L[690]-work.L[760]*work.d[221]*work.L[691]-work.L[761]*work.d[225]*work.L[692]-work.L[762]*work.d[229]*work.L[693]-work.L[763]*work.d[233]*work.L[694]-work.L[764]*work.d[237]*work.L[695]-work.L[765]*work.d[241]*work.L[696]-work.L[766]*work.d[245]*work.L[697]-work.L[767]*work.d[249]*work.L[698]-work.L[768]*work.d[253]*work.L[699]-work.L[769]*work.d[257]*work.L[700]-work.L[770]*work.d[261]*work.L[701]-work.L[771]*work.d[265]*work.L[702]-work.L[772]*work.d[269]*work.L[703]-work.L[773]*work.d[273]*work.L[704]-work.L[774]*work.d[277]*work.L[705]-work.L[775]*work.d[281]*work.L[706]-work.L[776]*work.d[285]*work.L[707]-work.L[777]*work.d[289]*work.L[708]-work.L[778]*work.d[293]*work.L[709]-work.L[779]*work.d[297]*work.L[710]-work.L[780]*work.d[301]*work.L[711]-work.L[781]*work.d[305]*work.L[712]-work.L[782]*work.d[309]*work.L[713]-work.L[783]*work.d[313]*work.L[714]-work.L[784]*work.d[317]*1;
  residual += temp*temp;

  temp = work.KKT[1010]-work.L[789]*work.d[213]*work.L[689]-work.L[790]*work.d[217]*work.L[690]-work.L[791]*work.d[221]*work.L[691]-work.L[792]*work.d[225]*work.L[692]-work.L[793]*work.d[229]*work.L[693]-work.L[794]*work.d[233]*work.L[694]-work.L[795]*work.d[237]*work.L[695]-work.L[796]*work.d[241]*work.L[696]-work.L[797]*work.d[245]*work.L[697]-work.L[798]*work.d[249]*work.L[698]-work.L[799]*work.d[253]*work.L[699]-work.L[800]*work.d[257]*work.L[700]-work.L[801]*work.d[261]*work.L[701]-work.L[802]*work.d[265]*work.L[702]-work.L[803]*work.d[269]*work.L[703]-work.L[804]*work.d[273]*work.L[704]-work.L[805]*work.d[277]*work.L[705]-work.L[806]*work.d[281]*work.L[706]-work.L[807]*work.d[285]*work.L[707]-work.L[808]*work.d[289]*work.L[708]-work.L[809]*work.d[293]*work.L[709]-work.L[810]*work.d[297]*work.L[710]-work.L[811]*work.d[301]*work.L[711]-work.L[812]*work.d[305]*work.L[712]-work.L[813]*work.d[309]*work.L[713]-work.L[814]*work.d[313]*work.L[714]-work.L[815]*work.d[317]*1;
  residual += temp*temp;

  temp = work.KKT[1017]-work.L[723]*work.d[213]*work.L[723]-work.L[724]*work.d[217]*work.L[724]-work.L[725]*work.d[221]*work.L[725]-work.L[726]*work.d[225]*work.L[726]-work.L[727]*work.d[229]*work.L[727]-work.L[728]*work.d[233]*work.L[728]-work.L[729]*work.d[237]*work.L[729]-work.L[730]*work.d[241]*work.L[730]-work.L[731]*work.d[245]*work.L[731]-work.L[732]*work.d[249]*work.L[732]-work.L[733]*work.d[253]*work.L[733]-work.L[734]*work.d[257]*work.L[734]-work.L[735]*work.d[261]*work.L[735]-work.L[736]*work.d[265]*work.L[736]-work.L[737]*work.d[269]*work.L[737]-work.L[738]*work.d[273]*work.L[738]-work.L[739]*work.d[277]*work.L[739]-work.L[740]*work.d[281]*work.L[740]-work.L[741]*work.d[285]*work.L[741]-work.L[742]*work.d[289]*work.L[742]-work.L[743]*work.d[293]*work.L[743]-work.L[744]*work.d[297]*work.L[744]-work.L[745]*work.d[301]*work.L[745]-work.L[746]*work.d[305]*work.L[746]-work.L[747]*work.d[309]*work.L[747]-work.L[748]*work.d[313]*work.L[748]-work.L[749]*work.d[317]*work.L[749]-1*work.d[321]*1-work.L[722]*work.d[203]*work.L[722]-work.L[750]*work.d[319]*work.L[750]-work.L[751]*work.d[320]*work.L[751];
  residual += temp*temp;

  temp = work.KKT[1018]-work.L[758]*work.d[213]*work.L[723]-work.L[759]*work.d[217]*work.L[724]-work.L[760]*work.d[221]*work.L[725]-work.L[761]*work.d[225]*work.L[726]-work.L[762]*work.d[229]*work.L[727]-work.L[763]*work.d[233]*work.L[728]-work.L[764]*work.d[237]*work.L[729]-work.L[765]*work.d[241]*work.L[730]-work.L[766]*work.d[245]*work.L[731]-work.L[767]*work.d[249]*work.L[732]-work.L[768]*work.d[253]*work.L[733]-work.L[769]*work.d[257]*work.L[734]-work.L[770]*work.d[261]*work.L[735]-work.L[771]*work.d[265]*work.L[736]-work.L[772]*work.d[269]*work.L[737]-work.L[773]*work.d[273]*work.L[738]-work.L[774]*work.d[277]*work.L[739]-work.L[775]*work.d[281]*work.L[740]-work.L[776]*work.d[285]*work.L[741]-work.L[777]*work.d[289]*work.L[742]-work.L[778]*work.d[293]*work.L[743]-work.L[779]*work.d[297]*work.L[744]-work.L[780]*work.d[301]*work.L[745]-work.L[781]*work.d[305]*work.L[746]-work.L[782]*work.d[309]*work.L[747]-work.L[783]*work.d[313]*work.L[748]-work.L[784]*work.d[317]*work.L[749]-work.L[785]*work.d[321]*1;
  residual += temp*temp;

  temp = work.KKT[1019]-work.L[789]*work.d[213]*work.L[723]-work.L[790]*work.d[217]*work.L[724]-work.L[791]*work.d[221]*work.L[725]-work.L[792]*work.d[225]*work.L[726]-work.L[793]*work.d[229]*work.L[727]-work.L[794]*work.d[233]*work.L[728]-work.L[795]*work.d[237]*work.L[729]-work.L[796]*work.d[241]*work.L[730]-work.L[797]*work.d[245]*work.L[731]-work.L[798]*work.d[249]*work.L[732]-work.L[799]*work.d[253]*work.L[733]-work.L[800]*work.d[257]*work.L[734]-work.L[801]*work.d[261]*work.L[735]-work.L[802]*work.d[265]*work.L[736]-work.L[803]*work.d[269]*work.L[737]-work.L[804]*work.d[273]*work.L[738]-work.L[805]*work.d[277]*work.L[739]-work.L[806]*work.d[281]*work.L[740]-work.L[807]*work.d[285]*work.L[741]-work.L[808]*work.d[289]*work.L[742]-work.L[809]*work.d[293]*work.L[743]-work.L[810]*work.d[297]*work.L[744]-work.L[811]*work.d[301]*work.L[745]-work.L[812]*work.d[305]*work.L[746]-work.L[813]*work.d[309]*work.L[747]-work.L[814]*work.d[313]*work.L[748]-work.L[815]*work.d[317]*work.L[749]-work.L[816]*work.d[321]*1;
  residual += temp*temp;

  temp = work.KKT[1026]-work.L[758]*work.d[213]*work.L[758]-work.L[759]*work.d[217]*work.L[759]-work.L[760]*work.d[221]*work.L[760]-work.L[761]*work.d[225]*work.L[761]-work.L[762]*work.d[229]*work.L[762]-work.L[763]*work.d[233]*work.L[763]-work.L[764]*work.d[237]*work.L[764]-work.L[765]*work.d[241]*work.L[765]-work.L[766]*work.d[245]*work.L[766]-work.L[767]*work.d[249]*work.L[767]-work.L[768]*work.d[253]*work.L[768]-work.L[769]*work.d[257]*work.L[769]-work.L[770]*work.d[261]*work.L[770]-work.L[771]*work.d[265]*work.L[771]-work.L[772]*work.d[269]*work.L[772]-work.L[773]*work.d[273]*work.L[773]-work.L[774]*work.d[277]*work.L[774]-work.L[775]*work.d[281]*work.L[775]-work.L[776]*work.d[285]*work.L[776]-work.L[777]*work.d[289]*work.L[777]-work.L[778]*work.d[293]*work.L[778]-work.L[779]*work.d[297]*work.L[779]-work.L[780]*work.d[301]*work.L[780]-work.L[781]*work.d[305]*work.L[781]-work.L[782]*work.d[309]*work.L[782]-work.L[783]*work.d[313]*work.L[783]-work.L[784]*work.d[317]*work.L[784]-work.L[785]*work.d[321]*work.L[785]-1*work.d[325]*1-work.L[757]*work.d[206]*work.L[757]-work.L[786]*work.d[323]*work.L[786]-work.L[787]*work.d[324]*work.L[787];
  residual += temp*temp;

  temp = work.KKT[1027]-work.L[789]*work.d[213]*work.L[758]-work.L[790]*work.d[217]*work.L[759]-work.L[791]*work.d[221]*work.L[760]-work.L[792]*work.d[225]*work.L[761]-work.L[793]*work.d[229]*work.L[762]-work.L[794]*work.d[233]*work.L[763]-work.L[795]*work.d[237]*work.L[764]-work.L[796]*work.d[241]*work.L[765]-work.L[797]*work.d[245]*work.L[766]-work.L[798]*work.d[249]*work.L[767]-work.L[799]*work.d[253]*work.L[768]-work.L[800]*work.d[257]*work.L[769]-work.L[801]*work.d[261]*work.L[770]-work.L[802]*work.d[265]*work.L[771]-work.L[803]*work.d[269]*work.L[772]-work.L[804]*work.d[273]*work.L[773]-work.L[805]*work.d[277]*work.L[774]-work.L[806]*work.d[281]*work.L[775]-work.L[807]*work.d[285]*work.L[776]-work.L[808]*work.d[289]*work.L[777]-work.L[809]*work.d[293]*work.L[778]-work.L[810]*work.d[297]*work.L[779]-work.L[811]*work.d[301]*work.L[780]-work.L[812]*work.d[305]*work.L[781]-work.L[813]*work.d[309]*work.L[782]-work.L[814]*work.d[313]*work.L[783]-work.L[815]*work.d[317]*work.L[784]-work.L[816]*work.d[321]*work.L[785]-work.L[817]*work.d[325]*1;
  residual += temp*temp;

  temp = work.KKT[1030]-work.L[789]*work.d[213]*work.L[789]-work.L[790]*work.d[217]*work.L[790]-work.L[791]*work.d[221]*work.L[791]-work.L[792]*work.d[225]*work.L[792]-work.L[793]*work.d[229]*work.L[793]-work.L[794]*work.d[233]*work.L[794]-work.L[795]*work.d[237]*work.L[795]-work.L[796]*work.d[241]*work.L[796]-work.L[797]*work.d[245]*work.L[797]-work.L[798]*work.d[249]*work.L[798]-work.L[799]*work.d[253]*work.L[799]-work.L[800]*work.d[257]*work.L[800]-work.L[801]*work.d[261]*work.L[801]-work.L[802]*work.d[265]*work.L[802]-work.L[803]*work.d[269]*work.L[803]-work.L[804]*work.d[273]*work.L[804]-work.L[805]*work.d[277]*work.L[805]-work.L[806]*work.d[281]*work.L[806]-work.L[807]*work.d[285]*work.L[807]-work.L[808]*work.d[289]*work.L[808]-work.L[809]*work.d[293]*work.L[809]-work.L[810]*work.d[297]*work.L[810]-work.L[811]*work.d[301]*work.L[811]-work.L[812]*work.d[305]*work.L[812]-work.L[813]*work.d[309]*work.L[813]-work.L[814]*work.d[313]*work.L[814]-work.L[815]*work.d[317]*work.L[815]-work.L[816]*work.d[321]*work.L[816]-work.L[817]*work.d[325]*work.L[817]-1*work.d[327]*1-work.L[788]*work.d[209]*work.L[788];
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

  temp = work.KKT[1]-work.L[2]*work.d[0]*1;
  residual += temp*temp;

  temp = work.KKT[3]-work.L[7]*work.d[1]*1;
  residual += temp*temp;

  temp = work.KKT[5]-work.L[12]*work.d[2]*1;
  residual += temp*temp;

  temp = work.KKT[7]-work.L[17]*work.d[3]*1;
  residual += temp*temp;

  temp = work.KKT[9]-work.L[22]*work.d[4]*1;
  residual += temp*temp;

  temp = work.KKT[11]-work.L[27]*work.d[5]*1;
  residual += temp*temp;

  temp = work.KKT[13]-work.L[32]*work.d[6]*1;
  residual += temp*temp;

  temp = work.KKT[15]-work.L[37]*work.d[7]*1;
  residual += temp*temp;

  temp = work.KKT[17]-work.L[42]*work.d[8]*1;
  residual += temp*temp;

  temp = work.KKT[19]-work.L[47]*work.d[9]*1;
  residual += temp*temp;

  temp = work.KKT[21]-work.L[52]*work.d[10]*1;
  residual += temp*temp;

  temp = work.KKT[23]-work.L[57]*work.d[11]*1;
  residual += temp*temp;

  temp = work.KKT[25]-work.L[62]*work.d[12]*1;
  residual += temp*temp;

  temp = work.KKT[27]-work.L[67]*work.d[13]*1;
  residual += temp*temp;

  temp = work.KKT[29]-work.L[72]*work.d[14]*1;
  residual += temp*temp;

  temp = work.KKT[31]-work.L[77]*work.d[15]*1;
  residual += temp*temp;

  temp = work.KKT[33]-work.L[82]*work.d[16]*1;
  residual += temp*temp;

  temp = work.KKT[35]-work.L[87]*work.d[17]*1;
  residual += temp*temp;

  temp = work.KKT[37]-work.L[92]*work.d[18]*1;
  residual += temp*temp;

  temp = work.KKT[39]-work.L[97]*work.d[19]*1;
  residual += temp*temp;

  temp = work.KKT[41]-work.L[102]*work.d[20]*1;
  residual += temp*temp;

  temp = work.KKT[43]-work.L[107]*work.d[21]*1;
  residual += temp*temp;

  temp = work.KKT[45]-work.L[112]*work.d[22]*1;
  residual += temp*temp;

  temp = work.KKT[47]-work.L[117]*work.d[23]*1;
  residual += temp*temp;

  temp = work.KKT[49]-work.L[122]*work.d[24]*1;
  residual += temp*temp;

  temp = work.KKT[51]-work.L[127]*work.d[25]*1;
  residual += temp*temp;

  temp = work.KKT[53]-work.L[132]*work.d[26]*1;
  residual += temp*temp;

  temp = work.KKT[55]-work.L[137]*work.d[27]*1;
  residual += temp*temp;

  temp = work.KKT[57]-work.L[142]*work.d[28]*1;
  residual += temp*temp;

  temp = work.KKT[59]-work.L[147]*work.d[29]*1;
  residual += temp*temp;

  temp = work.KKT[61]-work.L[0]*work.d[30]*1;
  residual += temp*temp;

  temp = work.KKT[63]-work.L[5]*work.d[31]*1;
  residual += temp*temp;

  temp = work.KKT[65]-work.L[10]*work.d[32]*1;
  residual += temp*temp;

  temp = work.KKT[67]-work.L[15]*work.d[33]*1;
  residual += temp*temp;

  temp = work.KKT[69]-work.L[20]*work.d[34]*1;
  residual += temp*temp;

  temp = work.KKT[71]-work.L[25]*work.d[35]*1;
  residual += temp*temp;

  temp = work.KKT[73]-work.L[30]*work.d[36]*1;
  residual += temp*temp;

  temp = work.KKT[75]-work.L[35]*work.d[37]*1;
  residual += temp*temp;

  temp = work.KKT[77]-work.L[40]*work.d[38]*1;
  residual += temp*temp;

  temp = work.KKT[79]-work.L[45]*work.d[39]*1;
  residual += temp*temp;

  temp = work.KKT[81]-work.L[50]*work.d[40]*1;
  residual += temp*temp;

  temp = work.KKT[83]-work.L[55]*work.d[41]*1;
  residual += temp*temp;

  temp = work.KKT[85]-work.L[60]*work.d[42]*1;
  residual += temp*temp;

  temp = work.KKT[87]-work.L[65]*work.d[43]*1;
  residual += temp*temp;

  temp = work.KKT[89]-work.L[70]*work.d[44]*1;
  residual += temp*temp;

  temp = work.KKT[91]-work.L[75]*work.d[45]*1;
  residual += temp*temp;

  temp = work.KKT[93]-work.L[80]*work.d[46]*1;
  residual += temp*temp;

  temp = work.KKT[95]-work.L[85]*work.d[47]*1;
  residual += temp*temp;

  temp = work.KKT[97]-work.L[90]*work.d[48]*1;
  residual += temp*temp;

  temp = work.KKT[99]-work.L[95]*work.d[49]*1;
  residual += temp*temp;

  temp = work.KKT[101]-work.L[100]*work.d[50]*1;
  residual += temp*temp;

  temp = work.KKT[103]-work.L[105]*work.d[51]*1;
  residual += temp*temp;

  temp = work.KKT[105]-work.L[110]*work.d[52]*1;
  residual += temp*temp;

  temp = work.KKT[107]-work.L[115]*work.d[53]*1;
  residual += temp*temp;

  temp = work.KKT[109]-work.L[120]*work.d[54]*1;
  residual += temp*temp;

  temp = work.KKT[111]-work.L[125]*work.d[55]*1;
  residual += temp*temp;

  temp = work.KKT[113]-work.L[130]*work.d[56]*1;
  residual += temp*temp;

  temp = work.KKT[115]-work.L[135]*work.d[57]*1;
  residual += temp*temp;

  temp = work.KKT[117]-work.L[140]*work.d[58]*1;
  residual += temp*temp;

  temp = work.KKT[119]-work.L[145]*work.d[59]*1;
  residual += temp*temp;

  temp = work.KKT[121]-work.L[150]*work.d[60]*1;
  residual += temp*temp;

  temp = work.KKT[123]-work.L[158]*work.d[61]*1;
  residual += temp*temp;

  temp = work.KKT[125]-work.L[167]*work.d[62]*1;
  residual += temp*temp;

  temp = work.KKT[127]-work.L[177]*work.d[63]*1;
  residual += temp*temp;

  temp = work.KKT[129]-work.L[188]*work.d[64]*1;
  residual += temp*temp;

  temp = work.KKT[131]-work.L[200]*work.d[65]*1;
  residual += temp*temp;

  temp = work.KKT[133]-work.L[213]*work.d[66]*1;
  residual += temp*temp;

  temp = work.KKT[135]-work.L[227]*work.d[67]*1;
  residual += temp*temp;

  temp = work.KKT[137]-work.L[242]*work.d[68]*1;
  residual += temp*temp;

  temp = work.KKT[139]-work.L[258]*work.d[69]*1;
  residual += temp*temp;

  temp = work.KKT[141]-work.L[275]*work.d[70]*1;
  residual += temp*temp;

  temp = work.KKT[143]-work.L[293]*work.d[71]*1;
  residual += temp*temp;

  temp = work.KKT[145]-work.L[312]*work.d[72]*1;
  residual += temp*temp;

  temp = work.KKT[147]-work.L[332]*work.d[73]*1;
  residual += temp*temp;

  temp = work.KKT[149]-work.L[353]*work.d[74]*1;
  residual += temp*temp;

  temp = work.KKT[151]-work.L[375]*work.d[75]*1;
  residual += temp*temp;

  temp = work.KKT[153]-work.L[398]*work.d[76]*1;
  residual += temp*temp;

  temp = work.KKT[155]-work.L[422]*work.d[77]*1;
  residual += temp*temp;

  temp = work.KKT[157]-work.L[447]*work.d[78]*1;
  residual += temp*temp;

  temp = work.KKT[159]-work.L[473]*work.d[79]*1;
  residual += temp*temp;

  temp = work.KKT[161]-work.L[500]*work.d[80]*1;
  residual += temp*temp;

  temp = work.KKT[163]-work.L[528]*work.d[81]*1;
  residual += temp*temp;

  temp = work.KKT[165]-work.L[557]*work.d[82]*1;
  residual += temp*temp;

  temp = work.KKT[167]-work.L[587]*work.d[83]*1;
  residual += temp*temp;

  temp = work.KKT[169]-work.L[618]*work.d[84]*1;
  residual += temp*temp;

  temp = work.KKT[171]-work.L[650]*work.d[85]*1;
  residual += temp*temp;

  temp = work.KKT[173]-work.L[683]*work.d[86]*1;
  residual += temp*temp;

  temp = work.KKT[175]-work.L[717]*work.d[87]*1;
  residual += temp*temp;

  temp = work.KKT[177]-work.L[752]*work.d[88]*1;
  residual += temp*temp;

  temp = work.KKT[179]-work.L[818]*work.d[89]*1;
  residual += temp*temp;

  temp = work.KKT[181]-work.L[152]*work.d[90]*1;
  residual += temp*temp;

  temp = work.KKT[183]-work.L[160]*work.d[91]*1;
  residual += temp*temp;

  temp = work.KKT[185]-work.L[169]*work.d[92]*1;
  residual += temp*temp;

  temp = work.KKT[187]-work.L[179]*work.d[93]*1;
  residual += temp*temp;

  temp = work.KKT[189]-work.L[190]*work.d[94]*1;
  residual += temp*temp;

  temp = work.KKT[191]-work.L[202]*work.d[95]*1;
  residual += temp*temp;

  temp = work.KKT[193]-work.L[215]*work.d[96]*1;
  residual += temp*temp;

  temp = work.KKT[195]-work.L[229]*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[197]-work.L[244]*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[199]-work.L[260]*work.d[99]*1;
  residual += temp*temp;

  temp = work.KKT[201]-work.L[277]*work.d[100]*1;
  residual += temp*temp;

  temp = work.KKT[203]-work.L[295]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[205]-work.L[314]*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[207]-work.L[334]*work.d[103]*1;
  residual += temp*temp;

  temp = work.KKT[209]-work.L[355]*work.d[104]*1;
  residual += temp*temp;

  temp = work.KKT[211]-work.L[377]*work.d[105]*1;
  residual += temp*temp;

  temp = work.KKT[213]-work.L[400]*work.d[106]*1;
  residual += temp*temp;

  temp = work.KKT[215]-work.L[424]*work.d[107]*1;
  residual += temp*temp;

  temp = work.KKT[217]-work.L[449]*work.d[108]*1;
  residual += temp*temp;

  temp = work.KKT[219]-work.L[475]*work.d[109]*1;
  residual += temp*temp;

  temp = work.KKT[221]-work.L[502]*work.d[110]*1;
  residual += temp*temp;

  temp = work.KKT[223]-work.L[530]*work.d[111]*1;
  residual += temp*temp;

  temp = work.KKT[225]-work.L[559]*work.d[112]*1;
  residual += temp*temp;

  temp = work.KKT[227]-work.L[589]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[229]-work.L[620]*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[231]-work.L[652]*work.d[115]*1;
  residual += temp*temp;

  temp = work.KKT[233]-work.L[685]*work.d[116]*1;
  residual += temp*temp;

  temp = work.KKT[235]-work.L[719]*work.d[117]*1;
  residual += temp*temp;

  temp = work.KKT[237]-work.L[754]*work.d[118]*1;
  residual += temp*temp;

  temp = work.KKT[239]-work.L[821]*work.d[119]*1;
  residual += temp*temp;

  temp = work.KKT[243]-work.L[2]*work.d[0]*work.L[2]-1*work.d[122]*1-work.L[3]*work.d[120]*work.L[3]-work.L[4]*work.d[121]*work.L[4];
  residual += temp*temp;

  temp = work.KKT[248]-work.L[7]*work.d[1]*work.L[7]-1*work.d[125]*1-work.L[8]*work.d[123]*work.L[8]-work.L[9]*work.d[124]*work.L[9];
  residual += temp*temp;

  temp = work.KKT[253]-work.L[12]*work.d[2]*work.L[12]-1*work.d[128]*1-work.L[13]*work.d[126]*work.L[13]-work.L[14]*work.d[127]*work.L[14];
  residual += temp*temp;

  temp = work.KKT[258]-work.L[17]*work.d[3]*work.L[17]-1*work.d[131]*1-work.L[18]*work.d[129]*work.L[18]-work.L[19]*work.d[130]*work.L[19];
  residual += temp*temp;

  temp = work.KKT[263]-work.L[22]*work.d[4]*work.L[22]-1*work.d[134]*1-work.L[23]*work.d[132]*work.L[23]-work.L[24]*work.d[133]*work.L[24];
  residual += temp*temp;

  temp = work.KKT[268]-work.L[27]*work.d[5]*work.L[27]-1*work.d[137]*1-work.L[28]*work.d[135]*work.L[28]-work.L[29]*work.d[136]*work.L[29];
  residual += temp*temp;

  temp = work.KKT[273]-work.L[32]*work.d[6]*work.L[32]-1*work.d[140]*1-work.L[33]*work.d[138]*work.L[33]-work.L[34]*work.d[139]*work.L[34];
  residual += temp*temp;

  temp = work.KKT[278]-work.L[37]*work.d[7]*work.L[37]-1*work.d[143]*1-work.L[38]*work.d[141]*work.L[38]-work.L[39]*work.d[142]*work.L[39];
  residual += temp*temp;

  temp = work.KKT[283]-work.L[42]*work.d[8]*work.L[42]-1*work.d[146]*1-work.L[43]*work.d[144]*work.L[43]-work.L[44]*work.d[145]*work.L[44];
  residual += temp*temp;

  temp = work.KKT[288]-work.L[47]*work.d[9]*work.L[47]-1*work.d[149]*1-work.L[48]*work.d[147]*work.L[48]-work.L[49]*work.d[148]*work.L[49];
  residual += temp*temp;

  temp = work.KKT[293]-work.L[52]*work.d[10]*work.L[52]-1*work.d[152]*1-work.L[53]*work.d[150]*work.L[53]-work.L[54]*work.d[151]*work.L[54];
  residual += temp*temp;

  temp = work.KKT[298]-work.L[57]*work.d[11]*work.L[57]-1*work.d[155]*1-work.L[58]*work.d[153]*work.L[58]-work.L[59]*work.d[154]*work.L[59];
  residual += temp*temp;

  temp = work.KKT[303]-work.L[62]*work.d[12]*work.L[62]-1*work.d[158]*1-work.L[63]*work.d[156]*work.L[63]-work.L[64]*work.d[157]*work.L[64];
  residual += temp*temp;

  temp = work.KKT[308]-work.L[67]*work.d[13]*work.L[67]-1*work.d[161]*1-work.L[68]*work.d[159]*work.L[68]-work.L[69]*work.d[160]*work.L[69];
  residual += temp*temp;

  temp = work.KKT[313]-work.L[72]*work.d[14]*work.L[72]-1*work.d[164]*1-work.L[73]*work.d[162]*work.L[73]-work.L[74]*work.d[163]*work.L[74];
  residual += temp*temp;

  temp = work.KKT[318]-work.L[77]*work.d[15]*work.L[77]-1*work.d[167]*1-work.L[78]*work.d[165]*work.L[78]-work.L[79]*work.d[166]*work.L[79];
  residual += temp*temp;

  temp = work.KKT[323]-work.L[82]*work.d[16]*work.L[82]-1*work.d[170]*1-work.L[83]*work.d[168]*work.L[83]-work.L[84]*work.d[169]*work.L[84];
  residual += temp*temp;

  temp = work.KKT[328]-work.L[87]*work.d[17]*work.L[87]-1*work.d[173]*1-work.L[88]*work.d[171]*work.L[88]-work.L[89]*work.d[172]*work.L[89];
  residual += temp*temp;

  temp = work.KKT[333]-work.L[92]*work.d[18]*work.L[92]-1*work.d[176]*1-work.L[93]*work.d[174]*work.L[93]-work.L[94]*work.d[175]*work.L[94];
  residual += temp*temp;

  temp = work.KKT[338]-work.L[97]*work.d[19]*work.L[97]-1*work.d[179]*1-work.L[98]*work.d[177]*work.L[98]-work.L[99]*work.d[178]*work.L[99];
  residual += temp*temp;

  temp = work.KKT[343]-work.L[102]*work.d[20]*work.L[102]-1*work.d[182]*1-work.L[103]*work.d[180]*work.L[103]-work.L[104]*work.d[181]*work.L[104];
  residual += temp*temp;

  temp = work.KKT[348]-work.L[107]*work.d[21]*work.L[107]-1*work.d[185]*1-work.L[108]*work.d[183]*work.L[108]-work.L[109]*work.d[184]*work.L[109];
  residual += temp*temp;

  temp = work.KKT[353]-work.L[112]*work.d[22]*work.L[112]-1*work.d[188]*1-work.L[113]*work.d[186]*work.L[113]-work.L[114]*work.d[187]*work.L[114];
  residual += temp*temp;

  temp = work.KKT[358]-work.L[117]*work.d[23]*work.L[117]-1*work.d[191]*1-work.L[118]*work.d[189]*work.L[118]-work.L[119]*work.d[190]*work.L[119];
  residual += temp*temp;

  temp = work.KKT[363]-work.L[122]*work.d[24]*work.L[122]-1*work.d[194]*1-work.L[123]*work.d[192]*work.L[123]-work.L[124]*work.d[193]*work.L[124];
  residual += temp*temp;

  temp = work.KKT[368]-work.L[127]*work.d[25]*work.L[127]-1*work.d[197]*1-work.L[128]*work.d[195]*work.L[128]-work.L[129]*work.d[196]*work.L[129];
  residual += temp*temp;

  temp = work.KKT[373]-work.L[132]*work.d[26]*work.L[132]-1*work.d[200]*1-work.L[133]*work.d[198]*work.L[133]-work.L[134]*work.d[199]*work.L[134];
  residual += temp*temp;

  temp = work.KKT[378]-work.L[137]*work.d[27]*work.L[137]-1*work.d[203]*1-work.L[138]*work.d[201]*work.L[138]-work.L[139]*work.d[202]*work.L[139];
  residual += temp*temp;

  temp = work.KKT[383]-work.L[142]*work.d[28]*work.L[142]-1*work.d[206]*1-work.L[143]*work.d[204]*work.L[143]-work.L[144]*work.d[205]*work.L[144];
  residual += temp*temp;

  temp = work.KKT[388]-work.L[147]*work.d[29]*work.L[147]-1*work.d[209]*1-work.L[148]*work.d[207]*work.L[148]-work.L[149]*work.d[208]*work.L[149];
  residual += temp*temp;

  temp = work.KKT[242]-work.L[0]*work.d[30]*work.L[0]-1*work.d[121]*1-work.L[1]*work.d[120]*work.L[1];
  residual += temp*temp;

  temp = work.KKT[247]-work.L[5]*work.d[31]*work.L[5]-1*work.d[124]*1-work.L[6]*work.d[123]*work.L[6];
  residual += temp*temp;

  temp = work.KKT[252]-work.L[10]*work.d[32]*work.L[10]-1*work.d[127]*1-work.L[11]*work.d[126]*work.L[11];
  residual += temp*temp;

  temp = work.KKT[257]-work.L[15]*work.d[33]*work.L[15]-1*work.d[130]*1-work.L[16]*work.d[129]*work.L[16];
  residual += temp*temp;

  temp = work.KKT[262]-work.L[20]*work.d[34]*work.L[20]-1*work.d[133]*1-work.L[21]*work.d[132]*work.L[21];
  residual += temp*temp;

  temp = work.KKT[267]-work.L[25]*work.d[35]*work.L[25]-1*work.d[136]*1-work.L[26]*work.d[135]*work.L[26];
  residual += temp*temp;

  temp = work.KKT[272]-work.L[30]*work.d[36]*work.L[30]-1*work.d[139]*1-work.L[31]*work.d[138]*work.L[31];
  residual += temp*temp;

  temp = work.KKT[277]-work.L[35]*work.d[37]*work.L[35]-1*work.d[142]*1-work.L[36]*work.d[141]*work.L[36];
  residual += temp*temp;

  temp = work.KKT[282]-work.L[40]*work.d[38]*work.L[40]-1*work.d[145]*1-work.L[41]*work.d[144]*work.L[41];
  residual += temp*temp;

  temp = work.KKT[287]-work.L[45]*work.d[39]*work.L[45]-1*work.d[148]*1-work.L[46]*work.d[147]*work.L[46];
  residual += temp*temp;

  temp = work.KKT[292]-work.L[50]*work.d[40]*work.L[50]-1*work.d[151]*1-work.L[51]*work.d[150]*work.L[51];
  residual += temp*temp;

  temp = work.KKT[297]-work.L[55]*work.d[41]*work.L[55]-1*work.d[154]*1-work.L[56]*work.d[153]*work.L[56];
  residual += temp*temp;

  temp = work.KKT[302]-work.L[60]*work.d[42]*work.L[60]-1*work.d[157]*1-work.L[61]*work.d[156]*work.L[61];
  residual += temp*temp;

  temp = work.KKT[307]-work.L[65]*work.d[43]*work.L[65]-1*work.d[160]*1-work.L[66]*work.d[159]*work.L[66];
  residual += temp*temp;

  temp = work.KKT[312]-work.L[70]*work.d[44]*work.L[70]-1*work.d[163]*1-work.L[71]*work.d[162]*work.L[71];
  residual += temp*temp;

  temp = work.KKT[317]-work.L[75]*work.d[45]*work.L[75]-1*work.d[166]*1-work.L[76]*work.d[165]*work.L[76];
  residual += temp*temp;

  temp = work.KKT[322]-work.L[80]*work.d[46]*work.L[80]-1*work.d[169]*1-work.L[81]*work.d[168]*work.L[81];
  residual += temp*temp;

  temp = work.KKT[327]-work.L[85]*work.d[47]*work.L[85]-1*work.d[172]*1-work.L[86]*work.d[171]*work.L[86];
  residual += temp*temp;

  temp = work.KKT[332]-work.L[90]*work.d[48]*work.L[90]-1*work.d[175]*1-work.L[91]*work.d[174]*work.L[91];
  residual += temp*temp;

  temp = work.KKT[337]-work.L[95]*work.d[49]*work.L[95]-1*work.d[178]*1-work.L[96]*work.d[177]*work.L[96];
  residual += temp*temp;

  temp = work.KKT[342]-work.L[100]*work.d[50]*work.L[100]-1*work.d[181]*1-work.L[101]*work.d[180]*work.L[101];
  residual += temp*temp;

  temp = work.KKT[347]-work.L[105]*work.d[51]*work.L[105]-1*work.d[184]*1-work.L[106]*work.d[183]*work.L[106];
  residual += temp*temp;

  temp = work.KKT[352]-work.L[110]*work.d[52]*work.L[110]-1*work.d[187]*1-work.L[111]*work.d[186]*work.L[111];
  residual += temp*temp;

  temp = work.KKT[357]-work.L[115]*work.d[53]*work.L[115]-1*work.d[190]*1-work.L[116]*work.d[189]*work.L[116];
  residual += temp*temp;

  temp = work.KKT[362]-work.L[120]*work.d[54]*work.L[120]-1*work.d[193]*1-work.L[121]*work.d[192]*work.L[121];
  residual += temp*temp;

  temp = work.KKT[367]-work.L[125]*work.d[55]*work.L[125]-1*work.d[196]*1-work.L[126]*work.d[195]*work.L[126];
  residual += temp*temp;

  temp = work.KKT[372]-work.L[130]*work.d[56]*work.L[130]-1*work.d[199]*1-work.L[131]*work.d[198]*work.L[131];
  residual += temp*temp;

  temp = work.KKT[377]-work.L[135]*work.d[57]*work.L[135]-1*work.d[202]*1-work.L[136]*work.d[201]*work.L[136];
  residual += temp*temp;

  temp = work.KKT[382]-work.L[140]*work.d[58]*work.L[140]-1*work.d[205]*1-work.L[141]*work.d[204]*work.L[141];
  residual += temp*temp;

  temp = work.KKT[387]-work.L[145]*work.d[59]*work.L[145]-1*work.d[208]*1-work.L[146]*work.d[207]*work.L[146];
  residual += temp*temp;

  temp = work.KKT[392]-work.L[150]*work.d[60]*work.L[150]-1*work.d[211]*1-work.L[151]*work.d[210]*work.L[151];
  residual += temp*temp;

  temp = work.KKT[428]-work.L[158]*work.d[61]*work.L[158]-1*work.d[215]*1-work.L[159]*work.d[214]*work.L[159];
  residual += temp*temp;

  temp = work.KKT[463]-work.L[167]*work.d[62]*work.L[167]-1*work.d[219]*1-work.L[168]*work.d[218]*work.L[168];
  residual += temp*temp;

  temp = work.KKT[497]-work.L[177]*work.d[63]*work.L[177]-1*work.d[223]*1-work.L[178]*work.d[222]*work.L[178];
  residual += temp*temp;

  temp = work.KKT[530]-work.L[188]*work.d[64]*work.L[188]-1*work.d[227]*1-work.L[189]*work.d[226]*work.L[189];
  residual += temp*temp;

  temp = work.KKT[562]-work.L[200]*work.d[65]*work.L[200]-1*work.d[231]*1-work.L[201]*work.d[230]*work.L[201];
  residual += temp*temp;

  temp = work.KKT[593]-work.L[213]*work.d[66]*work.L[213]-1*work.d[235]*1-work.L[214]*work.d[234]*work.L[214];
  residual += temp*temp;

  temp = work.KKT[623]-work.L[227]*work.d[67]*work.L[227]-1*work.d[239]*1-work.L[228]*work.d[238]*work.L[228];
  residual += temp*temp;

  temp = work.KKT[652]-work.L[242]*work.d[68]*work.L[242]-1*work.d[243]*1-work.L[243]*work.d[242]*work.L[243];
  residual += temp*temp;

  temp = work.KKT[680]-work.L[258]*work.d[69]*work.L[258]-1*work.d[247]*1-work.L[259]*work.d[246]*work.L[259];
  residual += temp*temp;

  temp = work.KKT[707]-work.L[275]*work.d[70]*work.L[275]-1*work.d[251]*1-work.L[276]*work.d[250]*work.L[276];
  residual += temp*temp;

  temp = work.KKT[733]-work.L[293]*work.d[71]*work.L[293]-1*work.d[255]*1-work.L[294]*work.d[254]*work.L[294];
  residual += temp*temp;

  temp = work.KKT[758]-work.L[312]*work.d[72]*work.L[312]-1*work.d[259]*1-work.L[313]*work.d[258]*work.L[313];
  residual += temp*temp;

  temp = work.KKT[782]-work.L[332]*work.d[73]*work.L[332]-1*work.d[263]*1-work.L[333]*work.d[262]*work.L[333];
  residual += temp*temp;

  temp = work.KKT[805]-work.L[353]*work.d[74]*work.L[353]-1*work.d[267]*1-work.L[354]*work.d[266]*work.L[354];
  residual += temp*temp;

  temp = work.KKT[827]-work.L[375]*work.d[75]*work.L[375]-1*work.d[271]*1-work.L[376]*work.d[270]*work.L[376];
  residual += temp*temp;

  temp = work.KKT[848]-work.L[398]*work.d[76]*work.L[398]-1*work.d[275]*1-work.L[399]*work.d[274]*work.L[399];
  residual += temp*temp;

  temp = work.KKT[868]-work.L[422]*work.d[77]*work.L[422]-1*work.d[279]*1-work.L[423]*work.d[278]*work.L[423];
  residual += temp*temp;

  temp = work.KKT[887]-work.L[447]*work.d[78]*work.L[447]-1*work.d[283]*1-work.L[448]*work.d[282]*work.L[448];
  residual += temp*temp;

  temp = work.KKT[905]-work.L[473]*work.d[79]*work.L[473]-1*work.d[287]*1-work.L[474]*work.d[286]*work.L[474];
  residual += temp*temp;

  temp = work.KKT[922]-work.L[500]*work.d[80]*work.L[500]-1*work.d[291]*1-work.L[501]*work.d[290]*work.L[501];
  residual += temp*temp;

  temp = work.KKT[938]-work.L[528]*work.d[81]*work.L[528]-1*work.d[295]*1-work.L[529]*work.d[294]*work.L[529];
  residual += temp*temp;

  temp = work.KKT[953]-work.L[557]*work.d[82]*work.L[557]-1*work.d[299]*1-work.L[558]*work.d[298]*work.L[558];
  residual += temp*temp;

  temp = work.KKT[967]-work.L[587]*work.d[83]*work.L[587]-1*work.d[303]*1-work.L[588]*work.d[302]*work.L[588];
  residual += temp*temp;

  temp = work.KKT[980]-work.L[618]*work.d[84]*work.L[618]-1*work.d[307]*1-work.L[619]*work.d[306]*work.L[619];
  residual += temp*temp;

  temp = work.KKT[992]-work.L[650]*work.d[85]*work.L[650]-1*work.d[311]*1-work.L[651]*work.d[310]*work.L[651];
  residual += temp*temp;

  temp = work.KKT[1003]-work.L[683]*work.d[86]*work.L[683]-1*work.d[315]*1-work.L[684]*work.d[314]*work.L[684];
  residual += temp*temp;

  temp = work.KKT[1013]-work.L[717]*work.d[87]*work.L[717]-1*work.d[319]*1-work.L[718]*work.d[318]*work.L[718];
  residual += temp*temp;

  temp = work.KKT[1022]-work.L[752]*work.d[88]*work.L[752]-1*work.d[323]*1-work.L[753]*work.d[322]*work.L[753];
  residual += temp*temp;

  temp = work.KKT[1033]-work.L[818]*work.d[89]*work.L[818]-1*work.d[328]*1-work.L[819]*work.d[326]*work.L[819]-work.L[820]*work.d[327]*work.L[820];
  residual += temp*temp;

  temp = work.KKT[394]-work.L[152]*work.d[90]*work.L[152]-1*work.d[212]*1-work.L[153]*work.d[210]*work.L[153]-work.L[154]*work.d[211]*work.L[154];
  residual += temp*temp;

  temp = work.KKT[430]-work.L[160]*work.d[91]*work.L[160]-1*work.d[216]*1-work.L[161]*work.d[214]*work.L[161]-work.L[162]*work.d[215]*work.L[162];
  residual += temp*temp;

  temp = work.KKT[465]-work.L[169]*work.d[92]*work.L[169]-1*work.d[220]*1-work.L[170]*work.d[218]*work.L[170]-work.L[171]*work.d[219]*work.L[171];
  residual += temp*temp;

  temp = work.KKT[499]-work.L[179]*work.d[93]*work.L[179]-1*work.d[224]*1-work.L[180]*work.d[222]*work.L[180]-work.L[181]*work.d[223]*work.L[181];
  residual += temp*temp;

  temp = work.KKT[532]-work.L[190]*work.d[94]*work.L[190]-1*work.d[228]*1-work.L[191]*work.d[226]*work.L[191]-work.L[192]*work.d[227]*work.L[192];
  residual += temp*temp;

  temp = work.KKT[564]-work.L[202]*work.d[95]*work.L[202]-1*work.d[232]*1-work.L[203]*work.d[230]*work.L[203]-work.L[204]*work.d[231]*work.L[204];
  residual += temp*temp;

  temp = work.KKT[595]-work.L[215]*work.d[96]*work.L[215]-1*work.d[236]*1-work.L[216]*work.d[234]*work.L[216]-work.L[217]*work.d[235]*work.L[217];
  residual += temp*temp;

  temp = work.KKT[625]-work.L[229]*work.d[97]*work.L[229]-1*work.d[240]*1-work.L[230]*work.d[238]*work.L[230]-work.L[231]*work.d[239]*work.L[231];
  residual += temp*temp;

  temp = work.KKT[654]-work.L[244]*work.d[98]*work.L[244]-1*work.d[244]*1-work.L[245]*work.d[242]*work.L[245]-work.L[246]*work.d[243]*work.L[246];
  residual += temp*temp;

  temp = work.KKT[682]-work.L[260]*work.d[99]*work.L[260]-1*work.d[248]*1-work.L[261]*work.d[246]*work.L[261]-work.L[262]*work.d[247]*work.L[262];
  residual += temp*temp;

  temp = work.KKT[709]-work.L[277]*work.d[100]*work.L[277]-1*work.d[252]*1-work.L[278]*work.d[250]*work.L[278]-work.L[279]*work.d[251]*work.L[279];
  residual += temp*temp;

  temp = work.KKT[735]-work.L[295]*work.d[101]*work.L[295]-1*work.d[256]*1-work.L[296]*work.d[254]*work.L[296]-work.L[297]*work.d[255]*work.L[297];
  residual += temp*temp;

  temp = work.KKT[760]-work.L[314]*work.d[102]*work.L[314]-1*work.d[260]*1-work.L[315]*work.d[258]*work.L[315]-work.L[316]*work.d[259]*work.L[316];
  residual += temp*temp;

  temp = work.KKT[784]-work.L[334]*work.d[103]*work.L[334]-1*work.d[264]*1-work.L[335]*work.d[262]*work.L[335]-work.L[336]*work.d[263]*work.L[336];
  residual += temp*temp;

  temp = work.KKT[807]-work.L[355]*work.d[104]*work.L[355]-1*work.d[268]*1-work.L[356]*work.d[266]*work.L[356]-work.L[357]*work.d[267]*work.L[357];
  residual += temp*temp;

  temp = work.KKT[829]-work.L[377]*work.d[105]*work.L[377]-1*work.d[272]*1-work.L[378]*work.d[270]*work.L[378]-work.L[379]*work.d[271]*work.L[379];
  residual += temp*temp;

  temp = work.KKT[850]-work.L[400]*work.d[106]*work.L[400]-1*work.d[276]*1-work.L[401]*work.d[274]*work.L[401]-work.L[402]*work.d[275]*work.L[402];
  residual += temp*temp;

  temp = work.KKT[870]-work.L[424]*work.d[107]*work.L[424]-1*work.d[280]*1-work.L[425]*work.d[278]*work.L[425]-work.L[426]*work.d[279]*work.L[426];
  residual += temp*temp;

  temp = work.KKT[889]-work.L[449]*work.d[108]*work.L[449]-1*work.d[284]*1-work.L[450]*work.d[282]*work.L[450]-work.L[451]*work.d[283]*work.L[451];
  residual += temp*temp;

  temp = work.KKT[907]-work.L[475]*work.d[109]*work.L[475]-1*work.d[288]*1-work.L[476]*work.d[286]*work.L[476]-work.L[477]*work.d[287]*work.L[477];
  residual += temp*temp;

  temp = work.KKT[924]-work.L[502]*work.d[110]*work.L[502]-1*work.d[292]*1-work.L[503]*work.d[290]*work.L[503]-work.L[504]*work.d[291]*work.L[504];
  residual += temp*temp;

  temp = work.KKT[940]-work.L[530]*work.d[111]*work.L[530]-1*work.d[296]*1-work.L[531]*work.d[294]*work.L[531]-work.L[532]*work.d[295]*work.L[532];
  residual += temp*temp;

  temp = work.KKT[955]-work.L[559]*work.d[112]*work.L[559]-1*work.d[300]*1-work.L[560]*work.d[298]*work.L[560]-work.L[561]*work.d[299]*work.L[561];
  residual += temp*temp;

  temp = work.KKT[969]-work.L[589]*work.d[113]*work.L[589]-1*work.d[304]*1-work.L[590]*work.d[302]*work.L[590]-work.L[591]*work.d[303]*work.L[591];
  residual += temp*temp;

  temp = work.KKT[982]-work.L[620]*work.d[114]*work.L[620]-1*work.d[308]*1-work.L[621]*work.d[306]*work.L[621]-work.L[622]*work.d[307]*work.L[622];
  residual += temp*temp;

  temp = work.KKT[994]-work.L[652]*work.d[115]*work.L[652]-1*work.d[312]*1-work.L[653]*work.d[310]*work.L[653]-work.L[654]*work.d[311]*work.L[654];
  residual += temp*temp;

  temp = work.KKT[1005]-work.L[685]*work.d[116]*work.L[685]-1*work.d[316]*1-work.L[686]*work.d[314]*work.L[686]-work.L[687]*work.d[315]*work.L[687];
  residual += temp*temp;

  temp = work.KKT[1015]-work.L[719]*work.d[117]*work.L[719]-1*work.d[320]*1-work.L[720]*work.d[318]*work.L[720]-work.L[721]*work.d[319]*work.L[721];
  residual += temp*temp;

  temp = work.KKT[1024]-work.L[754]*work.d[118]*work.L[754]-1*work.d[324]*1-work.L[755]*work.d[322]*work.L[755]-work.L[756]*work.d[323]*work.L[756];
  residual += temp*temp;

  temp = work.KKT[1034]-work.L[821]*work.d[119]*work.L[821]-1*work.d[329]*1-work.L[822]*work.d[326]*work.L[822]-work.L[823]*work.d[327]*work.L[823]-work.L[824]*work.d[328]*work.L[824];
  residual += temp*temp;

  temp = work.KKT[241]-work.L[3]*work.d[120]*1;
  residual += temp*temp;

  temp = work.KKT[246]-work.L[8]*work.d[123]*1;
  residual += temp*temp;

  temp = work.KKT[251]-work.L[13]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[256]-work.L[18]*work.d[129]*1;
  residual += temp*temp;

  temp = work.KKT[261]-work.L[23]*work.d[132]*1;
  residual += temp*temp;

  temp = work.KKT[266]-work.L[28]*work.d[135]*1;
  residual += temp*temp;

  temp = work.KKT[271]-work.L[33]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[276]-work.L[38]*work.d[141]*1;
  residual += temp*temp;

  temp = work.KKT[281]-work.L[43]*work.d[144]*1;
  residual += temp*temp;

  temp = work.KKT[286]-work.L[48]*work.d[147]*1;
  residual += temp*temp;

  temp = work.KKT[291]-work.L[53]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[296]-work.L[58]*work.d[153]*1;
  residual += temp*temp;

  temp = work.KKT[301]-work.L[63]*work.d[156]*1;
  residual += temp*temp;

  temp = work.KKT[306]-work.L[68]*work.d[159]*1;
  residual += temp*temp;

  temp = work.KKT[311]-work.L[73]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[316]-work.L[78]*work.d[165]*1;
  residual += temp*temp;

  temp = work.KKT[321]-work.L[83]*work.d[168]*1;
  residual += temp*temp;

  temp = work.KKT[326]-work.L[88]*work.d[171]*1;
  residual += temp*temp;

  temp = work.KKT[331]-work.L[93]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[336]-work.L[98]*work.d[177]*1;
  residual += temp*temp;

  temp = work.KKT[341]-work.L[103]*work.d[180]*1;
  residual += temp*temp;

  temp = work.KKT[346]-work.L[108]*work.d[183]*1;
  residual += temp*temp;

  temp = work.KKT[351]-work.L[113]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[356]-work.L[118]*work.d[189]*1;
  residual += temp*temp;

  temp = work.KKT[361]-work.L[123]*work.d[192]*1;
  residual += temp*temp;

  temp = work.KKT[366]-work.L[128]*work.d[195]*1;
  residual += temp*temp;

  temp = work.KKT[371]-work.L[133]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[376]-work.L[138]*work.d[201]*1;
  residual += temp*temp;

  temp = work.KKT[381]-work.L[143]*work.d[204]*1;
  residual += temp*temp;

  temp = work.KKT[386]-work.L[148]*work.d[207]*1;
  residual += temp*temp;

  temp = work.KKT[244]-1*work.d[122]*work.L[155];
  residual += temp*temp;

  temp = work.KKT[249]-1*work.d[125]*work.L[163];
  residual += temp*temp;

  temp = work.KKT[254]-1*work.d[128]*work.L[172];
  residual += temp*temp;

  temp = work.KKT[259]-1*work.d[131]*work.L[182];
  residual += temp*temp;

  temp = work.KKT[264]-1*work.d[134]*work.L[193];
  residual += temp*temp;

  temp = work.KKT[269]-1*work.d[137]*work.L[205];
  residual += temp*temp;

  temp = work.KKT[274]-1*work.d[140]*work.L[218];
  residual += temp*temp;

  temp = work.KKT[279]-1*work.d[143]*work.L[232];
  residual += temp*temp;

  temp = work.KKT[284]-1*work.d[146]*work.L[247];
  residual += temp*temp;

  temp = work.KKT[289]-1*work.d[149]*work.L[263];
  residual += temp*temp;

  temp = work.KKT[294]-1*work.d[152]*work.L[280];
  residual += temp*temp;

  temp = work.KKT[299]-1*work.d[155]*work.L[298];
  residual += temp*temp;

  temp = work.KKT[304]-1*work.d[158]*work.L[317];
  residual += temp*temp;

  temp = work.KKT[309]-1*work.d[161]*work.L[337];
  residual += temp*temp;

  temp = work.KKT[314]-1*work.d[164]*work.L[358];
  residual += temp*temp;

  temp = work.KKT[319]-1*work.d[167]*work.L[380];
  residual += temp*temp;

  temp = work.KKT[324]-1*work.d[170]*work.L[403];
  residual += temp*temp;

  temp = work.KKT[329]-1*work.d[173]*work.L[427];
  residual += temp*temp;

  temp = work.KKT[334]-1*work.d[176]*work.L[452];
  residual += temp*temp;

  temp = work.KKT[339]-1*work.d[179]*work.L[478];
  residual += temp*temp;

  temp = work.KKT[344]-1*work.d[182]*work.L[505];
  residual += temp*temp;

  temp = work.KKT[349]-1*work.d[185]*work.L[533];
  residual += temp*temp;

  temp = work.KKT[354]-1*work.d[188]*work.L[562];
  residual += temp*temp;

  temp = work.KKT[359]-1*work.d[191]*work.L[592];
  residual += temp*temp;

  temp = work.KKT[364]-1*work.d[194]*work.L[623];
  residual += temp*temp;

  temp = work.KKT[369]-1*work.d[197]*work.L[655];
  residual += temp*temp;

  temp = work.KKT[374]-1*work.d[200]*work.L[688];
  residual += temp*temp;

  temp = work.KKT[379]-1*work.d[203]*work.L[722];
  residual += temp*temp;

  temp = work.KKT[384]-1*work.d[206]*work.L[757];
  residual += temp*temp;

  temp = work.KKT[389]-1*work.d[209]*work.L[788];
  residual += temp*temp;

  temp = work.KKT[240]-work.L[1]*work.d[120]*1;
  residual += temp*temp;

  temp = work.KKT[245]-work.L[6]*work.d[123]*1;
  residual += temp*temp;

  temp = work.KKT[250]-work.L[11]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[255]-work.L[16]*work.d[129]*1;
  residual += temp*temp;

  temp = work.KKT[260]-work.L[21]*work.d[132]*1;
  residual += temp*temp;

  temp = work.KKT[265]-work.L[26]*work.d[135]*1;
  residual += temp*temp;

  temp = work.KKT[270]-work.L[31]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[275]-work.L[36]*work.d[141]*1;
  residual += temp*temp;

  temp = work.KKT[280]-work.L[41]*work.d[144]*1;
  residual += temp*temp;

  temp = work.KKT[285]-work.L[46]*work.d[147]*1;
  residual += temp*temp;

  temp = work.KKT[290]-work.L[51]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[295]-work.L[56]*work.d[153]*1;
  residual += temp*temp;

  temp = work.KKT[300]-work.L[61]*work.d[156]*1;
  residual += temp*temp;

  temp = work.KKT[305]-work.L[66]*work.d[159]*1;
  residual += temp*temp;

  temp = work.KKT[310]-work.L[71]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[315]-work.L[76]*work.d[165]*1;
  residual += temp*temp;

  temp = work.KKT[320]-work.L[81]*work.d[168]*1;
  residual += temp*temp;

  temp = work.KKT[325]-work.L[86]*work.d[171]*1;
  residual += temp*temp;

  temp = work.KKT[330]-work.L[91]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[335]-work.L[96]*work.d[177]*1;
  residual += temp*temp;

  temp = work.KKT[340]-work.L[101]*work.d[180]*1;
  residual += temp*temp;

  temp = work.KKT[345]-work.L[106]*work.d[183]*1;
  residual += temp*temp;

  temp = work.KKT[350]-work.L[111]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[355]-work.L[116]*work.d[189]*1;
  residual += temp*temp;

  temp = work.KKT[360]-work.L[121]*work.d[192]*1;
  residual += temp*temp;

  temp = work.KKT[365]-work.L[126]*work.d[195]*1;
  residual += temp*temp;

  temp = work.KKT[370]-work.L[131]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[375]-work.L[136]*work.d[201]*1;
  residual += temp*temp;

  temp = work.KKT[380]-work.L[141]*work.d[204]*1;
  residual += temp*temp;

  temp = work.KKT[385]-work.L[146]*work.d[207]*1;
  residual += temp*temp;

  temp = work.KKT[390]-work.L[151]*work.d[210]*1;
  residual += temp*temp;

  temp = work.KKT[426]-work.L[159]*work.d[214]*1;
  residual += temp*temp;

  temp = work.KKT[461]-work.L[168]*work.d[218]*1;
  residual += temp*temp;

  temp = work.KKT[495]-work.L[178]*work.d[222]*1;
  residual += temp*temp;

  temp = work.KKT[528]-work.L[189]*work.d[226]*1;
  residual += temp*temp;

  temp = work.KKT[560]-work.L[201]*work.d[230]*1;
  residual += temp*temp;

  temp = work.KKT[591]-work.L[214]*work.d[234]*1;
  residual += temp*temp;

  temp = work.KKT[621]-work.L[228]*work.d[238]*1;
  residual += temp*temp;

  temp = work.KKT[650]-work.L[243]*work.d[242]*1;
  residual += temp*temp;

  temp = work.KKT[678]-work.L[259]*work.d[246]*1;
  residual += temp*temp;

  temp = work.KKT[705]-work.L[276]*work.d[250]*1;
  residual += temp*temp;

  temp = work.KKT[731]-work.L[294]*work.d[254]*1;
  residual += temp*temp;

  temp = work.KKT[756]-work.L[313]*work.d[258]*1;
  residual += temp*temp;

  temp = work.KKT[780]-work.L[333]*work.d[262]*1;
  residual += temp*temp;

  temp = work.KKT[803]-work.L[354]*work.d[266]*1;
  residual += temp*temp;

  temp = work.KKT[825]-work.L[376]*work.d[270]*1;
  residual += temp*temp;

  temp = work.KKT[846]-work.L[399]*work.d[274]*1;
  residual += temp*temp;

  temp = work.KKT[866]-work.L[423]*work.d[278]*1;
  residual += temp*temp;

  temp = work.KKT[885]-work.L[448]*work.d[282]*1;
  residual += temp*temp;

  temp = work.KKT[903]-work.L[474]*work.d[286]*1;
  residual += temp*temp;

  temp = work.KKT[920]-work.L[501]*work.d[290]*1;
  residual += temp*temp;

  temp = work.KKT[936]-work.L[529]*work.d[294]*1;
  residual += temp*temp;

  temp = work.KKT[951]-work.L[558]*work.d[298]*1;
  residual += temp*temp;

  temp = work.KKT[965]-work.L[588]*work.d[302]*1;
  residual += temp*temp;

  temp = work.KKT[978]-work.L[619]*work.d[306]*1;
  residual += temp*temp;

  temp = work.KKT[990]-work.L[651]*work.d[310]*1;
  residual += temp*temp;

  temp = work.KKT[1001]-work.L[684]*work.d[314]*1;
  residual += temp*temp;

  temp = work.KKT[1011]-work.L[718]*work.d[318]*1;
  residual += temp*temp;

  temp = work.KKT[1020]-work.L[753]*work.d[322]*1;
  residual += temp*temp;

  temp = work.KKT[1028]-work.L[819]*work.d[326]*1;
  residual += temp*temp;

  temp = work.KKT[393]-1*work.d[211]*work.L[156];
  residual += temp*temp;

  temp = work.KKT[429]-1*work.d[215]*work.L[165];
  residual += temp*temp;

  temp = work.KKT[464]-1*work.d[219]*work.L[175];
  residual += temp*temp;

  temp = work.KKT[498]-1*work.d[223]*work.L[186];
  residual += temp*temp;

  temp = work.KKT[531]-1*work.d[227]*work.L[198];
  residual += temp*temp;

  temp = work.KKT[563]-1*work.d[231]*work.L[211];
  residual += temp*temp;

  temp = work.KKT[594]-1*work.d[235]*work.L[225];
  residual += temp*temp;

  temp = work.KKT[624]-1*work.d[239]*work.L[240];
  residual += temp*temp;

  temp = work.KKT[653]-1*work.d[243]*work.L[256];
  residual += temp*temp;

  temp = work.KKT[681]-1*work.d[247]*work.L[273];
  residual += temp*temp;

  temp = work.KKT[708]-1*work.d[251]*work.L[291];
  residual += temp*temp;

  temp = work.KKT[734]-1*work.d[255]*work.L[310];
  residual += temp*temp;

  temp = work.KKT[759]-1*work.d[259]*work.L[330];
  residual += temp*temp;

  temp = work.KKT[783]-1*work.d[263]*work.L[351];
  residual += temp*temp;

  temp = work.KKT[806]-1*work.d[267]*work.L[373];
  residual += temp*temp;

  temp = work.KKT[828]-1*work.d[271]*work.L[396];
  residual += temp*temp;

  temp = work.KKT[849]-1*work.d[275]*work.L[420];
  residual += temp*temp;

  temp = work.KKT[869]-1*work.d[279]*work.L[445];
  residual += temp*temp;

  temp = work.KKT[888]-1*work.d[283]*work.L[471];
  residual += temp*temp;

  temp = work.KKT[906]-1*work.d[287]*work.L[498];
  residual += temp*temp;

  temp = work.KKT[923]-1*work.d[291]*work.L[526];
  residual += temp*temp;

  temp = work.KKT[939]-1*work.d[295]*work.L[555];
  residual += temp*temp;

  temp = work.KKT[954]-1*work.d[299]*work.L[585];
  residual += temp*temp;

  temp = work.KKT[968]-1*work.d[303]*work.L[616];
  residual += temp*temp;

  temp = work.KKT[981]-1*work.d[307]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[993]-1*work.d[311]*work.L[681];
  residual += temp*temp;

  temp = work.KKT[1004]-1*work.d[315]*work.L[715];
  residual += temp*temp;

  temp = work.KKT[1014]-1*work.d[319]*work.L[750];
  residual += temp*temp;

  temp = work.KKT[1023]-1*work.d[323]*work.L[786];
  residual += temp*temp;

  temp = work.KKT[1031]-work.L[820]*work.d[327]*1;
  residual += temp*temp;

  temp = work.KKT[391]-work.L[153]*work.d[210]*1;
  residual += temp*temp;

  temp = work.KKT[427]-work.L[161]*work.d[214]*1;
  residual += temp*temp;

  temp = work.KKT[462]-work.L[170]*work.d[218]*1;
  residual += temp*temp;

  temp = work.KKT[496]-work.L[180]*work.d[222]*1;
  residual += temp*temp;

  temp = work.KKT[529]-work.L[191]*work.d[226]*1;
  residual += temp*temp;

  temp = work.KKT[561]-work.L[203]*work.d[230]*1;
  residual += temp*temp;

  temp = work.KKT[592]-work.L[216]*work.d[234]*1;
  residual += temp*temp;

  temp = work.KKT[622]-work.L[230]*work.d[238]*1;
  residual += temp*temp;

  temp = work.KKT[651]-work.L[245]*work.d[242]*1;
  residual += temp*temp;

  temp = work.KKT[679]-work.L[261]*work.d[246]*1;
  residual += temp*temp;

  temp = work.KKT[706]-work.L[278]*work.d[250]*1;
  residual += temp*temp;

  temp = work.KKT[732]-work.L[296]*work.d[254]*1;
  residual += temp*temp;

  temp = work.KKT[757]-work.L[315]*work.d[258]*1;
  residual += temp*temp;

  temp = work.KKT[781]-work.L[335]*work.d[262]*1;
  residual += temp*temp;

  temp = work.KKT[804]-work.L[356]*work.d[266]*1;
  residual += temp*temp;

  temp = work.KKT[826]-work.L[378]*work.d[270]*1;
  residual += temp*temp;

  temp = work.KKT[847]-work.L[401]*work.d[274]*1;
  residual += temp*temp;

  temp = work.KKT[867]-work.L[425]*work.d[278]*1;
  residual += temp*temp;

  temp = work.KKT[886]-work.L[450]*work.d[282]*1;
  residual += temp*temp;

  temp = work.KKT[904]-work.L[476]*work.d[286]*1;
  residual += temp*temp;

  temp = work.KKT[921]-work.L[503]*work.d[290]*1;
  residual += temp*temp;

  temp = work.KKT[937]-work.L[531]*work.d[294]*1;
  residual += temp*temp;

  temp = work.KKT[952]-work.L[560]*work.d[298]*1;
  residual += temp*temp;

  temp = work.KKT[966]-work.L[590]*work.d[302]*1;
  residual += temp*temp;

  temp = work.KKT[979]-work.L[621]*work.d[306]*1;
  residual += temp*temp;

  temp = work.KKT[991]-work.L[653]*work.d[310]*1;
  residual += temp*temp;

  temp = work.KKT[1002]-work.L[686]*work.d[314]*1;
  residual += temp*temp;

  temp = work.KKT[1012]-work.L[720]*work.d[318]*1;
  residual += temp*temp;

  temp = work.KKT[1021]-work.L[755]*work.d[322]*1;
  residual += temp*temp;

  temp = work.KKT[1029]-work.L[822]*work.d[326]*1;
  residual += temp*temp;

  temp = work.KKT[395]-1*work.d[212]*work.L[157]-work.L[154]*work.d[211]*work.L[156];
  residual += temp*temp;

  temp = work.KKT[431]-1*work.d[216]*work.L[166]-work.L[162]*work.d[215]*work.L[165];
  residual += temp*temp;

  temp = work.KKT[466]-1*work.d[220]*work.L[176]-work.L[171]*work.d[219]*work.L[175];
  residual += temp*temp;

  temp = work.KKT[500]-1*work.d[224]*work.L[187]-work.L[181]*work.d[223]*work.L[186];
  residual += temp*temp;

  temp = work.KKT[533]-1*work.d[228]*work.L[199]-work.L[192]*work.d[227]*work.L[198];
  residual += temp*temp;

  temp = work.KKT[565]-1*work.d[232]*work.L[212]-work.L[204]*work.d[231]*work.L[211];
  residual += temp*temp;

  temp = work.KKT[596]-1*work.d[236]*work.L[226]-work.L[217]*work.d[235]*work.L[225];
  residual += temp*temp;

  temp = work.KKT[626]-1*work.d[240]*work.L[241]-work.L[231]*work.d[239]*work.L[240];
  residual += temp*temp;

  temp = work.KKT[655]-1*work.d[244]*work.L[257]-work.L[246]*work.d[243]*work.L[256];
  residual += temp*temp;

  temp = work.KKT[683]-1*work.d[248]*work.L[274]-work.L[262]*work.d[247]*work.L[273];
  residual += temp*temp;

  temp = work.KKT[710]-1*work.d[252]*work.L[292]-work.L[279]*work.d[251]*work.L[291];
  residual += temp*temp;

  temp = work.KKT[736]-1*work.d[256]*work.L[311]-work.L[297]*work.d[255]*work.L[310];
  residual += temp*temp;

  temp = work.KKT[761]-1*work.d[260]*work.L[331]-work.L[316]*work.d[259]*work.L[330];
  residual += temp*temp;

  temp = work.KKT[785]-1*work.d[264]*work.L[352]-work.L[336]*work.d[263]*work.L[351];
  residual += temp*temp;

  temp = work.KKT[808]-1*work.d[268]*work.L[374]-work.L[357]*work.d[267]*work.L[373];
  residual += temp*temp;

  temp = work.KKT[830]-1*work.d[272]*work.L[397]-work.L[379]*work.d[271]*work.L[396];
  residual += temp*temp;

  temp = work.KKT[851]-1*work.d[276]*work.L[421]-work.L[402]*work.d[275]*work.L[420];
  residual += temp*temp;

  temp = work.KKT[871]-1*work.d[280]*work.L[446]-work.L[426]*work.d[279]*work.L[445];
  residual += temp*temp;

  temp = work.KKT[890]-1*work.d[284]*work.L[472]-work.L[451]*work.d[283]*work.L[471];
  residual += temp*temp;

  temp = work.KKT[908]-1*work.d[288]*work.L[499]-work.L[477]*work.d[287]*work.L[498];
  residual += temp*temp;

  temp = work.KKT[925]-1*work.d[292]*work.L[527]-work.L[504]*work.d[291]*work.L[526];
  residual += temp*temp;

  temp = work.KKT[941]-1*work.d[296]*work.L[556]-work.L[532]*work.d[295]*work.L[555];
  residual += temp*temp;

  temp = work.KKT[956]-1*work.d[300]*work.L[586]-work.L[561]*work.d[299]*work.L[585];
  residual += temp*temp;

  temp = work.KKT[970]-1*work.d[304]*work.L[617]-work.L[591]*work.d[303]*work.L[616];
  residual += temp*temp;

  temp = work.KKT[983]-1*work.d[308]*work.L[649]-work.L[622]*work.d[307]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[995]-1*work.d[312]*work.L[682]-work.L[654]*work.d[311]*work.L[681];
  residual += temp*temp;

  temp = work.KKT[1006]-1*work.d[316]*work.L[716]-work.L[687]*work.d[315]*work.L[715];
  residual += temp*temp;

  temp = work.KKT[1016]-1*work.d[320]*work.L[751]-work.L[721]*work.d[319]*work.L[750];
  residual += temp*temp;

  temp = work.KKT[1025]-1*work.d[324]*work.L[787]-work.L[756]*work.d[323]*work.L[786];
  residual += temp*temp;

  temp = work.KKT[1032]-work.L[823]*work.d[327]*1;
  residual += temp*temp;

  return residual;
}

void matrix_multiply(double *result, double *source) {
  /* Finds result = A*source. */

  result[0] = work.KKT[241]*source[210]+work.KKT[240]*source[240];
  result[1] = work.KKT[246]*source[211]+work.KKT[245]*source[241];
  result[2] = work.KKT[251]*source[212]+work.KKT[250]*source[242];
  result[3] = work.KKT[256]*source[213]+work.KKT[255]*source[243];
  result[4] = work.KKT[261]*source[214]+work.KKT[260]*source[244];
  result[5] = work.KKT[266]*source[215]+work.KKT[265]*source[245];
  result[6] = work.KKT[271]*source[216]+work.KKT[270]*source[246];
  result[7] = work.KKT[276]*source[217]+work.KKT[275]*source[247];
  result[8] = work.KKT[281]*source[218]+work.KKT[280]*source[248];
  result[9] = work.KKT[286]*source[219]+work.KKT[285]*source[249];
  result[10] = work.KKT[291]*source[220]+work.KKT[290]*source[250];
  result[11] = work.KKT[296]*source[221]+work.KKT[295]*source[251];
  result[12] = work.KKT[301]*source[222]+work.KKT[300]*source[252];
  result[13] = work.KKT[306]*source[223]+work.KKT[305]*source[253];
  result[14] = work.KKT[311]*source[224]+work.KKT[310]*source[254];
  result[15] = work.KKT[316]*source[225]+work.KKT[315]*source[255];
  result[16] = work.KKT[321]*source[226]+work.KKT[320]*source[256];
  result[17] = work.KKT[326]*source[227]+work.KKT[325]*source[257];
  result[18] = work.KKT[331]*source[228]+work.KKT[330]*source[258];
  result[19] = work.KKT[336]*source[229]+work.KKT[335]*source[259];
  result[20] = work.KKT[341]*source[230]+work.KKT[340]*source[260];
  result[21] = work.KKT[346]*source[231]+work.KKT[345]*source[261];
  result[22] = work.KKT[351]*source[232]+work.KKT[350]*source[262];
  result[23] = work.KKT[356]*source[233]+work.KKT[355]*source[263];
  result[24] = work.KKT[361]*source[234]+work.KKT[360]*source[264];
  result[25] = work.KKT[366]*source[235]+work.KKT[365]*source[265];
  result[26] = work.KKT[371]*source[236]+work.KKT[370]*source[266];
  result[27] = work.KKT[376]*source[237]+work.KKT[375]*source[267];
  result[28] = work.KKT[381]*source[238]+work.KKT[380]*source[268];
  result[29] = work.KKT[386]*source[239]+work.KKT[385]*source[269];
  result[30] = work.KKT[390]*source[270]+work.KKT[391]*source[300];
  result[31] = work.KKT[426]*source[271]+work.KKT[427]*source[301];
  result[32] = work.KKT[461]*source[272]+work.KKT[462]*source[302];
  result[33] = work.KKT[495]*source[273]+work.KKT[496]*source[303];
  result[34] = work.KKT[528]*source[274]+work.KKT[529]*source[304];
  result[35] = work.KKT[560]*source[275]+work.KKT[561]*source[305];
  result[36] = work.KKT[591]*source[276]+work.KKT[592]*source[306];
  result[37] = work.KKT[621]*source[277]+work.KKT[622]*source[307];
  result[38] = work.KKT[650]*source[278]+work.KKT[651]*source[308];
  result[39] = work.KKT[678]*source[279]+work.KKT[679]*source[309];
  result[40] = work.KKT[705]*source[280]+work.KKT[706]*source[310];
  result[41] = work.KKT[731]*source[281]+work.KKT[732]*source[311];
  result[42] = work.KKT[756]*source[282]+work.KKT[757]*source[312];
  result[43] = work.KKT[780]*source[283]+work.KKT[781]*source[313];
  result[44] = work.KKT[803]*source[284]+work.KKT[804]*source[314];
  result[45] = work.KKT[825]*source[285]+work.KKT[826]*source[315];
  result[46] = work.KKT[846]*source[286]+work.KKT[847]*source[316];
  result[47] = work.KKT[866]*source[287]+work.KKT[867]*source[317];
  result[48] = work.KKT[885]*source[288]+work.KKT[886]*source[318];
  result[49] = work.KKT[903]*source[289]+work.KKT[904]*source[319];
  result[50] = work.KKT[920]*source[290]+work.KKT[921]*source[320];
  result[51] = work.KKT[936]*source[291]+work.KKT[937]*source[321];
  result[52] = work.KKT[951]*source[292]+work.KKT[952]*source[322];
  result[53] = work.KKT[965]*source[293]+work.KKT[966]*source[323];
  result[54] = work.KKT[978]*source[294]+work.KKT[979]*source[324];
  result[55] = work.KKT[990]*source[295]+work.KKT[991]*source[325];
  result[56] = work.KKT[1001]*source[296]+work.KKT[1002]*source[326];
  result[57] = work.KKT[1011]*source[297]+work.KKT[1012]*source[327];
  result[58] = work.KKT[1020]*source[298]+work.KKT[1021]*source[328];
  result[59] = work.KKT[1028]*source[299]+work.KKT[1029]*source[329];
  result[60] = work.KKT[396]*source[60]+work.KKT[397]*source[61]+work.KKT[398]*source[62]+work.KKT[399]*source[63]+work.KKT[400]*source[64]+work.KKT[401]*source[65]+work.KKT[402]*source[66]+work.KKT[403]*source[67]+work.KKT[404]*source[68]+work.KKT[405]*source[69]+work.KKT[406]*source[70]+work.KKT[407]*source[71]+work.KKT[408]*source[72]+work.KKT[409]*source[73]+work.KKT[410]*source[74]+work.KKT[411]*source[75]+work.KKT[412]*source[76]+work.KKT[413]*source[77]+work.KKT[414]*source[78]+work.KKT[415]*source[79]+work.KKT[416]*source[80]+work.KKT[417]*source[81]+work.KKT[418]*source[82]+work.KKT[419]*source[83]+work.KKT[420]*source[84]+work.KKT[421]*source[85]+work.KKT[422]*source[86]+work.KKT[423]*source[87]+work.KKT[424]*source[88]+work.KKT[425]*source[89]+work.KKT[244]*source[210]+work.KKT[393]*source[270]+work.KKT[395]*source[300];
  result[61] = work.KKT[397]*source[60]+work.KKT[432]*source[61]+work.KKT[433]*source[62]+work.KKT[434]*source[63]+work.KKT[435]*source[64]+work.KKT[436]*source[65]+work.KKT[437]*source[66]+work.KKT[438]*source[67]+work.KKT[439]*source[68]+work.KKT[440]*source[69]+work.KKT[441]*source[70]+work.KKT[442]*source[71]+work.KKT[443]*source[72]+work.KKT[444]*source[73]+work.KKT[445]*source[74]+work.KKT[446]*source[75]+work.KKT[447]*source[76]+work.KKT[448]*source[77]+work.KKT[449]*source[78]+work.KKT[450]*source[79]+work.KKT[451]*source[80]+work.KKT[452]*source[81]+work.KKT[453]*source[82]+work.KKT[454]*source[83]+work.KKT[455]*source[84]+work.KKT[456]*source[85]+work.KKT[457]*source[86]+work.KKT[458]*source[87]+work.KKT[459]*source[88]+work.KKT[460]*source[89]+work.KKT[249]*source[211]+work.KKT[429]*source[271]+work.KKT[431]*source[301];
  result[62] = work.KKT[398]*source[60]+work.KKT[433]*source[61]+work.KKT[467]*source[62]+work.KKT[468]*source[63]+work.KKT[469]*source[64]+work.KKT[470]*source[65]+work.KKT[471]*source[66]+work.KKT[472]*source[67]+work.KKT[473]*source[68]+work.KKT[474]*source[69]+work.KKT[475]*source[70]+work.KKT[476]*source[71]+work.KKT[477]*source[72]+work.KKT[478]*source[73]+work.KKT[479]*source[74]+work.KKT[480]*source[75]+work.KKT[481]*source[76]+work.KKT[482]*source[77]+work.KKT[483]*source[78]+work.KKT[484]*source[79]+work.KKT[485]*source[80]+work.KKT[486]*source[81]+work.KKT[487]*source[82]+work.KKT[488]*source[83]+work.KKT[489]*source[84]+work.KKT[490]*source[85]+work.KKT[491]*source[86]+work.KKT[492]*source[87]+work.KKT[493]*source[88]+work.KKT[494]*source[89]+work.KKT[254]*source[212]+work.KKT[464]*source[272]+work.KKT[466]*source[302];
  result[63] = work.KKT[399]*source[60]+work.KKT[434]*source[61]+work.KKT[468]*source[62]+work.KKT[501]*source[63]+work.KKT[502]*source[64]+work.KKT[503]*source[65]+work.KKT[504]*source[66]+work.KKT[505]*source[67]+work.KKT[506]*source[68]+work.KKT[507]*source[69]+work.KKT[508]*source[70]+work.KKT[509]*source[71]+work.KKT[510]*source[72]+work.KKT[511]*source[73]+work.KKT[512]*source[74]+work.KKT[513]*source[75]+work.KKT[514]*source[76]+work.KKT[515]*source[77]+work.KKT[516]*source[78]+work.KKT[517]*source[79]+work.KKT[518]*source[80]+work.KKT[519]*source[81]+work.KKT[520]*source[82]+work.KKT[521]*source[83]+work.KKT[522]*source[84]+work.KKT[523]*source[85]+work.KKT[524]*source[86]+work.KKT[525]*source[87]+work.KKT[526]*source[88]+work.KKT[527]*source[89]+work.KKT[259]*source[213]+work.KKT[498]*source[273]+work.KKT[500]*source[303];
  result[64] = work.KKT[400]*source[60]+work.KKT[435]*source[61]+work.KKT[469]*source[62]+work.KKT[502]*source[63]+work.KKT[534]*source[64]+work.KKT[535]*source[65]+work.KKT[536]*source[66]+work.KKT[537]*source[67]+work.KKT[538]*source[68]+work.KKT[539]*source[69]+work.KKT[540]*source[70]+work.KKT[541]*source[71]+work.KKT[542]*source[72]+work.KKT[543]*source[73]+work.KKT[544]*source[74]+work.KKT[545]*source[75]+work.KKT[546]*source[76]+work.KKT[547]*source[77]+work.KKT[548]*source[78]+work.KKT[549]*source[79]+work.KKT[550]*source[80]+work.KKT[551]*source[81]+work.KKT[552]*source[82]+work.KKT[553]*source[83]+work.KKT[554]*source[84]+work.KKT[555]*source[85]+work.KKT[556]*source[86]+work.KKT[557]*source[87]+work.KKT[558]*source[88]+work.KKT[559]*source[89]+work.KKT[264]*source[214]+work.KKT[531]*source[274]+work.KKT[533]*source[304];
  result[65] = work.KKT[401]*source[60]+work.KKT[436]*source[61]+work.KKT[470]*source[62]+work.KKT[503]*source[63]+work.KKT[535]*source[64]+work.KKT[566]*source[65]+work.KKT[567]*source[66]+work.KKT[568]*source[67]+work.KKT[569]*source[68]+work.KKT[570]*source[69]+work.KKT[571]*source[70]+work.KKT[572]*source[71]+work.KKT[573]*source[72]+work.KKT[574]*source[73]+work.KKT[575]*source[74]+work.KKT[576]*source[75]+work.KKT[577]*source[76]+work.KKT[578]*source[77]+work.KKT[579]*source[78]+work.KKT[580]*source[79]+work.KKT[581]*source[80]+work.KKT[582]*source[81]+work.KKT[583]*source[82]+work.KKT[584]*source[83]+work.KKT[585]*source[84]+work.KKT[586]*source[85]+work.KKT[587]*source[86]+work.KKT[588]*source[87]+work.KKT[589]*source[88]+work.KKT[590]*source[89]+work.KKT[269]*source[215]+work.KKT[563]*source[275]+work.KKT[565]*source[305];
  result[66] = work.KKT[402]*source[60]+work.KKT[437]*source[61]+work.KKT[471]*source[62]+work.KKT[504]*source[63]+work.KKT[536]*source[64]+work.KKT[567]*source[65]+work.KKT[597]*source[66]+work.KKT[598]*source[67]+work.KKT[599]*source[68]+work.KKT[600]*source[69]+work.KKT[601]*source[70]+work.KKT[602]*source[71]+work.KKT[603]*source[72]+work.KKT[604]*source[73]+work.KKT[605]*source[74]+work.KKT[606]*source[75]+work.KKT[607]*source[76]+work.KKT[608]*source[77]+work.KKT[609]*source[78]+work.KKT[610]*source[79]+work.KKT[611]*source[80]+work.KKT[612]*source[81]+work.KKT[613]*source[82]+work.KKT[614]*source[83]+work.KKT[615]*source[84]+work.KKT[616]*source[85]+work.KKT[617]*source[86]+work.KKT[618]*source[87]+work.KKT[619]*source[88]+work.KKT[620]*source[89]+work.KKT[274]*source[216]+work.KKT[594]*source[276]+work.KKT[596]*source[306];
  result[67] = work.KKT[403]*source[60]+work.KKT[438]*source[61]+work.KKT[472]*source[62]+work.KKT[505]*source[63]+work.KKT[537]*source[64]+work.KKT[568]*source[65]+work.KKT[598]*source[66]+work.KKT[627]*source[67]+work.KKT[628]*source[68]+work.KKT[629]*source[69]+work.KKT[630]*source[70]+work.KKT[631]*source[71]+work.KKT[632]*source[72]+work.KKT[633]*source[73]+work.KKT[634]*source[74]+work.KKT[635]*source[75]+work.KKT[636]*source[76]+work.KKT[637]*source[77]+work.KKT[638]*source[78]+work.KKT[639]*source[79]+work.KKT[640]*source[80]+work.KKT[641]*source[81]+work.KKT[642]*source[82]+work.KKT[643]*source[83]+work.KKT[644]*source[84]+work.KKT[645]*source[85]+work.KKT[646]*source[86]+work.KKT[647]*source[87]+work.KKT[648]*source[88]+work.KKT[649]*source[89]+work.KKT[279]*source[217]+work.KKT[624]*source[277]+work.KKT[626]*source[307];
  result[68] = work.KKT[404]*source[60]+work.KKT[439]*source[61]+work.KKT[473]*source[62]+work.KKT[506]*source[63]+work.KKT[538]*source[64]+work.KKT[569]*source[65]+work.KKT[599]*source[66]+work.KKT[628]*source[67]+work.KKT[656]*source[68]+work.KKT[657]*source[69]+work.KKT[658]*source[70]+work.KKT[659]*source[71]+work.KKT[660]*source[72]+work.KKT[661]*source[73]+work.KKT[662]*source[74]+work.KKT[663]*source[75]+work.KKT[664]*source[76]+work.KKT[665]*source[77]+work.KKT[666]*source[78]+work.KKT[667]*source[79]+work.KKT[668]*source[80]+work.KKT[669]*source[81]+work.KKT[670]*source[82]+work.KKT[671]*source[83]+work.KKT[672]*source[84]+work.KKT[673]*source[85]+work.KKT[674]*source[86]+work.KKT[675]*source[87]+work.KKT[676]*source[88]+work.KKT[677]*source[89]+work.KKT[284]*source[218]+work.KKT[653]*source[278]+work.KKT[655]*source[308];
  result[69] = work.KKT[405]*source[60]+work.KKT[440]*source[61]+work.KKT[474]*source[62]+work.KKT[507]*source[63]+work.KKT[539]*source[64]+work.KKT[570]*source[65]+work.KKT[600]*source[66]+work.KKT[629]*source[67]+work.KKT[657]*source[68]+work.KKT[684]*source[69]+work.KKT[685]*source[70]+work.KKT[686]*source[71]+work.KKT[687]*source[72]+work.KKT[688]*source[73]+work.KKT[689]*source[74]+work.KKT[690]*source[75]+work.KKT[691]*source[76]+work.KKT[692]*source[77]+work.KKT[693]*source[78]+work.KKT[694]*source[79]+work.KKT[695]*source[80]+work.KKT[696]*source[81]+work.KKT[697]*source[82]+work.KKT[698]*source[83]+work.KKT[699]*source[84]+work.KKT[700]*source[85]+work.KKT[701]*source[86]+work.KKT[702]*source[87]+work.KKT[703]*source[88]+work.KKT[704]*source[89]+work.KKT[289]*source[219]+work.KKT[681]*source[279]+work.KKT[683]*source[309];
  result[70] = work.KKT[406]*source[60]+work.KKT[441]*source[61]+work.KKT[475]*source[62]+work.KKT[508]*source[63]+work.KKT[540]*source[64]+work.KKT[571]*source[65]+work.KKT[601]*source[66]+work.KKT[630]*source[67]+work.KKT[658]*source[68]+work.KKT[685]*source[69]+work.KKT[711]*source[70]+work.KKT[712]*source[71]+work.KKT[713]*source[72]+work.KKT[714]*source[73]+work.KKT[715]*source[74]+work.KKT[716]*source[75]+work.KKT[717]*source[76]+work.KKT[718]*source[77]+work.KKT[719]*source[78]+work.KKT[720]*source[79]+work.KKT[721]*source[80]+work.KKT[722]*source[81]+work.KKT[723]*source[82]+work.KKT[724]*source[83]+work.KKT[725]*source[84]+work.KKT[726]*source[85]+work.KKT[727]*source[86]+work.KKT[728]*source[87]+work.KKT[729]*source[88]+work.KKT[730]*source[89]+work.KKT[294]*source[220]+work.KKT[708]*source[280]+work.KKT[710]*source[310];
  result[71] = work.KKT[407]*source[60]+work.KKT[442]*source[61]+work.KKT[476]*source[62]+work.KKT[509]*source[63]+work.KKT[541]*source[64]+work.KKT[572]*source[65]+work.KKT[602]*source[66]+work.KKT[631]*source[67]+work.KKT[659]*source[68]+work.KKT[686]*source[69]+work.KKT[712]*source[70]+work.KKT[737]*source[71]+work.KKT[738]*source[72]+work.KKT[739]*source[73]+work.KKT[740]*source[74]+work.KKT[741]*source[75]+work.KKT[742]*source[76]+work.KKT[743]*source[77]+work.KKT[744]*source[78]+work.KKT[745]*source[79]+work.KKT[746]*source[80]+work.KKT[747]*source[81]+work.KKT[748]*source[82]+work.KKT[749]*source[83]+work.KKT[750]*source[84]+work.KKT[751]*source[85]+work.KKT[752]*source[86]+work.KKT[753]*source[87]+work.KKT[754]*source[88]+work.KKT[755]*source[89]+work.KKT[299]*source[221]+work.KKT[734]*source[281]+work.KKT[736]*source[311];
  result[72] = work.KKT[408]*source[60]+work.KKT[443]*source[61]+work.KKT[477]*source[62]+work.KKT[510]*source[63]+work.KKT[542]*source[64]+work.KKT[573]*source[65]+work.KKT[603]*source[66]+work.KKT[632]*source[67]+work.KKT[660]*source[68]+work.KKT[687]*source[69]+work.KKT[713]*source[70]+work.KKT[738]*source[71]+work.KKT[762]*source[72]+work.KKT[763]*source[73]+work.KKT[764]*source[74]+work.KKT[765]*source[75]+work.KKT[766]*source[76]+work.KKT[767]*source[77]+work.KKT[768]*source[78]+work.KKT[769]*source[79]+work.KKT[770]*source[80]+work.KKT[771]*source[81]+work.KKT[772]*source[82]+work.KKT[773]*source[83]+work.KKT[774]*source[84]+work.KKT[775]*source[85]+work.KKT[776]*source[86]+work.KKT[777]*source[87]+work.KKT[778]*source[88]+work.KKT[779]*source[89]+work.KKT[304]*source[222]+work.KKT[759]*source[282]+work.KKT[761]*source[312];
  result[73] = work.KKT[409]*source[60]+work.KKT[444]*source[61]+work.KKT[478]*source[62]+work.KKT[511]*source[63]+work.KKT[543]*source[64]+work.KKT[574]*source[65]+work.KKT[604]*source[66]+work.KKT[633]*source[67]+work.KKT[661]*source[68]+work.KKT[688]*source[69]+work.KKT[714]*source[70]+work.KKT[739]*source[71]+work.KKT[763]*source[72]+work.KKT[786]*source[73]+work.KKT[787]*source[74]+work.KKT[788]*source[75]+work.KKT[789]*source[76]+work.KKT[790]*source[77]+work.KKT[791]*source[78]+work.KKT[792]*source[79]+work.KKT[793]*source[80]+work.KKT[794]*source[81]+work.KKT[795]*source[82]+work.KKT[796]*source[83]+work.KKT[797]*source[84]+work.KKT[798]*source[85]+work.KKT[799]*source[86]+work.KKT[800]*source[87]+work.KKT[801]*source[88]+work.KKT[802]*source[89]+work.KKT[309]*source[223]+work.KKT[783]*source[283]+work.KKT[785]*source[313];
  result[74] = work.KKT[410]*source[60]+work.KKT[445]*source[61]+work.KKT[479]*source[62]+work.KKT[512]*source[63]+work.KKT[544]*source[64]+work.KKT[575]*source[65]+work.KKT[605]*source[66]+work.KKT[634]*source[67]+work.KKT[662]*source[68]+work.KKT[689]*source[69]+work.KKT[715]*source[70]+work.KKT[740]*source[71]+work.KKT[764]*source[72]+work.KKT[787]*source[73]+work.KKT[809]*source[74]+work.KKT[810]*source[75]+work.KKT[811]*source[76]+work.KKT[812]*source[77]+work.KKT[813]*source[78]+work.KKT[814]*source[79]+work.KKT[815]*source[80]+work.KKT[816]*source[81]+work.KKT[817]*source[82]+work.KKT[818]*source[83]+work.KKT[819]*source[84]+work.KKT[820]*source[85]+work.KKT[821]*source[86]+work.KKT[822]*source[87]+work.KKT[823]*source[88]+work.KKT[824]*source[89]+work.KKT[314]*source[224]+work.KKT[806]*source[284]+work.KKT[808]*source[314];
  result[75] = work.KKT[411]*source[60]+work.KKT[446]*source[61]+work.KKT[480]*source[62]+work.KKT[513]*source[63]+work.KKT[545]*source[64]+work.KKT[576]*source[65]+work.KKT[606]*source[66]+work.KKT[635]*source[67]+work.KKT[663]*source[68]+work.KKT[690]*source[69]+work.KKT[716]*source[70]+work.KKT[741]*source[71]+work.KKT[765]*source[72]+work.KKT[788]*source[73]+work.KKT[810]*source[74]+work.KKT[831]*source[75]+work.KKT[832]*source[76]+work.KKT[833]*source[77]+work.KKT[834]*source[78]+work.KKT[835]*source[79]+work.KKT[836]*source[80]+work.KKT[837]*source[81]+work.KKT[838]*source[82]+work.KKT[839]*source[83]+work.KKT[840]*source[84]+work.KKT[841]*source[85]+work.KKT[842]*source[86]+work.KKT[843]*source[87]+work.KKT[844]*source[88]+work.KKT[845]*source[89]+work.KKT[319]*source[225]+work.KKT[828]*source[285]+work.KKT[830]*source[315];
  result[76] = work.KKT[412]*source[60]+work.KKT[447]*source[61]+work.KKT[481]*source[62]+work.KKT[514]*source[63]+work.KKT[546]*source[64]+work.KKT[577]*source[65]+work.KKT[607]*source[66]+work.KKT[636]*source[67]+work.KKT[664]*source[68]+work.KKT[691]*source[69]+work.KKT[717]*source[70]+work.KKT[742]*source[71]+work.KKT[766]*source[72]+work.KKT[789]*source[73]+work.KKT[811]*source[74]+work.KKT[832]*source[75]+work.KKT[852]*source[76]+work.KKT[853]*source[77]+work.KKT[854]*source[78]+work.KKT[855]*source[79]+work.KKT[856]*source[80]+work.KKT[857]*source[81]+work.KKT[858]*source[82]+work.KKT[859]*source[83]+work.KKT[860]*source[84]+work.KKT[861]*source[85]+work.KKT[862]*source[86]+work.KKT[863]*source[87]+work.KKT[864]*source[88]+work.KKT[865]*source[89]+work.KKT[324]*source[226]+work.KKT[849]*source[286]+work.KKT[851]*source[316];
  result[77] = work.KKT[413]*source[60]+work.KKT[448]*source[61]+work.KKT[482]*source[62]+work.KKT[515]*source[63]+work.KKT[547]*source[64]+work.KKT[578]*source[65]+work.KKT[608]*source[66]+work.KKT[637]*source[67]+work.KKT[665]*source[68]+work.KKT[692]*source[69]+work.KKT[718]*source[70]+work.KKT[743]*source[71]+work.KKT[767]*source[72]+work.KKT[790]*source[73]+work.KKT[812]*source[74]+work.KKT[833]*source[75]+work.KKT[853]*source[76]+work.KKT[872]*source[77]+work.KKT[873]*source[78]+work.KKT[874]*source[79]+work.KKT[875]*source[80]+work.KKT[876]*source[81]+work.KKT[877]*source[82]+work.KKT[878]*source[83]+work.KKT[879]*source[84]+work.KKT[880]*source[85]+work.KKT[881]*source[86]+work.KKT[882]*source[87]+work.KKT[883]*source[88]+work.KKT[884]*source[89]+work.KKT[329]*source[227]+work.KKT[869]*source[287]+work.KKT[871]*source[317];
  result[78] = work.KKT[414]*source[60]+work.KKT[449]*source[61]+work.KKT[483]*source[62]+work.KKT[516]*source[63]+work.KKT[548]*source[64]+work.KKT[579]*source[65]+work.KKT[609]*source[66]+work.KKT[638]*source[67]+work.KKT[666]*source[68]+work.KKT[693]*source[69]+work.KKT[719]*source[70]+work.KKT[744]*source[71]+work.KKT[768]*source[72]+work.KKT[791]*source[73]+work.KKT[813]*source[74]+work.KKT[834]*source[75]+work.KKT[854]*source[76]+work.KKT[873]*source[77]+work.KKT[891]*source[78]+work.KKT[892]*source[79]+work.KKT[893]*source[80]+work.KKT[894]*source[81]+work.KKT[895]*source[82]+work.KKT[896]*source[83]+work.KKT[897]*source[84]+work.KKT[898]*source[85]+work.KKT[899]*source[86]+work.KKT[900]*source[87]+work.KKT[901]*source[88]+work.KKT[902]*source[89]+work.KKT[334]*source[228]+work.KKT[888]*source[288]+work.KKT[890]*source[318];
  result[79] = work.KKT[415]*source[60]+work.KKT[450]*source[61]+work.KKT[484]*source[62]+work.KKT[517]*source[63]+work.KKT[549]*source[64]+work.KKT[580]*source[65]+work.KKT[610]*source[66]+work.KKT[639]*source[67]+work.KKT[667]*source[68]+work.KKT[694]*source[69]+work.KKT[720]*source[70]+work.KKT[745]*source[71]+work.KKT[769]*source[72]+work.KKT[792]*source[73]+work.KKT[814]*source[74]+work.KKT[835]*source[75]+work.KKT[855]*source[76]+work.KKT[874]*source[77]+work.KKT[892]*source[78]+work.KKT[909]*source[79]+work.KKT[910]*source[80]+work.KKT[911]*source[81]+work.KKT[912]*source[82]+work.KKT[913]*source[83]+work.KKT[914]*source[84]+work.KKT[915]*source[85]+work.KKT[916]*source[86]+work.KKT[917]*source[87]+work.KKT[918]*source[88]+work.KKT[919]*source[89]+work.KKT[339]*source[229]+work.KKT[906]*source[289]+work.KKT[908]*source[319];
  result[80] = work.KKT[416]*source[60]+work.KKT[451]*source[61]+work.KKT[485]*source[62]+work.KKT[518]*source[63]+work.KKT[550]*source[64]+work.KKT[581]*source[65]+work.KKT[611]*source[66]+work.KKT[640]*source[67]+work.KKT[668]*source[68]+work.KKT[695]*source[69]+work.KKT[721]*source[70]+work.KKT[746]*source[71]+work.KKT[770]*source[72]+work.KKT[793]*source[73]+work.KKT[815]*source[74]+work.KKT[836]*source[75]+work.KKT[856]*source[76]+work.KKT[875]*source[77]+work.KKT[893]*source[78]+work.KKT[910]*source[79]+work.KKT[926]*source[80]+work.KKT[927]*source[81]+work.KKT[928]*source[82]+work.KKT[929]*source[83]+work.KKT[930]*source[84]+work.KKT[931]*source[85]+work.KKT[932]*source[86]+work.KKT[933]*source[87]+work.KKT[934]*source[88]+work.KKT[935]*source[89]+work.KKT[344]*source[230]+work.KKT[923]*source[290]+work.KKT[925]*source[320];
  result[81] = work.KKT[417]*source[60]+work.KKT[452]*source[61]+work.KKT[486]*source[62]+work.KKT[519]*source[63]+work.KKT[551]*source[64]+work.KKT[582]*source[65]+work.KKT[612]*source[66]+work.KKT[641]*source[67]+work.KKT[669]*source[68]+work.KKT[696]*source[69]+work.KKT[722]*source[70]+work.KKT[747]*source[71]+work.KKT[771]*source[72]+work.KKT[794]*source[73]+work.KKT[816]*source[74]+work.KKT[837]*source[75]+work.KKT[857]*source[76]+work.KKT[876]*source[77]+work.KKT[894]*source[78]+work.KKT[911]*source[79]+work.KKT[927]*source[80]+work.KKT[942]*source[81]+work.KKT[943]*source[82]+work.KKT[944]*source[83]+work.KKT[945]*source[84]+work.KKT[946]*source[85]+work.KKT[947]*source[86]+work.KKT[948]*source[87]+work.KKT[949]*source[88]+work.KKT[950]*source[89]+work.KKT[349]*source[231]+work.KKT[939]*source[291]+work.KKT[941]*source[321];
  result[82] = work.KKT[418]*source[60]+work.KKT[453]*source[61]+work.KKT[487]*source[62]+work.KKT[520]*source[63]+work.KKT[552]*source[64]+work.KKT[583]*source[65]+work.KKT[613]*source[66]+work.KKT[642]*source[67]+work.KKT[670]*source[68]+work.KKT[697]*source[69]+work.KKT[723]*source[70]+work.KKT[748]*source[71]+work.KKT[772]*source[72]+work.KKT[795]*source[73]+work.KKT[817]*source[74]+work.KKT[838]*source[75]+work.KKT[858]*source[76]+work.KKT[877]*source[77]+work.KKT[895]*source[78]+work.KKT[912]*source[79]+work.KKT[928]*source[80]+work.KKT[943]*source[81]+work.KKT[957]*source[82]+work.KKT[958]*source[83]+work.KKT[959]*source[84]+work.KKT[960]*source[85]+work.KKT[961]*source[86]+work.KKT[962]*source[87]+work.KKT[963]*source[88]+work.KKT[964]*source[89]+work.KKT[354]*source[232]+work.KKT[954]*source[292]+work.KKT[956]*source[322];
  result[83] = work.KKT[419]*source[60]+work.KKT[454]*source[61]+work.KKT[488]*source[62]+work.KKT[521]*source[63]+work.KKT[553]*source[64]+work.KKT[584]*source[65]+work.KKT[614]*source[66]+work.KKT[643]*source[67]+work.KKT[671]*source[68]+work.KKT[698]*source[69]+work.KKT[724]*source[70]+work.KKT[749]*source[71]+work.KKT[773]*source[72]+work.KKT[796]*source[73]+work.KKT[818]*source[74]+work.KKT[839]*source[75]+work.KKT[859]*source[76]+work.KKT[878]*source[77]+work.KKT[896]*source[78]+work.KKT[913]*source[79]+work.KKT[929]*source[80]+work.KKT[944]*source[81]+work.KKT[958]*source[82]+work.KKT[971]*source[83]+work.KKT[972]*source[84]+work.KKT[973]*source[85]+work.KKT[974]*source[86]+work.KKT[975]*source[87]+work.KKT[976]*source[88]+work.KKT[977]*source[89]+work.KKT[359]*source[233]+work.KKT[968]*source[293]+work.KKT[970]*source[323];
  result[84] = work.KKT[420]*source[60]+work.KKT[455]*source[61]+work.KKT[489]*source[62]+work.KKT[522]*source[63]+work.KKT[554]*source[64]+work.KKT[585]*source[65]+work.KKT[615]*source[66]+work.KKT[644]*source[67]+work.KKT[672]*source[68]+work.KKT[699]*source[69]+work.KKT[725]*source[70]+work.KKT[750]*source[71]+work.KKT[774]*source[72]+work.KKT[797]*source[73]+work.KKT[819]*source[74]+work.KKT[840]*source[75]+work.KKT[860]*source[76]+work.KKT[879]*source[77]+work.KKT[897]*source[78]+work.KKT[914]*source[79]+work.KKT[930]*source[80]+work.KKT[945]*source[81]+work.KKT[959]*source[82]+work.KKT[972]*source[83]+work.KKT[984]*source[84]+work.KKT[985]*source[85]+work.KKT[986]*source[86]+work.KKT[987]*source[87]+work.KKT[988]*source[88]+work.KKT[989]*source[89]+work.KKT[364]*source[234]+work.KKT[981]*source[294]+work.KKT[983]*source[324];
  result[85] = work.KKT[421]*source[60]+work.KKT[456]*source[61]+work.KKT[490]*source[62]+work.KKT[523]*source[63]+work.KKT[555]*source[64]+work.KKT[586]*source[65]+work.KKT[616]*source[66]+work.KKT[645]*source[67]+work.KKT[673]*source[68]+work.KKT[700]*source[69]+work.KKT[726]*source[70]+work.KKT[751]*source[71]+work.KKT[775]*source[72]+work.KKT[798]*source[73]+work.KKT[820]*source[74]+work.KKT[841]*source[75]+work.KKT[861]*source[76]+work.KKT[880]*source[77]+work.KKT[898]*source[78]+work.KKT[915]*source[79]+work.KKT[931]*source[80]+work.KKT[946]*source[81]+work.KKT[960]*source[82]+work.KKT[973]*source[83]+work.KKT[985]*source[84]+work.KKT[996]*source[85]+work.KKT[997]*source[86]+work.KKT[998]*source[87]+work.KKT[999]*source[88]+work.KKT[1000]*source[89]+work.KKT[369]*source[235]+work.KKT[993]*source[295]+work.KKT[995]*source[325];
  result[86] = work.KKT[422]*source[60]+work.KKT[457]*source[61]+work.KKT[491]*source[62]+work.KKT[524]*source[63]+work.KKT[556]*source[64]+work.KKT[587]*source[65]+work.KKT[617]*source[66]+work.KKT[646]*source[67]+work.KKT[674]*source[68]+work.KKT[701]*source[69]+work.KKT[727]*source[70]+work.KKT[752]*source[71]+work.KKT[776]*source[72]+work.KKT[799]*source[73]+work.KKT[821]*source[74]+work.KKT[842]*source[75]+work.KKT[862]*source[76]+work.KKT[881]*source[77]+work.KKT[899]*source[78]+work.KKT[916]*source[79]+work.KKT[932]*source[80]+work.KKT[947]*source[81]+work.KKT[961]*source[82]+work.KKT[974]*source[83]+work.KKT[986]*source[84]+work.KKT[997]*source[85]+work.KKT[1007]*source[86]+work.KKT[1008]*source[87]+work.KKT[1009]*source[88]+work.KKT[1010]*source[89]+work.KKT[374]*source[236]+work.KKT[1004]*source[296]+work.KKT[1006]*source[326];
  result[87] = work.KKT[423]*source[60]+work.KKT[458]*source[61]+work.KKT[492]*source[62]+work.KKT[525]*source[63]+work.KKT[557]*source[64]+work.KKT[588]*source[65]+work.KKT[618]*source[66]+work.KKT[647]*source[67]+work.KKT[675]*source[68]+work.KKT[702]*source[69]+work.KKT[728]*source[70]+work.KKT[753]*source[71]+work.KKT[777]*source[72]+work.KKT[800]*source[73]+work.KKT[822]*source[74]+work.KKT[843]*source[75]+work.KKT[863]*source[76]+work.KKT[882]*source[77]+work.KKT[900]*source[78]+work.KKT[917]*source[79]+work.KKT[933]*source[80]+work.KKT[948]*source[81]+work.KKT[962]*source[82]+work.KKT[975]*source[83]+work.KKT[987]*source[84]+work.KKT[998]*source[85]+work.KKT[1008]*source[86]+work.KKT[1017]*source[87]+work.KKT[1018]*source[88]+work.KKT[1019]*source[89]+work.KKT[379]*source[237]+work.KKT[1014]*source[297]+work.KKT[1016]*source[327];
  result[88] = work.KKT[424]*source[60]+work.KKT[459]*source[61]+work.KKT[493]*source[62]+work.KKT[526]*source[63]+work.KKT[558]*source[64]+work.KKT[589]*source[65]+work.KKT[619]*source[66]+work.KKT[648]*source[67]+work.KKT[676]*source[68]+work.KKT[703]*source[69]+work.KKT[729]*source[70]+work.KKT[754]*source[71]+work.KKT[778]*source[72]+work.KKT[801]*source[73]+work.KKT[823]*source[74]+work.KKT[844]*source[75]+work.KKT[864]*source[76]+work.KKT[883]*source[77]+work.KKT[901]*source[78]+work.KKT[918]*source[79]+work.KKT[934]*source[80]+work.KKT[949]*source[81]+work.KKT[963]*source[82]+work.KKT[976]*source[83]+work.KKT[988]*source[84]+work.KKT[999]*source[85]+work.KKT[1009]*source[86]+work.KKT[1018]*source[87]+work.KKT[1026]*source[88]+work.KKT[1027]*source[89]+work.KKT[384]*source[238]+work.KKT[1023]*source[298]+work.KKT[1025]*source[328];
  result[89] = work.KKT[425]*source[60]+work.KKT[460]*source[61]+work.KKT[494]*source[62]+work.KKT[527]*source[63]+work.KKT[559]*source[64]+work.KKT[590]*source[65]+work.KKT[620]*source[66]+work.KKT[649]*source[67]+work.KKT[677]*source[68]+work.KKT[704]*source[69]+work.KKT[730]*source[70]+work.KKT[755]*source[71]+work.KKT[779]*source[72]+work.KKT[802]*source[73]+work.KKT[824]*source[74]+work.KKT[845]*source[75]+work.KKT[865]*source[76]+work.KKT[884]*source[77]+work.KKT[902]*source[78]+work.KKT[919]*source[79]+work.KKT[935]*source[80]+work.KKT[950]*source[81]+work.KKT[964]*source[82]+work.KKT[977]*source[83]+work.KKT[989]*source[84]+work.KKT[1000]*source[85]+work.KKT[1010]*source[86]+work.KKT[1019]*source[87]+work.KKT[1027]*source[88]+work.KKT[1030]*source[89]+work.KKT[389]*source[239]+work.KKT[1031]*source[299]+work.KKT[1032]*source[329];
  result[90] = work.KKT[0]*source[90]+work.KKT[1]*source[210];
  result[91] = work.KKT[2]*source[91]+work.KKT[3]*source[211];
  result[92] = work.KKT[4]*source[92]+work.KKT[5]*source[212];
  result[93] = work.KKT[6]*source[93]+work.KKT[7]*source[213];
  result[94] = work.KKT[8]*source[94]+work.KKT[9]*source[214];
  result[95] = work.KKT[10]*source[95]+work.KKT[11]*source[215];
  result[96] = work.KKT[12]*source[96]+work.KKT[13]*source[216];
  result[97] = work.KKT[14]*source[97]+work.KKT[15]*source[217];
  result[98] = work.KKT[16]*source[98]+work.KKT[17]*source[218];
  result[99] = work.KKT[18]*source[99]+work.KKT[19]*source[219];
  result[100] = work.KKT[20]*source[100]+work.KKT[21]*source[220];
  result[101] = work.KKT[22]*source[101]+work.KKT[23]*source[221];
  result[102] = work.KKT[24]*source[102]+work.KKT[25]*source[222];
  result[103] = work.KKT[26]*source[103]+work.KKT[27]*source[223];
  result[104] = work.KKT[28]*source[104]+work.KKT[29]*source[224];
  result[105] = work.KKT[30]*source[105]+work.KKT[31]*source[225];
  result[106] = work.KKT[32]*source[106]+work.KKT[33]*source[226];
  result[107] = work.KKT[34]*source[107]+work.KKT[35]*source[227];
  result[108] = work.KKT[36]*source[108]+work.KKT[37]*source[228];
  result[109] = work.KKT[38]*source[109]+work.KKT[39]*source[229];
  result[110] = work.KKT[40]*source[110]+work.KKT[41]*source[230];
  result[111] = work.KKT[42]*source[111]+work.KKT[43]*source[231];
  result[112] = work.KKT[44]*source[112]+work.KKT[45]*source[232];
  result[113] = work.KKT[46]*source[113]+work.KKT[47]*source[233];
  result[114] = work.KKT[48]*source[114]+work.KKT[49]*source[234];
  result[115] = work.KKT[50]*source[115]+work.KKT[51]*source[235];
  result[116] = work.KKT[52]*source[116]+work.KKT[53]*source[236];
  result[117] = work.KKT[54]*source[117]+work.KKT[55]*source[237];
  result[118] = work.KKT[56]*source[118]+work.KKT[57]*source[238];
  result[119] = work.KKT[58]*source[119]+work.KKT[59]*source[239];
  result[120] = work.KKT[60]*source[120]+work.KKT[61]*source[240];
  result[121] = work.KKT[62]*source[121]+work.KKT[63]*source[241];
  result[122] = work.KKT[64]*source[122]+work.KKT[65]*source[242];
  result[123] = work.KKT[66]*source[123]+work.KKT[67]*source[243];
  result[124] = work.KKT[68]*source[124]+work.KKT[69]*source[244];
  result[125] = work.KKT[70]*source[125]+work.KKT[71]*source[245];
  result[126] = work.KKT[72]*source[126]+work.KKT[73]*source[246];
  result[127] = work.KKT[74]*source[127]+work.KKT[75]*source[247];
  result[128] = work.KKT[76]*source[128]+work.KKT[77]*source[248];
  result[129] = work.KKT[78]*source[129]+work.KKT[79]*source[249];
  result[130] = work.KKT[80]*source[130]+work.KKT[81]*source[250];
  result[131] = work.KKT[82]*source[131]+work.KKT[83]*source[251];
  result[132] = work.KKT[84]*source[132]+work.KKT[85]*source[252];
  result[133] = work.KKT[86]*source[133]+work.KKT[87]*source[253];
  result[134] = work.KKT[88]*source[134]+work.KKT[89]*source[254];
  result[135] = work.KKT[90]*source[135]+work.KKT[91]*source[255];
  result[136] = work.KKT[92]*source[136]+work.KKT[93]*source[256];
  result[137] = work.KKT[94]*source[137]+work.KKT[95]*source[257];
  result[138] = work.KKT[96]*source[138]+work.KKT[97]*source[258];
  result[139] = work.KKT[98]*source[139]+work.KKT[99]*source[259];
  result[140] = work.KKT[100]*source[140]+work.KKT[101]*source[260];
  result[141] = work.KKT[102]*source[141]+work.KKT[103]*source[261];
  result[142] = work.KKT[104]*source[142]+work.KKT[105]*source[262];
  result[143] = work.KKT[106]*source[143]+work.KKT[107]*source[263];
  result[144] = work.KKT[108]*source[144]+work.KKT[109]*source[264];
  result[145] = work.KKT[110]*source[145]+work.KKT[111]*source[265];
  result[146] = work.KKT[112]*source[146]+work.KKT[113]*source[266];
  result[147] = work.KKT[114]*source[147]+work.KKT[115]*source[267];
  result[148] = work.KKT[116]*source[148]+work.KKT[117]*source[268];
  result[149] = work.KKT[118]*source[149]+work.KKT[119]*source[269];
  result[150] = work.KKT[120]*source[150]+work.KKT[121]*source[270];
  result[151] = work.KKT[122]*source[151]+work.KKT[123]*source[271];
  result[152] = work.KKT[124]*source[152]+work.KKT[125]*source[272];
  result[153] = work.KKT[126]*source[153]+work.KKT[127]*source[273];
  result[154] = work.KKT[128]*source[154]+work.KKT[129]*source[274];
  result[155] = work.KKT[130]*source[155]+work.KKT[131]*source[275];
  result[156] = work.KKT[132]*source[156]+work.KKT[133]*source[276];
  result[157] = work.KKT[134]*source[157]+work.KKT[135]*source[277];
  result[158] = work.KKT[136]*source[158]+work.KKT[137]*source[278];
  result[159] = work.KKT[138]*source[159]+work.KKT[139]*source[279];
  result[160] = work.KKT[140]*source[160]+work.KKT[141]*source[280];
  result[161] = work.KKT[142]*source[161]+work.KKT[143]*source[281];
  result[162] = work.KKT[144]*source[162]+work.KKT[145]*source[282];
  result[163] = work.KKT[146]*source[163]+work.KKT[147]*source[283];
  result[164] = work.KKT[148]*source[164]+work.KKT[149]*source[284];
  result[165] = work.KKT[150]*source[165]+work.KKT[151]*source[285];
  result[166] = work.KKT[152]*source[166]+work.KKT[153]*source[286];
  result[167] = work.KKT[154]*source[167]+work.KKT[155]*source[287];
  result[168] = work.KKT[156]*source[168]+work.KKT[157]*source[288];
  result[169] = work.KKT[158]*source[169]+work.KKT[159]*source[289];
  result[170] = work.KKT[160]*source[170]+work.KKT[161]*source[290];
  result[171] = work.KKT[162]*source[171]+work.KKT[163]*source[291];
  result[172] = work.KKT[164]*source[172]+work.KKT[165]*source[292];
  result[173] = work.KKT[166]*source[173]+work.KKT[167]*source[293];
  result[174] = work.KKT[168]*source[174]+work.KKT[169]*source[294];
  result[175] = work.KKT[170]*source[175]+work.KKT[171]*source[295];
  result[176] = work.KKT[172]*source[176]+work.KKT[173]*source[296];
  result[177] = work.KKT[174]*source[177]+work.KKT[175]*source[297];
  result[178] = work.KKT[176]*source[178]+work.KKT[177]*source[298];
  result[179] = work.KKT[178]*source[179]+work.KKT[179]*source[299];
  result[180] = work.KKT[180]*source[180]+work.KKT[181]*source[300];
  result[181] = work.KKT[182]*source[181]+work.KKT[183]*source[301];
  result[182] = work.KKT[184]*source[182]+work.KKT[185]*source[302];
  result[183] = work.KKT[186]*source[183]+work.KKT[187]*source[303];
  result[184] = work.KKT[188]*source[184]+work.KKT[189]*source[304];
  result[185] = work.KKT[190]*source[185]+work.KKT[191]*source[305];
  result[186] = work.KKT[192]*source[186]+work.KKT[193]*source[306];
  result[187] = work.KKT[194]*source[187]+work.KKT[195]*source[307];
  result[188] = work.KKT[196]*source[188]+work.KKT[197]*source[308];
  result[189] = work.KKT[198]*source[189]+work.KKT[199]*source[309];
  result[190] = work.KKT[200]*source[190]+work.KKT[201]*source[310];
  result[191] = work.KKT[202]*source[191]+work.KKT[203]*source[311];
  result[192] = work.KKT[204]*source[192]+work.KKT[205]*source[312];
  result[193] = work.KKT[206]*source[193]+work.KKT[207]*source[313];
  result[194] = work.KKT[208]*source[194]+work.KKT[209]*source[314];
  result[195] = work.KKT[210]*source[195]+work.KKT[211]*source[315];
  result[196] = work.KKT[212]*source[196]+work.KKT[213]*source[316];
  result[197] = work.KKT[214]*source[197]+work.KKT[215]*source[317];
  result[198] = work.KKT[216]*source[198]+work.KKT[217]*source[318];
  result[199] = work.KKT[218]*source[199]+work.KKT[219]*source[319];
  result[200] = work.KKT[220]*source[200]+work.KKT[221]*source[320];
  result[201] = work.KKT[222]*source[201]+work.KKT[223]*source[321];
  result[202] = work.KKT[224]*source[202]+work.KKT[225]*source[322];
  result[203] = work.KKT[226]*source[203]+work.KKT[227]*source[323];
  result[204] = work.KKT[228]*source[204]+work.KKT[229]*source[324];
  result[205] = work.KKT[230]*source[205]+work.KKT[231]*source[325];
  result[206] = work.KKT[232]*source[206]+work.KKT[233]*source[326];
  result[207] = work.KKT[234]*source[207]+work.KKT[235]*source[327];
  result[208] = work.KKT[236]*source[208]+work.KKT[237]*source[328];
  result[209] = work.KKT[238]*source[209]+work.KKT[239]*source[329];
  result[210] = work.KKT[1]*source[90]+work.KKT[243]*source[210]+work.KKT[241]*source[0]+work.KKT[244]*source[60];
  result[211] = work.KKT[3]*source[91]+work.KKT[248]*source[211]+work.KKT[246]*source[1]+work.KKT[249]*source[61];
  result[212] = work.KKT[5]*source[92]+work.KKT[253]*source[212]+work.KKT[251]*source[2]+work.KKT[254]*source[62];
  result[213] = work.KKT[7]*source[93]+work.KKT[258]*source[213]+work.KKT[256]*source[3]+work.KKT[259]*source[63];
  result[214] = work.KKT[9]*source[94]+work.KKT[263]*source[214]+work.KKT[261]*source[4]+work.KKT[264]*source[64];
  result[215] = work.KKT[11]*source[95]+work.KKT[268]*source[215]+work.KKT[266]*source[5]+work.KKT[269]*source[65];
  result[216] = work.KKT[13]*source[96]+work.KKT[273]*source[216]+work.KKT[271]*source[6]+work.KKT[274]*source[66];
  result[217] = work.KKT[15]*source[97]+work.KKT[278]*source[217]+work.KKT[276]*source[7]+work.KKT[279]*source[67];
  result[218] = work.KKT[17]*source[98]+work.KKT[283]*source[218]+work.KKT[281]*source[8]+work.KKT[284]*source[68];
  result[219] = work.KKT[19]*source[99]+work.KKT[288]*source[219]+work.KKT[286]*source[9]+work.KKT[289]*source[69];
  result[220] = work.KKT[21]*source[100]+work.KKT[293]*source[220]+work.KKT[291]*source[10]+work.KKT[294]*source[70];
  result[221] = work.KKT[23]*source[101]+work.KKT[298]*source[221]+work.KKT[296]*source[11]+work.KKT[299]*source[71];
  result[222] = work.KKT[25]*source[102]+work.KKT[303]*source[222]+work.KKT[301]*source[12]+work.KKT[304]*source[72];
  result[223] = work.KKT[27]*source[103]+work.KKT[308]*source[223]+work.KKT[306]*source[13]+work.KKT[309]*source[73];
  result[224] = work.KKT[29]*source[104]+work.KKT[313]*source[224]+work.KKT[311]*source[14]+work.KKT[314]*source[74];
  result[225] = work.KKT[31]*source[105]+work.KKT[318]*source[225]+work.KKT[316]*source[15]+work.KKT[319]*source[75];
  result[226] = work.KKT[33]*source[106]+work.KKT[323]*source[226]+work.KKT[321]*source[16]+work.KKT[324]*source[76];
  result[227] = work.KKT[35]*source[107]+work.KKT[328]*source[227]+work.KKT[326]*source[17]+work.KKT[329]*source[77];
  result[228] = work.KKT[37]*source[108]+work.KKT[333]*source[228]+work.KKT[331]*source[18]+work.KKT[334]*source[78];
  result[229] = work.KKT[39]*source[109]+work.KKT[338]*source[229]+work.KKT[336]*source[19]+work.KKT[339]*source[79];
  result[230] = work.KKT[41]*source[110]+work.KKT[343]*source[230]+work.KKT[341]*source[20]+work.KKT[344]*source[80];
  result[231] = work.KKT[43]*source[111]+work.KKT[348]*source[231]+work.KKT[346]*source[21]+work.KKT[349]*source[81];
  result[232] = work.KKT[45]*source[112]+work.KKT[353]*source[232]+work.KKT[351]*source[22]+work.KKT[354]*source[82];
  result[233] = work.KKT[47]*source[113]+work.KKT[358]*source[233]+work.KKT[356]*source[23]+work.KKT[359]*source[83];
  result[234] = work.KKT[49]*source[114]+work.KKT[363]*source[234]+work.KKT[361]*source[24]+work.KKT[364]*source[84];
  result[235] = work.KKT[51]*source[115]+work.KKT[368]*source[235]+work.KKT[366]*source[25]+work.KKT[369]*source[85];
  result[236] = work.KKT[53]*source[116]+work.KKT[373]*source[236]+work.KKT[371]*source[26]+work.KKT[374]*source[86];
  result[237] = work.KKT[55]*source[117]+work.KKT[378]*source[237]+work.KKT[376]*source[27]+work.KKT[379]*source[87];
  result[238] = work.KKT[57]*source[118]+work.KKT[383]*source[238]+work.KKT[381]*source[28]+work.KKT[384]*source[88];
  result[239] = work.KKT[59]*source[119]+work.KKT[388]*source[239]+work.KKT[386]*source[29]+work.KKT[389]*source[89];
  result[240] = work.KKT[61]*source[120]+work.KKT[242]*source[240]+work.KKT[240]*source[0];
  result[241] = work.KKT[63]*source[121]+work.KKT[247]*source[241]+work.KKT[245]*source[1];
  result[242] = work.KKT[65]*source[122]+work.KKT[252]*source[242]+work.KKT[250]*source[2];
  result[243] = work.KKT[67]*source[123]+work.KKT[257]*source[243]+work.KKT[255]*source[3];
  result[244] = work.KKT[69]*source[124]+work.KKT[262]*source[244]+work.KKT[260]*source[4];
  result[245] = work.KKT[71]*source[125]+work.KKT[267]*source[245]+work.KKT[265]*source[5];
  result[246] = work.KKT[73]*source[126]+work.KKT[272]*source[246]+work.KKT[270]*source[6];
  result[247] = work.KKT[75]*source[127]+work.KKT[277]*source[247]+work.KKT[275]*source[7];
  result[248] = work.KKT[77]*source[128]+work.KKT[282]*source[248]+work.KKT[280]*source[8];
  result[249] = work.KKT[79]*source[129]+work.KKT[287]*source[249]+work.KKT[285]*source[9];
  result[250] = work.KKT[81]*source[130]+work.KKT[292]*source[250]+work.KKT[290]*source[10];
  result[251] = work.KKT[83]*source[131]+work.KKT[297]*source[251]+work.KKT[295]*source[11];
  result[252] = work.KKT[85]*source[132]+work.KKT[302]*source[252]+work.KKT[300]*source[12];
  result[253] = work.KKT[87]*source[133]+work.KKT[307]*source[253]+work.KKT[305]*source[13];
  result[254] = work.KKT[89]*source[134]+work.KKT[312]*source[254]+work.KKT[310]*source[14];
  result[255] = work.KKT[91]*source[135]+work.KKT[317]*source[255]+work.KKT[315]*source[15];
  result[256] = work.KKT[93]*source[136]+work.KKT[322]*source[256]+work.KKT[320]*source[16];
  result[257] = work.KKT[95]*source[137]+work.KKT[327]*source[257]+work.KKT[325]*source[17];
  result[258] = work.KKT[97]*source[138]+work.KKT[332]*source[258]+work.KKT[330]*source[18];
  result[259] = work.KKT[99]*source[139]+work.KKT[337]*source[259]+work.KKT[335]*source[19];
  result[260] = work.KKT[101]*source[140]+work.KKT[342]*source[260]+work.KKT[340]*source[20];
  result[261] = work.KKT[103]*source[141]+work.KKT[347]*source[261]+work.KKT[345]*source[21];
  result[262] = work.KKT[105]*source[142]+work.KKT[352]*source[262]+work.KKT[350]*source[22];
  result[263] = work.KKT[107]*source[143]+work.KKT[357]*source[263]+work.KKT[355]*source[23];
  result[264] = work.KKT[109]*source[144]+work.KKT[362]*source[264]+work.KKT[360]*source[24];
  result[265] = work.KKT[111]*source[145]+work.KKT[367]*source[265]+work.KKT[365]*source[25];
  result[266] = work.KKT[113]*source[146]+work.KKT[372]*source[266]+work.KKT[370]*source[26];
  result[267] = work.KKT[115]*source[147]+work.KKT[377]*source[267]+work.KKT[375]*source[27];
  result[268] = work.KKT[117]*source[148]+work.KKT[382]*source[268]+work.KKT[380]*source[28];
  result[269] = work.KKT[119]*source[149]+work.KKT[387]*source[269]+work.KKT[385]*source[29];
  result[270] = work.KKT[121]*source[150]+work.KKT[392]*source[270]+work.KKT[390]*source[30]+work.KKT[393]*source[60];
  result[271] = work.KKT[123]*source[151]+work.KKT[428]*source[271]+work.KKT[426]*source[31]+work.KKT[429]*source[61];
  result[272] = work.KKT[125]*source[152]+work.KKT[463]*source[272]+work.KKT[461]*source[32]+work.KKT[464]*source[62];
  result[273] = work.KKT[127]*source[153]+work.KKT[497]*source[273]+work.KKT[495]*source[33]+work.KKT[498]*source[63];
  result[274] = work.KKT[129]*source[154]+work.KKT[530]*source[274]+work.KKT[528]*source[34]+work.KKT[531]*source[64];
  result[275] = work.KKT[131]*source[155]+work.KKT[562]*source[275]+work.KKT[560]*source[35]+work.KKT[563]*source[65];
  result[276] = work.KKT[133]*source[156]+work.KKT[593]*source[276]+work.KKT[591]*source[36]+work.KKT[594]*source[66];
  result[277] = work.KKT[135]*source[157]+work.KKT[623]*source[277]+work.KKT[621]*source[37]+work.KKT[624]*source[67];
  result[278] = work.KKT[137]*source[158]+work.KKT[652]*source[278]+work.KKT[650]*source[38]+work.KKT[653]*source[68];
  result[279] = work.KKT[139]*source[159]+work.KKT[680]*source[279]+work.KKT[678]*source[39]+work.KKT[681]*source[69];
  result[280] = work.KKT[141]*source[160]+work.KKT[707]*source[280]+work.KKT[705]*source[40]+work.KKT[708]*source[70];
  result[281] = work.KKT[143]*source[161]+work.KKT[733]*source[281]+work.KKT[731]*source[41]+work.KKT[734]*source[71];
  result[282] = work.KKT[145]*source[162]+work.KKT[758]*source[282]+work.KKT[756]*source[42]+work.KKT[759]*source[72];
  result[283] = work.KKT[147]*source[163]+work.KKT[782]*source[283]+work.KKT[780]*source[43]+work.KKT[783]*source[73];
  result[284] = work.KKT[149]*source[164]+work.KKT[805]*source[284]+work.KKT[803]*source[44]+work.KKT[806]*source[74];
  result[285] = work.KKT[151]*source[165]+work.KKT[827]*source[285]+work.KKT[825]*source[45]+work.KKT[828]*source[75];
  result[286] = work.KKT[153]*source[166]+work.KKT[848]*source[286]+work.KKT[846]*source[46]+work.KKT[849]*source[76];
  result[287] = work.KKT[155]*source[167]+work.KKT[868]*source[287]+work.KKT[866]*source[47]+work.KKT[869]*source[77];
  result[288] = work.KKT[157]*source[168]+work.KKT[887]*source[288]+work.KKT[885]*source[48]+work.KKT[888]*source[78];
  result[289] = work.KKT[159]*source[169]+work.KKT[905]*source[289]+work.KKT[903]*source[49]+work.KKT[906]*source[79];
  result[290] = work.KKT[161]*source[170]+work.KKT[922]*source[290]+work.KKT[920]*source[50]+work.KKT[923]*source[80];
  result[291] = work.KKT[163]*source[171]+work.KKT[938]*source[291]+work.KKT[936]*source[51]+work.KKT[939]*source[81];
  result[292] = work.KKT[165]*source[172]+work.KKT[953]*source[292]+work.KKT[951]*source[52]+work.KKT[954]*source[82];
  result[293] = work.KKT[167]*source[173]+work.KKT[967]*source[293]+work.KKT[965]*source[53]+work.KKT[968]*source[83];
  result[294] = work.KKT[169]*source[174]+work.KKT[980]*source[294]+work.KKT[978]*source[54]+work.KKT[981]*source[84];
  result[295] = work.KKT[171]*source[175]+work.KKT[992]*source[295]+work.KKT[990]*source[55]+work.KKT[993]*source[85];
  result[296] = work.KKT[173]*source[176]+work.KKT[1003]*source[296]+work.KKT[1001]*source[56]+work.KKT[1004]*source[86];
  result[297] = work.KKT[175]*source[177]+work.KKT[1013]*source[297]+work.KKT[1011]*source[57]+work.KKT[1014]*source[87];
  result[298] = work.KKT[177]*source[178]+work.KKT[1022]*source[298]+work.KKT[1020]*source[58]+work.KKT[1023]*source[88];
  result[299] = work.KKT[179]*source[179]+work.KKT[1033]*source[299]+work.KKT[1028]*source[59]+work.KKT[1031]*source[89];
  result[300] = work.KKT[181]*source[180]+work.KKT[394]*source[300]+work.KKT[391]*source[30]+work.KKT[395]*source[60];
  result[301] = work.KKT[183]*source[181]+work.KKT[430]*source[301]+work.KKT[427]*source[31]+work.KKT[431]*source[61];
  result[302] = work.KKT[185]*source[182]+work.KKT[465]*source[302]+work.KKT[462]*source[32]+work.KKT[466]*source[62];
  result[303] = work.KKT[187]*source[183]+work.KKT[499]*source[303]+work.KKT[496]*source[33]+work.KKT[500]*source[63];
  result[304] = work.KKT[189]*source[184]+work.KKT[532]*source[304]+work.KKT[529]*source[34]+work.KKT[533]*source[64];
  result[305] = work.KKT[191]*source[185]+work.KKT[564]*source[305]+work.KKT[561]*source[35]+work.KKT[565]*source[65];
  result[306] = work.KKT[193]*source[186]+work.KKT[595]*source[306]+work.KKT[592]*source[36]+work.KKT[596]*source[66];
  result[307] = work.KKT[195]*source[187]+work.KKT[625]*source[307]+work.KKT[622]*source[37]+work.KKT[626]*source[67];
  result[308] = work.KKT[197]*source[188]+work.KKT[654]*source[308]+work.KKT[651]*source[38]+work.KKT[655]*source[68];
  result[309] = work.KKT[199]*source[189]+work.KKT[682]*source[309]+work.KKT[679]*source[39]+work.KKT[683]*source[69];
  result[310] = work.KKT[201]*source[190]+work.KKT[709]*source[310]+work.KKT[706]*source[40]+work.KKT[710]*source[70];
  result[311] = work.KKT[203]*source[191]+work.KKT[735]*source[311]+work.KKT[732]*source[41]+work.KKT[736]*source[71];
  result[312] = work.KKT[205]*source[192]+work.KKT[760]*source[312]+work.KKT[757]*source[42]+work.KKT[761]*source[72];
  result[313] = work.KKT[207]*source[193]+work.KKT[784]*source[313]+work.KKT[781]*source[43]+work.KKT[785]*source[73];
  result[314] = work.KKT[209]*source[194]+work.KKT[807]*source[314]+work.KKT[804]*source[44]+work.KKT[808]*source[74];
  result[315] = work.KKT[211]*source[195]+work.KKT[829]*source[315]+work.KKT[826]*source[45]+work.KKT[830]*source[75];
  result[316] = work.KKT[213]*source[196]+work.KKT[850]*source[316]+work.KKT[847]*source[46]+work.KKT[851]*source[76];
  result[317] = work.KKT[215]*source[197]+work.KKT[870]*source[317]+work.KKT[867]*source[47]+work.KKT[871]*source[77];
  result[318] = work.KKT[217]*source[198]+work.KKT[889]*source[318]+work.KKT[886]*source[48]+work.KKT[890]*source[78];
  result[319] = work.KKT[219]*source[199]+work.KKT[907]*source[319]+work.KKT[904]*source[49]+work.KKT[908]*source[79];
  result[320] = work.KKT[221]*source[200]+work.KKT[924]*source[320]+work.KKT[921]*source[50]+work.KKT[925]*source[80];
  result[321] = work.KKT[223]*source[201]+work.KKT[940]*source[321]+work.KKT[937]*source[51]+work.KKT[941]*source[81];
  result[322] = work.KKT[225]*source[202]+work.KKT[955]*source[322]+work.KKT[952]*source[52]+work.KKT[956]*source[82];
  result[323] = work.KKT[227]*source[203]+work.KKT[969]*source[323]+work.KKT[966]*source[53]+work.KKT[970]*source[83];
  result[324] = work.KKT[229]*source[204]+work.KKT[982]*source[324]+work.KKT[979]*source[54]+work.KKT[983]*source[84];
  result[325] = work.KKT[231]*source[205]+work.KKT[994]*source[325]+work.KKT[991]*source[55]+work.KKT[995]*source[85];
  result[326] = work.KKT[233]*source[206]+work.KKT[1005]*source[326]+work.KKT[1002]*source[56]+work.KKT[1006]*source[86];
  result[327] = work.KKT[235]*source[207]+work.KKT[1015]*source[327]+work.KKT[1012]*source[57]+work.KKT[1016]*source[87];
  result[328] = work.KKT[237]*source[208]+work.KKT[1024]*source[328]+work.KKT[1021]*source[58]+work.KKT[1025]*source[88];
  result[329] = work.KKT[239]*source[209]+work.KKT[1034]*source[329]+work.KKT[1029]*source[59]+work.KKT[1032]*source[89];
}

double check_residual(double *target, double *multiplicand) {
  /* Returns the squared 2-norm of lhs - A*rhs. */
  /* Reuses v to find the residual. */
  int i;
  double residual;

  residual = 0;
  matrix_multiply(work.v, multiplicand);
  for (i = 0; i < 90; i++) {
    residual += (target[i] - work.v[i])*(target[i] - work.v[i]);
  }
  return residual;
}

void fill_KKT(void) {
  work.KKT[396] = 2*(params.S[0]+params.lambda[0]*params.Sigma[0]+params.PM[0]);
  work.KKT[397] = 2*(params.lambda[0]*params.Sigma[30]+params.PM[30]);
  work.KKT[398] = 2*(params.lambda[0]*params.Sigma[60]+params.PM[60]);
  work.KKT[399] = 2*(params.lambda[0]*params.Sigma[90]+params.PM[90]);
  work.KKT[400] = 2*(params.lambda[0]*params.Sigma[120]+params.PM[120]);
  work.KKT[401] = 2*(params.lambda[0]*params.Sigma[150]+params.PM[150]);
  work.KKT[402] = 2*(params.lambda[0]*params.Sigma[180]+params.PM[180]);
  work.KKT[403] = 2*(params.lambda[0]*params.Sigma[210]+params.PM[210]);
  work.KKT[404] = 2*(params.lambda[0]*params.Sigma[240]+params.PM[240]);
  work.KKT[405] = 2*(params.lambda[0]*params.Sigma[270]+params.PM[270]);
  work.KKT[406] = 2*(params.lambda[0]*params.Sigma[300]+params.PM[300]);
  work.KKT[407] = 2*(params.lambda[0]*params.Sigma[330]+params.PM[330]);
  work.KKT[408] = 2*(params.lambda[0]*params.Sigma[360]+params.PM[360]);
  work.KKT[409] = 2*(params.lambda[0]*params.Sigma[390]+params.PM[390]);
  work.KKT[410] = 2*(params.lambda[0]*params.Sigma[420]+params.PM[420]);
  work.KKT[411] = 2*(params.lambda[0]*params.Sigma[450]+params.PM[450]);
  work.KKT[412] = 2*(params.lambda[0]*params.Sigma[480]+params.PM[480]);
  work.KKT[413] = 2*(params.lambda[0]*params.Sigma[510]+params.PM[510]);
  work.KKT[414] = 2*(params.lambda[0]*params.Sigma[540]+params.PM[540]);
  work.KKT[415] = 2*(params.lambda[0]*params.Sigma[570]+params.PM[570]);
  work.KKT[416] = 2*(params.lambda[0]*params.Sigma[600]+params.PM[600]);
  work.KKT[417] = 2*(params.lambda[0]*params.Sigma[630]+params.PM[630]);
  work.KKT[418] = 2*(params.lambda[0]*params.Sigma[660]+params.PM[660]);
  work.KKT[419] = 2*(params.lambda[0]*params.Sigma[690]+params.PM[690]);
  work.KKT[420] = 2*(params.lambda[0]*params.Sigma[720]+params.PM[720]);
  work.KKT[421] = 2*(params.lambda[0]*params.Sigma[750]+params.PM[750]);
  work.KKT[422] = 2*(params.lambda[0]*params.Sigma[780]+params.PM[780]);
  work.KKT[423] = 2*(params.lambda[0]*params.Sigma[810]+params.PM[810]);
  work.KKT[424] = 2*(params.lambda[0]*params.Sigma[840]+params.PM[840]);
  work.KKT[425] = 2*(params.lambda[0]*params.Sigma[870]+params.PM[870]);
  work.KKT[432] = 2*(params.S[1]+params.lambda[0]*params.Sigma[31]+params.PM[31]);
  work.KKT[433] = 2*(params.lambda[0]*params.Sigma[61]+params.PM[61]);
  work.KKT[434] = 2*(params.lambda[0]*params.Sigma[91]+params.PM[91]);
  work.KKT[435] = 2*(params.lambda[0]*params.Sigma[121]+params.PM[121]);
  work.KKT[436] = 2*(params.lambda[0]*params.Sigma[151]+params.PM[151]);
  work.KKT[437] = 2*(params.lambda[0]*params.Sigma[181]+params.PM[181]);
  work.KKT[438] = 2*(params.lambda[0]*params.Sigma[211]+params.PM[211]);
  work.KKT[439] = 2*(params.lambda[0]*params.Sigma[241]+params.PM[241]);
  work.KKT[440] = 2*(params.lambda[0]*params.Sigma[271]+params.PM[271]);
  work.KKT[441] = 2*(params.lambda[0]*params.Sigma[301]+params.PM[301]);
  work.KKT[442] = 2*(params.lambda[0]*params.Sigma[331]+params.PM[331]);
  work.KKT[443] = 2*(params.lambda[0]*params.Sigma[361]+params.PM[361]);
  work.KKT[444] = 2*(params.lambda[0]*params.Sigma[391]+params.PM[391]);
  work.KKT[445] = 2*(params.lambda[0]*params.Sigma[421]+params.PM[421]);
  work.KKT[446] = 2*(params.lambda[0]*params.Sigma[451]+params.PM[451]);
  work.KKT[447] = 2*(params.lambda[0]*params.Sigma[481]+params.PM[481]);
  work.KKT[448] = 2*(params.lambda[0]*params.Sigma[511]+params.PM[511]);
  work.KKT[449] = 2*(params.lambda[0]*params.Sigma[541]+params.PM[541]);
  work.KKT[450] = 2*(params.lambda[0]*params.Sigma[571]+params.PM[571]);
  work.KKT[451] = 2*(params.lambda[0]*params.Sigma[601]+params.PM[601]);
  work.KKT[452] = 2*(params.lambda[0]*params.Sigma[631]+params.PM[631]);
  work.KKT[453] = 2*(params.lambda[0]*params.Sigma[661]+params.PM[661]);
  work.KKT[454] = 2*(params.lambda[0]*params.Sigma[691]+params.PM[691]);
  work.KKT[455] = 2*(params.lambda[0]*params.Sigma[721]+params.PM[721]);
  work.KKT[456] = 2*(params.lambda[0]*params.Sigma[751]+params.PM[751]);
  work.KKT[457] = 2*(params.lambda[0]*params.Sigma[781]+params.PM[781]);
  work.KKT[458] = 2*(params.lambda[0]*params.Sigma[811]+params.PM[811]);
  work.KKT[459] = 2*(params.lambda[0]*params.Sigma[841]+params.PM[841]);
  work.KKT[460] = 2*(params.lambda[0]*params.Sigma[871]+params.PM[871]);
  work.KKT[467] = 2*(params.S[2]+params.lambda[0]*params.Sigma[62]+params.PM[62]);
  work.KKT[468] = 2*(params.lambda[0]*params.Sigma[92]+params.PM[92]);
  work.KKT[469] = 2*(params.lambda[0]*params.Sigma[122]+params.PM[122]);
  work.KKT[470] = 2*(params.lambda[0]*params.Sigma[152]+params.PM[152]);
  work.KKT[471] = 2*(params.lambda[0]*params.Sigma[182]+params.PM[182]);
  work.KKT[472] = 2*(params.lambda[0]*params.Sigma[212]+params.PM[212]);
  work.KKT[473] = 2*(params.lambda[0]*params.Sigma[242]+params.PM[242]);
  work.KKT[474] = 2*(params.lambda[0]*params.Sigma[272]+params.PM[272]);
  work.KKT[475] = 2*(params.lambda[0]*params.Sigma[302]+params.PM[302]);
  work.KKT[476] = 2*(params.lambda[0]*params.Sigma[332]+params.PM[332]);
  work.KKT[477] = 2*(params.lambda[0]*params.Sigma[362]+params.PM[362]);
  work.KKT[478] = 2*(params.lambda[0]*params.Sigma[392]+params.PM[392]);
  work.KKT[479] = 2*(params.lambda[0]*params.Sigma[422]+params.PM[422]);
  work.KKT[480] = 2*(params.lambda[0]*params.Sigma[452]+params.PM[452]);
  work.KKT[481] = 2*(params.lambda[0]*params.Sigma[482]+params.PM[482]);
  work.KKT[482] = 2*(params.lambda[0]*params.Sigma[512]+params.PM[512]);
  work.KKT[483] = 2*(params.lambda[0]*params.Sigma[542]+params.PM[542]);
  work.KKT[484] = 2*(params.lambda[0]*params.Sigma[572]+params.PM[572]);
  work.KKT[485] = 2*(params.lambda[0]*params.Sigma[602]+params.PM[602]);
  work.KKT[486] = 2*(params.lambda[0]*params.Sigma[632]+params.PM[632]);
  work.KKT[487] = 2*(params.lambda[0]*params.Sigma[662]+params.PM[662]);
  work.KKT[488] = 2*(params.lambda[0]*params.Sigma[692]+params.PM[692]);
  work.KKT[489] = 2*(params.lambda[0]*params.Sigma[722]+params.PM[722]);
  work.KKT[490] = 2*(params.lambda[0]*params.Sigma[752]+params.PM[752]);
  work.KKT[491] = 2*(params.lambda[0]*params.Sigma[782]+params.PM[782]);
  work.KKT[492] = 2*(params.lambda[0]*params.Sigma[812]+params.PM[812]);
  work.KKT[493] = 2*(params.lambda[0]*params.Sigma[842]+params.PM[842]);
  work.KKT[494] = 2*(params.lambda[0]*params.Sigma[872]+params.PM[872]);
  work.KKT[501] = 2*(params.S[3]+params.lambda[0]*params.Sigma[93]+params.PM[93]);
  work.KKT[502] = 2*(params.lambda[0]*params.Sigma[123]+params.PM[123]);
  work.KKT[503] = 2*(params.lambda[0]*params.Sigma[153]+params.PM[153]);
  work.KKT[504] = 2*(params.lambda[0]*params.Sigma[183]+params.PM[183]);
  work.KKT[505] = 2*(params.lambda[0]*params.Sigma[213]+params.PM[213]);
  work.KKT[506] = 2*(params.lambda[0]*params.Sigma[243]+params.PM[243]);
  work.KKT[507] = 2*(params.lambda[0]*params.Sigma[273]+params.PM[273]);
  work.KKT[508] = 2*(params.lambda[0]*params.Sigma[303]+params.PM[303]);
  work.KKT[509] = 2*(params.lambda[0]*params.Sigma[333]+params.PM[333]);
  work.KKT[510] = 2*(params.lambda[0]*params.Sigma[363]+params.PM[363]);
  work.KKT[511] = 2*(params.lambda[0]*params.Sigma[393]+params.PM[393]);
  work.KKT[512] = 2*(params.lambda[0]*params.Sigma[423]+params.PM[423]);
  work.KKT[513] = 2*(params.lambda[0]*params.Sigma[453]+params.PM[453]);
  work.KKT[514] = 2*(params.lambda[0]*params.Sigma[483]+params.PM[483]);
  work.KKT[515] = 2*(params.lambda[0]*params.Sigma[513]+params.PM[513]);
  work.KKT[516] = 2*(params.lambda[0]*params.Sigma[543]+params.PM[543]);
  work.KKT[517] = 2*(params.lambda[0]*params.Sigma[573]+params.PM[573]);
  work.KKT[518] = 2*(params.lambda[0]*params.Sigma[603]+params.PM[603]);
  work.KKT[519] = 2*(params.lambda[0]*params.Sigma[633]+params.PM[633]);
  work.KKT[520] = 2*(params.lambda[0]*params.Sigma[663]+params.PM[663]);
  work.KKT[521] = 2*(params.lambda[0]*params.Sigma[693]+params.PM[693]);
  work.KKT[522] = 2*(params.lambda[0]*params.Sigma[723]+params.PM[723]);
  work.KKT[523] = 2*(params.lambda[0]*params.Sigma[753]+params.PM[753]);
  work.KKT[524] = 2*(params.lambda[0]*params.Sigma[783]+params.PM[783]);
  work.KKT[525] = 2*(params.lambda[0]*params.Sigma[813]+params.PM[813]);
  work.KKT[526] = 2*(params.lambda[0]*params.Sigma[843]+params.PM[843]);
  work.KKT[527] = 2*(params.lambda[0]*params.Sigma[873]+params.PM[873]);
  work.KKT[534] = 2*(params.S[4]+params.lambda[0]*params.Sigma[124]+params.PM[124]);
  work.KKT[535] = 2*(params.lambda[0]*params.Sigma[154]+params.PM[154]);
  work.KKT[536] = 2*(params.lambda[0]*params.Sigma[184]+params.PM[184]);
  work.KKT[537] = 2*(params.lambda[0]*params.Sigma[214]+params.PM[214]);
  work.KKT[538] = 2*(params.lambda[0]*params.Sigma[244]+params.PM[244]);
  work.KKT[539] = 2*(params.lambda[0]*params.Sigma[274]+params.PM[274]);
  work.KKT[540] = 2*(params.lambda[0]*params.Sigma[304]+params.PM[304]);
  work.KKT[541] = 2*(params.lambda[0]*params.Sigma[334]+params.PM[334]);
  work.KKT[542] = 2*(params.lambda[0]*params.Sigma[364]+params.PM[364]);
  work.KKT[543] = 2*(params.lambda[0]*params.Sigma[394]+params.PM[394]);
  work.KKT[544] = 2*(params.lambda[0]*params.Sigma[424]+params.PM[424]);
  work.KKT[545] = 2*(params.lambda[0]*params.Sigma[454]+params.PM[454]);
  work.KKT[546] = 2*(params.lambda[0]*params.Sigma[484]+params.PM[484]);
  work.KKT[547] = 2*(params.lambda[0]*params.Sigma[514]+params.PM[514]);
  work.KKT[548] = 2*(params.lambda[0]*params.Sigma[544]+params.PM[544]);
  work.KKT[549] = 2*(params.lambda[0]*params.Sigma[574]+params.PM[574]);
  work.KKT[550] = 2*(params.lambda[0]*params.Sigma[604]+params.PM[604]);
  work.KKT[551] = 2*(params.lambda[0]*params.Sigma[634]+params.PM[634]);
  work.KKT[552] = 2*(params.lambda[0]*params.Sigma[664]+params.PM[664]);
  work.KKT[553] = 2*(params.lambda[0]*params.Sigma[694]+params.PM[694]);
  work.KKT[554] = 2*(params.lambda[0]*params.Sigma[724]+params.PM[724]);
  work.KKT[555] = 2*(params.lambda[0]*params.Sigma[754]+params.PM[754]);
  work.KKT[556] = 2*(params.lambda[0]*params.Sigma[784]+params.PM[784]);
  work.KKT[557] = 2*(params.lambda[0]*params.Sigma[814]+params.PM[814]);
  work.KKT[558] = 2*(params.lambda[0]*params.Sigma[844]+params.PM[844]);
  work.KKT[559] = 2*(params.lambda[0]*params.Sigma[874]+params.PM[874]);
  work.KKT[566] = 2*(params.S[5]+params.lambda[0]*params.Sigma[155]+params.PM[155]);
  work.KKT[567] = 2*(params.lambda[0]*params.Sigma[185]+params.PM[185]);
  work.KKT[568] = 2*(params.lambda[0]*params.Sigma[215]+params.PM[215]);
  work.KKT[569] = 2*(params.lambda[0]*params.Sigma[245]+params.PM[245]);
  work.KKT[570] = 2*(params.lambda[0]*params.Sigma[275]+params.PM[275]);
  work.KKT[571] = 2*(params.lambda[0]*params.Sigma[305]+params.PM[305]);
  work.KKT[572] = 2*(params.lambda[0]*params.Sigma[335]+params.PM[335]);
  work.KKT[573] = 2*(params.lambda[0]*params.Sigma[365]+params.PM[365]);
  work.KKT[574] = 2*(params.lambda[0]*params.Sigma[395]+params.PM[395]);
  work.KKT[575] = 2*(params.lambda[0]*params.Sigma[425]+params.PM[425]);
  work.KKT[576] = 2*(params.lambda[0]*params.Sigma[455]+params.PM[455]);
  work.KKT[577] = 2*(params.lambda[0]*params.Sigma[485]+params.PM[485]);
  work.KKT[578] = 2*(params.lambda[0]*params.Sigma[515]+params.PM[515]);
  work.KKT[579] = 2*(params.lambda[0]*params.Sigma[545]+params.PM[545]);
  work.KKT[580] = 2*(params.lambda[0]*params.Sigma[575]+params.PM[575]);
  work.KKT[581] = 2*(params.lambda[0]*params.Sigma[605]+params.PM[605]);
  work.KKT[582] = 2*(params.lambda[0]*params.Sigma[635]+params.PM[635]);
  work.KKT[583] = 2*(params.lambda[0]*params.Sigma[665]+params.PM[665]);
  work.KKT[584] = 2*(params.lambda[0]*params.Sigma[695]+params.PM[695]);
  work.KKT[585] = 2*(params.lambda[0]*params.Sigma[725]+params.PM[725]);
  work.KKT[586] = 2*(params.lambda[0]*params.Sigma[755]+params.PM[755]);
  work.KKT[587] = 2*(params.lambda[0]*params.Sigma[785]+params.PM[785]);
  work.KKT[588] = 2*(params.lambda[0]*params.Sigma[815]+params.PM[815]);
  work.KKT[589] = 2*(params.lambda[0]*params.Sigma[845]+params.PM[845]);
  work.KKT[590] = 2*(params.lambda[0]*params.Sigma[875]+params.PM[875]);
  work.KKT[597] = 2*(params.S[6]+params.lambda[0]*params.Sigma[186]+params.PM[186]);
  work.KKT[598] = 2*(params.lambda[0]*params.Sigma[216]+params.PM[216]);
  work.KKT[599] = 2*(params.lambda[0]*params.Sigma[246]+params.PM[246]);
  work.KKT[600] = 2*(params.lambda[0]*params.Sigma[276]+params.PM[276]);
  work.KKT[601] = 2*(params.lambda[0]*params.Sigma[306]+params.PM[306]);
  work.KKT[602] = 2*(params.lambda[0]*params.Sigma[336]+params.PM[336]);
  work.KKT[603] = 2*(params.lambda[0]*params.Sigma[366]+params.PM[366]);
  work.KKT[604] = 2*(params.lambda[0]*params.Sigma[396]+params.PM[396]);
  work.KKT[605] = 2*(params.lambda[0]*params.Sigma[426]+params.PM[426]);
  work.KKT[606] = 2*(params.lambda[0]*params.Sigma[456]+params.PM[456]);
  work.KKT[607] = 2*(params.lambda[0]*params.Sigma[486]+params.PM[486]);
  work.KKT[608] = 2*(params.lambda[0]*params.Sigma[516]+params.PM[516]);
  work.KKT[609] = 2*(params.lambda[0]*params.Sigma[546]+params.PM[546]);
  work.KKT[610] = 2*(params.lambda[0]*params.Sigma[576]+params.PM[576]);
  work.KKT[611] = 2*(params.lambda[0]*params.Sigma[606]+params.PM[606]);
  work.KKT[612] = 2*(params.lambda[0]*params.Sigma[636]+params.PM[636]);
  work.KKT[613] = 2*(params.lambda[0]*params.Sigma[666]+params.PM[666]);
  work.KKT[614] = 2*(params.lambda[0]*params.Sigma[696]+params.PM[696]);
  work.KKT[615] = 2*(params.lambda[0]*params.Sigma[726]+params.PM[726]);
  work.KKT[616] = 2*(params.lambda[0]*params.Sigma[756]+params.PM[756]);
  work.KKT[617] = 2*(params.lambda[0]*params.Sigma[786]+params.PM[786]);
  work.KKT[618] = 2*(params.lambda[0]*params.Sigma[816]+params.PM[816]);
  work.KKT[619] = 2*(params.lambda[0]*params.Sigma[846]+params.PM[846]);
  work.KKT[620] = 2*(params.lambda[0]*params.Sigma[876]+params.PM[876]);
  work.KKT[627] = 2*(params.S[7]+params.lambda[0]*params.Sigma[217]+params.PM[217]);
  work.KKT[628] = 2*(params.lambda[0]*params.Sigma[247]+params.PM[247]);
  work.KKT[629] = 2*(params.lambda[0]*params.Sigma[277]+params.PM[277]);
  work.KKT[630] = 2*(params.lambda[0]*params.Sigma[307]+params.PM[307]);
  work.KKT[631] = 2*(params.lambda[0]*params.Sigma[337]+params.PM[337]);
  work.KKT[632] = 2*(params.lambda[0]*params.Sigma[367]+params.PM[367]);
  work.KKT[633] = 2*(params.lambda[0]*params.Sigma[397]+params.PM[397]);
  work.KKT[634] = 2*(params.lambda[0]*params.Sigma[427]+params.PM[427]);
  work.KKT[635] = 2*(params.lambda[0]*params.Sigma[457]+params.PM[457]);
  work.KKT[636] = 2*(params.lambda[0]*params.Sigma[487]+params.PM[487]);
  work.KKT[637] = 2*(params.lambda[0]*params.Sigma[517]+params.PM[517]);
  work.KKT[638] = 2*(params.lambda[0]*params.Sigma[547]+params.PM[547]);
  work.KKT[639] = 2*(params.lambda[0]*params.Sigma[577]+params.PM[577]);
  work.KKT[640] = 2*(params.lambda[0]*params.Sigma[607]+params.PM[607]);
  work.KKT[641] = 2*(params.lambda[0]*params.Sigma[637]+params.PM[637]);
  work.KKT[642] = 2*(params.lambda[0]*params.Sigma[667]+params.PM[667]);
  work.KKT[643] = 2*(params.lambda[0]*params.Sigma[697]+params.PM[697]);
  work.KKT[644] = 2*(params.lambda[0]*params.Sigma[727]+params.PM[727]);
  work.KKT[645] = 2*(params.lambda[0]*params.Sigma[757]+params.PM[757]);
  work.KKT[646] = 2*(params.lambda[0]*params.Sigma[787]+params.PM[787]);
  work.KKT[647] = 2*(params.lambda[0]*params.Sigma[817]+params.PM[817]);
  work.KKT[648] = 2*(params.lambda[0]*params.Sigma[847]+params.PM[847]);
  work.KKT[649] = 2*(params.lambda[0]*params.Sigma[877]+params.PM[877]);
  work.KKT[656] = 2*(params.S[8]+params.lambda[0]*params.Sigma[248]+params.PM[248]);
  work.KKT[657] = 2*(params.lambda[0]*params.Sigma[278]+params.PM[278]);
  work.KKT[658] = 2*(params.lambda[0]*params.Sigma[308]+params.PM[308]);
  work.KKT[659] = 2*(params.lambda[0]*params.Sigma[338]+params.PM[338]);
  work.KKT[660] = 2*(params.lambda[0]*params.Sigma[368]+params.PM[368]);
  work.KKT[661] = 2*(params.lambda[0]*params.Sigma[398]+params.PM[398]);
  work.KKT[662] = 2*(params.lambda[0]*params.Sigma[428]+params.PM[428]);
  work.KKT[663] = 2*(params.lambda[0]*params.Sigma[458]+params.PM[458]);
  work.KKT[664] = 2*(params.lambda[0]*params.Sigma[488]+params.PM[488]);
  work.KKT[665] = 2*(params.lambda[0]*params.Sigma[518]+params.PM[518]);
  work.KKT[666] = 2*(params.lambda[0]*params.Sigma[548]+params.PM[548]);
  work.KKT[667] = 2*(params.lambda[0]*params.Sigma[578]+params.PM[578]);
  work.KKT[668] = 2*(params.lambda[0]*params.Sigma[608]+params.PM[608]);
  work.KKT[669] = 2*(params.lambda[0]*params.Sigma[638]+params.PM[638]);
  work.KKT[670] = 2*(params.lambda[0]*params.Sigma[668]+params.PM[668]);
  work.KKT[671] = 2*(params.lambda[0]*params.Sigma[698]+params.PM[698]);
  work.KKT[672] = 2*(params.lambda[0]*params.Sigma[728]+params.PM[728]);
  work.KKT[673] = 2*(params.lambda[0]*params.Sigma[758]+params.PM[758]);
  work.KKT[674] = 2*(params.lambda[0]*params.Sigma[788]+params.PM[788]);
  work.KKT[675] = 2*(params.lambda[0]*params.Sigma[818]+params.PM[818]);
  work.KKT[676] = 2*(params.lambda[0]*params.Sigma[848]+params.PM[848]);
  work.KKT[677] = 2*(params.lambda[0]*params.Sigma[878]+params.PM[878]);
  work.KKT[684] = 2*(params.S[9]+params.lambda[0]*params.Sigma[279]+params.PM[279]);
  work.KKT[685] = 2*(params.lambda[0]*params.Sigma[309]+params.PM[309]);
  work.KKT[686] = 2*(params.lambda[0]*params.Sigma[339]+params.PM[339]);
  work.KKT[687] = 2*(params.lambda[0]*params.Sigma[369]+params.PM[369]);
  work.KKT[688] = 2*(params.lambda[0]*params.Sigma[399]+params.PM[399]);
  work.KKT[689] = 2*(params.lambda[0]*params.Sigma[429]+params.PM[429]);
  work.KKT[690] = 2*(params.lambda[0]*params.Sigma[459]+params.PM[459]);
  work.KKT[691] = 2*(params.lambda[0]*params.Sigma[489]+params.PM[489]);
  work.KKT[692] = 2*(params.lambda[0]*params.Sigma[519]+params.PM[519]);
  work.KKT[693] = 2*(params.lambda[0]*params.Sigma[549]+params.PM[549]);
  work.KKT[694] = 2*(params.lambda[0]*params.Sigma[579]+params.PM[579]);
  work.KKT[695] = 2*(params.lambda[0]*params.Sigma[609]+params.PM[609]);
  work.KKT[696] = 2*(params.lambda[0]*params.Sigma[639]+params.PM[639]);
  work.KKT[697] = 2*(params.lambda[0]*params.Sigma[669]+params.PM[669]);
  work.KKT[698] = 2*(params.lambda[0]*params.Sigma[699]+params.PM[699]);
  work.KKT[699] = 2*(params.lambda[0]*params.Sigma[729]+params.PM[729]);
  work.KKT[700] = 2*(params.lambda[0]*params.Sigma[759]+params.PM[759]);
  work.KKT[701] = 2*(params.lambda[0]*params.Sigma[789]+params.PM[789]);
  work.KKT[702] = 2*(params.lambda[0]*params.Sigma[819]+params.PM[819]);
  work.KKT[703] = 2*(params.lambda[0]*params.Sigma[849]+params.PM[849]);
  work.KKT[704] = 2*(params.lambda[0]*params.Sigma[879]+params.PM[879]);
  work.KKT[711] = 2*(params.S[10]+params.lambda[0]*params.Sigma[310]+params.PM[310]);
  work.KKT[712] = 2*(params.lambda[0]*params.Sigma[340]+params.PM[340]);
  work.KKT[713] = 2*(params.lambda[0]*params.Sigma[370]+params.PM[370]);
  work.KKT[714] = 2*(params.lambda[0]*params.Sigma[400]+params.PM[400]);
  work.KKT[715] = 2*(params.lambda[0]*params.Sigma[430]+params.PM[430]);
  work.KKT[716] = 2*(params.lambda[0]*params.Sigma[460]+params.PM[460]);
  work.KKT[717] = 2*(params.lambda[0]*params.Sigma[490]+params.PM[490]);
  work.KKT[718] = 2*(params.lambda[0]*params.Sigma[520]+params.PM[520]);
  work.KKT[719] = 2*(params.lambda[0]*params.Sigma[550]+params.PM[550]);
  work.KKT[720] = 2*(params.lambda[0]*params.Sigma[580]+params.PM[580]);
  work.KKT[721] = 2*(params.lambda[0]*params.Sigma[610]+params.PM[610]);
  work.KKT[722] = 2*(params.lambda[0]*params.Sigma[640]+params.PM[640]);
  work.KKT[723] = 2*(params.lambda[0]*params.Sigma[670]+params.PM[670]);
  work.KKT[724] = 2*(params.lambda[0]*params.Sigma[700]+params.PM[700]);
  work.KKT[725] = 2*(params.lambda[0]*params.Sigma[730]+params.PM[730]);
  work.KKT[726] = 2*(params.lambda[0]*params.Sigma[760]+params.PM[760]);
  work.KKT[727] = 2*(params.lambda[0]*params.Sigma[790]+params.PM[790]);
  work.KKT[728] = 2*(params.lambda[0]*params.Sigma[820]+params.PM[820]);
  work.KKT[729] = 2*(params.lambda[0]*params.Sigma[850]+params.PM[850]);
  work.KKT[730] = 2*(params.lambda[0]*params.Sigma[880]+params.PM[880]);
  work.KKT[737] = 2*(params.S[11]+params.lambda[0]*params.Sigma[341]+params.PM[341]);
  work.KKT[738] = 2*(params.lambda[0]*params.Sigma[371]+params.PM[371]);
  work.KKT[739] = 2*(params.lambda[0]*params.Sigma[401]+params.PM[401]);
  work.KKT[740] = 2*(params.lambda[0]*params.Sigma[431]+params.PM[431]);
  work.KKT[741] = 2*(params.lambda[0]*params.Sigma[461]+params.PM[461]);
  work.KKT[742] = 2*(params.lambda[0]*params.Sigma[491]+params.PM[491]);
  work.KKT[743] = 2*(params.lambda[0]*params.Sigma[521]+params.PM[521]);
  work.KKT[744] = 2*(params.lambda[0]*params.Sigma[551]+params.PM[551]);
  work.KKT[745] = 2*(params.lambda[0]*params.Sigma[581]+params.PM[581]);
  work.KKT[746] = 2*(params.lambda[0]*params.Sigma[611]+params.PM[611]);
  work.KKT[747] = 2*(params.lambda[0]*params.Sigma[641]+params.PM[641]);
  work.KKT[748] = 2*(params.lambda[0]*params.Sigma[671]+params.PM[671]);
  work.KKT[749] = 2*(params.lambda[0]*params.Sigma[701]+params.PM[701]);
  work.KKT[750] = 2*(params.lambda[0]*params.Sigma[731]+params.PM[731]);
  work.KKT[751] = 2*(params.lambda[0]*params.Sigma[761]+params.PM[761]);
  work.KKT[752] = 2*(params.lambda[0]*params.Sigma[791]+params.PM[791]);
  work.KKT[753] = 2*(params.lambda[0]*params.Sigma[821]+params.PM[821]);
  work.KKT[754] = 2*(params.lambda[0]*params.Sigma[851]+params.PM[851]);
  work.KKT[755] = 2*(params.lambda[0]*params.Sigma[881]+params.PM[881]);
  work.KKT[762] = 2*(params.S[12]+params.lambda[0]*params.Sigma[372]+params.PM[372]);
  work.KKT[763] = 2*(params.lambda[0]*params.Sigma[402]+params.PM[402]);
  work.KKT[764] = 2*(params.lambda[0]*params.Sigma[432]+params.PM[432]);
  work.KKT[765] = 2*(params.lambda[0]*params.Sigma[462]+params.PM[462]);
  work.KKT[766] = 2*(params.lambda[0]*params.Sigma[492]+params.PM[492]);
  work.KKT[767] = 2*(params.lambda[0]*params.Sigma[522]+params.PM[522]);
  work.KKT[768] = 2*(params.lambda[0]*params.Sigma[552]+params.PM[552]);
  work.KKT[769] = 2*(params.lambda[0]*params.Sigma[582]+params.PM[582]);
  work.KKT[770] = 2*(params.lambda[0]*params.Sigma[612]+params.PM[612]);
  work.KKT[771] = 2*(params.lambda[0]*params.Sigma[642]+params.PM[642]);
  work.KKT[772] = 2*(params.lambda[0]*params.Sigma[672]+params.PM[672]);
  work.KKT[773] = 2*(params.lambda[0]*params.Sigma[702]+params.PM[702]);
  work.KKT[774] = 2*(params.lambda[0]*params.Sigma[732]+params.PM[732]);
  work.KKT[775] = 2*(params.lambda[0]*params.Sigma[762]+params.PM[762]);
  work.KKT[776] = 2*(params.lambda[0]*params.Sigma[792]+params.PM[792]);
  work.KKT[777] = 2*(params.lambda[0]*params.Sigma[822]+params.PM[822]);
  work.KKT[778] = 2*(params.lambda[0]*params.Sigma[852]+params.PM[852]);
  work.KKT[779] = 2*(params.lambda[0]*params.Sigma[882]+params.PM[882]);
  work.KKT[786] = 2*(params.S[13]+params.lambda[0]*params.Sigma[403]+params.PM[403]);
  work.KKT[787] = 2*(params.lambda[0]*params.Sigma[433]+params.PM[433]);
  work.KKT[788] = 2*(params.lambda[0]*params.Sigma[463]+params.PM[463]);
  work.KKT[789] = 2*(params.lambda[0]*params.Sigma[493]+params.PM[493]);
  work.KKT[790] = 2*(params.lambda[0]*params.Sigma[523]+params.PM[523]);
  work.KKT[791] = 2*(params.lambda[0]*params.Sigma[553]+params.PM[553]);
  work.KKT[792] = 2*(params.lambda[0]*params.Sigma[583]+params.PM[583]);
  work.KKT[793] = 2*(params.lambda[0]*params.Sigma[613]+params.PM[613]);
  work.KKT[794] = 2*(params.lambda[0]*params.Sigma[643]+params.PM[643]);
  work.KKT[795] = 2*(params.lambda[0]*params.Sigma[673]+params.PM[673]);
  work.KKT[796] = 2*(params.lambda[0]*params.Sigma[703]+params.PM[703]);
  work.KKT[797] = 2*(params.lambda[0]*params.Sigma[733]+params.PM[733]);
  work.KKT[798] = 2*(params.lambda[0]*params.Sigma[763]+params.PM[763]);
  work.KKT[799] = 2*(params.lambda[0]*params.Sigma[793]+params.PM[793]);
  work.KKT[800] = 2*(params.lambda[0]*params.Sigma[823]+params.PM[823]);
  work.KKT[801] = 2*(params.lambda[0]*params.Sigma[853]+params.PM[853]);
  work.KKT[802] = 2*(params.lambda[0]*params.Sigma[883]+params.PM[883]);
  work.KKT[809] = 2*(params.S[14]+params.lambda[0]*params.Sigma[434]+params.PM[434]);
  work.KKT[810] = 2*(params.lambda[0]*params.Sigma[464]+params.PM[464]);
  work.KKT[811] = 2*(params.lambda[0]*params.Sigma[494]+params.PM[494]);
  work.KKT[812] = 2*(params.lambda[0]*params.Sigma[524]+params.PM[524]);
  work.KKT[813] = 2*(params.lambda[0]*params.Sigma[554]+params.PM[554]);
  work.KKT[814] = 2*(params.lambda[0]*params.Sigma[584]+params.PM[584]);
  work.KKT[815] = 2*(params.lambda[0]*params.Sigma[614]+params.PM[614]);
  work.KKT[816] = 2*(params.lambda[0]*params.Sigma[644]+params.PM[644]);
  work.KKT[817] = 2*(params.lambda[0]*params.Sigma[674]+params.PM[674]);
  work.KKT[818] = 2*(params.lambda[0]*params.Sigma[704]+params.PM[704]);
  work.KKT[819] = 2*(params.lambda[0]*params.Sigma[734]+params.PM[734]);
  work.KKT[820] = 2*(params.lambda[0]*params.Sigma[764]+params.PM[764]);
  work.KKT[821] = 2*(params.lambda[0]*params.Sigma[794]+params.PM[794]);
  work.KKT[822] = 2*(params.lambda[0]*params.Sigma[824]+params.PM[824]);
  work.KKT[823] = 2*(params.lambda[0]*params.Sigma[854]+params.PM[854]);
  work.KKT[824] = 2*(params.lambda[0]*params.Sigma[884]+params.PM[884]);
  work.KKT[831] = 2*(params.S[15]+params.lambda[0]*params.Sigma[465]+params.PM[465]);
  work.KKT[832] = 2*(params.lambda[0]*params.Sigma[495]+params.PM[495]);
  work.KKT[833] = 2*(params.lambda[0]*params.Sigma[525]+params.PM[525]);
  work.KKT[834] = 2*(params.lambda[0]*params.Sigma[555]+params.PM[555]);
  work.KKT[835] = 2*(params.lambda[0]*params.Sigma[585]+params.PM[585]);
  work.KKT[836] = 2*(params.lambda[0]*params.Sigma[615]+params.PM[615]);
  work.KKT[837] = 2*(params.lambda[0]*params.Sigma[645]+params.PM[645]);
  work.KKT[838] = 2*(params.lambda[0]*params.Sigma[675]+params.PM[675]);
  work.KKT[839] = 2*(params.lambda[0]*params.Sigma[705]+params.PM[705]);
  work.KKT[840] = 2*(params.lambda[0]*params.Sigma[735]+params.PM[735]);
  work.KKT[841] = 2*(params.lambda[0]*params.Sigma[765]+params.PM[765]);
  work.KKT[842] = 2*(params.lambda[0]*params.Sigma[795]+params.PM[795]);
  work.KKT[843] = 2*(params.lambda[0]*params.Sigma[825]+params.PM[825]);
  work.KKT[844] = 2*(params.lambda[0]*params.Sigma[855]+params.PM[855]);
  work.KKT[845] = 2*(params.lambda[0]*params.Sigma[885]+params.PM[885]);
  work.KKT[852] = 2*(params.S[16]+params.lambda[0]*params.Sigma[496]+params.PM[496]);
  work.KKT[853] = 2*(params.lambda[0]*params.Sigma[526]+params.PM[526]);
  work.KKT[854] = 2*(params.lambda[0]*params.Sigma[556]+params.PM[556]);
  work.KKT[855] = 2*(params.lambda[0]*params.Sigma[586]+params.PM[586]);
  work.KKT[856] = 2*(params.lambda[0]*params.Sigma[616]+params.PM[616]);
  work.KKT[857] = 2*(params.lambda[0]*params.Sigma[646]+params.PM[646]);
  work.KKT[858] = 2*(params.lambda[0]*params.Sigma[676]+params.PM[676]);
  work.KKT[859] = 2*(params.lambda[0]*params.Sigma[706]+params.PM[706]);
  work.KKT[860] = 2*(params.lambda[0]*params.Sigma[736]+params.PM[736]);
  work.KKT[861] = 2*(params.lambda[0]*params.Sigma[766]+params.PM[766]);
  work.KKT[862] = 2*(params.lambda[0]*params.Sigma[796]+params.PM[796]);
  work.KKT[863] = 2*(params.lambda[0]*params.Sigma[826]+params.PM[826]);
  work.KKT[864] = 2*(params.lambda[0]*params.Sigma[856]+params.PM[856]);
  work.KKT[865] = 2*(params.lambda[0]*params.Sigma[886]+params.PM[886]);
  work.KKT[872] = 2*(params.S[17]+params.lambda[0]*params.Sigma[527]+params.PM[527]);
  work.KKT[873] = 2*(params.lambda[0]*params.Sigma[557]+params.PM[557]);
  work.KKT[874] = 2*(params.lambda[0]*params.Sigma[587]+params.PM[587]);
  work.KKT[875] = 2*(params.lambda[0]*params.Sigma[617]+params.PM[617]);
  work.KKT[876] = 2*(params.lambda[0]*params.Sigma[647]+params.PM[647]);
  work.KKT[877] = 2*(params.lambda[0]*params.Sigma[677]+params.PM[677]);
  work.KKT[878] = 2*(params.lambda[0]*params.Sigma[707]+params.PM[707]);
  work.KKT[879] = 2*(params.lambda[0]*params.Sigma[737]+params.PM[737]);
  work.KKT[880] = 2*(params.lambda[0]*params.Sigma[767]+params.PM[767]);
  work.KKT[881] = 2*(params.lambda[0]*params.Sigma[797]+params.PM[797]);
  work.KKT[882] = 2*(params.lambda[0]*params.Sigma[827]+params.PM[827]);
  work.KKT[883] = 2*(params.lambda[0]*params.Sigma[857]+params.PM[857]);
  work.KKT[884] = 2*(params.lambda[0]*params.Sigma[887]+params.PM[887]);
  work.KKT[891] = 2*(params.S[18]+params.lambda[0]*params.Sigma[558]+params.PM[558]);
  work.KKT[892] = 2*(params.lambda[0]*params.Sigma[588]+params.PM[588]);
  work.KKT[893] = 2*(params.lambda[0]*params.Sigma[618]+params.PM[618]);
  work.KKT[894] = 2*(params.lambda[0]*params.Sigma[648]+params.PM[648]);
  work.KKT[895] = 2*(params.lambda[0]*params.Sigma[678]+params.PM[678]);
  work.KKT[896] = 2*(params.lambda[0]*params.Sigma[708]+params.PM[708]);
  work.KKT[897] = 2*(params.lambda[0]*params.Sigma[738]+params.PM[738]);
  work.KKT[898] = 2*(params.lambda[0]*params.Sigma[768]+params.PM[768]);
  work.KKT[899] = 2*(params.lambda[0]*params.Sigma[798]+params.PM[798]);
  work.KKT[900] = 2*(params.lambda[0]*params.Sigma[828]+params.PM[828]);
  work.KKT[901] = 2*(params.lambda[0]*params.Sigma[858]+params.PM[858]);
  work.KKT[902] = 2*(params.lambda[0]*params.Sigma[888]+params.PM[888]);
  work.KKT[909] = 2*(params.S[19]+params.lambda[0]*params.Sigma[589]+params.PM[589]);
  work.KKT[910] = 2*(params.lambda[0]*params.Sigma[619]+params.PM[619]);
  work.KKT[911] = 2*(params.lambda[0]*params.Sigma[649]+params.PM[649]);
  work.KKT[912] = 2*(params.lambda[0]*params.Sigma[679]+params.PM[679]);
  work.KKT[913] = 2*(params.lambda[0]*params.Sigma[709]+params.PM[709]);
  work.KKT[914] = 2*(params.lambda[0]*params.Sigma[739]+params.PM[739]);
  work.KKT[915] = 2*(params.lambda[0]*params.Sigma[769]+params.PM[769]);
  work.KKT[916] = 2*(params.lambda[0]*params.Sigma[799]+params.PM[799]);
  work.KKT[917] = 2*(params.lambda[0]*params.Sigma[829]+params.PM[829]);
  work.KKT[918] = 2*(params.lambda[0]*params.Sigma[859]+params.PM[859]);
  work.KKT[919] = 2*(params.lambda[0]*params.Sigma[889]+params.PM[889]);
  work.KKT[926] = 2*(params.S[20]+params.lambda[0]*params.Sigma[620]+params.PM[620]);
  work.KKT[927] = 2*(params.lambda[0]*params.Sigma[650]+params.PM[650]);
  work.KKT[928] = 2*(params.lambda[0]*params.Sigma[680]+params.PM[680]);
  work.KKT[929] = 2*(params.lambda[0]*params.Sigma[710]+params.PM[710]);
  work.KKT[930] = 2*(params.lambda[0]*params.Sigma[740]+params.PM[740]);
  work.KKT[931] = 2*(params.lambda[0]*params.Sigma[770]+params.PM[770]);
  work.KKT[932] = 2*(params.lambda[0]*params.Sigma[800]+params.PM[800]);
  work.KKT[933] = 2*(params.lambda[0]*params.Sigma[830]+params.PM[830]);
  work.KKT[934] = 2*(params.lambda[0]*params.Sigma[860]+params.PM[860]);
  work.KKT[935] = 2*(params.lambda[0]*params.Sigma[890]+params.PM[890]);
  work.KKT[942] = 2*(params.S[21]+params.lambda[0]*params.Sigma[651]+params.PM[651]);
  work.KKT[943] = 2*(params.lambda[0]*params.Sigma[681]+params.PM[681]);
  work.KKT[944] = 2*(params.lambda[0]*params.Sigma[711]+params.PM[711]);
  work.KKT[945] = 2*(params.lambda[0]*params.Sigma[741]+params.PM[741]);
  work.KKT[946] = 2*(params.lambda[0]*params.Sigma[771]+params.PM[771]);
  work.KKT[947] = 2*(params.lambda[0]*params.Sigma[801]+params.PM[801]);
  work.KKT[948] = 2*(params.lambda[0]*params.Sigma[831]+params.PM[831]);
  work.KKT[949] = 2*(params.lambda[0]*params.Sigma[861]+params.PM[861]);
  work.KKT[950] = 2*(params.lambda[0]*params.Sigma[891]+params.PM[891]);
  work.KKT[957] = 2*(params.S[22]+params.lambda[0]*params.Sigma[682]+params.PM[682]);
  work.KKT[958] = 2*(params.lambda[0]*params.Sigma[712]+params.PM[712]);
  work.KKT[959] = 2*(params.lambda[0]*params.Sigma[742]+params.PM[742]);
  work.KKT[960] = 2*(params.lambda[0]*params.Sigma[772]+params.PM[772]);
  work.KKT[961] = 2*(params.lambda[0]*params.Sigma[802]+params.PM[802]);
  work.KKT[962] = 2*(params.lambda[0]*params.Sigma[832]+params.PM[832]);
  work.KKT[963] = 2*(params.lambda[0]*params.Sigma[862]+params.PM[862]);
  work.KKT[964] = 2*(params.lambda[0]*params.Sigma[892]+params.PM[892]);
  work.KKT[971] = 2*(params.S[23]+params.lambda[0]*params.Sigma[713]+params.PM[713]);
  work.KKT[972] = 2*(params.lambda[0]*params.Sigma[743]+params.PM[743]);
  work.KKT[973] = 2*(params.lambda[0]*params.Sigma[773]+params.PM[773]);
  work.KKT[974] = 2*(params.lambda[0]*params.Sigma[803]+params.PM[803]);
  work.KKT[975] = 2*(params.lambda[0]*params.Sigma[833]+params.PM[833]);
  work.KKT[976] = 2*(params.lambda[0]*params.Sigma[863]+params.PM[863]);
  work.KKT[977] = 2*(params.lambda[0]*params.Sigma[893]+params.PM[893]);
  work.KKT[984] = 2*(params.S[24]+params.lambda[0]*params.Sigma[744]+params.PM[744]);
  work.KKT[985] = 2*(params.lambda[0]*params.Sigma[774]+params.PM[774]);
  work.KKT[986] = 2*(params.lambda[0]*params.Sigma[804]+params.PM[804]);
  work.KKT[987] = 2*(params.lambda[0]*params.Sigma[834]+params.PM[834]);
  work.KKT[988] = 2*(params.lambda[0]*params.Sigma[864]+params.PM[864]);
  work.KKT[989] = 2*(params.lambda[0]*params.Sigma[894]+params.PM[894]);
  work.KKT[996] = 2*(params.S[25]+params.lambda[0]*params.Sigma[775]+params.PM[775]);
  work.KKT[997] = 2*(params.lambda[0]*params.Sigma[805]+params.PM[805]);
  work.KKT[998] = 2*(params.lambda[0]*params.Sigma[835]+params.PM[835]);
  work.KKT[999] = 2*(params.lambda[0]*params.Sigma[865]+params.PM[865]);
  work.KKT[1000] = 2*(params.lambda[0]*params.Sigma[895]+params.PM[895]);
  work.KKT[1007] = 2*(params.S[26]+params.lambda[0]*params.Sigma[806]+params.PM[806]);
  work.KKT[1008] = 2*(params.lambda[0]*params.Sigma[836]+params.PM[836]);
  work.KKT[1009] = 2*(params.lambda[0]*params.Sigma[866]+params.PM[866]);
  work.KKT[1010] = 2*(params.lambda[0]*params.Sigma[896]+params.PM[896]);
  work.KKT[1017] = 2*(params.S[27]+params.lambda[0]*params.Sigma[837]+params.PM[837]);
  work.KKT[1018] = 2*(params.lambda[0]*params.Sigma[867]+params.PM[867]);
  work.KKT[1019] = 2*(params.lambda[0]*params.Sigma[897]+params.PM[897]);
  work.KKT[1026] = 2*(params.S[28]+params.lambda[0]*params.Sigma[868]+params.PM[868]);
  work.KKT[1027] = 2*(params.lambda[0]*params.Sigma[898]+params.PM[898]);
  work.KKT[1030] = 2*(params.S[29]+params.lambda[0]*params.Sigma[899]+params.PM[899]);
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
  work.KKT[243] = work.block_33[0];
  work.KKT[248] = work.block_33[0];
  work.KKT[253] = work.block_33[0];
  work.KKT[258] = work.block_33[0];
  work.KKT[263] = work.block_33[0];
  work.KKT[268] = work.block_33[0];
  work.KKT[273] = work.block_33[0];
  work.KKT[278] = work.block_33[0];
  work.KKT[283] = work.block_33[0];
  work.KKT[288] = work.block_33[0];
  work.KKT[293] = work.block_33[0];
  work.KKT[298] = work.block_33[0];
  work.KKT[303] = work.block_33[0];
  work.KKT[308] = work.block_33[0];
  work.KKT[313] = work.block_33[0];
  work.KKT[318] = work.block_33[0];
  work.KKT[323] = work.block_33[0];
  work.KKT[328] = work.block_33[0];
  work.KKT[333] = work.block_33[0];
  work.KKT[338] = work.block_33[0];
  work.KKT[343] = work.block_33[0];
  work.KKT[348] = work.block_33[0];
  work.KKT[353] = work.block_33[0];
  work.KKT[358] = work.block_33[0];
  work.KKT[363] = work.block_33[0];
  work.KKT[368] = work.block_33[0];
  work.KKT[373] = work.block_33[0];
  work.KKT[378] = work.block_33[0];
  work.KKT[383] = work.block_33[0];
  work.KKT[388] = work.block_33[0];
  work.KKT[242] = work.block_33[0];
  work.KKT[247] = work.block_33[0];
  work.KKT[252] = work.block_33[0];
  work.KKT[257] = work.block_33[0];
  work.KKT[262] = work.block_33[0];
  work.KKT[267] = work.block_33[0];
  work.KKT[272] = work.block_33[0];
  work.KKT[277] = work.block_33[0];
  work.KKT[282] = work.block_33[0];
  work.KKT[287] = work.block_33[0];
  work.KKT[292] = work.block_33[0];
  work.KKT[297] = work.block_33[0];
  work.KKT[302] = work.block_33[0];
  work.KKT[307] = work.block_33[0];
  work.KKT[312] = work.block_33[0];
  work.KKT[317] = work.block_33[0];
  work.KKT[322] = work.block_33[0];
  work.KKT[327] = work.block_33[0];
  work.KKT[332] = work.block_33[0];
  work.KKT[337] = work.block_33[0];
  work.KKT[342] = work.block_33[0];
  work.KKT[347] = work.block_33[0];
  work.KKT[352] = work.block_33[0];
  work.KKT[357] = work.block_33[0];
  work.KKT[362] = work.block_33[0];
  work.KKT[367] = work.block_33[0];
  work.KKT[372] = work.block_33[0];
  work.KKT[377] = work.block_33[0];
  work.KKT[382] = work.block_33[0];
  work.KKT[387] = work.block_33[0];
  work.KKT[392] = work.block_33[0];
  work.KKT[428] = work.block_33[0];
  work.KKT[463] = work.block_33[0];
  work.KKT[497] = work.block_33[0];
  work.KKT[530] = work.block_33[0];
  work.KKT[562] = work.block_33[0];
  work.KKT[593] = work.block_33[0];
  work.KKT[623] = work.block_33[0];
  work.KKT[652] = work.block_33[0];
  work.KKT[680] = work.block_33[0];
  work.KKT[707] = work.block_33[0];
  work.KKT[733] = work.block_33[0];
  work.KKT[758] = work.block_33[0];
  work.KKT[782] = work.block_33[0];
  work.KKT[805] = work.block_33[0];
  work.KKT[827] = work.block_33[0];
  work.KKT[848] = work.block_33[0];
  work.KKT[868] = work.block_33[0];
  work.KKT[887] = work.block_33[0];
  work.KKT[905] = work.block_33[0];
  work.KKT[922] = work.block_33[0];
  work.KKT[938] = work.block_33[0];
  work.KKT[953] = work.block_33[0];
  work.KKT[967] = work.block_33[0];
  work.KKT[980] = work.block_33[0];
  work.KKT[992] = work.block_33[0];
  work.KKT[1003] = work.block_33[0];
  work.KKT[1013] = work.block_33[0];
  work.KKT[1022] = work.block_33[0];
  work.KKT[1033] = work.block_33[0];
  work.KKT[394] = work.block_33[0];
  work.KKT[430] = work.block_33[0];
  work.KKT[465] = work.block_33[0];
  work.KKT[499] = work.block_33[0];
  work.KKT[532] = work.block_33[0];
  work.KKT[564] = work.block_33[0];
  work.KKT[595] = work.block_33[0];
  work.KKT[625] = work.block_33[0];
  work.KKT[654] = work.block_33[0];
  work.KKT[682] = work.block_33[0];
  work.KKT[709] = work.block_33[0];
  work.KKT[735] = work.block_33[0];
  work.KKT[760] = work.block_33[0];
  work.KKT[784] = work.block_33[0];
  work.KKT[807] = work.block_33[0];
  work.KKT[829] = work.block_33[0];
  work.KKT[850] = work.block_33[0];
  work.KKT[870] = work.block_33[0];
  work.KKT[889] = work.block_33[0];
  work.KKT[907] = work.block_33[0];
  work.KKT[924] = work.block_33[0];
  work.KKT[940] = work.block_33[0];
  work.KKT[955] = work.block_33[0];
  work.KKT[969] = work.block_33[0];
  work.KKT[982] = work.block_33[0];
  work.KKT[994] = work.block_33[0];
  work.KKT[1005] = work.block_33[0];
  work.KKT[1015] = work.block_33[0];
  work.KKT[1024] = work.block_33[0];
  work.KKT[1034] = work.block_33[0];
  work.KKT[241] = -1;
  work.KKT[246] = -1;
  work.KKT[251] = -1;
  work.KKT[256] = -1;
  work.KKT[261] = -1;
  work.KKT[266] = -1;
  work.KKT[271] = -1;
  work.KKT[276] = -1;
  work.KKT[281] = -1;
  work.KKT[286] = -1;
  work.KKT[291] = -1;
  work.KKT[296] = -1;
  work.KKT[301] = -1;
  work.KKT[306] = -1;
  work.KKT[311] = -1;
  work.KKT[316] = -1;
  work.KKT[321] = -1;
  work.KKT[326] = -1;
  work.KKT[331] = -1;
  work.KKT[336] = -1;
  work.KKT[341] = -1;
  work.KKT[346] = -1;
  work.KKT[351] = -1;
  work.KKT[356] = -1;
  work.KKT[361] = -1;
  work.KKT[366] = -1;
  work.KKT[371] = -1;
  work.KKT[376] = -1;
  work.KKT[381] = -1;
  work.KKT[386] = -1;
  work.KKT[244] = -1;
  work.KKT[249] = -1;
  work.KKT[254] = -1;
  work.KKT[259] = -1;
  work.KKT[264] = -1;
  work.KKT[269] = -1;
  work.KKT[274] = -1;
  work.KKT[279] = -1;
  work.KKT[284] = -1;
  work.KKT[289] = -1;
  work.KKT[294] = -1;
  work.KKT[299] = -1;
  work.KKT[304] = -1;
  work.KKT[309] = -1;
  work.KKT[314] = -1;
  work.KKT[319] = -1;
  work.KKT[324] = -1;
  work.KKT[329] = -1;
  work.KKT[334] = -1;
  work.KKT[339] = -1;
  work.KKT[344] = -1;
  work.KKT[349] = -1;
  work.KKT[354] = -1;
  work.KKT[359] = -1;
  work.KKT[364] = -1;
  work.KKT[369] = -1;
  work.KKT[374] = -1;
  work.KKT[379] = -1;
  work.KKT[384] = -1;
  work.KKT[389] = -1;
  work.KKT[240] = -1;
  work.KKT[245] = -1;
  work.KKT[250] = -1;
  work.KKT[255] = -1;
  work.KKT[260] = -1;
  work.KKT[265] = -1;
  work.KKT[270] = -1;
  work.KKT[275] = -1;
  work.KKT[280] = -1;
  work.KKT[285] = -1;
  work.KKT[290] = -1;
  work.KKT[295] = -1;
  work.KKT[300] = -1;
  work.KKT[305] = -1;
  work.KKT[310] = -1;
  work.KKT[315] = -1;
  work.KKT[320] = -1;
  work.KKT[325] = -1;
  work.KKT[330] = -1;
  work.KKT[335] = -1;
  work.KKT[340] = -1;
  work.KKT[345] = -1;
  work.KKT[350] = -1;
  work.KKT[355] = -1;
  work.KKT[360] = -1;
  work.KKT[365] = -1;
  work.KKT[370] = -1;
  work.KKT[375] = -1;
  work.KKT[380] = -1;
  work.KKT[385] = -1;
  work.KKT[390] = -1;
  work.KKT[426] = -1;
  work.KKT[461] = -1;
  work.KKT[495] = -1;
  work.KKT[528] = -1;
  work.KKT[560] = -1;
  work.KKT[591] = -1;
  work.KKT[621] = -1;
  work.KKT[650] = -1;
  work.KKT[678] = -1;
  work.KKT[705] = -1;
  work.KKT[731] = -1;
  work.KKT[756] = -1;
  work.KKT[780] = -1;
  work.KKT[803] = -1;
  work.KKT[825] = -1;
  work.KKT[846] = -1;
  work.KKT[866] = -1;
  work.KKT[885] = -1;
  work.KKT[903] = -1;
  work.KKT[920] = -1;
  work.KKT[936] = -1;
  work.KKT[951] = -1;
  work.KKT[965] = -1;
  work.KKT[978] = -1;
  work.KKT[990] = -1;
  work.KKT[1001] = -1;
  work.KKT[1011] = -1;
  work.KKT[1020] = -1;
  work.KKT[1028] = -1;
  work.KKT[393] = 1;
  work.KKT[429] = 1;
  work.KKT[464] = 1;
  work.KKT[498] = 1;
  work.KKT[531] = 1;
  work.KKT[563] = 1;
  work.KKT[594] = 1;
  work.KKT[624] = 1;
  work.KKT[653] = 1;
  work.KKT[681] = 1;
  work.KKT[708] = 1;
  work.KKT[734] = 1;
  work.KKT[759] = 1;
  work.KKT[783] = 1;
  work.KKT[806] = 1;
  work.KKT[828] = 1;
  work.KKT[849] = 1;
  work.KKT[869] = 1;
  work.KKT[888] = 1;
  work.KKT[906] = 1;
  work.KKT[923] = 1;
  work.KKT[939] = 1;
  work.KKT[954] = 1;
  work.KKT[968] = 1;
  work.KKT[981] = 1;
  work.KKT[993] = 1;
  work.KKT[1004] = 1;
  work.KKT[1014] = 1;
  work.KKT[1023] = 1;
  work.KKT[1031] = 1;
  work.KKT[391] = -1;
  work.KKT[427] = -1;
  work.KKT[462] = -1;
  work.KKT[496] = -1;
  work.KKT[529] = -1;
  work.KKT[561] = -1;
  work.KKT[592] = -1;
  work.KKT[622] = -1;
  work.KKT[651] = -1;
  work.KKT[679] = -1;
  work.KKT[706] = -1;
  work.KKT[732] = -1;
  work.KKT[757] = -1;
  work.KKT[781] = -1;
  work.KKT[804] = -1;
  work.KKT[826] = -1;
  work.KKT[847] = -1;
  work.KKT[867] = -1;
  work.KKT[886] = -1;
  work.KKT[904] = -1;
  work.KKT[921] = -1;
  work.KKT[937] = -1;
  work.KKT[952] = -1;
  work.KKT[966] = -1;
  work.KKT[979] = -1;
  work.KKT[991] = -1;
  work.KKT[1002] = -1;
  work.KKT[1012] = -1;
  work.KKT[1021] = -1;
  work.KKT[1029] = -1;
  work.KKT[395] = -1;
  work.KKT[431] = -1;
  work.KKT[466] = -1;
  work.KKT[500] = -1;
  work.KKT[533] = -1;
  work.KKT[565] = -1;
  work.KKT[596] = -1;
  work.KKT[626] = -1;
  work.KKT[655] = -1;
  work.KKT[683] = -1;
  work.KKT[710] = -1;
  work.KKT[736] = -1;
  work.KKT[761] = -1;
  work.KKT[785] = -1;
  work.KKT[808] = -1;
  work.KKT[830] = -1;
  work.KKT[851] = -1;
  work.KKT[871] = -1;
  work.KKT[890] = -1;
  work.KKT[908] = -1;
  work.KKT[925] = -1;
  work.KKT[941] = -1;
  work.KKT[956] = -1;
  work.KKT[970] = -1;
  work.KKT[983] = -1;
  work.KKT[995] = -1;
  work.KKT[1006] = -1;
  work.KKT[1016] = -1;
  work.KKT[1025] = -1;
  work.KKT[1032] = -1;
}

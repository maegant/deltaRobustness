/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:39 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  double t31;
  double t166;
  double t291;
  double t381;
  double t504;
  double t660;
  double t832;
  double t903;
  double t942;
  double t1041;
  double t1148;
  double t1551;
  double t1594;
  double t1713;
  double t1726;
  double t1855;
  double t1994;
  double t2128;
  double t2147;
  double t2241;
  double t2415;
  double t2452;
  double t2504;
  double t2511;
  double t2537;
  double t2562;
  double t2638;
  double t2677;
  double t2712;
  double t2831;
  double t3112;
  double t3135;
  double t3143;
  double t3154;
  double t3168;
  double t3201;
  double t3262;
  double t3345;
  double t3465;
  double t3684;
  double t3857;
  double t3870;
  double t3877;
  double t3109;
  double t3891;
  double t3892;
  double t3895;
  double t3916;
  double t4092;
  double t3927;
  double t3956;
  double t3999;
  double t4017;
  double t4031;
  double t4053;
  double t4073;
  double t4083;
  double t4100;
  double t4116;
  double t4184;
  double t4617;
  double t4628;
  double t4632;
  double t4633;
  double t4738;
  double t4742;
  double t4746;
  double t4750;
  double t4760;
  double t4808;
  double t4818;
  double t4837;
  double t4843;
  double t5000;
  double t5013;
  double t5021;
  double t5043;
  double t5054;
  double t5092;
  double t5106;
  double t5109;
  double t5135;
  double t5138;
  double t5140;
  double t5151;
  double t5153;
  double t4936;
  double t5175;
  double t5193;
  double t5195;
  double t5221;
  double t5222;
  double t5226;
  double t5239;
  double t5246;
  double t5248;
  double t5256;
  double t5257;
  double t5261;
  double t5265;
  double t5530;
  double t5531;
  double t5570;
  double t5573;
  double t5575;
  double t5583;
  double t5585;
  double t5589;
  double t5593;
  double t5602;
  double t5604;
  double t5609;
  double t5610;
  double t5634;
  double t5636;
  double t5647;
  double t5648;
  double t5687;
  double t5692;
  double t5717;
  double t5734;
  double t5736;
  double t5737;
  double t5762;
  double t5765;
  double t5772;
  double t5633;
  double t5800;
  double t5803;
  double t5806;
  double t5820;
  double t5821;
  double t5835;
  double t5836;
  double t5848;
  double t5856;
  double t5893;
  double t5897;
  double t5899;
  double t5902;
  double t5906;
  double t6122;
  double t6140;
  double t6146;
  double t6166;
  double t6167;
  double t6170;
  double t6176;
  double t6177;
  double t6187;
  double t6189;
  double t6191;
  double t6192;
  double t6195;
  double t6235;
  double t6236;
  double t6241;
  double t6269;
  double t6270;
  double t6273;
  double t6316;
  double t6318;
  double t6320;
  double t6323;
  double t6324;
  double t6331;
  double t6334;
  double t6230;
  double t6338;
  double t6340;
  double t6342;
  double t6376;
  double t6377;
  double t6385;
  double t6395;
  double t6397;
  double t6410;
  double t6414;
  double t6424;
  double t6431;
  double t6443;
  double t6447;
  t31 = -1.*var5[1];
  t166 = var5[0] + t31;
  t291 = Power(t166,-2);
  t381 = 1/t166;
  t504 = 0.8731249999999999*var1[2];
  t660 = 0.8731249999999999*var1[5];
  t832 = 0.46672499999999995*var1[6];
  t903 = t31 + t504 + t660 + t832;
  t942 = -1.*t381*t903;
  t1041 = 1. + t942;
  t1148 = Power(t1041,3);
  t1551 = Power(t166,-3);
  t1594 = Power(t1041,2);
  t1713 = Power(t166,-4);
  t1726 = Power(t903,2);
  t1855 = Power(t166,-5);
  t1994 = Power(t903,3);
  t2128 = 8.150185312499998*var4[0]*t291*t1148;
  t2147 = -16.300370624999996*var4[4]*t291*t1148;
  t2241 = 8.150185312499998*var4[8]*t291*t1148;
  t2415 = 24.450555937499995*var4[4]*t1551*t1594*t903;
  t2452 = -48.90111187499999*var4[8]*t1551*t1594*t903;
  t2504 = 24.450555937499995*var4[12]*t1551*t1594*t903;
  t2511 = 24.450555937499995*var4[8]*t1713*t1041*t1726;
  t2537 = -48.90111187499999*var4[12]*t1713*t1041*t1726;
  t2562 = 24.450555937499995*var4[16]*t1713*t1041*t1726;
  t2638 = 8.150185312499998*var4[12]*t1855*t1994;
  t2677 = -16.300370624999996*var4[16]*t1855*t1994;
  t2712 = 8.150185312499998*var4[20]*t1855*t1994;
  t2831 = t2128 + t2147 + t2241 + t2415 + t2452 + t2504 + t2511 + t2537 + t2562 + t2638 + t2677 + t2712;
  t3112 = 15.246945312499998*var4[0]*t291*t1148;
  t3135 = -30.493890624999995*var4[4]*t291*t1148;
  t3143 = 15.246945312499998*var4[8]*t291*t1148;
  t3154 = 45.740835937499995*var4[4]*t1551*t1594*t903;
  t3168 = -91.48167187499999*var4[8]*t1551*t1594*t903;
  t3201 = 45.740835937499995*var4[12]*t1551*t1594*t903;
  t3262 = 45.740835937499995*var4[8]*t1713*t1041*t1726;
  t3345 = -91.48167187499999*var4[12]*t1713*t1041*t1726;
  t3465 = 45.740835937499995*var4[16]*t1713*t1041*t1726;
  t3684 = 15.246945312499998*var4[12]*t1855*t1994;
  t3857 = -30.493890624999995*var4[16]*t1855*t1994;
  t3870 = 15.246945312499998*var4[20]*t1855*t1994;
  t3877 = t3112 + t3135 + t3143 + t3154 + t3168 + t3201 + t3262 + t3345 + t3465 + t3684 + t3857 + t3870;
  t3109 = -1.*var2[6]*t2831;
  t3891 = -1.*var2[2]*t3877;
  t3892 = -1.*var2[5]*t3877;
  t3895 = t3109 + t3891 + t3892;
  t3916 = Power(t1041,4);
  t4092 = Power(t903,4);
  t3927 = 4.365625*var4[0]*t381*t3916;
  t3956 = -4.365625*var4[4]*t381*t3916;
  t3999 = 17.4625*var4[4]*t291*t1148*t903;
  t4017 = -17.4625*var4[8]*t291*t1148*t903;
  t4031 = 26.193749999999998*var4[8]*t1551*t1594*t1726;
  t4053 = -26.193749999999998*var4[12]*t1551*t1594*t1726;
  t4073 = 17.4625*var4[12]*t1713*t1041*t1994;
  t4083 = -17.4625*var4[16]*t1713*t1041*t1994;
  t4100 = 4.365625*var4[16]*t1855*t4092;
  t4116 = -4.365625*var4[20]*t1855*t4092;
  t4184 = t3927 + t3956 + t3999 + t4017 + t4031 + t4053 + t4073 + t4083 + t4100 + t4116;
  t4617 = 8.150185312499998*var4[1]*t291*t1148;
  t4628 = -16.300370624999996*var4[5]*t291*t1148;
  t4632 = 8.150185312499998*var4[9]*t291*t1148;
  t4633 = 24.450555937499995*var4[5]*t1551*t1594*t903;
  t4738 = -48.90111187499999*var4[9]*t1551*t1594*t903;
  t4742 = 24.450555937499995*var4[13]*t1551*t1594*t903;
  t4746 = 24.450555937499995*var4[9]*t1713*t1041*t1726;
  t4750 = -48.90111187499999*var4[13]*t1713*t1041*t1726;
  t4760 = 24.450555937499995*var4[17]*t1713*t1041*t1726;
  t4808 = 8.150185312499998*var4[13]*t1855*t1994;
  t4818 = -16.300370624999996*var4[17]*t1855*t1994;
  t4837 = 8.150185312499998*var4[21]*t1855*t1994;
  t4843 = t4617 + t4628 + t4632 + t4633 + t4738 + t4742 + t4746 + t4750 + t4760 + t4808 + t4818 + t4837;
  t5000 = 15.246945312499998*var4[1]*t291*t1148;
  t5013 = -30.493890624999995*var4[5]*t291*t1148;
  t5021 = 15.246945312499998*var4[9]*t291*t1148;
  t5043 = 45.740835937499995*var4[5]*t1551*t1594*t903;
  t5054 = -91.48167187499999*var4[9]*t1551*t1594*t903;
  t5092 = 45.740835937499995*var4[13]*t1551*t1594*t903;
  t5106 = 45.740835937499995*var4[9]*t1713*t1041*t1726;
  t5109 = -91.48167187499999*var4[13]*t1713*t1041*t1726;
  t5135 = 45.740835937499995*var4[17]*t1713*t1041*t1726;
  t5138 = 15.246945312499998*var4[13]*t1855*t1994;
  t5140 = -30.493890624999995*var4[17]*t1855*t1994;
  t5151 = 15.246945312499998*var4[21]*t1855*t1994;
  t5153 = t5000 + t5013 + t5021 + t5043 + t5054 + t5092 + t5106 + t5109 + t5135 + t5138 + t5140 + t5151;
  t4936 = -1.*var2[6]*t4843;
  t5175 = -1.*var2[2]*t5153;
  t5193 = -1.*var2[5]*t5153;
  t5195 = t4936 + t5175 + t5193;
  t5221 = 4.365625*var4[1]*t381*t3916;
  t5222 = -4.365625*var4[5]*t381*t3916;
  t5226 = 17.4625*var4[5]*t291*t1148*t903;
  t5239 = -17.4625*var4[9]*t291*t1148*t903;
  t5246 = 26.193749999999998*var4[9]*t1551*t1594*t1726;
  t5248 = -26.193749999999998*var4[13]*t1551*t1594*t1726;
  t5256 = 17.4625*var4[13]*t1713*t1041*t1994;
  t5257 = -17.4625*var4[17]*t1713*t1041*t1994;
  t5261 = 4.365625*var4[17]*t1855*t4092;
  t5265 = -4.365625*var4[21]*t1855*t4092;
  t5530 = 8.150185312499998*var4[2]*t291*t1148;
  t5531 = -16.300370624999996*var4[6]*t291*t1148;
  t5570 = 8.150185312499998*var4[10]*t291*t1148;
  t5573 = 24.450555937499995*var4[6]*t1551*t1594*t903;
  t5575 = -48.90111187499999*var4[10]*t1551*t1594*t903;
  t5583 = 24.450555937499995*var4[14]*t1551*t1594*t903;
  t5585 = 24.450555937499995*var4[10]*t1713*t1041*t1726;
  t5589 = -48.90111187499999*var4[14]*t1713*t1041*t1726;
  t5593 = 24.450555937499995*var4[18]*t1713*t1041*t1726;
  t5602 = 8.150185312499998*var4[14]*t1855*t1994;
  t5604 = -16.300370624999996*var4[18]*t1855*t1994;
  t5609 = 8.150185312499998*var4[22]*t1855*t1994;
  t5610 = t5530 + t5531 + t5570 + t5573 + t5575 + t5583 + t5585 + t5589 + t5593 + t5602 + t5604 + t5609;
  t5634 = 15.246945312499998*var4[2]*t291*t1148;
  t5636 = -30.493890624999995*var4[6]*t291*t1148;
  t5647 = 15.246945312499998*var4[10]*t291*t1148;
  t5648 = 45.740835937499995*var4[6]*t1551*t1594*t903;
  t5687 = -91.48167187499999*var4[10]*t1551*t1594*t903;
  t5692 = 45.740835937499995*var4[14]*t1551*t1594*t903;
  t5717 = 45.740835937499995*var4[10]*t1713*t1041*t1726;
  t5734 = -91.48167187499999*var4[14]*t1713*t1041*t1726;
  t5736 = 45.740835937499995*var4[18]*t1713*t1041*t1726;
  t5737 = 15.246945312499998*var4[14]*t1855*t1994;
  t5762 = -30.493890624999995*var4[18]*t1855*t1994;
  t5765 = 15.246945312499998*var4[22]*t1855*t1994;
  t5772 = t5634 + t5636 + t5647 + t5648 + t5687 + t5692 + t5717 + t5734 + t5736 + t5737 + t5762 + t5765;
  t5633 = -1.*var2[6]*t5610;
  t5800 = -1.*var2[2]*t5772;
  t5803 = -1.*var2[5]*t5772;
  t5806 = t5633 + t5800 + t5803;
  t5820 = 4.365625*var4[2]*t381*t3916;
  t5821 = -4.365625*var4[6]*t381*t3916;
  t5835 = 17.4625*var4[6]*t291*t1148*t903;
  t5836 = -17.4625*var4[10]*t291*t1148*t903;
  t5848 = 26.193749999999998*var4[10]*t1551*t1594*t1726;
  t5856 = -26.193749999999998*var4[14]*t1551*t1594*t1726;
  t5893 = 17.4625*var4[14]*t1713*t1041*t1994;
  t5897 = -17.4625*var4[18]*t1713*t1041*t1994;
  t5899 = 4.365625*var4[18]*t1855*t4092;
  t5902 = -4.365625*var4[22]*t1855*t4092;
  t5906 = t5820 + t5821 + t5835 + t5836 + t5848 + t5856 + t5893 + t5897 + t5899 + t5902;
  t6122 = 8.150185312499998*var4[3]*t291*t1148;
  t6140 = -16.300370624999996*var4[7]*t291*t1148;
  t6146 = 8.150185312499998*var4[11]*t291*t1148;
  t6166 = 24.450555937499995*var4[7]*t1551*t1594*t903;
  t6167 = -48.90111187499999*var4[11]*t1551*t1594*t903;
  t6170 = 24.450555937499995*var4[15]*t1551*t1594*t903;
  t6176 = 24.450555937499995*var4[11]*t1713*t1041*t1726;
  t6177 = -48.90111187499999*var4[15]*t1713*t1041*t1726;
  t6187 = 24.450555937499995*var4[19]*t1713*t1041*t1726;
  t6189 = 8.150185312499998*var4[15]*t1855*t1994;
  t6191 = -16.300370624999996*var4[19]*t1855*t1994;
  t6192 = 8.150185312499998*var4[23]*t1855*t1994;
  t6195 = t6122 + t6140 + t6146 + t6166 + t6167 + t6170 + t6176 + t6177 + t6187 + t6189 + t6191 + t6192;
  t6235 = 15.246945312499998*var4[3]*t291*t1148;
  t6236 = -30.493890624999995*var4[7]*t291*t1148;
  t6241 = 15.246945312499998*var4[11]*t291*t1148;
  t6269 = 45.740835937499995*var4[7]*t1551*t1594*t903;
  t6270 = -91.48167187499999*var4[11]*t1551*t1594*t903;
  t6273 = 45.740835937499995*var4[15]*t1551*t1594*t903;
  t6316 = 45.740835937499995*var4[11]*t1713*t1041*t1726;
  t6318 = -91.48167187499999*var4[15]*t1713*t1041*t1726;
  t6320 = 45.740835937499995*var4[19]*t1713*t1041*t1726;
  t6323 = 15.246945312499998*var4[15]*t1855*t1994;
  t6324 = -30.493890624999995*var4[19]*t1855*t1994;
  t6331 = 15.246945312499998*var4[23]*t1855*t1994;
  t6334 = t6235 + t6236 + t6241 + t6269 + t6270 + t6273 + t6316 + t6318 + t6320 + t6323 + t6324 + t6331;
  t6230 = -1.*var2[6]*t6195;
  t6338 = -1.*var2[2]*t6334;
  t6340 = -1.*var2[5]*t6334;
  t6342 = t6230 + t6338 + t6340;
  t6376 = 4.365625*var4[3]*t381*t3916;
  t6377 = -4.365625*var4[7]*t381*t3916;
  t6385 = 17.4625*var4[7]*t291*t1148*t903;
  t6395 = -17.4625*var4[11]*t291*t1148*t903;
  t6397 = 26.193749999999998*var4[11]*t1551*t1594*t1726;
  t6410 = -26.193749999999998*var4[15]*t1551*t1594*t1726;
  t6414 = 17.4625*var4[15]*t1713*t1041*t1994;
  t6424 = -17.4625*var4[19]*t1713*t1041*t1994;
  t6431 = 4.365625*var4[19]*t1855*t4092;
  t6443 = -4.365625*var4[23]*t1855*t4092;
  t6447 = t6376 + t6377 + t6385 + t6395 + t6397 + t6410 + t6414 + t6424 + t6431 + t6443;
  p_output1[0]=t3895*var2[2] + t3895*var2[5] + t4184*var3[2] + t4184*var3[5] + var3[6]*(1. + 2.3336249999999996*t381*t3916*var4[0] - 2.3336249999999996*t381*t3916*var4[4] + 9.334499999999998*t1148*t291*t903*var4[4] + 14.00175*t1551*t1594*t1726*var4[8] - 9.334499999999998*t1148*t291*t903*var4[8] - 14.00175*t1551*t1594*t1726*var4[12] + 9.334499999999998*t1041*t1713*t1994*var4[12] - 9.334499999999998*t1041*t1713*t1994*var4[16] + 2.3336249999999996*t1855*t4092*var4[16] - 2.3336249999999996*t1855*t4092*var4[20]) + var2[6]*(-1.*t2831*var2[2] - 1.*t2831*var2[5] - 1.*var2[6]*(4.356644512499999*t1148*t291*var4[0] - 8.713289024999998*t1148*t291*var4[4] + 13.069933537499997*t1551*t1594*t903*var4[4] + 13.069933537499997*t1041*t1713*t1726*var4[8] + 4.356644512499999*t1148*t291*var4[8] - 26.139867074999994*t1551*t1594*t903*var4[8] - 26.139867074999994*t1041*t1713*t1726*var4[12] + 4.356644512499999*t1855*t1994*var4[12] + 13.069933537499997*t1551*t1594*t903*var4[12] + 13.069933537499997*t1041*t1713*t1726*var4[16] - 8.713289024999998*t1855*t1994*var4[16] + 4.356644512499999*t1855*t1994*var4[20]));
  p_output1[1]=t5195*var2[2] + t5195*var2[5] + (t5221 + t5222 + t5226 + t5239 + t5246 + t5248 + t5256 + t5257 + t5261 + t5265)*var3[2] + (1. + t5221 + t5222 + t5226 + t5239 + t5246 + t5248 + t5256 + t5257 + t5261 + t5265)*var3[5] + var3[6]*(2.3336249999999996*t381*t3916*var4[1] - 2.3336249999999996*t381*t3916*var4[5] + 9.334499999999998*t1148*t291*t903*var4[5] + 14.00175*t1551*t1594*t1726*var4[9] - 9.334499999999998*t1148*t291*t903*var4[9] - 14.00175*t1551*t1594*t1726*var4[13] + 9.334499999999998*t1041*t1713*t1994*var4[13] - 9.334499999999998*t1041*t1713*t1994*var4[17] + 2.3336249999999996*t1855*t4092*var4[17] - 2.3336249999999996*t1855*t4092*var4[21]) + var2[6]*(-1.*t4843*var2[2] - 1.*t4843*var2[5] - 1.*var2[6]*(4.356644512499999*t1148*t291*var4[1] - 8.713289024999998*t1148*t291*var4[5] + 13.069933537499997*t1551*t1594*t903*var4[5] + 13.069933537499997*t1041*t1713*t1726*var4[9] + 4.356644512499999*t1148*t291*var4[9] - 26.139867074999994*t1551*t1594*t903*var4[9] - 26.139867074999994*t1041*t1713*t1726*var4[13] + 4.356644512499999*t1855*t1994*var4[13] + 13.069933537499997*t1551*t1594*t903*var4[13] + 13.069933537499997*t1041*t1713*t1726*var4[17] - 8.713289024999998*t1855*t1994*var4[17] + 4.356644512499999*t1855*t1994*var4[21]));
  p_output1[2]=t5806*var2[2] + t5806*var2[5] + t5906*var3[2] + var3[3] + t5906*var3[5] + var3[6]*(2.3336249999999996*t381*t3916*var4[2] - 2.3336249999999996*t381*t3916*var4[6] + 9.334499999999998*t1148*t291*t903*var4[6] + 14.00175*t1551*t1594*t1726*var4[10] - 9.334499999999998*t1148*t291*t903*var4[10] - 14.00175*t1551*t1594*t1726*var4[14] + 9.334499999999998*t1041*t1713*t1994*var4[14] - 9.334499999999998*t1041*t1713*t1994*var4[18] + 2.3336249999999996*t1855*t4092*var4[18] - 2.3336249999999996*t1855*t4092*var4[22]) + var2[6]*(-1.*t5610*var2[2] - 1.*t5610*var2[5] - 1.*var2[6]*(4.356644512499999*t1148*t291*var4[2] - 8.713289024999998*t1148*t291*var4[6] + 13.069933537499997*t1551*t1594*t903*var4[6] + 13.069933537499997*t1041*t1713*t1726*var4[10] + 4.356644512499999*t1148*t291*var4[10] - 26.139867074999994*t1551*t1594*t903*var4[10] - 26.139867074999994*t1041*t1713*t1726*var4[14] + 4.356644512499999*t1855*t1994*var4[14] + 13.069933537499997*t1551*t1594*t903*var4[14] + 13.069933537499997*t1041*t1713*t1726*var4[18] - 8.713289024999998*t1855*t1994*var4[18] + 4.356644512499999*t1855*t1994*var4[22]));
  p_output1[3]=t6342*var2[2] + t6342*var2[5] + t6447*var3[2] + var3[4] + t6447*var3[5] + var3[6]*(2.3336249999999996*t381*t3916*var4[3] - 2.3336249999999996*t381*t3916*var4[7] + 9.334499999999998*t1148*t291*t903*var4[7] + 14.00175*t1551*t1594*t1726*var4[11] - 9.334499999999998*t1148*t291*t903*var4[11] - 14.00175*t1551*t1594*t1726*var4[15] + 9.334499999999998*t1041*t1713*t1994*var4[15] - 9.334499999999998*t1041*t1713*t1994*var4[19] + 2.3336249999999996*t1855*t4092*var4[19] - 2.3336249999999996*t1855*t4092*var4[23]) + var2[6]*(-1.*t6195*var2[2] - 1.*t6195*var2[5] - 1.*var2[6]*(4.356644512499999*t1148*t291*var4[3] - 8.713289024999998*t1148*t291*var4[7] + 13.069933537499997*t1551*t1594*t903*var4[7] + 13.069933537499997*t1041*t1713*t1726*var4[11] + 4.356644512499999*t1148*t291*var4[11] - 26.139867074999994*t1551*t1594*t903*var4[11] - 26.139867074999994*t1041*t1713*t1726*var4[15] + 4.356644512499999*t1855*t1994*var4[15] + 13.069933537499997*t1551*t1594*t903*var4[15] + 13.069933537499997*t1041*t1713*t1726*var4[19] - 8.713289024999998*t1855*t1994*var4[19] + 4.356644512499999*t1855*t1994*var4[23]));
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4,*var5;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 5)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Five input(s) required (var1,var2,var3,var4,var5).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5);


}

#else // MATLAB_MEX_FILE

#include "d2y_position_RightSS.hh"

namespace RightSS
{

void d2y_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5);

}

}

#endif // MATLAB_MEX_FILE

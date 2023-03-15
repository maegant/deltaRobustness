/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:15 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t481;
  double t178;
  double t348;
  double t489;
  double t622;
  double t411;
  double t492;
  double t496;
  double t71;
  double t623;
  double t786;
  double t933;
  double t1391;
  double t1398;
  double t1404;
  double t1273;
  double t1456;
  double t1123;
  double t1809;
  double t1441;
  double t1472;
  double t1192;
  double t1351;
  double t1567;
  double t1630;
  double t1480;
  double t1544;
  double t497;
  double t1182;
  double t2003;
  double t2013;
  double t1755;
  double t2147;
  double t2183;
  double t2192;
  double t2070;
  double t2083;
  double t2121;
  double t2216;
  double t2230;
  double t2248;
  double t2265;
  double t2282;
  double t2286;
  double t2299;
  double t2300;
  double t2309;
  double t2315;
  double t1909;
  double t2457;
  double t2493;
  double t2494;
  double t2495;
  double t2530;
  double t2535;
  double t2537;
  double t2538;
  double t2543;
  double t2418;
  double t2544;
  double t2551;
  double t2553;
  double t2588;
  double t2742;
  double t2775;
  double t2782;
  double t2785;
  double t2802;
  double t2608;
  double t2626;
  double t2644;
  double t2671;
  double t2673;
  double t2685;
  double t2731;
  double t2888;
  double t1934;
  double t1895;
  double t2972;
  double t2979;
  double t3027;
  double t3034;
  double t3035;
  double t3109;
  double t3127;
  double t3168;
  double t3185;
  double t3187;
  double t3189;
  double t3104;
  double t3219;
  double t3224;
  double t3230;
  double t3236;
  double t3279;
  double t3244;
  double t3255;
  double t3269;
  double t3307;
  double t3320;
  double t3361;
  double t3362;
  double t3386;
  double t3401;
  double t3308;
  double t3413;
  double t3420;
  double t3429;
  double t3456;
  double t3457;
  double t3469;
  double t3506;
  double t3518;
  double t3520;
  double t3455;
  double t3522;
  double t3552;
  double t3555;
  double t3559;
  double t3570;
  double t3701;
  double t3725;
  double t3730;
  double t3737;
  double t3803;
  double t3832;
  double t3630;
  double t3635;
  double t3770;
  double t3867;
  double t3916;
  double t3974;
  double t3987;
  double t3993;
  double t3994;
  double t3934;
  double t3755;
  double t3848;
  double t3865;
  double t3866;
  double t3917;
  double t3931;
  double t3948;
  double t3961;
  double t3963;
  double t4227;
  double t4252;
  double t4253;
  double t4256;
  double t4198;
  double t3991;
  double t3999;
  double t4011;
  double t4215;
  double t4262;
  double t4278;
  double t4046;
  double t4060;
  double t4061;
  double t4364;
  double t4498;
  double t4499;
  double t4413;
  double t4013;
  double t4100;
  double t4126;
  double t4455;
  double t4488;
  double t4497;
  double t4510;
  double t4514;
  double t4524;
  double t4554;
  double t4564;
  double t4588;
  double t4594;
  double t4605;
  double t4609;
  double t4614;
  double t4615;
  double t4620;
  double t4636;
  double t4637;
  double t4639;
  double t4640;
  double t4643;
  double t4644;
  double t4818;
  double t4855;
  double t4799;
  double t4800;
  double t4801;
  double t4820;
  double t4858;
  double t4862;
  double t4889;
  double t4894;
  double t4895;
  double t4953;
  double t4963;
  double t4984;
  double t4987;
  double t4999;
  double t5006;
  double t5009;
  double t5017;
  double t5018;
  double t5067;
  double t5076;
  double t5077;
  double t5119;
  double t5123;
  double t5131;
  double t5081;
  double t5082;
  double t5090;
  double t5095;
  double t5152;
  double t5153;
  double t5115;
  double t5233;
  double t5169;
  double t5167;
  double t5247;
  double t5289;
  double t5311;
  double t5274;
  double t5276;
  double t5284;
  double t5318;
  double t5328;
  double t5329;
  double t5332;
  double t5434;
  double t5443;
  double t5444;
  double t5448;
  double t5455;
  double t5472;
  t481 = Cos(var1[6]);
  t178 = Cos(var1[7]);
  t348 = Sin(var1[6]);
  t489 = Sin(var1[7]);
  t622 = Cos(var1[2]);
  t411 = -1.*t178*t348;
  t492 = -1.*t481*t489;
  t496 = t411 + t492;
  t71 = Sin(var1[2]);
  t623 = t481*t178;
  t786 = -1.*t348*t489;
  t933 = t623 + t786;
  t1391 = t178*t348;
  t1398 = t481*t489;
  t1404 = t1391 + t1398;
  t1273 = -1.*t71*t933;
  t1456 = t622*t933;
  t1123 = -1.*t622*t933;
  t1809 = t71*t933;
  t1441 = -1.*t71*t1404;
  t1472 = t1441 + t1456;
  t1192 = t622*t496;
  t1351 = t1192 + t1273;
  t1567 = t71*t496;
  t1630 = t1567 + t1456;
  t1480 = -1.*t622*t1404;
  t1544 = t1480 + t1273;
  t497 = -1.*t71*t496;
  t1182 = t497 + t1123;
  t2003 = t622*t1404;
  t2013 = t2003 + t1809;
  t1755 = -1.*t622*t496;
  t2147 = -1.*t481*t178;
  t2183 = t348*t489;
  t2192 = t2147 + t2183;
  t2070 = 7.1798*t1472*t1351;
  t2083 = 3.5899*t1630*t1544;
  t2121 = 3.5899*t1182*t2013;
  t2216 = t622*t2192;
  t2230 = t497 + t2216;
  t2248 = 7.1798*t1351*t2230;
  t2265 = -1.*t71*t2192;
  t2282 = t1755 + t2265;
  t2286 = 3.5899*t1630*t2282;
  t2299 = t71*t2192;
  t2300 = t1192 + t2299;
  t2309 = 3.5899*t1182*t2300;
  t2315 = t2070 + t2083 + t2121 + t2248 + t2286 + t2309;
  t1909 = t71*t1404;
  t2457 = 7.1798*t1630*t1351;
  t2493 = 3.5899*t2013*t2230;
  t2494 = t1909 + t2216;
  t2495 = 3.5899*t1351*t2494;
  t2530 = t2003 + t2265;
  t2535 = 3.5899*t1630*t2530;
  t2537 = 3.5899*t1472*t2300;
  t2538 = 7.1798*t2230*t2300;
  t2543 = t2457 + t2493 + t2495 + t2535 + t2537 + t2538;
  t2418 = -0.5*var2[2]*t2315;
  t2544 = -0.5*var2[6]*t2543;
  t2551 = -0.5*var2[7]*t2543;
  t2553 = t2418 + t2544 + t2551;
  t2588 = var2[1]*t2553;
  t2742 = 3.5899*t1630*t1472;
  t2775 = 3.5899*t1351*t2013;
  t2782 = 3.5899*t1630*t2230;
  t2785 = 3.5899*t1351*t2300;
  t2802 = t2742 + t2775 + t2782 + t2785;
  t2608 = 3.5899*t1182*t1630;
  t2626 = Power(t1472,2);
  t2644 = 3.5899*t2626;
  t2671 = Power(t1351,2);
  t2673 = 3.5899*t2671;
  t2685 = 3.5899*t1544*t2013;
  t2731 = t2608 + t2644 + t2673 + t2685;
  t2888 = -0.5*var2[1]*t2802;
  t1934 = t1909 + t1123;
  t1895 = t1755 + t1809;
  t2972 = 7.1798*t1182*t1472;
  t2979 = 7.1798*t1351*t1544;
  t3027 = 7.1798*t1182*t2230;
  t3034 = 7.1798*t1351*t2282;
  t3035 = t2972 + t2979 + t3027 + t3034;
  t3109 = 7.1798*t2671;
  t3127 = 7.1798*t1472*t2230;
  t3168 = Power(t2230,2);
  t3185 = 7.1798*t3168;
  t3187 = 7.1798*t1351*t2530;
  t3189 = t3109 + t3127 + t3185 + t3187;
  t3104 = -0.5*var2[2]*t3035;
  t3219 = -0.5*var2[6]*t3189;
  t3224 = -0.5*var2[7]*t3189;
  t3230 = t3104 + t3219 + t3224;
  t3236 = var2[1]*t3230;
  t3279 = t2070 + t2248;
  t3244 = 7.1798*t1182*t1351;
  t3255 = 7.1798*t1472*t1544;
  t3269 = t3244 + t3255;
  t3307 = -0.5*var2[1]*t3279;
  t3320 = -1.*t178;
  t3361 = 1. + t3320;
  t3362 = -0.9063*t3361;
  t3386 = -1.0567*t178;
  t3401 = t3362 + t3386;
  t3308 = 0.4999*t348;
  t3413 = t3401*t348;
  t3420 = -0.15039999999999998*t481*t489;
  t3429 = t3308 + t3413 + t3420;
  t3456 = -1.*t481;
  t3457 = 1. + t3456;
  t3469 = -0.4999*t3457;
  t3506 = t481*t3401;
  t3518 = 0.15039999999999998*t348*t489;
  t3520 = t3469 + t3506 + t3518;
  t3455 = -1.*t3429*t933;
  t3522 = -1.*t496*t3520;
  t3552 = t3455 + t3522;
  t3555 = t3429*t1404;
  t3559 = t933*t3520;
  t3570 = t3555 + t3559;
  t3701 = -0.4999*t348;
  t3725 = -1.*t3401*t348;
  t3730 = 0.15039999999999998*t481*t489;
  t3737 = t3701 + t3725 + t3730;
  t3803 = 0.4999*t481;
  t3832 = t3803 + t3506 + t3518;
  t3630 = 3.5899*t1182*t3552;
  t3635 = t3429*t933;
  t3770 = t496*t3520;
  t3867 = 3.5899*t3570*t2282;
  t3916 = -1.*t496*t3429;
  t3974 = 0.15039999999999998*t178*t348;
  t3987 = t3974 + t3730;
  t3993 = -0.15039999999999998*t481*t178;
  t3994 = t3993 + t3518;
  t3934 = -1.*t3520*t2192;
  t3755 = t3737*t933;
  t3848 = t1404*t3832;
  t3865 = t3635 + t3755 + t3770 + t3848;
  t3866 = 3.5899*t1182*t3865;
  t3917 = -1.*t496*t3737;
  t3931 = -1.*t933*t3832;
  t3948 = t3916 + t3917 + t3931 + t3934;
  t3961 = 3.5899*t1544*t3948;
  t3963 = t3630 + t3866 + t3867 + t3961;
  t4227 = -0.4999*t481;
  t4252 = -1.*t481*t3401;
  t4253 = -0.15039999999999998*t348*t489;
  t4256 = t4227 + t4252 + t4253;
  t4198 = 3.5899*t3552*t2230;
  t3991 = t3987*t933;
  t3999 = t1404*t3994;
  t4011 = t3635 + t3991 + t3770 + t3999;
  t4215 = 3.5899*t3570*t2530;
  t4262 = -1.*t1404*t3520;
  t4278 = -1.*t3429*t2192;
  t4046 = -1.*t496*t3987;
  t4060 = -1.*t933*t3994;
  t4061 = t3916 + t4046 + t4060 + t3934;
  t4364 = t496*t3429;
  t4498 = 0.15039999999999998*t481*t178;
  t4499 = t4498 + t4253;
  t4413 = t3520*t2192;
  t4013 = 3.5899*t1182*t4011;
  t4100 = 3.5899*t1544*t4061;
  t4126 = t3630 + t4013 + t3867 + t4100;
  t4455 = 3.5899*t3865*t2230;
  t4488 = 3.5899*t4011*t2230;
  t4497 = -1.*t3987*t933;
  t4510 = -1.*t496*t4499;
  t4514 = -1.*t496*t3832;
  t4524 = -1.*t496*t3994;
  t4554 = -1.*t3737*t2192;
  t4564 = -1.*t3987*t2192;
  t4588 = t4497 + t4510 + t4262 + t4514 + t4524 + t4278 + t4554 + t4564;
  t4594 = 3.5899*t1472*t4588;
  t4605 = 3.5899*t1351*t3948;
  t4609 = 3.5899*t1351*t4061;
  t4614 = t496*t3737;
  t4615 = t496*t3987;
  t4620 = t3987*t1404;
  t4636 = t933*t4499;
  t4637 = t933*t3832;
  t4639 = t933*t3994;
  t4640 = t4364 + t4614 + t4615 + t4620 + t4636 + t4637 + t4639 + t4413;
  t4643 = 3.5899*t1351*t4640;
  t4644 = t4198 + t4455 + t4488 + t4215 + t4594 + t4605 + t4609 + t4643;
  t4818 = 3.5899*t1351*t3552;
  t4855 = 3.5899*t3570*t2230;
  t4799 = 3.5899*t1544*t3552;
  t4800 = 3.5899*t1182*t3570;
  t4801 = t4799 + t4800;
  t4820 = 3.5899*t1351*t3865;
  t4858 = 3.5899*t1472*t3948;
  t4862 = t4818 + t4820 + t4855 + t4858;
  t4889 = 3.5899*t1351*t4011;
  t4894 = 3.5899*t1472*t4061;
  t4895 = t4818 + t4889 + t4855 + t4894;
  t4953 = 0.4999*t489;
  t4963 = t3401*t489;
  t4984 = 0.15039999999999998*t178*t489;
  t4987 = t4953 + t4963 + t4984;
  t4999 = 0.4999*t178;
  t5006 = t3401*t178;
  t5009 = Power(t489,2);
  t5017 = -0.15039999999999998*t5009;
  t5018 = t4999 + t5006 + t5017;
  t5067 = 3.5899*t4987*t1182;
  t5076 = 3.5899*t5018*t2282;
  t5077 = t5067 + t5076;
  t5119 = Power(t178,2);
  t5123 = 0.15039999999999998*t5119;
  t5131 = t4999 + t5006 + t5123;
  t5081 = -0.4999*t489;
  t5082 = -1.*t3401*t489;
  t5090 = -0.15039999999999998*t178*t489;
  t5095 = t5081 + t5082 + t5090;
  t5152 = 3.5899*t4987*t2230;
  t5153 = 3.5899*t5018*t2530;
  t5115 = 3.5899*t5095*t1182;
  t5233 = 0. + t4999 + t5006 + t5123;
  t5169 = 3.5899*t5095*t2230;
  t5167 = 3.5899*t5131*t1351;
  t5247 = 3.5899*t5233*t1351;
  t5289 = 3.5899*t4987*t1351;
  t5311 = 3.5899*t5018*t2230;
  t5274 = 3.5899*t5018*t1182;
  t5276 = 3.5899*t4987*t1544;
  t5284 = t5274 + t5276;
  t5318 = t5289 + t5311;
  t5328 = 3.5899*t5131*t1472;
  t5329 = 3.5899*t5095*t1351;
  t5332 = t5328 + t5329 + t5289 + t5311;
  t5434 = 0.26996047999999995*var2[2]*t2282;
  t5443 = 0.26996047999999995*var2[6]*t2530;
  t5444 = 0.26996047999999995*var2[7]*t2530;
  t5448 = t5434 + t5443 + t5444;
  t5455 = var2[1]*t5448;
  t5472 = 0.26996047999999995*var2[1]*t2230;
  p_output1[0]=var2[1]*(-0.5*(10.7697*t1182*t1351 + 10.7697*t1472*t1544 + 3.5899*t1630*t1895 + 3.5899*t1934*t2013)*var2[2] - 0.5*t2315*var2[6] - 0.5*t2315*var2[7]);
  p_output1[1]=t2588;
  p_output1[2]=t2588;
  p_output1[3]=-0.5*t2731*var2[2] - 0.5*t2802*var2[6] - 0.5*t2802*var2[7];
  p_output1[4]=-0.5*t2731*var2[1];
  p_output1[5]=t2888;
  p_output1[6]=t2888;
  p_output1[7]=var2[1]*(-0.5*(7.1798*Power(t1182,2) + 7.1798*Power(t1544,2) + 7.1798*t1351*t1895 + 7.1798*t1472*t1934)*var2[2] - 0.5*t3035*var2[6] - 0.5*t3035*var2[7]);
  p_output1[8]=t3236;
  p_output1[9]=t3236;
  p_output1[10]=-0.5*t3269*var2[2] - 0.5*t3279*var2[6] - 0.5*t3279*var2[7];
  p_output1[11]=-0.5*t3269*var2[1];
  p_output1[12]=t3307;
  p_output1[13]=t3307;
  p_output1[14]=var2[1]*(-0.5*(3.5899*t1934*t3552 + 3.5899*t1895*t3570)*var2[2] - 0.5*t3963*var2[6] - 0.5*t4126*var2[7]);
  p_output1[15]=var2[1]*(-0.5*t3963*var2[2] - 0.5*(7.1798*t2230*t3865 + 7.1798*t1351*t3948 + t4198 + t4215 + 3.5899*t1472*(-2.*t2192*t3737 + t4262 + t4278 - 2.*t3832*t496 - 1.*t4256*t496 - 1.*t3737*t933) + 3.5899*t1351*(t1404*t3737 + t4364 + t4413 + 2.*t3737*t496 + 2.*t3832*t933 + t4256*t933))*var2[6] - 0.5*t4644*var2[7]);
  p_output1[16]=var2[1]*(-0.5*t4126*var2[2] - 0.5*t4644*var2[6] - 0.5*(7.1798*t2230*t4011 + 7.1798*t1351*t4061 + t4198 + t4215 + 3.5899*t1472*(-2.*t2192*t3987 + t4262 + t4278 + t4497 + t4510 - 2.*t3994*t496) + 3.5899*t1351*(t4364 + t4413 + t4620 + t4636 + 2.*t3987*t496 + 2.*t3994*t933))*var2[7]);
  p_output1[17]=-0.5*t4801*var2[2] - 0.5*t4862*var2[6] - 0.5*t4895*var2[7];
  p_output1[18]=-0.5*t4801*var2[1];
  p_output1[19]=-0.5*t4862*var2[1];
  p_output1[20]=-0.5*t4895*var2[1];
  p_output1[21]=var2[1]*(-0.5*(3.5899*t1934*t4987 + 3.5899*t1895*t5018)*var2[2] - 0.5*t5077*var2[6] - 0.5*(t5067 + t5076 + t5115 + 3.5899*t1544*t5131)*var2[7]);
  p_output1[22]=var2[1]*(-0.5*t5077*var2[2] - 0.5*(t5152 + t5153)*var2[6] - 0.5*(t5152 + t5153 + t5167 + t5169)*var2[7]);
  p_output1[23]=var2[1]*(-0.5*(t5067 + t5076 + t5115 + 3.5899*t1544*t5233)*var2[2] - 0.5*(t5152 + t5153 + t5169 + t5247)*var2[6] - 0.5*(3.5899*t1472*t5095 + 7.1798*t2230*t5095 + 3.5899*t1351*(0. - 0.4999*t178 - 1.*t178*t3401 - 0.15039999999999998*t5119) + t5152 + t5153 + t5167 + t5247)*var2[7]);
  p_output1[24]=-0.5*t5284*var2[2] - 0.5*t5318*var2[6] - 0.5*t5332*var2[7];
  p_output1[25]=-0.5*t5284*var2[1];
  p_output1[26]=-0.5*t5318*var2[1];
  p_output1[27]=-0.5*t5332*var2[1];
  p_output1[28]=var2[1]*(0.26996047999999995*t1895*var2[2] + 0.26996047999999995*t2282*var2[6] + 0.26996047999999995*t2282*var2[7]);
  p_output1[29]=t5455;
  p_output1[30]=t5455;
  p_output1[31]=0.26996047999999995*t1182*var2[2] + 0.26996047999999995*t2230*var2[6] + 0.26996047999999995*t2230*var2[7];
  p_output1[32]=0.26996047999999995*t1182*var2[1];
  p_output1[33]=t5472;
  p_output1[34]=t5472;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 35, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L6_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L6_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

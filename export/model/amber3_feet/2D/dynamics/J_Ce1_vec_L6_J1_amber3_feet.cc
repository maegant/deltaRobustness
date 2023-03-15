/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:13 GMT-08:00
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
  double t913;
  double t802;
  double t809;
  double t1010;
  double t715;
  double t889;
  double t1055;
  double t1060;
  double t1102;
  double t1123;
  double t1273;
  double t1278;
  double t1456;
  double t1566;
  double t1567;
  double t1609;
  double t1970;
  double t1441;
  double t1480;
  double t1789;
  double t1809;
  double t1934;
  double t2003;
  double t2070;
  double t2083;
  double t2147;
  double t1063;
  double t2251;
  double t2265;
  double t2281;
  double t2230;
  double t2248;
  double t2282;
  double t2299;
  double t2300;
  double t2339;
  double t2360;
  double t2382;
  double t2384;
  double t2530;
  double t2535;
  double t2537;
  double t2538;
  double t2543;
  double t2544;
  double t2551;
  double t2553;
  double t2566;
  double t2509;
  double t2573;
  double t2587;
  double t2588;
  double t2608;
  double t2673;
  double t2685;
  double t2726;
  double t2626;
  double t2644;
  double t2651;
  double t2801;
  double t1340;
  double t1351;
  double t2026;
  double t2027;
  double t2813;
  double t2905;
  double t2916;
  double t2925;
  double t2933;
  double t2938;
  double t2966;
  double t2979;
  double t3027;
  double t3031;
  double t3102;
  double t3104;
  double t3109;
  double t3127;
  double t3187;
  double t3189;
  double t3193;
  double t3098;
  double t3203;
  double t3212;
  double t3219;
  double t3224;
  double t1895;
  double t2013;
  double t3272;
  double t3279;
  double t3280;
  double t3296;
  double t3298;
  double t3230;
  double t3236;
  double t3244;
  double t3255;
  double t3267;
  double t3318;
  double t3323;
  double t3338;
  double t3361;
  double t3401;
  double t3406;
  double t3320;
  double t3420;
  double t3429;
  double t3438;
  double t3440;
  double t3449;
  double t3455;
  double t3456;
  double t3457;
  double t3460;
  double t3439;
  double t3465;
  double t3469;
  double t3520;
  double t3552;
  double t3553;
  double t3635;
  double t3675;
  double t3701;
  double t3721;
  double t3755;
  double t3767;
  double t3629;
  double t3630;
  double t3737;
  double t3848;
  double t3850;
  double t3917;
  double t3927;
  double t3934;
  double t3935;
  double t3862;
  double t3725;
  double t3770;
  double t3803;
  double t3832;
  double t3853;
  double t3856;
  double t3865;
  double t3866;
  double t3895;
  double t4126;
  double t4132;
  double t4139;
  double t4144;
  double t3999;
  double t4011;
  double t3931;
  double t3948;
  double t3961;
  double t4159;
  double t4173;
  double t3964;
  double t3966;
  double t3973;
  double t4250;
  double t4325;
  double t4333;
  double t4259;
  double t3963;
  double t3974;
  double t3980;
  double t4296;
  double t4313;
  double t4315;
  double t4339;
  double t4353;
  double t4361;
  double t4365;
  double t4400;
  double t4410;
  double t4418;
  double t4429;
  double t4434;
  double t4446;
  double t4455;
  double t4456;
  double t4459;
  double t4488;
  double t4497;
  double t4498;
  double t4499;
  double t4502;
  double t4707;
  double t4715;
  double t4659;
  double t4675;
  double t4690;
  double t4711;
  double t4719;
  double t4721;
  double t4741;
  double t4746;
  double t4751;
  double t4820;
  double t4855;
  double t4858;
  double t4862;
  double t4792;
  double t4799;
  double t4800;
  double t4801;
  double t4815;
  double t4895;
  double t4898;
  double t4900;
  double t4914;
  double t4919;
  double t4949;
  double t5024;
  double t4963;
  double t4964;
  double t4984;
  double t4987;
  double t5032;
  double t4988;
  double t5080;
  double t5054;
  double t5046;
  double t5099;
  double t5233;
  double t5237;
  double t5201;
  double t5203;
  double t5207;
  double t5245;
  double t5247;
  double t5249;
  double t5250;
  double t5268;
  double t5270;
  double t5276;
  double t5284;
  double t5285;
  double t5332;
  t913 = Cos(var1[6]);
  t802 = Cos(var1[7]);
  t809 = Sin(var1[6]);
  t1010 = Sin(var1[7]);
  t715 = Sin(var1[2]);
  t889 = -1.*t802*t809;
  t1055 = -1.*t913*t1010;
  t1060 = t889 + t1055;
  t1102 = Cos(var1[2]);
  t1123 = t913*t802;
  t1273 = -1.*t809*t1010;
  t1278 = t1123 + t1273;
  t1456 = t1102*t1278;
  t1566 = t802*t809;
  t1567 = t913*t1010;
  t1609 = t1566 + t1567;
  t1970 = -1.*t715*t1278;
  t1441 = t715*t1060;
  t1480 = t1441 + t1456;
  t1789 = -1.*t715*t1609;
  t1809 = t1789 + t1456;
  t1934 = t1102*t1060;
  t2003 = t1934 + t1970;
  t2070 = t1102*t1609;
  t2083 = t715*t1278;
  t2147 = t2070 + t2083;
  t1063 = -1.*t715*t1060;
  t2251 = -1.*t913*t802;
  t2265 = t809*t1010;
  t2281 = t2251 + t2265;
  t2230 = 7.1798*t1480*t1809;
  t2248 = 7.1798*t2003*t2147;
  t2282 = t1102*t2281;
  t2299 = t1063 + t2282;
  t2300 = 7.1798*t1480*t2299;
  t2339 = t715*t2281;
  t2360 = t1934 + t2339;
  t2382 = 7.1798*t2003*t2360;
  t2384 = t2230 + t2248 + t2300 + t2382;
  t2530 = Power(t1480,2);
  t2535 = 7.1798*t2530;
  t2537 = t715*t1609;
  t2538 = t2537 + t2282;
  t2543 = 7.1798*t1480*t2538;
  t2544 = 7.1798*t2147*t2360;
  t2551 = Power(t2360,2);
  t2553 = 7.1798*t2551;
  t2566 = t2535 + t2543 + t2544 + t2553;
  t2509 = -0.5*var2[2]*t2384;
  t2573 = -0.5*var2[6]*t2566;
  t2587 = -0.5*var2[7]*t2566;
  t2588 = t2509 + t2573 + t2587;
  t2608 = var2[0]*t2588;
  t2673 = 7.1798*t1480*t2147;
  t2685 = 7.1798*t1480*t2360;
  t2726 = t2673 + t2685;
  t2626 = 7.1798*t1480*t2003;
  t2644 = 7.1798*t1809*t2147;
  t2651 = t2626 + t2644;
  t2801 = -0.5*var2[0]*t2726;
  t1340 = -1.*t1102*t1278;
  t1351 = t1063 + t1340;
  t2026 = -1.*t1102*t1609;
  t2027 = t2026 + t1970;
  t2813 = -1.*t1102*t1060;
  t2905 = 7.1798*t1809*t2003;
  t2916 = 3.5899*t1480*t2027;
  t2925 = 3.5899*t1351*t2147;
  t2933 = 7.1798*t2003*t2299;
  t2938 = -1.*t715*t2281;
  t2966 = t2813 + t2938;
  t2979 = 3.5899*t1480*t2966;
  t3027 = 3.5899*t1351*t2360;
  t3031 = t2905 + t2916 + t2925 + t2933 + t2979 + t3027;
  t3102 = 3.5899*t2147*t2299;
  t3104 = 3.5899*t2003*t2538;
  t3109 = t2070 + t2938;
  t3127 = 3.5899*t1480*t3109;
  t3187 = 3.5899*t1809*t2360;
  t3189 = 7.1798*t2299*t2360;
  t3193 = t2626 + t3102 + t3104 + t3127 + t3187 + t3189;
  t3098 = -0.5*var2[2]*t3031;
  t3203 = -0.5*var2[6]*t3193;
  t3212 = -0.5*var2[7]*t3193;
  t3219 = t3098 + t3203 + t3212;
  t3224 = var2[0]*t3219;
  t1895 = Power(t1809,2);
  t2013 = Power(t2003,2);
  t3272 = 3.5899*t1480*t1809;
  t3279 = 3.5899*t2003*t2147;
  t3280 = 3.5899*t1480*t2299;
  t3296 = 3.5899*t2003*t2360;
  t3298 = t3272 + t3279 + t3280 + t3296;
  t3230 = 3.5899*t1351*t1480;
  t3236 = 3.5899*t1895;
  t3244 = 3.5899*t2013;
  t3255 = 3.5899*t2027*t2147;
  t3267 = t3230 + t3236 + t3244 + t3255;
  t3318 = -0.5*var2[0]*t3298;
  t3323 = -1.*t802;
  t3338 = 1. + t3323;
  t3361 = -0.9063*t3338;
  t3401 = -1.0567*t802;
  t3406 = t3361 + t3401;
  t3320 = 0.4999*t809;
  t3420 = t3406*t809;
  t3429 = -0.15039999999999998*t913*t1010;
  t3438 = t3320 + t3420 + t3429;
  t3440 = -1.*t913;
  t3449 = 1. + t3440;
  t3455 = -0.4999*t3449;
  t3456 = t913*t3406;
  t3457 = 0.15039999999999998*t809*t1010;
  t3460 = t3455 + t3456 + t3457;
  t3439 = -1.*t3438*t1278;
  t3465 = -1.*t1060*t3460;
  t3469 = t3439 + t3465;
  t3520 = t3438*t1609;
  t3552 = t1278*t3460;
  t3553 = t3520 + t3552;
  t3635 = -0.4999*t809;
  t3675 = -1.*t3406*t809;
  t3701 = 0.15039999999999998*t913*t1010;
  t3721 = t3635 + t3675 + t3701;
  t3755 = 0.4999*t913;
  t3767 = t3755 + t3456 + t3457;
  t3629 = 3.5899*t2003*t3469;
  t3630 = t3438*t1278;
  t3737 = t1060*t3460;
  t3848 = 3.5899*t3553*t2299;
  t3850 = -1.*t1060*t3438;
  t3917 = 0.15039999999999998*t802*t809;
  t3927 = t3917 + t3701;
  t3934 = -0.15039999999999998*t913*t802;
  t3935 = t3934 + t3457;
  t3862 = -1.*t3460*t2281;
  t3725 = t3721*t1278;
  t3770 = t1609*t3767;
  t3803 = t3630 + t3725 + t3737 + t3770;
  t3832 = 3.5899*t2003*t3803;
  t3853 = -1.*t1060*t3721;
  t3856 = -1.*t1278*t3767;
  t3865 = t3850 + t3853 + t3856 + t3862;
  t3866 = 3.5899*t1809*t3865;
  t3895 = t3629 + t3832 + t3848 + t3866;
  t4126 = -0.4999*t913;
  t4132 = -1.*t913*t3406;
  t4139 = -0.15039999999999998*t809*t1010;
  t4144 = t4126 + t4132 + t4139;
  t3999 = 3.5899*t3553*t2538;
  t4011 = 3.5899*t3469*t2360;
  t3931 = t3927*t1278;
  t3948 = t1609*t3935;
  t3961 = t3630 + t3931 + t3737 + t3948;
  t4159 = -1.*t1609*t3460;
  t4173 = -1.*t3438*t2281;
  t3964 = -1.*t1060*t3927;
  t3966 = -1.*t1278*t3935;
  t3973 = t3850 + t3964 + t3966 + t3862;
  t4250 = t1060*t3438;
  t4325 = 0.15039999999999998*t913*t802;
  t4333 = t4325 + t4139;
  t4259 = t3460*t2281;
  t3963 = 3.5899*t2003*t3961;
  t3974 = 3.5899*t1809*t3973;
  t3980 = t3629 + t3963 + t3848 + t3974;
  t4296 = 3.5899*t3803*t2360;
  t4313 = 3.5899*t3961*t2360;
  t4315 = -1.*t3927*t1278;
  t4339 = -1.*t1060*t4333;
  t4353 = -1.*t1060*t3767;
  t4361 = -1.*t1060*t3935;
  t4365 = -1.*t3721*t2281;
  t4400 = -1.*t3927*t2281;
  t4410 = t4315 + t4339 + t4159 + t4353 + t4361 + t4173 + t4365 + t4400;
  t4418 = 3.5899*t2147*t4410;
  t4429 = 3.5899*t1480*t3865;
  t4434 = 3.5899*t1480*t3973;
  t4446 = t1060*t3721;
  t4455 = t1060*t3927;
  t4456 = t3927*t1609;
  t4459 = t1278*t4333;
  t4488 = t1278*t3767;
  t4497 = t1278*t3935;
  t4498 = t4250 + t4446 + t4455 + t4456 + t4459 + t4488 + t4497 + t4259;
  t4499 = 3.5899*t1480*t4498;
  t4502 = t3999 + t4011 + t4296 + t4313 + t4418 + t4429 + t4434 + t4499;
  t4707 = 3.5899*t1480*t3469;
  t4715 = 3.5899*t3553*t2360;
  t4659 = 3.5899*t1809*t3469;
  t4675 = 3.5899*t2003*t3553;
  t4690 = t4659 + t4675;
  t4711 = 3.5899*t1480*t3803;
  t4719 = 3.5899*t2147*t3865;
  t4721 = t4707 + t4711 + t4715 + t4719;
  t4741 = 3.5899*t1480*t3961;
  t4746 = 3.5899*t2147*t3973;
  t4751 = t4707 + t4741 + t4715 + t4746;
  t4820 = 0.4999*t1010;
  t4855 = t3406*t1010;
  t4858 = 0.15039999999999998*t802*t1010;
  t4862 = t4820 + t4855 + t4858;
  t4792 = 0.4999*t802;
  t4799 = t3406*t802;
  t4800 = Power(t1010,2);
  t4801 = -0.15039999999999998*t4800;
  t4815 = t4792 + t4799 + t4801;
  t4895 = 3.5899*t4862*t2003;
  t4898 = 3.5899*t4815*t2299;
  t4900 = t4895 + t4898;
  t4914 = Power(t802,2);
  t4919 = 0.15039999999999998*t4914;
  t4949 = t4792 + t4799 + t4919;
  t5024 = 3.5899*t4815*t2538;
  t4963 = -0.4999*t1010;
  t4964 = -1.*t3406*t1010;
  t4984 = -0.15039999999999998*t802*t1010;
  t4987 = t4963 + t4964 + t4984;
  t5032 = 3.5899*t4862*t2360;
  t4988 = 3.5899*t4987*t2003;
  t5080 = 0. + t4792 + t4799 + t4919;
  t5054 = 3.5899*t4987*t2360;
  t5046 = 3.5899*t4949*t1480;
  t5099 = 3.5899*t5080*t1480;
  t5233 = 3.5899*t4862*t1480;
  t5237 = 3.5899*t4815*t2360;
  t5201 = 3.5899*t4862*t1809;
  t5203 = 3.5899*t4815*t2003;
  t5207 = t5201 + t5203;
  t5245 = t5233 + t5237;
  t5247 = 3.5899*t4987*t1480;
  t5249 = 3.5899*t4949*t2147;
  t5250 = t5247 + t5233 + t5249 + t5237;
  t5268 = 0.26996047999999995*var2[2]*t2299;
  t5270 = 0.26996047999999995*var2[6]*t2538;
  t5276 = 0.26996047999999995*var2[7]*t2538;
  t5284 = t5268 + t5270 + t5276;
  t5285 = var2[0]*t5284;
  t5332 = 0.26996047999999995*var2[0]*t2360;
  p_output1[0]=var2[0]*(-0.5*(7.1798*t1351*t1480 + 7.1798*t1895 + 7.1798*t2013 + 7.1798*t2027*t2147)*var2[2] - 0.5*t2384*var2[6] - 0.5*t2384*var2[7]);
  p_output1[1]=t2608;
  p_output1[2]=t2608;
  p_output1[3]=-0.5*t2651*var2[2] - 0.5*t2726*var2[6] - 0.5*t2726*var2[7];
  p_output1[4]=-0.5*t2651*var2[0];
  p_output1[5]=t2801;
  p_output1[6]=t2801;
  p_output1[7]=var2[0]*(-0.5*(10.7697*t1351*t2003 + 10.7697*t1809*t2027 + 3.5899*t2147*(t1340 + t2537) + 3.5899*t1480*(t2083 + t2813))*var2[2] - 0.5*t3031*var2[6] - 0.5*t3031*var2[7]);
  p_output1[8]=t3224;
  p_output1[9]=t3224;
  p_output1[10]=-0.5*t3267*var2[2] - 0.5*t3298*var2[6] - 0.5*t3298*var2[7];
  p_output1[11]=-0.5*t3267*var2[0];
  p_output1[12]=t3318;
  p_output1[13]=t3318;
  p_output1[14]=var2[0]*(-0.5*(3.5899*t2027*t3469 + 3.5899*t1351*t3553)*var2[2] - 0.5*t3895*var2[6] - 0.5*t3980*var2[7]);
  p_output1[15]=var2[0]*(-0.5*t3895*var2[2] - 0.5*(7.1798*t2360*t3803 + 7.1798*t1480*t3865 + t3999 + t4011 + 3.5899*t2147*(-1.*t1278*t3721 - 2.*t2281*t3721 - 2.*t1060*t3767 - 1.*t1060*t4144 + t4159 + t4173) + 3.5899*t1480*(2.*t1060*t3721 + t1609*t3721 + 2.*t1278*t3767 + t1278*t4144 + t4250 + t4259))*var2[6] - 0.5*t4502*var2[7]);
  p_output1[16]=var2[0]*(-0.5*t3980*var2[2] - 0.5*t4502*var2[6] - 0.5*(7.1798*t2360*t3961 + 7.1798*t1480*t3973 + t3999 + t4011 + 3.5899*t2147*(-2.*t2281*t3927 - 2.*t1060*t3935 + t4159 + t4173 + t4315 + t4339) + 3.5899*t1480*(2.*t1060*t3927 + 2.*t1278*t3935 + t4250 + t4259 + t4456 + t4459))*var2[7]);
  p_output1[17]=-0.5*t4690*var2[2] - 0.5*t4721*var2[6] - 0.5*t4751*var2[7];
  p_output1[18]=-0.5*t4690*var2[0];
  p_output1[19]=-0.5*t4721*var2[0];
  p_output1[20]=-0.5*t4751*var2[0];
  p_output1[21]=var2[0]*(-0.5*(3.5899*t1351*t4815 + 3.5899*t2027*t4862)*var2[2] - 0.5*t4900*var2[6] - 0.5*(t4895 + t4898 + 3.5899*t1809*t4949 + t4988)*var2[7]);
  p_output1[22]=var2[0]*(-0.5*t4900*var2[2] - 0.5*(t5024 + t5032)*var2[6] - 0.5*(t5024 + t5032 + t5046 + t5054)*var2[7]);
  p_output1[23]=var2[0]*(-0.5*(t4895 + t4898 + t4988 + 3.5899*t1809*t5080)*var2[2] - 0.5*(t5024 + t5032 + t5054 + t5099)*var2[6] - 0.5*(3.5899*t2147*t4987 + 7.1798*t2360*t4987 + t5024 + t5032 + t5046 + t5099 + 3.5899*t1480*(0. - 0.15039999999999998*t4914 - 0.4999*t802 - 1.*t3406*t802))*var2[7]);
  p_output1[24]=-0.5*t5207*var2[2] - 0.5*t5245*var2[6] - 0.5*t5250*var2[7];
  p_output1[25]=-0.5*t5207*var2[0];
  p_output1[26]=-0.5*t5245*var2[0];
  p_output1[27]=-0.5*t5250*var2[0];
  p_output1[28]=var2[0]*(0.26996047999999995*t1351*var2[2] + 0.26996047999999995*t2299*var2[6] + 0.26996047999999995*t2299*var2[7]);
  p_output1[29]=t5285;
  p_output1[30]=t5285;
  p_output1[31]=0.26996047999999995*t2003*var2[2] + 0.26996047999999995*t2360*var2[6] + 0.26996047999999995*t2360*var2[7];
  p_output1[32]=0.26996047999999995*t2003*var2[0];
  p_output1[33]=t5332;
  p_output1[34]=t5332;
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

#include "J_Ce1_vec_L6_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L6_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

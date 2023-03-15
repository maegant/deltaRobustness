/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:28 GMT-08:00
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
  double t430;
  double t285;
  double t352;
  double t635;
  double t959;
  double t390;
  double t812;
  double t883;
  double t117;
  double t1313;
  double t1320;
  double t1392;
  double t1405;
  double t1424;
  double t902;
  double t1047;
  double t1070;
  double t1114;
  double t1186;
  double t1259;
  double t1611;
  double t1637;
  double t1640;
  double t1601;
  double t1647;
  double t1658;
  double t1850;
  double t1783;
  double t1816;
  double t1828;
  double t1946;
  double t1947;
  double t1989;
  double t2043;
  double t1836;
  double t1869;
  double t2047;
  double t2056;
  double t2065;
  double t2140;
  double t2148;
  double t2429;
  double t2444;
  double t2453;
  double t2459;
  double t2481;
  double t2498;
  double t2514;
  double t2517;
  double t2528;
  double t2539;
  double t2656;
  double t2660;
  double t2695;
  double t2696;
  double t2740;
  double t2744;
  double t1669;
  double t1707;
  double t1720;
  double t1754;
  double t1762;
  double t3052;
  double t3062;
  double t1301;
  double t1436;
  double t1550;
  double t1564;
  double t2111;
  double t2767;
  double t2768;
  double t2836;
  double t2460;
  double t2545;
  double t2570;
  double t2590;
  double t2708;
  double t2722;
  double t2747;
  double t2761;
  double t2850;
  double t2869;
  double t2908;
  double t2936;
  double t2946;
  double t3388;
  double t3402;
  double t3403;
  double t3411;
  double t3065;
  double t3080;
  double t3114;
  double t3182;
  double t3194;
  double t3199;
  double t3200;
  double t3201;
  double t3207;
  double t3225;
  double t3226;
  double t3238;
  double t3276;
  double t3278;
  double t3282;
  double t3287;
  double t3310;
  double t3311;
  double t3313;
  double t3319;
  double t3326;
  double t3357;
  double t3883;
  double t3914;
  double t3480;
  double t3932;
  double t3946;
  double t3498;
  double t3623;
  double t4075;
  double t4082;
  double t3692;
  double t4577;
  double t4589;
  double t4594;
  double t4610;
  double t4612;
  double t4628;
  double t4640;
  double t4641;
  double t4671;
  double t4672;
  double t4673;
  double t4676;
  double t4681;
  double t2098;
  double t2122;
  double t1958;
  double t1974;
  double t1942;
  double t1981;
  double t2080;
  double t2081;
  double t2137;
  double t2210;
  double t2212;
  double t3369;
  double t3417;
  double t3489;
  double t3523;
  double t3533;
  double t3643;
  double t3650;
  double t3656;
  double t3684;
  double t3694;
  double t4874;
  double t3738;
  double t3740;
  double t3772;
  double t3810;
  double t3820;
  double t3827;
  double t3840;
  double t4886;
  double t4891;
  double t4924;
  double t4934;
  double t4949;
  double t4953;
  double t4954;
  double t4976;
  double t4978;
  double t5016;
  double t5017;
  double t5018;
  double t3926;
  double t3954;
  double t4028;
  double t5041;
  double t4034;
  double t4090;
  double t4101;
  double t4109;
  double t4111;
  double t4124;
  double t4133;
  double t4183;
  double t4195;
  double t4217;
  double t4313;
  double t4374;
  double t4429;
  double t4432;
  double t4434;
  double t4444;
  double t4445;
  double t4665;
  double t2575;
  double t2765;
  double t2847;
  double t2954;
  double t2970;
  double t1293;
  double t1660;
  double t1771;
  double t1776;
  double t5145;
  double t2981;
  double t4841;
  double t4842;
  double t4844;
  double t4853;
  double t4860;
  double t3367;
  double t3602;
  double t3616;
  double t3695;
  double t3707;
  double t5040;
  double t5055;
  double t5056;
  double t5057;
  double t5058;
  double t3867;
  double t4031;
  double t4137;
  double t4162;
  double t4253;
  double t4462;
  double t4486;
  double t5075;
  double t5078;
  double t5084;
  double t5085;
  double t5086;
  double t5097;
  double t5122;
  double t4685;
  double t5151;
  double t5488;
  double t5489;
  double t5502;
  double t4790;
  double t4793;
  double t4794;
  double t4896;
  double t3161;
  double t5235;
  double t5246;
  double t5255;
  double t5069;
  double t5071;
  double t5072;
  double t3809;
  double t3851;
  double t3855;
  double t5352;
  double t5364;
  double t5372;
  double t5378;
  double t5390;
  double t4711;
  double t4722;
  double t4726;
  double t1782;
  double t5530;
  double t5531;
  double t5546;
  double t5718;
  double t5725;
  double t4780;
  double t5198;
  double t5594;
  t430 = Cos(var1[3]);
  t285 = Cos(var1[4]);
  t352 = Sin(var1[3]);
  t635 = Sin(var1[4]);
  t959 = Cos(var1[2]);
  t390 = -1.*t285*t352;
  t812 = -1.*t430*t635;
  t883 = t390 + t812;
  t117 = Sin(var1[2]);
  t1313 = -1.*t285;
  t1320 = 1. + t1313;
  t1392 = -0.9063*t1320;
  t1405 = -1.0567*t285;
  t1424 = t1392 + t1405;
  t902 = -1.*t117*t883;
  t1047 = -1.*t430*t285;
  t1070 = t352*t635;
  t1114 = t1047 + t1070;
  t1186 = t959*t1114;
  t1259 = t902 + t1186;
  t1611 = t430*t285;
  t1637 = -1.*t352*t635;
  t1640 = t1611 + t1637;
  t1601 = t959*t883;
  t1647 = -1.*t117*t1640;
  t1658 = t1601 + t1647;
  t1850 = t959*t1640;
  t1783 = t285*t352;
  t1816 = t430*t635;
  t1828 = t1783 + t1816;
  t1946 = t117*t883;
  t1947 = t1946 + t1850;
  t1989 = -1.*t959*t1640;
  t2043 = t902 + t1989;
  t1836 = -1.*t117*t1828;
  t1869 = t1836 + t1850;
  t2047 = t959*t1828;
  t2056 = t117*t1640;
  t2065 = t2047 + t2056;
  t2140 = t117*t1114;
  t2148 = t1601 + t2140;
  t2429 = 0.4999*t352;
  t2444 = t1424*t352;
  t2453 = -0.15039999999999998*t430*t635;
  t2459 = t2429 + t2444 + t2453;
  t2481 = -1.*t430;
  t2498 = 1. + t2481;
  t2514 = -0.4999*t2498;
  t2517 = t430*t1424;
  t2528 = 0.15039999999999998*t352*t635;
  t2539 = t2514 + t2517 + t2528;
  t2656 = -0.4999*t352;
  t2660 = -1.*t1424*t352;
  t2695 = 0.15039999999999998*t430*t635;
  t2696 = t2656 + t2660 + t2695;
  t2740 = 0.4999*t430;
  t2744 = t2740 + t2517 + t2528;
  t1669 = 0.4999*t285;
  t1707 = t1424*t285;
  t1720 = Power(t635,2);
  t1754 = -0.15039999999999998*t1720;
  t1762 = t1669 + t1707 + t1754;
  t3052 = t117*t1828;
  t3062 = t3052 + t1186;
  t1301 = 0.4999*t635;
  t1436 = t1424*t635;
  t1550 = 0.15039999999999998*t285*t635;
  t1564 = t1301 + t1436 + t1550;
  t2111 = -1.*t117*t1114;
  t2767 = t2459*t1828;
  t2768 = t1640*t2539;
  t2836 = t2767 + t2768;
  t2460 = -1.*t2459*t1640;
  t2545 = -1.*t883*t2539;
  t2570 = t2460 + t2545;
  t2590 = t2459*t1640;
  t2708 = t2696*t1640;
  t2722 = t883*t2539;
  t2747 = t1828*t2744;
  t2761 = t2590 + t2708 + t2722 + t2747;
  t2850 = -1.*t883*t2459;
  t2869 = -1.*t883*t2696;
  t2908 = -1.*t1640*t2744;
  t2936 = -1.*t2539*t1114;
  t2946 = t2850 + t2869 + t2908 + t2936;
  t3388 = -0.4999*t430;
  t3402 = -1.*t430*t1424;
  t3403 = -0.15039999999999998*t352*t635;
  t3411 = t3388 + t3402 + t3403;
  t3065 = 0.26996047999999995*var2[4]*t3062;
  t3080 = 3.5899*t1762*t3062;
  t3114 = 3.5899*t1564*t2148;
  t3182 = 7.1798*t1947*t1658;
  t3194 = 3.5899*t2065*t1259;
  t3199 = 3.5899*t1658*t3062;
  t3200 = t2047 + t2111;
  t3201 = 3.5899*t1947*t3200;
  t3207 = 3.5899*t1869*t2148;
  t3225 = 7.1798*t1259*t2148;
  t3226 = t3182 + t3194 + t3199 + t3201 + t3207 + t3225;
  t3238 = -0.5*var2[1]*t3226;
  t3276 = Power(t1947,2);
  t3278 = 7.1798*t3276;
  t3282 = 7.1798*t1947*t3062;
  t3287 = 7.1798*t2065*t2148;
  t3310 = Power(t2148,2);
  t3311 = 7.1798*t3310;
  t3313 = t3278 + t3282 + t3287 + t3311;
  t3319 = -0.5*var2[0]*t3313;
  t3326 = 3.5899*t2836*t3062;
  t3357 = 3.5899*t2570*t2148;
  t3883 = 0.15039999999999998*t285*t352;
  t3914 = t3883 + t2695;
  t3480 = -1.*t1828*t2539;
  t3932 = -0.15039999999999998*t430*t285;
  t3946 = t3932 + t2528;
  t3498 = -1.*t2459*t1114;
  t3623 = t883*t2459;
  t4075 = 0.15039999999999998*t430*t285;
  t4082 = t4075 + t3403;
  t3692 = t2539*t1114;
  t4577 = 7.1798*t1947*t2065;
  t4589 = 7.1798*t1947*t2148;
  t4594 = t4577 + t4589;
  t4610 = 3.5899*t1947*t1869;
  t4612 = 3.5899*t1658*t2065;
  t4628 = 3.5899*t1947*t1259;
  t4640 = 3.5899*t1658*t2148;
  t4641 = t4610 + t4612 + t4628 + t4640;
  t4671 = 3.5899*t1947*t2570;
  t4672 = 3.5899*t1947*t2761;
  t4673 = 3.5899*t2836*t2148;
  t4676 = 3.5899*t2065*t2946;
  t4681 = t4671 + t4672 + t4673 + t4676;
  t2098 = -1.*t959*t883;
  t2122 = t2098 + t2111;
  t1958 = -1.*t959*t1828;
  t1974 = t1958 + t1647;
  t1942 = 7.1798*t1869*t1658;
  t1981 = 3.5899*t1947*t1974;
  t2080 = 3.5899*t2043*t2065;
  t2081 = 7.1798*t1658*t1259;
  t2137 = 3.5899*t1947*t2122;
  t2210 = 3.5899*t2043*t2148;
  t2212 = t1942 + t1981 + t2080 + t2081 + t2137 + t2210;
  t3369 = -1.*t2696*t1640;
  t3417 = -1.*t883*t3411;
  t3489 = -2.*t883*t2744;
  t3523 = -2.*t2696*t1114;
  t3533 = t3369 + t3417 + t3480 + t3489 + t3498 + t3523;
  t3643 = 2.*t883*t2696;
  t3650 = t2696*t1828;
  t3656 = t1640*t3411;
  t3684 = 2.*t1640*t2744;
  t3694 = t3623 + t3643 + t3650 + t3656 + t3684 + t3692;
  t4874 = 0.26996047999999995*var2[4]*t3200;
  t3738 = Power(t285,2);
  t3740 = 0.15039999999999998*t3738;
  t3772 = 0. + t1669 + t1707 + t3740;
  t3810 = -0.4999*t635;
  t3820 = -1.*t1424*t635;
  t3827 = -0.15039999999999998*t285*t635;
  t3840 = t3810 + t3820 + t3827;
  t4886 = 3.5899*t1564*t1259;
  t4891 = 3.5899*t1762*t3200;
  t4924 = Power(t1658,2);
  t4934 = 7.1798*t4924;
  t4949 = 7.1798*t1869*t1259;
  t4953 = Power(t1259,2);
  t4954 = 7.1798*t4953;
  t4976 = 7.1798*t1658*t3200;
  t4978 = t4934 + t4949 + t4954 + t4976;
  t5016 = -0.5*var2[1]*t4978;
  t5017 = -0.5*var2[0]*t3226;
  t5018 = 3.5899*t2570*t1259;
  t3926 = t3914*t1640;
  t3954 = t1828*t3946;
  t4028 = t2590 + t3926 + t2722 + t3954;
  t5041 = 3.5899*t2836*t3200;
  t4034 = -1.*t3914*t1640;
  t4090 = -1.*t883*t4082;
  t4101 = -1.*t883*t2744;
  t4109 = -1.*t883*t3946;
  t4111 = -1.*t2696*t1114;
  t4124 = -1.*t3914*t1114;
  t4133 = t4034 + t4090 + t3480 + t4101 + t4109 + t3498 + t4111 + t4124;
  t4183 = -1.*t883*t3914;
  t4195 = -1.*t1640*t3946;
  t4217 = t2850 + t4183 + t4195 + t2936;
  t4313 = t883*t2696;
  t4374 = t883*t3914;
  t4429 = t3914*t1828;
  t4432 = t1640*t4082;
  t4434 = t1640*t2744;
  t4444 = t1640*t3946;
  t4445 = t3623 + t4313 + t4374 + t4429 + t4432 + t4434 + t4444 + t3692;
  t4665 = -0.5*var2[3]*t4641;
  t2575 = 3.5899*t1658*t2570;
  t2765 = 3.5899*t1658*t2761;
  t2847 = 3.5899*t2836*t1259;
  t2954 = 3.5899*t1869*t2946;
  t2970 = t2575 + t2765 + t2847 + t2954;
  t1293 = 0.26996047999999995*var2[4]*t1259;
  t1660 = 3.5899*t1564*t1658;
  t1771 = 3.5899*t1762*t1259;
  t1776 = t1660 + t1771;
  t5145 = t1942 + t2081;
  t2981 = -0.5*var2[2]*t2970;
  t4841 = 3.5899*t2043*t2570;
  t4842 = 3.5899*t2043*t2761;
  t4844 = 3.5899*t2836*t2122;
  t4853 = 3.5899*t1974*t2946;
  t4860 = t4841 + t4842 + t4844 + t4853;
  t3367 = 7.1798*t2761*t2148;
  t3602 = 3.5899*t2065*t3533;
  t3616 = 7.1798*t1947*t2946;
  t3695 = 3.5899*t1947*t3694;
  t3707 = t3326 + t3357 + t3367 + t3602 + t3616 + t3695;
  t5040 = 7.1798*t2761*t1259;
  t5055 = 3.5899*t1869*t3533;
  t5056 = 7.1798*t1658*t2946;
  t5057 = 3.5899*t1658*t3694;
  t5058 = t5018 + t5040 + t5041 + t5055 + t5056 + t5057;
  t3867 = 3.5899*t2761*t2148;
  t4031 = 3.5899*t4028*t2148;
  t4137 = 3.5899*t2065*t4133;
  t4162 = 3.5899*t1947*t2946;
  t4253 = 3.5899*t1947*t4217;
  t4462 = 3.5899*t1947*t4445;
  t4486 = t3326 + t3357 + t3867 + t4031 + t4137 + t4162 + t4253 + t4462;
  t5075 = 3.5899*t2761*t1259;
  t5078 = 3.5899*t4028*t1259;
  t5084 = 3.5899*t1869*t4133;
  t5085 = 3.5899*t1658*t2946;
  t5086 = 3.5899*t1658*t4217;
  t5097 = 3.5899*t1658*t4445;
  t5122 = t5018 + t5075 + t5078 + t5041 + t5084 + t5085 + t5086 + t5097;
  t4685 = -0.5*var2[3]*t4681;
  t5151 = -0.5*var2[3]*t2970;
  t5488 = 7.1798*t2836*t2761;
  t5489 = 7.1798*t2570*t2946;
  t5502 = t5488 + t5489;
  t4790 = 3.5899*t1564*t2043;
  t4793 = 3.5899*t1762*t2122;
  t4794 = t4790 + t4793;
  t4896 = t4886 + t4891;
  t3161 = t3080 + t3114;
  t5235 = 3.5899*t1564*t3533;
  t5246 = 3.5899*t1762*t3694;
  t5255 = t5235 + t5246;
  t5069 = 3.5899*t3772*t1658;
  t5071 = 3.5899*t3840*t1259;
  t5072 = t5069 + t5071 + t4886 + t4891;
  t3809 = 3.5899*t3772*t1947;
  t3851 = 3.5899*t3840*t2148;
  t3855 = t3809 + t3080 + t3851 + t3114;
  t5352 = 3.5899*t3840*t2761;
  t5364 = 3.5899*t1564*t4133;
  t5372 = 3.5899*t3772*t2946;
  t5378 = 3.5899*t1762*t4445;
  t5390 = t5352 + t5364 + t5372 + t5378;
  t4711 = 3.5899*t1564*t1947;
  t4722 = 3.5899*t1762*t2148;
  t4726 = t4711 + t4722;
  t1782 = -0.5*var2[3]*t1776;
  t5530 = 3.5899*t1762*t2761;
  t5531 = 3.5899*t1564*t2946;
  t5546 = t5530 + t5531;
  t5718 = 0.26996047999999995*var2[0]*t3062;
  t5725 = 0.26996047999999995*var2[1]*t3200;
  t4780 = 0.26996047999999995*var2[3]*t2148;
  t5198 = 0.26996047999999995*var2[3]*t1259;
  t5594 = 0.26996047999999995*var2[3]*t2761;
  p_output1[0]=(t1293 + t1782 + t2981 - 0.5*(7.1798*t1259*t1947 + 7.1798*t1869*t1947 + 7.1798*t1658*t2065 + 7.1798*t1658*t2148)*var2[0] - 0.5*t2212*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t3065 + t3238 + t3319 - 0.5*t3707*var2[2] - 0.5*t3161*var2[3]);
  p_output1[2]=var2[3]*(t3065 + t3238 + t3319 - 0.5*t4486*var2[2] - 0.5*t3855*var2[3]);
  p_output1[3]=-0.5*t4594*var2[3];
  p_output1[4]=t4665;
  p_output1[5]=t4685;
  p_output1[6]=-0.5*t4594*var2[0] - 0.5*t4641*var2[1] - 0.5*t4681*var2[2] - 1.*t4726*var2[3] + 0.26996047999999995*t2148*var2[4];
  p_output1[7]=t4780;
  p_output1[8]=var2[3]*(-0.5*t2212*var2[0] - 0.5*(7.1798*t1658*t1974 + 7.1798*t1259*t2043 + 7.1798*t1869*t2043 + 7.1798*t1658*t2122)*var2[1] - 0.5*t4860*var2[2] - 0.5*t4794*var2[3] + 0.26996047999999995*t2122*var2[4]);
  p_output1[9]=var2[3]*(t4874 + t5016 + t5017 - 0.5*t5058*var2[2] - 0.5*t4896*var2[3]);
  p_output1[10]=var2[3]*(t4874 + t5016 + t5017 - 0.5*t5122*var2[2] - 0.5*t5072*var2[3]);
  p_output1[11]=t4665;
  p_output1[12]=-0.5*t5145*var2[3];
  p_output1[13]=t5151;
  p_output1[14]=t1293 + t2981 - 0.5*t4641*var2[0] - 0.5*t5145*var2[1] - 1.*t1776*var2[3];
  p_output1[15]=t5198;
  p_output1[16]=(-0.5*t2970*var2[0] - 0.5*t4860*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t3707*var2[0] - 0.5*t5058*var2[1] - 0.5*(7.1798*Power(t2761,2) + 7.1798*Power(t2946,2) + 7.1798*t2570*t3533 + 7.1798*t2836*t3694)*var2[2] - 0.5*t5255*var2[3] + 0.26996047999999995*t3694*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t4486*var2[0] - 0.5*t5122*var2[1] - 0.5*(7.1798*t2761*t4028 + 7.1798*t2570*t4133 + 7.1798*t2946*t4217 + 7.1798*t2836*t4445)*var2[2] - 0.5*t5390*var2[3] + 0.26996047999999995*t4445*var2[4]);
  p_output1[19]=t4685;
  p_output1[20]=t5151;
  p_output1[21]=-0.5*t5502*var2[3];
  p_output1[22]=-0.5*t4681*var2[0] - 0.5*t2970*var2[1] - 0.5*t5502*var2[2] - 1.*t5546*var2[3] + 0.26996047999999995*t2761*var2[4];
  p_output1[23]=t5594;
  p_output1[24]=(-0.5*t1776*var2[0] - 0.5*t4794*var2[1])*var2[3];
  p_output1[25]=(-0.5*t3161*var2[0] - 0.5*t4896*var2[1] - 0.5*t5255*var2[2])*var2[3];
  p_output1[26]=(-0.5*t3855*var2[0] - 0.5*t5072*var2[1] - 0.5*t5390*var2[2])*var2[3];
  p_output1[27]=-0.5*t4726*var2[3];
  p_output1[28]=t1782;
  p_output1[29]=-0.5*t5546*var2[3];
  p_output1[30]=-0.5*t4726*var2[0] - 0.5*t1776*var2[1] - 0.5*t5546*var2[2];
  p_output1[31]=(0.26996047999999995*t1259*var2[0] + 0.26996047999999995*t2122*var2[1])*var2[3];
  p_output1[32]=(t5718 + t5725 + 0.26996047999999995*t3694*var2[2])*var2[3];
  p_output1[33]=(t5718 + t5725 + 0.26996047999999995*t4445*var2[2])*var2[3];
  p_output1[34]=t4780;
  p_output1[35]=t5198;
  p_output1[36]=t5594;
  p_output1[37]=0.26996047999999995*t2148*var2[0] + 0.26996047999999995*t1259*var2[1] + 0.26996047999999995*t2761*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L3_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L3_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

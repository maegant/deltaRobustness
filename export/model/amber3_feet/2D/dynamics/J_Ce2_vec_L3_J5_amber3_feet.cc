/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:29 GMT-08:00
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
  double t1021;
  double t837;
  double t915;
  double t1070;
  double t501;
  double t1249;
  double t1409;
  double t1436;
  double t1550;
  double t1564;
  double t1574;
  double t990;
  double t1103;
  double t1163;
  double t1720;
  double t1738;
  double t1754;
  double t1850;
  double t1869;
  double t1922;
  double t1405;
  double t1601;
  double t1186;
  double t1259;
  double t1301;
  double t1364;
  double t1370;
  double t1386;
  double t1660;
  double t1664;
  double t1669;
  double t1707;
  double t1762;
  double t1769;
  double t2137;
  double t2140;
  double t2214;
  double t2220;
  double t2222;
  double t2224;
  double t2243;
  double t2429;
  double t2444;
  double t2656;
  double t2695;
  double t2708;
  double t2712;
  double t2722;
  double t2740;
  double t2747;
  double t2761;
  double t2765;
  double t2767;
  double t2847;
  double t2903;
  double t2946;
  double t3016;
  double t3020;
  double t1607;
  double t1611;
  double t1658;
  double t2047;
  double t2056;
  double t2065;
  double t3276;
  double t3278;
  double t1783;
  double t1797;
  double t1800;
  double t1816;
  double t1946;
  double t1947;
  double t1974;
  double t1981;
  double t2370;
  double t3080;
  double t3114;
  double t3123;
  double t2713;
  double t2768;
  double t2799;
  double t2836;
  double t3013;
  double t2954;
  double t3038;
  double t3052;
  double t3809;
  double t3810;
  double t3736;
  double t3738;
  double t3740;
  double t3164;
  double t3199;
  double t3182;
  double t3194;
  double t3200;
  double t3883;
  double t3926;
  double t3932;
  double t3282;
  double t3287;
  double t3310;
  double t3326;
  double t3379;
  double t3388;
  double t3403;
  double t3533;
  double t3583;
  double t3596;
  double t3602;
  double t3604;
  double t3616;
  double t3620;
  double t3623;
  double t3633;
  double t3650;
  double t3656;
  double t3692;
  double t3694;
  double t3695;
  double t3720;
  double t3727;
  double t3867;
  double t3954;
  double t4005;
  double t4075;
  double t4358;
  double t4376;
  double t4407;
  double t4432;
  double t4866;
  double t4869;
  double t4870;
  double t4886;
  double t4891;
  double t4782;
  double t4785;
  double t4790;
  double t4796;
  double t4805;
  double t4809;
  double t4818;
  double t4821;
  double t4831;
  double t4839;
  double t4841;
  double t4842;
  double t4844;
  double t2332;
  double t2376;
  double t2148;
  double t2200;
  double t2136;
  double t2210;
  double t2301;
  double t2314;
  double t2383;
  double t2453;
  double t2514;
  double t3772;
  double t3827;
  double t3840;
  double t4028;
  double t4031;
  double t4133;
  double t4137;
  double t4162;
  double t4253;
  double t4313;
  double t4321;
  double t4368;
  double t4374;
  double t4414;
  double t4429;
  double t4434;
  double t5135;
  double t4537;
  double t4559;
  double t4577;
  double t4580;
  double t5148;
  double t4589;
  double t5176;
  double t5179;
  double t5213;
  double t5221;
  double t5224;
  double t5228;
  double t5231;
  double t5234;
  double t5235;
  double t5246;
  double t5257;
  double t5259;
  double t5263;
  double t4672;
  double t4673;
  double t4676;
  double t4711;
  double t4722;
  double t4748;
  double t4823;
  double t2834;
  double t3062;
  double t3157;
  double t3201;
  double t3207;
  double t1771;
  double t1942;
  double t2043;
  double t2080;
  double t2081;
  double t2122;
  double t5455;
  double t3225;
  double t5078;
  double t5084;
  double t5085;
  double t5086;
  double t5097;
  double t3851;
  double t3860;
  double t4217;
  double t4338;
  double t4356;
  double t4444;
  double t4445;
  double t5260;
  double t5262;
  double t5272;
  double t5290;
  double t5292;
  double t5294;
  double t5299;
  double t4671;
  double t4687;
  double t4692;
  double t4750;
  double t4763;
  double t5373;
  double t5376;
  double t5378;
  double t5400;
  double t5401;
  double t4853;
  double t5457;
  double t5736;
  double t5739;
  double t5740;
  double t5741;
  double t5746;
  double t5730;
  double t5732;
  double t5733;
  double t5038;
  double t5040;
  double t5041;
  double t5055;
  double t5056;
  double t5158;
  double t5180;
  double t3311;
  double t3357;
  double t5558;
  double t5573;
  double t5574;
  double t5576;
  double t5591;
  double t5339;
  double t5348;
  double t5352;
  double t5363;
  double t5364;
  double t4587;
  double t4600;
  double t4610;
  double t4612;
  double t4628;
  double t5637;
  double t5644;
  double t5655;
  double t5658;
  double t5673;
  double t5677;
  double t5683;
  double t5685;
  double t4909;
  double t5461;
  double t5751;
  double t5913;
  double t5916;
  double t5917;
  double t5960;
  double t5963;
  double t1392;
  t1021 = Cos(var1[3]);
  t837 = Cos(var1[4]);
  t915 = Sin(var1[3]);
  t1070 = Sin(var1[4]);
  t501 = Sin(var1[2]);
  t1249 = Cos(var1[2]);
  t1409 = -1.*t837;
  t1436 = 1. + t1409;
  t1550 = -0.9063*t1436;
  t1564 = -1.0567*t837;
  t1574 = t1550 + t1564;
  t990 = -1.*t837*t915;
  t1103 = -1.*t1021*t1070;
  t1163 = t990 + t1103;
  t1720 = t1021*t837;
  t1738 = -1.*t915*t1070;
  t1754 = t1720 + t1738;
  t1850 = t1249*t1163;
  t1869 = -1.*t501*t1754;
  t1922 = t1850 + t1869;
  t1405 = 0.4999*t837;
  t1601 = t1574*t837;
  t1186 = -1.*t501*t1163;
  t1259 = -1.*t1021*t837;
  t1301 = t915*t1070;
  t1364 = t1259 + t1301;
  t1370 = t1249*t1364;
  t1386 = t1186 + t1370;
  t1660 = t837*t915;
  t1664 = t1021*t1070;
  t1669 = t1660 + t1664;
  t1707 = -1.*t501*t1669;
  t1762 = t1249*t1754;
  t1769 = t1707 + t1762;
  t2137 = t501*t1163;
  t2140 = t2137 + t1762;
  t2214 = -1.*t1249*t1754;
  t2220 = t1186 + t2214;
  t2222 = t1249*t1669;
  t2224 = t501*t1754;
  t2243 = t2222 + t2224;
  t2429 = t501*t1364;
  t2444 = t1850 + t2429;
  t2656 = 0.4999*t915;
  t2695 = t1574*t915;
  t2708 = -0.15039999999999998*t1021*t1070;
  t2712 = t2656 + t2695 + t2708;
  t2722 = -1.*t1021;
  t2740 = 1. + t2722;
  t2747 = -0.4999*t2740;
  t2761 = t1021*t1574;
  t2765 = 0.15039999999999998*t915*t1070;
  t2767 = t2747 + t2761 + t2765;
  t2847 = 0.15039999999999998*t837*t915;
  t2903 = 0.15039999999999998*t1021*t1070;
  t2946 = t2847 + t2903;
  t3016 = -0.15039999999999998*t1021*t837;
  t3020 = t3016 + t2765;
  t1607 = Power(t837,2);
  t1611 = 0.15039999999999998*t1607;
  t1658 = t1405 + t1601 + t1611;
  t2047 = Power(t1070,2);
  t2056 = -0.15039999999999998*t2047;
  t2065 = t1405 + t1601 + t2056;
  t3276 = t501*t1669;
  t3278 = t3276 + t1370;
  t1783 = -0.4999*t1070;
  t1797 = -1.*t1574*t1070;
  t1800 = -0.15039999999999998*t837*t1070;
  t1816 = t1783 + t1797 + t1800;
  t1946 = 0.4999*t1070;
  t1947 = t1574*t1070;
  t1974 = 0.15039999999999998*t837*t1070;
  t1981 = t1946 + t1947 + t1974;
  t2370 = -1.*t501*t1364;
  t3080 = t2712*t1669;
  t3114 = t1754*t2767;
  t3123 = t3080 + t3114;
  t2713 = -1.*t2712*t1754;
  t2768 = -1.*t1163*t2767;
  t2799 = t2713 + t2768;
  t2836 = t2712*t1754;
  t3013 = t1163*t2767;
  t2954 = t2946*t1754;
  t3038 = t1669*t3020;
  t3052 = t2836 + t2954 + t3013 + t3038;
  t3809 = 0.4999*t1021;
  t3810 = t3809 + t2761 + t2765;
  t3736 = -0.4999*t915;
  t3738 = -1.*t1574*t915;
  t3740 = t3736 + t3738 + t2903;
  t3164 = -1.*t1163*t2712;
  t3199 = -1.*t2767*t1364;
  t3182 = -1.*t1163*t2946;
  t3194 = -1.*t1754*t3020;
  t3200 = t3164 + t3182 + t3194 + t3199;
  t3883 = 0.15039999999999998*t1021*t837;
  t3926 = -0.15039999999999998*t915*t1070;
  t3932 = t3883 + t3926;
  t3282 = 0.26996047999999995*var2[4]*t3278;
  t3287 = 3.5899*t1658*t2140;
  t3310 = 3.5899*t2065*t3278;
  t3326 = 3.5899*t1981*t2444;
  t3379 = 7.1798*t2140*t1922;
  t3388 = 3.5899*t2243*t1386;
  t3403 = 3.5899*t1922*t3278;
  t3533 = t2222 + t2370;
  t3583 = 3.5899*t2140*t3533;
  t3596 = 3.5899*t1769*t2444;
  t3602 = 7.1798*t1386*t2444;
  t3604 = t3379 + t3388 + t3403 + t3583 + t3596 + t3602;
  t3616 = -0.5*var2[1]*t3604;
  t3620 = Power(t2140,2);
  t3623 = 7.1798*t3620;
  t3633 = 7.1798*t2140*t3278;
  t3650 = 7.1798*t2243*t2444;
  t3656 = Power(t2444,2);
  t3692 = 7.1798*t3656;
  t3694 = t3623 + t3633 + t3650 + t3692;
  t3695 = -0.5*var2[0]*t3694;
  t3720 = 3.5899*t3123*t3278;
  t3727 = 3.5899*t2799*t2444;
  t3867 = -1.*t2946*t1754;
  t3954 = -1.*t1163*t3932;
  t4005 = -1.*t1669*t2767;
  t4075 = -1.*t2712*t1364;
  t4358 = t1163*t2712;
  t4376 = t2946*t1669;
  t4407 = t1754*t3932;
  t4432 = t2767*t1364;
  t4866 = 3.5899*t1816*t2140;
  t4869 = 3.5899*t1981*t2140;
  t4870 = 3.5899*t1658*t2243;
  t4886 = 3.5899*t2065*t2444;
  t4891 = t4866 + t4869 + t4870 + t4886;
  t4782 = 7.1798*t2140*t2243;
  t4785 = 7.1798*t2140*t2444;
  t4790 = t4782 + t4785;
  t4796 = 3.5899*t2140*t1769;
  t4805 = 3.5899*t1922*t2243;
  t4809 = 3.5899*t2140*t1386;
  t4818 = 3.5899*t1922*t2444;
  t4821 = t4796 + t4805 + t4809 + t4818;
  t4831 = 3.5899*t2140*t2799;
  t4839 = 3.5899*t2140*t3052;
  t4841 = 3.5899*t3123*t2444;
  t4842 = 3.5899*t2243*t3200;
  t4844 = t4831 + t4839 + t4841 + t4842;
  t2332 = -1.*t1249*t1163;
  t2376 = t2332 + t2370;
  t2148 = -1.*t1249*t1669;
  t2200 = t2148 + t1869;
  t2136 = 7.1798*t1769*t1922;
  t2210 = 3.5899*t2140*t2200;
  t2301 = 3.5899*t2220*t2243;
  t2314 = 7.1798*t1922*t1386;
  t2383 = 3.5899*t2140*t2376;
  t2453 = 3.5899*t2220*t2444;
  t2514 = t2136 + t2210 + t2301 + t2314 + t2383 + t2453;
  t3772 = t3740*t1754;
  t3827 = t1669*t3810;
  t3840 = t2836 + t3772 + t3013 + t3827;
  t4028 = -1.*t1163*t3810;
  t4031 = -1.*t1163*t3020;
  t4133 = -1.*t3740*t1364;
  t4137 = -1.*t2946*t1364;
  t4162 = t3867 + t3954 + t4005 + t4028 + t4031 + t4075 + t4133 + t4137;
  t4253 = -1.*t1163*t3740;
  t4313 = -1.*t1754*t3810;
  t4321 = t3164 + t4253 + t4313 + t3199;
  t4368 = t1163*t3740;
  t4374 = t1163*t2946;
  t4414 = t1754*t3810;
  t4429 = t1754*t3020;
  t4434 = t4358 + t4368 + t4374 + t4376 + t4407 + t4414 + t4429 + t4432;
  t5135 = 0.26996047999999995*var2[4]*t3533;
  t4537 = -0.4999*t837;
  t4559 = -1.*t1574*t837;
  t4577 = -0.15039999999999998*t1607;
  t4580 = 0. + t4537 + t4559 + t4577;
  t5148 = 3.5899*t1658*t1922;
  t4589 = 0. + t1405 + t1601 + t1611;
  t5176 = 3.5899*t1981*t1386;
  t5179 = 3.5899*t2065*t3533;
  t5213 = Power(t1922,2);
  t5221 = 7.1798*t5213;
  t5224 = 7.1798*t1769*t1386;
  t5228 = Power(t1386,2);
  t5231 = 7.1798*t5228;
  t5234 = 7.1798*t1922*t3533;
  t5235 = t5221 + t5224 + t5231 + t5234;
  t5246 = -0.5*var2[1]*t5235;
  t5257 = -0.5*var2[0]*t3604;
  t5259 = 3.5899*t2799*t1386;
  t5263 = 3.5899*t3123*t3533;
  t4672 = -2.*t1163*t3020;
  t4673 = -2.*t2946*t1364;
  t4676 = t3867 + t3954 + t4005 + t4672 + t4075 + t4673;
  t4711 = 2.*t1163*t2946;
  t4722 = 2.*t1754*t3020;
  t4748 = t4358 + t4711 + t4376 + t4407 + t4722 + t4432;
  t4823 = -0.5*var2[4]*t4821;
  t2834 = 3.5899*t1922*t2799;
  t3062 = 3.5899*t1922*t3052;
  t3157 = 3.5899*t3123*t1386;
  t3201 = 3.5899*t1769*t3200;
  t3207 = t2834 + t3062 + t3157 + t3201;
  t1771 = 3.5899*t1658*t1769;
  t1942 = 3.5899*t1816*t1922;
  t2043 = 3.5899*t1981*t1922;
  t2080 = 3.5899*t2065*t1386;
  t2081 = t1771 + t1942 + t2043 + t2080;
  t2122 = -0.5*var2[3]*t2081;
  t5455 = t2136 + t2314;
  t3225 = -0.5*var2[2]*t3207;
  t5078 = 3.5899*t2220*t2799;
  t5084 = 3.5899*t2220*t3052;
  t5085 = 3.5899*t3123*t2376;
  t5086 = 3.5899*t2200*t3200;
  t5097 = t5078 + t5084 + t5085 + t5086;
  t3851 = 3.5899*t3840*t2444;
  t3860 = 3.5899*t3052*t2444;
  t4217 = 3.5899*t2243*t4162;
  t4338 = 3.5899*t2140*t4321;
  t4356 = 3.5899*t2140*t3200;
  t4444 = 3.5899*t2140*t4434;
  t4445 = t3720 + t3727 + t3851 + t3860 + t4217 + t4338 + t4356 + t4444;
  t5260 = 3.5899*t3840*t1386;
  t5262 = 3.5899*t3052*t1386;
  t5272 = 3.5899*t1769*t4162;
  t5290 = 3.5899*t1922*t4321;
  t5292 = 3.5899*t1922*t3200;
  t5294 = 3.5899*t1922*t4434;
  t5299 = t5259 + t5260 + t5262 + t5263 + t5272 + t5290 + t5292 + t5294;
  t4671 = 7.1798*t3052*t2444;
  t4687 = 3.5899*t2243*t4676;
  t4692 = 7.1798*t2140*t3200;
  t4750 = 3.5899*t2140*t4748;
  t4763 = t3720 + t3727 + t4671 + t4687 + t4692 + t4750;
  t5373 = 7.1798*t3052*t1386;
  t5376 = 3.5899*t1769*t4676;
  t5378 = 7.1798*t1922*t3200;
  t5400 = 3.5899*t1922*t4748;
  t5401 = t5259 + t5373 + t5263 + t5376 + t5378 + t5400;
  t4853 = -0.5*var2[4]*t4844;
  t5457 = -0.5*var2[4]*t3207;
  t5736 = 3.5899*t1658*t2799;
  t5739 = 3.5899*t1816*t3123;
  t5740 = 3.5899*t2065*t3052;
  t5741 = 3.5899*t1981*t3200;
  t5746 = t5736 + t5739 + t5740 + t5741;
  t5730 = 7.1798*t3123*t3052;
  t5732 = 7.1798*t2799*t3200;
  t5733 = t5730 + t5732;
  t5038 = 3.5899*t1816*t2220;
  t5040 = 3.5899*t1981*t2220;
  t5041 = 3.5899*t1658*t2200;
  t5055 = 3.5899*t2065*t2376;
  t5056 = t5038 + t5040 + t5041 + t5055;
  t5158 = 3.5899*t1816*t1386;
  t5180 = t5148 + t5158 + t5176 + t5179;
  t3311 = 3.5899*t1816*t2444;
  t3357 = t3287 + t3310 + t3311 + t3326;
  t5558 = 3.5899*t1816*t3840;
  t5573 = 3.5899*t1981*t4162;
  t5574 = 3.5899*t1658*t4321;
  t5576 = 3.5899*t2065*t4434;
  t5591 = t5558 + t5573 + t5574 + t5576;
  t5339 = 3.5899*t1816*t1769;
  t5348 = 3.5899*t4580*t1922;
  t5352 = 3.5899*t4589*t1922;
  t5363 = 7.1798*t1816*t1386;
  t5364 = t5339 + t5348 + t5148 + t5352 + t5363 + t5176 + t5179;
  t4587 = 3.5899*t4580*t2140;
  t4600 = 3.5899*t4589*t2140;
  t4610 = 3.5899*t1816*t2243;
  t4612 = 7.1798*t1816*t2444;
  t4628 = t4587 + t3287 + t4600 + t4610 + t3310 + t4612 + t3326;
  t5637 = 3.5899*t1816*t2799;
  t5644 = 3.5899*t4580*t3123;
  t5655 = 7.1798*t1816*t3052;
  t5658 = 3.5899*t1981*t4676;
  t5673 = 3.5899*t1658*t3200;
  t5677 = 3.5899*t4589*t3200;
  t5683 = 3.5899*t2065*t4748;
  t5685 = t5637 + t5644 + t5655 + t5658 + t5673 + t5677 + t5683;
  t4909 = -0.5*var2[4]*t4891;
  t5461 = -0.5*var2[4]*t2081;
  t5751 = -0.5*var2[4]*t5746;
  t5913 = 7.1798*t1658*t1981;
  t5916 = 7.1798*t1816*t2065;
  t5917 = t5913 + t5916;
  t5960 = 0.26996047999999995*var2[0]*t3278;
  t5963 = 0.26996047999999995*var2[1]*t3533;
  t1392 = 0.26996047999999995*var2[4]*t1386;
  p_output1[0]=(t1392 + t2122 + t3225 - 0.5*(7.1798*t1386*t2140 + 7.1798*t1769*t2140 + 7.1798*t1922*t2243 + 7.1798*t1922*t2444)*var2[0] - 0.5*t2514*var2[1])*var2[4];
  p_output1[1]=(t3282 + t3616 + t3695 - 0.5*t4445*var2[2] - 0.5*t3357*var2[3])*var2[4];
  p_output1[2]=(t3282 + t3616 + t3695 - 0.5*t4763*var2[2] - 0.5*t4628*var2[3])*var2[4];
  p_output1[3]=-0.5*t4790*var2[4];
  p_output1[4]=t4823;
  p_output1[5]=t4853;
  p_output1[6]=t4909;
  p_output1[7]=-0.5*t4790*var2[0] - 0.5*t4821*var2[1] - 0.5*t4844*var2[2] - 0.5*t4891*var2[3] + 0.5399209599999999*t2444*var2[4];
  p_output1[8]=var2[4]*(-0.5*t2514*var2[0] - 0.5*(7.1798*t1922*t2200 + 7.1798*t1386*t2220 + 7.1798*t1769*t2220 + 7.1798*t1922*t2376)*var2[1] - 0.5*t5097*var2[2] - 0.5*t5056*var2[3] + 0.26996047999999995*t2376*var2[4]);
  p_output1[9]=(t5135 + t5246 + t5257 - 0.5*t5299*var2[2] - 0.5*t5180*var2[3])*var2[4];
  p_output1[10]=(t5135 + t5246 + t5257 - 0.5*t5401*var2[2] - 0.5*t5364*var2[3])*var2[4];
  p_output1[11]=t4823;
  p_output1[12]=-0.5*t5455*var2[4];
  p_output1[13]=t5457;
  p_output1[14]=t5461;
  p_output1[15]=t2122 + t3225 - 0.5*t4821*var2[0] - 0.5*t5455*var2[1] + 0.5399209599999999*t1386*var2[4];
  p_output1[16]=(-0.5*t3207*var2[0] - 0.5*t5097*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t4445*var2[0] - 0.5*t5299*var2[1] - 0.5*(7.1798*t3052*t3840 + 7.1798*t2799*t4162 + 7.1798*t3200*t4321 + 7.1798*t3123*t4434)*var2[2] - 0.5*t5591*var2[3] + 0.26996047999999995*t4434*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t4763*var2[0] - 0.5*t5401*var2[1] - 0.5*(7.1798*Power(t3052,2) + 7.1798*Power(t3200,2) + 7.1798*t2799*t4676 + 7.1798*t3123*t4748)*var2[2] - 0.5*t5685*var2[3] + 0.26996047999999995*t4748*var2[4]);
  p_output1[19]=t4853;
  p_output1[20]=t5457;
  p_output1[21]=-0.5*t5733*var2[4];
  p_output1[22]=t5751;
  p_output1[23]=-0.5*t4844*var2[0] - 0.5*t3207*var2[1] - 0.5*t5733*var2[2] - 0.5*t5746*var2[3] + 0.5399209599999999*t3052*var2[4];
  p_output1[24]=(-0.5*t2081*var2[0] - 0.5*t5056*var2[1])*var2[4];
  p_output1[25]=(-0.5*t3357*var2[0] - 0.5*t5180*var2[1] - 0.5*t5591*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t4628*var2[0] - 0.5*t5364*var2[1] - 0.5*t5685*var2[2] - 0.5*(7.1798*Power(t1816,2) + 7.1798*t1816*t1981 + 7.1798*t2065*t4580 + 7.1798*t1658*t4589)*var2[3] + 0.26996047999999995*t4580*var2[4]);
  p_output1[27]=t4909;
  p_output1[28]=t5461;
  p_output1[29]=t5751;
  p_output1[30]=-0.5*t5917*var2[4];
  p_output1[31]=-0.5*t4891*var2[0] - 0.5*t2081*var2[1] - 0.5*t5746*var2[2] - 0.5*t5917*var2[3] + 0.5399209599999999*t1816*var2[4];
  p_output1[32]=(0.26996047999999995*t1386*var2[0] + 0.26996047999999995*t2376*var2[1])*var2[4];
  p_output1[33]=(t5960 + t5963 + 0.26996047999999995*t4434*var2[2])*var2[4];
  p_output1[34]=(t5960 + t5963 + 0.26996047999999995*t4748*var2[2] + 0.26996047999999995*t4580*var2[3])*var2[4];
  p_output1[35]=0.26996047999999995*t2444*var2[4];
  p_output1[36]=t1392;
  p_output1[37]=0.26996047999999995*t3052*var2[4];
  p_output1[38]=0.26996047999999995*t1816*var2[4];
  p_output1[39]=0.26996047999999995*t2444*var2[0] + 0.26996047999999995*t1386*var2[1] + 0.26996047999999995*t3052*var2[2] + 0.26996047999999995*t1816*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L3_J5_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L3_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

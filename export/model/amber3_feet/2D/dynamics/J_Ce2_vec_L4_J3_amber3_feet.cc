/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:40 GMT-08:00
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
  double t538;
  double t175;
  double t188;
  double t688;
  double t1140;
  double t403;
  double t921;
  double t944;
  double t171;
  double t1170;
  double t1215;
  double t1225;
  double t1370;
  double t1271;
  double t84;
  double t1676;
  double t1720;
  double t1762;
  double t1550;
  double t1564;
  double t1601;
  double t1607;
  double t1611;
  double t1658;
  double t994;
  double t1301;
  double t1343;
  double t1386;
  double t1392;
  double t1394;
  double t1405;
  double t1470;
  double t1769;
  double t1771;
  double t1783;
  double t1800;
  double t1816;
  double t1850;
  double t1918;
  double t1922;
  double t2140;
  double t2200;
  double t2210;
  double t2220;
  double t2222;
  double t2224;
  double t2054;
  double t2056;
  double t2065;
  double t2080;
  double t2453;
  double t2517;
  double t2528;
  double t2575;
  double t2590;
  double t2618;
  double t2747;
  double t2757;
  double t2761;
  double t2656;
  double t2664;
  double t2695;
  double t3059;
  double t3062;
  double t3064;
  double t3080;
  double t3099;
  double t3100;
  double t2997;
  double t3013;
  double t3016;
  double t3038;
  double t1528;
  double t1660;
  double t1664;
  double t1670;
  double t1942;
  double t1946;
  double t1947;
  double t1974;
  double t1981;
  double t3271;
  double t3275;
  double t3276;
  double t3278;
  double t2136;
  double t2137;
  double t2236;
  double t2243;
  double t3310;
  double t3311;
  double t3326;
  double t3337;
  double t3344;
  double t2314;
  double t2372;
  double t2376;
  double t2383;
  double t2836;
  double t2872;
  double t3508;
  double t3533;
  double t3588;
  double t3596;
  double t3052;
  double t3114;
  double t3120;
  double t3130;
  double t3140;
  double t3157;
  double t3871;
  double t3883;
  double t3885;
  double t3886;
  double t3840;
  double t3851;
  double t4414;
  double t4429;
  double t4432;
  double t4640;
  double t4671;
  double t4676;
  double t4687;
  double t4600;
  double t4610;
  double t4434;
  double t4435;
  double t4437;
  double t4444;
  double t4462;
  double t4466;
  double t4490;
  double t4870;
  double t4886;
  double t4912;
  double t5057;
  double t5059;
  double t5065;
  double t5018;
  double t5038;
  double t5040;
  double t4376;
  double t4407;
  double t5148;
  double t5158;
  double t4534;
  double t4580;
  double t4587;
  double t4589;
  double t4748;
  double t4780;
  double t5272;
  double t5280;
  double t5290;
  double t5294;
  double t5320;
  double t5330;
  double t4785;
  double t4805;
  double t4831;
  double t4839;
  double t4841;
  double t4842;
  double t4854;
  double t4866;
  double t4869;
  double t4913;
  double t4917;
  double t4922;
  double t4924;
  double t4925;
  double t4927;
  double t4931;
  double t4934;
  double t4949;
  double t4953;
  double t4954;
  double t4976;
  double t5055;
  double t5074;
  double t5384;
  double t5400;
  double t5413;
  double t5429;
  double t5436;
  double t5449;
  double t5084;
  double t5085;
  double t2532;
  double t2765;
  double t5558;
  double t5573;
  double t5574;
  double t5594;
  double t5602;
  double t5603;
  double t5604;
  double t5612;
  double t5631;
  double t5637;
  double t5644;
  double t5622;
  double t5623;
  double t5625;
  double t2903;
  double t2948;
  double t2834;
  double t2842;
  double t2809;
  double t2847;
  double t2861;
  double t2952;
  double t2954;
  double t3620;
  double t3623;
  double t3581;
  double t3583;
  double t3434;
  double t3549;
  double t3585;
  double t3602;
  double t3631;
  double t3633;
  double t3650;
  double t3827;
  double t3860;
  double t3890;
  double t3911;
  double t3919;
  double t3958;
  double t4116;
  double t4162;
  double t4217;
  double t4321;
  double t4612;
  double t4692;
  double t4750;
  double t4777;
  double t4782;
  double t4793;
  double t5041;
  double t5066;
  double t5069;
  double t5075;
  double t5078;
  double t5086;
  double t5922;
  double t5927;
  double t5176;
  double t5179;
  double t5198;
  double t5208;
  double t5213;
  double t5221;
  double t5224;
  double t5231;
  double t5234;
  double t5259;
  double t5929;
  double t5945;
  double t5292;
  double t5333;
  double t5339;
  double t5352;
  double t5363;
  double t5372;
  double t5959;
  double t5964;
  double t5965;
  double t5966;
  double t5971;
  double t5976;
  double t5977;
  double t5980;
  double t5985;
  double t5417;
  double t5456;
  double t5465;
  double t5988;
  double t5486;
  double t5488;
  double t5489;
  double t5616;
  double t1487;
  double t1933;
  double t1999;
  double t2043;
  double t2047;
  double t2301;
  double t2429;
  double t2433;
  double t2444;
  double t6091;
  double t6099;
  double t6108;
  double t3123;
  double t3174;
  double t3200;
  double t5773;
  double t5789;
  double t5801;
  double t3809;
  double t3920;
  double t3926;
  double t4338;
  double t4356;
  double t5885;
  double t5892;
  double t5895;
  double t5912;
  double t5913;
  double t5987;
  double t5989;
  double t5997;
  double t5071;
  double t5098;
  double t5120;
  double t6082;
  double t6084;
  double t6085;
  double t5473;
  double t5510;
  double t5526;
  double t5677;
  double t5683;
  double t5697;
  double t3201;
  double t5728;
  double t5729;
  double t5730;
  double t3384;
  double t3388;
  double t3403;
  double t5841;
  double t5843;
  double t5844;
  double t5948;
  double t5949;
  double t5960;
  double t4766;
  double t4796;
  double t4809;
  double t6025;
  double t6027;
  double t6029;
  double t5348;
  double t5373;
  double t5376;
  double t5708;
  double t6152;
  double t5717;
  double t5718;
  double t5725;
  double t3367;
  double t3378;
  double t3379;
  double t5823;
  double t5825;
  double t5826;
  double t5938;
  double t4537;
  double t6014;
  double t6016;
  double t6021;
  double t5228;
  double t5260;
  double t5262;
  double t5709;
  double t6158;
  double t6497;
  double t6498;
  double t6503;
  double t6504;
  double t5715;
  double t6160;
  t538 = Cos(var1[4]);
  t175 = Cos(var1[5]);
  t188 = Sin(var1[4]);
  t688 = Sin(var1[5]);
  t1140 = Cos(var1[3]);
  t403 = t175*t188;
  t921 = t538*t688;
  t944 = t403 + t921;
  t171 = Sin(var1[3]);
  t1170 = t538*t175;
  t1215 = -1.*t188*t688;
  t1225 = t1170 + t1215;
  t1370 = Cos(var1[2]);
  t1271 = t1140*t1225;
  t84 = Sin(var1[2]);
  t1676 = -1.*t175*t188;
  t1720 = -1.*t538*t688;
  t1762 = t1676 + t1720;
  t1550 = -1.*t175;
  t1564 = 1. + t1550;
  t1601 = -1.3127*t1564;
  t1607 = -1.3127*t175;
  t1611 = -0.06*t688;
  t1658 = t1601 + t1607 + t1611;
  t994 = -1.*t171*t944;
  t1301 = t994 + t1271;
  t1343 = -1.*t84*t1301;
  t1386 = t1140*t944;
  t1392 = t171*t1225;
  t1394 = t1386 + t1392;
  t1405 = -1.*t1370*t1394;
  t1470 = t1343 + t1405;
  t1769 = t171*t1762;
  t1771 = t1769 + t1271;
  t1783 = -1.*t1370*t1771;
  t1800 = t1140*t1762;
  t1816 = -1.*t171*t1225;
  t1850 = t1800 + t1816;
  t1918 = -1.*t84*t1850;
  t1922 = t1783 + t1918;
  t2140 = -1.*t538;
  t2200 = 1. + t2140;
  t2210 = -0.9063*t2200;
  t2220 = -0.06*t175*t188;
  t2222 = t538*t1658;
  t2224 = t2210 + t2220 + t2222;
  t2054 = 0.06*t538*t175;
  t2056 = 0.9063*t188;
  t2065 = t188*t1658;
  t2080 = t2054 + t2056 + t2065;
  t2453 = -1.*t84*t1771;
  t2517 = t1370*t1850;
  t2528 = t2453 + t2517;
  t2575 = t1370*t1771;
  t2590 = t84*t1850;
  t2618 = t2575 + t2590;
  t2747 = t1370*t1301;
  t2757 = -1.*t84*t1394;
  t2761 = t2747 + t2757;
  t2656 = t84*t1301;
  t2664 = t1370*t1394;
  t2695 = t2656 + t2664;
  t3059 = -1.*t1140;
  t3062 = 1. + t3059;
  t3064 = -0.4999*t3062;
  t3080 = t1140*t2224;
  t3099 = -1.*t171*t2080;
  t3100 = t3064 + t3080 + t3099;
  t2997 = 0.4999*t171;
  t3013 = t171*t2224;
  t3016 = t1140*t2080;
  t3038 = t2997 + t3013 + t3016;
  t1528 = 0.9063*t175;
  t1660 = t175*t1658;
  t1664 = 0.06*t175*t688;
  t1670 = t1528 + t1660 + t1664;
  t1942 = Power(t175,2);
  t1946 = -0.06*t1942;
  t1947 = 0.9063*t688;
  t1974 = t1658*t688;
  t1981 = t1946 + t1947 + t1974;
  t3271 = -1.*t1140*t944;
  t3275 = t3271 + t1816;
  t3276 = t1370*t3275;
  t3278 = t1343 + t3276;
  t2136 = t2080*t944;
  t2137 = 0.4999*t1225;
  t2236 = t2224*t1225;
  t2243 = t2136 + t2137 + t2236;
  t3310 = -1.*t171*t1762;
  t3311 = -1.*t1140*t1225;
  t3326 = t3310 + t3311;
  t3337 = t1370*t3326;
  t3344 = t3337 + t1918;
  t2314 = -1.*t2224*t1762;
  t2372 = 0.4999*t944;
  t2376 = -1.*t2080*t1225;
  t2383 = t2314 + t2372 + t2376;
  t2836 = -1.*t1370*t1850;
  t2872 = -1.*t1370*t1301;
  t3508 = t84*t3326;
  t3533 = t3508 + t2517;
  t3588 = t84*t3275;
  t3596 = t2747 + t3588;
  t3052 = -1.*t3038*t1771;
  t3114 = -1.*t3100*t1850;
  t3120 = t3052 + t3114;
  t3130 = t3100*t1301;
  t3140 = t3038*t1394;
  t3157 = t3130 + t3140;
  t3871 = -0.4999*t171;
  t3883 = -1.*t171*t2224;
  t3885 = -1.*t1140*t2080;
  t3886 = t3871 + t3883 + t3885;
  t3840 = 0.4999*t1140;
  t3851 = t3840 + t3080 + t3099;
  t4414 = -1.*t538*t175;
  t4429 = t188*t688;
  t4432 = t4414 + t4429;
  t4640 = -0.06*t538*t175;
  t4671 = -0.9063*t188;
  t4676 = -1.*t188*t1658;
  t4687 = t4640 + t4671 + t4676;
  t4600 = 0.9063*t538;
  t4610 = t4600 + t2220 + t2222;
  t4434 = t1140*t4432;
  t4435 = t3310 + t4434;
  t4437 = t1370*t4435;
  t4444 = t171*t4432;
  t4462 = t1800 + t4444;
  t4466 = -1.*t84*t4462;
  t4490 = t4437 + t4466;
  t4870 = t84*t4435;
  t4886 = t1370*t4462;
  t4912 = t4870 + t4886;
  t5057 = t1140*t4610;
  t5059 = t171*t4687;
  t5065 = t5057 + t5059;
  t5018 = -1.*t171*t4610;
  t5038 = t1140*t4687;
  t5040 = t5018 + t5038;
  t4376 = 0.03428571*var2[5]*t2528;
  t4407 = 1.142857*t1981*t2528;
  t5148 = -0.06*t175;
  t5158 = 0. + t5148;
  t4534 = 1.142857*t1670*t4490;
  t4580 = 1.142857*t2383*t2528;
  t4587 = 0.4999*t1762;
  t4589 = t2224*t1762;
  t4748 = t2080*t1225;
  t4780 = -1.*t2080*t1762;
  t5272 = t5158*t188;
  t5280 = -0.06*t538*t688;
  t5290 = t5272 + t5280;
  t5294 = t538*t5158;
  t5320 = 0.06*t188*t688;
  t5330 = t5294 + t5320;
  t4785 = -1.*t2224*t4432;
  t4805 = 1.142857*t2243*t4490;
  t4831 = 1.142857*t2618*t1470;
  t4839 = 1.142857*t1922*t2695;
  t4841 = 2.285714*t2528*t2761;
  t4842 = -1.*t84*t4435;
  t4854 = -1.*t1370*t4462;
  t4866 = t4842 + t4854;
  t4869 = 1.142857*t2618*t4866;
  t4913 = 1.142857*t1922*t4912;
  t4917 = 2.285714*t2528*t4490;
  t4922 = t4831 + t4839 + t4841 + t4869 + t4913 + t4917;
  t4924 = -0.5*var2[1]*t4922;
  t4925 = 2.285714*t2528*t2695;
  t4927 = 2.285714*t2618*t2761;
  t4931 = 2.285714*t2528*t4912;
  t4934 = 2.285714*t2618*t4490;
  t4949 = t4925 + t4927 + t4931 + t4934;
  t4953 = -0.5*var2[0]*t4949;
  t4954 = 1.142857*t2528*t3120;
  t4976 = t3038*t1771;
  t5055 = t3100*t1850;
  t5074 = 1.142857*t3157*t4490;
  t5384 = -1.*t171*t5290;
  t5400 = t1140*t5330;
  t5413 = t5384 + t5400;
  t5429 = t1140*t5290;
  t5436 = t171*t5330;
  t5449 = t5429 + t5436;
  t5084 = -1.*t3100*t4435;
  t5085 = -1.*t3038*t4462;
  t2532 = Power(t2528,2);
  t2765 = Power(t2761,2);
  t5558 = 2.285714*t2528*t2618;
  t5573 = 2.285714*t2695*t2761;
  t5574 = t5558 + t5573;
  t5594 = 1.142857*t2532;
  t5602 = 1.142857*t1922*t2618;
  t5603 = 1.142857*t1470*t2695;
  t5604 = 1.142857*t2765;
  t5612 = t5594 + t5602 + t5603 + t5604;
  t5631 = 1.142857*t2243*t2528;
  t5637 = 1.142857*t2383*t2761;
  t5644 = t5631 + t5637;
  t5622 = 1.142857*t1670*t2528;
  t5623 = 1.142857*t1981*t2761;
  t5625 = t5622 + t5623;
  t2903 = t84*t1394;
  t2948 = t2872 + t2903;
  t2834 = t84*t1771;
  t2842 = t2834 + t2836;
  t2809 = 3.428571*t2528*t1922;
  t2847 = 1.142857*t2842*t2618;
  t2861 = 3.428571*t1470*t2761;
  t2952 = 1.142857*t2695*t2948;
  t2954 = t2809 + t2847 + t2861 + t2952;
  t3620 = -1.*t84*t3275;
  t3623 = t2872 + t3620;
  t3581 = -1.*t84*t3326;
  t3583 = t3581 + t2836;
  t3434 = 2.285714*t2528*t3344;
  t3549 = 1.142857*t3533*t1922;
  t3585 = 1.142857*t3583*t2618;
  t3602 = 1.142857*t3596*t1470;
  t3631 = 1.142857*t3623*t2695;
  t3633 = 2.285714*t3278*t2761;
  t3650 = t3434 + t3549 + t3585 + t3602 + t3631 + t3633;
  t3827 = -1.*t3100*t3326;
  t3860 = -1.*t3851*t1771;
  t3890 = -1.*t3886*t1850;
  t3911 = -1.*t3038*t1850;
  t3919 = t3827 + t3860 + t3890 + t3911;
  t3958 = t3886*t1301;
  t4116 = t3038*t1301;
  t4162 = t3100*t3275;
  t4217 = t3851*t1394;
  t4321 = t3958 + t4116 + t4162 + t4217;
  t4612 = t4610*t944;
  t4692 = t4687*t1225;
  t4750 = t4587 + t4589 + t4612 + t4692 + t4748;
  t4777 = -1.*t4687*t1762;
  t4782 = -1.*t4610*t1225;
  t4793 = t4777 + t4780 + t2137 + t4782 + t4785;
  t5041 = t5040*t1301;
  t5066 = t5065*t1394;
  t5069 = t4976 + t5041 + t5055 + t5066;
  t5075 = -1.*t5065*t1771;
  t5078 = -1.*t5040*t1850;
  t5086 = t5075 + t5078 + t5084 + t5085;
  t5922 = 0.03428571*var2[5]*t1922;
  t5927 = 1.142857*t1981*t1922;
  t5176 = t5158*t175;
  t5179 = 0.06*t1942;
  t5198 = -0.9063*t688;
  t5208 = -1.*t1658*t688;
  t5213 = Power(t688,2);
  t5221 = -0.06*t5213;
  t5224 = t5176 + t5179 + t5198 + t5208 + t5221;
  t5231 = t5158*t688;
  t5234 = 0.12*t175*t688;
  t5259 = t1528 + t1660 + t5231 + t5234;
  t5929 = 1.142857*t1670*t4866;
  t5945 = 1.142857*t2383*t1922;
  t5292 = t5290*t944;
  t5333 = t1225*t5330;
  t5339 = t4587 + t4589 + t5292 + t4748 + t5333;
  t5352 = -1.*t5290*t1225;
  t5363 = -1.*t1762*t5330;
  t5372 = t4780 + t2137 + t5352 + t5363 + t4785;
  t5959 = 1.142857*t2243*t4866;
  t5964 = -0.5*var2[0]*t4922;
  t5965 = 2.285714*t2528*t1470;
  t5966 = 2.285714*t1922*t2761;
  t5971 = 2.285714*t2528*t4866;
  t5976 = 2.285714*t1922*t4490;
  t5977 = t5965 + t5966 + t5971 + t5976;
  t5980 = -0.5*var2[1]*t5977;
  t5985 = 1.142857*t1922*t3120;
  t5417 = t1301*t5413;
  t5456 = t1394*t5449;
  t5465 = t4976 + t5055 + t5417 + t5456;
  t5988 = 1.142857*t3157*t4866;
  t5486 = -1.*t1850*t5413;
  t5488 = -1.*t1771*t5449;
  t5489 = t5486 + t5488 + t5084 + t5085;
  t5616 = -0.5*var2[2]*t5612;
  t1487 = 0.03428571*var2[5]*t1470;
  t1933 = 1.142857*t1670*t1922;
  t1999 = 1.142857*t1981*t1470;
  t2043 = t1933 + t1999;
  t2047 = -0.5*var2[4]*t2043;
  t2301 = 1.142857*t2243*t1922;
  t2429 = 1.142857*t2383*t1470;
  t2433 = t2301 + t2429;
  t2444 = -0.5*var2[3]*t2433;
  t6091 = 2.285714*t2528*t1922;
  t6099 = 2.285714*t1470*t2761;
  t6108 = t6091 + t6099;
  t3123 = 1.142857*t3120*t1470;
  t3174 = 1.142857*t1922*t3157;
  t3200 = t3123 + t3174;
  t5773 = 1.142857*t3120*t2948;
  t5789 = 1.142857*t2842*t3157;
  t5801 = t5773 + t5789;
  t3809 = 1.142857*t3120*t3278;
  t3920 = 1.142857*t3919*t2761;
  t3926 = 1.142857*t3344*t3157;
  t4338 = 1.142857*t2528*t4321;
  t4356 = t3809 + t3920 + t3926 + t4338;
  t5885 = 1.142857*t3120*t3623;
  t5892 = 1.142857*t3919*t1470;
  t5895 = 1.142857*t3583*t3157;
  t5912 = 1.142857*t1922*t4321;
  t5913 = t5885 + t5892 + t5895 + t5912;
  t5987 = 1.142857*t1922*t5069;
  t5989 = 1.142857*t1470*t5086;
  t5997 = t5985 + t5987 + t5988 + t5989;
  t5071 = 1.142857*t2528*t5069;
  t5098 = 1.142857*t2761*t5086;
  t5120 = t4954 + t5071 + t5074 + t5098;
  t6082 = 1.142857*t1922*t5465;
  t6084 = 1.142857*t1470*t5489;
  t6085 = t5985 + t6082 + t5988 + t6084;
  t5473 = 1.142857*t2528*t5465;
  t5510 = 1.142857*t2761*t5489;
  t5526 = t4954 + t5473 + t5074 + t5510;
  t5677 = 1.142857*t3120*t2761;
  t5683 = 1.142857*t2528*t3157;
  t5697 = t5677 + t5683;
  t3201 = -0.5*var2[2]*t3200;
  t5728 = 1.142857*t2243*t2842;
  t5729 = 1.142857*t2383*t2948;
  t5730 = t5728 + t5729;
  t3384 = 1.142857*t2243*t3344;
  t3388 = 1.142857*t2383*t3278;
  t3403 = t3384 + t3388;
  t5841 = 1.142857*t2243*t3583;
  t5843 = 1.142857*t2383*t3623;
  t5844 = t5841 + t5843;
  t5948 = 1.142857*t4750*t1922;
  t5949 = 1.142857*t4793*t1470;
  t5960 = t5945 + t5948 + t5949 + t5959;
  t4766 = 1.142857*t4750*t2528;
  t4796 = 1.142857*t4793*t2761;
  t4809 = t4580 + t4766 + t4796 + t4805;
  t6025 = 1.142857*t5339*t1922;
  t6027 = 1.142857*t5372*t1470;
  t6029 = t5945 + t6025 + t6027 + t5959;
  t5348 = 1.142857*t5339*t2528;
  t5373 = 1.142857*t5372*t2761;
  t5376 = t4580 + t5348 + t5373 + t4805;
  t5708 = -0.5*var2[2]*t5644;
  t6152 = -0.5*var2[2]*t2433;
  t5717 = 1.142857*t1670*t2842;
  t5718 = 1.142857*t1981*t2948;
  t5725 = t5717 + t5718;
  t3367 = 1.142857*t1670*t3344;
  t3378 = 1.142857*t1981*t3278;
  t3379 = t3367 + t3378;
  t5823 = 1.142857*t1670*t3583;
  t5825 = 1.142857*t1981*t3623;
  t5826 = t5823 + t5825;
  t5938 = t5927 + t5929;
  t4537 = t4407 + t4534;
  t6014 = 1.142857*t5224*t1922;
  t6016 = 1.142857*t5259*t1470;
  t6021 = t5927 + t6014 + t6016 + t5929;
  t5228 = 1.142857*t5224*t2528;
  t5260 = 1.142857*t5259*t2761;
  t5262 = t4407 + t5228 + t5260 + t4534;
  t5709 = -0.5*var2[2]*t5625;
  t6158 = -0.5*var2[2]*t2043;
  t6497 = 0.03428571*var2[0]*t2528;
  t6498 = 0.03428571*var2[1]*t1922;
  t6503 = t6497 + t6498;
  t6504 = var2[2]*t6503;
  t5715 = 0.03428571*var2[2]*t2761;
  t6160 = 0.03428571*var2[2]*t1470;
  p_output1[0]=(t1487 + t2047 + t2444 + t3201 - 0.5*(2.285714*t2532 + 2.285714*t1922*t2618 + 2.285714*t1470*t2695 + 2.285714*t2765)*var2[0] - 0.5*t2954*var2[1])*var2[2];
  p_output1[1]=var2[2]*(-0.5*(2.285714*t2695*t3278 + 2.285714*t2618*t3344 + 2.285714*t2528*t3533 + 2.285714*t2761*t3596)*var2[0] - 0.5*t3650*var2[1] - 0.5*t4356*var2[2] - 0.5*t3403*var2[3] - 0.5*t3379*var2[4] + 0.03428571*t3278*var2[5]);
  p_output1[2]=var2[2]*(t4376 + t4924 + t4953 - 0.5*t5120*var2[2] - 0.5*t4809*var2[3] - 0.5*t4537*var2[4]);
  p_output1[3]=var2[2]*(t4376 + t4924 + t4953 - 0.5*t5526*var2[2] - 0.5*t5376*var2[3] - 0.5*t5262*var2[4]);
  p_output1[4]=-0.5*t5574*var2[2];
  p_output1[5]=t5616;
  p_output1[6]=-0.5*t5574*var2[0] - 0.5*t5612*var2[1] - 1.*t5697*var2[2] - 0.5*t5644*var2[3] - 0.5*t5625*var2[4] + 0.03428571*t2761*var2[5];
  p_output1[7]=t5708;
  p_output1[8]=t5709;
  p_output1[9]=t5715;
  p_output1[10]=var2[2]*(-0.5*t2954*var2[0] - 0.5*(2.285714*Power(t1470,2) + 2.285714*Power(t1922,2) + 2.285714*t2528*t2842 + 2.285714*t2761*t2948)*var2[1] - 0.5*t5801*var2[2] - 0.5*t5730*var2[3] - 0.5*t5725*var2[4] + 0.03428571*t2948*var2[5]);
  p_output1[11]=var2[2]*(-0.5*t3650*var2[0] - 0.5*(2.285714*t1470*t3278 + 2.285714*t1922*t3344 + 2.285714*t2528*t3583 + 2.285714*t2761*t3623)*var2[1] - 0.5*t5913*var2[2] - 0.5*t5844*var2[3] - 0.5*t5826*var2[4] + 0.03428571*t3623*var2[5]);
  p_output1[12]=var2[2]*(t5922 + t5964 + t5980 - 0.5*t5997*var2[2] - 0.5*t5960*var2[3] - 0.5*t5938*var2[4]);
  p_output1[13]=var2[2]*(t5922 + t5964 + t5980 - 0.5*t6085*var2[2] - 0.5*t6029*var2[3] - 0.5*t6021*var2[4]);
  p_output1[14]=t5616;
  p_output1[15]=-0.5*t6108*var2[2];
  p_output1[16]=t1487 + t2047 + t2444 - 0.5*t5612*var2[0] - 0.5*t6108*var2[1] - 1.*t3200*var2[2];
  p_output1[17]=t6152;
  p_output1[18]=t6158;
  p_output1[19]=t6160;
  p_output1[20]=(-0.5*t3200*var2[0] - 0.5*t5801*var2[1])*var2[2];
  p_output1[21]=(-0.5*t4356*var2[0] - 0.5*t5913*var2[1])*var2[2];
  p_output1[22]=(-0.5*t5120*var2[0] - 0.5*t5997*var2[1])*var2[2];
  p_output1[23]=(-0.5*t5526*var2[0] - 0.5*t6085*var2[1])*var2[2];
  p_output1[24]=-0.5*t5697*var2[2];
  p_output1[25]=t3201;
  p_output1[26]=-0.5*t5697*var2[0] - 0.5*t3200*var2[1];
  p_output1[27]=(-0.5*t2433*var2[0] - 0.5*t5730*var2[1])*var2[2];
  p_output1[28]=(-0.5*t3403*var2[0] - 0.5*t5844*var2[1])*var2[2];
  p_output1[29]=(-0.5*t4809*var2[0] - 0.5*t5960*var2[1])*var2[2];
  p_output1[30]=(-0.5*t5376*var2[0] - 0.5*t6029*var2[1])*var2[2];
  p_output1[31]=t5708;
  p_output1[32]=t6152;
  p_output1[33]=-0.5*t5644*var2[0] - 0.5*t2433*var2[1];
  p_output1[34]=(-0.5*t2043*var2[0] - 0.5*t5725*var2[1])*var2[2];
  p_output1[35]=(-0.5*t3379*var2[0] - 0.5*t5826*var2[1])*var2[2];
  p_output1[36]=(-0.5*t4537*var2[0] - 0.5*t5938*var2[1])*var2[2];
  p_output1[37]=(-0.5*t5262*var2[0] - 0.5*t6021*var2[1])*var2[2];
  p_output1[38]=t5709;
  p_output1[39]=t6158;
  p_output1[40]=-0.5*t5625*var2[0] - 0.5*t2043*var2[1];
  p_output1[41]=(0.03428571*t1470*var2[0] + 0.03428571*t2948*var2[1])*var2[2];
  p_output1[42]=(0.03428571*t3278*var2[0] + 0.03428571*t3623*var2[1])*var2[2];
  p_output1[43]=t6504;
  p_output1[44]=t6504;
  p_output1[45]=t5715;
  p_output1[46]=t6160;
  p_output1[47]=0.03428571*t2761*var2[0] + 0.03428571*t1470*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 48, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L4_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L4_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

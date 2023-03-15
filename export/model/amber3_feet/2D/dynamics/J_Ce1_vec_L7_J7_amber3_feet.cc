/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:36 GMT-08:00
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
  double t42;
  double t31;
  double t26;
  double t153;
  double t112;
  double t114;
  double t115;
  double t127;
  double t243;
  double t256;
  double t364;
  double t376;
  double t385;
  double t588;
  double t487;
  double t521;
  double t540;
  double t484;
  double t399;
  double t412;
  double t422;
  double t424;
  double t428;
  double t442;
  double t308;
  double t309;
  double t321;
  double t41;
  double t109;
  double t269;
  double t287;
  double t644;
  double t477;
  double t691;
  double t346;
  double t392;
  double t459;
  double t464;
  double t828;
  double t670;
  double t700;
  double t705;
  double t731;
  double t772;
  double t820;
  double t825;
  double t827;
  double t839;
  double t840;
  double t972;
  double t974;
  double t1211;
  double t1256;
  double t1293;
  double t1452;
  double t1499;
  double t1512;
  double t1513;
  double t1359;
  double t1368;
  double t1045;
  double t1071;
  double t1079;
  double t573;
  double t1706;
  double t1720;
  double t1729;
  double t1313;
  double t1317;
  double t1323;
  double t1586;
  double t1639;
  double t1908;
  double t1909;
  double t1946;
  double t1987;
  double t1743;
  double t1763;
  double t1772;
  double t1776;
  double t1801;
  double t1803;
  double t1808;
  double t1818;
  double t1819;
  double t1824;
  double t1837;
  double t1860;
  double t593;
  double t612;
  double t632;
  double t707;
  double t729;
  double t843;
  double t859;
  double t863;
  double t864;
  double t877;
  double t937;
  double t1429;
  double t1517;
  double t1588;
  double t2290;
  double t2296;
  double t1598;
  double t1662;
  double t1745;
  double t2183;
  double t2329;
  double t1942;
  double t2006;
  double t2007;
  double t2029;
  double t2064;
  double t2070;
  double t2352;
  double t2354;
  double t2392;
  double t2397;
  double t2409;
  double t2410;
  double t2413;
  double t2341;
  double t2376;
  double t2456;
  double t2578;
  double t2588;
  double t2605;
  double t2668;
  double t2671;
  double t2674;
  double t2676;
  double t2129;
  double t2957;
  double t2961;
  double t2974;
  double t2650;
  double t2733;
  double t2739;
  double t3041;
  double t3063;
  double t2818;
  double t2837;
  double t2847;
  double t2850;
  double t2854;
  double t2885;
  double t2892;
  double t2893;
  double t2921;
  double t2954;
  double t2955;
  double t2978;
  double t1595;
  double t1788;
  double t1893;
  double t3201;
  double t3208;
  double t3226;
  double t3253;
  double t3259;
  double t3262;
  double t2994;
  double t3288;
  double t3349;
  double t3367;
  double t3010;
  double t3019;
  double t3097;
  double t3441;
  double t3445;
  double t3144;
  double t3184;
  double t3254;
  double t3273;
  double t3278;
  double t3413;
  double t2996;
  double t3423;
  double t3025;
  double t3065;
  double t3459;
  double t3068;
  double t3070;
  double t3506;
  double t3134;
  double t3137;
  double t3143;
  double t3518;
  double t3173;
  double t3544;
  double t3187;
  double t3694;
  double t3699;
  double t3702;
  double t3804;
  double t3827;
  double t3809;
  double t3810;
  double t3833;
  double t3867;
  double t3878;
  double t3902;
  double t3991;
  double t4006;
  double t1037;
  double t1038;
  double t1161;
  double t1168;
  double t4130;
  double t4181;
  double t4184;
  double t4213;
  double t4217;
  double t3978;
  double t3999;
  double t4003;
  double t4008;
  double t4009;
  double t4019;
  double t4021;
  double t2135;
  double t2205;
  double t4537;
  double t4591;
  double t4594;
  double t4603;
  double t4558;
  double t4570;
  double t4622;
  double t4138;
  double t4178;
  double t4241;
  double t2622;
  double t2660;
  double t2710;
  double t2719;
  double t2747;
  double t2808;
  double t2811;
  double t2823;
  double t2833;
  double t2844;
  double t3071;
  double t3182;
  double t4728;
  double t4732;
  double t4738;
  double t4741;
  double t4746;
  double t4777;
  double t3458;
  double t3461;
  double t3480;
  double t3513;
  double t3514;
  double t3523;
  double t4799;
  double t4949;
  double t4782;
  double t3602;
  double t3608;
  double t4963;
  double t4807;
  double t1041;
  double t1169;
  double t1191;
  double t1201;
  double t1904;
  double t2027;
  double t2072;
  double t2083;
  double t2095;
  double t5078;
  double t5080;
  double t5081;
  double t5083;
  double t5176;
  double t5185;
  double t5233;
  double t5240;
  double t5246;
  double t5249;
  double t5162;
  double t5192;
  double t5221;
  double t5222;
  double t5223;
  double t5225;
  double t5086;
  double t5122;
  double t5123;
  double t5131;
  double t5443;
  double t5449;
  double t5453;
  double t5382;
  double t5399;
  double t5407;
  double t5417;
  double t5418;
  double t5420;
  double t5335;
  double t5338;
  double t5346;
  double t5350;
  double t5352;
  double t5465;
  double t5469;
  double t5473;
  double t5474;
  double t5488;
  double t5372;
  double t5378;
  double t5437;
  double t5442;
  double t5610;
  double t5612;
  double t5615;
  double t5645;
  double t5646;
  double t5649;
  double t5659;
  double t5669;
  double t5671;
  double t5525;
  double t5527;
  double t5532;
  double t5562;
  double t5779;
  double t5786;
  double t5772;
  double t5774;
  double t5364;
  double t5413;
  double t5422;
  double t5455;
  double t5456;
  double t5457;
  double t5461;
  double t5489;
  double t5499;
  double t5516;
  double t5518;
  double t5522;
  double t5565;
  double t5570;
  double t5581;
  double t5705;
  double t5706;
  double t5708;
  double t5715;
  double t5716;
  double t5717;
  double t5725;
  double t5727;
  double t5732;
  double t5734;
  double t5736;
  double t5809;
  double t5814;
  double t5819;
  double t5820;
  double t5821;
  double t5859;
  double t5860;
  double t6008;
  double t6013;
  double t6019;
  double t6020;
  double t5799;
  double t5800;
  double t6110;
  double t6113;
  double t6114;
  double t6136;
  double t6142;
  double t6151;
  double t6163;
  double t6168;
  double t6171;
  double t5966;
  double t5977;
  double t6319;
  double t6325;
  double t6333;
  double t6350;
  double t6042;
  double t6051;
  double t6267;
  double t6271;
  double t6281;
  double t5917;
  double t5919;
  double t5927;
  double t6306;
  double t6307;
  double t6309;
  double t5956;
  double t5957;
  double t5964;
  double t6316;
  double t6385;
  double t5997;
  double t6016;
  double t6022;
  double t6023;
  double t6037;
  double t6041;
  double t6412;
  double t6044;
  double t6415;
  double t6060;
  double t6541;
  double t6550;
  double t6553;
  double t6560;
  double t6562;
  double t6571;
  double t6577;
  double t6580;
  double t6588;
  double t6592;
  double t6747;
  double t6748;
  double t6751;
  double t6758;
  double t6773;
  double t6774;
  double t6815;
  double t6817;
  double t6824;
  double t6835;
  double t6843;
  double t6844;
  double t6849;
  double t6850;
  double t6852;
  double t6863;
  double t6864;
  double t6865;
  double t6869;
  double t6922;
  double t6924;
  double t6932;
  double t6876;
  double t6942;
  double t6948;
  double t6950;
  double t7039;
  double t7043;
  double t7054;
  double t7071;
  double t7081;
  double t7088;
  double t7091;
  double t7092;
  t42 = Sin(var1[7]);
  t31 = Cos(var1[8]);
  t26 = Cos(var1[7]);
  t153 = Sin(var1[8]);
  t112 = -1.*t31;
  t114 = 1. + t112;
  t115 = -1.3127*t114;
  t127 = -1.3127*t31;
  t243 = -0.06*t153;
  t256 = t115 + t127 + t243;
  t364 = t26*t31;
  t376 = -1.*t42*t153;
  t385 = t364 + t376;
  t588 = Cos(var1[6]);
  t487 = -1.*t31*t42;
  t521 = -1.*t26*t153;
  t540 = t487 + t521;
  t484 = Sin(var1[6]);
  t399 = -1.*t26;
  t412 = 1. + t399;
  t422 = -0.9063*t412;
  t424 = -0.06*t31*t42;
  t428 = t26*t256;
  t442 = t422 + t424 + t428;
  t308 = t31*t42;
  t309 = t26*t153;
  t321 = t308 + t309;
  t41 = 0.06*t26*t31;
  t109 = 0.9063*t42;
  t269 = t42*t256;
  t287 = t41 + t109 + t269;
  t644 = Sin(var1[2]);
  t477 = Cos(var1[2]);
  t691 = -1.*t484*t385;
  t346 = t287*t321;
  t392 = 0.4999*t385;
  t459 = t442*t385;
  t464 = t346 + t392 + t459;
  t828 = t588*t385;
  t670 = t588*t540;
  t700 = t670 + t691;
  t705 = -1.*t644*t700;
  t731 = -1.*t442*t540;
  t772 = 0.4999*t321;
  t820 = -1.*t287*t385;
  t825 = t731 + t772 + t820;
  t827 = -1.*t484*t321;
  t839 = t827 + t828;
  t840 = -1.*t644*t839;
  t972 = t484*t540;
  t974 = t972 + t828;
  t1211 = -1.*t644*t974;
  t1256 = t477*t700;
  t1293 = t1211 + t1256;
  t1452 = -0.06*t26*t31;
  t1499 = -0.9063*t42;
  t1512 = -1.*t42*t256;
  t1513 = t1452 + t1499 + t1512;
  t1359 = 0.9063*t26;
  t1368 = t1359 + t424 + t428;
  t1045 = t588*t321;
  t1071 = t484*t385;
  t1079 = t1045 + t1071;
  t573 = -1.*t484*t540;
  t1706 = -1.*t26*t31;
  t1720 = t42*t153;
  t1729 = t1706 + t1720;
  t1313 = 1.142857*t825*t1293;
  t1317 = 0.4999*t540;
  t1323 = t442*t540;
  t1586 = t287*t385;
  t1639 = -1.*t287*t540;
  t1908 = -0.06*t26*t153;
  t1909 = t424 + t1908;
  t1946 = 0.06*t42*t153;
  t1987 = t1452 + t1946;
  t1743 = -1.*t442*t1729;
  t1763 = t477*t839;
  t1772 = -1.*t644*t1079;
  t1776 = t1763 + t1772;
  t1801 = t588*t1729;
  t1803 = t573 + t1801;
  t1808 = t477*t1803;
  t1818 = t484*t1729;
  t1819 = t670 + t1818;
  t1824 = -1.*t644*t1819;
  t1837 = t1808 + t1824;
  t1860 = 1.142857*t464*t1837;
  t593 = -1.*t588*t385;
  t612 = t573 + t593;
  t632 = t477*t612;
  t707 = t632 + t705;
  t729 = 1.142857*t464*t707;
  t843 = -1.*t588*t321;
  t859 = t843 + t691;
  t863 = t477*t859;
  t864 = t840 + t863;
  t877 = 1.142857*t825*t864;
  t937 = t729 + t877;
  t1429 = t1368*t321;
  t1517 = t1513*t385;
  t1588 = t1317 + t1323 + t1429 + t1517 + t1586;
  t2290 = t644*t612;
  t2296 = t2290 + t1256;
  t1598 = -1.*t1513*t540;
  t1662 = -1.*t1368*t385;
  t1745 = t1598 + t1639 + t392 + t1662 + t1743;
  t2183 = -1.*t588*t540;
  t2329 = 1.142857*t825*t2296;
  t1942 = t1909*t321;
  t2006 = t385*t1987;
  t2007 = t1317 + t1323 + t1942 + t1586 + t2006;
  t2029 = -1.*t1909*t385;
  t2064 = -1.*t540*t1987;
  t2070 = t1639 + t392 + t2029 + t2064 + t1743;
  t2352 = t644*t859;
  t2354 = t1763 + t2352;
  t2392 = -1.*t484*t1729;
  t2397 = t2183 + t2392;
  t2409 = t644*t2397;
  t2410 = t1808 + t2409;
  t2413 = 1.142857*t464*t2410;
  t2341 = 1.142857*t1588*t2296;
  t2376 = 1.142857*t1745*t2354;
  t2456 = t2329 + t2341 + t2376 + t2413;
  t2578 = t477*t974;
  t2588 = t644*t700;
  t2605 = t2578 + t2588;
  t2668 = -0.9063*t26;
  t2671 = 0.06*t31*t42;
  t2674 = -1.*t26*t256;
  t2676 = t2668 + t2671 + t2674;
  t2129 = t484*t321;
  t2957 = t644*t1803;
  t2961 = t477*t1819;
  t2974 = t2957 + t2961;
  t2650 = t287*t540;
  t2733 = 0.4999*t1729;
  t2739 = t442*t1729;
  t3041 = 0.06*t26*t153;
  t3063 = t2671 + t3041;
  t2818 = -1.*t442*t321;
  t2837 = -1.*t287*t1729;
  t2847 = t644*t839;
  t2850 = t477*t1079;
  t2854 = t2847 + t2850;
  t2885 = t2129 + t1801;
  t2892 = t477*t2885;
  t2893 = t1045 + t2392;
  t2921 = t644*t2893;
  t2954 = t2892 + t2921;
  t2955 = 1.142857*t464*t2954;
  t2978 = 1.142857*t825*t2974;
  t1595 = 1.142857*t1588*t1293;
  t1788 = 1.142857*t1745*t1776;
  t1893 = t1313 + t1595 + t1788 + t1860;
  t3201 = -0.06*t31;
  t3208 = 0. + t3201;
  t3226 = t3208*t42;
  t3253 = t3226 + t1908;
  t3259 = t26*t3208;
  t3262 = t3259 + t1946;
  t2994 = 1.142857*t1745*t2605;
  t3288 = -1.*t3253*t385;
  t3349 = -1.*t540*t3262;
  t3367 = t1639 + t392 + t3288 + t3349 + t1743;
  t3010 = t1513*t540;
  t3019 = t1368*t385;
  t3097 = -1.*t1368*t540;
  t3441 = -1.*t3208*t42;
  t3445 = t3441 + t3041;
  t3144 = -1.*t1513*t1729;
  t3184 = 1.142857*t1588*t2974;
  t3254 = t3253*t321;
  t3273 = t385*t3262;
  t3278 = t1317 + t1323 + t3254 + t1586 + t3273;
  t3413 = 1.142857*t3367*t2605;
  t2996 = 1.142857*t2070*t2605;
  t3423 = t3253*t385;
  t3025 = t1909*t385;
  t3065 = t3063*t385;
  t3459 = t540*t3262;
  t3068 = t540*t1987;
  t3070 = t321*t1987;
  t3506 = -1.*t540*t3253;
  t3134 = -1.*t540*t1909;
  t3137 = -1.*t540*t3063;
  t3143 = -1.*t385*t1987;
  t3518 = -1.*t3262*t1729;
  t3173 = -1.*t1987*t1729;
  t3544 = 1.142857*t3278*t2974;
  t3187 = 1.142857*t2007*t2974;
  t3694 = 1.142857*t464*t1293;
  t3699 = 1.142857*t825*t1776;
  t3702 = t3694 + t3699;
  t3804 = 1.142857*t825*t2605;
  t3827 = 1.142857*t464*t2974;
  t3809 = 1.142857*t1588*t2605;
  t3810 = 1.142857*t1745*t2854;
  t3833 = t3804 + t3809 + t3810 + t3827;
  t3867 = 1.142857*t2007*t2605;
  t3878 = 1.142857*t2070*t2854;
  t3902 = t3804 + t3867 + t3878 + t3827;
  t3991 = -1.*t477*t700;
  t4006 = -1.*t477*t839;
  t1037 = -1.*t477*t974;
  t1038 = t1037 + t705;
  t1161 = -1.*t477*t1079;
  t1168 = t840 + t1161;
  t4130 = 1.142857*t825*t1038;
  t4181 = -1.*t644*t1803;
  t4184 = -1.*t477*t1819;
  t4213 = t4181 + t4184;
  t4217 = 1.142857*t464*t4213;
  t3978 = -1.*t644*t612;
  t3999 = t3978 + t3991;
  t4003 = 1.142857*t464*t3999;
  t4008 = -1.*t644*t859;
  t4009 = t4006 + t4008;
  t4019 = 1.142857*t825*t4009;
  t4021 = t4003 + t4019;
  t2135 = t2129 + t593;
  t2205 = t2183 + t1071;
  t4537 = 1.142857*t825*t707;
  t4591 = t477*t2397;
  t4594 = t4181 + t4591;
  t4603 = 1.142857*t464*t4594;
  t4558 = 1.142857*t1588*t707;
  t4570 = 1.142857*t1745*t864;
  t4622 = t4537 + t4558 + t4570 + t4603;
  t4138 = 1.142857*t1588*t1038;
  t4178 = 1.142857*t1745*t1168;
  t4241 = t4130 + t4138 + t4178 + t4217;
  t2622 = 2.*t1513*t540;
  t2660 = t1513*t321;
  t2710 = t2676*t385;
  t2719 = 2.*t1368*t385;
  t2747 = t2622 + t2650 + t2660 + t2710 + t2719 + t2733 + t2739;
  t2808 = -1.*t2676*t540;
  t2811 = -2.*t1368*t540;
  t2823 = -1.*t1513*t385;
  t2833 = -2.*t1513*t1729;
  t2844 = t1317 + t2808 + t2811 + t2818 + t2823 + t2833 + t2837;
  t3071 = t3010 + t2650 + t3019 + t3025 + t3065 + t3068 + t3070 + t2733 + t2739;
  t3182 = t1317 + t3097 + t3134 + t3137 + t2818 + t3143 + t3144 + t2837 + t3173;
  t4728 = -1.*t644*t2885;
  t4732 = t477*t2893;
  t4738 = t4728 + t4732;
  t4741 = 1.142857*t464*t4738;
  t4746 = 1.142857*t825*t1837;
  t4777 = 1.142857*t1745*t1293;
  t3458 = t3445*t385;
  t3461 = t321*t3262;
  t3480 = t3010 + t2650 + t3019 + t3423 + t3458 + t3459 + t3461 + t2733 + t2739;
  t3513 = -1.*t540*t3445;
  t3514 = -1.*t385*t3262;
  t3523 = t1317 + t3097 + t3506 + t3513 + t2818 + t3514 + t3144 + t2837 + t3518;
  t4799 = 1.142857*t1588*t1837;
  t4949 = 1.142857*t3367*t1293;
  t4782 = 1.142857*t2070*t1293;
  t3602 = t2650 + t3423 + t3025 + t3065 + t3459 + t3068 + t3070 + t2733 + t2739;
  t3608 = t1317 + t3506 + t3134 + t3137 + t2818 + t3143 + t2837 + t3518 + t3173;
  t4963 = 1.142857*t3278*t1837;
  t4807 = 1.142857*t2007*t1837;
  t1041 = 1.142857*t464*t1038;
  t1169 = 1.142857*t825*t1168;
  t1191 = t1041 + t1169;
  t1201 = -0.5*var2[2]*t1191;
  t1904 = -0.5*var2[7]*t1893;
  t2027 = 1.142857*t2007*t1293;
  t2072 = 1.142857*t2070*t1776;
  t2083 = t1313 + t2027 + t2072 + t1860;
  t2095 = -0.5*var2[8]*t2083;
  t5078 = -0.4999*t484;
  t5080 = -1.*t484*t442;
  t5081 = -1.*t588*t287;
  t5083 = t5078 + t5080 + t5081;
  t5176 = t588*t442;
  t5185 = -1.*t484*t287;
  t5233 = -1.*t588;
  t5240 = 1. + t5233;
  t5246 = -0.4999*t5240;
  t5249 = t5246 + t5176 + t5185;
  t5162 = 0.4999*t588;
  t5192 = t5162 + t5176 + t5185;
  t5221 = -0.4999*t588;
  t5222 = -1.*t588*t442;
  t5223 = t484*t287;
  t5225 = t5221 + t5222 + t5223;
  t5086 = 0.4999*t484;
  t5122 = t484*t442;
  t5123 = t588*t287;
  t5131 = t5086 + t5122 + t5123;
  t5443 = -1.*t484*t1368;
  t5449 = t588*t1513;
  t5453 = t5443 + t5449;
  t5382 = -1.*t588*t1368;
  t5399 = -1.*t484*t1513;
  t5407 = t5382 + t5399;
  t5417 = t588*t1368;
  t5418 = t484*t1513;
  t5420 = t5417 + t5418;
  t5335 = -1.*t5249*t612;
  t5338 = -1.*t5192*t974;
  t5346 = -1.*t5083*t700;
  t5350 = -1.*t5131*t700;
  t5352 = t5335 + t5338 + t5346 + t5350;
  t5465 = t5083*t839;
  t5469 = t5131*t839;
  t5473 = t5249*t859;
  t5474 = t5192*t1079;
  t5488 = t5465 + t5469 + t5473 + t5474;
  t5372 = t5249*t612;
  t5378 = t5192*t974;
  t5437 = t5083*t700;
  t5442 = t5131*t700;
  t5610 = -1.*t484*t1909;
  t5612 = t588*t1987;
  t5615 = t5610 + t5612;
  t5645 = -1.*t588*t1909;
  t5646 = -1.*t484*t1987;
  t5649 = t5645 + t5646;
  t5659 = t588*t1909;
  t5669 = t484*t1987;
  t5671 = t5659 + t5669;
  t5525 = -1.*t5083*t1803;
  t5527 = -1.*t5131*t1803;
  t5532 = -1.*t5249*t2397;
  t5562 = -1.*t5192*t1819;
  t5779 = t588*t2676;
  t5786 = t5779 + t5399;
  t5772 = t484*t2676;
  t5774 = t5772 + t5449;
  t5364 = 1.142857*t1745*t5352;
  t5413 = t5407*t839;
  t5422 = t5420*t839;
  t5455 = t5453*t859;
  t5456 = t5453*t1079;
  t5457 = t5372 + t5378 + t5413 + t5422 + t5437 + t5442 + t5455 + t5456;
  t5461 = 1.142857*t464*t5457;
  t5489 = 1.142857*t1588*t5488;
  t5499 = -1.*t5453*t612;
  t5516 = -1.*t5453*t974;
  t5518 = -1.*t5407*t700;
  t5522 = -1.*t5420*t700;
  t5565 = t5499 + t5516 + t5518 + t5522 + t5525 + t5527 + t5532 + t5562;
  t5570 = 1.142857*t825*t5565;
  t5581 = t5364 + t5461 + t5489 + t5570;
  t5705 = -1.*t5131*t974;
  t5706 = -1.*t5249*t700;
  t5708 = t5705 + t5706;
  t5715 = t5131*t974;
  t5716 = t5453*t839;
  t5717 = t5249*t700;
  t5725 = t5420*t1079;
  t5727 = t5715 + t5716 + t5717 + t5725;
  t5732 = t5249*t839;
  t5734 = t5131*t1079;
  t5736 = t5732 + t5734;
  t5809 = -1.*t5420*t974;
  t5814 = -1.*t5453*t700;
  t5819 = -1.*t5249*t1803;
  t5820 = -1.*t5131*t1819;
  t5821 = t5809 + t5814 + t5819 + t5820;
  t5859 = t5249*t1803;
  t5860 = t5131*t1819;
  t6008 = t484*t3063;
  t6013 = t6008 + t5612;
  t6019 = t588*t3063;
  t6020 = t6019 + t5646;
  t5799 = -1.*t5131*t2885;
  t5800 = -1.*t5249*t2893;
  t6110 = -1.*t484*t3253;
  t6113 = t588*t3262;
  t6114 = t6110 + t6113;
  t6136 = -1.*t588*t3253;
  t6142 = -1.*t484*t3262;
  t6151 = t6136 + t6142;
  t6163 = t588*t3253;
  t6168 = t484*t3262;
  t6171 = t6163 + t6168;
  t5966 = t5420*t974;
  t5977 = t5453*t700;
  t6319 = t484*t3445;
  t6325 = t6319 + t6113;
  t6333 = t588*t3445;
  t6350 = t6333 + t6142;
  t6042 = -1.*t5453*t1803;
  t6051 = -1.*t5420*t1819;
  t6267 = t839*t6114;
  t6271 = t1079*t6171;
  t6281 = t5715 + t5717 + t6267 + t6271;
  t5917 = t839*t5615;
  t5919 = t1079*t5671;
  t5927 = t5715 + t5717 + t5917 + t5919;
  t6306 = -1.*t700*t6114;
  t6307 = -1.*t974*t6171;
  t6309 = t6306 + t6307 + t5819 + t5820;
  t5956 = -1.*t700*t5615;
  t5957 = -1.*t974*t5671;
  t5964 = t5956 + t5957 + t5819 + t5820;
  t6316 = t700*t6114;
  t6385 = t974*t6171;
  t5997 = t700*t5615;
  t6016 = t1079*t6013;
  t6022 = t839*t6020;
  t6023 = t974*t5671;
  t6037 = -1.*t974*t6013;
  t6041 = -1.*t700*t6020;
  t6412 = -1.*t6114*t1803;
  t6044 = -1.*t5615*t1803;
  t6415 = -1.*t6171*t1819;
  t6060 = -1.*t5671*t1819;
  t6541 = 1.142857*t1745*t5708;
  t6550 = 1.142857*t464*t5727;
  t6553 = 1.142857*t1588*t5736;
  t6560 = 1.142857*t825*t5821;
  t6562 = t6541 + t6550 + t6553 + t6560;
  t6571 = 1.142857*t2070*t5708;
  t6577 = 1.142857*t2007*t5736;
  t6580 = 1.142857*t464*t5927;
  t6588 = 1.142857*t825*t5964;
  t6592 = t6571 + t6577 + t6580 + t6588;
  t6747 = 2.285714*t464*t1588;
  t6748 = 2.285714*t825*t1745;
  t6751 = t6747 + t6748;
  t6758 = 2.285714*t464*t2007;
  t6773 = 2.285714*t825*t2070;
  t6774 = t6758 + t6773;
  t6815 = 0.9063*t31;
  t6817 = t31*t256;
  t6824 = 0.06*t31*t153;
  t6835 = t6815 + t6817 + t6824;
  t6843 = Power(t31,2);
  t6844 = -0.06*t6843;
  t6849 = 0.9063*t153;
  t6850 = t256*t153;
  t6852 = t6844 + t6849 + t6850;
  t6863 = -0.9063*t153;
  t6864 = -1.*t256*t153;
  t6865 = Power(t153,2);
  t6869 = -0.06*t6865;
  t6922 = t3208*t31;
  t6924 = 0.06*t6843;
  t6932 = t6922 + t6924 + t6863 + t6864 + t6869;
  t6876 = 0. + t6863 + t6864 + t6869;
  t6942 = t3208*t153;
  t6948 = 0.12*t31*t153;
  t6950 = t6815 + t6817 + t6942 + t6948;
  t7039 = 1.142857*t6835*t1588;
  t7043 = 1.142857*t6852*t1745;
  t7054 = t7039 + t7043;
  t7071 = 1.142857*t6876*t464;
  t7081 = 1.142857*t6835*t825;
  t7088 = 1.142857*t6835*t2007;
  t7091 = 1.142857*t6852*t2070;
  t7092 = t7071 + t7081 + t7088 + t7091;
  p_output1[0]=var2[6]*(t1201 + t1904 + t2095 - 0.5*t937*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t937*var2[2] - 0.5*(1.142857*t464*(t632 + t2205*t644) + 1.142857*t825*(t2135*t644 + t863))*var2[6] - 0.5*t2456*var2[7] - 0.5*(1.142857*t2007*t2296 + t2329 + 1.142857*t2070*t2354 + t2413)*var2[8]);
  p_output1[2]=var2[6]*(-0.5*t1893*var2[2] - 0.5*t2456*var2[6] - 0.5*(2.285714*t1745*t2605 + 1.142857*t2605*t2747 + 1.142857*t2844*t2854 + t2955 + 2.285714*t1588*t2974 + t2978)*var2[7] - 0.5*(t2955 + t2978 + t2994 + t2996 + 1.142857*t2605*t3071 + 1.142857*t2854*t3182 + t3184 + t3187)*var2[8]);
  p_output1[3]=var2[6]*(-0.5*(t1313 + t1860 + 1.142857*t1293*t3278 + 1.142857*t1776*t3367)*var2[2] - 0.5*(t2329 + t2413 + 1.142857*t2296*t3278 + 1.142857*t2354*t3367)*var2[6] - 0.5*(t2955 + t2978 + t2994 + t3184 + t3413 + 1.142857*t2605*t3480 + 1.142857*t2854*t3523 + t3544)*var2[7] - 0.5*(t2955 + t2978 + t2996 + t3187 + t3413 + t3544 + 1.142857*t2605*t3602 + 1.142857*t2854*t3608)*var2[8]);
  p_output1[4]=-0.5*t3702*var2[6];
  p_output1[5]=-0.5*t3702*var2[2] - 1.*(1.142857*t2296*t464 + 1.142857*t2354*t825)*var2[6] - 0.5*t3833*var2[7] - 0.5*t3902*var2[8];
  p_output1[6]=-0.5*t3833*var2[6];
  p_output1[7]=-0.5*t3902*var2[6];
  p_output1[8]=var2[6]*(-0.5*(1.142857*(t4006 + t1079*t644)*t825 + 1.142857*t464*(t3991 + t644*t974))*var2[2] - 0.5*t4021*var2[6] - 0.5*t4241*var2[7] - 0.5*(1.142857*t1038*t2007 + 1.142857*t1168*t2070 + t4130 + t4217)*var2[8]);
  p_output1[9]=var2[6]*(-0.5*t4021*var2[2] - 0.5*(1.142857*t464*(t3978 + t2205*t477) + 1.142857*(t4008 + t2135*t477)*t825)*var2[6] - 0.5*t4622*var2[7] - 0.5*(t4537 + t4603 + 1.142857*t2007*t707 + 1.142857*t2070*t864)*var2[8]);
  p_output1[10]=var2[6]*(-0.5*t4241*var2[2] - 0.5*t4622*var2[6] - 0.5*(2.285714*t1293*t1745 + 2.285714*t1588*t1837 + 1.142857*t1293*t2747 + 1.142857*t1776*t2844 + t4741 + t4746)*var2[7] - 0.5*(1.142857*t1293*t3071 + 1.142857*t1776*t3182 + t4741 + t4746 + t4777 + t4782 + t4799 + t4807)*var2[8]);
  p_output1[11]=var2[6]*(-0.5*(1.142857*t1038*t3278 + 1.142857*t1168*t3367 + t4130 + t4217)*var2[2] - 0.5*(t4537 + t4603 + 1.142857*t3278*t707 + 1.142857*t3367*t864)*var2[6] - 0.5*(1.142857*t1293*t3480 + 1.142857*t1776*t3523 + t4741 + t4746 + t4777 + t4799 + t4949 + t4963)*var2[7] - 0.5*(1.142857*t1293*t3602 + 1.142857*t1776*t3608 + t4741 + t4746 + t4782 + t4807 + t4949 + t4963)*var2[8]);
  p_output1[12]=-0.5*t1191*var2[6];
  p_output1[13]=t1201 + t1904 + t2095 - 1.*t937*var2[6];
  p_output1[14]=-0.5*t1893*var2[6];
  p_output1[15]=-0.5*t2083*var2[6];
  p_output1[16]=var2[6]*(-0.5*(1.142857*t464*(t1079*t5083 + t2135*t5249 + 2.*t5192*t839 + t5225*t839 + 2.*t5083*t859 + t5131*t859) + 1.142857*t825*(-1.*t2205*t5249 - 2.*t5083*t612 - 1.*t5131*t612 - 2.*t5192*t700 - 1.*t5225*t700 - 1.*t5083*t974))*var2[6] - 0.5*t5581*var2[7] - 0.5*(1.142857*t2070*t5352 + 1.142857*t2007*t5488 + 1.142857*t464*(t5372 + t5378 + t5437 + t5442 + t1079*t5615 + t5649*t839 + t5671*t839 + t5615*t859) + 1.142857*t825*(t5525 + t5527 + t5532 + t5562 - 1.*t5615*t612 - 1.*t5649*t700 - 1.*t5671*t700 - 1.*t5615*t974))*var2[8]);
  p_output1[17]=var2[6]*(-0.5*t5581*var2[6] - 0.5*(1.142857*t2844*t5708 + 2.285714*t1588*t5727 + 1.142857*t2747*t5736 + 2.285714*t1745*t5821 + 1.142857*t464*(t1079*t5774 + t5859 + t5860 + 2.*t5453*t700 + t5786*t839 + 2.*t5420*t974) + 1.142857*t825*(-2.*t1819*t5420 - 2.*t1803*t5453 + t5799 + t5800 - 1.*t5786*t700 - 1.*t5774*t974))*var2[7] - 0.5*(1.142857*t3182*t5708 + 1.142857*t2007*t5727 + 1.142857*t3071*t5736 + 1.142857*t2070*t5821 + 1.142857*t1588*t5927 + 1.142857*t1745*t5964 + 1.142857*t464*(t5859 + t5860 + t5966 + t5977 + t5997 + t6016 + t6022 + t6023) + 1.142857*(t5799 + t5800 + t6037 + t6041 + t6042 + t6044 + t6051 + t6060)*t825)*var2[8]);
  p_output1[18]=var2[6]*(-0.5*(1.142857*t3367*t5352 + 1.142857*t3278*t5488 + 1.142857*t464*(t5372 + t5378 + t5437 + t5442 + t1079*t6114 + t6151*t839 + t6171*t839 + t6114*t859) + 1.142857*t825*(t5525 + t5527 + t5532 + t5562 - 1.*t6114*t612 - 1.*t6151*t700 - 1.*t6171*t700 - 1.*t6114*t974))*var2[6] - 0.5*(1.142857*t3523*t5708 + 1.142857*t3278*t5727 + 1.142857*t3480*t5736 + 1.142857*t3367*t5821 + 1.142857*t1588*t6281 + 1.142857*t1745*t6309 + 1.142857*t464*(t5859 + t5860 + t5966 + t5977 + t6316 + t1079*t6325 + t6385 + t6350*t839) + 1.142857*t825*(t5799 + t5800 + t6042 + t6051 + t6412 + t6415 - 1.*t6350*t700 - 1.*t6325*t974))*var2[7] - 0.5*(1.142857*t3608*t5708 + 1.142857*t3602*t5736 + 1.142857*t3278*t5927 + 1.142857*t3367*t5964 + 1.142857*t2007*t6281 + 1.142857*t2070*t6309 + 1.142857*t464*(t5859 + t5860 + t5997 + t6016 + t6022 + t6023 + t6316 + t6385) + 1.142857*(t5799 + t5800 + t6037 + t6041 + t6044 + t6060 + t6412 + t6415)*t825)*var2[8]);
  p_output1[19]=-1.*(1.142857*t464*t5488 + 1.142857*t5352*t825)*var2[6] - 0.5*t6562*var2[7] - 0.5*t6592*var2[8];
  p_output1[20]=-0.5*t6562*var2[6];
  p_output1[21]=-0.5*t6592*var2[6];
  p_output1[22]=var2[6]*(-0.5*(2.285714*Power(t1588,2) + 2.285714*Power(t1745,2) + 2.285714*t2747*t464 + 2.285714*t2844*t825)*var2[7] - 0.5*(2.285714*t1588*t2007 + 2.285714*t1745*t2070 + 2.285714*t3071*t464 + 2.285714*t3182*t825)*var2[8]);
  p_output1[23]=var2[6]*(-0.5*(2.285714*t1588*t3278 + 2.285714*t1745*t3367 + 2.285714*t3480*t464 + 2.285714*t3523*t825)*var2[7] - 0.5*(2.285714*t2007*t3278 + 2.285714*t2070*t3367 + 2.285714*t3602*t464 + 2.285714*t3608*t825)*var2[8]);
  p_output1[24]=-0.5*t6751*var2[7] - 0.5*t6774*var2[8];
  p_output1[25]=-0.5*t6751*var2[6];
  p_output1[26]=-0.5*t6774*var2[6];
  p_output1[27]=var2[6]*(-0.5*(1.142857*t2747*t6835 + 1.142857*t2844*t6852)*var2[7] - 0.5*(1.142857*t1745*t6835 + 1.142857*t3071*t6835 + 1.142857*t3182*t6852 + 1.142857*t1588*t6876)*var2[8]);
  p_output1[28]=var2[6]*(-0.5*(1.142857*t3480*t6835 + 1.142857*t3523*t6852 + 1.142857*t1588*t6932 + 1.142857*t1745*t6950)*var2[7] - 0.5*(1.142857*(-0.9063*t31 - 0.12*t153*t31 - 1.*t256*t31 - 1.*t153*t3208)*t464 + 1.142857*t3367*t6835 + 1.142857*t3602*t6835 + 1.142857*t3608*t6852 + 1.142857*t3278*t6876 + 1.142857*t2007*t6932 + 1.142857*t2070*t6950 + 1.142857*t6932*t825)*var2[8]);
  p_output1[29]=-0.5*t7054*var2[7] - 0.5*t7092*var2[8];
  p_output1[30]=-0.5*t7054*var2[6];
  p_output1[31]=-0.5*t7092*var2[6];
  p_output1[32]=var2[6]*(0.03428571*t2844*var2[7] + 0.03428571*t3182*var2[8]);
  p_output1[33]=var2[6]*(0.03428571*t3523*var2[7] + 0.03428571*t3608*var2[8]);
  p_output1[34]=0.03428571*t1745*var2[7] + 0.03428571*t2070*var2[8];
  p_output1[35]=0.03428571*t1745*var2[6];
  p_output1[36]=0.03428571*t2070*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 37, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L7_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L7_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

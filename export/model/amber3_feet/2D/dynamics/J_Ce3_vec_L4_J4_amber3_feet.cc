/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:40 GMT-08:00
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
  double t176;
  double t74;
  double t69;
  double t391;
  double t198;
  double t257;
  double t264;
  double t306;
  double t398;
  double t428;
  double t557;
  double t563;
  double t570;
  double t955;
  double t842;
  double t901;
  double t912;
  double t823;
  double t594;
  double t606;
  double t615;
  double t648;
  double t655;
  double t662;
  double t505;
  double t514;
  double t515;
  double t97;
  double t177;
  double t483;
  double t500;
  double t1035;
  double t977;
  double t764;
  double t542;
  double t590;
  double t689;
  double t734;
  double t951;
  double t1009;
  double t1048;
  double t1053;
  double t1056;
  double t1113;
  double t1119;
  double t1124;
  double t1149;
  double t1189;
  double t1204;
  double t1219;
  double t1264;
  double t1265;
  double t1097;
  double t1209;
  double t1447;
  double t1459;
  double t1470;
  double t1325;
  double t1349;
  double t1530;
  double t1537;
  double t1034;
  double t1098;
  double t1774;
  double t1810;
  double t1815;
  double t1858;
  double t1740;
  double t1770;
  double t1270;
  double t1284;
  double t2063;
  double t2094;
  double t2096;
  double t1716;
  double t1736;
  double t1772;
  double t1877;
  double t1883;
  double t1956;
  double t2251;
  double t2265;
  double t2266;
  double t1973;
  double t1975;
  double t1979;
  double t2123;
  double t2132;
  double t2172;
  double t2176;
  double t2185;
  double t2186;
  double t1699;
  double t2398;
  double t2401;
  double t2405;
  double t2442;
  double t2450;
  double t2479;
  double t2482;
  double t2494;
  double t2177;
  double t2187;
  double t2190;
  double t2191;
  double t2274;
  double t2452;
  double t2523;
  double t2530;
  double t2535;
  double t2561;
  double t2564;
  double t2299;
  double t2303;
  double t2314;
  double t2338;
  double t2339;
  double t2349;
  double t2351;
  double t1112;
  double t1292;
  double t1296;
  double t2647;
  double t2650;
  double t2663;
  double t1474;
  double t1524;
  double t1527;
  double t1546;
  double t1563;
  double t1565;
  double t1568;
  double t1589;
  double t1608;
  double t1610;
  double t1630;
  double t1633;
  double t1637;
  double t1642;
  double t1654;
  double t1665;
  double t1678;
  double t1686;
  double t2722;
  double t2725;
  double t2801;
  double t2843;
  double t3007;
  double t3047;
  double t3051;
  double t3076;
  double t3186;
  double t3192;
  double t3302;
  double t3309;
  double t3314;
  double t3316;
  double t3171;
  double t3195;
  double t3234;
  double t3241;
  double t3258;
  double t3264;
  double t3121;
  double t3126;
  double t3149;
  double t3152;
  double t3579;
  double t3610;
  double t3470;
  double t3478;
  double t3974;
  double t3980;
  double t3981;
  double t3862;
  double t3874;
  double t3876;
  double t3912;
  double t3939;
  double t3943;
  double t3428;
  double t3503;
  double t3534;
  double t3561;
  double t3642;
  double t3665;
  double t3679;
  double t3713;
  double t3733;
  double t3743;
  double t3782;
  double t3789;
  double t3793;
  double t3801;
  double t3803;
  double t4042;
  double t4049;
  double t4050;
  double t4055;
  double t4114;
  double t3844;
  double t3861;
  double t3967;
  double t3970;
  double t4388;
  double t4389;
  double t4394;
  double t4431;
  double t4433;
  double t4436;
  double t4457;
  double t4475;
  double t4483;
  double t4172;
  double t4175;
  double t4179;
  double t4182;
  double t4615;
  double t4627;
  double t4664;
  double t4857;
  double t4880;
  double t4888;
  double t1959;
  double t2158;
  double t2219;
  double t2230;
  double t2285;
  double t2336;
  double t2359;
  double t2365;
  double t2369;
  double t2381;
  double t3458;
  double t3468;
  double t3563;
  double t3567;
  double t3655;
  double t3685;
  double t3766;
  double t3774;
  double t3835;
  double t3889;
  double t3963;
  double t4015;
  double t4024;
  double t4035;
  double t4038;
  double t4122;
  double t4125;
  double t4131;
  double t4166;
  double t4170;
  double t4233;
  double t4237;
  double t4252;
  double t4283;
  double t4286;
  double t4304;
  double t4985;
  double t4991;
  double t5028;
  double t5073;
  double t5080;
  double t5088;
  double t5098;
  double t5105;
  double t5121;
  double t5129;
  double t5170;
  double t5226;
  double t5228;
  double t5230;
  double t5237;
  double t5239;
  double t5240;
  double t5248;
  double t5283;
  double t5465;
  double t5482;
  double t5489;
  double t5626;
  double t5628;
  double t5635;
  double t5576;
  double t5599;
  double t5943;
  double t5974;
  double t5925;
  double t5933;
  double t5314;
  double t5190;
  double t5201;
  double t5202;
  double t5214;
  double t6129;
  double t6141;
  double t6144;
  double t5329;
  double t5343;
  double t5359;
  double t5377;
  double t6121;
  double t6128;
  double t6145;
  double t6155;
  double t6157;
  double t6159;
  double t6165;
  double t6235;
  double t6258;
  double t6264;
  double t6269;
  double t6285;
  double t6286;
  double t6290;
  double t5521;
  double t5524;
  double t5535;
  double t5587;
  double t5605;
  double t5607;
  double t5611;
  double t5653;
  double t5792;
  double t5805;
  double t5809;
  double t5823;
  double t5824;
  double t5866;
  double t5872;
  double t5873;
  double t5891;
  double t5898;
  double t5899;
  double t5900;
  double t5902;
  double t5908;
  double t5909;
  double t5921;
  double t6033;
  double t6035;
  double t6036;
  double t6038;
  double t6039;
  double t6070;
  double t6075;
  double t6530;
  double t6533;
  double t6539;
  double t6540;
  double t5983;
  double t5984;
  double t6640;
  double t6651;
  double t6655;
  double t6656;
  double t6657;
  double t6667;
  double t6670;
  double t6673;
  double t6675;
  double t6676;
  double t6726;
  double t6727;
  double t6728;
  double t6775;
  double t6787;
  double t6777;
  double t6790;
  double t6794;
  double t6801;
  double t6811;
  double t6815;
  double t6893;
  double t6895;
  double t6896;
  double t6903;
  double t6904;
  double t6918;
  double t6930;
  double t6931;
  double t6937;
  double t6186;
  double t6191;
  double t6199;
  double t6203;
  double t6987;
  double t6985;
  double t6989;
  double t6992;
  double t6997;
  double t7000;
  double t7014;
  double t7015;
  double t7017;
  double t7019;
  double t7020;
  double t6383;
  double t6423;
  double t6434;
  double t6446;
  double t6516;
  double t6523;
  double t7163;
  double t7165;
  double t7173;
  double t7177;
  double t6603;
  double t6608;
  double t6175;
  double t6181;
  double t6213;
  double t7002;
  double t6216;
  double t6218;
  double t6223;
  double t7238;
  double t7266;
  double t6395;
  double t7062;
  double t6424;
  double t7071;
  double t6435;
  double t7085;
  double t6447;
  double t7101;
  double t6466;
  double t6467;
  double t6493;
  double t7115;
  double t7121;
  double t7132;
  double t6508;
  double t6510;
  double t6511;
  double t7150;
  double t7152;
  double t7153;
  double t6525;
  double t6586;
  double t7161;
  double t7170;
  double t7178;
  double t7182;
  double t7190;
  double t7210;
  double t6605;
  double t7211;
  double t6609;
  double t7218;
  double t6827;
  double t6832;
  double t6851;
  double t7372;
  double t7373;
  double t7374;
  double t7379;
  double t7380;
  double t7381;
  double t7382;
  double t7383;
  double t7393;
  double t7397;
  double t7400;
  double t7401;
  double t7403;
  t176 = Sin(var1[4]);
  t74 = Cos(var1[5]);
  t69 = Cos(var1[4]);
  t391 = Sin(var1[5]);
  t198 = -1.*t74;
  t257 = 1. + t198;
  t264 = -1.3127*t257;
  t306 = -1.3127*t74;
  t398 = -0.06*t391;
  t428 = t264 + t306 + t398;
  t557 = t69*t74;
  t563 = -1.*t176*t391;
  t570 = t557 + t563;
  t955 = Cos(var1[3]);
  t842 = -1.*t74*t176;
  t901 = -1.*t69*t391;
  t912 = t842 + t901;
  t823 = Sin(var1[3]);
  t594 = -1.*t69;
  t606 = 1. + t594;
  t615 = -0.9063*t606;
  t648 = -0.06*t74*t176;
  t655 = t69*t428;
  t662 = t615 + t648 + t655;
  t505 = t74*t176;
  t514 = t69*t391;
  t515 = t505 + t514;
  t97 = 0.06*t69*t74;
  t177 = 0.9063*t176;
  t483 = t176*t428;
  t500 = t97 + t177 + t483;
  t1035 = Sin(var1[2]);
  t977 = t955*t570;
  t764 = Cos(var1[2]);
  t542 = t500*t515;
  t590 = 0.4999*t570;
  t689 = t662*t570;
  t734 = t542 + t590 + t689;
  t951 = t823*t912;
  t1009 = t951 + t977;
  t1048 = t955*t912;
  t1053 = -1.*t823*t570;
  t1056 = t1048 + t1053;
  t1113 = -1.*t662*t912;
  t1119 = 0.4999*t515;
  t1124 = -1.*t500*t570;
  t1149 = t1113 + t1119 + t1124;
  t1189 = -1.*t823*t515;
  t1204 = t1189 + t977;
  t1219 = t955*t515;
  t1264 = t823*t570;
  t1265 = t1219 + t1264;
  t1097 = -1.*t1035*t1056;
  t1209 = -1.*t1035*t1204;
  t1447 = -1.*t823*t912;
  t1459 = -1.*t955*t570;
  t1470 = t1447 + t1459;
  t1325 = -1.*t764*t1056;
  t1349 = -1.*t764*t1204;
  t1530 = -1.*t955*t515;
  t1537 = t1530 + t1053;
  t1034 = -1.*t764*t1009;
  t1098 = t1034 + t1097;
  t1774 = -0.06*t69*t74;
  t1810 = -0.9063*t176;
  t1815 = -1.*t176*t428;
  t1858 = t1774 + t1810 + t1815;
  t1740 = 0.9063*t69;
  t1770 = t1740 + t648 + t655;
  t1270 = -1.*t764*t1265;
  t1284 = t1209 + t1270;
  t2063 = -1.*t69*t74;
  t2094 = t176*t391;
  t2096 = t2063 + t2094;
  t1716 = 0.4999*t912;
  t1736 = t662*t912;
  t1772 = t1770*t515;
  t1877 = t1858*t570;
  t1883 = t500*t570;
  t1956 = t1716 + t1736 + t1772 + t1877 + t1883;
  t2251 = -1.*t1035*t1009;
  t2265 = t764*t1056;
  t2266 = t2251 + t2265;
  t1973 = -1.*t1858*t912;
  t1975 = -1.*t500*t912;
  t1979 = -1.*t1770*t570;
  t2123 = -1.*t662*t2096;
  t2132 = t1973 + t1975 + t590 + t1979 + t2123;
  t2172 = t955*t2096;
  t2176 = t1447 + t2172;
  t2185 = t823*t2096;
  t2186 = t1048 + t2185;
  t1699 = 1.142857*t1149*t1098;
  t2398 = -0.06*t74;
  t2401 = 0. + t2398;
  t2405 = t2401*t176;
  t2442 = -0.06*t69*t391;
  t2450 = t2405 + t2442;
  t2479 = t69*t2401;
  t2482 = 0.06*t176*t391;
  t2494 = t2479 + t2482;
  t2177 = -1.*t1035*t2176;
  t2187 = -1.*t764*t2186;
  t2190 = t2177 + t2187;
  t2191 = 1.142857*t734*t2190;
  t2274 = 1.142857*t1149*t2266;
  t2452 = t2450*t515;
  t2523 = t570*t2494;
  t2530 = t1716 + t1736 + t2452 + t1883 + t2523;
  t2535 = -1.*t2450*t570;
  t2561 = -1.*t912*t2494;
  t2564 = t1975 + t590 + t2535 + t2561 + t2123;
  t2299 = t764*t1204;
  t2303 = -1.*t1035*t1265;
  t2314 = t2299 + t2303;
  t2338 = t764*t2176;
  t2339 = -1.*t1035*t2186;
  t2349 = t2338 + t2339;
  t2351 = 1.142857*t734*t2349;
  t1112 = 1.142857*t734*t1098;
  t1292 = 1.142857*t1149*t1284;
  t1296 = t1112 + t1292;
  t2647 = 1.142857*t734*t2266;
  t2650 = 1.142857*t1149*t2314;
  t2663 = t2647 + t2650;
  t1474 = t764*t1470;
  t1524 = t1474 + t1097;
  t1527 = 1.142857*t734*t1524;
  t1546 = t764*t1537;
  t1563 = t1209 + t1546;
  t1565 = 1.142857*t1149*t1563;
  t1568 = t1527 + t1565;
  t1589 = 0.5*var2[0]*t1568;
  t1608 = -1.*t1035*t1470;
  t1610 = t1608 + t1325;
  t1630 = 1.142857*t734*t1610;
  t1633 = -1.*t1035*t1537;
  t1637 = t1349 + t1633;
  t1642 = 1.142857*t1149*t1637;
  t1654 = t1630 + t1642;
  t1665 = 0.5*var2[1]*t1654;
  t1678 = t1589 + t1665;
  t1686 = var2[3]*t1678;
  t2722 = t823*t515;
  t2725 = t2722 + t1459;
  t2801 = -1.*t955*t912;
  t2843 = t2801 + t1264;
  t3007 = -0.4999*t823;
  t3047 = -1.*t823*t662;
  t3051 = -1.*t955*t500;
  t3076 = t3007 + t3047 + t3051;
  t3186 = t955*t662;
  t3192 = -1.*t823*t500;
  t3302 = -1.*t955;
  t3309 = 1. + t3302;
  t3314 = -0.4999*t3309;
  t3316 = t3314 + t3186 + t3192;
  t3171 = 0.4999*t955;
  t3195 = t3171 + t3186 + t3192;
  t3234 = -0.4999*t955;
  t3241 = -1.*t955*t662;
  t3258 = t823*t500;
  t3264 = t3234 + t3241 + t3258;
  t3121 = 0.4999*t823;
  t3126 = t823*t662;
  t3149 = t955*t500;
  t3152 = t3121 + t3126 + t3149;
  t3579 = t1035*t1470;
  t3610 = t3579 + t2265;
  t3470 = -1.*t823*t2096;
  t3478 = t2801 + t3470;
  t3974 = -1.*t823*t1770;
  t3980 = t955*t1858;
  t3981 = t3974 + t3980;
  t3862 = -1.*t955*t1770;
  t3874 = -1.*t823*t1858;
  t3876 = t3862 + t3874;
  t3912 = t955*t1770;
  t3939 = t823*t1858;
  t3943 = t3912 + t3939;
  t3428 = 1.142857*t1149*t1524;
  t3503 = t764*t3478;
  t3534 = t2177 + t3503;
  t3561 = 1.142857*t734*t3534;
  t3642 = 1.142857*t1149*t3610;
  t3665 = t1035*t1537;
  t3679 = t2299 + t3665;
  t3713 = t1035*t3478;
  t3733 = t2338 + t3713;
  t3743 = 1.142857*t734*t3733;
  t3782 = -1.*t3316*t1470;
  t3789 = -1.*t3195*t1009;
  t3793 = -1.*t3076*t1056;
  t3801 = -1.*t3152*t1056;
  t3803 = t3782 + t3789 + t3793 + t3801;
  t4042 = t3076*t1204;
  t4049 = t3152*t1204;
  t4050 = t3316*t1537;
  t4055 = t3195*t1265;
  t4114 = t4042 + t4049 + t4050 + t4055;
  t3844 = t3316*t1470;
  t3861 = t3195*t1009;
  t3967 = t3076*t1056;
  t3970 = t3152*t1056;
  t4388 = -1.*t823*t2450;
  t4389 = t955*t2494;
  t4394 = t4388 + t4389;
  t4431 = -1.*t955*t2450;
  t4433 = -1.*t823*t2494;
  t4436 = t4431 + t4433;
  t4457 = t955*t2450;
  t4475 = t823*t2494;
  t4483 = t4457 + t4475;
  t4172 = -1.*t3076*t2176;
  t4175 = -1.*t3152*t2176;
  t4179 = -1.*t3316*t3478;
  t4182 = -1.*t3195*t2186;
  t4615 = 1.142857*t734*t3610;
  t4627 = 1.142857*t1149*t3679;
  t4664 = t4615 + t4627;
  t4857 = 1.142857*t1149*t3803;
  t4880 = 1.142857*t734*t4114;
  t4888 = t4857 + t4880;
  t1959 = 1.142857*t1956*t1098;
  t2158 = 1.142857*t2132*t1284;
  t2219 = t1699 + t1959 + t2158 + t2191;
  t2230 = 0.5*var2[1]*t2219;
  t2285 = 1.142857*t1956*t2266;
  t2336 = 1.142857*t2132*t2314;
  t2359 = t2274 + t2285 + t2336 + t2351;
  t2365 = 0.5*var2[0]*t2359;
  t2369 = t2230 + t2365;
  t2381 = var2[3]*t2369;
  t3458 = 1.142857*t1956*t1524;
  t3468 = 1.142857*t2132*t1563;
  t3563 = t3428 + t3458 + t3468 + t3561;
  t3567 = 0.5*var2[1]*t3563;
  t3655 = 1.142857*t1956*t3610;
  t3685 = 1.142857*t2132*t3679;
  t3766 = t3642 + t3655 + t3685 + t3743;
  t3774 = 0.5*var2[0]*t3766;
  t3835 = 1.142857*t2132*t3803;
  t3889 = t3876*t1204;
  t3963 = t3943*t1204;
  t4015 = t3981*t1537;
  t4024 = t3981*t1265;
  t4035 = t3844 + t3861 + t3889 + t3963 + t3967 + t3970 + t4015 + t4024;
  t4038 = 1.142857*t734*t4035;
  t4122 = 1.142857*t1956*t4114;
  t4125 = -1.*t3981*t1470;
  t4131 = -1.*t3981*t1009;
  t4166 = -1.*t3876*t1056;
  t4170 = -1.*t3943*t1056;
  t4233 = t4125 + t4131 + t4166 + t4170 + t4172 + t4175 + t4179 + t4182;
  t4237 = 1.142857*t1149*t4233;
  t4252 = t3835 + t4038 + t4122 + t4237;
  t4283 = 0.5*var2[2]*t4252;
  t4286 = t3567 + t3774 + t4283;
  t4304 = var2[3]*t4286;
  t4985 = -0.9063*t69;
  t4991 = 0.06*t74*t176;
  t5028 = -1.*t69*t428;
  t5073 = t4985 + t4991 + t5028;
  t5080 = -1.*t5073*t912;
  t5088 = -2.*t1770*t912;
  t5098 = -1.*t662*t515;
  t5105 = -1.*t1858*t570;
  t5121 = -2.*t1858*t2096;
  t5129 = -1.*t500*t2096;
  t5170 = t1716 + t5080 + t5088 + t5098 + t5105 + t5121 + t5129;
  t5226 = 2.*t1858*t912;
  t5228 = t500*t912;
  t5230 = t1858*t515;
  t5237 = t5073*t570;
  t5239 = 2.*t1770*t570;
  t5240 = 0.4999*t2096;
  t5248 = t662*t2096;
  t5283 = t5226 + t5228 + t5230 + t5237 + t5239 + t5240 + t5248;
  t5465 = t764*t1009;
  t5482 = t1035*t1056;
  t5489 = t5465 + t5482;
  t5626 = t1035*t2176;
  t5628 = t764*t2186;
  t5635 = t5626 + t5628;
  t5576 = t2722 + t2172;
  t5599 = t1219 + t3470;
  t5943 = t955*t5073;
  t5974 = t5943 + t3874;
  t5925 = t823*t5073;
  t5933 = t5925 + t3980;
  t5314 = Power(t74,2);
  t5190 = 0.9063*t74;
  t5201 = t74*t428;
  t5202 = 0.06*t74*t391;
  t5214 = t5190 + t5201 + t5202;
  t6129 = -1.*t2401*t176;
  t6141 = 0.06*t69*t391;
  t6144 = t6129 + t6141;
  t5329 = -0.06*t5314;
  t5343 = 0.9063*t391;
  t5359 = t428*t391;
  t5377 = t5329 + t5343 + t5359;
  t6121 = -1.*t1770*t912;
  t6128 = -1.*t912*t2450;
  t6145 = -1.*t912*t6144;
  t6155 = -1.*t570*t2494;
  t6157 = -1.*t1858*t2096;
  t6159 = -1.*t2494*t2096;
  t6165 = t1716 + t6121 + t6128 + t6145 + t5098 + t6155 + t6157 + t5129 + t6159;
  t6235 = t1858*t912;
  t6258 = t1770*t570;
  t6264 = t2450*t570;
  t6269 = t6144*t570;
  t6285 = t912*t2494;
  t6286 = t515*t2494;
  t6290 = t6235 + t5228 + t6258 + t6264 + t6269 + t6285 + t6286 + t5240 + t5248;
  t5521 = t1035*t1204;
  t5524 = t764*t1265;
  t5535 = t5521 + t5524;
  t5587 = t764*t5576;
  t5605 = t1035*t5599;
  t5607 = t5587 + t5605;
  t5611 = 1.142857*t734*t5607;
  t5653 = 1.142857*t1149*t5635;
  t5792 = -1.*t1035*t5576;
  t5805 = t764*t5599;
  t5809 = t5792 + t5805;
  t5823 = 1.142857*t734*t5809;
  t5824 = 1.142857*t1149*t2349;
  t5866 = -1.*t3152*t1009;
  t5872 = -1.*t3316*t1056;
  t5873 = t5866 + t5872;
  t5891 = t3152*t1009;
  t5898 = t3981*t1204;
  t5899 = t3316*t1056;
  t5900 = t3943*t1265;
  t5902 = t5891 + t5898 + t5899 + t5900;
  t5908 = t3316*t1204;
  t5909 = t3152*t1265;
  t5921 = t5908 + t5909;
  t6033 = -1.*t3943*t1009;
  t6035 = -1.*t3981*t1056;
  t6036 = -1.*t3316*t2176;
  t6038 = -1.*t3152*t2186;
  t6039 = t6033 + t6035 + t6036 + t6038;
  t6070 = t3316*t2176;
  t6075 = t3152*t2186;
  t6530 = t823*t6144;
  t6533 = t6530 + t4389;
  t6539 = t955*t6144;
  t6540 = t6539 + t4433;
  t5983 = -1.*t3152*t5576;
  t5984 = -1.*t3316*t5599;
  t6640 = 1.142857*t1149*t5489;
  t6651 = 1.142857*t1956*t5489;
  t6655 = 1.142857*t2132*t5535;
  t6656 = 1.142857*t734*t5635;
  t6657 = t6640 + t6651 + t6655 + t6656;
  t6667 = 1.142857*t2132*t5873;
  t6670 = 1.142857*t734*t5902;
  t6673 = 1.142857*t1956*t5921;
  t6675 = 1.142857*t1149*t6039;
  t6676 = t6667 + t6670 + t6673 + t6675;
  t6726 = 1.142857*t5214*t1956;
  t6727 = 1.142857*t5377*t2132;
  t6728 = t6726 + t6727;
  t6775 = t648 + t2442;
  t6787 = t1774 + t2482;
  t6777 = t6775*t515;
  t6790 = t570*t6787;
  t6794 = t1716 + t1736 + t6777 + t1883 + t6790;
  t6801 = -1.*t6775*t570;
  t6811 = -1.*t912*t6787;
  t6815 = t1975 + t590 + t6801 + t6811 + t2123;
  t6893 = -1.*t823*t6775;
  t6895 = t955*t6787;
  t6896 = t6893 + t6895;
  t6903 = -1.*t955*t6775;
  t6904 = -1.*t823*t6787;
  t6918 = t6903 + t6904;
  t6930 = t955*t6775;
  t6931 = t823*t6787;
  t6937 = t6930 + t6931;
  t6186 = -0.9063*t391;
  t6191 = -1.*t428*t391;
  t6199 = Power(t391,2);
  t6203 = -0.06*t6199;
  t6987 = t4991 + t6141;
  t6985 = -1.*t912*t6775;
  t6989 = -1.*t912*t6987;
  t6992 = -1.*t570*t6787;
  t6997 = -1.*t6787*t2096;
  t7000 = t1716 + t6121 + t6985 + t6989 + t5098 + t6992 + t6157 + t5129 + t6997;
  t7014 = t6775*t570;
  t7015 = t6987*t570;
  t7017 = t912*t6787;
  t7019 = t515*t6787;
  t7020 = t6235 + t5228 + t6258 + t7014 + t7015 + t7017 + t7019 + t5240 + t5248;
  t6383 = 1.142857*t2132*t5489;
  t6423 = 1.142857*t1956*t5635;
  t6434 = 1.142857*t2132*t2266;
  t6446 = 1.142857*t1956*t2349;
  t6516 = t3943*t1009;
  t6523 = t3981*t1056;
  t7163 = t823*t6987;
  t7165 = t7163 + t6895;
  t7173 = t955*t6987;
  t7177 = t7173 + t6904;
  t6603 = -1.*t3981*t2176;
  t6608 = -1.*t3943*t2186;
  t6175 = t2401*t74;
  t6181 = 0.06*t5314;
  t6213 = t6175 + t6181 + t6186 + t6191 + t6203;
  t7002 = 0. + t6186 + t6191 + t6203;
  t6216 = t2401*t391;
  t6218 = 0.12*t74*t391;
  t6223 = t5190 + t5201 + t6216 + t6218;
  t7238 = t1716 + t6128 + t6985 + t6989 + t5098 + t6992 + t5129 + t6159 + t6997;
  t7266 = t5228 + t6264 + t7014 + t7015 + t6285 + t7017 + t7019 + t5240 + t5248;
  t6395 = 1.142857*t2564*t5489;
  t7062 = 1.142857*t6815*t5489;
  t6424 = 1.142857*t2530*t5635;
  t7071 = 1.142857*t6794*t5635;
  t6435 = 1.142857*t2564*t2266;
  t7085 = 1.142857*t6815*t2266;
  t6447 = 1.142857*t2530*t2349;
  t7101 = 1.142857*t6794*t2349;
  t6466 = t1204*t4394;
  t6467 = t1265*t4483;
  t6493 = t5891 + t5899 + t6466 + t6467;
  t7115 = t1204*t6896;
  t7121 = t1265*t6937;
  t7132 = t5891 + t5899 + t7115 + t7121;
  t6508 = -1.*t1056*t4394;
  t6510 = -1.*t1009*t4483;
  t6511 = t6508 + t6510 + t6036 + t6038;
  t7150 = -1.*t1056*t6896;
  t7152 = -1.*t1009*t6937;
  t7153 = t7150 + t7152 + t6036 + t6038;
  t6525 = t1056*t4394;
  t6586 = t1009*t4483;
  t7161 = t1056*t6896;
  t7170 = t1265*t7165;
  t7178 = t1204*t7177;
  t7182 = t1009*t6937;
  t7190 = -1.*t1009*t7165;
  t7210 = -1.*t1056*t7177;
  t6605 = -1.*t4394*t2176;
  t7211 = -1.*t6896*t2176;
  t6609 = -1.*t4483*t2186;
  t7218 = -1.*t6937*t2186;
  t6827 = 1.142857*t6794*t2266;
  t6832 = 1.142857*t6815*t2314;
  t6851 = t2274 + t6827 + t6832 + t2351;
  t7372 = 1.142857*t6794*t5489;
  t7373 = 1.142857*t6815*t5535;
  t7374 = t6640 + t7372 + t7373 + t6656;
  t7379 = 1.142857*t6815*t5873;
  t7380 = 1.142857*t6794*t5921;
  t7381 = 1.142857*t734*t7132;
  t7382 = 1.142857*t1149*t7153;
  t7383 = t7379 + t7380 + t7381 + t7382;
  t7393 = 1.142857*t7002*t734;
  t7397 = 1.142857*t5214*t1149;
  t7400 = 1.142857*t5214*t6794;
  t7401 = 1.142857*t5377*t6815;
  t7403 = t7393 + t7397 + t7400 + t7401;
  p_output1[0]=(0.5*t1296*var2[0] + 0.5*(1.142857*t1149*(t1035*t1265 + t1349) + 1.142857*(t1009*t1035 + t1325)*t734)*var2[1])*var2[3];
  p_output1[1]=t1686;
  p_output1[2]=t2381;
  p_output1[3]=(0.5*(t2274 + t2351 + 1.142857*t2266*t2530 + 1.142857*t2314*t2564)*var2[0] + 0.5*(t1699 + t2191 + 1.142857*t1098*t2530 + 1.142857*t1284*t2564)*var2[1])*var2[3];
  p_output1[4]=0.5*t2663*var2[3];
  p_output1[5]=0.5*t1296*var2[3];
  p_output1[6]=0.5*t2663*var2[0] + 0.5*t1296*var2[1];
  p_output1[7]=t1686;
  p_output1[8]=(0.5*(1.142857*t1149*(t1546 + t1035*t2725) + 1.142857*(t1474 + t1035*t2843)*t734)*var2[0] + 0.5*(1.142857*t1149*(t1633 + t2725*t764) + 1.142857*t734*(t1608 + t2843*t764))*var2[1] + 0.5*(1.142857*t1149*(-1.*t1009*t3076 - 2.*t1470*t3076 - 1.*t1470*t3152 - 2.*t1056*t3195 - 1.*t1056*t3264 - 1.*t2843*t3316) + 1.142857*(t1265*t3076 + 2.*t1537*t3076 + t1537*t3152 + 2.*t1204*t3195 + t1204*t3264 + t2725*t3316)*t734)*var2[2])*var2[3];
  p_output1[9]=t4304;
  p_output1[10]=(0.5*(1.142857*t2530*t3610 + t3642 + 1.142857*t2564*t3679 + t3743)*var2[0] + 0.5*(1.142857*t1524*t2530 + 1.142857*t1563*t2564 + t3428 + t3561)*var2[1] + 0.5*(1.142857*t2564*t3803 + 1.142857*t2530*t4114 + 1.142857*t1149*(t4172 + t4175 + t4179 + t4182 - 1.*t1009*t4394 - 1.*t1470*t4394 - 1.*t1056*t4436 - 1.*t1056*t4483) + 1.142857*(t3844 + t3861 + t3967 + t3970 + t1265*t4394 + t1537*t4394 + t1204*t4436 + t1204*t4483)*t734)*var2[2])*var2[3];
  p_output1[11]=0.5*t4664*var2[3];
  p_output1[12]=0.5*t1568*var2[3];
  p_output1[13]=0.5*t4888*var2[3];
  p_output1[14]=0.5*t4664*var2[0] + 0.5*t1568*var2[1] + 0.5*t4888*var2[2];
  p_output1[15]=t2381;
  p_output1[16]=t4304;
  p_output1[17]=var2[3]*(0.5*(2.285714*t2132*t5489 + 1.142857*t5283*t5489 + 1.142857*t5170*t5535 + t5611 + 2.285714*t1956*t5635 + t5653)*var2[0] + 0.5*(2.285714*t2132*t2266 + 2.285714*t1956*t2349 + 1.142857*t2314*t5170 + 1.142857*t2266*t5283 + t5823 + t5824)*var2[1] + 0.5*(1.142857*t5170*t5873 + 2.285714*t1956*t5902 + 1.142857*t5283*t5921 + 1.142857*t1149*(-2.*t2186*t3943 - 2.*t2176*t3981 - 1.*t1009*t5933 - 1.*t1056*t5974 + t5983 + t5984) + 2.285714*t2132*t6039 + 1.142857*(2.*t1009*t3943 + 2.*t1056*t3981 + t1265*t5933 + t1204*t5974 + t6070 + t6075)*t734)*var2[2] + 0.5*(2.285714*Power(t1956,2) + 2.285714*Power(t2132,2) + 2.285714*t1149*t5170 + 2.285714*t5283*t734)*var2[3] + 0.5*(1.142857*t5214*t5283 + 1.142857*t5170*t5377)*var2[4] - 0.03428571*t5170*var2[5]);
  p_output1[18]=var2[3]*(0.5*(t5611 + t5653 + 1.142857*t5535*t6165 + 1.142857*t5489*t6290 + t6383 + t6395 + t6423 + t6424)*var2[0] + 0.5*(t5823 + t5824 + 1.142857*t2314*t6165 + 1.142857*t2266*t6290 + t6434 + t6435 + t6446 + t6447)*var2[1] + 0.5*(1.142857*t2530*t5902 + 1.142857*t2564*t6039 + 1.142857*t5873*t6165 + 1.142857*t5921*t6290 + 1.142857*t1956*t6493 + 1.142857*t2132*t6511 + 1.142857*t1149*(t5983 + t5984 - 1.*t1009*t6533 - 1.*t1056*t6540 + t6603 + t6605 + t6608 + t6609) + 1.142857*(t6070 + t6075 + t6516 + t6523 + t6525 + t1265*t6533 + t1204*t6540 + t6586)*t734)*var2[2] + 0.5*(2.285714*t1956*t2530 + 2.285714*t2132*t2564 + 2.285714*t1149*t6165 + 2.285714*t6290*t734)*var2[3] + 0.5*(1.142857*t5377*t6165 + 1.142857*t1956*t6213 + 1.142857*t2132*t6223 + 1.142857*t5214*t6290)*var2[4] - 0.03428571*t6165*var2[5]);
  p_output1[19]=0.5*t6657*var2[3];
  p_output1[20]=0.5*t2359*var2[3];
  p_output1[21]=0.5*t6676*var2[3];
  p_output1[22]=0.5*t6657*var2[0] + 0.5*t2359*var2[1] + 0.5*t6676*var2[2] + (2.285714*t1149*t2132 + 2.285714*t1956*t734)*var2[3] + 0.5*t6728*var2[4] - 0.03428571*t2132*var2[5];
  p_output1[23]=0.5*t6728*var2[3];
  p_output1[24]=-0.03428571*t2132*var2[3];
  p_output1[25]=(0.5*t6851*var2[0] + 0.5*(t1699 + t2191 + 1.142857*t1098*t6794 + 1.142857*t1284*t6815)*var2[1])*var2[3];
  p_output1[26]=(0.5*(t3642 + t3743 + 1.142857*t3610*t6794 + 1.142857*t3679*t6815)*var2[0] + 0.5*(t3428 + t3561 + 1.142857*t1524*t6794 + 1.142857*t1563*t6815)*var2[1] + 0.5*(1.142857*t4114*t6794 + 1.142857*t3803*t6815 + 1.142857*t1149*(t4172 + t4175 + t4179 + t4182 - 1.*t1009*t6896 - 1.*t1470*t6896 - 1.*t1056*t6918 - 1.*t1056*t6937) + 1.142857*(t3844 + t3861 + t3967 + t3970 + t1265*t6896 + t1537*t6896 + t1204*t6918 + t1204*t6937)*t734)*var2[2])*var2[3];
  p_output1[27]=var2[3]*(0.5*(t5611 + t5653 + t6383 + t6423 + 1.142857*t5535*t7000 + 1.142857*t5489*t7020 + t7062 + t7071)*var2[0] + 0.5*(t5823 + t5824 + t6434 + t6446 + 1.142857*t2314*t7000 + 1.142857*t2266*t7020 + t7085 + t7101)*var2[1] + 0.5*(1.142857*t5902*t6794 + 1.142857*t6039*t6815 + 1.142857*t5873*t7000 + 1.142857*t5921*t7020 + 1.142857*t1956*t7132 + 1.142857*t2132*t7153 + 1.142857*t1149*(t5983 + t5984 + t6603 + t6608 + t7190 + t7210 + t7211 + t7218) + 1.142857*(t6070 + t6075 + t6516 + t6523 + t7161 + t7170 + t7178 + t7182)*t734)*var2[2] + 0.5*(2.285714*t1956*t6794 + 2.285714*t2132*t6815 + 2.285714*t1149*t7000 + 2.285714*t7020*t734)*var2[3] + 0.5*(1.142857*t2132*t5214 + 1.142857*t5377*t7000 + 1.142857*t1956*t7002 + 1.142857*t5214*t7020)*var2[4] - 0.03428571*t7000*var2[5]);
  p_output1[28]=var2[3]*(0.5*(t5611 + t5653 + t6395 + t6424 + t7062 + t7071 + 1.142857*t5535*t7238 + 1.142857*t5489*t7266)*var2[0] + 0.5*(t5823 + t5824 + t6435 + t6447 + t7085 + t7101 + 1.142857*t2314*t7238 + 1.142857*t2266*t7266)*var2[1] + 0.5*(1.142857*t6493*t6794 + 1.142857*t6511*t6815 + 1.142857*t2530*t7132 + 1.142857*t2564*t7153 + 1.142857*t1149*(t5983 + t5984 + t6605 + t6609 + t7190 + t7210 + t7211 + t7218) + 1.142857*t5873*t7238 + 1.142857*t5921*t7266 + 1.142857*(t6070 + t6075 + t6525 + t6586 + t7161 + t7170 + t7178 + t7182)*t734)*var2[2] + 0.5*(2.285714*t2530*t6794 + 2.285714*t2564*t6815 + 2.285714*t1149*t7238 + 2.285714*t7266*t734)*var2[3] + 0.5*(1.142857*t2564*t5214 + 1.142857*t1149*t6213 + 1.142857*t6213*t6794 + 1.142857*t6223*t6815 + 1.142857*t2530*t7002 + 1.142857*t5377*t7238 + 1.142857*t5214*t7266 + 1.142857*t734*(-1.*t2401*t391 - 0.9063*t74 - 0.12*t391*t74 - 1.*t428*t74))*var2[4] - 0.03428571*t7238*var2[5]);
  p_output1[29]=0.5*t7374*var2[3];
  p_output1[30]=0.5*t6851*var2[3];
  p_output1[31]=0.5*t7383*var2[3];
  p_output1[32]=0.5*t7374*var2[0] + 0.5*t6851*var2[1] + 0.5*t7383*var2[2] + (2.285714*t1149*t6815 + 2.285714*t6794*t734)*var2[3] + 0.5*t7403*var2[4] - 0.03428571*t6815*var2[5];
  p_output1[33]=0.5*t7403*var2[3];
  p_output1[34]=-0.03428571*t6815*var2[3];
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

#include "J_Ce3_vec_L4_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L4_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

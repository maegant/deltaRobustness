/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:42 GMT-08:00
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
  double t5;
  double t164;
  double t411;
  double t306;
  double t514;
  double t398;
  double t483;
  double t493;
  double t264;
  double t542;
  double t557;
  double t590;
  double t39;
  double t56;
  double t64;
  double t97;
  double t177;
  double t204;
  double t648;
  double t599;
  double t252;
  double t977;
  double t990;
  double t993;
  double t28;
  double t208;
  double t211;
  double t212;
  double t505;
  double t602;
  double t655;
  double t689;
  double t704;
  double t753;
  double t757;
  double t872;
  double t876;
  double t951;
  double t1048;
  double t1083;
  double t1112;
  double t1119;
  double t1149;
  double t706;
  double t1098;
  double t1406;
  double t1407;
  double t1433;
  double t1284;
  double t1321;
  double t1485;
  double t1524;
  double t615;
  double t734;
  double t1716;
  double t1736;
  double t1740;
  double t1772;
  double t1774;
  double t1810;
  double t1834;
  double t1699;
  double t2171;
  double t2172;
  double t1150;
  double t1171;
  double t1783;
  double t1851;
  double t1866;
  double t1868;
  double t1897;
  double t1940;
  double t1956;
  double t1959;
  double t2185;
  double t2190;
  double t2191;
  double t2200;
  double t2213;
  double t2227;
  double t2253;
  double t2266;
  double t2274;
  double t2280;
  double t2048;
  double t2094;
  double t2121;
  double t2132;
  double t2314;
  double t2336;
  double t2338;
  double t750;
  double t1215;
  double t1219;
  double t2388;
  double t2398;
  double t2405;
  double t1435;
  double t1442;
  double t1474;
  double t1527;
  double t1546;
  double t1563;
  double t1565;
  double t1572;
  double t1579;
  double t1610;
  double t1617;
  double t1630;
  double t1637;
  double t1642;
  double t1661;
  double t1676;
  double t1678;
  double t1686;
  double t2469;
  double t2479;
  double t2523;
  double t2530;
  double t2650;
  double t2669;
  double t2674;
  double t2684;
  double t2704;
  double t2714;
  double t2734;
  double t2740;
  double t2755;
  double t2758;
  double t2647;
  double t2722;
  double t2762;
  double t2792;
  double t2874;
  double t2878;
  double t2924;
  double t2926;
  double t2930;
  double t2934;
  double t2868;
  double t2883;
  double t2893;
  double t2907;
  double t2911;
  double t2913;
  double t2794;
  double t2800;
  double t2803;
  double t2817;
  double t3160;
  double t3165;
  double t3373;
  double t3384;
  double t3391;
  double t3395;
  double t3398;
  double t3417;
  double t3533;
  double t3534;
  double t3561;
  double t3390;
  double t3419;
  double t3427;
  double t3458;
  double t3468;
  double t3492;
  double t3149;
  double t3171;
  double t3186;
  double t3227;
  double t3284;
  double t3303;
  double t3314;
  double t3320;
  double t3328;
  double t3347;
  double t3355;
  double t3361;
  double t3496;
  double t3503;
  double t4068;
  double t4114;
  double t4122;
  double t4169;
  double t4233;
  double t4237;
  double t4277;
  double t4286;
  double t4292;
  double t4317;
  double t4335;
  double t4336;
  double t4350;
  double t4358;
  double t4363;
  double t3679;
  double t3683;
  double t3685;
  double t3709;
  double t3912;
  double t3939;
  double t3980;
  double t3996;
  double t4006;
  double t4015;
  double t4024;
  double t4035;
  double t4038;
  double t4042;
  double t4049;
  double t4050;
  double t4491;
  double t4496;
  double t4507;
  double t4534;
  double t4538;
  double t4543;
  double t1877;
  double t1883;
  double t2140;
  double t2143;
  double t2158;
  double t2159;
  double t3234;
  double t3258;
  double t3349;
  double t3351;
  double t3428;
  double t3495;
  double t3579;
  double t3610;
  double t3612;
  double t3625;
  double t3626;
  double t3642;
  double t3655;
  double t3665;
  double t3713;
  double t3733;
  double t3743;
  double t3768;
  double t3803;
  double t3835;
  double t4627;
  double t4699;
  double t4745;
  double t4757;
  double t5111;
  double t5170;
  double t5343;
  double t5359;
  double t5314;
  double t5324;
  double t4928;
  double t4606;
  double t4847;
  double t4857;
  double t5641;
  double t5653;
  double t5656;
  double t4937;
  double t4985;
  double t5113;
  double t5172;
  double t5190;
  double t5201;
  double t5202;
  double t5214;
  double t5216;
  double t5224;
  double t5232;
  double t5237;
  double t5240;
  double t5248;
  double t5275;
  double t5448;
  double t5458;
  double t6048;
  double t6052;
  double t6056;
  double t6057;
  double t5391;
  double t5393;
  double t5827;
  double t5845;
  double t5850;
  double t5908;
  double t5909;
  double t5921;
  double t5924;
  double t5925;
  double t5939;
  double t5943;
  double t5962;
  double t5978;
  double t5979;
  double t5497;
  double t5521;
  double t5524;
  double t5528;
  double t5535;
  double t5587;
  double t5594;
  double t5595;
  double t5601;
  double t5605;
  double t5607;
  double t6216;
  double t6218;
  double t6223;
  double t6167;
  double t6175;
  double t6181;
  double t6203;
  double t6210;
  double t6213;
  double t6269;
  double t6424;
  double t6429;
  double t6433;
  double t6434;
  double t6435;
  double t6446;
  double t6447;
  double t6451;
  double t6453;
  double t6458;
  double t6462;
  double t5626;
  double t5628;
  double t5716;
  double t6587;
  double t5780;
  double t6009;
  double t6028;
  double t6727;
  double t6730;
  double t6733;
  double t6735;
  double t6096;
  double t6105;
  double t6826;
  double t6827;
  double t6832;
  double t6852;
  double t6853;
  double t5635;
  double t6586;
  double t6591;
  double t5675;
  double t6599;
  double t6601;
  double t5718;
  double t6617;
  double t6625;
  double t6628;
  double t5803;
  double t6636;
  double t6663;
  double t5873;
  double t6665;
  double t5880;
  double t5899;
  double t6673;
  double t5900;
  double t6039;
  double t6078;
  double t6726;
  double t6732;
  double t6746;
  double t6747;
  double t6761;
  double t6762;
  double t6102;
  double t6770;
  double t6107;
  double t6777;
  double t7017;
  double t7019;
  double t7020;
  double t6292;
  double t6300;
  double t6302;
  double t7045;
  double t7047;
  double t7053;
  double t7067;
  double t7068;
  double t7071;
  double t7100;
  double t7101;
  double t7108;
  double t7121;
  double t7132;
  double t7147;
  double t6880;
  double t6881;
  double t6884;
  double t6888;
  double t6895;
  double t6898;
  double t6902;
  double t6945;
  double t6946;
  double t6952;
  double t6973;
  double t6975;
  double t6976;
  double t7238;
  double t7239;
  double t7242;
  double t7245;
  double t7249;
  double t7182;
  double t7184;
  double t7186;
  double t7223;
  double t7224;
  double t7226;
  double t7227;
  double t7233;
  t5 = Cos(var1[5]);
  t164 = Sin(var1[5]);
  t411 = Cos(var1[4]);
  t306 = Sin(var1[4]);
  t514 = Cos(var1[3]);
  t398 = -1.*t5*t306;
  t483 = -1.*t411*t164;
  t493 = t398 + t483;
  t264 = Sin(var1[3]);
  t542 = t411*t5;
  t557 = -1.*t306*t164;
  t590 = t542 + t557;
  t39 = -1.*t5;
  t56 = 1. + t39;
  t64 = -1.3127*t56;
  t97 = -1.3127*t5;
  t177 = -0.06*t164;
  t204 = t64 + t97 + t177;
  t648 = Sin(var1[2]);
  t599 = t514*t590;
  t252 = Cos(var1[2]);
  t977 = t5*t306;
  t990 = t411*t164;
  t993 = t977 + t990;
  t28 = 0.9063*t5;
  t208 = t5*t204;
  t211 = 0.06*t5*t164;
  t212 = t28 + t208 + t211;
  t505 = t264*t493;
  t602 = t505 + t599;
  t655 = t514*t493;
  t689 = -1.*t264*t590;
  t704 = t655 + t689;
  t753 = Power(t5,2);
  t757 = -0.06*t753;
  t872 = 0.9063*t164;
  t876 = t204*t164;
  t951 = t757 + t872 + t876;
  t1048 = -1.*t264*t993;
  t1083 = t1048 + t599;
  t1112 = t514*t993;
  t1119 = t264*t590;
  t1149 = t1112 + t1119;
  t706 = -1.*t648*t704;
  t1098 = -1.*t648*t1083;
  t1406 = -1.*t264*t493;
  t1407 = -1.*t514*t590;
  t1433 = t1406 + t1407;
  t1284 = -1.*t252*t704;
  t1321 = -1.*t252*t1083;
  t1485 = -1.*t514*t993;
  t1524 = t1485 + t689;
  t615 = -1.*t252*t602;
  t734 = t615 + t706;
  t1716 = -1.*t411*t5;
  t1736 = t306*t164;
  t1740 = t1716 + t1736;
  t1772 = t514*t1740;
  t1774 = t1406 + t1772;
  t1810 = t264*t1740;
  t1834 = t655 + t1810;
  t1699 = 1.142857*t951*t734;
  t2171 = -0.06*t5;
  t2172 = 0. + t2171;
  t1150 = -1.*t252*t1149;
  t1171 = t1098 + t1150;
  t1783 = -1.*t648*t1774;
  t1851 = -1.*t252*t1834;
  t1866 = t1783 + t1851;
  t1868 = 1.142857*t212*t1866;
  t1897 = -1.*t648*t602;
  t1940 = t252*t704;
  t1956 = t1897 + t1940;
  t1959 = 1.142857*t951*t1956;
  t2185 = t2172*t5;
  t2190 = 0.06*t753;
  t2191 = -0.9063*t164;
  t2200 = -1.*t204*t164;
  t2213 = Power(t164,2);
  t2227 = -0.06*t2213;
  t2253 = t2185 + t2190 + t2191 + t2200 + t2227;
  t2266 = t2172*t164;
  t2274 = 0.12*t5*t164;
  t2280 = t28 + t208 + t2266 + t2274;
  t2048 = t252*t1774;
  t2094 = -1.*t648*t1834;
  t2121 = t2048 + t2094;
  t2132 = 1.142857*t212*t2121;
  t2314 = t252*t1083;
  t2336 = -1.*t648*t1149;
  t2338 = t2314 + t2336;
  t750 = 1.142857*t212*t734;
  t1215 = 1.142857*t951*t1171;
  t1219 = t750 + t1215;
  t2388 = 1.142857*t212*t1956;
  t2398 = 1.142857*t951*t2338;
  t2405 = t2388 + t2398;
  t1435 = t252*t1433;
  t1442 = t1435 + t706;
  t1474 = 1.142857*t212*t1442;
  t1527 = t252*t1524;
  t1546 = t1098 + t1527;
  t1563 = 1.142857*t951*t1546;
  t1565 = t1474 + t1563;
  t1572 = 0.5*var2[0]*t1565;
  t1579 = -1.*t648*t1433;
  t1610 = t1579 + t1284;
  t1617 = 1.142857*t212*t1610;
  t1630 = -1.*t648*t1524;
  t1637 = t1321 + t1630;
  t1642 = 1.142857*t951*t1637;
  t1661 = t1617 + t1642;
  t1676 = 0.5*var2[1]*t1661;
  t1678 = t1572 + t1676;
  t1686 = var2[4]*t1678;
  t2469 = t264*t993;
  t2479 = t2469 + t1407;
  t2523 = -1.*t514*t493;
  t2530 = t2523 + t1119;
  t2650 = -1.*t411;
  t2669 = 1. + t2650;
  t2674 = -0.9063*t2669;
  t2684 = -0.06*t5*t306;
  t2704 = t411*t204;
  t2714 = t2674 + t2684 + t2704;
  t2734 = 0.06*t411*t5;
  t2740 = 0.9063*t306;
  t2755 = t306*t204;
  t2758 = t2734 + t2740 + t2755;
  t2647 = -0.4999*t264;
  t2722 = -1.*t264*t2714;
  t2762 = -1.*t514*t2758;
  t2792 = t2647 + t2722 + t2762;
  t2874 = t514*t2714;
  t2878 = -1.*t264*t2758;
  t2924 = -1.*t514;
  t2926 = 1. + t2924;
  t2930 = -0.4999*t2926;
  t2934 = t2930 + t2874 + t2878;
  t2868 = 0.4999*t514;
  t2883 = t2868 + t2874 + t2878;
  t2893 = -0.4999*t514;
  t2907 = -1.*t514*t2714;
  t2911 = t264*t2758;
  t2913 = t2893 + t2907 + t2911;
  t2794 = 0.4999*t264;
  t2800 = t264*t2714;
  t2803 = t514*t2758;
  t2817 = t2794 + t2800 + t2803;
  t3160 = -1.*t264*t1740;
  t3165 = t2523 + t3160;
  t3373 = 0.9063*t411;
  t3384 = t3373 + t2684 + t2704;
  t3391 = -0.06*t411*t5;
  t3395 = -0.9063*t306;
  t3398 = -1.*t306*t204;
  t3417 = t3391 + t3395 + t3398;
  t3533 = -1.*t264*t3384;
  t3534 = t514*t3417;
  t3561 = t3533 + t3534;
  t3390 = -1.*t514*t3384;
  t3419 = -1.*t264*t3417;
  t3427 = t3390 + t3419;
  t3458 = t514*t3384;
  t3468 = t264*t3417;
  t3492 = t3458 + t3468;
  t3149 = 1.142857*t951*t1442;
  t3171 = t252*t3165;
  t3186 = t1783 + t3171;
  t3227 = 1.142857*t212*t3186;
  t3284 = t648*t1433;
  t3303 = t3284 + t1940;
  t3314 = 1.142857*t951*t3303;
  t3320 = t648*t3165;
  t3328 = t2048 + t3320;
  t3347 = 1.142857*t212*t3328;
  t3355 = t2934*t1433;
  t3361 = t2883*t602;
  t3496 = t2792*t704;
  t3503 = t2817*t704;
  t4068 = t2172*t306;
  t4114 = -0.06*t411*t164;
  t4122 = t4068 + t4114;
  t4169 = -1.*t264*t4122;
  t4233 = t411*t2172;
  t4237 = 0.06*t306*t164;
  t4277 = t4233 + t4237;
  t4286 = t514*t4277;
  t4292 = t4169 + t4286;
  t4317 = -1.*t514*t4122;
  t4335 = -1.*t264*t4277;
  t4336 = t4317 + t4335;
  t4350 = t514*t4122;
  t4358 = t264*t4277;
  t4363 = t4350 + t4358;
  t3679 = -1.*t2792*t1774;
  t3683 = -1.*t2817*t1774;
  t3685 = -1.*t2934*t3165;
  t3709 = -1.*t2883*t1834;
  t3912 = t648*t1524;
  t3939 = t2314 + t3912;
  t3980 = -1.*t2934*t1433;
  t3996 = -1.*t2883*t602;
  t4006 = -1.*t2792*t704;
  t4015 = -1.*t2817*t704;
  t4024 = t3980 + t3996 + t4006 + t4015;
  t4035 = t2792*t1083;
  t4038 = t2817*t1083;
  t4042 = t2934*t1524;
  t4049 = t2883*t1149;
  t4050 = t4035 + t4038 + t4042 + t4049;
  t4491 = 1.142857*t212*t3303;
  t4496 = 1.142857*t951*t3939;
  t4507 = t4491 + t4496;
  t4534 = 1.142857*t951*t4024;
  t4538 = 1.142857*t212*t4050;
  t4543 = t4534 + t4538;
  t1877 = t1699 + t1868;
  t1883 = 0.5*var2[1]*t1877;
  t2140 = t1959 + t2132;
  t2143 = 0.5*var2[0]*t2140;
  t2158 = t1883 + t2143;
  t2159 = var2[4]*t2158;
  t3234 = t3149 + t3227;
  t3258 = 0.5*var2[1]*t3234;
  t3349 = t3314 + t3347;
  t3351 = 0.5*var2[0]*t3349;
  t3428 = t3427*t1083;
  t3495 = t3492*t1083;
  t3579 = t3561*t1524;
  t3610 = t3561*t1149;
  t3612 = t3355 + t3361 + t3428 + t3495 + t3496 + t3503 + t3579 + t3610;
  t3625 = 1.142857*t212*t3612;
  t3626 = -1.*t3561*t1433;
  t3642 = -1.*t3561*t602;
  t3655 = -1.*t3427*t704;
  t3665 = -1.*t3492*t704;
  t3713 = t3626 + t3642 + t3655 + t3665 + t3679 + t3683 + t3685 + t3709;
  t3733 = 1.142857*t951*t3713;
  t3743 = t3625 + t3733;
  t3768 = 0.5*var2[2]*t3743;
  t3803 = t3258 + t3351 + t3768;
  t3835 = var2[4]*t3803;
  t4627 = -0.9063*t411;
  t4699 = 0.06*t5*t306;
  t4745 = -1.*t411*t204;
  t4757 = t4627 + t4699 + t4745;
  t5111 = t2469 + t1772;
  t5170 = t1112 + t3160;
  t5343 = t514*t4757;
  t5359 = t5343 + t3419;
  t5314 = t264*t4757;
  t5324 = t5314 + t3534;
  t4928 = 0.4999*t493;
  t4606 = t2758*t493;
  t4847 = 0.4999*t1740;
  t4857 = t2714*t1740;
  t5641 = -1.*t2172*t306;
  t5653 = 0.06*t411*t164;
  t5656 = t5641 + t5653;
  t4937 = -1.*t2714*t993;
  t4985 = -1.*t2758*t1740;
  t5113 = t252*t5111;
  t5172 = t648*t5170;
  t5190 = t5113 + t5172;
  t5201 = 1.142857*t212*t5190;
  t5202 = t648*t1774;
  t5214 = t252*t1834;
  t5216 = t5202 + t5214;
  t5224 = 1.142857*t951*t5216;
  t5232 = -1.*t648*t5111;
  t5237 = t252*t5170;
  t5240 = t5232 + t5237;
  t5248 = 1.142857*t212*t5240;
  t5275 = 1.142857*t951*t2121;
  t5448 = t2934*t1774;
  t5458 = t2817*t1834;
  t6048 = t264*t5656;
  t6052 = t6048 + t4286;
  t6056 = t514*t5656;
  t6057 = t6056 + t4335;
  t5391 = -1.*t2817*t5111;
  t5393 = -1.*t2934*t5170;
  t5827 = t252*t602;
  t5845 = t648*t704;
  t5850 = t5827 + t5845;
  t5908 = t2817*t602;
  t5909 = t3561*t1083;
  t5921 = t2934*t704;
  t5924 = t3492*t1149;
  t5925 = t5908 + t5909 + t5921 + t5924;
  t5939 = -1.*t3492*t602;
  t5943 = -1.*t3561*t704;
  t5962 = -1.*t2934*t1774;
  t5978 = -1.*t2817*t1834;
  t5979 = t5939 + t5943 + t5962 + t5978;
  t5497 = t2714*t493;
  t5521 = t3384*t993;
  t5524 = t3417*t590;
  t5528 = t2758*t590;
  t5535 = t4928 + t5497 + t5521 + t5524 + t5528;
  t5587 = -1.*t3417*t493;
  t5594 = -1.*t2758*t493;
  t5595 = 0.4999*t590;
  t5601 = -1.*t3384*t590;
  t5605 = -1.*t2714*t1740;
  t5607 = t5587 + t5594 + t5595 + t5601 + t5605;
  t6216 = 1.142857*t212*t5535;
  t6218 = 1.142857*t951*t5607;
  t6223 = t6216 + t6218;
  t6167 = 1.142857*t951*t5850;
  t6175 = 1.142857*t212*t5216;
  t6181 = t6167 + t6175;
  t6203 = 1.142857*t212*t5925;
  t6210 = 1.142857*t951*t5979;
  t6213 = t6203 + t6210;
  t6269 = 0. + t2191 + t2200 + t2227;
  t6424 = t2684 + t4114;
  t6429 = -1.*t264*t6424;
  t6433 = t3391 + t4237;
  t6434 = t514*t6433;
  t6435 = t6429 + t6434;
  t6446 = -1.*t514*t6424;
  t6447 = -1.*t264*t6433;
  t6451 = t6446 + t6447;
  t6453 = t514*t6424;
  t6458 = t264*t6433;
  t6462 = t6453 + t6458;
  t5626 = t3417*t493;
  t5628 = t3384*t590;
  t5716 = -1.*t3384*t493;
  t6587 = t4699 + t5653;
  t5780 = -1.*t3417*t1740;
  t6009 = t3492*t602;
  t6028 = t3561*t704;
  t6727 = t264*t6587;
  t6730 = t6727 + t6434;
  t6733 = t514*t6587;
  t6735 = t6733 + t6447;
  t6096 = -1.*t3561*t1774;
  t6105 = -1.*t3492*t1834;
  t6826 = -0.9063*t5;
  t6827 = -1.*t5*t204;
  t6832 = -1.*t2172*t164;
  t6852 = -0.12*t5*t164;
  t6853 = t6826 + t6827 + t6832 + t6852;
  t5635 = t4122*t590;
  t6586 = t6424*t590;
  t6591 = t6587*t590;
  t5675 = t493*t4277;
  t6599 = t493*t6433;
  t6601 = t993*t6433;
  t5718 = -1.*t493*t4122;
  t6617 = -1.*t493*t6424;
  t6625 = -1.*t493*t6587;
  t6628 = -1.*t590*t6433;
  t5803 = -1.*t4277*t1740;
  t6636 = -1.*t6433*t1740;
  t6663 = 1.142857*t212*t5850;
  t5873 = 1.142857*t2280*t5850;
  t6665 = 1.142857*t6269*t5216;
  t5880 = 1.142857*t2253*t5216;
  t5899 = 1.142857*t2280*t1956;
  t6673 = 1.142857*t6269*t2121;
  t5900 = 1.142857*t2253*t2121;
  t6039 = t704*t4292;
  t6078 = t602*t4363;
  t6726 = t704*t6435;
  t6732 = t1149*t6730;
  t6746 = t1083*t6735;
  t6747 = t602*t6462;
  t6761 = -1.*t602*t6730;
  t6762 = -1.*t704*t6735;
  t6102 = -1.*t4292*t1774;
  t6770 = -1.*t6435*t1774;
  t6107 = -1.*t4363*t1834;
  t6777 = -1.*t6462*t1834;
  t7017 = t648*t1083;
  t7019 = t252*t1149;
  t7020 = t7017 + t7019;
  t6292 = 1.142857*t6269*t1956;
  t6300 = 1.142857*t212*t2338;
  t6302 = t1959 + t6292 + t6300 + t2132;
  t7045 = -1.*t2817*t602;
  t7047 = -1.*t2934*t704;
  t7053 = t7045 + t7047;
  t7067 = t2934*t1083;
  t7068 = t2817*t1149;
  t7071 = t7067 + t7068;
  t7100 = t1083*t6435;
  t7101 = t1149*t6462;
  t7108 = t5908 + t5921 + t7100 + t7101;
  t7121 = -1.*t704*t6435;
  t7132 = -1.*t602*t6462;
  t7147 = t7121 + t7132 + t5962 + t5978;
  t6880 = t2758*t993;
  t6881 = t2714*t590;
  t6884 = t6880 + t5595 + t6881;
  t6888 = -1.*t2714*t493;
  t6895 = 0.4999*t993;
  t6898 = -1.*t2758*t590;
  t6902 = t6888 + t6895 + t6898;
  t6945 = t6424*t993;
  t6946 = t590*t6433;
  t6952 = t4928 + t5497 + t6945 + t5528 + t6946;
  t6973 = -1.*t6424*t590;
  t6975 = -1.*t493*t6433;
  t6976 = t5594 + t5595 + t6973 + t6975 + t5605;
  t7238 = 1.142857*t6269*t6884;
  t7239 = 1.142857*t212*t6902;
  t7242 = 1.142857*t212*t6952;
  t7245 = 1.142857*t951*t6976;
  t7249 = t7238 + t7239 + t7242 + t7245;
  t7182 = 1.142857*t6269*t5850;
  t7184 = 1.142857*t212*t7020;
  t7186 = t6167 + t7182 + t7184 + t6175;
  t7223 = 1.142857*t212*t7053;
  t7224 = 1.142857*t6269*t7071;
  t7226 = 1.142857*t212*t7108;
  t7227 = 1.142857*t951*t7147;
  t7233 = t7223 + t7224 + t7226 + t7227;
  p_output1[0]=(0.5*t1219*var2[0] + 0.5*(1.142857*t212*(t1284 + t602*t648) + 1.142857*(t1321 + t1149*t648)*t951)*var2[1])*var2[4];
  p_output1[1]=t1686;
  p_output1[2]=t2159;
  p_output1[3]=(0.5*(t1959 + t2132 + 1.142857*t1956*t2253 + 1.142857*t2280*t2338)*var2[0] + 0.5*(t1699 + t1868 + 1.142857*t1171*t2280 + 1.142857*t2253*t734)*var2[1])*var2[4];
  p_output1[4]=0.5*t2405*var2[4];
  p_output1[5]=0.5*t1219*var2[4];
  p_output1[6]=0.5*t2405*var2[0] + 0.5*t1219*var2[1];
  p_output1[7]=t1686;
  p_output1[8]=(0.5*(1.142857*t212*(t1435 + t2530*t648) + 1.142857*(t1527 + t2479*t648)*t951)*var2[0] + 0.5*(1.142857*t212*(t1579 + t252*t2530) + 1.142857*(t1630 + t2479*t252)*t951)*var2[1] + 0.5*(1.142857*t212*(t1149*t2792 + 2.*t1524*t2792 + t1524*t2817 + 2.*t1083*t2883 + t1083*t2913 + t2479*t2934) + 1.142857*(-2.*t1433*t2792 - 1.*t1433*t2817 - 1.*t2530*t2934 - 1.*t2792*t602 - 2.*t2883*t704 - 1.*t2913*t704)*t951)*var2[2])*var2[4];
  p_output1[9]=t3835;
  p_output1[10]=(0.5*(1.142857*t2253*t3303 + t3314 + t3347 + 1.142857*t2280*t3939)*var2[0] + 0.5*(1.142857*t1442*t2253 + 1.142857*t1546*t2280 + t3149 + t3227)*var2[1] + 0.5*(1.142857*t2280*t4024 + 1.142857*t2253*t4050 + 1.142857*t212*(t3355 + t3361 + t3496 + t3503 + t1149*t4292 + t1524*t4292 + t1083*t4336 + t1083*t4363) + 1.142857*(t3679 + t3683 + t3685 + t3709 - 1.*t1433*t4292 - 1.*t4292*t602 - 1.*t4336*t704 - 1.*t4363*t704)*t951)*var2[2])*var2[4];
  p_output1[11]=0.5*t4507*var2[4];
  p_output1[12]=0.5*t1565*var2[4];
  p_output1[13]=0.5*t4543*var2[4];
  p_output1[14]=0.5*t4507*var2[0] + 0.5*t1565*var2[1] + 0.5*t4543*var2[2];
  p_output1[15]=t2159;
  p_output1[16]=t3835;
  p_output1[17]=(0.5*(t5201 + t5224)*var2[0] + 0.5*(t5248 + t5275)*var2[1] + 0.5*(1.142857*t212*(t1149*t5324 + t1083*t5359 + t5448 + t5458 + 2.*t3492*t602 + 2.*t3561*t704) + 1.142857*(-2.*t1834*t3492 - 2.*t1774*t3561 + t5391 + t5393 - 1.*t5324*t602 - 1.*t5359*t704)*t951)*var2[2] + 0.5*(1.142857*(-2.*t1740*t3417 + t4928 - 2.*t3384*t493 - 1.*t4757*t493 + t4937 + t4985 - 1.*t3417*t590)*t951 + 1.142857*t212*(t4606 + t4847 + t4857 + 2.*t3417*t493 + 2.*t3384*t590 + t4757*t590 + t3417*t993))*var2[3])*var2[4];
  p_output1[18]=(0.5*(t5201 + t5224 + t5873 + t5880)*var2[0] + 0.5*(t5248 + t5275 + t5899 + t5900)*var2[1] + 0.5*(1.142857*t2253*t5925 + 1.142857*t2280*t5979 + 1.142857*t212*(t5448 + t5458 + t6009 + t6028 + t6039 + t1149*t6052 + t1083*t6057 + t6078) + 1.142857*(t5391 + t5393 - 1.*t602*t6052 + t6096 + t6102 + t6105 + t6107 - 1.*t6057*t704)*t951)*var2[2] + 0.5*(1.142857*t2253*t5535 + 1.142857*t2280*t5607 + 1.142857*(t4928 + t4937 + t4985 - 1.*t493*t5656 + t5716 + t5718 + t5780 + t5803 - 1.*t4277*t590)*t951 + 1.142857*t212*(t4606 + t4847 + t4857 + t5626 + t5628 + t5635 + t5675 + t5656*t590 + t4277*t993))*var2[3])*var2[4];
  p_output1[19]=0.5*t6181*var2[4];
  p_output1[20]=0.5*t2140*var2[4];
  p_output1[21]=0.5*t6213*var2[4];
  p_output1[22]=0.5*t6223*var2[4];
  p_output1[23]=0.5*t6181*var2[0] + 0.5*t2140*var2[1] + 0.5*t6213*var2[2] + 0.5*t6223*var2[3];
  p_output1[24]=(0.5*t6302*var2[0] + 0.5*(t1699 + t1868 + 1.142857*t1171*t212 + 1.142857*t6269*t734)*var2[1])*var2[4];
  p_output1[25]=(0.5*(t3314 + t3347 + 1.142857*t212*t3939 + 1.142857*t3303*t6269)*var2[0] + 0.5*(1.142857*t1546*t212 + t3149 + t3227 + 1.142857*t1442*t6269)*var2[1] + 0.5*(1.142857*t212*t4024 + 1.142857*t4050*t6269 + 1.142857*t212*(t3355 + t3361 + t3496 + t3503 + t1149*t6435 + t1524*t6435 + t1083*t6451 + t1083*t6462) + 1.142857*(t3679 + t3683 + t3685 + t3709 - 1.*t1433*t6435 - 1.*t602*t6435 - 1.*t6451*t704 - 1.*t6462*t704)*t951)*var2[2])*var2[4];
  p_output1[26]=(0.5*(t5201 + t5224 + t6663 + t6665)*var2[0] + 0.5*(t2388 + t5248 + t5275 + t6673)*var2[1] + 0.5*(1.142857*t212*t5979 + 1.142857*t5925*t6269 + 1.142857*t212*(t5448 + t5458 + t6009 + t6028 + t6726 + t6732 + t6746 + t6747) + 1.142857*(t5391 + t5393 + t6096 + t6105 + t6761 + t6762 + t6770 + t6777)*t951)*var2[2] + 0.5*(1.142857*t212*t5607 + 1.142857*t5535*t6269 + 1.142857*t212*(t4606 + t4847 + t4857 + t5626 + t5628 + t6586 + t6591 + t6599 + t6601) + 1.142857*(t4928 + t4937 + t4985 + t5716 + t5780 + t6617 + t6625 + t6628 + t6636)*t951)*var2[3])*var2[4];
  p_output1[27]=var2[4]*(0.5*(t5201 + t5224 + t5873 + t5880 + t6663 + t6665 + 1.142857*t5850*t6853 + 1.142857*t2253*t7020)*var2[0] + 0.5*(1.142857*t2253*t2338 + t2388 + t5248 + t5275 + t5899 + t5900 + t6673 + 1.142857*t1956*t6853)*var2[1] + 0.5*(1.142857*(t1083*t4292 + t1149*t4363 + t5908 + t5921)*t6269 + 1.142857*t212*(t5448 + t5458 + t6039 + t6078 + t6726 + t6732 + t6746 + t6747) + 1.142857*t212*(t5962 + t5978 - 1.*t4363*t602 - 1.*t4292*t704) + 1.142857*t2253*t7053 + 1.142857*t6853*t7071 + 1.142857*t2253*t7108 + 1.142857*t2280*t7147 + 1.142857*(t5391 + t5393 + t6102 + t6107 + t6761 + t6762 + t6770 + t6777)*t951)*var2[2] + 0.5*(1.142857*t212*(-1.*t4277*t493 + t5594 + t5595 + t5605 - 1.*t4122*t590) + 1.142857*t212*(t4606 + t4847 + t4857 + t5635 + t5675 + t6586 + t6591 + t6599 + t6601) + 1.142857*t6853*t6884 + 1.142857*t2253*t6902 + 1.142857*t2253*t6952 + 1.142857*t2280*t6976 + 1.142857*(t4928 + t4937 + t4985 + t5718 + t5803 + t6617 + t6625 + t6628 + t6636)*t951 + 1.142857*t6269*(t4928 + t5497 + t5528 + t4277*t590 + t4122*t993))*var2[3] + 0.5*(2.285714*t212*t2280 + 2.285714*t2253*t6269 + 2.285714*t212*t6853 + 2.285714*t2253*t951)*var2[4] - 0.03428571*t2253*var2[5]);
  p_output1[28]=0.5*t7186*var2[4];
  p_output1[29]=0.5*t6302*var2[4];
  p_output1[30]=0.5*t7233*var2[4];
  p_output1[31]=0.5*t7249*var2[4];
  p_output1[32]=0.5*t7186*var2[0] + 0.5*t6302*var2[1] + 0.5*t7233*var2[2] + 0.5*t7249*var2[3] + (2.285714*t212*t6269 + 2.285714*t212*t951)*var2[4] - 0.03428571*t212*var2[5];
  p_output1[33]=-0.03428571*t212*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 34, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L4_J5_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L4_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:42 GMT-08:00
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
  double t273;
  double t24;
  double t221;
  double t290;
  double t351;
  double t247;
  double t327;
  double t337;
  double t23;
  double t403;
  double t439;
  double t441;
  double t527;
  double t21;
  double t1420;
  double t1470;
  double t1507;
  double t800;
  double t1075;
  double t1130;
  double t1154;
  double t1170;
  double t1193;
  double t1202;
  double t340;
  double t449;
  double t451;
  double t460;
  double t528;
  double t860;
  double t866;
  double t900;
  double t1528;
  double t1601;
  double t1607;
  double t1611;
  double t1621;
  double t1660;
  double t1664;
  double t1670;
  double t1947;
  double t1971;
  double t1974;
  double t1981;
  double t1999;
  double t2054;
  double t1921;
  double t1922;
  double t1930;
  double t1933;
  double t2301;
  double t2238;
  double t2243;
  double t2664;
  double t2693;
  double t2695;
  double t2635;
  double t2429;
  double t2454;
  double t2279;
  double t2372;
  double t2575;
  double t2580;
  double t2590;
  double t2799;
  double t2809;
  double t2834;
  double t2655;
  double t2656;
  double t2847;
  double t2861;
  double t3130;
  double t3140;
  double t3157;
  double t3174;
  double t3229;
  double t3259;
  double t3016;
  double t3064;
  double t3080;
  double t3120;
  double t3380;
  double t3384;
  double t3388;
  double t3397;
  double t3344;
  double t3367;
  double t1748;
  double t1769;
  double t1778;
  double t1800;
  double t1848;
  double t3623;
  double t3631;
  double t3633;
  double t3649;
  double t921;
  double t1271;
  double t1386;
  double t1392;
  double t2126;
  double t2136;
  double t2137;
  double t2210;
  double t1942;
  double t1946;
  double t2056;
  double t2065;
  double t3690;
  double t3692;
  double t3720;
  double t3727;
  double t2528;
  double t2795;
  double t3123;
  double t3276;
  double t3278;
  double t3337;
  double t3378;
  double t3399;
  double t3421;
  double t3434;
  double t4368;
  double t4374;
  double t4377;
  double t4379;
  double t3487;
  double t3508;
  double t3525;
  double t3533;
  double t3541;
  double t3542;
  double t3549;
  double t3583;
  double t4642;
  double t4658;
  double t4660;
  double t4851;
  double t4865;
  double t4866;
  double t4869;
  double t4839;
  double t4841;
  double t4671;
  double t4689;
  double t4692;
  double t4712;
  double t4748;
  double t4750;
  double t4766;
  double t5059;
  double t5066;
  double t5069;
  double t5071;
  double t5074;
  double t5400;
  double t5417;
  double t5429;
  double t5333;
  double t5339;
  double t5348;
  double t5292;
  double t5294;
  double t5317;
  double t4612;
  double t4640;
  double t5699;
  double t5715;
  double t4793;
  double t4818;
  double t4831;
  double t4837;
  double t4886;
  double t4925;
  double t5768;
  double t5772;
  double t5773;
  double t5802;
  double t5815;
  double t5817;
  double t4931;
  double t4973;
  double t5041;
  double t5055;
  double t5057;
  double t5086;
  double t5098;
  double t5123;
  double t5125;
  double t5133;
  double t5148;
  double t5158;
  double t5176;
  double t5179;
  double t5198;
  double t5209;
  double t5213;
  double t5221;
  double t5224;
  double t5228;
  double t5231;
  double t5234;
  double t5259;
  double t5260;
  double t5263;
  double t5272;
  double t5280;
  double t5373;
  double t5378;
  double t5855;
  double t5864;
  double t5865;
  double t5473;
  double t5489;
  double t5912;
  double t5916;
  double t5919;
  double t5542;
  double t5543;
  double t5576;
  double t5594;
  double t5882;
  double t5885;
  double t5892;
  double t5629;
  double t5631;
  double t5637;
  double t5655;
  double t6010;
  double t6011;
  double t6014;
  double t6023;
  double t6025;
  double t6027;
  double t6065;
  double t6066;
  double t6076;
  double t6077;
  double t6082;
  double t6084;
  double t6088;
  double t6091;
  double t6099;
  double t6113;
  double t2765;
  double t2796;
  double t2532;
  double t2570;
  double t2383;
  double t2490;
  double t2510;
  double t2517;
  double t2618;
  double t2708;
  double t2747;
  double t2761;
  double t2842;
  double t2903;
  double t2928;
  double t3972;
  double t4012;
  double t3953;
  double t3958;
  double t3920;
  double t3926;
  double t3968;
  double t3971;
  double t4039;
  double t4062;
  double t4116;
  double t4291;
  double t4321;
  double t4338;
  double t4358;
  double t4380;
  double t4407;
  double t4429;
  double t4437;
  double t4444;
  double t4466;
  double t4489;
  double t4490;
  double t4534;
  double t4552;
  double t4849;
  double t4870;
  double t4912;
  double t4917;
  double t4927;
  double t4934;
  double t5320;
  double t5372;
  double t5436;
  double t5445;
  double t5456;
  double t5485;
  double t5510;
  double t5530;
  double t5558;
  double t5573;
  double t5602;
  double t5604;
  double t5621;
  double t5622;
  double t5623;
  double t5658;
  double t6407;
  double t6425;
  double t5716;
  double t5717;
  double t5718;
  double t5727;
  double t5728;
  double t5729;
  double t5732;
  double t5736;
  double t5739;
  double t5740;
  double t6430;
  double t6443;
  double t5789;
  double t5821;
  double t5823;
  double t5832;
  double t5841;
  double t5843;
  double t6463;
  double t6474;
  double t6475;
  double t6476;
  double t6477;
  double t6497;
  double t6498;
  double t6503;
  double t6504;
  double t6505;
  double t5866;
  double t5877;
  double t5895;
  double t5920;
  double t5927;
  double t5944;
  double t5945;
  double t5947;
  double t6511;
  double t6513;
  double t5949;
  double t5959;
  double t5962;
  double t5965;
  double t5966;
  double t5971;
  double t5976;
  double t5981;
  double t6072;
  double t3287;
  double t3463;
  double t3527;
  double t3585;
  double t3588;
  double t904;
  double t1737;
  double t1872;
  double t1874;
  double t1900;
  double t2082;
  double t2220;
  double t2222;
  double t6577;
  double t3596;
  double t6228;
  double t6230;
  double t6234;
  double t6238;
  double t6244;
  double t4162;
  double t4217;
  double t4434;
  double t4561;
  double t4568;
  double t4577;
  double t4580;
  double t6367;
  double t6368;
  double t6371;
  double t6385;
  double t6386;
  double t6387;
  double t6390;
  double t5465;
  double t5531;
  double t5603;
  double t5670;
  double t5673;
  double t6507;
  double t6508;
  double t6514;
  double t6518;
  double t6519;
  double t5929;
  double t5948;
  double t5963;
  double t5985;
  double t5987;
  double t6551;
  double t6553;
  double t6554;
  double t6555;
  double t6560;
  double t6089;
  double t6580;
  double t6824;
  double t6828;
  double t6835;
  double t6844;
  double t6849;
  double t6850;
  double t6192;
  double t6196;
  double t6201;
  double t6316;
  double t6320;
  double t6326;
  double t3787;
  double t3800;
  double t3809;
  double t6623;
  double t6624;
  double t6627;
  double t6454;
  double t6462;
  double t6470;
  double t4913;
  double t4954;
  double t4976;
  double t6668;
  double t6674;
  double t6678;
  double t6680;
  double t6683;
  double t6539;
  double t6541;
  double t6544;
  double t5825;
  double t5847;
  double t5849;
  double t6758;
  double t6762;
  double t6763;
  double t6770;
  double t6773;
  double t6129;
  double t6135;
  double t6143;
  double t2236;
  double t6852;
  double t6853;
  double t6854;
  double t6177;
  double t6181;
  double t6187;
  double t6284;
  double t6297;
  double t6298;
  double t3664;
  double t3736;
  double t3761;
  double t6616;
  double t6617;
  double t6621;
  double t6431;
  double t4796;
  double t6656;
  double t6658;
  double t6661;
  double t6527;
  double t6530;
  double t6531;
  double t5734;
  double t5741;
  double t5749;
  double t6726;
  double t6736;
  double t6740;
  double t6747;
  double t6752;
  double t6168;
  double t6597;
  double t6869;
  double t7040;
  double t7041;
  double t6172;
  double t6598;
  double t6873;
  t273 = Cos(var1[4]);
  t24 = Cos(var1[5]);
  t221 = Sin(var1[4]);
  t290 = Sin(var1[5]);
  t351 = Cos(var1[3]);
  t247 = t24*t221;
  t327 = t273*t290;
  t337 = t247 + t327;
  t23 = Sin(var1[3]);
  t403 = t273*t24;
  t439 = -1.*t221*t290;
  t441 = t403 + t439;
  t527 = Cos(var1[2]);
  t21 = Sin(var1[2]);
  t1420 = -1.*t24*t221;
  t1470 = -1.*t273*t290;
  t1507 = t1420 + t1470;
  t800 = -1.*t23*t441;
  t1075 = -1.*t24;
  t1130 = 1. + t1075;
  t1154 = -1.3127*t1130;
  t1170 = -1.3127*t24;
  t1193 = -0.06*t290;
  t1202 = t1154 + t1170 + t1193;
  t340 = -1.*t23*t337;
  t449 = t351*t441;
  t451 = t340 + t449;
  t460 = -1.*t21*t451;
  t528 = -1.*t351*t337;
  t860 = t528 + t800;
  t866 = t527*t860;
  t900 = t460 + t866;
  t1528 = -1.*t23*t1507;
  t1601 = -1.*t351*t441;
  t1607 = t1528 + t1601;
  t1611 = t527*t1607;
  t1621 = t351*t1507;
  t1660 = t1621 + t800;
  t1664 = -1.*t21*t1660;
  t1670 = t1611 + t1664;
  t1947 = -1.*t273;
  t1971 = 1. + t1947;
  t1974 = -0.9063*t1971;
  t1981 = -0.06*t24*t221;
  t1999 = t273*t1202;
  t2054 = t1974 + t1981 + t1999;
  t1921 = 0.06*t273*t24;
  t1922 = 0.9063*t221;
  t1930 = t221*t1202;
  t1933 = t1921 + t1922 + t1930;
  t2301 = t527*t1660;
  t2238 = t23*t1507;
  t2243 = t2238 + t449;
  t2664 = t351*t337;
  t2693 = t23*t441;
  t2695 = t2664 + t2693;
  t2635 = t527*t451;
  t2429 = t21*t1607;
  t2454 = t2429 + t2301;
  t2279 = -1.*t21*t2243;
  t2372 = t2279 + t2301;
  t2575 = t527*t2243;
  t2580 = t21*t1660;
  t2590 = t2575 + t2580;
  t2799 = t21*t451;
  t2809 = t527*t2695;
  t2834 = t2799 + t2809;
  t2655 = t21*t860;
  t2656 = t2635 + t2655;
  t2847 = -1.*t21*t2695;
  t2861 = t2635 + t2847;
  t3130 = -1.*t351;
  t3140 = 1. + t3130;
  t3157 = -0.4999*t3140;
  t3174 = t351*t2054;
  t3229 = -1.*t23*t1933;
  t3259 = t3157 + t3174 + t3229;
  t3016 = 0.4999*t23;
  t3064 = t23*t2054;
  t3080 = t351*t1933;
  t3120 = t3016 + t3064 + t3080;
  t3380 = -0.4999*t23;
  t3384 = -1.*t23*t2054;
  t3388 = -1.*t351*t1933;
  t3397 = t3380 + t3384 + t3388;
  t3344 = 0.4999*t351;
  t3367 = t3344 + t3174 + t3229;
  t1748 = Power(t24,2);
  t1769 = -0.06*t1748;
  t1778 = 0.9063*t290;
  t1800 = t1202*t290;
  t1848 = t1769 + t1778 + t1800;
  t3623 = t23*t337;
  t3631 = t3623 + t1601;
  t3633 = t21*t3631;
  t3649 = t3633 + t866;
  t921 = 0.9063*t24;
  t1271 = t24*t1202;
  t1386 = 0.06*t24*t290;
  t1392 = t921 + t1271 + t1386;
  t2126 = -1.*t2054*t1507;
  t2136 = 0.4999*t337;
  t2137 = -1.*t1933*t441;
  t2210 = t2126 + t2136 + t2137;
  t1942 = t1933*t337;
  t1946 = 0.4999*t441;
  t2056 = t2054*t441;
  t2065 = t1942 + t1946 + t2056;
  t3690 = -1.*t351*t1507;
  t3692 = t3690 + t2693;
  t3720 = t21*t3692;
  t3727 = t1611 + t3720;
  t2528 = -1.*t21*t1607;
  t2795 = -1.*t21*t860;
  t3123 = -1.*t3120*t2243;
  t3276 = -1.*t3259*t1660;
  t3278 = t3123 + t3276;
  t3337 = -1.*t3259*t1607;
  t3378 = -1.*t3367*t2243;
  t3399 = -1.*t3397*t1660;
  t3421 = -1.*t3120*t1660;
  t3434 = t3337 + t3378 + t3399 + t3421;
  t4368 = -0.4999*t351;
  t4374 = -1.*t351*t2054;
  t4377 = t23*t1933;
  t4379 = t4368 + t4374 + t4377;
  t3487 = t3259*t451;
  t3508 = t3120*t2695;
  t3525 = t3487 + t3508;
  t3533 = t3397*t451;
  t3541 = t3120*t451;
  t3542 = t3259*t860;
  t3549 = t3367*t2695;
  t3583 = t3533 + t3541 + t3542 + t3549;
  t4642 = -1.*t273*t24;
  t4658 = t221*t290;
  t4660 = t4642 + t4658;
  t4851 = -0.06*t273*t24;
  t4865 = -0.9063*t221;
  t4866 = -1.*t221*t1202;
  t4869 = t4851 + t4865 + t4866;
  t4839 = 0.9063*t273;
  t4841 = t4839 + t1981 + t1999;
  t4671 = t351*t4660;
  t4689 = t1528 + t4671;
  t4692 = t527*t4689;
  t4712 = -1.*t23*t4660;
  t4748 = t3690 + t4712;
  t4750 = t21*t4748;
  t4766 = t4692 + t4750;
  t5059 = t21*t4689;
  t5066 = t23*t4660;
  t5069 = t1621 + t5066;
  t5071 = t527*t5069;
  t5074 = t5059 + t5071;
  t5400 = -1.*t23*t4841;
  t5417 = t351*t4869;
  t5429 = t5400 + t5417;
  t5333 = t351*t4841;
  t5339 = t23*t4869;
  t5348 = t5333 + t5339;
  t5292 = -1.*t351*t4841;
  t5294 = -1.*t23*t4869;
  t5317 = t5292 + t5294;
  t4612 = 0.03428571*var2[5]*t2454;
  t4640 = 1.142857*t1848*t2454;
  t5699 = -0.06*t24;
  t5715 = 0. + t5699;
  t4793 = 1.142857*t1392*t4766;
  t4818 = 1.142857*t2210*t2454;
  t4831 = 0.4999*t1507;
  t4837 = t2054*t1507;
  t4886 = t1933*t441;
  t4925 = -1.*t1933*t1507;
  t5768 = t5715*t221;
  t5772 = -0.06*t273*t290;
  t5773 = t5768 + t5772;
  t5802 = t273*t5715;
  t5815 = 0.06*t221*t290;
  t5817 = t5802 + t5815;
  t4931 = -1.*t2054*t4660;
  t4973 = 1.142857*t2065*t4766;
  t5041 = 2.285714*t2590*t2656;
  t5055 = 2.285714*t2454*t2834;
  t5057 = 2.285714*t2590*t4766;
  t5086 = 2.285714*t2454*t5074;
  t5098 = t5041 + t5055 + t5057 + t5086;
  t5123 = -0.5*var2[0]*t5098;
  t5125 = 1.142857*t2590*t900;
  t5133 = 1.142857*t2372*t2656;
  t5148 = 1.142857*t1670*t2834;
  t5158 = 1.142857*t2454*t2861;
  t5176 = -1.*t21*t4689;
  t5179 = t527*t4748;
  t5198 = t5176 + t5179;
  t5209 = 1.142857*t2590*t5198;
  t5213 = 1.142857*t2372*t4766;
  t5221 = 1.142857*t1670*t5074;
  t5224 = -1.*t21*t5069;
  t5228 = t4692 + t5224;
  t5231 = 1.142857*t2454*t5228;
  t5234 = t5125 + t5133 + t5148 + t5158 + t5209 + t5213 + t5221 + t5231;
  t5259 = -0.5*var2[1]*t5234;
  t5260 = 1.142857*t2590*t3434;
  t5263 = 1.142857*t2454*t3278;
  t5272 = t3259*t1607;
  t5280 = t3367*t2243;
  t5373 = t3397*t1660;
  t5378 = t3120*t1660;
  t5855 = -1.*t23*t5773;
  t5864 = t351*t5817;
  t5865 = t5855 + t5864;
  t5473 = t3120*t2243;
  t5489 = t3259*t1660;
  t5912 = t351*t5773;
  t5916 = t23*t5817;
  t5919 = t5912 + t5916;
  t5542 = 1.142857*t3525*t4766;
  t5543 = 1.142857*t3583*t5074;
  t5576 = -1.*t3259*t4689;
  t5594 = -1.*t3120*t5069;
  t5882 = -1.*t351*t5773;
  t5885 = -1.*t23*t5817;
  t5892 = t5882 + t5885;
  t5629 = -1.*t3397*t4689;
  t5631 = -1.*t3120*t4689;
  t5637 = -1.*t3259*t4748;
  t5655 = -1.*t3367*t5069;
  t6010 = 2.285714*t2454*t2590;
  t6011 = 2.285714*t2656*t2834;
  t6014 = t6010 + t6011;
  t6023 = 1.142857*t2454*t2372;
  t6025 = 1.142857*t1670*t2590;
  t6027 = 1.142857*t900*t2834;
  t6065 = 1.142857*t2656*t2861;
  t6066 = t6023 + t6025 + t6027 + t6065;
  t6076 = 1.142857*t3278*t2656;
  t6077 = 1.142857*t3434*t2834;
  t6082 = 1.142857*t2454*t3525;
  t6084 = 1.142857*t2590*t3583;
  t6088 = t6076 + t6077 + t6082 + t6084;
  t6091 = 1.142857*t1392*t2454;
  t6099 = 1.142857*t1848*t2656;
  t6113 = t6091 + t6099;
  t2765 = -1.*t527*t451;
  t2796 = t2765 + t2795;
  t2532 = -1.*t527*t1660;
  t2570 = t2528 + t2532;
  t2383 = 2.285714*t2372*t1670;
  t2490 = -1.*t527*t2243;
  t2510 = t2490 + t1664;
  t2517 = 1.142857*t2454*t2510;
  t2618 = 1.142857*t2570*t2590;
  t2708 = -1.*t527*t2695;
  t2747 = t460 + t2708;
  t2761 = 1.142857*t2656*t2747;
  t2842 = 1.142857*t2796*t2834;
  t2903 = 2.285714*t900*t2861;
  t2928 = t2383 + t2517 + t2618 + t2761 + t2842 + t2903;
  t3972 = t527*t3631;
  t4012 = t3972 + t2795;
  t3953 = t527*t3692;
  t3958 = t2528 + t3953;
  t3920 = 2.285714*t2454*t1670;
  t3926 = 2.285714*t900*t2656;
  t3968 = 1.142857*t2590*t3958;
  t3971 = 1.142857*t2372*t3727;
  t4039 = 1.142857*t4012*t2834;
  t4062 = 1.142857*t3649*t2861;
  t4116 = t3920 + t3926 + t3968 + t3971 + t4039 + t4062;
  t4291 = -2.*t3397*t1607;
  t4321 = -1.*t3120*t1607;
  t4338 = -1.*t3397*t2243;
  t4358 = -2.*t3367*t1660;
  t4380 = -1.*t4379*t1660;
  t4407 = -1.*t3259*t3692;
  t4429 = t4291 + t4321 + t4338 + t4358 + t4380 + t4407;
  t4437 = t3259*t3631;
  t4444 = 2.*t3367*t451;
  t4466 = t4379*t451;
  t4489 = 2.*t3397*t860;
  t4490 = t3120*t860;
  t4534 = t3397*t2695;
  t4552 = t4437 + t4444 + t4466 + t4489 + t4490 + t4534;
  t4849 = t4841*t337;
  t4870 = t4869*t441;
  t4912 = t4831 + t4837 + t4849 + t4870 + t4886;
  t4917 = -1.*t4869*t1507;
  t4927 = -1.*t4841*t441;
  t4934 = t4917 + t4925 + t1946 + t4927 + t4931;
  t5320 = t5317*t451;
  t5372 = t5348*t451;
  t5436 = t5429*t860;
  t5445 = t5429*t2695;
  t5456 = t5272 + t5280 + t5320 + t5372 + t5373 + t5378 + t5436 + t5445;
  t5485 = t5429*t451;
  t5510 = t5348*t2695;
  t5530 = t5473 + t5485 + t5489 + t5510;
  t5558 = -1.*t5348*t2243;
  t5573 = -1.*t5429*t1660;
  t5602 = t5558 + t5573 + t5576 + t5594;
  t5604 = -1.*t5429*t1607;
  t5621 = -1.*t5429*t2243;
  t5622 = -1.*t5317*t1660;
  t5623 = -1.*t5348*t1660;
  t5658 = t5604 + t5621 + t5622 + t5623 + t5629 + t5631 + t5637 + t5655;
  t6407 = 0.03428571*var2[5]*t1670;
  t6425 = 1.142857*t1848*t1670;
  t5716 = t5715*t24;
  t5717 = 0.06*t1748;
  t5718 = -0.9063*t290;
  t5727 = -1.*t1202*t290;
  t5728 = Power(t290,2);
  t5729 = -0.06*t5728;
  t5732 = t5716 + t5717 + t5718 + t5727 + t5729;
  t5736 = t5715*t290;
  t5739 = 0.12*t24*t290;
  t5740 = t921 + t1271 + t5736 + t5739;
  t6430 = 1.142857*t1392*t5198;
  t6443 = 1.142857*t2210*t1670;
  t5789 = t5773*t337;
  t5821 = t441*t5817;
  t5823 = t4831 + t4837 + t5789 + t4886 + t5821;
  t5832 = -1.*t5773*t441;
  t5841 = -1.*t1507*t5817;
  t5843 = t4925 + t1946 + t5832 + t5841 + t4931;
  t6463 = 1.142857*t2065*t5198;
  t6474 = -0.5*var2[0]*t5234;
  t6475 = 2.285714*t2372*t900;
  t6476 = 2.285714*t1670*t2861;
  t6477 = 2.285714*t2372*t5198;
  t6497 = 2.285714*t1670*t5228;
  t6498 = t6475 + t6476 + t6477 + t6497;
  t6503 = -0.5*var2[1]*t6498;
  t6504 = 1.142857*t2372*t3434;
  t6505 = 1.142857*t1670*t3278;
  t5866 = t860*t5865;
  t5877 = t2695*t5865;
  t5895 = t451*t5892;
  t5920 = t451*t5919;
  t5927 = t5272 + t5280 + t5373 + t5378 + t5866 + t5877 + t5895 + t5920;
  t5944 = t451*t5865;
  t5945 = t2695*t5919;
  t5947 = t5473 + t5489 + t5944 + t5945;
  t6511 = 1.142857*t3525*t5198;
  t6513 = 1.142857*t3583*t5228;
  t5949 = -1.*t1660*t5865;
  t5959 = -1.*t2243*t5919;
  t5962 = t5949 + t5959 + t5576 + t5594;
  t5965 = -1.*t1607*t5865;
  t5966 = -1.*t2243*t5865;
  t5971 = -1.*t1660*t5892;
  t5976 = -1.*t1660*t5919;
  t5981 = t5965 + t5966 + t5971 + t5976 + t5629 + t5631 + t5637 + t5655;
  t6072 = -0.5*var2[3]*t6066;
  t3287 = 1.142857*t3278*t900;
  t3463 = 1.142857*t3434*t2861;
  t3527 = 1.142857*t1670*t3525;
  t3585 = 1.142857*t2372*t3583;
  t3588 = t3287 + t3463 + t3527 + t3585;
  t904 = 0.03428571*var2[5]*t900;
  t1737 = 1.142857*t1392*t1670;
  t1872 = 1.142857*t1848*t900;
  t1874 = t1737 + t1872;
  t1900 = -0.5*var2[4]*t1874;
  t2082 = 1.142857*t2065*t1670;
  t2220 = 1.142857*t2210*t900;
  t2222 = t2082 + t2220;
  t6577 = t2383 + t2903;
  t3596 = -0.5*var2[2]*t3588;
  t6228 = 1.142857*t3278*t2796;
  t6230 = 1.142857*t3434*t2747;
  t6234 = 1.142857*t2570*t3525;
  t6238 = 1.142857*t2510*t3583;
  t6244 = t6228 + t6230 + t6234 + t6238;
  t4162 = 1.142857*t3278*t3649;
  t4217 = 2.285714*t3434*t2656;
  t4434 = 1.142857*t4429*t2834;
  t4561 = 1.142857*t2590*t4552;
  t4568 = 1.142857*t3727*t3525;
  t4577 = 2.285714*t2454*t3583;
  t4580 = t4162 + t4217 + t4434 + t4561 + t4568 + t4577;
  t6367 = 2.285714*t3434*t900;
  t6368 = 1.142857*t3278*t4012;
  t6371 = 1.142857*t4429*t2861;
  t6385 = 1.142857*t2372*t4552;
  t6386 = 1.142857*t3958*t3525;
  t6387 = 2.285714*t1670*t3583;
  t6390 = t6367 + t6368 + t6371 + t6385 + t6386 + t6387;
  t5465 = 1.142857*t2590*t5456;
  t5531 = 1.142857*t2454*t5530;
  t5603 = 1.142857*t2656*t5602;
  t5670 = 1.142857*t2834*t5658;
  t5673 = t5260 + t5263 + t5465 + t5531 + t5542 + t5543 + t5603 + t5670;
  t6507 = 1.142857*t2372*t5456;
  t6508 = 1.142857*t1670*t5530;
  t6514 = 1.142857*t900*t5602;
  t6518 = 1.142857*t2861*t5658;
  t6519 = t6504 + t6505 + t6507 + t6508 + t6511 + t6513 + t6514 + t6518;
  t5929 = 1.142857*t2590*t5927;
  t5948 = 1.142857*t2454*t5947;
  t5963 = 1.142857*t2656*t5962;
  t5985 = 1.142857*t2834*t5981;
  t5987 = t5260 + t5263 + t5929 + t5948 + t5542 + t5543 + t5963 + t5985;
  t6551 = 1.142857*t2372*t5927;
  t6553 = 1.142857*t1670*t5947;
  t6554 = 1.142857*t900*t5962;
  t6555 = 1.142857*t2861*t5981;
  t6560 = t6504 + t6505 + t6551 + t6553 + t6511 + t6513 + t6554 + t6555;
  t6089 = -0.5*var2[3]*t6088;
  t6580 = -0.5*var2[3]*t3588;
  t6824 = 2.285714*t3434*t3278;
  t6828 = 2.285714*t3525*t3583;
  t6835 = t6824 + t6828;
  t6844 = 1.142857*t1848*t3434;
  t6849 = 1.142857*t1392*t3583;
  t6850 = t6844 + t6849;
  t6192 = 1.142857*t2065*t2570;
  t6196 = 1.142857*t2210*t2796;
  t6201 = t6192 + t6196;
  t6316 = 1.142857*t2210*t4012;
  t6320 = 1.142857*t2065*t3958;
  t6326 = t6316 + t6320;
  t3787 = 1.142857*t2210*t3649;
  t3800 = 1.142857*t2065*t3727;
  t3809 = t3787 + t3800;
  t6623 = 1.142857*t2210*t4429;
  t6624 = 1.142857*t2065*t4552;
  t6627 = t6623 + t6624;
  t6454 = 1.142857*t4912*t1670;
  t6462 = 1.142857*t4934*t900;
  t6470 = t6443 + t6454 + t6462 + t6463;
  t4913 = 1.142857*t4912*t2454;
  t4954 = 1.142857*t4934*t2656;
  t4976 = t4818 + t4913 + t4954 + t4973;
  t6668 = 1.142857*t4934*t3434;
  t6674 = 1.142857*t2065*t5456;
  t6678 = 1.142857*t4912*t3583;
  t6680 = 1.142857*t2210*t5658;
  t6683 = t6668 + t6674 + t6678 + t6680;
  t6539 = 1.142857*t5823*t1670;
  t6541 = 1.142857*t5843*t900;
  t6544 = t6443 + t6539 + t6541 + t6463;
  t5825 = 1.142857*t5823*t2454;
  t5847 = 1.142857*t5843*t2656;
  t5849 = t4818 + t5825 + t5847 + t4973;
  t6758 = 1.142857*t5843*t3434;
  t6762 = 1.142857*t5823*t3583;
  t6763 = 1.142857*t2065*t5927;
  t6770 = 1.142857*t2210*t5981;
  t6773 = t6758 + t6762 + t6763 + t6770;
  t6129 = 1.142857*t2065*t2454;
  t6135 = 1.142857*t2210*t2656;
  t6143 = t6129 + t6135;
  t2236 = -0.5*var2[3]*t2222;
  t6852 = 1.142857*t2210*t3434;
  t6853 = 1.142857*t2065*t3583;
  t6854 = t6852 + t6853;
  t6177 = 1.142857*t1392*t2570;
  t6181 = 1.142857*t1848*t2796;
  t6187 = t6177 + t6181;
  t6284 = 1.142857*t1848*t4012;
  t6297 = 1.142857*t1392*t3958;
  t6298 = t6284 + t6297;
  t3664 = 1.142857*t1848*t3649;
  t3736 = 1.142857*t1392*t3727;
  t3761 = t3664 + t3736;
  t6616 = 1.142857*t1848*t4429;
  t6617 = 1.142857*t1392*t4552;
  t6621 = t6616 + t6617;
  t6431 = t6425 + t6430;
  t4796 = t4640 + t4793;
  t6656 = 1.142857*t1392*t5456;
  t6658 = 1.142857*t1848*t5658;
  t6661 = t6656 + t6658;
  t6527 = 1.142857*t5732*t1670;
  t6530 = 1.142857*t5740*t900;
  t6531 = t6425 + t6527 + t6530 + t6430;
  t5734 = 1.142857*t5732*t2454;
  t5741 = 1.142857*t5740*t2656;
  t5749 = t4640 + t5734 + t5741 + t4793;
  t6726 = 1.142857*t5740*t3434;
  t6736 = 1.142857*t5732*t3583;
  t6740 = 1.142857*t1392*t5927;
  t6747 = 1.142857*t1848*t5981;
  t6752 = t6726 + t6736 + t6740 + t6747;
  t6168 = -0.5*var2[3]*t6113;
  t6597 = -0.5*var2[3]*t1874;
  t6869 = -0.5*var2[3]*t6850;
  t7040 = 0.03428571*var2[0]*t2454;
  t7041 = 0.03428571*var2[1]*t1670;
  t6172 = 0.03428571*var2[3]*t2656;
  t6598 = 0.03428571*var2[3]*t900;
  t6873 = 0.03428571*var2[3]*t3434;
  p_output1[0]=(t1900 + t2236 + t3596 + t904 - 0.5*(2.285714*t2372*t2454 + 2.285714*t1670*t2590 + 2.285714*t2656*t2861 + 2.285714*t2834*t900)*var2[0] - 0.5*t2928*var2[1])*var2[3];
  p_output1[1]=var2[3]*(-0.5*(2.285714*Power(t2454,2) + 2.285714*Power(t2656,2) + 2.285714*t2834*t3649 + 2.285714*t2590*t3727)*var2[0] - 0.5*t4116*var2[1] - 0.5*t4580*var2[2] - 0.5*t3809*var2[3] - 0.5*t3761*var2[4] + 0.03428571*t3649*var2[5]);
  p_output1[2]=var2[3]*(t4612 + t5123 + t5259 - 0.5*t5673*var2[2] - 0.5*t4976*var2[3] - 0.5*t4796*var2[4]);
  p_output1[3]=var2[3]*(t4612 + t5123 + t5259 - 0.5*t5987*var2[2] - 0.5*t5849*var2[3] - 0.5*t5749*var2[4]);
  p_output1[4]=-0.5*t6014*var2[3];
  p_output1[5]=t6072;
  p_output1[6]=t6089;
  p_output1[7]=-0.5*t6014*var2[0] - 0.5*t6066*var2[1] - 0.5*t6088*var2[2] - 1.*t6143*var2[3] - 0.5*t6113*var2[4] + 0.03428571*t2656*var2[5];
  p_output1[8]=t6168;
  p_output1[9]=t6172;
  p_output1[10]=var2[3]*(-0.5*t2928*var2[0] - 0.5*(2.285714*t1670*t2510 + 2.285714*t2372*t2570 + 2.285714*t2796*t2861 + 2.285714*t2747*t900)*var2[1] - 0.5*t6244*var2[2] - 0.5*t6201*var2[3] - 0.5*t6187*var2[4] + 0.03428571*t2796*var2[5]);
  p_output1[11]=var2[3]*(-0.5*t4116*var2[0] - 0.5*(2.285714*Power(t1670,2) + 2.285714*t2372*t3958 + 2.285714*t2861*t4012 + 2.285714*Power(t900,2))*var2[1] - 0.5*t6390*var2[2] - 0.5*t6326*var2[3] - 0.5*t6298*var2[4] + 0.03428571*t4012*var2[5]);
  p_output1[12]=var2[3]*(t6407 + t6474 + t6503 - 0.5*t6519*var2[2] - 0.5*t6470*var2[3] - 0.5*t6431*var2[4]);
  p_output1[13]=var2[3]*(t6407 + t6474 + t6503 - 0.5*t6560*var2[2] - 0.5*t6544*var2[3] - 0.5*t6531*var2[4]);
  p_output1[14]=t6072;
  p_output1[15]=-0.5*t6577*var2[3];
  p_output1[16]=t6580;
  p_output1[17]=t1900 + t3596 + t904 - 0.5*t6066*var2[0] - 0.5*t6577*var2[1] - 1.*t2222*var2[3];
  p_output1[18]=t6597;
  p_output1[19]=t6598;
  p_output1[20]=(-0.5*t3588*var2[0] - 0.5*t6244*var2[1])*var2[3];
  p_output1[21]=var2[3]*(-0.5*t4580*var2[0] - 0.5*t6390*var2[1] - 0.5*(2.285714*Power(t3434,2) + 2.285714*Power(t3583,2) + 2.285714*t3278*t4429 + 2.285714*t3525*t4552)*var2[2] - 0.5*t6627*var2[3] - 0.5*t6621*var2[4] + 0.03428571*t4429*var2[5]);
  p_output1[22]=var2[3]*(-0.5*t5673*var2[0] - 0.5*t6519*var2[1] - 0.5*(2.285714*t3525*t5456 + 2.285714*t3583*t5530 + 2.285714*t3434*t5602 + 2.285714*t3278*t5658)*var2[2] - 0.5*t6683*var2[3] - 0.5*t6661*var2[4] + 0.03428571*t5658*var2[5]);
  p_output1[23]=var2[3]*(-0.5*t5987*var2[0] - 0.5*t6560*var2[1] - 0.5*(2.285714*t3525*t5927 + 2.285714*t3583*t5947 + 2.285714*t3434*t5962 + 2.285714*t3278*t5981)*var2[2] - 0.5*t6773*var2[3] - 0.5*t6752*var2[4] + 0.03428571*t5981*var2[5]);
  p_output1[24]=t6089;
  p_output1[25]=t6580;
  p_output1[26]=-0.5*t6835*var2[3];
  p_output1[27]=-0.5*t6088*var2[0] - 0.5*t3588*var2[1] - 0.5*t6835*var2[2] - 1.*t6854*var2[3] - 0.5*t6850*var2[4] + 0.03428571*t3434*var2[5];
  p_output1[28]=t6869;
  p_output1[29]=t6873;
  p_output1[30]=(-0.5*t2222*var2[0] - 0.5*t6201*var2[1])*var2[3];
  p_output1[31]=(-0.5*t3809*var2[0] - 0.5*t6326*var2[1] - 0.5*t6627*var2[2])*var2[3];
  p_output1[32]=(-0.5*t4976*var2[0] - 0.5*t6470*var2[1] - 0.5*t6683*var2[2])*var2[3];
  p_output1[33]=(-0.5*t5849*var2[0] - 0.5*t6544*var2[1] - 0.5*t6773*var2[2])*var2[3];
  p_output1[34]=-0.5*t6143*var2[3];
  p_output1[35]=t2236;
  p_output1[36]=-0.5*t6854*var2[3];
  p_output1[37]=-0.5*t6143*var2[0] - 0.5*t2222*var2[1] - 0.5*t6854*var2[2];
  p_output1[38]=(-0.5*t1874*var2[0] - 0.5*t6187*var2[1])*var2[3];
  p_output1[39]=(-0.5*t3761*var2[0] - 0.5*t6298*var2[1] - 0.5*t6621*var2[2])*var2[3];
  p_output1[40]=(-0.5*t4796*var2[0] - 0.5*t6431*var2[1] - 0.5*t6661*var2[2])*var2[3];
  p_output1[41]=(-0.5*t5749*var2[0] - 0.5*t6531*var2[1] - 0.5*t6752*var2[2])*var2[3];
  p_output1[42]=t6168;
  p_output1[43]=t6597;
  p_output1[44]=t6869;
  p_output1[45]=-0.5*t6113*var2[0] - 0.5*t1874*var2[1] - 0.5*t6850*var2[2];
  p_output1[46]=(0.03428571*t900*var2[0] + 0.03428571*t2796*var2[1])*var2[3];
  p_output1[47]=(0.03428571*t3649*var2[0] + 0.03428571*t4012*var2[1] + 0.03428571*t4429*var2[2])*var2[3];
  p_output1[48]=(t7040 + t7041 + 0.03428571*t5658*var2[2])*var2[3];
  p_output1[49]=(t7040 + t7041 + 0.03428571*t5981*var2[2])*var2[3];
  p_output1[50]=t6172;
  p_output1[51]=t6598;
  p_output1[52]=t6873;
  p_output1[53]=0.03428571*t2656*var2[0] + 0.03428571*t900*var2[1] + 0.03428571*t3434*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 54, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L4_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L4_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
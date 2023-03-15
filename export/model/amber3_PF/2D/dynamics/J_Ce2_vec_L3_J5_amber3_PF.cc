/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:20 GMT-08:00
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
  double t202;
  double t174;
  double t176;
  double t207;
  double t27;
  double t293;
  double t549;
  double t611;
  double t630;
  double t671;
  double t712;
  double t178;
  double t247;
  double t263;
  double t1441;
  double t1484;
  double t1496;
  double t1866;
  double t1890;
  double t1912;
  double t548;
  double t763;
  double t266;
  double t298;
  double t357;
  double t390;
  double t491;
  double t496;
  double t1134;
  double t1220;
  double t1238;
  double t1291;
  double t1514;
  double t1556;
  double t2349;
  double t2402;
  double t2505;
  double t2506;
  double t2514;
  double t2580;
  double t2596;
  double t2793;
  double t2806;
  double t3037;
  double t3053;
  double t3064;
  double t3073;
  double t3114;
  double t3122;
  double t3211;
  double t3228;
  double t3236;
  double t3257;
  double t3290;
  double t3306;
  double t3315;
  double t3496;
  double t3510;
  double t774;
  double t965;
  double t1090;
  double t2091;
  double t2153;
  double t2202;
  double t4206;
  double t4209;
  double t1584;
  double t1732;
  double t1762;
  double t1807;
  double t1928;
  double t1937;
  double t1985;
  double t2028;
  double t2697;
  double t3670;
  double t3675;
  double t3708;
  double t3082;
  double t3261;
  double t3266;
  double t3286;
  double t3334;
  double t3322;
  double t3523;
  double t3579;
  double t5049;
  double t5085;
  double t4912;
  double t4947;
  double t4956;
  double t3750;
  double t3889;
  double t3784;
  double t3805;
  double t3902;
  double t5189;
  double t5244;
  double t5258;
  double t4271;
  double t4301;
  double t4350;
  double t4501;
  double t4544;
  double t4597;
  double t4602;
  double t4607;
  double t4619;
  double t4647;
  double t4667;
  double t4726;
  double t4736;
  double t4762;
  double t4768;
  double t4770;
  double t4772;
  double t4778;
  double t4786;
  double t4802;
  double t4817;
  double t4834;
  double t4867;
  double t5168;
  double t5278;
  double t5284;
  double t5319;
  double t5543;
  double t5560;
  double t5623;
  double t5667;
  double t6542;
  double t6574;
  double t6593;
  double t6602;
  double t6603;
  double t6352;
  double t6357;
  double t6365;
  double t6416;
  double t6429;
  double t6450;
  double t6457;
  double t6463;
  double t6531;
  double t6532;
  double t6533;
  double t6538;
  double t6539;
  double t2670;
  double t2733;
  double t2435;
  double t2473;
  double t2322;
  double t2497;
  double t2612;
  double t2620;
  double t2770;
  double t2837;
  double t2840;
  double t4960;
  double t5100;
  double t5127;
  double t5294;
  double t5310;
  double t5324;
  double t5351;
  double t5353;
  double t5498;
  double t5504;
  double t5506;
  double t5558;
  double t5559;
  double t5632;
  double t5643;
  double t5730;
  double t6987;
  double t5849;
  double t5850;
  double t5852;
  double t5891;
  double t6989;
  double t5906;
  double t6994;
  double t7007;
  double t7049;
  double t7061;
  double t7062;
  double t7072;
  double t7073;
  double t7077;
  double t7097;
  double t7100;
  double t7112;
  double t7115;
  double t7177;
  double t6024;
  double t6035;
  double t6047;
  double t6134;
  double t6148;
  double t6203;
  double t6472;
  double t3280;
  double t3659;
  double t3729;
  double t3928;
  double t4050;
  double t1559;
  double t1917;
  double t2057;
  double t2211;
  double t2216;
  double t2223;
  double t7381;
  double t4115;
  double t6924;
  double t6927;
  double t6943;
  double t6944;
  double t6957;
  double t5143;
  double t5148;
  double t5361;
  double t5522;
  double t5527;
  double t5746;
  double t5789;
  double t7122;
  double t7171;
  double t7196;
  double t7199;
  double t7210;
  double t7217;
  double t7223;
  double t6020;
  double t6058;
  double t6123;
  double t6235;
  double t6242;
  double t7275;
  double t7280;
  double t7308;
  double t7331;
  double t7352;
  double t6540;
  double t7407;
  double t7910;
  double t7926;
  double t7927;
  double t7950;
  double t7961;
  double t7850;
  double t7880;
  double t7888;
  double t6758;
  double t6760;
  double t6787;
  double t6791;
  double t6803;
  double t6990;
  double t7039;
  double t4499;
  double t4509;
  double t7486;
  double t7494;
  double t7498;
  double t7524;
  double t7528;
  double t7253;
  double t7254;
  double t7259;
  double t7260;
  double t7264;
  double t5898;
  double t5917;
  double t5940;
  double t5965;
  double t5980;
  double t7660;
  double t7661;
  double t7662;
  double t7665;
  double t7684;
  double t7692;
  double t7693;
  double t7700;
  double t6605;
  double t7408;
  double t7963;
  double t8230;
  double t8241;
  double t8247;
  double t8279;
  double t8280;
  double t503;
  t202 = Cos(var1[3]);
  t174 = Cos(var1[4]);
  t176 = Sin(var1[3]);
  t207 = Sin(var1[4]);
  t27 = Sin(var1[2]);
  t293 = Cos(var1[2]);
  t549 = -1.*t174;
  t611 = 1. + t549;
  t630 = -0.9063*t611;
  t671 = -1.078185*t174;
  t712 = t630 + t671;
  t178 = -1.*t174*t176;
  t247 = -1.*t202*t207;
  t263 = t178 + t247;
  t1441 = t202*t174;
  t1484 = -1.*t176*t207;
  t1496 = t1441 + t1484;
  t1866 = t293*t263;
  t1890 = -1.*t27*t1496;
  t1912 = t1866 + t1890;
  t548 = 0.4999*t174;
  t763 = t712*t174;
  t266 = -1.*t27*t263;
  t298 = -1.*t202*t174;
  t357 = t176*t207;
  t390 = t298 + t357;
  t491 = t293*t390;
  t496 = t266 + t491;
  t1134 = t174*t176;
  t1220 = t202*t207;
  t1238 = t1134 + t1220;
  t1291 = -1.*t27*t1238;
  t1514 = t293*t1496;
  t1556 = t1291 + t1514;
  t2349 = t27*t263;
  t2402 = t2349 + t1514;
  t2505 = -1.*t293*t1496;
  t2506 = t266 + t2505;
  t2514 = t293*t1238;
  t2580 = t27*t1496;
  t2596 = t2514 + t2580;
  t2793 = t27*t390;
  t2806 = t1866 + t2793;
  t3037 = 0.4999*t176;
  t3053 = t712*t176;
  t3064 = -0.17188499999999995*t202*t207;
  t3073 = t3037 + t3053 + t3064;
  t3114 = -1.*t202;
  t3122 = 1. + t3114;
  t3211 = -0.4999*t3122;
  t3228 = t202*t712;
  t3236 = 0.17188499999999995*t176*t207;
  t3257 = t3211 + t3228 + t3236;
  t3290 = 0.17188499999999995*t174*t176;
  t3306 = 0.17188499999999995*t202*t207;
  t3315 = t3290 + t3306;
  t3496 = -0.17188499999999995*t202*t174;
  t3510 = t3496 + t3236;
  t774 = Power(t174,2);
  t965 = 0.17188499999999995*t774;
  t1090 = t548 + t763 + t965;
  t2091 = Power(t207,2);
  t2153 = -0.17188499999999995*t2091;
  t2202 = t548 + t763 + t2153;
  t4206 = t27*t1238;
  t4209 = t4206 + t491;
  t1584 = -0.4999*t207;
  t1732 = -1.*t712*t207;
  t1762 = -0.17188499999999995*t174*t207;
  t1807 = t1584 + t1732 + t1762;
  t1928 = 0.4999*t207;
  t1937 = t712*t207;
  t1985 = 0.17188499999999995*t174*t207;
  t2028 = t1928 + t1937 + t1985;
  t2697 = -1.*t27*t390;
  t3670 = t3073*t1238;
  t3675 = t1496*t3257;
  t3708 = t3670 + t3675;
  t3082 = -1.*t3073*t1496;
  t3261 = -1.*t263*t3257;
  t3266 = t3082 + t3261;
  t3286 = t3073*t1496;
  t3334 = t263*t3257;
  t3322 = t3315*t1496;
  t3523 = t1238*t3510;
  t3579 = t3286 + t3322 + t3334 + t3523;
  t5049 = 0.4999*t202;
  t5085 = t5049 + t3228 + t3236;
  t4912 = -0.4999*t176;
  t4947 = -1.*t712*t176;
  t4956 = t4912 + t4947 + t3306;
  t3750 = -1.*t263*t3073;
  t3889 = -1.*t3257*t390;
  t3784 = -1.*t263*t3315;
  t3805 = -1.*t1496*t3510;
  t3902 = t3750 + t3784 + t3805 + t3889;
  t5189 = 0.17188499999999995*t202*t174;
  t5244 = -0.17188499999999995*t176*t207;
  t5258 = t5189 + t5244;
  t4271 = 0.07323676079999998*var2[4]*t4209;
  t4301 = 0.85216*t1090*t2402;
  t4350 = 0.85216*t2202*t4209;
  t4501 = 0.85216*t2028*t2806;
  t4544 = 1.70432*t2402*t1912;
  t4597 = 0.85216*t2596*t496;
  t4602 = 0.85216*t1912*t4209;
  t4607 = t2514 + t2697;
  t4619 = 0.85216*t2402*t4607;
  t4647 = 0.85216*t1556*t2806;
  t4667 = 1.70432*t496*t2806;
  t4726 = t4544 + t4597 + t4602 + t4619 + t4647 + t4667;
  t4736 = -0.5*var2[1]*t4726;
  t4762 = Power(t2402,2);
  t4768 = 1.70432*t4762;
  t4770 = 1.70432*t2402*t4209;
  t4772 = 1.70432*t2596*t2806;
  t4778 = Power(t2806,2);
  t4786 = 1.70432*t4778;
  t4802 = t4768 + t4770 + t4772 + t4786;
  t4817 = -0.5*var2[0]*t4802;
  t4834 = 0.85216*t3708*t4209;
  t4867 = 0.85216*t3266*t2806;
  t5168 = -1.*t3315*t1496;
  t5278 = -1.*t263*t5258;
  t5284 = -1.*t1238*t3257;
  t5319 = -1.*t3073*t390;
  t5543 = t263*t3073;
  t5560 = t3315*t1238;
  t5623 = t1496*t5258;
  t5667 = t3257*t390;
  t6542 = 0.85216*t1807*t2402;
  t6574 = 0.85216*t2028*t2402;
  t6593 = 0.85216*t1090*t2596;
  t6602 = 0.85216*t2202*t2806;
  t6603 = t6542 + t6574 + t6593 + t6602;
  t6352 = 1.70432*t2402*t2596;
  t6357 = 1.70432*t2402*t2806;
  t6365 = t6352 + t6357;
  t6416 = 0.85216*t2402*t1556;
  t6429 = 0.85216*t1912*t2596;
  t6450 = 0.85216*t2402*t496;
  t6457 = 0.85216*t1912*t2806;
  t6463 = t6416 + t6429 + t6450 + t6457;
  t6531 = 0.85216*t2402*t3266;
  t6532 = 0.85216*t2402*t3579;
  t6533 = 0.85216*t3708*t2806;
  t6538 = 0.85216*t2596*t3902;
  t6539 = t6531 + t6532 + t6533 + t6538;
  t2670 = -1.*t293*t263;
  t2733 = t2670 + t2697;
  t2435 = -1.*t293*t1238;
  t2473 = t2435 + t1890;
  t2322 = 1.70432*t1556*t1912;
  t2497 = 0.85216*t2402*t2473;
  t2612 = 0.85216*t2506*t2596;
  t2620 = 1.70432*t1912*t496;
  t2770 = 0.85216*t2402*t2733;
  t2837 = 0.85216*t2506*t2806;
  t2840 = t2322 + t2497 + t2612 + t2620 + t2770 + t2837;
  t4960 = t4956*t1496;
  t5100 = t1238*t5085;
  t5127 = t3286 + t4960 + t3334 + t5100;
  t5294 = -1.*t263*t5085;
  t5310 = -1.*t263*t3510;
  t5324 = -1.*t4956*t390;
  t5351 = -1.*t3315*t390;
  t5353 = t5168 + t5278 + t5284 + t5294 + t5310 + t5319 + t5324 + t5351;
  t5498 = -1.*t263*t4956;
  t5504 = -1.*t1496*t5085;
  t5506 = t3750 + t5498 + t5504 + t3889;
  t5558 = t263*t4956;
  t5559 = t263*t3315;
  t5632 = t1496*t5085;
  t5643 = t1496*t3510;
  t5730 = t5543 + t5558 + t5559 + t5560 + t5623 + t5632 + t5643 + t5667;
  t6987 = 0.07323676079999998*var2[4]*t4607;
  t5849 = -0.4999*t174;
  t5850 = -1.*t712*t174;
  t5852 = -0.17188499999999995*t774;
  t5891 = 0. + t5849 + t5850 + t5852;
  t6989 = 0.85216*t1090*t1912;
  t5906 = 0. + t548 + t763 + t965;
  t6994 = 0.85216*t2028*t496;
  t7007 = 0.85216*t2202*t4607;
  t7049 = Power(t1912,2);
  t7061 = 1.70432*t7049;
  t7062 = 1.70432*t1556*t496;
  t7072 = Power(t496,2);
  t7073 = 1.70432*t7072;
  t7077 = 1.70432*t1912*t4607;
  t7097 = t7061 + t7062 + t7073 + t7077;
  t7100 = -0.5*var2[1]*t7097;
  t7112 = -0.5*var2[0]*t4726;
  t7115 = 0.85216*t3266*t496;
  t7177 = 0.85216*t3708*t4607;
  t6024 = -2.*t263*t3510;
  t6035 = -2.*t3315*t390;
  t6047 = t5168 + t5278 + t5284 + t6024 + t5319 + t6035;
  t6134 = 2.*t263*t3315;
  t6148 = 2.*t1496*t3510;
  t6203 = t5543 + t6134 + t5560 + t5623 + t6148 + t5667;
  t6472 = -0.5*var2[4]*t6463;
  t3280 = 0.85216*t1912*t3266;
  t3659 = 0.85216*t1912*t3579;
  t3729 = 0.85216*t3708*t496;
  t3928 = 0.85216*t1556*t3902;
  t4050 = t3280 + t3659 + t3729 + t3928;
  t1559 = 0.85216*t1090*t1556;
  t1917 = 0.85216*t1807*t1912;
  t2057 = 0.85216*t2028*t1912;
  t2211 = 0.85216*t2202*t496;
  t2216 = t1559 + t1917 + t2057 + t2211;
  t2223 = -0.5*var2[3]*t2216;
  t7381 = t2322 + t2620;
  t4115 = -0.5*var2[2]*t4050;
  t6924 = 0.85216*t2506*t3266;
  t6927 = 0.85216*t2506*t3579;
  t6943 = 0.85216*t3708*t2733;
  t6944 = 0.85216*t2473*t3902;
  t6957 = t6924 + t6927 + t6943 + t6944;
  t5143 = 0.85216*t5127*t2806;
  t5148 = 0.85216*t3579*t2806;
  t5361 = 0.85216*t2596*t5353;
  t5522 = 0.85216*t2402*t5506;
  t5527 = 0.85216*t2402*t3902;
  t5746 = 0.85216*t2402*t5730;
  t5789 = t4834 + t4867 + t5143 + t5148 + t5361 + t5522 + t5527 + t5746;
  t7122 = 0.85216*t5127*t496;
  t7171 = 0.85216*t3579*t496;
  t7196 = 0.85216*t1556*t5353;
  t7199 = 0.85216*t1912*t5506;
  t7210 = 0.85216*t1912*t3902;
  t7217 = 0.85216*t1912*t5730;
  t7223 = t7115 + t7122 + t7171 + t7177 + t7196 + t7199 + t7210 + t7217;
  t6020 = 1.70432*t3579*t2806;
  t6058 = 0.85216*t2596*t6047;
  t6123 = 1.70432*t2402*t3902;
  t6235 = 0.85216*t2402*t6203;
  t6242 = t4834 + t4867 + t6020 + t6058 + t6123 + t6235;
  t7275 = 1.70432*t3579*t496;
  t7280 = 0.85216*t1556*t6047;
  t7308 = 1.70432*t1912*t3902;
  t7331 = 0.85216*t1912*t6203;
  t7352 = t7115 + t7275 + t7177 + t7280 + t7308 + t7331;
  t6540 = -0.5*var2[4]*t6539;
  t7407 = -0.5*var2[4]*t4050;
  t7910 = 0.85216*t1090*t3266;
  t7926 = 0.85216*t1807*t3708;
  t7927 = 0.85216*t2202*t3579;
  t7950 = 0.85216*t2028*t3902;
  t7961 = t7910 + t7926 + t7927 + t7950;
  t7850 = 1.70432*t3708*t3579;
  t7880 = 1.70432*t3266*t3902;
  t7888 = t7850 + t7880;
  t6758 = 0.85216*t1807*t2506;
  t6760 = 0.85216*t2028*t2506;
  t6787 = 0.85216*t1090*t2473;
  t6791 = 0.85216*t2202*t2733;
  t6803 = t6758 + t6760 + t6787 + t6791;
  t6990 = 0.85216*t1807*t496;
  t7039 = t6989 + t6990 + t6994 + t7007;
  t4499 = 0.85216*t1807*t2806;
  t4509 = t4301 + t4350 + t4499 + t4501;
  t7486 = 0.85216*t1807*t5127;
  t7494 = 0.85216*t2028*t5353;
  t7498 = 0.85216*t1090*t5506;
  t7524 = 0.85216*t2202*t5730;
  t7528 = t7486 + t7494 + t7498 + t7524;
  t7253 = 0.85216*t1807*t1556;
  t7254 = 0.85216*t5891*t1912;
  t7259 = 0.85216*t5906*t1912;
  t7260 = 1.70432*t1807*t496;
  t7264 = t7253 + t7254 + t6989 + t7259 + t7260 + t6994 + t7007;
  t5898 = 0.85216*t5891*t2402;
  t5917 = 0.85216*t5906*t2402;
  t5940 = 0.85216*t1807*t2596;
  t5965 = 1.70432*t1807*t2806;
  t5980 = t5898 + t4301 + t5917 + t5940 + t4350 + t5965 + t4501;
  t7660 = 0.85216*t1807*t3266;
  t7661 = 0.85216*t5891*t3708;
  t7662 = 1.70432*t1807*t3579;
  t7665 = 0.85216*t2028*t6047;
  t7684 = 0.85216*t1090*t3902;
  t7692 = 0.85216*t5906*t3902;
  t7693 = 0.85216*t2202*t6203;
  t7700 = t7660 + t7661 + t7662 + t7665 + t7684 + t7692 + t7693;
  t6605 = -0.5*var2[4]*t6603;
  t7408 = -0.5*var2[4]*t2216;
  t7963 = -0.5*var2[4]*t7961;
  t8230 = 1.70432*t1090*t2028;
  t8241 = 1.70432*t1807*t2202;
  t8247 = t8230 + t8241;
  t8279 = 0.07323676079999998*var2[0]*t4209;
  t8280 = 0.07323676079999998*var2[1]*t4607;
  t503 = 0.07323676079999998*var2[4]*t496;
  p_output1[0]=(t2223 + t4115 + t503 - 0.5*(1.70432*t1556*t2402 + 1.70432*t1912*t2596 + 1.70432*t1912*t2806 + 1.70432*t2402*t496)*var2[0] - 0.5*t2840*var2[1])*var2[4];
  p_output1[1]=(t4271 + t4736 + t4817 - 0.5*t5789*var2[2] - 0.5*t4509*var2[3])*var2[4];
  p_output1[2]=(t4271 + t4736 + t4817 - 0.5*t6242*var2[2] - 0.5*t5980*var2[3])*var2[4];
  p_output1[3]=-0.5*t6365*var2[4];
  p_output1[4]=t6472;
  p_output1[5]=t6540;
  p_output1[6]=t6605;
  p_output1[7]=-0.5*t6365*var2[0] - 0.5*t6463*var2[1] - 0.5*t6539*var2[2] - 0.5*t6603*var2[3] + 0.14647352159999996*t2806*var2[4];
  p_output1[8]=var2[4]*(-0.5*t2840*var2[0] - 0.5*(1.70432*t1912*t2473 + 1.70432*t1556*t2506 + 1.70432*t1912*t2733 + 1.70432*t2506*t496)*var2[1] - 0.5*t6957*var2[2] - 0.5*t6803*var2[3] + 0.07323676079999998*t2733*var2[4]);
  p_output1[9]=(t6987 + t7100 + t7112 - 0.5*t7223*var2[2] - 0.5*t7039*var2[3])*var2[4];
  p_output1[10]=(t6987 + t7100 + t7112 - 0.5*t7352*var2[2] - 0.5*t7264*var2[3])*var2[4];
  p_output1[11]=t6472;
  p_output1[12]=-0.5*t7381*var2[4];
  p_output1[13]=t7407;
  p_output1[14]=t7408;
  p_output1[15]=t2223 + t4115 - 0.5*t6463*var2[0] - 0.5*t7381*var2[1] + 0.14647352159999996*t496*var2[4];
  p_output1[16]=(-0.5*t4050*var2[0] - 0.5*t6957*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t5789*var2[0] - 0.5*t7223*var2[1] - 0.5*(1.70432*t3579*t5127 + 1.70432*t3266*t5353 + 1.70432*t3902*t5506 + 1.70432*t3708*t5730)*var2[2] - 0.5*t7528*var2[3] + 0.07323676079999998*t5730*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t6242*var2[0] - 0.5*t7352*var2[1] - 0.5*(1.70432*Power(t3579,2) + 1.70432*Power(t3902,2) + 1.70432*t3266*t6047 + 1.70432*t3708*t6203)*var2[2] - 0.5*t7700*var2[3] + 0.07323676079999998*t6203*var2[4]);
  p_output1[19]=t6540;
  p_output1[20]=t7407;
  p_output1[21]=-0.5*t7888*var2[4];
  p_output1[22]=t7963;
  p_output1[23]=-0.5*t6539*var2[0] - 0.5*t4050*var2[1] - 0.5*t7888*var2[2] - 0.5*t7961*var2[3] + 0.14647352159999996*t3579*var2[4];
  p_output1[24]=(-0.5*t2216*var2[0] - 0.5*t6803*var2[1])*var2[4];
  p_output1[25]=(-0.5*t4509*var2[0] - 0.5*t7039*var2[1] - 0.5*t7528*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t5980*var2[0] - 0.5*t7264*var2[1] - 0.5*t7700*var2[2] - 0.5*(1.70432*Power(t1807,2) + 1.70432*t1807*t2028 + 1.70432*t2202*t5891 + 1.70432*t1090*t5906)*var2[3] + 0.07323676079999998*t5891*var2[4]);
  p_output1[27]=t6605;
  p_output1[28]=t7408;
  p_output1[29]=t7963;
  p_output1[30]=-0.5*t8247*var2[4];
  p_output1[31]=-0.5*t6603*var2[0] - 0.5*t2216*var2[1] - 0.5*t7961*var2[2] - 0.5*t8247*var2[3] + 0.14647352159999996*t1807*var2[4];
  p_output1[32]=(0.07323676079999998*t496*var2[0] + 0.07323676079999998*t2733*var2[1])*var2[4];
  p_output1[33]=(t8279 + t8280 + 0.07323676079999998*t5730*var2[2])*var2[4];
  p_output1[34]=(t8279 + t8280 + 0.07323676079999998*t6203*var2[2] + 0.07323676079999998*t5891*var2[3])*var2[4];
  p_output1[35]=0.07323676079999998*t2806*var2[4];
  p_output1[36]=t503;
  p_output1[37]=0.07323676079999998*t3579*var2[4];
  p_output1[38]=0.07323676079999998*t1807*var2[4];
  p_output1[39]=0.07323676079999998*t2806*var2[0] + 0.07323676079999998*t496*var2[1] + 0.07323676079999998*t3579*var2[2] + 0.07323676079999998*t1807*var2[3];
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

#include "J_Ce2_vec_L3_J5_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L3_J5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

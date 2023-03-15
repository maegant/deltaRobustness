/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:27:17 GMT-08:00
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
  double t276;
  double t103;
  double t108;
  double t279;
  double t4;
  double t461;
  double t921;
  double t976;
  double t996;
  double t1011;
  double t1031;
  double t246;
  double t336;
  double t363;
  double t1316;
  double t1330;
  double t1351;
  double t1496;
  double t1503;
  double t1512;
  double t905;
  double t1067;
  double t372;
  double t511;
  double t643;
  double t651;
  double t785;
  double t801;
  double t1196;
  double t1205;
  double t1217;
  double t1223;
  double t1366;
  double t1376;
  double t1895;
  double t1901;
  double t1943;
  double t1948;
  double t1957;
  double t1984;
  double t1985;
  double t2065;
  double t2066;
  double t2316;
  double t2318;
  double t2386;
  double t2399;
  double t2437;
  double t2504;
  double t2513;
  double t2515;
  double t2536;
  double t2546;
  double t2613;
  double t2618;
  double t2633;
  double t2666;
  double t2670;
  double t1111;
  double t1127;
  double t1162;
  double t1733;
  double t1739;
  double t1744;
  double t2927;
  double t2932;
  double t1443;
  double t1455;
  double t1471;
  double t1489;
  double t1551;
  double t1557;
  double t1696;
  double t1710;
  double t2022;
  double t2753;
  double t2773;
  double t2787;
  double t2402;
  double t2574;
  double t2581;
  double t2591;
  double t2635;
  double t2634;
  double t2678;
  double t2711;
  double t3554;
  double t3558;
  double t3530;
  double t3532;
  double t3539;
  double t2791;
  double t2851;
  double t2815;
  double t2835;
  double t2852;
  double t3632;
  double t3640;
  double t3646;
  double t2947;
  double t2971;
  double t2975;
  double t2993;
  double t3009;
  double t3024;
  double t3049;
  double t3058;
  double t3061;
  double t3147;
  double t3162;
  double t3250;
  double t3317;
  double t3358;
  double t3400;
  double t3419;
  double t3434;
  double t3449;
  double t3504;
  double t3512;
  double t3515;
  double t3525;
  double t3527;
  double t3631;
  double t3648;
  double t3662;
  double t3693;
  double t3794;
  double t3817;
  double t3822;
  double t3840;
  double t4441;
  double t4449;
  double t4453;
  double t4484;
  double t4501;
  double t4261;
  double t4265;
  double t4274;
  double t4305;
  double t4318;
  double t4326;
  double t4334;
  double t4352;
  double t4366;
  double t4371;
  double t4373;
  double t4403;
  double t4419;
  double t2016;
  double t2039;
  double t1917;
  double t1923;
  double t1831;
  double t1942;
  double t1986;
  double t1997;
  double t2053;
  double t2100;
  double t2134;
  double t3549;
  double t3585;
  double t3590;
  double t3672;
  double t3680;
  double t3696;
  double t3706;
  double t3712;
  double t3727;
  double t3731;
  double t3739;
  double t3798;
  double t3811;
  double t3829;
  double t3839;
  double t3857;
  double t4831;
  double t3904;
  double t3919;
  double t3995;
  double t3997;
  double t4840;
  double t4007;
  double t4851;
  double t4852;
  double t4861;
  double t4876;
  double t4906;
  double t4918;
  double t4930;
  double t4934;
  double t4938;
  double t4954;
  double t4959;
  double t4975;
  double t4998;
  double t4076;
  double t4077;
  double t4102;
  double t4141;
  double t4162;
  double t4176;
  double t4359;
  double t2590;
  double t2736;
  double t2789;
  double t2856;
  double t2857;
  double t1426;
  double t1538;
  double t1715;
  double t1780;
  double t1786;
  double t1822;
  double t5221;
  double t2862;
  double t4750;
  double t4754;
  double t4766;
  double t4769;
  double t4770;
  double t3594;
  double t3605;
  double t3719;
  double t3744;
  double t3789;
  double t3879;
  double t3881;
  double t4986;
  double t4990;
  double t5001;
  double t5005;
  double t5008;
  double t5010;
  double t5013;
  double t4054;
  double t4105;
  double t4121;
  double t4188;
  double t4212;
  double t5159;
  double t5177;
  double t5179;
  double t5181;
  double t5205;
  double t4423;
  double t5243;
  double t5668;
  double t5698;
  double t5699;
  double t5717;
  double t5728;
  double t5634;
  double t5636;
  double t5638;
  double t4583;
  double t4587;
  double t4611;
  double t4640;
  double t4646;
  double t4848;
  double t4856;
  double t2989;
  double t2995;
  double t5320;
  double t5321;
  double t5339;
  double t5341;
  double t5349;
  double t5049;
  double t5068;
  double t5116;
  double t5117;
  double t5148;
  double t3998;
  double t4012;
  double t4026;
  double t4030;
  double t4037;
  double t5441;
  double t5465;
  double t5471;
  double t5473;
  double t5489;
  double t5494;
  double t5510;
  double t5512;
  double t4521;
  double t5247;
  double t5732;
  double t5954;
  double t5955;
  double t5962;
  double t6071;
  double t6076;
  double t822;
  t276 = Cos(var1[6]);
  t103 = Cos(var1[7]);
  t108 = Sin(var1[6]);
  t279 = Sin(var1[7]);
  t4 = Sin(var1[2]);
  t461 = Cos(var1[2]);
  t921 = -1.*t103;
  t976 = 1. + t921;
  t996 = -0.9063*t976;
  t1011 = -1.0567*t103;
  t1031 = t996 + t1011;
  t246 = -1.*t103*t108;
  t336 = -1.*t276*t279;
  t363 = t246 + t336;
  t1316 = t276*t103;
  t1330 = -1.*t108*t279;
  t1351 = t1316 + t1330;
  t1496 = t461*t363;
  t1503 = -1.*t4*t1351;
  t1512 = t1496 + t1503;
  t905 = 0.4999*t103;
  t1067 = t1031*t103;
  t372 = -1.*t4*t363;
  t511 = -1.*t276*t103;
  t643 = t108*t279;
  t651 = t511 + t643;
  t785 = t461*t651;
  t801 = t372 + t785;
  t1196 = t103*t108;
  t1205 = t276*t279;
  t1217 = t1196 + t1205;
  t1223 = -1.*t4*t1217;
  t1366 = t461*t1351;
  t1376 = t1223 + t1366;
  t1895 = t4*t363;
  t1901 = t1895 + t1366;
  t1943 = -1.*t461*t1351;
  t1948 = t372 + t1943;
  t1957 = t461*t1217;
  t1984 = t4*t1351;
  t1985 = t1957 + t1984;
  t2065 = t4*t651;
  t2066 = t1496 + t2065;
  t2316 = 0.4999*t108;
  t2318 = t1031*t108;
  t2386 = -0.15039999999999998*t276*t279;
  t2399 = t2316 + t2318 + t2386;
  t2437 = -1.*t276;
  t2504 = 1. + t2437;
  t2513 = -0.4999*t2504;
  t2515 = t276*t1031;
  t2536 = 0.15039999999999998*t108*t279;
  t2546 = t2513 + t2515 + t2536;
  t2613 = 0.15039999999999998*t103*t108;
  t2618 = 0.15039999999999998*t276*t279;
  t2633 = t2613 + t2618;
  t2666 = -0.15039999999999998*t276*t103;
  t2670 = t2666 + t2536;
  t1111 = Power(t103,2);
  t1127 = 0.15039999999999998*t1111;
  t1162 = t905 + t1067 + t1127;
  t1733 = Power(t279,2);
  t1739 = -0.15039999999999998*t1733;
  t1744 = t905 + t1067 + t1739;
  t2927 = t4*t1217;
  t2932 = t2927 + t785;
  t1443 = -0.4999*t279;
  t1455 = -1.*t1031*t279;
  t1471 = -0.15039999999999998*t103*t279;
  t1489 = t1443 + t1455 + t1471;
  t1551 = 0.4999*t279;
  t1557 = t1031*t279;
  t1696 = 0.15039999999999998*t103*t279;
  t1710 = t1551 + t1557 + t1696;
  t2022 = -1.*t4*t651;
  t2753 = t2399*t1217;
  t2773 = t1351*t2546;
  t2787 = t2753 + t2773;
  t2402 = -1.*t2399*t1351;
  t2574 = -1.*t363*t2546;
  t2581 = t2402 + t2574;
  t2591 = t2399*t1351;
  t2635 = t363*t2546;
  t2634 = t2633*t1351;
  t2678 = t1217*t2670;
  t2711 = t2591 + t2634 + t2635 + t2678;
  t3554 = 0.4999*t276;
  t3558 = t3554 + t2515 + t2536;
  t3530 = -0.4999*t108;
  t3532 = -1.*t1031*t108;
  t3539 = t3530 + t3532 + t2618;
  t2791 = -1.*t363*t2399;
  t2851 = -1.*t2546*t651;
  t2815 = -1.*t363*t2633;
  t2835 = -1.*t1351*t2670;
  t2852 = t2791 + t2815 + t2835 + t2851;
  t3632 = 0.15039999999999998*t276*t103;
  t3640 = -0.15039999999999998*t108*t279;
  t3646 = t3632 + t3640;
  t2947 = 0.26996047999999995*var2[7]*t2932;
  t2971 = 3.5899*t1162*t1901;
  t2975 = 3.5899*t1744*t2932;
  t2993 = 3.5899*t1710*t2066;
  t3009 = 7.1798*t1901*t1512;
  t3024 = 3.5899*t1985*t801;
  t3049 = 3.5899*t1512*t2932;
  t3058 = t1957 + t2022;
  t3061 = 3.5899*t1901*t3058;
  t3147 = 3.5899*t1376*t2066;
  t3162 = 7.1798*t801*t2066;
  t3250 = t3009 + t3024 + t3049 + t3061 + t3147 + t3162;
  t3317 = -0.5*var2[1]*t3250;
  t3358 = Power(t1901,2);
  t3400 = 7.1798*t3358;
  t3419 = 7.1798*t1901*t2932;
  t3434 = 7.1798*t1985*t2066;
  t3449 = Power(t2066,2);
  t3504 = 7.1798*t3449;
  t3512 = t3400 + t3419 + t3434 + t3504;
  t3515 = -0.5*var2[0]*t3512;
  t3525 = 3.5899*t2787*t2932;
  t3527 = 3.5899*t2581*t2066;
  t3631 = -1.*t2633*t1351;
  t3648 = -1.*t363*t3646;
  t3662 = -1.*t1217*t2546;
  t3693 = -1.*t2399*t651;
  t3794 = t363*t2399;
  t3817 = t2633*t1217;
  t3822 = t1351*t3646;
  t3840 = t2546*t651;
  t4441 = 3.5899*t1489*t1901;
  t4449 = 3.5899*t1710*t1901;
  t4453 = 3.5899*t1162*t1985;
  t4484 = 3.5899*t1744*t2066;
  t4501 = t4441 + t4449 + t4453 + t4484;
  t4261 = 7.1798*t1901*t1985;
  t4265 = 7.1798*t1901*t2066;
  t4274 = t4261 + t4265;
  t4305 = 3.5899*t1901*t1376;
  t4318 = 3.5899*t1512*t1985;
  t4326 = 3.5899*t1901*t801;
  t4334 = 3.5899*t1512*t2066;
  t4352 = t4305 + t4318 + t4326 + t4334;
  t4366 = 3.5899*t1901*t2581;
  t4371 = 3.5899*t1901*t2711;
  t4373 = 3.5899*t2787*t2066;
  t4403 = 3.5899*t1985*t2852;
  t4419 = t4366 + t4371 + t4373 + t4403;
  t2016 = -1.*t461*t363;
  t2039 = t2016 + t2022;
  t1917 = -1.*t461*t1217;
  t1923 = t1917 + t1503;
  t1831 = 7.1798*t1376*t1512;
  t1942 = 3.5899*t1901*t1923;
  t1986 = 3.5899*t1948*t1985;
  t1997 = 7.1798*t1512*t801;
  t2053 = 3.5899*t1901*t2039;
  t2100 = 3.5899*t1948*t2066;
  t2134 = t1831 + t1942 + t1986 + t1997 + t2053 + t2100;
  t3549 = t3539*t1351;
  t3585 = t1217*t3558;
  t3590 = t2591 + t3549 + t2635 + t3585;
  t3672 = -1.*t363*t3558;
  t3680 = -1.*t363*t2670;
  t3696 = -1.*t3539*t651;
  t3706 = -1.*t2633*t651;
  t3712 = t3631 + t3648 + t3662 + t3672 + t3680 + t3693 + t3696 + t3706;
  t3727 = -1.*t363*t3539;
  t3731 = -1.*t1351*t3558;
  t3739 = t2791 + t3727 + t3731 + t2851;
  t3798 = t363*t3539;
  t3811 = t363*t2633;
  t3829 = t1351*t3558;
  t3839 = t1351*t2670;
  t3857 = t3794 + t3798 + t3811 + t3817 + t3822 + t3829 + t3839 + t3840;
  t4831 = 0.26996047999999995*var2[7]*t3058;
  t3904 = -0.4999*t103;
  t3919 = -1.*t1031*t103;
  t3995 = -0.15039999999999998*t1111;
  t3997 = 0. + t3904 + t3919 + t3995;
  t4840 = 3.5899*t1162*t1512;
  t4007 = 0. + t905 + t1067 + t1127;
  t4851 = 3.5899*t1710*t801;
  t4852 = 3.5899*t1744*t3058;
  t4861 = Power(t1512,2);
  t4876 = 7.1798*t4861;
  t4906 = 7.1798*t1376*t801;
  t4918 = Power(t801,2);
  t4930 = 7.1798*t4918;
  t4934 = 7.1798*t1512*t3058;
  t4938 = t4876 + t4906 + t4930 + t4934;
  t4954 = -0.5*var2[1]*t4938;
  t4959 = -0.5*var2[0]*t3250;
  t4975 = 3.5899*t2581*t801;
  t4998 = 3.5899*t2787*t3058;
  t4076 = -2.*t363*t2670;
  t4077 = -2.*t2633*t651;
  t4102 = t3631 + t3648 + t3662 + t4076 + t3693 + t4077;
  t4141 = 2.*t363*t2633;
  t4162 = 2.*t1351*t2670;
  t4176 = t3794 + t4141 + t3817 + t3822 + t4162 + t3840;
  t4359 = -0.5*var2[7]*t4352;
  t2590 = 3.5899*t1512*t2581;
  t2736 = 3.5899*t1512*t2711;
  t2789 = 3.5899*t2787*t801;
  t2856 = 3.5899*t1376*t2852;
  t2857 = t2590 + t2736 + t2789 + t2856;
  t1426 = 3.5899*t1162*t1376;
  t1538 = 3.5899*t1489*t1512;
  t1715 = 3.5899*t1710*t1512;
  t1780 = 3.5899*t1744*t801;
  t1786 = t1426 + t1538 + t1715 + t1780;
  t1822 = -0.5*var2[6]*t1786;
  t5221 = t1831 + t1997;
  t2862 = -0.5*var2[2]*t2857;
  t4750 = 3.5899*t1948*t2581;
  t4754 = 3.5899*t1948*t2711;
  t4766 = 3.5899*t2787*t2039;
  t4769 = 3.5899*t1923*t2852;
  t4770 = t4750 + t4754 + t4766 + t4769;
  t3594 = 3.5899*t3590*t2066;
  t3605 = 3.5899*t2711*t2066;
  t3719 = 3.5899*t1985*t3712;
  t3744 = 3.5899*t1901*t3739;
  t3789 = 3.5899*t1901*t2852;
  t3879 = 3.5899*t1901*t3857;
  t3881 = t3525 + t3527 + t3594 + t3605 + t3719 + t3744 + t3789 + t3879;
  t4986 = 3.5899*t3590*t801;
  t4990 = 3.5899*t2711*t801;
  t5001 = 3.5899*t1376*t3712;
  t5005 = 3.5899*t1512*t3739;
  t5008 = 3.5899*t1512*t2852;
  t5010 = 3.5899*t1512*t3857;
  t5013 = t4975 + t4986 + t4990 + t4998 + t5001 + t5005 + t5008 + t5010;
  t4054 = 7.1798*t2711*t2066;
  t4105 = 3.5899*t1985*t4102;
  t4121 = 7.1798*t1901*t2852;
  t4188 = 3.5899*t1901*t4176;
  t4212 = t3525 + t3527 + t4054 + t4105 + t4121 + t4188;
  t5159 = 7.1798*t2711*t801;
  t5177 = 3.5899*t1376*t4102;
  t5179 = 7.1798*t1512*t2852;
  t5181 = 3.5899*t1512*t4176;
  t5205 = t4975 + t5159 + t4998 + t5177 + t5179 + t5181;
  t4423 = -0.5*var2[7]*t4419;
  t5243 = -0.5*var2[7]*t2857;
  t5668 = 3.5899*t1162*t2581;
  t5698 = 3.5899*t1489*t2787;
  t5699 = 3.5899*t1744*t2711;
  t5717 = 3.5899*t1710*t2852;
  t5728 = t5668 + t5698 + t5699 + t5717;
  t5634 = 7.1798*t2787*t2711;
  t5636 = 7.1798*t2581*t2852;
  t5638 = t5634 + t5636;
  t4583 = 3.5899*t1489*t1948;
  t4587 = 3.5899*t1710*t1948;
  t4611 = 3.5899*t1162*t1923;
  t4640 = 3.5899*t1744*t2039;
  t4646 = t4583 + t4587 + t4611 + t4640;
  t4848 = 3.5899*t1489*t801;
  t4856 = t4840 + t4848 + t4851 + t4852;
  t2989 = 3.5899*t1489*t2066;
  t2995 = t2971 + t2975 + t2989 + t2993;
  t5320 = 3.5899*t1489*t3590;
  t5321 = 3.5899*t1710*t3712;
  t5339 = 3.5899*t1162*t3739;
  t5341 = 3.5899*t1744*t3857;
  t5349 = t5320 + t5321 + t5339 + t5341;
  t5049 = 3.5899*t1489*t1376;
  t5068 = 3.5899*t3997*t1512;
  t5116 = 3.5899*t4007*t1512;
  t5117 = 7.1798*t1489*t801;
  t5148 = t5049 + t5068 + t4840 + t5116 + t5117 + t4851 + t4852;
  t3998 = 3.5899*t3997*t1901;
  t4012 = 3.5899*t4007*t1901;
  t4026 = 3.5899*t1489*t1985;
  t4030 = 7.1798*t1489*t2066;
  t4037 = t3998 + t2971 + t4012 + t4026 + t2975 + t4030 + t2993;
  t5441 = 3.5899*t1489*t2581;
  t5465 = 3.5899*t3997*t2787;
  t5471 = 7.1798*t1489*t2711;
  t5473 = 3.5899*t1710*t4102;
  t5489 = 3.5899*t1162*t2852;
  t5494 = 3.5899*t4007*t2852;
  t5510 = 3.5899*t1744*t4176;
  t5512 = t5441 + t5465 + t5471 + t5473 + t5489 + t5494 + t5510;
  t4521 = -0.5*var2[7]*t4501;
  t5247 = -0.5*var2[7]*t1786;
  t5732 = -0.5*var2[7]*t5728;
  t5954 = 7.1798*t1162*t1710;
  t5955 = 7.1798*t1489*t1744;
  t5962 = t5954 + t5955;
  t6071 = 0.26996047999999995*var2[0]*t2932;
  t6076 = 0.26996047999999995*var2[1]*t3058;
  t822 = 0.26996047999999995*var2[7]*t801;
  p_output1[0]=(t1822 + t2862 + t822 - 0.5*(7.1798*t1376*t1901 + 7.1798*t1512*t1985 + 7.1798*t1512*t2066 + 7.1798*t1901*t801)*var2[0] - 0.5*t2134*var2[1])*var2[7];
  p_output1[1]=(t2947 + t3317 + t3515 - 0.5*t3881*var2[2] - 0.5*t2995*var2[6])*var2[7];
  p_output1[2]=(t2947 + t3317 + t3515 - 0.5*t4212*var2[2] - 0.5*t4037*var2[6])*var2[7];
  p_output1[3]=-0.5*t4274*var2[7];
  p_output1[4]=t4359;
  p_output1[5]=t4423;
  p_output1[6]=t4521;
  p_output1[7]=-0.5*t4274*var2[0] - 0.5*t4352*var2[1] - 0.5*t4419*var2[2] - 0.5*t4501*var2[6] + 0.5399209599999999*t2066*var2[7];
  p_output1[8]=var2[7]*(-0.5*t2134*var2[0] - 0.5*(7.1798*t1512*t1923 + 7.1798*t1376*t1948 + 7.1798*t1512*t2039 + 7.1798*t1948*t801)*var2[1] - 0.5*t4770*var2[2] - 0.5*t4646*var2[6] + 0.26996047999999995*t2039*var2[7]);
  p_output1[9]=(t4831 + t4954 + t4959 - 0.5*t5013*var2[2] - 0.5*t4856*var2[6])*var2[7];
  p_output1[10]=(t4831 + t4954 + t4959 - 0.5*t5205*var2[2] - 0.5*t5148*var2[6])*var2[7];
  p_output1[11]=t4359;
  p_output1[12]=-0.5*t5221*var2[7];
  p_output1[13]=t5243;
  p_output1[14]=t5247;
  p_output1[15]=t1822 + t2862 - 0.5*t4352*var2[0] - 0.5*t5221*var2[1] + 0.5399209599999999*t801*var2[7];
  p_output1[16]=(-0.5*t2857*var2[0] - 0.5*t4770*var2[1])*var2[7];
  p_output1[17]=var2[7]*(-0.5*t3881*var2[0] - 0.5*t5013*var2[1] - 0.5*(7.1798*t2711*t3590 + 7.1798*t2581*t3712 + 7.1798*t2852*t3739 + 7.1798*t2787*t3857)*var2[2] - 0.5*t5349*var2[6] + 0.26996047999999995*t3857*var2[7]);
  p_output1[18]=var2[7]*(-0.5*t4212*var2[0] - 0.5*t5205*var2[1] - 0.5*(7.1798*Power(t2711,2) + 7.1798*Power(t2852,2) + 7.1798*t2581*t4102 + 7.1798*t2787*t4176)*var2[2] - 0.5*t5512*var2[6] + 0.26996047999999995*t4176*var2[7]);
  p_output1[19]=t4423;
  p_output1[20]=t5243;
  p_output1[21]=-0.5*t5638*var2[7];
  p_output1[22]=t5732;
  p_output1[23]=-0.5*t4419*var2[0] - 0.5*t2857*var2[1] - 0.5*t5638*var2[2] - 0.5*t5728*var2[6] + 0.5399209599999999*t2711*var2[7];
  p_output1[24]=(-0.5*t1786*var2[0] - 0.5*t4646*var2[1])*var2[7];
  p_output1[25]=(-0.5*t2995*var2[0] - 0.5*t4856*var2[1] - 0.5*t5349*var2[2])*var2[7];
  p_output1[26]=var2[7]*(-0.5*t4037*var2[0] - 0.5*t5148*var2[1] - 0.5*t5512*var2[2] - 0.5*(7.1798*Power(t1489,2) + 7.1798*t1489*t1710 + 7.1798*t1744*t3997 + 7.1798*t1162*t4007)*var2[6] + 0.26996047999999995*t3997*var2[7]);
  p_output1[27]=t4521;
  p_output1[28]=t5247;
  p_output1[29]=t5732;
  p_output1[30]=-0.5*t5962*var2[7];
  p_output1[31]=-0.5*t4501*var2[0] - 0.5*t1786*var2[1] - 0.5*t5728*var2[2] - 0.5*t5962*var2[6] + 0.5399209599999999*t1489*var2[7];
  p_output1[32]=(0.26996047999999995*t801*var2[0] + 0.26996047999999995*t2039*var2[1])*var2[7];
  p_output1[33]=(t6071 + t6076 + 0.26996047999999995*t3857*var2[2])*var2[7];
  p_output1[34]=(t6071 + t6076 + 0.26996047999999995*t4176*var2[2] + 0.26996047999999995*t3997*var2[6])*var2[7];
  p_output1[35]=0.26996047999999995*t2066*var2[7];
  p_output1[36]=t822;
  p_output1[37]=0.26996047999999995*t2711*var2[7];
  p_output1[38]=0.26996047999999995*t1489*var2[7];
  p_output1[39]=0.26996047999999995*t2066*var2[0] + 0.26996047999999995*t801*var2[1] + 0.26996047999999995*t2711*var2[2] + 0.26996047999999995*t1489*var2[6];
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

#include "J_Ce2_vec_L6_J8_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L6_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

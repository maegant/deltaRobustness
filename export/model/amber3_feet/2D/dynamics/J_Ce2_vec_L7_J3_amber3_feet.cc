/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:27:24 GMT-08:00
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
  double t482;
  double t166;
  double t302;
  double t601;
  double t711;
  double t416;
  double t641;
  double t643;
  double t100;
  double t785;
  double t801;
  double t822;
  double t914;
  double t867;
  double t90;
  double t1367;
  double t1372;
  double t1376;
  double t1127;
  double t1162;
  double t1196;
  double t1205;
  double t1221;
  double t1226;
  double t659;
  double t868;
  double t905;
  double t929;
  double t991;
  double t996;
  double t1011;
  double t1043;
  double t1388;
  double t1418;
  double t1426;
  double t1428;
  double t1431;
  double t1438;
  double t1443;
  double t1445;
  double t1744;
  double t1749;
  double t1780;
  double t1793;
  double t1831;
  double t1876;
  double t1683;
  double t1696;
  double t1710;
  double t1715;
  double t1986;
  double t1997;
  double t2020;
  double t2065;
  double t2066;
  double t2100;
  double t2221;
  double t2245;
  double t2307;
  double t2144;
  double t2149;
  double t2173;
  double t2618;
  double t2627;
  double t2630;
  double t2634;
  double t2635;
  double t2666;
  double t2590;
  double t2591;
  double t2602;
  double t2607;
  double t1111;
  double t1302;
  double t1316;
  double t1366;
  double t1489;
  double t1496;
  double t1512;
  double t1538;
  double t1551;
  double t2840;
  double t2849;
  double t2852;
  double t2856;
  double t1733;
  double t1739;
  double t1895;
  double t1901;
  double t2891;
  double t2927;
  double t2932;
  double t2971;
  double t2975;
  double t1942;
  double t1948;
  double t1952;
  double t1957;
  double t2404;
  double t2426;
  double t3061;
  double t3081;
  double t3245;
  double t3301;
  double t2613;
  double t2678;
  double t2686;
  double t2711;
  double t2736;
  double t2748;
  double t3632;
  double t3640;
  double t3712;
  double t3719;
  double t3590;
  double t3594;
  double t3900;
  double t3904;
  double t3940;
  double t4223;
  double t4229;
  double t4249;
  double t4260;
  double t4121;
  double t4176;
  double t3942;
  double t3995;
  double t3997;
  double t3998;
  double t4007;
  double t4012;
  double t4026;
  double t4544;
  double t4548;
  double t4566;
  double t4769;
  double t4775;
  double t4804;
  double t4718;
  double t4735;
  double t4750;
  double t3893;
  double t3898;
  double t4986;
  double t4990;
  double t4030;
  double t4054;
  double t4102;
  double t4105;
  double t4265;
  double t4318;
  double t5177;
  double t5179;
  double t5181;
  double t5213;
  double t5215;
  double t5219;
  double t4334;
  double t4373;
  double t4441;
  double t4449;
  double t4453;
  double t4484;
  double t4522;
  double t4529;
  double t4536;
  double t4577;
  double t4583;
  double t4587;
  double t4611;
  double t4640;
  double t4666;
  double t4667;
  double t4671;
  double t4684;
  double t4688;
  double t4695;
  double t4696;
  double t4766;
  double t4851;
  double t5316;
  double t5320;
  double t5321;
  double t5341;
  double t5345;
  double t5355;
  double t4861;
  double t4876;
  double t2039;
  double t2309;
  double t5441;
  double t5465;
  double t5471;
  double t5489;
  double t5494;
  double t5510;
  double t5519;
  double t5520;
  double t5582;
  double t5595;
  double t5597;
  double t5544;
  double t5552;
  double t5559;
  double t2513;
  double t2515;
  double t2386;
  double t2415;
  double t2333;
  double t2420;
  double t2423;
  double t2531;
  double t2536;
  double t3400;
  double t3419;
  double t3147;
  double t3153;
  double t3058;
  double t3082;
  double t3162;
  double t3358;
  double t3434;
  double t3449;
  double t3452;
  double t3585;
  double t3605;
  double t3732;
  double t3739;
  double t3744;
  double t3794;
  double t3798;
  double t3811;
  double t3817;
  double t3822;
  double t4188;
  double t4261;
  double t4269;
  double t4305;
  double t4326;
  double t4366;
  double t4754;
  double t4812;
  double t4840;
  double t4852;
  double t4859;
  double t4906;
  double t6076;
  double t6077;
  double t4998;
  double t5001;
  double t5005;
  double t5008;
  double t5010;
  double t5019;
  double t5033;
  double t5049;
  double t5068;
  double t5116;
  double t6082;
  double t6098;
  double t5196;
  double t5228;
  double t5248;
  double t5260;
  double t5295;
  double t5301;
  double t6129;
  double t6142;
  double t6147;
  double t6154;
  double t6161;
  double t6165;
  double t6172;
  double t6173;
  double t6174;
  double t5339;
  double t5357;
  double t5366;
  double t6178;
  double t5372;
  double t5373;
  double t5388;
  double t5542;
  double t1067;
  double t1471;
  double t1557;
  double t1620;
  double t1645;
  double t1923;
  double t1962;
  double t1984;
  double t1985;
  double t6294;
  double t6301;
  double t6305;
  double t2697;
  double t2753;
  double t2754;
  double t5862;
  double t5878;
  double t5881;
  double t3554;
  double t3775;
  double t3789;
  double t3829;
  double t3839;
  double t5985;
  double t5993;
  double t6005;
  double t6011;
  double t6053;
  double t6177;
  double t6181;
  double t6184;
  double t4848;
  double t4918;
  double t4930;
  double t6238;
  double t6245;
  double t6256;
  double t5369;
  double t5403;
  double t5404;
  double t5634;
  double t5636;
  double t5639;
  double t2773;
  double t5736;
  double t5740;
  double t5741;
  double t3024;
  double t3032;
  double t3049;
  double t5940;
  double t5942;
  double t5944;
  double t6101;
  double t6115;
  double t6131;
  double t4290;
  double t4371;
  double t4403;
  double t6223;
  double t6229;
  double t6234;
  double t5254;
  double t5306;
  double t5308;
  double t5652;
  double t6327;
  double t5698;
  double t5699;
  double t5717;
  double t2989;
  double t2993;
  double t2999;
  double t5916;
  double t5920;
  double t5923;
  double t6084;
  double t4039;
  double t6208;
  double t6213;
  double t6220;
  double t5041;
  double t5117;
  double t5158;
  double t5662;
  double t6329;
  double t6589;
  double t6590;
  double t6593;
  double t6599;
  double t5668;
  double t6330;
  t482 = Cos(var1[7]);
  t166 = Cos(var1[8]);
  t302 = Sin(var1[7]);
  t601 = Sin(var1[8]);
  t711 = Cos(var1[6]);
  t416 = t166*t302;
  t641 = t482*t601;
  t643 = t416 + t641;
  t100 = Sin(var1[6]);
  t785 = t482*t166;
  t801 = -1.*t302*t601;
  t822 = t785 + t801;
  t914 = Cos(var1[2]);
  t867 = t711*t822;
  t90 = Sin(var1[2]);
  t1367 = -1.*t166*t302;
  t1372 = -1.*t482*t601;
  t1376 = t1367 + t1372;
  t1127 = -1.*t166;
  t1162 = 1. + t1127;
  t1196 = -1.3127*t1162;
  t1205 = -1.3127*t166;
  t1221 = -0.06*t601;
  t1226 = t1196 + t1205 + t1221;
  t659 = -1.*t100*t643;
  t868 = t659 + t867;
  t905 = -1.*t90*t868;
  t929 = t711*t643;
  t991 = t100*t822;
  t996 = t929 + t991;
  t1011 = -1.*t914*t996;
  t1043 = t905 + t1011;
  t1388 = t100*t1376;
  t1418 = t1388 + t867;
  t1426 = -1.*t914*t1418;
  t1428 = t711*t1376;
  t1431 = -1.*t100*t822;
  t1438 = t1428 + t1431;
  t1443 = -1.*t90*t1438;
  t1445 = t1426 + t1443;
  t1744 = -1.*t482;
  t1749 = 1. + t1744;
  t1780 = -0.9063*t1749;
  t1793 = -0.06*t166*t302;
  t1831 = t482*t1226;
  t1876 = t1780 + t1793 + t1831;
  t1683 = 0.06*t482*t166;
  t1696 = 0.9063*t302;
  t1710 = t302*t1226;
  t1715 = t1683 + t1696 + t1710;
  t1986 = -1.*t90*t1418;
  t1997 = t914*t1438;
  t2020 = t1986 + t1997;
  t2065 = t914*t1418;
  t2066 = t90*t1438;
  t2100 = t2065 + t2066;
  t2221 = t914*t868;
  t2245 = -1.*t90*t996;
  t2307 = t2221 + t2245;
  t2144 = t90*t868;
  t2149 = t914*t996;
  t2173 = t2144 + t2149;
  t2618 = -1.*t711;
  t2627 = 1. + t2618;
  t2630 = -0.4999*t2627;
  t2634 = t711*t1876;
  t2635 = -1.*t100*t1715;
  t2666 = t2630 + t2634 + t2635;
  t2590 = 0.4999*t100;
  t2591 = t100*t1876;
  t2602 = t711*t1715;
  t2607 = t2590 + t2591 + t2602;
  t1111 = 0.9063*t166;
  t1302 = t166*t1226;
  t1316 = 0.06*t166*t601;
  t1366 = t1111 + t1302 + t1316;
  t1489 = Power(t166,2);
  t1496 = -0.06*t1489;
  t1512 = 0.9063*t601;
  t1538 = t1226*t601;
  t1551 = t1496 + t1512 + t1538;
  t2840 = -1.*t711*t643;
  t2849 = t2840 + t1431;
  t2852 = t914*t2849;
  t2856 = t905 + t2852;
  t1733 = t1715*t643;
  t1739 = 0.4999*t822;
  t1895 = t1876*t822;
  t1901 = t1733 + t1739 + t1895;
  t2891 = -1.*t100*t1376;
  t2927 = -1.*t711*t822;
  t2932 = t2891 + t2927;
  t2971 = t914*t2932;
  t2975 = t2971 + t1443;
  t1942 = -1.*t1876*t1376;
  t1948 = 0.4999*t643;
  t1952 = -1.*t1715*t822;
  t1957 = t1942 + t1948 + t1952;
  t2404 = -1.*t914*t1438;
  t2426 = -1.*t914*t868;
  t3061 = t90*t2932;
  t3081 = t3061 + t1997;
  t3245 = t90*t2849;
  t3301 = t2221 + t3245;
  t2613 = -1.*t2607*t1418;
  t2678 = -1.*t2666*t1438;
  t2686 = t2613 + t2678;
  t2711 = t2666*t868;
  t2736 = t2607*t996;
  t2748 = t2711 + t2736;
  t3632 = -0.4999*t100;
  t3640 = -1.*t100*t1876;
  t3712 = -1.*t711*t1715;
  t3719 = t3632 + t3640 + t3712;
  t3590 = 0.4999*t711;
  t3594 = t3590 + t2634 + t2635;
  t3900 = -1.*t482*t166;
  t3904 = t302*t601;
  t3940 = t3900 + t3904;
  t4223 = -0.06*t482*t166;
  t4229 = -0.9063*t302;
  t4249 = -1.*t302*t1226;
  t4260 = t4223 + t4229 + t4249;
  t4121 = 0.9063*t482;
  t4176 = t4121 + t1793 + t1831;
  t3942 = t711*t3940;
  t3995 = t2891 + t3942;
  t3997 = t914*t3995;
  t3998 = t100*t3940;
  t4007 = t1428 + t3998;
  t4012 = -1.*t90*t4007;
  t4026 = t3997 + t4012;
  t4544 = t90*t3995;
  t4548 = t914*t4007;
  t4566 = t4544 + t4548;
  t4769 = t711*t4176;
  t4775 = t100*t4260;
  t4804 = t4769 + t4775;
  t4718 = -1.*t100*t4176;
  t4735 = t711*t4260;
  t4750 = t4718 + t4735;
  t3893 = 0.03428571*var2[8]*t2020;
  t3898 = 1.142857*t1551*t2020;
  t4986 = -0.06*t166;
  t4990 = 0. + t4986;
  t4030 = 1.142857*t1366*t4026;
  t4054 = 1.142857*t1957*t2020;
  t4102 = 0.4999*t1376;
  t4105 = t1876*t1376;
  t4265 = t1715*t822;
  t4318 = -1.*t1715*t1376;
  t5177 = t4990*t302;
  t5179 = -0.06*t482*t601;
  t5181 = t5177 + t5179;
  t5213 = t482*t4990;
  t5215 = 0.06*t302*t601;
  t5219 = t5213 + t5215;
  t4334 = -1.*t1876*t3940;
  t4373 = 1.142857*t1901*t4026;
  t4441 = 1.142857*t2100*t1043;
  t4449 = 1.142857*t1445*t2173;
  t4453 = 2.285714*t2020*t2307;
  t4484 = -1.*t90*t3995;
  t4522 = -1.*t914*t4007;
  t4529 = t4484 + t4522;
  t4536 = 1.142857*t2100*t4529;
  t4577 = 1.142857*t1445*t4566;
  t4583 = 2.285714*t2020*t4026;
  t4587 = t4441 + t4449 + t4453 + t4536 + t4577 + t4583;
  t4611 = -0.5*var2[1]*t4587;
  t4640 = 2.285714*t2020*t2173;
  t4666 = 2.285714*t2100*t2307;
  t4667 = 2.285714*t2020*t4566;
  t4671 = 2.285714*t2100*t4026;
  t4684 = t4640 + t4666 + t4667 + t4671;
  t4688 = -0.5*var2[0]*t4684;
  t4695 = 1.142857*t2020*t2686;
  t4696 = t2607*t1418;
  t4766 = t2666*t1438;
  t4851 = 1.142857*t2748*t4026;
  t5316 = -1.*t100*t5181;
  t5320 = t711*t5219;
  t5321 = t5316 + t5320;
  t5341 = t711*t5181;
  t5345 = t100*t5219;
  t5355 = t5341 + t5345;
  t4861 = -1.*t2666*t3995;
  t4876 = -1.*t2607*t4007;
  t2039 = Power(t2020,2);
  t2309 = Power(t2307,2);
  t5441 = 2.285714*t2020*t2100;
  t5465 = 2.285714*t2173*t2307;
  t5471 = t5441 + t5465;
  t5489 = 1.142857*t2039;
  t5494 = 1.142857*t1445*t2100;
  t5510 = 1.142857*t1043*t2173;
  t5519 = 1.142857*t2309;
  t5520 = t5489 + t5494 + t5510 + t5519;
  t5582 = 1.142857*t1901*t2020;
  t5595 = 1.142857*t1957*t2307;
  t5597 = t5582 + t5595;
  t5544 = 1.142857*t1366*t2020;
  t5552 = 1.142857*t1551*t2307;
  t5559 = t5544 + t5552;
  t2513 = t90*t996;
  t2515 = t2426 + t2513;
  t2386 = t90*t1418;
  t2415 = t2386 + t2404;
  t2333 = 3.428571*t2020*t1445;
  t2420 = 1.142857*t2415*t2100;
  t2423 = 3.428571*t1043*t2307;
  t2531 = 1.142857*t2173*t2515;
  t2536 = t2333 + t2420 + t2423 + t2531;
  t3400 = -1.*t90*t2849;
  t3419 = t2426 + t3400;
  t3147 = -1.*t90*t2932;
  t3153 = t3147 + t2404;
  t3058 = 2.285714*t2020*t2975;
  t3082 = 1.142857*t3081*t1445;
  t3162 = 1.142857*t3153*t2100;
  t3358 = 1.142857*t3301*t1043;
  t3434 = 1.142857*t3419*t2173;
  t3449 = 2.285714*t2856*t2307;
  t3452 = t3058 + t3082 + t3162 + t3358 + t3434 + t3449;
  t3585 = -1.*t2666*t2932;
  t3605 = -1.*t3594*t1418;
  t3732 = -1.*t3719*t1438;
  t3739 = -1.*t2607*t1438;
  t3744 = t3585 + t3605 + t3732 + t3739;
  t3794 = t3719*t868;
  t3798 = t2607*t868;
  t3811 = t2666*t2849;
  t3817 = t3594*t996;
  t3822 = t3794 + t3798 + t3811 + t3817;
  t4188 = t4176*t643;
  t4261 = t4260*t822;
  t4269 = t4102 + t4105 + t4188 + t4261 + t4265;
  t4305 = -1.*t4260*t1376;
  t4326 = -1.*t4176*t822;
  t4366 = t4305 + t4318 + t1739 + t4326 + t4334;
  t4754 = t4750*t868;
  t4812 = t4804*t996;
  t4840 = t4696 + t4754 + t4766 + t4812;
  t4852 = -1.*t4804*t1418;
  t4859 = -1.*t4750*t1438;
  t4906 = t4852 + t4859 + t4861 + t4876;
  t6076 = 0.03428571*var2[8]*t1445;
  t6077 = 1.142857*t1551*t1445;
  t4998 = t4990*t166;
  t5001 = 0.06*t1489;
  t5005 = -0.9063*t601;
  t5008 = -1.*t1226*t601;
  t5010 = Power(t601,2);
  t5019 = -0.06*t5010;
  t5033 = t4998 + t5001 + t5005 + t5008 + t5019;
  t5049 = t4990*t601;
  t5068 = 0.12*t166*t601;
  t5116 = t1111 + t1302 + t5049 + t5068;
  t6082 = 1.142857*t1366*t4529;
  t6098 = 1.142857*t1957*t1445;
  t5196 = t5181*t643;
  t5228 = t822*t5219;
  t5248 = t4102 + t4105 + t5196 + t4265 + t5228;
  t5260 = -1.*t5181*t822;
  t5295 = -1.*t1376*t5219;
  t5301 = t4318 + t1739 + t5260 + t5295 + t4334;
  t6129 = 1.142857*t1901*t4529;
  t6142 = -0.5*var2[0]*t4587;
  t6147 = 2.285714*t2020*t1043;
  t6154 = 2.285714*t1445*t2307;
  t6161 = 2.285714*t2020*t4529;
  t6165 = 2.285714*t1445*t4026;
  t6172 = t6147 + t6154 + t6161 + t6165;
  t6173 = -0.5*var2[1]*t6172;
  t6174 = 1.142857*t1445*t2686;
  t5339 = t868*t5321;
  t5357 = t996*t5355;
  t5366 = t4696 + t4766 + t5339 + t5357;
  t6178 = 1.142857*t2748*t4529;
  t5372 = -1.*t1438*t5321;
  t5373 = -1.*t1418*t5355;
  t5388 = t5372 + t5373 + t4861 + t4876;
  t5542 = -0.5*var2[2]*t5520;
  t1067 = 0.03428571*var2[8]*t1043;
  t1471 = 1.142857*t1366*t1445;
  t1557 = 1.142857*t1551*t1043;
  t1620 = t1471 + t1557;
  t1645 = -0.5*var2[7]*t1620;
  t1923 = 1.142857*t1901*t1445;
  t1962 = 1.142857*t1957*t1043;
  t1984 = t1923 + t1962;
  t1985 = -0.5*var2[6]*t1984;
  t6294 = 2.285714*t2020*t1445;
  t6301 = 2.285714*t1043*t2307;
  t6305 = t6294 + t6301;
  t2697 = 1.142857*t2686*t1043;
  t2753 = 1.142857*t1445*t2748;
  t2754 = t2697 + t2753;
  t5862 = 1.142857*t2686*t2515;
  t5878 = 1.142857*t2415*t2748;
  t5881 = t5862 + t5878;
  t3554 = 1.142857*t2686*t2856;
  t3775 = 1.142857*t3744*t2307;
  t3789 = 1.142857*t2975*t2748;
  t3829 = 1.142857*t2020*t3822;
  t3839 = t3554 + t3775 + t3789 + t3829;
  t5985 = 1.142857*t2686*t3419;
  t5993 = 1.142857*t3744*t1043;
  t6005 = 1.142857*t3153*t2748;
  t6011 = 1.142857*t1445*t3822;
  t6053 = t5985 + t5993 + t6005 + t6011;
  t6177 = 1.142857*t1445*t4840;
  t6181 = 1.142857*t1043*t4906;
  t6184 = t6174 + t6177 + t6178 + t6181;
  t4848 = 1.142857*t2020*t4840;
  t4918 = 1.142857*t2307*t4906;
  t4930 = t4695 + t4848 + t4851 + t4918;
  t6238 = 1.142857*t1445*t5366;
  t6245 = 1.142857*t1043*t5388;
  t6256 = t6174 + t6238 + t6178 + t6245;
  t5369 = 1.142857*t2020*t5366;
  t5403 = 1.142857*t2307*t5388;
  t5404 = t4695 + t5369 + t4851 + t5403;
  t5634 = 1.142857*t2686*t2307;
  t5636 = 1.142857*t2020*t2748;
  t5639 = t5634 + t5636;
  t2773 = -0.5*var2[2]*t2754;
  t5736 = 1.142857*t1901*t2415;
  t5740 = 1.142857*t1957*t2515;
  t5741 = t5736 + t5740;
  t3024 = 1.142857*t1901*t2975;
  t3032 = 1.142857*t1957*t2856;
  t3049 = t3024 + t3032;
  t5940 = 1.142857*t1901*t3153;
  t5942 = 1.142857*t1957*t3419;
  t5944 = t5940 + t5942;
  t6101 = 1.142857*t4269*t1445;
  t6115 = 1.142857*t4366*t1043;
  t6131 = t6098 + t6101 + t6115 + t6129;
  t4290 = 1.142857*t4269*t2020;
  t4371 = 1.142857*t4366*t2307;
  t4403 = t4054 + t4290 + t4371 + t4373;
  t6223 = 1.142857*t5248*t1445;
  t6229 = 1.142857*t5301*t1043;
  t6234 = t6098 + t6223 + t6229 + t6129;
  t5254 = 1.142857*t5248*t2020;
  t5306 = 1.142857*t5301*t2307;
  t5308 = t4054 + t5254 + t5306 + t4373;
  t5652 = -0.5*var2[2]*t5597;
  t6327 = -0.5*var2[2]*t1984;
  t5698 = 1.142857*t1366*t2415;
  t5699 = 1.142857*t1551*t2515;
  t5717 = t5698 + t5699;
  t2989 = 1.142857*t1366*t2975;
  t2993 = 1.142857*t1551*t2856;
  t2999 = t2989 + t2993;
  t5916 = 1.142857*t1366*t3153;
  t5920 = 1.142857*t1551*t3419;
  t5923 = t5916 + t5920;
  t6084 = t6077 + t6082;
  t4039 = t3898 + t4030;
  t6208 = 1.142857*t5033*t1445;
  t6213 = 1.142857*t5116*t1043;
  t6220 = t6077 + t6208 + t6213 + t6082;
  t5041 = 1.142857*t5033*t2020;
  t5117 = 1.142857*t5116*t2307;
  t5158 = t3898 + t5041 + t5117 + t4030;
  t5662 = -0.5*var2[2]*t5559;
  t6329 = -0.5*var2[2]*t1620;
  t6589 = 0.03428571*var2[0]*t2020;
  t6590 = 0.03428571*var2[1]*t1445;
  t6593 = t6589 + t6590;
  t6599 = var2[2]*t6593;
  t5668 = 0.03428571*var2[2]*t2307;
  t6330 = 0.03428571*var2[2]*t1043;
  p_output1[0]=(t1067 + t1645 + t1985 + t2773 - 0.5*(2.285714*t2039 + 2.285714*t1445*t2100 + 2.285714*t1043*t2173 + 2.285714*t2309)*var2[0] - 0.5*t2536*var2[1])*var2[2];
  p_output1[1]=var2[2]*(-0.5*(2.285714*t2173*t2856 + 2.285714*t2100*t2975 + 2.285714*t2020*t3081 + 2.285714*t2307*t3301)*var2[0] - 0.5*t3452*var2[1] - 0.5*t3839*var2[2] - 0.5*t3049*var2[6] - 0.5*t2999*var2[7] + 0.03428571*t2856*var2[8]);
  p_output1[2]=var2[2]*(t3893 + t4611 + t4688 - 0.5*t4930*var2[2] - 0.5*t4403*var2[6] - 0.5*t4039*var2[7]);
  p_output1[3]=var2[2]*(t3893 + t4611 + t4688 - 0.5*t5404*var2[2] - 0.5*t5308*var2[6] - 0.5*t5158*var2[7]);
  p_output1[4]=-0.5*t5471*var2[2];
  p_output1[5]=t5542;
  p_output1[6]=-0.5*t5471*var2[0] - 0.5*t5520*var2[1] - 1.*t5639*var2[2] - 0.5*t5597*var2[6] - 0.5*t5559*var2[7] + 0.03428571*t2307*var2[8];
  p_output1[7]=t5652;
  p_output1[8]=t5662;
  p_output1[9]=t5668;
  p_output1[10]=var2[2]*(-0.5*t2536*var2[0] - 0.5*(2.285714*Power(t1043,2) + 2.285714*Power(t1445,2) + 2.285714*t2020*t2415 + 2.285714*t2307*t2515)*var2[1] - 0.5*t5881*var2[2] - 0.5*t5741*var2[6] - 0.5*t5717*var2[7] + 0.03428571*t2515*var2[8]);
  p_output1[11]=var2[2]*(-0.5*t3452*var2[0] - 0.5*(2.285714*t1043*t2856 + 2.285714*t1445*t2975 + 2.285714*t2020*t3153 + 2.285714*t2307*t3419)*var2[1] - 0.5*t6053*var2[2] - 0.5*t5944*var2[6] - 0.5*t5923*var2[7] + 0.03428571*t3419*var2[8]);
  p_output1[12]=var2[2]*(t6076 + t6142 + t6173 - 0.5*t6184*var2[2] - 0.5*t6131*var2[6] - 0.5*t6084*var2[7]);
  p_output1[13]=var2[2]*(t6076 + t6142 + t6173 - 0.5*t6256*var2[2] - 0.5*t6234*var2[6] - 0.5*t6220*var2[7]);
  p_output1[14]=t5542;
  p_output1[15]=-0.5*t6305*var2[2];
  p_output1[16]=t1067 + t1645 + t1985 - 0.5*t5520*var2[0] - 0.5*t6305*var2[1] - 1.*t2754*var2[2];
  p_output1[17]=t6327;
  p_output1[18]=t6329;
  p_output1[19]=t6330;
  p_output1[20]=(-0.5*t2754*var2[0] - 0.5*t5881*var2[1])*var2[2];
  p_output1[21]=(-0.5*t3839*var2[0] - 0.5*t6053*var2[1])*var2[2];
  p_output1[22]=(-0.5*t4930*var2[0] - 0.5*t6184*var2[1])*var2[2];
  p_output1[23]=(-0.5*t5404*var2[0] - 0.5*t6256*var2[1])*var2[2];
  p_output1[24]=-0.5*t5639*var2[2];
  p_output1[25]=t2773;
  p_output1[26]=-0.5*t5639*var2[0] - 0.5*t2754*var2[1];
  p_output1[27]=(-0.5*t1984*var2[0] - 0.5*t5741*var2[1])*var2[2];
  p_output1[28]=(-0.5*t3049*var2[0] - 0.5*t5944*var2[1])*var2[2];
  p_output1[29]=(-0.5*t4403*var2[0] - 0.5*t6131*var2[1])*var2[2];
  p_output1[30]=(-0.5*t5308*var2[0] - 0.5*t6234*var2[1])*var2[2];
  p_output1[31]=t5652;
  p_output1[32]=t6327;
  p_output1[33]=-0.5*t5597*var2[0] - 0.5*t1984*var2[1];
  p_output1[34]=(-0.5*t1620*var2[0] - 0.5*t5717*var2[1])*var2[2];
  p_output1[35]=(-0.5*t2999*var2[0] - 0.5*t5923*var2[1])*var2[2];
  p_output1[36]=(-0.5*t4039*var2[0] - 0.5*t6084*var2[1])*var2[2];
  p_output1[37]=(-0.5*t5158*var2[0] - 0.5*t6220*var2[1])*var2[2];
  p_output1[38]=t5662;
  p_output1[39]=t6329;
  p_output1[40]=-0.5*t5559*var2[0] - 0.5*t1620*var2[1];
  p_output1[41]=(0.03428571*t1043*var2[0] + 0.03428571*t2515*var2[1])*var2[2];
  p_output1[42]=(0.03428571*t2856*var2[0] + 0.03428571*t3419*var2[1])*var2[2];
  p_output1[43]=t6599;
  p_output1[44]=t6599;
  p_output1[45]=t5668;
  p_output1[46]=t6330;
  p_output1[47]=0.03428571*t2307*var2[0] + 0.03428571*t1043*var2[1];
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

#include "J_Ce2_vec_L7_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L7_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

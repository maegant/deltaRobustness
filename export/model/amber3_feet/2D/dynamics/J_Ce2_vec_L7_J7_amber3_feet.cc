/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:27:30 GMT-08:00
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
  double t453;
  double t303;
  double t416;
  double t551;
  double t645;
  double t433;
  double t561;
  double t567;
  double t81;
  double t664;
  double t725;
  double t730;
  double t849;
  double t50;
  double t1205;
  double t1221;
  double t1234;
  double t882;
  double t1043;
  double t1069;
  double t1086;
  double t1104;
  double t1111;
  double t1153;
  double t641;
  double t763;
  double t785;
  double t787;
  double t867;
  double t929;
  double t931;
  double t991;
  double t1302;
  double t1316;
  double t1366;
  double t1377;
  double t1380;
  double t1388;
  double t1413;
  double t1421;
  double t1733;
  double t1739;
  double t1767;
  double t1777;
  double t1780;
  double t1793;
  double t1551;
  double t1557;
  double t1627;
  double t1683;
  double t2065;
  double t2020;
  double t2039;
  double t2307;
  double t2309;
  double t2311;
  double t2232;
  double t2075;
  double t2100;
  double t2053;
  double t2066;
  double t2193;
  double t2199;
  double t2203;
  double t2386;
  double t2394;
  double t2415;
  double t2234;
  double t2303;
  double t2420;
  double t2423;
  double t2657;
  double t2667;
  double t2686;
  double t2697;
  double t2711;
  double t2736;
  double t2603;
  double t2630;
  double t2634;
  double t2636;
  double t2896;
  double t2897;
  double t2961;
  double t2971;
  double t2852;
  double t2856;
  double t1445;
  double t1461;
  double t1471;
  double t1484;
  double t1489;
  double t3245;
  double t3301;
  double t3358;
  double t3419;
  double t1019;
  double t1188;
  double t1190;
  double t1196;
  double t1901;
  double t1923;
  double t1948;
  double t1957;
  double t1696;
  double t1710;
  double t1823;
  double t1831;
  double t3449;
  double t3462;
  double t3493;
  double t3504;
  double t2173;
  double t2333;
  double t2639;
  double t2748;
  double t2753;
  double t2789;
  double t2866;
  double t2975;
  double t2976;
  double t2989;
  double t3988;
  double t3989;
  double t3992;
  double t3997;
  double t3009;
  double t3024;
  double t3032;
  double t3051;
  double t3058;
  double t3061;
  double t3081;
  double t3082;
  double t4333;
  double t4366;
  double t4371;
  double t4667;
  double t4671;
  double t4695;
  double t4696;
  double t4595;
  double t4640;
  double t4373;
  double t4416;
  double t4441;
  double t4449;
  double t4453;
  double t4519;
  double t4529;
  double t4941;
  double t4967;
  double t4975;
  double t4986;
  double t4990;
  double t5357;
  double t5366;
  double t5369;
  double t5306;
  double t5314;
  double t5320;
  double t5254;
  double t5297;
  double t5298;
  double t4269;
  double t4290;
  double t5668;
  double t5679;
  double t4536;
  double t4566;
  double t4577;
  double t4583;
  double t4735;
  double t4775;
  double t5848;
  double t5850;
  double t5858;
  double t5878;
  double t5889;
  double t5895;
  double t4802;
  double t4848;
  double t4914;
  double t4918;
  double t4934;
  double t4998;
  double t5001;
  double t5005;
  double t5010;
  double t5019;
  double t5033;
  double t5041;
  double t5049;
  double t5063;
  double t5068;
  double t5116;
  double t5117;
  double t5155;
  double t5159;
  double t5177;
  double t5179;
  double t5188;
  double t5196;
  double t5213;
  double t5215;
  double t5228;
  double t5248;
  double t5341;
  double t5345;
  double t5942;
  double t5945;
  double t5946;
  double t5439;
  double t5465;
  double t5983;
  double t5984;
  double t5985;
  double t5494;
  double t5510;
  double t5544;
  double t5552;
  double t5958;
  double t5963;
  double t5970;
  double t5617;
  double t5627;
  double t5630;
  double t5634;
  double t6161;
  double t6165;
  double t6174;
  double t6178;
  double t6181;
  double t6186;
  double t6188;
  double t6202;
  double t6208;
  double t6213;
  double t6221;
  double t6223;
  double t6229;
  double t6245;
  double t6276;
  double t6279;
  double t2327;
  double t2343;
  double t2179;
  double t2180;
  double t2073;
  double t2139;
  double t2144;
  double t2149;
  double t2221;
  double t2312;
  double t2316;
  double t2318;
  double t2418;
  double t2513;
  double t2515;
  double t3811;
  double t3817;
  double t3789;
  double t3794;
  double t3769;
  double t3775;
  double t3798;
  double t3807;
  double t3822;
  double t3829;
  double t3840;
  double t3879;
  double t3898;
  double t3904;
  double t3942;
  double t3998;
  double t4023;
  double t4025;
  double t4030;
  double t4044;
  double t4054;
  double t4102;
  double t4105;
  double t4121;
  double t4128;
  double t4666;
  double t4698;
  double t4754;
  double t4769;
  double t4778;
  double t4812;
  double t5301;
  double t5339;
  double t5388;
  double t5403;
  double t5411;
  double t5441;
  double t5473;
  double t5489;
  double t5519;
  double t5543;
  double t5569;
  double t5582;
  double t5595;
  double t5598;
  double t5606;
  double t5636;
  double t6527;
  double t6530;
  double t5698;
  double t5699;
  double t5734;
  double t5736;
  double t5740;
  double t5765;
  double t5821;
  double t5828;
  double t5835;
  double t5839;
  double t6533;
  double t6541;
  double t5862;
  double t5900;
  double t5912;
  double t5915;
  double t5916;
  double t5920;
  double t6548;
  double t6553;
  double t6554;
  double t6555;
  double t6557;
  double t6559;
  double t6568;
  double t6570;
  double t6576;
  double t6579;
  double t5954;
  double t5955;
  double t5974;
  double t5993;
  double t6005;
  double t6048;
  double t6055;
  double t6058;
  double t6589;
  double t6590;
  double t6063;
  double t6071;
  double t6077;
  double t6094;
  double t6098;
  double t6101;
  double t6115;
  double t6129;
  double t6205;
  double t2787;
  double t2993;
  double t3033;
  double t3131;
  double t3139;
  double t995;
  double t1428;
  double t1496;
  double t1512;
  double t1538;
  double t1895;
  double t1962;
  double t1997;
  double t6641;
  double t3153;
  double t6397;
  double t6401;
  double t6402;
  double t6417;
  double t6419;
  double t3857;
  double t3877;
  double t4026;
  double t4145;
  double t4168;
  double t4188;
  double t4223;
  double t6505;
  double t6507;
  double t6508;
  double t6511;
  double t6513;
  double t6514;
  double t6515;
  double t5414;
  double t5493;
  double t5575;
  double t5642;
  double t5643;
  double t6585;
  double t6588;
  double t6593;
  double t6599;
  double t6600;
  double t6011;
  double t6059;
  double t6082;
  double t6137;
  double t6138;
  double t6632;
  double t6633;
  double t6635;
  double t6636;
  double t6637;
  double t6237;
  double t6648;
  double t6880;
  double t6881;
  double t6882;
  double t6891;
  double t6893;
  double t6894;
  double t6343;
  double t6347;
  double t6351;
  double t6445;
  double t6446;
  double t6450;
  double t3530;
  double t3547;
  double t3549;
  double t6692;
  double t6693;
  double t6695;
  double t6546;
  double t6547;
  double t6551;
  double t4766;
  double t4840;
  double t4851;
  double t6747;
  double t6755;
  double t6757;
  double t6762;
  double t6769;
  double t6622;
  double t6628;
  double t6630;
  double t5914;
  double t5936;
  double t5937;
  double t6825;
  double t6828;
  double t6841;
  double t6842;
  double t6843;
  double t6282;
  double t6292;
  double t6294;
  double t2003;
  double t6898;
  double t6904;
  double t6908;
  double t6333;
  double t6337;
  double t6339;
  double t6433;
  double t6434;
  double t6441;
  double t3446;
  double t3517;
  double t3525;
  double t6686;
  double t6687;
  double t6689;
  double t6536;
  double t4544;
  double t6732;
  double t6733;
  double t6734;
  double t6612;
  double t6614;
  double t6616;
  double t5823;
  double t5845;
  double t5846;
  double t6811;
  double t6814;
  double t6815;
  double t6816;
  double t6821;
  double t6317;
  double t6658;
  double t6932;
  double t7071;
  double t7075;
  double t6322;
  double t6664;
  double t6933;
  t453 = Cos(var1[7]);
  t303 = Cos(var1[8]);
  t416 = Sin(var1[7]);
  t551 = Sin(var1[8]);
  t645 = Cos(var1[6]);
  t433 = t303*t416;
  t561 = t453*t551;
  t567 = t433 + t561;
  t81 = Sin(var1[6]);
  t664 = t453*t303;
  t725 = -1.*t416*t551;
  t730 = t664 + t725;
  t849 = Cos(var1[2]);
  t50 = Sin(var1[2]);
  t1205 = -1.*t303*t416;
  t1221 = -1.*t453*t551;
  t1234 = t1205 + t1221;
  t882 = -1.*t81*t730;
  t1043 = -1.*t303;
  t1069 = 1. + t1043;
  t1086 = -1.3127*t1069;
  t1104 = -1.3127*t303;
  t1111 = -0.06*t551;
  t1153 = t1086 + t1104 + t1111;
  t641 = -1.*t81*t567;
  t763 = t645*t730;
  t785 = t641 + t763;
  t787 = -1.*t50*t785;
  t867 = -1.*t645*t567;
  t929 = t867 + t882;
  t931 = t849*t929;
  t991 = t787 + t931;
  t1302 = -1.*t81*t1234;
  t1316 = -1.*t645*t730;
  t1366 = t1302 + t1316;
  t1377 = t849*t1366;
  t1380 = t645*t1234;
  t1388 = t1380 + t882;
  t1413 = -1.*t50*t1388;
  t1421 = t1377 + t1413;
  t1733 = -1.*t453;
  t1739 = 1. + t1733;
  t1767 = -0.9063*t1739;
  t1777 = -0.06*t303*t416;
  t1780 = t453*t1153;
  t1793 = t1767 + t1777 + t1780;
  t1551 = 0.06*t453*t303;
  t1557 = 0.9063*t416;
  t1627 = t416*t1153;
  t1683 = t1551 + t1557 + t1627;
  t2065 = t849*t1388;
  t2020 = t81*t1234;
  t2039 = t2020 + t763;
  t2307 = t645*t567;
  t2309 = t81*t730;
  t2311 = t2307 + t2309;
  t2232 = t849*t785;
  t2075 = t50*t1366;
  t2100 = t2075 + t2065;
  t2053 = -1.*t50*t2039;
  t2066 = t2053 + t2065;
  t2193 = t849*t2039;
  t2199 = t50*t1388;
  t2203 = t2193 + t2199;
  t2386 = t50*t785;
  t2394 = t849*t2311;
  t2415 = t2386 + t2394;
  t2234 = t50*t929;
  t2303 = t2232 + t2234;
  t2420 = -1.*t50*t2311;
  t2423 = t2232 + t2420;
  t2657 = -1.*t645;
  t2667 = 1. + t2657;
  t2686 = -0.4999*t2667;
  t2697 = t645*t1793;
  t2711 = -1.*t81*t1683;
  t2736 = t2686 + t2697 + t2711;
  t2603 = 0.4999*t81;
  t2630 = t81*t1793;
  t2634 = t645*t1683;
  t2636 = t2603 + t2630 + t2634;
  t2896 = -0.4999*t81;
  t2897 = -1.*t81*t1793;
  t2961 = -1.*t645*t1683;
  t2971 = t2896 + t2897 + t2961;
  t2852 = 0.4999*t645;
  t2856 = t2852 + t2697 + t2711;
  t1445 = Power(t303,2);
  t1461 = -0.06*t1445;
  t1471 = 0.9063*t551;
  t1484 = t1153*t551;
  t1489 = t1461 + t1471 + t1484;
  t3245 = t81*t567;
  t3301 = t3245 + t1316;
  t3358 = t50*t3301;
  t3419 = t3358 + t931;
  t1019 = 0.9063*t303;
  t1188 = t303*t1153;
  t1190 = 0.06*t303*t551;
  t1196 = t1019 + t1188 + t1190;
  t1901 = -1.*t1793*t1234;
  t1923 = 0.4999*t567;
  t1948 = -1.*t1683*t730;
  t1957 = t1901 + t1923 + t1948;
  t1696 = t1683*t567;
  t1710 = 0.4999*t730;
  t1823 = t1793*t730;
  t1831 = t1696 + t1710 + t1823;
  t3449 = -1.*t645*t1234;
  t3462 = t3449 + t2309;
  t3493 = t50*t3462;
  t3504 = t1377 + t3493;
  t2173 = -1.*t50*t1366;
  t2333 = -1.*t50*t929;
  t2639 = -1.*t2636*t2039;
  t2748 = -1.*t2736*t1388;
  t2753 = t2639 + t2748;
  t2789 = -1.*t2736*t1366;
  t2866 = -1.*t2856*t2039;
  t2975 = -1.*t2971*t1388;
  t2976 = -1.*t2636*t1388;
  t2989 = t2789 + t2866 + t2975 + t2976;
  t3988 = -0.4999*t645;
  t3989 = -1.*t645*t1793;
  t3992 = t81*t1683;
  t3997 = t3988 + t3989 + t3992;
  t3009 = t2736*t785;
  t3024 = t2636*t2311;
  t3032 = t3009 + t3024;
  t3051 = t2971*t785;
  t3058 = t2636*t785;
  t3061 = t2736*t929;
  t3081 = t2856*t2311;
  t3082 = t3051 + t3058 + t3061 + t3081;
  t4333 = -1.*t453*t303;
  t4366 = t416*t551;
  t4371 = t4333 + t4366;
  t4667 = -0.06*t453*t303;
  t4671 = -0.9063*t416;
  t4695 = -1.*t416*t1153;
  t4696 = t4667 + t4671 + t4695;
  t4595 = 0.9063*t453;
  t4640 = t4595 + t1777 + t1780;
  t4373 = t645*t4371;
  t4416 = t1302 + t4373;
  t4441 = t849*t4416;
  t4449 = -1.*t81*t4371;
  t4453 = t3449 + t4449;
  t4519 = t50*t4453;
  t4529 = t4441 + t4519;
  t4941 = t50*t4416;
  t4967 = t81*t4371;
  t4975 = t1380 + t4967;
  t4986 = t849*t4975;
  t4990 = t4941 + t4986;
  t5357 = -1.*t81*t4640;
  t5366 = t645*t4696;
  t5369 = t5357 + t5366;
  t5306 = t645*t4640;
  t5314 = t81*t4696;
  t5320 = t5306 + t5314;
  t5254 = -1.*t645*t4640;
  t5297 = -1.*t81*t4696;
  t5298 = t5254 + t5297;
  t4269 = 0.03428571*var2[8]*t2100;
  t4290 = 1.142857*t1489*t2100;
  t5668 = -0.06*t303;
  t5679 = 0. + t5668;
  t4536 = 1.142857*t1196*t4529;
  t4566 = 1.142857*t1957*t2100;
  t4577 = 0.4999*t1234;
  t4583 = t1793*t1234;
  t4735 = t1683*t730;
  t4775 = -1.*t1683*t1234;
  t5848 = t5679*t416;
  t5850 = -0.06*t453*t551;
  t5858 = t5848 + t5850;
  t5878 = t453*t5679;
  t5889 = 0.06*t416*t551;
  t5895 = t5878 + t5889;
  t4802 = -1.*t1793*t4371;
  t4848 = 1.142857*t1831*t4529;
  t4914 = 2.285714*t2203*t2303;
  t4918 = 2.285714*t2100*t2415;
  t4934 = 2.285714*t2203*t4529;
  t4998 = 2.285714*t2100*t4990;
  t5001 = t4914 + t4918 + t4934 + t4998;
  t5005 = -0.5*var2[0]*t5001;
  t5010 = 1.142857*t2203*t991;
  t5019 = 1.142857*t2066*t2303;
  t5033 = 1.142857*t1421*t2415;
  t5041 = 1.142857*t2100*t2423;
  t5049 = -1.*t50*t4416;
  t5063 = t849*t4453;
  t5068 = t5049 + t5063;
  t5116 = 1.142857*t2203*t5068;
  t5117 = 1.142857*t2066*t4529;
  t5155 = 1.142857*t1421*t4990;
  t5159 = -1.*t50*t4975;
  t5177 = t4441 + t5159;
  t5179 = 1.142857*t2100*t5177;
  t5188 = t5010 + t5019 + t5033 + t5041 + t5116 + t5117 + t5155 + t5179;
  t5196 = -0.5*var2[1]*t5188;
  t5213 = 1.142857*t2203*t2989;
  t5215 = 1.142857*t2100*t2753;
  t5228 = t2736*t1366;
  t5248 = t2856*t2039;
  t5341 = t2971*t1388;
  t5345 = t2636*t1388;
  t5942 = -1.*t81*t5858;
  t5945 = t645*t5895;
  t5946 = t5942 + t5945;
  t5439 = t2636*t2039;
  t5465 = t2736*t1388;
  t5983 = t645*t5858;
  t5984 = t81*t5895;
  t5985 = t5983 + t5984;
  t5494 = 1.142857*t3032*t4529;
  t5510 = 1.142857*t3082*t4990;
  t5544 = -1.*t2736*t4416;
  t5552 = -1.*t2636*t4975;
  t5958 = -1.*t645*t5858;
  t5963 = -1.*t81*t5895;
  t5970 = t5958 + t5963;
  t5617 = -1.*t2971*t4416;
  t5627 = -1.*t2636*t4416;
  t5630 = -1.*t2736*t4453;
  t5634 = -1.*t2856*t4975;
  t6161 = 2.285714*t2100*t2203;
  t6165 = 2.285714*t2303*t2415;
  t6174 = t6161 + t6165;
  t6178 = 1.142857*t2100*t2066;
  t6181 = 1.142857*t1421*t2203;
  t6186 = 1.142857*t991*t2415;
  t6188 = 1.142857*t2303*t2423;
  t6202 = t6178 + t6181 + t6186 + t6188;
  t6208 = 1.142857*t2753*t2303;
  t6213 = 1.142857*t2989*t2415;
  t6221 = 1.142857*t2100*t3032;
  t6223 = 1.142857*t2203*t3082;
  t6229 = t6208 + t6213 + t6221 + t6223;
  t6245 = 1.142857*t1196*t2100;
  t6276 = 1.142857*t1489*t2303;
  t6279 = t6245 + t6276;
  t2327 = -1.*t849*t785;
  t2343 = t2327 + t2333;
  t2179 = -1.*t849*t1388;
  t2180 = t2173 + t2179;
  t2073 = 2.285714*t2066*t1421;
  t2139 = -1.*t849*t2039;
  t2144 = t2139 + t1413;
  t2149 = 1.142857*t2100*t2144;
  t2221 = 1.142857*t2180*t2203;
  t2312 = -1.*t849*t2311;
  t2316 = t787 + t2312;
  t2318 = 1.142857*t2303*t2316;
  t2418 = 1.142857*t2343*t2415;
  t2513 = 2.285714*t991*t2423;
  t2515 = t2073 + t2149 + t2221 + t2318 + t2418 + t2513;
  t3811 = t849*t3301;
  t3817 = t3811 + t2333;
  t3789 = t849*t3462;
  t3794 = t2173 + t3789;
  t3769 = 2.285714*t2100*t1421;
  t3775 = 2.285714*t991*t2303;
  t3798 = 1.142857*t2203*t3794;
  t3807 = 1.142857*t2066*t3504;
  t3822 = 1.142857*t3817*t2415;
  t3829 = 1.142857*t3419*t2423;
  t3840 = t3769 + t3775 + t3798 + t3807 + t3822 + t3829;
  t3879 = -2.*t2971*t1366;
  t3898 = -1.*t2636*t1366;
  t3904 = -1.*t2971*t2039;
  t3942 = -2.*t2856*t1388;
  t3998 = -1.*t3997*t1388;
  t4023 = -1.*t2736*t3462;
  t4025 = t3879 + t3898 + t3904 + t3942 + t3998 + t4023;
  t4030 = t2736*t3301;
  t4044 = 2.*t2856*t785;
  t4054 = t3997*t785;
  t4102 = 2.*t2971*t929;
  t4105 = t2636*t929;
  t4121 = t2971*t2311;
  t4128 = t4030 + t4044 + t4054 + t4102 + t4105 + t4121;
  t4666 = t4640*t567;
  t4698 = t4696*t730;
  t4754 = t4577 + t4583 + t4666 + t4698 + t4735;
  t4769 = -1.*t4696*t1234;
  t4778 = -1.*t4640*t730;
  t4812 = t4769 + t4775 + t1710 + t4778 + t4802;
  t5301 = t5298*t785;
  t5339 = t5320*t785;
  t5388 = t5369*t929;
  t5403 = t5369*t2311;
  t5411 = t5228 + t5248 + t5301 + t5339 + t5341 + t5345 + t5388 + t5403;
  t5441 = t5369*t785;
  t5473 = t5320*t2311;
  t5489 = t5439 + t5441 + t5465 + t5473;
  t5519 = -1.*t5320*t2039;
  t5543 = -1.*t5369*t1388;
  t5569 = t5519 + t5543 + t5544 + t5552;
  t5582 = -1.*t5369*t1366;
  t5595 = -1.*t5369*t2039;
  t5598 = -1.*t5298*t1388;
  t5606 = -1.*t5320*t1388;
  t5636 = t5582 + t5595 + t5598 + t5606 + t5617 + t5627 + t5630 + t5634;
  t6527 = 0.03428571*var2[8]*t1421;
  t6530 = 1.142857*t1489*t1421;
  t5698 = t5679*t303;
  t5699 = 0.06*t1445;
  t5734 = -0.9063*t551;
  t5736 = -1.*t1153*t551;
  t5740 = Power(t551,2);
  t5765 = -0.06*t5740;
  t5821 = t5698 + t5699 + t5734 + t5736 + t5765;
  t5828 = t5679*t551;
  t5835 = 0.12*t303*t551;
  t5839 = t1019 + t1188 + t5828 + t5835;
  t6533 = 1.142857*t1196*t5068;
  t6541 = 1.142857*t1957*t1421;
  t5862 = t5858*t567;
  t5900 = t730*t5895;
  t5912 = t4577 + t4583 + t5862 + t4735 + t5900;
  t5915 = -1.*t5858*t730;
  t5916 = -1.*t1234*t5895;
  t5920 = t4775 + t1710 + t5915 + t5916 + t4802;
  t6548 = 1.142857*t1831*t5068;
  t6553 = -0.5*var2[0]*t5188;
  t6554 = 2.285714*t2066*t991;
  t6555 = 2.285714*t1421*t2423;
  t6557 = 2.285714*t2066*t5068;
  t6559 = 2.285714*t1421*t5177;
  t6568 = t6554 + t6555 + t6557 + t6559;
  t6570 = -0.5*var2[1]*t6568;
  t6576 = 1.142857*t2066*t2989;
  t6579 = 1.142857*t1421*t2753;
  t5954 = t929*t5946;
  t5955 = t2311*t5946;
  t5974 = t785*t5970;
  t5993 = t785*t5985;
  t6005 = t5228 + t5248 + t5341 + t5345 + t5954 + t5955 + t5974 + t5993;
  t6048 = t785*t5946;
  t6055 = t2311*t5985;
  t6058 = t5439 + t5465 + t6048 + t6055;
  t6589 = 1.142857*t3032*t5068;
  t6590 = 1.142857*t3082*t5177;
  t6063 = -1.*t1388*t5946;
  t6071 = -1.*t2039*t5985;
  t6077 = t6063 + t6071 + t5544 + t5552;
  t6094 = -1.*t1366*t5946;
  t6098 = -1.*t2039*t5946;
  t6101 = -1.*t1388*t5970;
  t6115 = -1.*t1388*t5985;
  t6129 = t6094 + t6098 + t6101 + t6115 + t5617 + t5627 + t5630 + t5634;
  t6205 = -0.5*var2[6]*t6202;
  t2787 = 1.142857*t2753*t991;
  t2993 = 1.142857*t2989*t2423;
  t3033 = 1.142857*t1421*t3032;
  t3131 = 1.142857*t2066*t3082;
  t3139 = t2787 + t2993 + t3033 + t3131;
  t995 = 0.03428571*var2[8]*t991;
  t1428 = 1.142857*t1196*t1421;
  t1496 = 1.142857*t1489*t991;
  t1512 = t1428 + t1496;
  t1538 = -0.5*var2[7]*t1512;
  t1895 = 1.142857*t1831*t1421;
  t1962 = 1.142857*t1957*t991;
  t1997 = t1895 + t1962;
  t6641 = t2073 + t2513;
  t3153 = -0.5*var2[2]*t3139;
  t6397 = 1.142857*t2753*t2343;
  t6401 = 1.142857*t2989*t2316;
  t6402 = 1.142857*t2180*t3032;
  t6417 = 1.142857*t2144*t3082;
  t6419 = t6397 + t6401 + t6402 + t6417;
  t3857 = 1.142857*t2753*t3419;
  t3877 = 2.285714*t2989*t2303;
  t4026 = 1.142857*t4025*t2415;
  t4145 = 1.142857*t2203*t4128;
  t4168 = 1.142857*t3504*t3032;
  t4188 = 2.285714*t2100*t3082;
  t4223 = t3857 + t3877 + t4026 + t4145 + t4168 + t4188;
  t6505 = 2.285714*t2989*t991;
  t6507 = 1.142857*t2753*t3817;
  t6508 = 1.142857*t4025*t2423;
  t6511 = 1.142857*t2066*t4128;
  t6513 = 1.142857*t3794*t3032;
  t6514 = 2.285714*t1421*t3082;
  t6515 = t6505 + t6507 + t6508 + t6511 + t6513 + t6514;
  t5414 = 1.142857*t2203*t5411;
  t5493 = 1.142857*t2100*t5489;
  t5575 = 1.142857*t2303*t5569;
  t5642 = 1.142857*t2415*t5636;
  t5643 = t5213 + t5215 + t5414 + t5493 + t5494 + t5510 + t5575 + t5642;
  t6585 = 1.142857*t2066*t5411;
  t6588 = 1.142857*t1421*t5489;
  t6593 = 1.142857*t991*t5569;
  t6599 = 1.142857*t2423*t5636;
  t6600 = t6576 + t6579 + t6585 + t6588 + t6589 + t6590 + t6593 + t6599;
  t6011 = 1.142857*t2203*t6005;
  t6059 = 1.142857*t2100*t6058;
  t6082 = 1.142857*t2303*t6077;
  t6137 = 1.142857*t2415*t6129;
  t6138 = t5213 + t5215 + t6011 + t6059 + t5494 + t5510 + t6082 + t6137;
  t6632 = 1.142857*t2066*t6005;
  t6633 = 1.142857*t1421*t6058;
  t6635 = 1.142857*t991*t6077;
  t6636 = 1.142857*t2423*t6129;
  t6637 = t6576 + t6579 + t6632 + t6633 + t6589 + t6590 + t6635 + t6636;
  t6237 = -0.5*var2[6]*t6229;
  t6648 = -0.5*var2[6]*t3139;
  t6880 = 2.285714*t2989*t2753;
  t6881 = 2.285714*t3032*t3082;
  t6882 = t6880 + t6881;
  t6891 = 1.142857*t1489*t2989;
  t6893 = 1.142857*t1196*t3082;
  t6894 = t6891 + t6893;
  t6343 = 1.142857*t1831*t2180;
  t6347 = 1.142857*t1957*t2343;
  t6351 = t6343 + t6347;
  t6445 = 1.142857*t1957*t3817;
  t6446 = 1.142857*t1831*t3794;
  t6450 = t6445 + t6446;
  t3530 = 1.142857*t1957*t3419;
  t3547 = 1.142857*t1831*t3504;
  t3549 = t3530 + t3547;
  t6692 = 1.142857*t1957*t4025;
  t6693 = 1.142857*t1831*t4128;
  t6695 = t6692 + t6693;
  t6546 = 1.142857*t4754*t1421;
  t6547 = 1.142857*t4812*t991;
  t6551 = t6541 + t6546 + t6547 + t6548;
  t4766 = 1.142857*t4754*t2100;
  t4840 = 1.142857*t4812*t2303;
  t4851 = t4566 + t4766 + t4840 + t4848;
  t6747 = 1.142857*t4812*t2989;
  t6755 = 1.142857*t1831*t5411;
  t6757 = 1.142857*t4754*t3082;
  t6762 = 1.142857*t1957*t5636;
  t6769 = t6747 + t6755 + t6757 + t6762;
  t6622 = 1.142857*t5912*t1421;
  t6628 = 1.142857*t5920*t991;
  t6630 = t6541 + t6622 + t6628 + t6548;
  t5914 = 1.142857*t5912*t2100;
  t5936 = 1.142857*t5920*t2303;
  t5937 = t4566 + t5914 + t5936 + t4848;
  t6825 = 1.142857*t5920*t2989;
  t6828 = 1.142857*t5912*t3082;
  t6841 = 1.142857*t1831*t6005;
  t6842 = 1.142857*t1957*t6129;
  t6843 = t6825 + t6828 + t6841 + t6842;
  t6282 = 1.142857*t1831*t2100;
  t6292 = 1.142857*t1957*t2303;
  t6294 = t6282 + t6292;
  t2003 = -0.5*var2[6]*t1997;
  t6898 = 1.142857*t1957*t2989;
  t6904 = 1.142857*t1831*t3082;
  t6908 = t6898 + t6904;
  t6333 = 1.142857*t1196*t2180;
  t6337 = 1.142857*t1489*t2343;
  t6339 = t6333 + t6337;
  t6433 = 1.142857*t1489*t3817;
  t6434 = 1.142857*t1196*t3794;
  t6441 = t6433 + t6434;
  t3446 = 1.142857*t1489*t3419;
  t3517 = 1.142857*t1196*t3504;
  t3525 = t3446 + t3517;
  t6686 = 1.142857*t1489*t4025;
  t6687 = 1.142857*t1196*t4128;
  t6689 = t6686 + t6687;
  t6536 = t6530 + t6533;
  t4544 = t4290 + t4536;
  t6732 = 1.142857*t1196*t5411;
  t6733 = 1.142857*t1489*t5636;
  t6734 = t6732 + t6733;
  t6612 = 1.142857*t5821*t1421;
  t6614 = 1.142857*t5839*t991;
  t6616 = t6530 + t6612 + t6614 + t6533;
  t5823 = 1.142857*t5821*t2100;
  t5845 = 1.142857*t5839*t2303;
  t5846 = t4290 + t5823 + t5845 + t4536;
  t6811 = 1.142857*t5839*t2989;
  t6814 = 1.142857*t5821*t3082;
  t6815 = 1.142857*t1196*t6005;
  t6816 = 1.142857*t1489*t6129;
  t6821 = t6811 + t6814 + t6815 + t6816;
  t6317 = -0.5*var2[6]*t6279;
  t6658 = -0.5*var2[6]*t1512;
  t6932 = -0.5*var2[6]*t6894;
  t7071 = 0.03428571*var2[0]*t2100;
  t7075 = 0.03428571*var2[1]*t1421;
  t6322 = 0.03428571*var2[6]*t2303;
  t6664 = 0.03428571*var2[6]*t991;
  t6933 = 0.03428571*var2[6]*t2989;
  p_output1[0]=(t1538 + t2003 + t3153 + t995 - 0.5*(2.285714*t2066*t2100 + 2.285714*t1421*t2203 + 2.285714*t2303*t2423 + 2.285714*t2415*t991)*var2[0] - 0.5*t2515*var2[1])*var2[6];
  p_output1[1]=var2[6]*(-0.5*(2.285714*Power(t2100,2) + 2.285714*Power(t2303,2) + 2.285714*t2415*t3419 + 2.285714*t2203*t3504)*var2[0] - 0.5*t3840*var2[1] - 0.5*t4223*var2[2] - 0.5*t3549*var2[6] - 0.5*t3525*var2[7] + 0.03428571*t3419*var2[8]);
  p_output1[2]=var2[6]*(t4269 + t5005 + t5196 - 0.5*t5643*var2[2] - 0.5*t4851*var2[6] - 0.5*t4544*var2[7]);
  p_output1[3]=var2[6]*(t4269 + t5005 + t5196 - 0.5*t6138*var2[2] - 0.5*t5937*var2[6] - 0.5*t5846*var2[7]);
  p_output1[4]=-0.5*t6174*var2[6];
  p_output1[5]=t6205;
  p_output1[6]=t6237;
  p_output1[7]=-0.5*t6174*var2[0] - 0.5*t6202*var2[1] - 0.5*t6229*var2[2] - 1.*t6294*var2[6] - 0.5*t6279*var2[7] + 0.03428571*t2303*var2[8];
  p_output1[8]=t6317;
  p_output1[9]=t6322;
  p_output1[10]=var2[6]*(-0.5*t2515*var2[0] - 0.5*(2.285714*t1421*t2144 + 2.285714*t2066*t2180 + 2.285714*t2343*t2423 + 2.285714*t2316*t991)*var2[1] - 0.5*t6419*var2[2] - 0.5*t6351*var2[6] - 0.5*t6339*var2[7] + 0.03428571*t2343*var2[8]);
  p_output1[11]=var2[6]*(-0.5*t3840*var2[0] - 0.5*(2.285714*Power(t1421,2) + 2.285714*t2066*t3794 + 2.285714*t2423*t3817 + 2.285714*Power(t991,2))*var2[1] - 0.5*t6515*var2[2] - 0.5*t6450*var2[6] - 0.5*t6441*var2[7] + 0.03428571*t3817*var2[8]);
  p_output1[12]=var2[6]*(t6527 + t6553 + t6570 - 0.5*t6600*var2[2] - 0.5*t6551*var2[6] - 0.5*t6536*var2[7]);
  p_output1[13]=var2[6]*(t6527 + t6553 + t6570 - 0.5*t6637*var2[2] - 0.5*t6630*var2[6] - 0.5*t6616*var2[7]);
  p_output1[14]=t6205;
  p_output1[15]=-0.5*t6641*var2[6];
  p_output1[16]=t6648;
  p_output1[17]=t1538 + t3153 + t995 - 0.5*t6202*var2[0] - 0.5*t6641*var2[1] - 1.*t1997*var2[6];
  p_output1[18]=t6658;
  p_output1[19]=t6664;
  p_output1[20]=(-0.5*t3139*var2[0] - 0.5*t6419*var2[1])*var2[6];
  p_output1[21]=var2[6]*(-0.5*t4223*var2[0] - 0.5*t6515*var2[1] - 0.5*(2.285714*Power(t2989,2) + 2.285714*Power(t3082,2) + 2.285714*t2753*t4025 + 2.285714*t3032*t4128)*var2[2] - 0.5*t6695*var2[6] - 0.5*t6689*var2[7] + 0.03428571*t4025*var2[8]);
  p_output1[22]=var2[6]*(-0.5*t5643*var2[0] - 0.5*t6600*var2[1] - 0.5*(2.285714*t3032*t5411 + 2.285714*t3082*t5489 + 2.285714*t2989*t5569 + 2.285714*t2753*t5636)*var2[2] - 0.5*t6769*var2[6] - 0.5*t6734*var2[7] + 0.03428571*t5636*var2[8]);
  p_output1[23]=var2[6]*(-0.5*t6138*var2[0] - 0.5*t6637*var2[1] - 0.5*(2.285714*t3032*t6005 + 2.285714*t3082*t6058 + 2.285714*t2989*t6077 + 2.285714*t2753*t6129)*var2[2] - 0.5*t6843*var2[6] - 0.5*t6821*var2[7] + 0.03428571*t6129*var2[8]);
  p_output1[24]=t6237;
  p_output1[25]=t6648;
  p_output1[26]=-0.5*t6882*var2[6];
  p_output1[27]=-0.5*t6229*var2[0] - 0.5*t3139*var2[1] - 0.5*t6882*var2[2] - 1.*t6908*var2[6] - 0.5*t6894*var2[7] + 0.03428571*t2989*var2[8];
  p_output1[28]=t6932;
  p_output1[29]=t6933;
  p_output1[30]=(-0.5*t1997*var2[0] - 0.5*t6351*var2[1])*var2[6];
  p_output1[31]=(-0.5*t3549*var2[0] - 0.5*t6450*var2[1] - 0.5*t6695*var2[2])*var2[6];
  p_output1[32]=(-0.5*t4851*var2[0] - 0.5*t6551*var2[1] - 0.5*t6769*var2[2])*var2[6];
  p_output1[33]=(-0.5*t5937*var2[0] - 0.5*t6630*var2[1] - 0.5*t6843*var2[2])*var2[6];
  p_output1[34]=-0.5*t6294*var2[6];
  p_output1[35]=t2003;
  p_output1[36]=-0.5*t6908*var2[6];
  p_output1[37]=-0.5*t6294*var2[0] - 0.5*t1997*var2[1] - 0.5*t6908*var2[2];
  p_output1[38]=(-0.5*t1512*var2[0] - 0.5*t6339*var2[1])*var2[6];
  p_output1[39]=(-0.5*t3525*var2[0] - 0.5*t6441*var2[1] - 0.5*t6689*var2[2])*var2[6];
  p_output1[40]=(-0.5*t4544*var2[0] - 0.5*t6536*var2[1] - 0.5*t6734*var2[2])*var2[6];
  p_output1[41]=(-0.5*t5846*var2[0] - 0.5*t6616*var2[1] - 0.5*t6821*var2[2])*var2[6];
  p_output1[42]=t6317;
  p_output1[43]=t6658;
  p_output1[44]=t6932;
  p_output1[45]=-0.5*t6279*var2[0] - 0.5*t1512*var2[1] - 0.5*t6894*var2[2];
  p_output1[46]=(0.03428571*t991*var2[0] + 0.03428571*t2343*var2[1])*var2[6];
  p_output1[47]=(0.03428571*t3419*var2[0] + 0.03428571*t3817*var2[1] + 0.03428571*t4025*var2[2])*var2[6];
  p_output1[48]=(t7071 + t7075 + 0.03428571*t5636*var2[2])*var2[6];
  p_output1[49]=(t7071 + t7075 + 0.03428571*t6129*var2[2])*var2[6];
  p_output1[50]=t6322;
  p_output1[51]=t6664;
  p_output1[52]=t6933;
  p_output1[53]=0.03428571*t2303*var2[0] + 0.03428571*t991*var2[1] + 0.03428571*t2989*var2[2];
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

#include "J_Ce2_vec_L7_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L7_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

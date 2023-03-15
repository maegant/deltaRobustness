/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:38 GMT-08:00
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
  double t41;
  double t172;
  double t392;
  double t346;
  double t459;
  double t364;
  double t422;
  double t424;
  double t309;
  double t464;
  double t627;
  double t632;
  double t109;
  double t115;
  double t127;
  double t151;
  double t182;
  double t183;
  double t707;
  double t308;
  double t864;
  double t865;
  double t869;
  double t729;
  double t106;
  double t243;
  double t260;
  double t269;
  double t877;
  double t719;
  double t758;
  double t772;
  double t825;
  double t826;
  double t828;
  double t845;
  double t863;
  double t870;
  double t886;
  double t953;
  double t1114;
  double t1136;
  double t428;
  double t1452;
  double t1499;
  double t1517;
  double t1347;
  double t1359;
  double t1384;
  double t1429;
  double t1169;
  double t1206;
  double t1253;
  double t1550;
  double t1586;
  double t1588;
  double t1595;
  double t1646;
  double t1649;
  double t1677;
  double t1679;
  double t670;
  double t673;
  double t692;
  double t779;
  double t781;
  double t972;
  double t1004;
  double t1038;
  double t1041;
  double t1045;
  double t1071;
  double t2007;
  double t2096;
  double t2098;
  double t2122;
  double t1720;
  double t1726;
  double t1745;
  double t1762;
  double t1763;
  double t1781;
  double t2127;
  double t2129;
  double t2137;
  double t2140;
  double t2148;
  double t2159;
  double t1915;
  double t2329;
  double t2341;
  double t2352;
  double t2354;
  double t2355;
  double t2374;
  double t2376;
  double t2409;
  double t2410;
  double t2413;
  double t1680;
  double t2575;
  double t2578;
  double t2207;
  double t2224;
  double t2656;
  double t2660;
  double t2668;
  double t2483;
  double t2505;
  double t2514;
  double t2588;
  double t2605;
  double t2616;
  double t2530;
  double t2733;
  double t2535;
  double t2739;
  double t1788;
  double t1801;
  double t2996;
  double t3005;
  double t3010;
  double t2983;
  double t2986;
  double t2990;
  double t3025;
  double t2854;
  double t2881;
  double t2892;
  double t3041;
  double t3070;
  double t3071;
  double t3094;
  double t3187;
  double t3196;
  double t1157;
  double t1158;
  double t3287;
  double t1256;
  double t1293;
  double t3312;
  double t3325;
  double t3329;
  double t3335;
  double t3184;
  double t3191;
  double t3194;
  double t3198;
  double t3199;
  double t3201;
  double t3218;
  double t1940;
  double t2027;
  double t3480;
  double t3489;
  double t3492;
  double t3523;
  double t3536;
  double t3336;
  double t3624;
  double t3625;
  double t3629;
  double t3630;
  double t3645;
  double t2768;
  double t2788;
  double t2844;
  double t2847;
  double t2850;
  double t3748;
  double t3678;
  double t3756;
  double t1168;
  double t1313;
  double t1317;
  double t1108;
  double t1323;
  double t1776;
  double t1808;
  double t1818;
  double t1837;
  double t3973;
  double t3974;
  double t3986;
  double t3999;
  double t4003;
  double t4009;
  double t4028;
  double t4031;
  double t4034;
  double t4040;
  double t3961;
  double t4019;
  double t4053;
  double t4061;
  double t4162;
  double t4178;
  double t4351;
  double t4354;
  double t4357;
  double t4402;
  double t4155;
  double t4213;
  double t4253;
  double t4254;
  double t4313;
  double t4319;
  double t4109;
  double t4111;
  double t4113;
  double t4130;
  double t4570;
  double t4578;
  double t4591;
  double t4594;
  double t4596;
  double t4597;
  double t4677;
  double t4681;
  double t4708;
  double t4579;
  double t4603;
  double t4630;
  double t4641;
  double t4645;
  double t4656;
  double t4542;
  double t4558;
  double t4671;
  double t4673;
  double t4934;
  double t4935;
  double t4936;
  double t4949;
  double t4950;
  double t4953;
  double t4963;
  double t4995;
  double t4997;
  double t5006;
  double t5017;
  double t5018;
  double t5034;
  double t4746;
  double t4749;
  double t4756;
  double t4764;
  double t5135;
  double t5158;
  double t5161;
  double t5162;
  double t5221;
  double t5223;
  double t5176;
  double t5210;
  double t4640;
  double t4665;
  double t4711;
  double t4722;
  double t4723;
  double t4726;
  double t4732;
  double t4738;
  double t4741;
  double t4744;
  double t4777;
  double t4782;
  double t4787;
  double t5465;
  double t5469;
  double t5276;
  double t5291;
  double t5473;
  double t5474;
  double t5489;
  double t5501;
  double t5251;
  double t5252;
  double t4799;
  double t4806;
  double t4807;
  double t4816;
  double t4818;
  double t4860;
  double t4869;
  double t4870;
  double t4886;
  double t4891;
  double t5655;
  double t5659;
  double t5669;
  double t5673;
  double t5676;
  double t5677;
  double t5681;
  double t5688;
  double t5689;
  double t5696;
  double t5698;
  double t5699;
  double t5702;
  double t5364;
  double t5372;
  double t5378;
  double t5400;
  double t5413;
  double t5418;
  double t5422;
  double t5437;
  double t5442;
  double t5449;
  double t5456;
  double t5457;
  double t5777;
  double t5779;
  double t5789;
  double t5798;
  double t5802;
  double t5808;
  double t5565;
  double t5588;
  double t5772;
  double t5823;
  double t5461;
  double t5488;
  double t5502;
  double t5526;
  double t5538;
  double t5550;
  double t5856;
  double t5570;
  double t5861;
  double t5589;
  double t6099;
  double t6108;
  double t6109;
  double t5901;
  double t5907;
  double t5916;
  double t5919;
  double t5927;
  double t5944;
  double t5977;
  double t5987;
  double t5997;
  double t6019;
  double t6022;
  double t6023;
  double t6168;
  double t6176;
  double t6187;
  double t6196;
  double t6198;
  double t6281;
  double t6222;
  double t6247;
  double t6250;
  double t6309;
  double t6319;
  double t6353;
  double t6367;
  double t6368;
  double t6385;
  double t6398;
  double t6400;
  double t6406;
  double t6409;
  double t6410;
  double t6418;
  double t6425;
  double t6454;
  double t6462;
  double t6479;
  double t6488;
  double t6539;
  double t6463;
  double t6470;
  double t6550;
  double t6473;
  double t6474;
  double t6565;
  double t6481;
  double t6483;
  double t6487;
  double t6571;
  double t6490;
  double t6598;
  double t6599;
  double t6601;
  double t6604;
  double t6605;
  double t6609;
  double t6621;
  double t6634;
  double t6637;
  double t6639;
  double t6660;
  double t6662;
  double t6668;
  double t6726;
  double t6736;
  double t6740;
  double t6747;
  double t6748;
  double t6814;
  double t6815;
  double t6817;
  t41 = Cos(var1[8]);
  t172 = Sin(var1[8]);
  t392 = Cos(var1[7]);
  t346 = Sin(var1[7]);
  t459 = Cos(var1[6]);
  t364 = -1.*t41*t346;
  t422 = -1.*t392*t172;
  t424 = t364 + t422;
  t309 = Sin(var1[6]);
  t464 = t392*t41;
  t627 = -1.*t346*t172;
  t632 = t464 + t627;
  t109 = -1.*t41;
  t115 = 1. + t109;
  t127 = -1.3127*t115;
  t151 = -1.3127*t41;
  t182 = -0.06*t172;
  t183 = t127 + t151 + t182;
  t707 = Sin(var1[2]);
  t308 = Cos(var1[2]);
  t864 = t41*t346;
  t865 = t392*t172;
  t869 = t864 + t865;
  t729 = -1.*t309*t632;
  t106 = 0.9063*t41;
  t243 = t41*t183;
  t260 = 0.06*t41*t172;
  t269 = t106 + t243 + t260;
  t877 = t459*t632;
  t719 = t459*t424;
  t758 = t719 + t729;
  t772 = -1.*t707*t758;
  t825 = Power(t41,2);
  t826 = -0.06*t825;
  t828 = 0.9063*t172;
  t845 = t183*t172;
  t863 = t826 + t828 + t845;
  t870 = -1.*t309*t869;
  t886 = t870 + t877;
  t953 = -1.*t707*t886;
  t1114 = t309*t424;
  t1136 = t1114 + t877;
  t428 = -1.*t309*t424;
  t1452 = -1.*t392*t41;
  t1499 = t346*t172;
  t1517 = t1452 + t1499;
  t1347 = -1.*t707*t1136;
  t1359 = t308*t758;
  t1384 = t1347 + t1359;
  t1429 = 1.142857*t863*t1384;
  t1169 = t459*t869;
  t1206 = t309*t632;
  t1253 = t1169 + t1206;
  t1550 = t459*t1517;
  t1586 = t428 + t1550;
  t1588 = t308*t1586;
  t1595 = t309*t1517;
  t1646 = t719 + t1595;
  t1649 = -1.*t707*t1646;
  t1677 = t1588 + t1649;
  t1679 = 1.142857*t269*t1677;
  t670 = -1.*t459*t632;
  t673 = t428 + t670;
  t692 = t308*t673;
  t779 = t692 + t772;
  t781 = 1.142857*t269*t779;
  t972 = -1.*t459*t869;
  t1004 = t972 + t729;
  t1038 = t308*t1004;
  t1041 = t953 + t1038;
  t1045 = 1.142857*t863*t1041;
  t1071 = t781 + t1045;
  t2007 = -1.*t459*t424;
  t2096 = t707*t673;
  t2098 = t2096 + t1359;
  t2122 = 1.142857*t863*t2098;
  t1720 = -0.9063*t172;
  t1726 = -1.*t183*t172;
  t1745 = Power(t172,2);
  t1762 = -0.06*t1745;
  t1763 = 0. + t1720 + t1726 + t1762;
  t1781 = t308*t886;
  t2127 = -1.*t309*t1517;
  t2129 = t2007 + t2127;
  t2137 = t707*t2129;
  t2140 = t1588 + t2137;
  t2148 = 1.142857*t269*t2140;
  t2159 = t2122 + t2148;
  t1915 = t309*t869;
  t2329 = t1915 + t1550;
  t2341 = t308*t2329;
  t2352 = t1169 + t2127;
  t2354 = t707*t2352;
  t2355 = t2341 + t2354;
  t2374 = 1.142857*t269*t2355;
  t2376 = t707*t1586;
  t2409 = t308*t1646;
  t2410 = t2376 + t2409;
  t2413 = 1.142857*t863*t2410;
  t1680 = t1429 + t1679;
  t2575 = -0.06*t41;
  t2578 = 0. + t2575;
  t2207 = t707*t1004;
  t2224 = t1781 + t2207;
  t2656 = t2578*t172;
  t2660 = 0.12*t41*t172;
  t2668 = t106 + t243 + t2656 + t2660;
  t2483 = t308*t1136;
  t2505 = t707*t758;
  t2514 = t2483 + t2505;
  t2588 = t2578*t41;
  t2605 = 0.06*t825;
  t2616 = t2588 + t2605 + t1720 + t1726 + t1762;
  t2530 = 1.142857*t269*t2514;
  t2733 = 1.142857*t2668*t2514;
  t2535 = 1.142857*t1763*t2410;
  t2739 = 1.142857*t2616*t2410;
  t1788 = -1.*t707*t1253;
  t1801 = t1781 + t1788;
  t2996 = 1.142857*t269*t2098;
  t3005 = 1.142857*t863*t2224;
  t3010 = t2996 + t3005;
  t2983 = 1.142857*t269*t1384;
  t2986 = 1.142857*t863*t1801;
  t2990 = t2983 + t2986;
  t3025 = 1.142857*t863*t2514;
  t2854 = t707*t886;
  t2881 = t308*t1253;
  t2892 = t2854 + t2881;
  t3041 = 1.142857*t269*t2410;
  t3070 = 1.142857*t1763*t2514;
  t3071 = 1.142857*t269*t2892;
  t3094 = t3025 + t3070 + t3071 + t3041;
  t3187 = -1.*t308*t758;
  t3196 = -1.*t308*t886;
  t1157 = -1.*t308*t1136;
  t1158 = t1157 + t772;
  t3287 = 1.142857*t863*t1158;
  t1256 = -1.*t308*t1253;
  t1293 = t953 + t1256;
  t3312 = -1.*t707*t1586;
  t3325 = -1.*t308*t1646;
  t3329 = t3312 + t3325;
  t3335 = 1.142857*t269*t3329;
  t3184 = -1.*t707*t673;
  t3191 = t3184 + t3187;
  t3194 = 1.142857*t269*t3191;
  t3198 = -1.*t707*t1004;
  t3199 = t3196 + t3198;
  t3201 = 1.142857*t863*t3199;
  t3218 = t3194 + t3201;
  t1940 = t1915 + t670;
  t2027 = t2007 + t1206;
  t3480 = 1.142857*t863*t779;
  t3489 = t308*t2129;
  t3492 = t3312 + t3489;
  t3523 = 1.142857*t269*t3492;
  t3536 = t3480 + t3523;
  t3336 = t3287 + t3335;
  t3624 = -1.*t707*t2329;
  t3625 = t308*t2352;
  t3629 = t3624 + t3625;
  t3630 = 1.142857*t269*t3629;
  t3645 = 1.142857*t863*t1677;
  t2768 = -0.9063*t41;
  t2788 = -1.*t41*t183;
  t2844 = -1.*t2578*t172;
  t2847 = -0.12*t41*t172;
  t2850 = t2768 + t2788 + t2844 + t2847;
  t3748 = 1.142857*t2668*t1384;
  t3678 = 1.142857*t1763*t1677;
  t3756 = 1.142857*t2616*t1677;
  t1168 = 1.142857*t269*t1158;
  t1313 = 1.142857*t863*t1293;
  t1317 = t1168 + t1313;
  t1108 = -0.5*var2[6]*t1071;
  t1323 = -0.5*var2[2]*t1317;
  t1776 = 1.142857*t1763*t1384;
  t1808 = 1.142857*t269*t1801;
  t1818 = t1429 + t1776 + t1808 + t1679;
  t1837 = -0.5*var2[8]*t1818;
  t3973 = -1.*t392;
  t3974 = 1. + t3973;
  t3986 = -0.9063*t3974;
  t3999 = -0.06*t41*t346;
  t4003 = t392*t183;
  t4009 = t3986 + t3999 + t4003;
  t4028 = 0.06*t392*t41;
  t4031 = 0.9063*t346;
  t4034 = t346*t183;
  t4040 = t4028 + t4031 + t4034;
  t3961 = -0.4999*t309;
  t4019 = -1.*t309*t4009;
  t4053 = -1.*t459*t4040;
  t4061 = t3961 + t4019 + t4053;
  t4162 = t459*t4009;
  t4178 = -1.*t309*t4040;
  t4351 = -1.*t459;
  t4354 = 1. + t4351;
  t4357 = -0.4999*t4354;
  t4402 = t4357 + t4162 + t4178;
  t4155 = 0.4999*t459;
  t4213 = t4155 + t4162 + t4178;
  t4253 = -0.4999*t459;
  t4254 = -1.*t459*t4009;
  t4313 = t309*t4040;
  t4319 = t4253 + t4254 + t4313;
  t4109 = 0.4999*t309;
  t4111 = t309*t4009;
  t4113 = t459*t4040;
  t4130 = t4109 + t4111 + t4113;
  t4570 = 0.9063*t392;
  t4578 = t4570 + t3999 + t4003;
  t4591 = -0.06*t392*t41;
  t4594 = -0.9063*t346;
  t4596 = -1.*t346*t183;
  t4597 = t4591 + t4594 + t4596;
  t4677 = -1.*t309*t4578;
  t4681 = t459*t4597;
  t4708 = t4677 + t4681;
  t4579 = -1.*t459*t4578;
  t4603 = -1.*t309*t4597;
  t4630 = t4579 + t4603;
  t4641 = t459*t4578;
  t4645 = t309*t4597;
  t4656 = t4641 + t4645;
  t4542 = t4402*t673;
  t4558 = t4213*t1136;
  t4671 = t4061*t758;
  t4673 = t4130*t758;
  t4934 = -0.06*t392*t172;
  t4935 = t3999 + t4934;
  t4936 = -1.*t309*t4935;
  t4949 = 0.06*t346*t172;
  t4950 = t4591 + t4949;
  t4953 = t459*t4950;
  t4963 = t4936 + t4953;
  t4995 = -1.*t459*t4935;
  t4997 = -1.*t309*t4950;
  t5006 = t4995 + t4997;
  t5017 = t459*t4935;
  t5018 = t309*t4950;
  t5034 = t5017 + t5018;
  t4746 = -1.*t4061*t1586;
  t4749 = -1.*t4130*t1586;
  t4756 = -1.*t4402*t2129;
  t4764 = -1.*t4213*t1646;
  t5135 = -0.9063*t392;
  t5158 = 0.06*t41*t346;
  t5161 = -1.*t392*t183;
  t5162 = t5135 + t5158 + t5161;
  t5221 = t459*t5162;
  t5223 = t5221 + t4603;
  t5176 = t309*t5162;
  t5210 = t5176 + t4681;
  t4640 = t4630*t886;
  t4665 = t4656*t886;
  t4711 = t4708*t1004;
  t4722 = t4708*t1253;
  t4723 = t4542 + t4558 + t4640 + t4665 + t4671 + t4673 + t4711 + t4722;
  t4726 = 1.142857*t269*t4723;
  t4732 = -1.*t4708*t673;
  t4738 = -1.*t4708*t1136;
  t4741 = -1.*t4630*t758;
  t4744 = -1.*t4656*t758;
  t4777 = t4732 + t4738 + t4741 + t4744 + t4746 + t4749 + t4756 + t4764;
  t4782 = 1.142857*t863*t4777;
  t4787 = t4726 + t4782;
  t5465 = 0.06*t392*t172;
  t5469 = t5158 + t5465;
  t5276 = t4402*t1586;
  t5291 = t4130*t1646;
  t5473 = t309*t5469;
  t5474 = t5473 + t4953;
  t5489 = t459*t5469;
  t5501 = t5489 + t4997;
  t5251 = -1.*t4130*t2329;
  t5252 = -1.*t4402*t2352;
  t4799 = -1.*t4402*t673;
  t4806 = -1.*t4213*t1136;
  t4807 = -1.*t4061*t758;
  t4816 = -1.*t4130*t758;
  t4818 = t4799 + t4806 + t4807 + t4816;
  t4860 = t4061*t886;
  t4869 = t4130*t886;
  t4870 = t4402*t1004;
  t4886 = t4213*t1253;
  t4891 = t4860 + t4869 + t4870 + t4886;
  t5655 = t2578*t346;
  t5659 = t5655 + t4934;
  t5669 = -1.*t309*t5659;
  t5673 = t392*t2578;
  t5676 = t5673 + t4949;
  t5677 = t459*t5676;
  t5681 = t5669 + t5677;
  t5688 = -1.*t459*t5659;
  t5689 = -1.*t309*t5676;
  t5696 = t5688 + t5689;
  t5698 = t459*t5659;
  t5699 = t309*t5676;
  t5702 = t5698 + t5699;
  t5364 = t4130*t1136;
  t5372 = t4708*t886;
  t5378 = t4402*t758;
  t5400 = t4656*t1253;
  t5413 = t5364 + t5372 + t5378 + t5400;
  t5418 = -1.*t4656*t1136;
  t5422 = -1.*t4708*t758;
  t5437 = -1.*t4402*t1586;
  t5442 = -1.*t4130*t1646;
  t5449 = t5418 + t5422 + t5437 + t5442;
  t5456 = t4656*t1136;
  t5457 = t4708*t758;
  t5777 = -1.*t2578*t346;
  t5779 = t5777 + t5465;
  t5789 = t309*t5779;
  t5798 = t5789 + t5677;
  t5802 = t459*t5779;
  t5808 = t5802 + t5689;
  t5565 = -1.*t4708*t1586;
  t5588 = -1.*t4656*t1646;
  t5772 = t758*t5681;
  t5823 = t1136*t5702;
  t5461 = t758*t4963;
  t5488 = t1253*t5474;
  t5502 = t886*t5501;
  t5526 = t1136*t5034;
  t5538 = -1.*t1136*t5474;
  t5550 = -1.*t758*t5501;
  t5856 = -1.*t5681*t1586;
  t5570 = -1.*t4963*t1586;
  t5861 = -1.*t5702*t1646;
  t5589 = -1.*t5034*t1646;
  t6099 = 1.142857*t863*t4818;
  t6108 = 1.142857*t269*t4891;
  t6109 = t6099 + t6108;
  t5901 = -1.*t4130*t1136;
  t5907 = -1.*t4402*t758;
  t5916 = t5901 + t5907;
  t5919 = t4402*t886;
  t5927 = t4130*t1253;
  t5944 = t5919 + t5927;
  t5977 = t886*t4963;
  t5987 = t1253*t5034;
  t5997 = t5364 + t5378 + t5977 + t5987;
  t6019 = -1.*t758*t4963;
  t6022 = -1.*t1136*t5034;
  t6023 = t6019 + t6022 + t5437 + t5442;
  t6168 = 1.142857*t269*t5916;
  t6176 = 1.142857*t1763*t5944;
  t6187 = 1.142857*t269*t5997;
  t6196 = 1.142857*t863*t6023;
  t6198 = t6168 + t6176 + t6187 + t6196;
  t6281 = 0.4999*t424;
  t6222 = t4040*t424;
  t6247 = 0.4999*t1517;
  t6250 = t4009*t1517;
  t6309 = -1.*t4009*t869;
  t6319 = -1.*t4040*t1517;
  t6353 = t4009*t424;
  t6367 = t4578*t869;
  t6368 = t4597*t632;
  t6385 = t4040*t632;
  t6398 = t6281 + t6353 + t6367 + t6368 + t6385;
  t6400 = -1.*t4597*t424;
  t6406 = -1.*t4040*t424;
  t6409 = 0.4999*t632;
  t6410 = -1.*t4578*t632;
  t6418 = -1.*t4009*t1517;
  t6425 = t6400 + t6406 + t6409 + t6410 + t6418;
  t6454 = t4597*t424;
  t6462 = t4578*t632;
  t6479 = -1.*t4578*t424;
  t6488 = -1.*t4597*t1517;
  t6539 = t5659*t632;
  t6463 = t4935*t632;
  t6470 = t5469*t632;
  t6550 = t424*t5676;
  t6473 = t424*t4950;
  t6474 = t869*t4950;
  t6565 = -1.*t424*t5659;
  t6481 = -1.*t424*t4935;
  t6483 = -1.*t424*t5469;
  t6487 = -1.*t632*t4950;
  t6571 = -1.*t5676*t1517;
  t6490 = -1.*t4950*t1517;
  t6598 = t4040*t869;
  t6599 = t4009*t632;
  t6601 = t6598 + t6409 + t6599;
  t6604 = -1.*t4009*t424;
  t6605 = 0.4999*t869;
  t6609 = -1.*t4040*t632;
  t6621 = t6604 + t6605 + t6609;
  t6634 = t4935*t869;
  t6637 = t632*t4950;
  t6639 = t6281 + t6353 + t6634 + t6385 + t6637;
  t6660 = -1.*t4935*t632;
  t6662 = -1.*t424*t4950;
  t6668 = t6406 + t6409 + t6660 + t6662 + t6418;
  t6726 = 1.142857*t1763*t6601;
  t6736 = 1.142857*t269*t6621;
  t6740 = 1.142857*t269*t6639;
  t6747 = 1.142857*t863*t6668;
  t6748 = t6726 + t6736 + t6740 + t6747;
  t6814 = 2.285714*t269*t863;
  t6815 = 2.285714*t269*t1763;
  t6817 = t6814 + t6815;
  p_output1[0]=var2[7]*(t1108 + t1323 + t1837 - 0.5*t1680*var2[7]);
  p_output1[1]=var2[7]*(-0.5*t1071*var2[2] - 0.5*(1.142857*t269*(t692 + t2027*t707) + 1.142857*(t1038 + t1940*t707)*t863)*var2[6] - 0.5*t2159*var2[7] - 0.5*(1.142857*t1763*t2098 + t2122 + t2148 + 1.142857*t2224*t269)*var2[8]);
  p_output1[2]=var2[7]*(-0.5*t1680*var2[2] - 0.5*t2159*var2[6] - 0.5*(t2374 + t2413)*var2[7] - 0.5*(t2374 + t2413 + t2530 + t2535)*var2[8]);
  p_output1[3]=var2[7]*(-0.5*(t1429 + t1679 + 1.142857*t1384*t2616 + 1.142857*t1801*t2668)*var2[2] - 0.5*(t2122 + t2148 + 1.142857*t2098*t2616 + 1.142857*t2224*t2668)*var2[6] - 0.5*(t2374 + t2413 + t2733 + t2739)*var2[7] - 0.5*(t2374 + t2413 + t2530 + t2535 + t2733 + t2739 + 1.142857*t2514*t2850 + 1.142857*t2616*t2892)*var2[8]);
  p_output1[4]=-0.5*t2990*var2[7];
  p_output1[5]=-0.5*t3010*var2[7];
  p_output1[6]=-0.5*t2990*var2[2] - 0.5*t3010*var2[6] - 1.*(t3025 + t3041)*var2[7] - 0.5*t3094*var2[8];
  p_output1[7]=-0.5*t3094*var2[7];
  p_output1[8]=var2[7]*(-0.5*(1.142857*t269*(t3187 + t1136*t707) + 1.142857*(t3196 + t1253*t707)*t863)*var2[2] - 0.5*t3218*var2[6] - 0.5*t3336*var2[7] - 0.5*(1.142857*t1158*t1763 + 1.142857*t1293*t269 + t3287 + t3335)*var2[8]);
  p_output1[9]=var2[7]*(-0.5*t3218*var2[2] - 0.5*(1.142857*t269*(t2027*t308 + t3184) + 1.142857*(t1940*t308 + t3198)*t863)*var2[6] - 0.5*t3536*var2[7] - 0.5*(1.142857*t1041*t269 + t3480 + t3523 + 1.142857*t1763*t779)*var2[8]);
  p_output1[10]=var2[7]*(-0.5*t3336*var2[2] - 0.5*t3536*var2[6] - 0.5*(t3630 + t3645)*var2[7] - 0.5*(t2983 + t3630 + t3645 + t3678)*var2[8]);
  p_output1[11]=var2[7]*(-0.5*(1.142857*t1158*t2616 + 1.142857*t1293*t2668 + t3287 + t3335)*var2[2] - 0.5*(1.142857*t1041*t2668 + t3480 + t3523 + 1.142857*t2616*t779)*var2[6] - 0.5*(t3630 + t3645 + t3748 + t3756)*var2[7] - 0.5*(1.142857*t1801*t2616 + 1.142857*t1384*t2850 + t2983 + t3630 + t3645 + t3678 + t3748 + t3756)*var2[8]);
  p_output1[12]=-0.5*t1317*var2[7];
  p_output1[13]=-0.5*t1071*var2[7];
  p_output1[14]=t1108 + t1323 + t1837 - 1.*t1680*var2[7];
  p_output1[15]=-0.5*t1818*var2[7];
  p_output1[16]=var2[7]*(-0.5*(1.142857*(-1.*t1136*t4061 - 1.*t2027*t4402 - 2.*t4061*t673 - 1.*t4130*t673 - 2.*t4213*t758 - 1.*t4319*t758)*t863 + 1.142857*t269*(2.*t1004*t4061 + t1253*t4061 + t1004*t4130 + t1940*t4402 + 2.*t4213*t886 + t4319*t886))*var2[6] - 0.5*t4787*var2[7] - 0.5*(1.142857*t269*t4818 + 1.142857*t1763*t4891 + 1.142857*(t4746 + t4749 + t4756 + t4764 - 1.*t1136*t4963 - 1.*t4963*t673 - 1.*t5006*t758 - 1.*t5034*t758)*t863 + 1.142857*t269*(t4542 + t4558 + t4671 + t4673 + t1004*t4963 + t1253*t4963 + t5006*t886 + t5034*t886))*var2[8]);
  p_output1[17]=var2[7]*(-0.5*t4787*var2[6] - 0.5*(1.142857*(-2.*t1646*t4656 - 2.*t1586*t4708 - 1.*t1136*t5210 + t5251 + t5252 - 1.*t5223*t758)*t863 + 1.142857*t269*(2.*t1136*t4656 + t1253*t5210 + t5276 + t5291 + 2.*t4708*t758 + t5223*t886))*var2[7] - 0.5*(1.142857*t1763*t5413 + 1.142857*t269*t5449 + 1.142857*t269*(t5276 + t5291 + t5456 + t5457 + t5461 + t5488 + t5502 + t5526) + 1.142857*(t5251 + t5252 + t5538 + t5550 + t5565 + t5570 + t5588 + t5589)*t863)*var2[8]);
  p_output1[18]=var2[7]*(-0.5*(1.142857*t2668*t4818 + 1.142857*t2616*t4891 + 1.142857*(t4746 + t4749 + t4756 + t4764 - 1.*t1136*t5681 - 1.*t5681*t673 - 1.*t5696*t758 - 1.*t5702*t758)*t863 + 1.142857*t269*(t4542 + t4558 + t4671 + t4673 + t1004*t5681 + t1253*t5681 + t5696*t886 + t5702*t886))*var2[6] - 0.5*(1.142857*t2616*t5413 + 1.142857*t2668*t5449 + 1.142857*(t5251 + t5252 + t5565 + t5588 - 1.*t1136*t5798 + t5856 + t5861 - 1.*t5808*t758)*t863 + 1.142857*t269*(t5276 + t5291 + t5456 + t5457 + t5772 + t1253*t5798 + t5823 + t5808*t886))*var2[7] - 0.5*(1.142857*t269*(t5276 + t5291 + t5461 + t5488 + t5502 + t5526 + t5772 + t5823) + 1.142857*t2616*t5916 + 1.142857*t2850*t5944 + 1.142857*t2616*t5997 + 1.142857*t2668*t6023 + 1.142857*t269*(t5437 + t5442 - 1.*t1136*t5702 - 1.*t5681*t758) + 1.142857*(t5251 + t5252 + t5538 + t5550 + t5570 + t5589 + t5856 + t5861)*t863 + 1.142857*t1763*(t5364 + t5378 + t1253*t5702 + t5681*t886))*var2[8]);
  p_output1[19]=-0.5*t6109*var2[7];
  p_output1[20]=-0.5*t6109*var2[6] - 1.*(1.142857*t269*t5413 + 1.142857*t5449*t863)*var2[7] - 0.5*t6198*var2[8];
  p_output1[21]=-0.5*t6198*var2[7];
  p_output1[22]=var2[7]*(-0.5*(1.142857*(-2.*t424*t4578 - 2.*t1517*t4597 - 1.*t424*t5162 + t6281 + t6309 + t6319 - 1.*t4597*t632)*t863 + 1.142857*t269*(2.*t424*t4597 + t6222 + t6247 + t6250 + 2.*t4578*t632 + t5162*t632 + t4597*t869))*var2[7] - 0.5*(1.142857*t1763*t6398 + 1.142857*t269*t6425 + 1.142857*t269*(t6222 + t6247 + t6250 + t6454 + t6462 + t6463 + t6470 + t6473 + t6474) + 1.142857*(t6281 + t6309 + t6319 + t6479 + t6481 + t6483 + t6487 + t6488 + t6490)*t863)*var2[8]);
  p_output1[23]=var2[7]*(-0.5*(1.142857*t2616*t6398 + 1.142857*t2668*t6425 + 1.142857*(-1.*t424*t5779 + t6281 + t6309 + t6319 - 1.*t5676*t632 + t6479 + t6488 + t6565 + t6571)*t863 + 1.142857*t269*(t6222 + t6247 + t6250 + t5779*t632 + t6454 + t6462 + t6539 + t6550 + t5676*t869))*var2[7] - 0.5*(1.142857*t269*(-1.*t424*t5676 - 1.*t5659*t632 + t6406 + t6409 + t6418) + 1.142857*t269*(t6222 + t6247 + t6250 + t6463 + t6470 + t6473 + t6474 + t6539 + t6550) + 1.142857*t2850*t6601 + 1.142857*t2616*t6621 + 1.142857*t2616*t6639 + 1.142857*t2668*t6668 + 1.142857*(t6281 + t6309 + t6319 + t6481 + t6483 + t6487 + t6490 + t6565 + t6571)*t863 + 1.142857*t1763*(t6281 + t5676*t632 + t6353 + t6385 + t5659*t869))*var2[8]);
  p_output1[24]=-1.*(1.142857*t269*t6398 + 1.142857*t6425*t863)*var2[7] - 0.5*t6748*var2[8];
  p_output1[25]=-0.5*t6748*var2[7];
  p_output1[26]=-0.5*(2.285714*t1763*t2616 + 2.285714*t2668*t269 + 2.285714*t269*t2850 + 2.285714*t2616*t863)*var2[7]*var2[8];
  p_output1[27]=-0.5*t6817*var2[8];
  p_output1[28]=-0.5*t6817*var2[7];
  p_output1[29]=0.03428571*t2616*var2[7]*var2[8];
  p_output1[30]=0.03428571*t269*var2[8];
  p_output1[31]=0.03428571*t269*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 32, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L7_J8_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L7_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

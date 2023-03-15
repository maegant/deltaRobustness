/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:27:34 GMT-08:00
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
  double t116;
  double t75;
  double t88;
  double t118;
  double t240;
  double t98;
  double t162;
  double t180;
  double t70;
  double t300;
  double t301;
  double t304;
  double t35;
  double t206;
  double t313;
  double t328;
  double t345;
  double t394;
  double t395;
  double t407;
  double t409;
  double t470;
  double t498;
  double t709;
  double t722;
  double t723;
  double t752;
  double t769;
  double t782;
  double t1023;
  double t1024;
  double t1032;
  double t985;
  double t991;
  double t997;
  double t1019;
  double t1190;
  double t1212;
  double t1251;
  double t1445;
  double t1449;
  double t1458;
  double t1482;
  double t1484;
  double t1486;
  double t1496;
  double t1501;
  double t1505;
  double t1545;
  double t1593;
  double t1613;
  double t1696;
  double t1713;
  double t1727;
  double t1073;
  double t1080;
  double t1082;
  double t1104;
  double t1107;
  double t1111;
  double t1138;
  double t1160;
  double t1780;
  double t1188;
  double t1274;
  double t1311;
  double t1318;
  double t1339;
  double t1341;
  double t1348;
  double t1354;
  double t2010;
  double t2017;
  double t2020;
  double t2060;
  double t2073;
  double t2075;
  double t2078;
  double t2100;
  double t2102;
  double t2153;
  double t2154;
  double t2180;
  double t2318;
  double t2371;
  double t2382;
  double t2386;
  double t2407;
  double t2415;
  double t2418;
  double t2423;
  double t2427;
  double t2428;
  double t2551;
  double t2555;
  double t2565;
  double t2581;
  double t2582;
  double t2584;
  double t637;
  double t650;
  double t698;
  double t788;
  double t818;
  double t3000;
  double t3008;
  double t3009;
  double t3024;
  double t848;
  double t871;
  double t918;
  double t928;
  double t971;
  double t1493;
  double t1494;
  double t1549;
  double t1551;
  double t1585;
  double t1590;
  double t1657;
  double t1682;
  double t1730;
  double t1734;
  double t1777;
  double t1785;
  double t1798;
  double t1827;
  double t1831;
  double t3048;
  double t3051;
  double t3107;
  double t3122;
  double t1847;
  double t1875;
  double t1886;
  double t3162;
  double t3167;
  double t3203;
  double t3232;
  double t3245;
  double t2025;
  double t2110;
  double t3530;
  double t3547;
  double t2394;
  double t2436;
  double t2461;
  double t3635;
  double t3654;
  double t3689;
  double t3708;
  double t3722;
  double t3723;
  double t2531;
  double t2542;
  double t2572;
  double t2630;
  double t2634;
  double t2707;
  double t2715;
  double t2721;
  double t2785;
  double t2820;
  double t2822;
  double t2852;
  double t2879;
  double t3811;
  double t3815;
  double t3817;
  double t4325;
  double t4331;
  double t4341;
  double t4349;
  double t4355;
  double t4529;
  double t4536;
  double t4564;
  double t4233;
  double t4236;
  double t4238;
  double t4244;
  double t4261;
  double t4265;
  double t5248;
  double t5304;
  double t5306;
  double t5213;
  double t5215;
  double t5217;
  double t5473;
  double t5476;
  double t5493;
  double t5494;
  double t4211;
  double t4229;
  double t5698;
  double t5699;
  double t4290;
  double t4294;
  double t4298;
  double t5784;
  double t5788;
  double t5807;
  double t4458;
  double t4495;
  double t5845;
  double t5847;
  double t4524;
  double t4575;
  double t5850;
  double t5854;
  double t4577;
  double t4595;
  double t4607;
  double t4613;
  double t4698;
  double t4735;
  double t4737;
  double t4754;
  double t4814;
  double t4840;
  double t4863;
  double t4884;
  double t4952;
  double t4990;
  double t4991;
  double t4998;
  double t5007;
  double t5010;
  double t5019;
  double t5027;
  double t5041;
  double t5053;
  double t5063;
  double t5064;
  double t5068;
  double t5070;
  double t5079;
  double t5080;
  double t5092;
  double t5102;
  double t5115;
  double t5155;
  double t5179;
  double t5211;
  double t5339;
  double t6001;
  double t6011;
  double t6015;
  double t6048;
  double t6055;
  double t6058;
  double t5451;
  double t5467;
  double t5489;
  double t5497;
  double t5506;
  double t5509;
  double t5514;
  double t5548;
  double t5569;
  double t5575;
  double t5579;
  double t5583;
  double t5636;
  double t6365;
  double t6371;
  double t6380;
  double t6383;
  double t6385;
  double t6337;
  double t6341;
  double t6343;
  double t6357;
  double t6359;
  double t6186;
  double t6191;
  double t6208;
  double t6221;
  double t6223;
  double t6292;
  double t6300;
  double t6306;
  double t6312;
  double t6313;
  double t6316;
  double t6321;
  double t6330;
  double t2028;
  double t2036;
  double t2120;
  double t2141;
  double t2057;
  double t2105;
  double t2107;
  double t2144;
  double t2182;
  double t2193;
  double t2221;
  double t3504;
  double t3509;
  double t3572;
  double t3590;
  double t3511;
  double t3527;
  double t3550;
  double t3554;
  double t3598;
  double t3599;
  double t3600;
  double t3601;
  double t3615;
  double t3634;
  double t3670;
  double t3735;
  double t3744;
  double t3752;
  double t3786;
  double t3789;
  double t3794;
  double t3796;
  double t3798;
  double t3807;
  double t3822;
  double t3842;
  double t3877;
  double t3962;
  double t3969;
  double t3977;
  double t3988;
  double t4002;
  double t4033;
  double t4054;
  double t4070;
  double t4072;
  double t4083;
  double t4084;
  double t4092;
  double t4104;
  double t4105;
  double t4348;
  double t4424;
  double t4454;
  double t4459;
  double t4519;
  double t4649;
  double t4667;
  double t4766;
  double t4843;
  double t4892;
  double t4906;
  double t4907;
  double t5228;
  double t5314;
  double t5329;
  double t5347;
  double t5358;
  double t5366;
  double t5458;
  double t5465;
  double t5537;
  double t5572;
  double t5619;
  double t5642;
  double t6639;
  double t5688;
  double t5695;
  double t5720;
  double t5723;
  double t5734;
  double t6640;
  double t5759;
  double t5765;
  double t5769;
  double t6646;
  double t6647;
  double t6649;
  double t5848;
  double t5878;
  double t5879;
  double t6665;
  double t5900;
  double t5905;
  double t5906;
  double t5912;
  double t5914;
  double t5925;
  double t6678;
  double t6684;
  double t5972;
  double t5974;
  double t5983;
  double t6687;
  double t6700;
  double t6704;
  double t6711;
  double t6712;
  double t6715;
  double t6718;
  double t6719;
  double t6721;
  double t6722;
  double t6726;
  double t6728;
  double t6033;
  double t6059;
  double t6070;
  double t6733;
  double t6077;
  double t6081;
  double t6082;
  double t6743;
  double t6107;
  double t6112;
  double t6121;
  double t6134;
  double t6154;
  double t6157;
  double t6308;
  double t2513;
  double t2697;
  double t2753;
  double t2887;
  double t2896;
  double t1557;
  double t1767;
  double t1840;
  double t1895;
  double t1962;
  double t847;
  double t980;
  double t1173;
  double t1428;
  double t1430;
  double t1432;
  double t1964;
  double t6828;
  double t2902;
  double t6507;
  double t6508;
  double t6511;
  double t6513;
  double t6514;
  double t3769;
  double t3775;
  double t3907;
  double t3912;
  double t3921;
  double t4027;
  double t4032;
  double t4121;
  double t4142;
  double t6601;
  double t6603;
  double t6605;
  double t6608;
  double t6612;
  double t6614;
  double t6617;
  double t6628;
  double t6631;
  double t5336;
  double t5415;
  double t5540;
  double t5656;
  double t5664;
  double t6732;
  double t6735;
  double t6747;
  double t6757;
  double t6760;
  double t6075;
  double t6083;
  double t6129;
  double t6159;
  double t6161;
  double t6813;
  double t6814;
  double t6815;
  double t6816;
  double t6823;
  double t6333;
  double t6841;
  double t7109;
  double t7110;
  double t7111;
  double t7115;
  double t7116;
  double t7091;
  double t7094;
  double t7097;
  double t7098;
  double t7099;
  double t7083;
  double t7085;
  double t7086;
  double t6449;
  double t6451;
  double t6462;
  double t6464;
  double t6465;
  double t6554;
  double t6555;
  double t6557;
  double t6569;
  double t6572;
  double t3371;
  double t3396;
  double t3416;
  double t3419;
  double t3446;
  double t6896;
  double t6898;
  double t6904;
  double t6915;
  double t6916;
  double t4456;
  double t4666;
  double t4848;
  double t4948;
  double t4986;
  double t6657;
  double t6673;
  double t6674;
  double t6686;
  double t6693;
  double t6965;
  double t6973;
  double t6975;
  double t6978;
  double t6980;
  double t6987;
  double t6988;
  double t6989;
  double t6990;
  double t5889;
  double t5909;
  double t5969;
  double t5984;
  double t5993;
  double t6789;
  double t6790;
  double t6795;
  double t6796;
  double t6806;
  double t7034;
  double t7035;
  double t7039;
  double t7041;
  double t7044;
  double t7045;
  double t7049;
  double t7050;
  double t7058;
  double t6362;
  double t6842;
  double t7102;
  double t7250;
  double t7255;
  double t7257;
  double t7260;
  double t7263;
  double t7239;
  double t7241;
  double t7243;
  double t6429;
  double t6433;
  double t6434;
  double t6442;
  double t6445;
  double t6539;
  double t6541;
  double t6545;
  double t6546;
  double t6548;
  double t3033;
  double t3037;
  double t3138;
  double t3246;
  double t3268;
  double t6880;
  double t6881;
  double t6886;
  double t6890;
  double t6891;
  double t7158;
  double t7159;
  double t7163;
  double t7165;
  double t7167;
  double t4309;
  double t6650;
  double t6954;
  double t6957;
  double t6958;
  double t6960;
  double t6962;
  double t7207;
  double t7208;
  double t7209;
  double t7210;
  double t7211;
  double t7214;
  double t7218;
  double t7219;
  double t7221;
  double t5745;
  double t5777;
  double t5822;
  double t5823;
  double t5828;
  double t6766;
  double t6770;
  double t6775;
  double t6777;
  double t6778;
  double t7012;
  double t7013;
  double t7015;
  double t7017;
  double t7024;
  double t7025;
  double t7026;
  double t7027;
  double t7029;
  double t6389;
  double t6846;
  double t7118;
  double t7264;
  double t7331;
  double t7333;
  double t7334;
  double t7370;
  double t7371;
  double t531;
  t116 = Cos(var1[7]);
  t75 = Cos(var1[8]);
  t88 = Sin(var1[7]);
  t118 = Sin(var1[8]);
  t240 = Cos(var1[6]);
  t98 = -1.*t75*t88;
  t162 = -1.*t116*t118;
  t180 = t98 + t162;
  t70 = Sin(var1[6]);
  t300 = t116*t75;
  t301 = -1.*t88*t118;
  t304 = t300 + t301;
  t35 = Sin(var1[2]);
  t206 = t70*t180;
  t313 = t240*t304;
  t328 = t206 + t313;
  t345 = -1.*t35*t328;
  t394 = Cos(var1[2]);
  t395 = t240*t180;
  t407 = -1.*t70*t304;
  t409 = t395 + t407;
  t470 = t394*t409;
  t498 = t345 + t470;
  t709 = -1.*t75;
  t722 = 1. + t709;
  t723 = -1.3127*t722;
  t752 = -1.3127*t75;
  t769 = -0.06*t118;
  t782 = t723 + t752 + t769;
  t1023 = t75*t88;
  t1024 = t116*t118;
  t1032 = t1023 + t1024;
  t985 = 0.9063*t75;
  t991 = t75*t782;
  t997 = 0.06*t75*t118;
  t1019 = t985 + t991 + t997;
  t1190 = -1.*t116*t75;
  t1212 = t88*t118;
  t1251 = t1190 + t1212;
  t1445 = -1.*t116;
  t1449 = 1. + t1445;
  t1458 = -0.9063*t1449;
  t1482 = -0.06*t75*t88;
  t1484 = t116*t782;
  t1486 = t1458 + t1482 + t1484;
  t1496 = 0.06*t116*t75;
  t1501 = 0.9063*t88;
  t1505 = t88*t782;
  t1545 = t1496 + t1501 + t1505;
  t1593 = -0.06*t116*t118;
  t1613 = t1482 + t1593;
  t1696 = -0.06*t116*t75;
  t1713 = 0.06*t88*t118;
  t1727 = t1696 + t1713;
  t1073 = -1.*t70*t1032;
  t1080 = t1073 + t313;
  t1082 = t394*t1080;
  t1104 = t240*t1032;
  t1107 = t70*t304;
  t1111 = t1104 + t1107;
  t1138 = -1.*t35*t1111;
  t1160 = t1082 + t1138;
  t1780 = 0.4999*t304;
  t1188 = -1.*t70*t180;
  t1274 = t240*t1251;
  t1311 = t1188 + t1274;
  t1318 = t394*t1311;
  t1339 = t70*t1251;
  t1341 = t395 + t1339;
  t1348 = -1.*t35*t1341;
  t1354 = t1318 + t1348;
  t2010 = t394*t328;
  t2017 = t35*t409;
  t2020 = t2010 + t2017;
  t2060 = -1.*t394*t328;
  t2073 = -1.*t35*t409;
  t2075 = t2060 + t2073;
  t2078 = t35*t1080;
  t2100 = t394*t1111;
  t2102 = t2078 + t2100;
  t2153 = t35*t1311;
  t2154 = t394*t1341;
  t2180 = t2153 + t2154;
  t2318 = 0.4999*t70;
  t2371 = t70*t1486;
  t2382 = t240*t1545;
  t2386 = t2318 + t2371 + t2382;
  t2407 = -1.*t240;
  t2415 = 1. + t2407;
  t2418 = -0.4999*t2415;
  t2423 = t240*t1486;
  t2427 = -1.*t70*t1545;
  t2428 = t2418 + t2423 + t2427;
  t2551 = -1.*t70*t1613;
  t2555 = t240*t1727;
  t2565 = t2551 + t2555;
  t2581 = t240*t1613;
  t2582 = t70*t1727;
  t2584 = t2581 + t2582;
  t637 = Power(t75,2);
  t650 = -0.06*t637;
  t698 = 0.9063*t118;
  t788 = t782*t118;
  t818 = t650 + t698 + t788;
  t3000 = -1.*t240*t304;
  t3008 = t1188 + t3000;
  t3009 = t35*t3008;
  t3024 = t3009 + t470;
  t848 = -0.9063*t118;
  t871 = -1.*t782*t118;
  t918 = Power(t118,2);
  t928 = -0.06*t918;
  t971 = 0. + t848 + t871 + t928;
  t1493 = -1.*t1486*t180;
  t1494 = 0.4999*t1032;
  t1549 = -1.*t1545*t304;
  t1551 = t1493 + t1494 + t1549;
  t1585 = 0.4999*t180;
  t1590 = t1486*t180;
  t1657 = t1613*t1032;
  t1682 = t1545*t304;
  t1730 = t304*t1727;
  t1734 = t1585 + t1590 + t1657 + t1682 + t1730;
  t1777 = -1.*t1545*t180;
  t1785 = -1.*t1613*t304;
  t1798 = -1.*t180*t1727;
  t1827 = -1.*t1486*t1251;
  t1831 = t1777 + t1780 + t1785 + t1798 + t1827;
  t3048 = -1.*t240*t1032;
  t3051 = t3048 + t407;
  t3107 = t35*t3051;
  t3122 = t1082 + t3107;
  t1847 = t1545*t1032;
  t1875 = t1486*t304;
  t1886 = t1847 + t1780 + t1875;
  t3162 = -1.*t240*t180;
  t3167 = -1.*t70*t1251;
  t3203 = t3162 + t3167;
  t3232 = t35*t3203;
  t3245 = t1318 + t3232;
  t2025 = -1.*t35*t1080;
  t2110 = -1.*t35*t1311;
  t3530 = t394*t3008;
  t3547 = t3530 + t2073;
  t2394 = -1.*t2386*t328;
  t2436 = -1.*t2428*t409;
  t2461 = t2394 + t2436;
  t3635 = 0.4999*t240;
  t3654 = t3635 + t2423 + t2427;
  t3689 = -0.4999*t70;
  t3708 = -1.*t70*t1486;
  t3722 = -1.*t240*t1545;
  t3723 = t3689 + t3708 + t3722;
  t2531 = t2386*t328;
  t2542 = t2428*t409;
  t2572 = t1080*t2565;
  t2630 = t1111*t2584;
  t2634 = t2531 + t2542 + t2572 + t2630;
  t2707 = t2428*t1080;
  t2715 = t2386*t1111;
  t2721 = t2707 + t2715;
  t2785 = -1.*t409*t2565;
  t2820 = -1.*t328*t2584;
  t2822 = -1.*t2428*t1311;
  t2852 = -1.*t2386*t1341;
  t2879 = t2785 + t2820 + t2822 + t2852;
  t3811 = -1.*t240*t1613;
  t3815 = -1.*t70*t1727;
  t3817 = t3811 + t3815;
  t4325 = -0.9063*t88;
  t4331 = -1.*t88*t782;
  t4341 = t1696 + t4325 + t4331;
  t4349 = 0.9063*t116;
  t4355 = t4349 + t1482 + t1484;
  t4529 = 0.06*t75*t88;
  t4536 = 0.06*t116*t118;
  t4564 = t4529 + t4536;
  t4233 = t70*t1032;
  t4236 = t4233 + t1274;
  t4238 = t394*t4236;
  t4244 = t1104 + t3167;
  t4261 = t35*t4244;
  t4265 = t4238 + t4261;
  t5248 = t240*t4355;
  t5304 = t70*t4341;
  t5306 = t5248 + t5304;
  t5213 = -1.*t70*t4355;
  t5215 = t240*t4341;
  t5217 = t5213 + t5215;
  t5473 = t70*t4564;
  t5476 = t5473 + t2555;
  t5493 = t240*t4564;
  t5494 = t5493 + t3815;
  t4211 = 0.03428571*var2[8]*t2180;
  t4229 = 1.142857*t1019*t2020;
  t5698 = -0.06*t75;
  t5699 = 0. + t5698;
  t4290 = 1.142857*t1019*t4265;
  t4294 = 1.142857*t818*t2180;
  t4298 = 1.142857*t971*t2180;
  t5784 = t5699*t75;
  t5788 = 0.06*t637;
  t5807 = t5784 + t5788 + t848 + t871 + t928;
  t4458 = 1.142857*t1831*t2020;
  t4495 = t1545*t180;
  t5845 = t5699*t88;
  t5847 = t5845 + t1593;
  t4524 = t1613*t304;
  t4575 = t4564*t304;
  t5850 = t116*t5699;
  t5854 = t5850 + t1713;
  t4577 = t180*t1727;
  t4595 = t1032*t1727;
  t4607 = 0.4999*t1251;
  t4613 = t1486*t1251;
  t4698 = -1.*t180*t1613;
  t4735 = -1.*t180*t4564;
  t4737 = -1.*t1486*t1032;
  t4754 = -1.*t304*t1727;
  t4814 = -1.*t1545*t1251;
  t4840 = -1.*t1727*t1251;
  t4863 = 1.142857*t1886*t4265;
  t4884 = 1.142857*t1551*t2180;
  t4952 = 1.142857*t1734*t2180;
  t4990 = Power(t2020,2);
  t4991 = 2.285714*t4990;
  t4998 = 2.285714*t2020*t4265;
  t5007 = 2.285714*t2102*t2180;
  t5010 = Power(t2180,2);
  t5019 = 2.285714*t5010;
  t5027 = t4991 + t4998 + t5007 + t5019;
  t5041 = -0.5*var2[0]*t5027;
  t5053 = 2.285714*t498*t2020;
  t5063 = -1.*t35*t4236;
  t5064 = t394*t4244;
  t5068 = t5063 + t5064;
  t5070 = 1.142857*t2020*t5068;
  t5079 = 1.142857*t498*t4265;
  t5080 = 1.142857*t1160*t2180;
  t5092 = 1.142857*t2102*t1354;
  t5102 = 2.285714*t2180*t1354;
  t5115 = t5053 + t5070 + t5079 + t5080 + t5092 + t5102;
  t5155 = -0.5*var2[1]*t5115;
  t5179 = 1.142857*t2721*t4265;
  t5211 = 1.142857*t2461*t2180;
  t5339 = 1.142857*t2634*t2180;
  t6001 = -1.*t70*t5847;
  t6011 = t240*t5854;
  t6015 = t6001 + t6011;
  t6048 = t240*t5847;
  t6055 = t70*t5854;
  t6058 = t6048 + t6055;
  t5451 = 1.142857*t2020*t2879;
  t5467 = t409*t2565;
  t5489 = t1111*t5476;
  t5497 = t1080*t5494;
  t5506 = t328*t2584;
  t5509 = t2428*t1311;
  t5514 = t2386*t1341;
  t5548 = -1.*t328*t5476;
  t5569 = -1.*t409*t5494;
  t5575 = -1.*t2565*t1311;
  t5579 = -1.*t2386*t4236;
  t5583 = -1.*t2428*t4244;
  t5636 = -1.*t2584*t1341;
  t6365 = 1.142857*t818*t2020;
  t6371 = 1.142857*t971*t2020;
  t6380 = 1.142857*t1019*t2102;
  t6383 = 1.142857*t1019*t2180;
  t6385 = t6365 + t6371 + t6380 + t6383;
  t6337 = 1.142857*t1551*t2020;
  t6341 = 1.142857*t1734*t2020;
  t6343 = 1.142857*t1831*t2102;
  t6357 = 1.142857*t1886*t2180;
  t6359 = t6337 + t6341 + t6343 + t6357;
  t6186 = 2.285714*t2020*t2102;
  t6191 = 2.285714*t2020*t2180;
  t6208 = t6186 + t6191;
  t6221 = 1.142857*t498*t2102;
  t6223 = 1.142857*t2020*t1160;
  t6292 = 1.142857*t498*t2180;
  t6300 = 1.142857*t2020*t1354;
  t6306 = t6221 + t6223 + t6292 + t6300;
  t6312 = 1.142857*t2020*t2461;
  t6313 = 1.142857*t2020*t2634;
  t6316 = 1.142857*t2721*t2180;
  t6321 = 1.142857*t2102*t2879;
  t6330 = t6312 + t6313 + t6316 + t6321;
  t2028 = -1.*t394*t1111;
  t2036 = t2025 + t2028;
  t2120 = -1.*t394*t1341;
  t2141 = t2110 + t2120;
  t2057 = 1.142857*t2020*t2036;
  t2105 = 1.142857*t2075*t2102;
  t2107 = 2.285714*t498*t1160;
  t2144 = 1.142857*t2020*t2141;
  t2182 = 1.142857*t2075*t2180;
  t2193 = 2.285714*t498*t1354;
  t2221 = t2057 + t2105 + t2107 + t2144 + t2182 + t2193;
  t3504 = t394*t3051;
  t3509 = t2025 + t3504;
  t3572 = t394*t3203;
  t3590 = t2110 + t3572;
  t3511 = 1.142857*t2020*t3509;
  t3527 = 1.142857*t498*t3122;
  t3550 = 1.142857*t3547*t2102;
  t3554 = 1.142857*t3024*t1160;
  t3598 = 1.142857*t2020*t3590;
  t3599 = 1.142857*t498*t3245;
  t3600 = 1.142857*t3547*t2180;
  t3601 = 1.142857*t3024*t1354;
  t3615 = t3511 + t3527 + t3550 + t3554 + t3598 + t3599 + t3600 + t3601;
  t3634 = -1.*t2428*t3008;
  t3670 = -1.*t3654*t328;
  t3735 = -1.*t3723*t409;
  t3744 = -1.*t2386*t409;
  t3752 = t3634 + t3670 + t3735 + t3744;
  t3786 = t2428*t3008;
  t3789 = t3654*t328;
  t3794 = t3723*t409;
  t3796 = t2386*t409;
  t3798 = t3051*t2565;
  t3807 = t1111*t2565;
  t3822 = t1080*t3817;
  t3842 = t1080*t2584;
  t3877 = t3786 + t3789 + t3794 + t3796 + t3798 + t3807 + t3822 + t3842;
  t3962 = t3723*t1080;
  t3969 = t2386*t1080;
  t3977 = t2428*t3051;
  t3988 = t3654*t1111;
  t4002 = t3962 + t3969 + t3977 + t3988;
  t4033 = -1.*t3008*t2565;
  t4054 = -1.*t328*t2565;
  t4070 = -1.*t409*t3817;
  t4072 = -1.*t409*t2584;
  t4083 = -1.*t3723*t1311;
  t4084 = -1.*t2386*t1311;
  t4092 = -1.*t2428*t3203;
  t4104 = -1.*t3654*t1341;
  t4105 = t4033 + t4054 + t4070 + t4072 + t4083 + t4084 + t4092 + t4104;
  t4348 = -1.*t4341*t180;
  t4424 = -1.*t4355*t304;
  t4454 = t4348 + t1777 + t1780 + t4424 + t1827;
  t4459 = t4341*t180;
  t4519 = t4355*t304;
  t4649 = t4459 + t4495 + t4519 + t4524 + t4575 + t4577 + t4595 + t4607 + t4613;
  t4667 = -1.*t4355*t180;
  t4766 = -1.*t4341*t1251;
  t4843 = t1585 + t4667 + t4698 + t4735 + t4737 + t4754 + t4766 + t4814 + t4840;
  t4892 = t4355*t1032;
  t4906 = t4341*t304;
  t4907 = t1585 + t1590 + t4892 + t4906 + t1682;
  t5228 = t5217*t1080;
  t5314 = t5306*t1111;
  t5329 = t2531 + t5228 + t2542 + t5314;
  t5347 = -1.*t5306*t328;
  t5358 = -1.*t5217*t409;
  t5366 = t5347 + t5358 + t2822 + t2852;
  t5458 = t5306*t328;
  t5465 = t5217*t409;
  t5537 = t5458 + t5465 + t5467 + t5489 + t5497 + t5506 + t5509 + t5514;
  t5572 = -1.*t5217*t1311;
  t5619 = -1.*t5306*t1341;
  t5642 = t5548 + t5569 + t5572 + t5575 + t5579 + t5583 + t5619 + t5636;
  t6639 = 0.03428571*var2[8]*t1354;
  t5688 = -0.9063*t75;
  t5695 = -1.*t75*t782;
  t5720 = -1.*t5699*t118;
  t5723 = -0.12*t75*t118;
  t5734 = t5688 + t5695 + t5720 + t5723;
  t6640 = 1.142857*t1019*t498;
  t5759 = t5699*t118;
  t5765 = 0.12*t75*t118;
  t5769 = t985 + t991 + t5759 + t5765;
  t6646 = 1.142857*t1019*t5068;
  t6647 = 1.142857*t818*t1354;
  t6649 = 1.142857*t971*t1354;
  t5848 = -1.*t5847*t304;
  t5878 = -1.*t180*t5854;
  t5879 = t1777 + t1780 + t5848 + t5878 + t1827;
  t6665 = 1.142857*t1831*t498;
  t5900 = t5847*t304;
  t5905 = t180*t5854;
  t5906 = t4495 + t5900 + t4524 + t4575 + t5905 + t4577 + t4595 + t4607 + t4613;
  t5912 = -1.*t180*t5847;
  t5914 = -1.*t5854*t1251;
  t5925 = t1585 + t5912 + t4698 + t4735 + t4737 + t4754 + t4814 + t5914 + t4840;
  t6678 = 1.142857*t1886*t5068;
  t6684 = 1.142857*t1551*t1354;
  t5972 = t5847*t1032;
  t5974 = t304*t5854;
  t5983 = t1585 + t1590 + t5972 + t1682 + t5974;
  t6687 = 1.142857*t1734*t1354;
  t6700 = -0.5*var2[0]*t5115;
  t6704 = Power(t498,2);
  t6711 = 2.285714*t6704;
  t6712 = 2.285714*t498*t5068;
  t6715 = 2.285714*t1160*t1354;
  t6718 = Power(t1354,2);
  t6719 = 2.285714*t6718;
  t6721 = t6711 + t6712 + t6715 + t6719;
  t6722 = -0.5*var2[1]*t6721;
  t6726 = 1.142857*t2721*t5068;
  t6728 = 1.142857*t2461*t1354;
  t6033 = t1080*t6015;
  t6059 = t1111*t6058;
  t6070 = t2531 + t2542 + t6033 + t6059;
  t6733 = 1.142857*t2634*t1354;
  t6077 = -1.*t409*t6015;
  t6081 = -1.*t328*t6058;
  t6082 = t6077 + t6081 + t2822 + t2852;
  t6743 = 1.142857*t498*t2879;
  t6107 = t409*t6015;
  t6112 = t328*t6058;
  t6121 = t6107 + t6112 + t5467 + t5489 + t5497 + t5506 + t5509 + t5514;
  t6134 = -1.*t6015*t1311;
  t6154 = -1.*t6058*t1341;
  t6157 = t5548 + t5569 + t6134 + t5575 + t5579 + t5583 + t6154 + t5636;
  t6308 = -0.5*var2[8]*t6306;
  t2513 = 1.142857*t498*t2461;
  t2697 = 1.142857*t498*t2634;
  t2753 = 1.142857*t2721*t1354;
  t2887 = 1.142857*t1160*t2879;
  t2896 = t2513 + t2697 + t2753 + t2887;
  t1557 = 1.142857*t1551*t498;
  t1767 = 1.142857*t1734*t498;
  t1840 = 1.142857*t1831*t1160;
  t1895 = 1.142857*t1886*t1354;
  t1962 = t1557 + t1767 + t1840 + t1895;
  t847 = 1.142857*t818*t498;
  t980 = 1.142857*t971*t498;
  t1173 = 1.142857*t1019*t1160;
  t1428 = 1.142857*t1019*t1354;
  t1430 = t847 + t980 + t1173 + t1428;
  t1432 = -0.5*var2[7]*t1430;
  t1964 = -0.5*var2[6]*t1962;
  t6828 = t2107 + t2193;
  t2902 = -0.5*var2[2]*t2896;
  t6507 = 1.142857*t2075*t2461;
  t6508 = 1.142857*t2075*t2634;
  t6511 = 1.142857*t2721*t2141;
  t6513 = 1.142857*t2036*t2879;
  t6514 = t6507 + t6508 + t6511 + t6513;
  t3769 = 1.142857*t2020*t3752;
  t3775 = 1.142857*t3024*t2461;
  t3907 = 1.142857*t2020*t3877;
  t3912 = 1.142857*t3024*t2634;
  t3921 = 1.142857*t2721*t3245;
  t4027 = 1.142857*t4002*t2180;
  t4032 = 1.142857*t3122*t2879;
  t4121 = 1.142857*t2102*t4105;
  t4142 = t3769 + t3775 + t3907 + t3912 + t3921 + t4027 + t4032 + t4121;
  t6601 = 1.142857*t498*t3752;
  t6603 = 1.142857*t3547*t2461;
  t6605 = 1.142857*t498*t3877;
  t6608 = 1.142857*t3547*t2634;
  t6612 = 1.142857*t2721*t3590;
  t6614 = 1.142857*t4002*t1354;
  t6617 = 1.142857*t3509*t2879;
  t6628 = 1.142857*t1160*t4105;
  t6631 = t6601 + t6603 + t6605 + t6608 + t6612 + t6614 + t6617 + t6628;
  t5336 = 1.142857*t5329*t2180;
  t5415 = 1.142857*t2020*t5366;
  t5540 = 1.142857*t2020*t5537;
  t5656 = 1.142857*t2102*t5642;
  t5664 = t5179 + t5211 + t5336 + t5339 + t5415 + t5451 + t5540 + t5656;
  t6732 = 1.142857*t5329*t1354;
  t6735 = 1.142857*t498*t5366;
  t6747 = 1.142857*t498*t5537;
  t6757 = 1.142857*t1160*t5642;
  t6760 = t6726 + t6728 + t6732 + t6733 + t6735 + t6743 + t6747 + t6757;
  t6075 = 1.142857*t6070*t2180;
  t6083 = 1.142857*t2020*t6082;
  t6129 = 1.142857*t2020*t6121;
  t6159 = 1.142857*t2102*t6157;
  t6161 = t5179 + t5211 + t6075 + t5339 + t6083 + t5451 + t6129 + t6159;
  t6813 = 1.142857*t6070*t1354;
  t6814 = 1.142857*t498*t6082;
  t6815 = 1.142857*t498*t6121;
  t6816 = 1.142857*t1160*t6157;
  t6823 = t6726 + t6728 + t6813 + t6733 + t6814 + t6743 + t6815 + t6816;
  t6333 = -0.5*var2[8]*t6330;
  t6841 = -0.5*var2[8]*t2896;
  t7109 = 1.142857*t1019*t2461;
  t7110 = 1.142857*t971*t2721;
  t7111 = 1.142857*t1019*t2634;
  t7115 = 1.142857*t818*t2879;
  t7116 = t7109 + t7110 + t7111 + t7115;
  t7091 = 1.142857*t1831*t2461;
  t7094 = 1.142857*t1734*t2721;
  t7097 = 1.142857*t1886*t2634;
  t7098 = 1.142857*t1551*t2879;
  t7099 = t7091 + t7094 + t7097 + t7098;
  t7083 = 2.285714*t2721*t2634;
  t7085 = 2.285714*t2461*t2879;
  t7086 = t7083 + t7085;
  t6449 = 1.142857*t1551*t2075;
  t6451 = 1.142857*t1734*t2075;
  t6462 = 1.142857*t1831*t2036;
  t6464 = 1.142857*t1886*t2141;
  t6465 = t6449 + t6451 + t6462 + t6464;
  t6554 = 1.142857*t1551*t3547;
  t6555 = 1.142857*t1734*t3547;
  t6557 = 1.142857*t1831*t3509;
  t6569 = 1.142857*t1886*t3590;
  t6572 = t6554 + t6555 + t6557 + t6569;
  t3371 = 1.142857*t1551*t3024;
  t3396 = 1.142857*t1734*t3024;
  t3416 = 1.142857*t1831*t3122;
  t3419 = 1.142857*t1886*t3245;
  t3446 = t3371 + t3396 + t3416 + t3419;
  t6896 = 1.142857*t1831*t3752;
  t6898 = 1.142857*t1734*t4002;
  t6904 = 1.142857*t1886*t3877;
  t6915 = 1.142857*t1551*t4105;
  t6916 = t6896 + t6898 + t6904 + t6915;
  t4456 = 1.142857*t4454*t2020;
  t4666 = 1.142857*t4649*t2020;
  t4848 = 1.142857*t4843*t2102;
  t4948 = 1.142857*t4907*t2180;
  t4986 = t4456 + t4458 + t4666 + t4848 + t4863 + t4884 + t4948 + t4952;
  t6657 = 1.142857*t4454*t498;
  t6673 = 1.142857*t4649*t498;
  t6674 = 1.142857*t4843*t1160;
  t6686 = 1.142857*t4907*t1354;
  t6693 = t6657 + t6665 + t6673 + t6674 + t6678 + t6684 + t6686 + t6687;
  t6965 = 1.142857*t4843*t2461;
  t6973 = 1.142857*t1734*t5329;
  t6975 = 1.142857*t4649*t2721;
  t6978 = 1.142857*t4907*t2634;
  t6980 = 1.142857*t1831*t5366;
  t6987 = 1.142857*t4454*t2879;
  t6988 = 1.142857*t1886*t5537;
  t6989 = 1.142857*t1551*t5642;
  t6990 = t6965 + t6973 + t6975 + t6978 + t6980 + t6987 + t6988 + t6989;
  t5889 = 1.142857*t5879*t2020;
  t5909 = 1.142857*t5906*t2020;
  t5969 = 1.142857*t5925*t2102;
  t5984 = 1.142857*t5983*t2180;
  t5993 = t5889 + t4458 + t5909 + t5969 + t4863 + t4884 + t5984 + t4952;
  t6789 = 1.142857*t5879*t498;
  t6790 = 1.142857*t5906*t498;
  t6795 = 1.142857*t5925*t1160;
  t6796 = 1.142857*t5983*t1354;
  t6806 = t6789 + t6665 + t6790 + t6795 + t6678 + t6684 + t6796 + t6687;
  t7034 = 1.142857*t5925*t2461;
  t7035 = 1.142857*t5906*t2721;
  t7039 = 1.142857*t1734*t6070;
  t7041 = 1.142857*t5983*t2634;
  t7044 = 1.142857*t1831*t6082;
  t7045 = 1.142857*t5879*t2879;
  t7049 = 1.142857*t1886*t6121;
  t7050 = 1.142857*t1551*t6157;
  t7058 = t7034 + t7035 + t7039 + t7041 + t7044 + t7045 + t7049 + t7050;
  t6362 = -0.5*var2[8]*t6359;
  t6842 = -0.5*var2[8]*t1962;
  t7102 = -0.5*var2[8]*t7099;
  t7250 = 1.142857*t971*t1886;
  t7255 = 1.142857*t1019*t1551;
  t7257 = 1.142857*t1019*t1734;
  t7260 = 1.142857*t818*t1831;
  t7263 = t7250 + t7255 + t7257 + t7260;
  t7239 = 2.285714*t1886*t1734;
  t7241 = 2.285714*t1551*t1831;
  t7243 = t7239 + t7241;
  t6429 = 1.142857*t818*t2075;
  t6433 = 1.142857*t971*t2075;
  t6434 = 1.142857*t1019*t2036;
  t6442 = 1.142857*t1019*t2141;
  t6445 = t6429 + t6433 + t6434 + t6442;
  t6539 = 1.142857*t818*t3547;
  t6541 = 1.142857*t971*t3547;
  t6545 = 1.142857*t1019*t3509;
  t6546 = 1.142857*t1019*t3590;
  t6548 = t6539 + t6541 + t6545 + t6546;
  t3033 = 1.142857*t818*t3024;
  t3037 = 1.142857*t971*t3024;
  t3138 = 1.142857*t1019*t3122;
  t3246 = 1.142857*t1019*t3245;
  t3268 = t3033 + t3037 + t3138 + t3246;
  t6880 = 1.142857*t1019*t3752;
  t6881 = 1.142857*t971*t4002;
  t6886 = 1.142857*t1019*t3877;
  t6890 = 1.142857*t818*t4105;
  t6891 = t6880 + t6881 + t6886 + t6890;
  t7158 = 1.142857*t971*t4907;
  t7159 = 1.142857*t1019*t4454;
  t7163 = 1.142857*t1019*t4649;
  t7165 = 1.142857*t818*t4843;
  t7167 = t7158 + t7159 + t7163 + t7165;
  t4309 = t4229 + t4290 + t4294 + t4298;
  t6650 = t6640 + t6646 + t6647 + t6649;
  t6954 = 1.142857*t971*t5329;
  t6957 = 1.142857*t1019*t5366;
  t6958 = 1.142857*t1019*t5537;
  t6960 = 1.142857*t818*t5642;
  t6962 = t6954 + t6957 + t6958 + t6960;
  t7207 = 1.142857*t5734*t1886;
  t7208 = 1.142857*t5807*t1551;
  t7209 = 1.142857*t971*t5983;
  t7210 = 1.142857*t5807*t1734;
  t7211 = 1.142857*t1019*t5879;
  t7214 = 1.142857*t5769*t1831;
  t7218 = 1.142857*t1019*t5906;
  t7219 = 1.142857*t818*t5925;
  t7221 = t7207 + t7208 + t7209 + t7210 + t7211 + t7214 + t7218 + t7219;
  t5745 = 1.142857*t5734*t2020;
  t5777 = 1.142857*t5769*t2020;
  t5822 = 1.142857*t5807*t2102;
  t5823 = 1.142857*t5807*t2180;
  t5828 = t5745 + t4229 + t5777 + t5822 + t4290 + t4294 + t4298 + t5823;
  t6766 = 1.142857*t5734*t498;
  t6770 = 1.142857*t5769*t498;
  t6775 = 1.142857*t5807*t1160;
  t6777 = 1.142857*t5807*t1354;
  t6778 = t6766 + t6640 + t6770 + t6775 + t6646 + t6647 + t6649 + t6777;
  t7012 = 1.142857*t5807*t2461;
  t7013 = 1.142857*t5734*t2721;
  t7015 = 1.142857*t971*t6070;
  t7017 = 1.142857*t5807*t2634;
  t7024 = 1.142857*t1019*t6082;
  t7025 = 1.142857*t5769*t2879;
  t7026 = 1.142857*t1019*t6121;
  t7027 = 1.142857*t818*t6157;
  t7029 = t7012 + t7013 + t7015 + t7017 + t7024 + t7025 + t7026 + t7027;
  t6389 = -0.5*var2[8]*t6385;
  t6846 = -0.5*var2[8]*t1430;
  t7118 = -0.5*var2[8]*t7116;
  t7264 = -0.5*var2[8]*t7263;
  t7331 = 2.285714*t1019*t818;
  t7333 = 2.285714*t1019*t971;
  t7334 = t7331 + t7333;
  t7370 = 0.03428571*var2[0]*t2180;
  t7371 = 0.03428571*var2[1]*t1354;
  t531 = 0.03428571*var2[8]*t498;
  p_output1[0]=(t1432 + t1964 + t2902 + t531 - 0.5*(2.285714*t1160*t2020 + 2.285714*t1354*t2020 + 2.285714*t2102*t498 + 2.285714*t2180*t498)*var2[0] - 0.5*t2221*var2[1])*var2[8];
  p_output1[1]=var2[8]*(-0.5*(2.285714*t2102*t3024 + 2.285714*t2180*t3024 + 2.285714*t2020*t3122 + 2.285714*t2020*t3245)*var2[0] - 0.5*t3615*var2[1] - 0.5*t4142*var2[2] - 0.5*t3446*var2[6] - 0.5*t3268*var2[7] + 0.03428571*t3024*var2[8]);
  p_output1[2]=(t4211 + t5041 + t5155 - 0.5*t5664*var2[2] - 0.5*t4986*var2[6] - 0.5*t4309*var2[7])*var2[8];
  p_output1[3]=(t4211 + t5041 + t5155 - 0.5*t6161*var2[2] - 0.5*t5993*var2[6] - 0.5*t5828*var2[7])*var2[8];
  p_output1[4]=-0.5*t6208*var2[8];
  p_output1[5]=t6308;
  p_output1[6]=t6333;
  p_output1[7]=t6362;
  p_output1[8]=t6389;
  p_output1[9]=-0.5*t6208*var2[0] - 0.5*t6306*var2[1] - 0.5*t6330*var2[2] - 0.5*t6359*var2[6] - 0.5*t6385*var2[7] + 0.06857142*t2020*var2[8];
  p_output1[10]=var2[8]*(-0.5*t2221*var2[0] - 0.5*(2.285714*t1160*t2075 + 2.285714*t1354*t2075 + 2.285714*t2036*t498 + 2.285714*t2141*t498)*var2[1] - 0.5*t6514*var2[2] - 0.5*t6465*var2[6] - 0.5*t6445*var2[7] + 0.03428571*t2075*var2[8]);
  p_output1[11]=var2[8]*(-0.5*t3615*var2[0] - 0.5*(2.285714*t1160*t3547 + 2.285714*t1354*t3547 + 2.285714*t3509*t498 + 2.285714*t3590*t498)*var2[1] - 0.5*t6631*var2[2] - 0.5*t6572*var2[6] - 0.5*t6548*var2[7] + 0.03428571*t3547*var2[8]);
  p_output1[12]=(t6639 + t6700 + t6722 - 0.5*t6760*var2[2] - 0.5*t6693*var2[6] - 0.5*t6650*var2[7])*var2[8];
  p_output1[13]=(t6639 + t6700 + t6722 - 0.5*t6823*var2[2] - 0.5*t6806*var2[6] - 0.5*t6778*var2[7])*var2[8];
  p_output1[14]=t6308;
  p_output1[15]=-0.5*t6828*var2[8];
  p_output1[16]=t6841;
  p_output1[17]=t6842;
  p_output1[18]=t6846;
  p_output1[19]=t1432 + t1964 + t2902 - 0.5*t6306*var2[0] - 0.5*t6828*var2[1] + 0.06857142*t498*var2[8];
  p_output1[20]=(-0.5*t2896*var2[0] - 0.5*t6514*var2[1])*var2[8];
  p_output1[21]=var2[8]*(-0.5*t4142*var2[0] - 0.5*t6631*var2[1] - 0.5*(2.285714*t2879*t3752 + 2.285714*t2721*t3877 + 2.285714*t2634*t4002 + 2.285714*t2461*t4105)*var2[2] - 0.5*t6916*var2[6] - 0.5*t6891*var2[7] + 0.03428571*t4105*var2[8]);
  p_output1[22]=var2[8]*(-0.5*t5664*var2[0] - 0.5*t6760*var2[1] - 0.5*(2.285714*t2634*t5329 + 2.285714*t2879*t5366 + 2.285714*t2721*t5537 + 2.285714*t2461*t5642)*var2[2] - 0.5*t6990*var2[6] - 0.5*t6962*var2[7] + 0.03428571*t5642*var2[8]);
  p_output1[23]=var2[8]*(-0.5*t6161*var2[0] - 0.5*t6823*var2[1] - 0.5*(2.285714*t2634*t6070 + 2.285714*t2879*t6082 + 2.285714*t2721*t6121 + 2.285714*t2461*t6157)*var2[2] - 0.5*t7058*var2[6] - 0.5*t7029*var2[7] + 0.03428571*t6157*var2[8]);
  p_output1[24]=t6333;
  p_output1[25]=t6841;
  p_output1[26]=-0.5*t7086*var2[8];
  p_output1[27]=t7102;
  p_output1[28]=t7118;
  p_output1[29]=-0.5*t6330*var2[0] - 0.5*t2896*var2[1] - 0.5*t7086*var2[2] - 0.5*t7099*var2[6] - 0.5*t7116*var2[7] + 0.06857142*t2879*var2[8];
  p_output1[30]=(-0.5*t1962*var2[0] - 0.5*t6465*var2[1])*var2[8];
  p_output1[31]=(-0.5*t3446*var2[0] - 0.5*t6572*var2[1] - 0.5*t6916*var2[2])*var2[8];
  p_output1[32]=var2[8]*(-0.5*t4986*var2[0] - 0.5*t6693*var2[1] - 0.5*t6990*var2[2] - 0.5*(2.285714*t1831*t4454 + 2.285714*t1886*t4649 + 2.285714*t1551*t4843 + 2.285714*t1734*t4907)*var2[6] - 0.5*t7167*var2[7] + 0.03428571*t4843*var2[8]);
  p_output1[33]=var2[8]*(-0.5*t5993*var2[0] - 0.5*t6806*var2[1] - 0.5*t7058*var2[2] - 0.5*(2.285714*t1831*t5879 + 2.285714*t1886*t5906 + 2.285714*t1551*t5925 + 2.285714*t1734*t5983)*var2[6] - 0.5*t7221*var2[7] + 0.03428571*t5925*var2[8]);
  p_output1[34]=t6362;
  p_output1[35]=t6842;
  p_output1[36]=t7102;
  p_output1[37]=-0.5*t7243*var2[8];
  p_output1[38]=t7264;
  p_output1[39]=-0.5*t6359*var2[0] - 0.5*t1962*var2[1] - 0.5*t7099*var2[2] - 0.5*t7243*var2[6] - 0.5*t7263*var2[7] + 0.06857142*t1831*var2[8];
  p_output1[40]=(-0.5*t1430*var2[0] - 0.5*t6445*var2[1])*var2[8];
  p_output1[41]=(-0.5*t3268*var2[0] - 0.5*t6548*var2[1] - 0.5*t6891*var2[2])*var2[8];
  p_output1[42]=(-0.5*t4309*var2[0] - 0.5*t6650*var2[1] - 0.5*t6962*var2[2] - 0.5*t7167*var2[6])*var2[8];
  p_output1[43]=var2[8]*(-0.5*t5828*var2[0] - 0.5*t6778*var2[1] - 0.5*t7029*var2[2] - 0.5*t7221*var2[6] - 0.5*(2.285714*t1019*t5734 + 2.285714*t1019*t5769 + 2.285714*t5807*t818 + 2.285714*t5807*t971)*var2[7] + 0.03428571*t5807*var2[8]);
  p_output1[44]=t6389;
  p_output1[45]=t6846;
  p_output1[46]=t7118;
  p_output1[47]=t7264;
  p_output1[48]=-0.5*t7334*var2[8];
  p_output1[49]=-0.5*t6385*var2[0] - 0.5*t1430*var2[1] - 0.5*t7116*var2[2] - 0.5*t7263*var2[6] - 0.5*t7334*var2[7] + 0.06857142*t1019*var2[8];
  p_output1[50]=(0.03428571*t498*var2[0] + 0.03428571*t2075*var2[1])*var2[8];
  p_output1[51]=(0.03428571*t3024*var2[0] + 0.03428571*t3547*var2[1] + 0.03428571*t4105*var2[2])*var2[8];
  p_output1[52]=(t7370 + t7371 + 0.03428571*t5642*var2[2] + 0.03428571*t4843*var2[6])*var2[8];
  p_output1[53]=(t7370 + t7371 + 0.03428571*t6157*var2[2] + 0.03428571*t5925*var2[6] + 0.03428571*t5807*var2[7])*var2[8];
  p_output1[54]=0.03428571*t2020*var2[8];
  p_output1[55]=t531;
  p_output1[56]=0.03428571*t2879*var2[8];
  p_output1[57]=0.03428571*t1831*var2[8];
  p_output1[58]=0.03428571*t1019*var2[8];
  p_output1[59]=0.03428571*t2020*var2[0] + 0.03428571*t498*var2[1] + 0.03428571*t2879*var2[2] + 0.03428571*t1831*var2[6] + 0.03428571*t1019*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 60, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L7_J9_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L7_J9_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

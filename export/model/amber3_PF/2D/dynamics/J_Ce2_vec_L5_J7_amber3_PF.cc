/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:46 GMT-08:00
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
  double t222;
  double t51;
  double t99;
  double t225;
  double t20;
  double t331;
  double t592;
  double t617;
  double t641;
  double t813;
  double t835;
  double t105;
  double t227;
  double t237;
  double t1155;
  double t1158;
  double t1210;
  double t1465;
  double t1481;
  double t1490;
  double t541;
  double t851;
  double t282;
  double t333;
  double t363;
  double t403;
  double t417;
  double t437;
  double t961;
  double t1035;
  double t1099;
  double t1112;
  double t1237;
  double t1260;
  double t1813;
  double t1880;
  double t1999;
  double t2000;
  double t2028;
  double t2031;
  double t2085;
  double t2181;
  double t2211;
  double t2405;
  double t2456;
  double t2473;
  double t2480;
  double t2534;
  double t2549;
  double t2558;
  double t2578;
  double t2580;
  double t2596;
  double t2626;
  double t2653;
  double t2658;
  double t2851;
  double t2856;
  double t908;
  double t929;
  double t946;
  double t1686;
  double t1697;
  double t1707;
  double t3189;
  double t3211;
  double t1320;
  double t1323;
  double t1346;
  double t1460;
  double t1528;
  double t1621;
  double t1652;
  double t1658;
  double t2138;
  double t3009;
  double t3037;
  double t3043;
  double t2484;
  double t2600;
  double t2602;
  double t2620;
  double t2844;
  double t2688;
  double t2859;
  double t2881;
  double t3768;
  double t3775;
  double t3743;
  double t3745;
  double t3755;
  double t3048;
  double t3069;
  double t3053;
  double t3064;
  double t3075;
  double t3884;
  double t3933;
  double t3947;
  double t3227;
  double t3236;
  double t3241;
  double t3280;
  double t3334;
  double t3375;
  double t3437;
  double t3461;
  double t3467;
  double t3475;
  double t3505;
  double t3523;
  double t3526;
  double t3550;
  double t3554;
  double t3555;
  double t3558;
  double t3585;
  double t3626;
  double t3670;
  double t3672;
  double t3673;
  double t3729;
  double t3821;
  double t3951;
  double t3952;
  double t4018;
  double t4458;
  double t4554;
  double t4597;
  double t4647;
  double t5776;
  double t5801;
  double t5808;
  double t5830;
  double t5834;
  double t5411;
  double t5413;
  double t5506;
  double t5568;
  double t5582;
  double t5587;
  double t5632;
  double t5637;
  double t5664;
  double t5729;
  double t5730;
  double t5733;
  double t5746;
  double t2129;
  double t2170;
  double t1902;
  double t1928;
  double t1771;
  double t1963;
  double t2087;
  double t2091;
  double t2178;
  double t2234;
  double t2258;
  double t3765;
  double t3777;
  double t3781;
  double t3974;
  double t4013;
  double t4034;
  double t4070;
  double t4106;
  double t4301;
  double t4332;
  double t4350;
  double t4459;
  double t4552;
  double t4607;
  double t4634;
  double t4749;
  double t6411;
  double t4808;
  double t4824;
  double t4834;
  double t4867;
  double t6416;
  double t4879;
  double t6429;
  double t6430;
  double t6477;
  double t6478;
  double t6481;
  double t6493;
  double t6503;
  double t6531;
  double t6532;
  double t6533;
  double t6538;
  double t6542;
  double t6593;
  double t5127;
  double t5143;
  double t5148;
  double t5237;
  double t5260;
  double t5269;
  double t5643;
  double t2606;
  double t2976;
  double t3045;
  double t3088;
  double t3106;
  double t1313;
  double t1520;
  double t1673;
  double t1715;
  double t1738;
  double t1768;
  double t6884;
  double t3152;
  double t6258;
  double t6259;
  double t6264;
  double t6300;
  double t6315;
  double t3790;
  double t3796;
  double t4229;
  double t4405;
  double t4419;
  double t4751;
  double t4768;
  double t6572;
  double t6574;
  double t6602;
  double t6608;
  double t6609;
  double t6658;
  double t6664;
  double t5065;
  double t5184;
  double t5185;
  double t5281;
  double t5288;
  double t6772;
  double t6787;
  double t6791;
  double t6798;
  double t6799;
  double t5767;
  double t6902;
  double t7268;
  double t7275;
  double t7277;
  double t7280;
  double t7308;
  double t7254;
  double t7258;
  double t7259;
  double t6020;
  double t6041;
  double t6047;
  double t6052;
  double t6083;
  double t6423;
  double t6450;
  double t3278;
  double t3290;
  double t6963;
  double t6966;
  double t6979;
  double t6989;
  double t6990;
  double t6716;
  double t6721;
  double t6731;
  double t6741;
  double t6743;
  double t4878;
  double t4884;
  double t4900;
  double t4950;
  double t4960;
  double t7115;
  double t7122;
  double t7134;
  double t7143;
  double t7156;
  double t7171;
  double t7177;
  double t7187;
  double t5849;
  double t6904;
  double t7314;
  double t7572;
  double t7577;
  double t7578;
  double t7662;
  double t7665;
  double t520;
  t222 = Cos(var1[5]);
  t51 = Cos(var1[6]);
  t99 = Sin(var1[5]);
  t225 = Sin(var1[6]);
  t20 = Sin(var1[2]);
  t331 = Cos(var1[2]);
  t592 = -1.*t51;
  t617 = 1. + t592;
  t641 = -0.9063*t617;
  t813 = -1.078185*t51;
  t835 = t641 + t813;
  t105 = -1.*t51*t99;
  t227 = -1.*t222*t225;
  t237 = t105 + t227;
  t1155 = t222*t51;
  t1158 = -1.*t99*t225;
  t1210 = t1155 + t1158;
  t1465 = t331*t237;
  t1481 = -1.*t20*t1210;
  t1490 = t1465 + t1481;
  t541 = 0.4999*t51;
  t851 = t835*t51;
  t282 = -1.*t20*t237;
  t333 = -1.*t222*t51;
  t363 = t99*t225;
  t403 = t333 + t363;
  t417 = t331*t403;
  t437 = t282 + t417;
  t961 = t51*t99;
  t1035 = t222*t225;
  t1099 = t961 + t1035;
  t1112 = -1.*t20*t1099;
  t1237 = t331*t1210;
  t1260 = t1112 + t1237;
  t1813 = t20*t237;
  t1880 = t1813 + t1237;
  t1999 = -1.*t331*t1210;
  t2000 = t282 + t1999;
  t2028 = t331*t1099;
  t2031 = t20*t1210;
  t2085 = t2028 + t2031;
  t2181 = t20*t403;
  t2211 = t1465 + t2181;
  t2405 = 0.4999*t99;
  t2456 = t835*t99;
  t2473 = -0.17188499999999995*t222*t225;
  t2480 = t2405 + t2456 + t2473;
  t2534 = -1.*t222;
  t2549 = 1. + t2534;
  t2558 = -0.4999*t2549;
  t2578 = t222*t835;
  t2580 = 0.17188499999999995*t99*t225;
  t2596 = t2558 + t2578 + t2580;
  t2626 = 0.17188499999999995*t51*t99;
  t2653 = 0.17188499999999995*t222*t225;
  t2658 = t2626 + t2653;
  t2851 = -0.17188499999999995*t222*t51;
  t2856 = t2851 + t2580;
  t908 = Power(t51,2);
  t929 = 0.17188499999999995*t908;
  t946 = t541 + t851 + t929;
  t1686 = Power(t225,2);
  t1697 = -0.17188499999999995*t1686;
  t1707 = t541 + t851 + t1697;
  t3189 = t20*t1099;
  t3211 = t3189 + t417;
  t1320 = -0.4999*t225;
  t1323 = -1.*t835*t225;
  t1346 = -0.17188499999999995*t51*t225;
  t1460 = t1320 + t1323 + t1346;
  t1528 = 0.4999*t225;
  t1621 = t835*t225;
  t1652 = 0.17188499999999995*t51*t225;
  t1658 = t1528 + t1621 + t1652;
  t2138 = -1.*t20*t403;
  t3009 = t2480*t1099;
  t3037 = t1210*t2596;
  t3043 = t3009 + t3037;
  t2484 = -1.*t2480*t1210;
  t2600 = -1.*t237*t2596;
  t2602 = t2484 + t2600;
  t2620 = t2480*t1210;
  t2844 = t237*t2596;
  t2688 = t2658*t1210;
  t2859 = t1099*t2856;
  t2881 = t2620 + t2688 + t2844 + t2859;
  t3768 = 0.4999*t222;
  t3775 = t3768 + t2578 + t2580;
  t3743 = -0.4999*t99;
  t3745 = -1.*t835*t99;
  t3755 = t3743 + t3745 + t2653;
  t3048 = -1.*t237*t2480;
  t3069 = -1.*t2596*t403;
  t3053 = -1.*t237*t2658;
  t3064 = -1.*t1210*t2856;
  t3075 = t3048 + t3053 + t3064 + t3069;
  t3884 = 0.17188499999999995*t222*t51;
  t3933 = -0.17188499999999995*t99*t225;
  t3947 = t3884 + t3933;
  t3227 = 0.07323676079999998*var2[6]*t3211;
  t3236 = 0.85216*t946*t1880;
  t3241 = 0.85216*t1707*t3211;
  t3280 = 0.85216*t1658*t2211;
  t3334 = 1.70432*t1880*t1490;
  t3375 = 0.85216*t2085*t437;
  t3437 = 0.85216*t1490*t3211;
  t3461 = t2028 + t2138;
  t3467 = 0.85216*t1880*t3461;
  t3475 = 0.85216*t1260*t2211;
  t3505 = 1.70432*t437*t2211;
  t3523 = t3334 + t3375 + t3437 + t3467 + t3475 + t3505;
  t3526 = -0.5*var2[1]*t3523;
  t3550 = Power(t1880,2);
  t3554 = 1.70432*t3550;
  t3555 = 1.70432*t1880*t3211;
  t3558 = 1.70432*t2085*t2211;
  t3585 = Power(t2211,2);
  t3626 = 1.70432*t3585;
  t3670 = t3554 + t3555 + t3558 + t3626;
  t3672 = -0.5*var2[0]*t3670;
  t3673 = 0.85216*t3043*t3211;
  t3729 = 0.85216*t2602*t2211;
  t3821 = -1.*t2658*t1210;
  t3951 = -1.*t237*t3947;
  t3952 = -1.*t1099*t2596;
  t4018 = -1.*t2480*t403;
  t4458 = t237*t2480;
  t4554 = t2658*t1099;
  t4597 = t1210*t3947;
  t4647 = t2596*t403;
  t5776 = 0.85216*t1460*t1880;
  t5801 = 0.85216*t1658*t1880;
  t5808 = 0.85216*t946*t2085;
  t5830 = 0.85216*t1707*t2211;
  t5834 = t5776 + t5801 + t5808 + t5830;
  t5411 = 1.70432*t1880*t2085;
  t5413 = 1.70432*t1880*t2211;
  t5506 = t5411 + t5413;
  t5568 = 0.85216*t1880*t1260;
  t5582 = 0.85216*t1490*t2085;
  t5587 = 0.85216*t1880*t437;
  t5632 = 0.85216*t1490*t2211;
  t5637 = t5568 + t5582 + t5587 + t5632;
  t5664 = 0.85216*t1880*t2602;
  t5729 = 0.85216*t1880*t2881;
  t5730 = 0.85216*t3043*t2211;
  t5733 = 0.85216*t2085*t3075;
  t5746 = t5664 + t5729 + t5730 + t5733;
  t2129 = -1.*t331*t237;
  t2170 = t2129 + t2138;
  t1902 = -1.*t331*t1099;
  t1928 = t1902 + t1481;
  t1771 = 1.70432*t1260*t1490;
  t1963 = 0.85216*t1880*t1928;
  t2087 = 0.85216*t2000*t2085;
  t2091 = 1.70432*t1490*t437;
  t2178 = 0.85216*t1880*t2170;
  t2234 = 0.85216*t2000*t2211;
  t2258 = t1771 + t1963 + t2087 + t2091 + t2178 + t2234;
  t3765 = t3755*t1210;
  t3777 = t1099*t3775;
  t3781 = t2620 + t3765 + t2844 + t3777;
  t3974 = -1.*t237*t3775;
  t4013 = -1.*t237*t2856;
  t4034 = -1.*t3755*t403;
  t4070 = -1.*t2658*t403;
  t4106 = t3821 + t3951 + t3952 + t3974 + t4013 + t4018 + t4034 + t4070;
  t4301 = -1.*t237*t3755;
  t4332 = -1.*t1210*t3775;
  t4350 = t3048 + t4301 + t4332 + t3069;
  t4459 = t237*t3755;
  t4552 = t237*t2658;
  t4607 = t1210*t3775;
  t4634 = t1210*t2856;
  t4749 = t4458 + t4459 + t4552 + t4554 + t4597 + t4607 + t4634 + t4647;
  t6411 = 0.07323676079999998*var2[6]*t3461;
  t4808 = -0.4999*t51;
  t4824 = -1.*t835*t51;
  t4834 = -0.17188499999999995*t908;
  t4867 = 0. + t4808 + t4824 + t4834;
  t6416 = 0.85216*t946*t1490;
  t4879 = 0. + t541 + t851 + t929;
  t6429 = 0.85216*t1658*t437;
  t6430 = 0.85216*t1707*t3461;
  t6477 = Power(t1490,2);
  t6478 = 1.70432*t6477;
  t6481 = 1.70432*t1260*t437;
  t6493 = Power(t437,2);
  t6503 = 1.70432*t6493;
  t6531 = 1.70432*t1490*t3461;
  t6532 = t6478 + t6481 + t6503 + t6531;
  t6533 = -0.5*var2[1]*t6532;
  t6538 = -0.5*var2[0]*t3523;
  t6542 = 0.85216*t2602*t437;
  t6593 = 0.85216*t3043*t3461;
  t5127 = -2.*t237*t2856;
  t5143 = -2.*t2658*t403;
  t5148 = t3821 + t3951 + t3952 + t5127 + t4018 + t5143;
  t5237 = 2.*t237*t2658;
  t5260 = 2.*t1210*t2856;
  t5269 = t4458 + t5237 + t4554 + t4597 + t5260 + t4647;
  t5643 = -0.5*var2[6]*t5637;
  t2606 = 0.85216*t1490*t2602;
  t2976 = 0.85216*t1490*t2881;
  t3045 = 0.85216*t3043*t437;
  t3088 = 0.85216*t1260*t3075;
  t3106 = t2606 + t2976 + t3045 + t3088;
  t1313 = 0.85216*t946*t1260;
  t1520 = 0.85216*t1460*t1490;
  t1673 = 0.85216*t1658*t1490;
  t1715 = 0.85216*t1707*t437;
  t1738 = t1313 + t1520 + t1673 + t1715;
  t1768 = -0.5*var2[5]*t1738;
  t6884 = t1771 + t2091;
  t3152 = -0.5*var2[2]*t3106;
  t6258 = 0.85216*t2000*t2602;
  t6259 = 0.85216*t2000*t2881;
  t6264 = 0.85216*t3043*t2170;
  t6300 = 0.85216*t1928*t3075;
  t6315 = t6258 + t6259 + t6264 + t6300;
  t3790 = 0.85216*t3781*t2211;
  t3796 = 0.85216*t2881*t2211;
  t4229 = 0.85216*t2085*t4106;
  t4405 = 0.85216*t1880*t4350;
  t4419 = 0.85216*t1880*t3075;
  t4751 = 0.85216*t1880*t4749;
  t4768 = t3673 + t3729 + t3790 + t3796 + t4229 + t4405 + t4419 + t4751;
  t6572 = 0.85216*t3781*t437;
  t6574 = 0.85216*t2881*t437;
  t6602 = 0.85216*t1260*t4106;
  t6608 = 0.85216*t1490*t4350;
  t6609 = 0.85216*t1490*t3075;
  t6658 = 0.85216*t1490*t4749;
  t6664 = t6542 + t6572 + t6574 + t6593 + t6602 + t6608 + t6609 + t6658;
  t5065 = 1.70432*t2881*t2211;
  t5184 = 0.85216*t2085*t5148;
  t5185 = 1.70432*t1880*t3075;
  t5281 = 0.85216*t1880*t5269;
  t5288 = t3673 + t3729 + t5065 + t5184 + t5185 + t5281;
  t6772 = 1.70432*t2881*t437;
  t6787 = 0.85216*t1260*t5148;
  t6791 = 1.70432*t1490*t3075;
  t6798 = 0.85216*t1490*t5269;
  t6799 = t6542 + t6772 + t6593 + t6787 + t6791 + t6798;
  t5767 = -0.5*var2[6]*t5746;
  t6902 = -0.5*var2[6]*t3106;
  t7268 = 0.85216*t946*t2602;
  t7275 = 0.85216*t1460*t3043;
  t7277 = 0.85216*t1707*t2881;
  t7280 = 0.85216*t1658*t3075;
  t7308 = t7268 + t7275 + t7277 + t7280;
  t7254 = 1.70432*t3043*t2881;
  t7258 = 1.70432*t2602*t3075;
  t7259 = t7254 + t7258;
  t6020 = 0.85216*t1460*t2000;
  t6041 = 0.85216*t1658*t2000;
  t6047 = 0.85216*t946*t1928;
  t6052 = 0.85216*t1707*t2170;
  t6083 = t6020 + t6041 + t6047 + t6052;
  t6423 = 0.85216*t1460*t437;
  t6450 = t6416 + t6423 + t6429 + t6430;
  t3278 = 0.85216*t1460*t2211;
  t3290 = t3236 + t3241 + t3278 + t3280;
  t6963 = 0.85216*t1460*t3781;
  t6966 = 0.85216*t1658*t4106;
  t6979 = 0.85216*t946*t4350;
  t6989 = 0.85216*t1707*t4749;
  t6990 = t6963 + t6966 + t6979 + t6989;
  t6716 = 0.85216*t1460*t1260;
  t6721 = 0.85216*t4867*t1490;
  t6731 = 0.85216*t4879*t1490;
  t6741 = 1.70432*t1460*t437;
  t6743 = t6716 + t6721 + t6416 + t6731 + t6741 + t6429 + t6430;
  t4878 = 0.85216*t4867*t1880;
  t4884 = 0.85216*t4879*t1880;
  t4900 = 0.85216*t1460*t2085;
  t4950 = 1.70432*t1460*t2211;
  t4960 = t4878 + t3236 + t4884 + t4900 + t3241 + t4950 + t3280;
  t7115 = 0.85216*t1460*t2602;
  t7122 = 0.85216*t4867*t3043;
  t7134 = 1.70432*t1460*t2881;
  t7143 = 0.85216*t1658*t5148;
  t7156 = 0.85216*t946*t3075;
  t7171 = 0.85216*t4879*t3075;
  t7177 = 0.85216*t1707*t5269;
  t7187 = t7115 + t7122 + t7134 + t7143 + t7156 + t7171 + t7177;
  t5849 = -0.5*var2[6]*t5834;
  t6904 = -0.5*var2[6]*t1738;
  t7314 = -0.5*var2[6]*t7308;
  t7572 = 1.70432*t946*t1658;
  t7577 = 1.70432*t1460*t1707;
  t7578 = t7572 + t7577;
  t7662 = 0.07323676079999998*var2[0]*t3211;
  t7665 = 0.07323676079999998*var2[1]*t3461;
  t520 = 0.07323676079999998*var2[6]*t437;
  p_output1[0]=(t1768 + t3152 + t520 - 0.5*(1.70432*t1260*t1880 + 1.70432*t1490*t2085 + 1.70432*t1490*t2211 + 1.70432*t1880*t437)*var2[0] - 0.5*t2258*var2[1])*var2[6];
  p_output1[1]=(t3227 + t3526 + t3672 - 0.5*t4768*var2[2] - 0.5*t3290*var2[5])*var2[6];
  p_output1[2]=(t3227 + t3526 + t3672 - 0.5*t5288*var2[2] - 0.5*t4960*var2[5])*var2[6];
  p_output1[3]=-0.5*t5506*var2[6];
  p_output1[4]=t5643;
  p_output1[5]=t5767;
  p_output1[6]=t5849;
  p_output1[7]=-0.5*t5506*var2[0] - 0.5*t5637*var2[1] - 0.5*t5746*var2[2] - 0.5*t5834*var2[5] + 0.14647352159999996*t2211*var2[6];
  p_output1[8]=var2[6]*(-0.5*t2258*var2[0] - 0.5*(1.70432*t1490*t1928 + 1.70432*t1260*t2000 + 1.70432*t1490*t2170 + 1.70432*t2000*t437)*var2[1] - 0.5*t6315*var2[2] - 0.5*t6083*var2[5] + 0.07323676079999998*t2170*var2[6]);
  p_output1[9]=(t6411 + t6533 + t6538 - 0.5*t6664*var2[2] - 0.5*t6450*var2[5])*var2[6];
  p_output1[10]=(t6411 + t6533 + t6538 - 0.5*t6799*var2[2] - 0.5*t6743*var2[5])*var2[6];
  p_output1[11]=t5643;
  p_output1[12]=-0.5*t6884*var2[6];
  p_output1[13]=t6902;
  p_output1[14]=t6904;
  p_output1[15]=t1768 + t3152 - 0.5*t5637*var2[0] - 0.5*t6884*var2[1] + 0.14647352159999996*t437*var2[6];
  p_output1[16]=(-0.5*t3106*var2[0] - 0.5*t6315*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t4768*var2[0] - 0.5*t6664*var2[1] - 0.5*(1.70432*t2881*t3781 + 1.70432*t2602*t4106 + 1.70432*t3075*t4350 + 1.70432*t3043*t4749)*var2[2] - 0.5*t6990*var2[5] + 0.07323676079999998*t4749*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t5288*var2[0] - 0.5*t6799*var2[1] - 0.5*(1.70432*Power(t2881,2) + 1.70432*Power(t3075,2) + 1.70432*t2602*t5148 + 1.70432*t3043*t5269)*var2[2] - 0.5*t7187*var2[5] + 0.07323676079999998*t5269*var2[6]);
  p_output1[19]=t5767;
  p_output1[20]=t6902;
  p_output1[21]=-0.5*t7259*var2[6];
  p_output1[22]=t7314;
  p_output1[23]=-0.5*t5746*var2[0] - 0.5*t3106*var2[1] - 0.5*t7259*var2[2] - 0.5*t7308*var2[5] + 0.14647352159999996*t2881*var2[6];
  p_output1[24]=(-0.5*t1738*var2[0] - 0.5*t6083*var2[1])*var2[6];
  p_output1[25]=(-0.5*t3290*var2[0] - 0.5*t6450*var2[1] - 0.5*t6990*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t4960*var2[0] - 0.5*t6743*var2[1] - 0.5*t7187*var2[2] - 0.5*(1.70432*Power(t1460,2) + 1.70432*t1460*t1658 + 1.70432*t1707*t4867 + 1.70432*t4879*t946)*var2[5] + 0.07323676079999998*t4867*var2[6]);
  p_output1[27]=t5849;
  p_output1[28]=t6904;
  p_output1[29]=t7314;
  p_output1[30]=-0.5*t7578*var2[6];
  p_output1[31]=-0.5*t5834*var2[0] - 0.5*t1738*var2[1] - 0.5*t7308*var2[2] - 0.5*t7578*var2[5] + 0.14647352159999996*t1460*var2[6];
  p_output1[32]=(0.07323676079999998*t437*var2[0] + 0.07323676079999998*t2170*var2[1])*var2[6];
  p_output1[33]=(t7662 + t7665 + 0.07323676079999998*t4749*var2[2])*var2[6];
  p_output1[34]=(t7662 + t7665 + 0.07323676079999998*t5269*var2[2] + 0.07323676079999998*t4867*var2[5])*var2[6];
  p_output1[35]=0.07323676079999998*t2211*var2[6];
  p_output1[36]=t520;
  p_output1[37]=0.07323676079999998*t2881*var2[6];
  p_output1[38]=0.07323676079999998*t1460*var2[6];
  p_output1[39]=0.07323676079999998*t2211*var2[0] + 0.07323676079999998*t437*var2[1] + 0.07323676079999998*t2881*var2[2] + 0.07323676079999998*t1460*var2[5];
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

#include "J_Ce2_vec_L5_J7_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L5_J7_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

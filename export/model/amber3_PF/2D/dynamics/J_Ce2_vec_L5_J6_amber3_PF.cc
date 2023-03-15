/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:45 GMT-08:00
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
  double t388;
  double t124;
  double t172;
  double t398;
  double t615;
  double t365;
  double t405;
  double t456;
  double t65;
  double t1121;
  double t1122;
  double t1210;
  double t1237;
  double t1258;
  double t470;
  double t736;
  double t835;
  double t860;
  double t929;
  double t961;
  double t1520;
  double t1522;
  double t1542;
  double t1346;
  double t1584;
  double t1621;
  double t2028;
  double t1880;
  double t1928;
  double t1976;
  double t2087;
  double t2091;
  double t2202;
  double t2211;
  double t1985;
  double t2031;
  double t2234;
  double t2258;
  double t2261;
  double t2405;
  double t2473;
  double t2626;
  double t2653;
  double t2658;
  double t2661;
  double t2733;
  double t2824;
  double t2844;
  double t2851;
  double t2856;
  double t2864;
  double t3053;
  double t3061;
  double t3064;
  double t3139;
  double t3211;
  double t3224;
  double t1686;
  double t1697;
  double t1707;
  double t1715;
  double t1738;
  double t3550;
  double t3554;
  double t1035;
  double t1313;
  double t1320;
  double t1323;
  double t2337;
  double t3280;
  double t3290;
  double t3303;
  double t2666;
  double t2866;
  double t2976;
  double t3037;
  double t3152;
  double t3189;
  double t3227;
  double t3236;
  double t3380;
  double t3389;
  double t3427;
  double t3446;
  double t3461;
  double t4419;
  double t4437;
  double t4458;
  double t4466;
  double t3574;
  double t3585;
  double t3626;
  double t3729;
  double t3743;
  double t3765;
  double t3768;
  double t3777;
  double t3781;
  double t3821;
  double t3902;
  double t3928;
  double t3951;
  double t3974;
  double t4018;
  double t4034;
  double t4070;
  double t4106;
  double t4203;
  double t4206;
  double t4229;
  double t4301;
  double t5148;
  double t5189;
  double t4501;
  double t5288;
  double t5353;
  double t4505;
  double t4607;
  double t5506;
  double t5527;
  double t4749;
  double t5917;
  double t5973;
  double t6010;
  double t6041;
  double t6047;
  double t6052;
  double t6083;
  double t6117;
  double t6123;
  double t6178;
  double t6204;
  double t6209;
  double t6211;
  double t2334;
  double t2355;
  double t2115;
  double t2138;
  double t2085;
  double t2170;
  double t2322;
  double t2323;
  double t2402;
  double t2480;
  double t2497;
  double t4381;
  double t4491;
  double t4504;
  double t4510;
  double t4552;
  double t4619;
  double t4634;
  double t4647;
  double t4656;
  double t4751;
  double t6638;
  double t4808;
  double t4824;
  double t4834;
  double t4878;
  double t4912;
  double t4960;
  double t5017;
  double t6658;
  double t6664;
  double t6709;
  double t6716;
  double t6721;
  double t6741;
  double t6743;
  double t6753;
  double t6758;
  double t6760;
  double t6771;
  double t6772;
  double t5269;
  double t5361;
  double t5393;
  double t6791;
  double t5446;
  double t5543;
  double t5545;
  double t5558;
  double t5559;
  double t5560;
  double t5565;
  double t5588;
  double t5623;
  double t5632;
  double t5664;
  double t5730;
  double t5746;
  double t5801;
  double t5808;
  double t5830;
  double t5834;
  double t6121;
  double t3009;
  double t3241;
  double t3334;
  double t3467;
  double t3496;
  double t984;
  double t1652;
  double t1771;
  double t1866;
  double t6972;
  double t3501;
  double t6542;
  double t6572;
  double t6574;
  double t6593;
  double t6595;
  double t4350;
  double t4554;
  double t4597;
  double t4768;
  double t4770;
  double t6787;
  double t6799;
  double t6807;
  double t6821;
  double t6877;
  double t5143;
  double t5411;
  double t5568;
  double t5582;
  double t5643;
  double t5849;
  double t5891;
  double t6927;
  double t6938;
  double t6940;
  double t6943;
  double t6944;
  double t6948;
  double t6955;
  double t6235;
  double t6980;
  double t7308;
  double t7314;
  double t7320;
  double t6429;
  double t6450;
  double t6457;
  double t6694;
  double t3659;
  double t7065;
  double t7072;
  double t7073;
  double t6904;
  double t6907;
  double t6916;
  double t4867;
  double t5065;
  double t5100;
  double t7211;
  double t7217;
  double t7235;
  double t7240;
  double t7245;
  double t6259;
  double t6264;
  double t6293;
  double t1867;
  double t7365;
  double t7367;
  double t7369;
  double t7655;
  double t7659;
  double t6416;
  double t7038;
  double t7461;
  t388 = Cos(var1[5]);
  t124 = Cos(var1[6]);
  t172 = Sin(var1[5]);
  t398 = Sin(var1[6]);
  t615 = Cos(var1[2]);
  t365 = -1.*t124*t172;
  t405 = -1.*t388*t398;
  t456 = t365 + t405;
  t65 = Sin(var1[2]);
  t1121 = -1.*t124;
  t1122 = 1. + t1121;
  t1210 = -0.9063*t1122;
  t1237 = -1.078185*t124;
  t1258 = t1210 + t1237;
  t470 = -1.*t65*t456;
  t736 = -1.*t388*t124;
  t835 = t172*t398;
  t860 = t736 + t835;
  t929 = t615*t860;
  t961 = t470 + t929;
  t1520 = t388*t124;
  t1522 = -1.*t172*t398;
  t1542 = t1520 + t1522;
  t1346 = t615*t456;
  t1584 = -1.*t65*t1542;
  t1621 = t1346 + t1584;
  t2028 = t615*t1542;
  t1880 = t124*t172;
  t1928 = t388*t398;
  t1976 = t1880 + t1928;
  t2087 = t65*t456;
  t2091 = t2087 + t2028;
  t2202 = -1.*t615*t1542;
  t2211 = t470 + t2202;
  t1985 = -1.*t65*t1976;
  t2031 = t1985 + t2028;
  t2234 = t615*t1976;
  t2258 = t65*t1542;
  t2261 = t2234 + t2258;
  t2405 = t65*t860;
  t2473 = t1346 + t2405;
  t2626 = 0.4999*t172;
  t2653 = t1258*t172;
  t2658 = -0.17188499999999995*t388*t398;
  t2661 = t2626 + t2653 + t2658;
  t2733 = -1.*t388;
  t2824 = 1. + t2733;
  t2844 = -0.4999*t2824;
  t2851 = t388*t1258;
  t2856 = 0.17188499999999995*t172*t398;
  t2864 = t2844 + t2851 + t2856;
  t3053 = -0.4999*t172;
  t3061 = -1.*t1258*t172;
  t3064 = 0.17188499999999995*t388*t398;
  t3139 = t3053 + t3061 + t3064;
  t3211 = 0.4999*t388;
  t3224 = t3211 + t2851 + t2856;
  t1686 = 0.4999*t124;
  t1697 = t1258*t124;
  t1707 = Power(t398,2);
  t1715 = -0.17188499999999995*t1707;
  t1738 = t1686 + t1697 + t1715;
  t3550 = t65*t1976;
  t3554 = t3550 + t929;
  t1035 = 0.4999*t398;
  t1313 = t1258*t398;
  t1320 = 0.17188499999999995*t124*t398;
  t1323 = t1035 + t1313 + t1320;
  t2337 = -1.*t65*t860;
  t3280 = t2661*t1976;
  t3290 = t1542*t2864;
  t3303 = t3280 + t3290;
  t2666 = -1.*t2661*t1542;
  t2866 = -1.*t456*t2864;
  t2976 = t2666 + t2866;
  t3037 = t2661*t1542;
  t3152 = t3139*t1542;
  t3189 = t456*t2864;
  t3227 = t1976*t3224;
  t3236 = t3037 + t3152 + t3189 + t3227;
  t3380 = -1.*t456*t2661;
  t3389 = -1.*t456*t3139;
  t3427 = -1.*t1542*t3224;
  t3446 = -1.*t2864*t860;
  t3461 = t3380 + t3389 + t3427 + t3446;
  t4419 = -0.4999*t388;
  t4437 = -1.*t388*t1258;
  t4458 = -0.17188499999999995*t172*t398;
  t4466 = t4419 + t4437 + t4458;
  t3574 = 0.07323676079999998*var2[6]*t3554;
  t3585 = 0.85216*t1738*t3554;
  t3626 = 0.85216*t1323*t2473;
  t3729 = 1.70432*t2091*t1621;
  t3743 = 0.85216*t2261*t961;
  t3765 = 0.85216*t1621*t3554;
  t3768 = t2234 + t2337;
  t3777 = 0.85216*t2091*t3768;
  t3781 = 0.85216*t2031*t2473;
  t3821 = 1.70432*t961*t2473;
  t3902 = t3729 + t3743 + t3765 + t3777 + t3781 + t3821;
  t3928 = -0.5*var2[1]*t3902;
  t3951 = Power(t2091,2);
  t3974 = 1.70432*t3951;
  t4018 = 1.70432*t2091*t3554;
  t4034 = 1.70432*t2261*t2473;
  t4070 = Power(t2473,2);
  t4106 = 1.70432*t4070;
  t4203 = t3974 + t4018 + t4034 + t4106;
  t4206 = -0.5*var2[0]*t4203;
  t4229 = 0.85216*t3303*t3554;
  t4301 = 0.85216*t2976*t2473;
  t5148 = 0.17188499999999995*t124*t172;
  t5189 = t5148 + t3064;
  t4501 = -1.*t1976*t2864;
  t5288 = -0.17188499999999995*t388*t124;
  t5353 = t5288 + t2856;
  t4505 = -1.*t2661*t860;
  t4607 = t456*t2661;
  t5506 = 0.17188499999999995*t388*t124;
  t5527 = t5506 + t4458;
  t4749 = t2864*t860;
  t5917 = 1.70432*t2091*t2261;
  t5973 = 1.70432*t2091*t2473;
  t6010 = t5917 + t5973;
  t6041 = 0.85216*t2091*t2031;
  t6047 = 0.85216*t1621*t2261;
  t6052 = 0.85216*t2091*t961;
  t6083 = 0.85216*t1621*t2473;
  t6117 = t6041 + t6047 + t6052 + t6083;
  t6123 = 0.85216*t2091*t2976;
  t6178 = 0.85216*t2091*t3236;
  t6204 = 0.85216*t3303*t2473;
  t6209 = 0.85216*t2261*t3461;
  t6211 = t6123 + t6178 + t6204 + t6209;
  t2334 = -1.*t615*t456;
  t2355 = t2334 + t2337;
  t2115 = -1.*t615*t1976;
  t2138 = t2115 + t1584;
  t2085 = 1.70432*t2031*t1621;
  t2170 = 0.85216*t2091*t2138;
  t2322 = 0.85216*t2211*t2261;
  t2323 = 1.70432*t1621*t961;
  t2402 = 0.85216*t2091*t2355;
  t2480 = 0.85216*t2211*t2473;
  t2497 = t2085 + t2170 + t2322 + t2323 + t2402 + t2480;
  t4381 = -1.*t3139*t1542;
  t4491 = -1.*t456*t4466;
  t4504 = -2.*t456*t3224;
  t4510 = -2.*t3139*t860;
  t4552 = t4381 + t4491 + t4501 + t4504 + t4505 + t4510;
  t4619 = 2.*t456*t3139;
  t4634 = t3139*t1976;
  t4647 = t1542*t4466;
  t4656 = 2.*t1542*t3224;
  t4751 = t4607 + t4619 + t4634 + t4647 + t4656 + t4749;
  t6638 = 0.07323676079999998*var2[6]*t3768;
  t4808 = Power(t124,2);
  t4824 = 0.17188499999999995*t4808;
  t4834 = 0. + t1686 + t1697 + t4824;
  t4878 = -0.4999*t398;
  t4912 = -1.*t1258*t398;
  t4960 = -0.17188499999999995*t124*t398;
  t5017 = t4878 + t4912 + t4960;
  t6658 = 0.85216*t1323*t961;
  t6664 = 0.85216*t1738*t3768;
  t6709 = Power(t1621,2);
  t6716 = 1.70432*t6709;
  t6721 = 1.70432*t2031*t961;
  t6741 = Power(t961,2);
  t6743 = 1.70432*t6741;
  t6753 = 1.70432*t1621*t3768;
  t6758 = t6716 + t6721 + t6743 + t6753;
  t6760 = -0.5*var2[1]*t6758;
  t6771 = -0.5*var2[0]*t3902;
  t6772 = 0.85216*t2976*t961;
  t5269 = t5189*t1542;
  t5361 = t1976*t5353;
  t5393 = t3037 + t5269 + t3189 + t5361;
  t6791 = 0.85216*t3303*t3768;
  t5446 = -1.*t5189*t1542;
  t5543 = -1.*t456*t5527;
  t5545 = -1.*t456*t3224;
  t5558 = -1.*t456*t5353;
  t5559 = -1.*t3139*t860;
  t5560 = -1.*t5189*t860;
  t5565 = t5446 + t5543 + t4501 + t5545 + t5558 + t4505 + t5559 + t5560;
  t5588 = -1.*t456*t5189;
  t5623 = -1.*t1542*t5353;
  t5632 = t3380 + t5588 + t5623 + t3446;
  t5664 = t456*t3139;
  t5730 = t456*t5189;
  t5746 = t5189*t1976;
  t5801 = t1542*t5527;
  t5808 = t1542*t3224;
  t5830 = t1542*t5353;
  t5834 = t4607 + t5664 + t5730 + t5746 + t5801 + t5808 + t5830 + t4749;
  t6121 = -0.5*var2[5]*t6117;
  t3009 = 0.85216*t1621*t2976;
  t3241 = 0.85216*t1621*t3236;
  t3334 = 0.85216*t3303*t961;
  t3467 = 0.85216*t2031*t3461;
  t3496 = t3009 + t3241 + t3334 + t3467;
  t984 = 0.07323676079999998*var2[6]*t961;
  t1652 = 0.85216*t1323*t1621;
  t1771 = 0.85216*t1738*t961;
  t1866 = t1652 + t1771;
  t6972 = t2085 + t2323;
  t3501 = -0.5*var2[2]*t3496;
  t6542 = 0.85216*t2211*t2976;
  t6572 = 0.85216*t2211*t3236;
  t6574 = 0.85216*t3303*t2355;
  t6593 = 0.85216*t2138*t3461;
  t6595 = t6542 + t6572 + t6574 + t6593;
  t4350 = 1.70432*t3236*t2473;
  t4554 = 0.85216*t2261*t4552;
  t4597 = 1.70432*t2091*t3461;
  t4768 = 0.85216*t2091*t4751;
  t4770 = t4229 + t4301 + t4350 + t4554 + t4597 + t4768;
  t6787 = 1.70432*t3236*t961;
  t6799 = 0.85216*t2031*t4552;
  t6807 = 1.70432*t1621*t3461;
  t6821 = 0.85216*t1621*t4751;
  t6877 = t6772 + t6787 + t6791 + t6799 + t6807 + t6821;
  t5143 = 0.85216*t3236*t2473;
  t5411 = 0.85216*t5393*t2473;
  t5568 = 0.85216*t2261*t5565;
  t5582 = 0.85216*t2091*t3461;
  t5643 = 0.85216*t2091*t5632;
  t5849 = 0.85216*t2091*t5834;
  t5891 = t4229 + t4301 + t5143 + t5411 + t5568 + t5582 + t5643 + t5849;
  t6927 = 0.85216*t3236*t961;
  t6938 = 0.85216*t5393*t961;
  t6940 = 0.85216*t2031*t5565;
  t6943 = 0.85216*t1621*t3461;
  t6944 = 0.85216*t1621*t5632;
  t6948 = 0.85216*t1621*t5834;
  t6955 = t6772 + t6927 + t6938 + t6791 + t6940 + t6943 + t6944 + t6948;
  t6235 = -0.5*var2[5]*t6211;
  t6980 = -0.5*var2[5]*t3496;
  t7308 = 1.70432*t3303*t3236;
  t7314 = 1.70432*t2976*t3461;
  t7320 = t7308 + t7314;
  t6429 = 0.85216*t1323*t2211;
  t6450 = 0.85216*t1738*t2355;
  t6457 = t6429 + t6450;
  t6694 = t6658 + t6664;
  t3659 = t3585 + t3626;
  t7065 = 0.85216*t1323*t4552;
  t7072 = 0.85216*t1738*t4751;
  t7073 = t7065 + t7072;
  t6904 = 0.85216*t4834*t1621;
  t6907 = 0.85216*t5017*t961;
  t6916 = t6904 + t6907 + t6658 + t6664;
  t4867 = 0.85216*t4834*t2091;
  t5065 = 0.85216*t5017*t2473;
  t5100 = t4867 + t3585 + t5065 + t3626;
  t7211 = 0.85216*t5017*t3236;
  t7217 = 0.85216*t1323*t5565;
  t7235 = 0.85216*t4834*t3461;
  t7240 = 0.85216*t1738*t5834;
  t7245 = t7211 + t7217 + t7235 + t7240;
  t6259 = 0.85216*t1323*t2091;
  t6264 = 0.85216*t1738*t2473;
  t6293 = t6259 + t6264;
  t1867 = -0.5*var2[5]*t1866;
  t7365 = 0.85216*t1738*t3236;
  t7367 = 0.85216*t1323*t3461;
  t7369 = t7365 + t7367;
  t7655 = 0.07323676079999998*var2[0]*t3554;
  t7659 = 0.07323676079999998*var2[1]*t3768;
  t6416 = 0.07323676079999998*var2[5]*t2473;
  t7038 = 0.07323676079999998*var2[5]*t961;
  t7461 = 0.07323676079999998*var2[5]*t3236;
  p_output1[0]=(t1867 + t3501 + t984 - 0.5*(1.70432*t2031*t2091 + 1.70432*t1621*t2261 + 1.70432*t1621*t2473 + 1.70432*t2091*t961)*var2[0] - 0.5*t2497*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t3574 + t3928 + t4206 - 0.5*t4770*var2[2] - 0.5*t3659*var2[5]);
  p_output1[2]=var2[5]*(t3574 + t3928 + t4206 - 0.5*t5891*var2[2] - 0.5*t5100*var2[5]);
  p_output1[3]=-0.5*t6010*var2[5];
  p_output1[4]=t6121;
  p_output1[5]=t6235;
  p_output1[6]=-0.5*t6010*var2[0] - 0.5*t6117*var2[1] - 0.5*t6211*var2[2] - 1.*t6293*var2[5] + 0.07323676079999998*t2473*var2[6];
  p_output1[7]=t6416;
  p_output1[8]=var2[5]*(-0.5*t2497*var2[0] - 0.5*(1.70432*t1621*t2138 + 1.70432*t2031*t2211 + 1.70432*t1621*t2355 + 1.70432*t2211*t961)*var2[1] - 0.5*t6595*var2[2] - 0.5*t6457*var2[5] + 0.07323676079999998*t2355*var2[6]);
  p_output1[9]=var2[5]*(t6638 + t6760 + t6771 - 0.5*t6877*var2[2] - 0.5*t6694*var2[5]);
  p_output1[10]=var2[5]*(t6638 + t6760 + t6771 - 0.5*t6955*var2[2] - 0.5*t6916*var2[5]);
  p_output1[11]=t6121;
  p_output1[12]=-0.5*t6972*var2[5];
  p_output1[13]=t6980;
  p_output1[14]=t3501 + t984 - 0.5*t6117*var2[0] - 0.5*t6972*var2[1] - 1.*t1866*var2[5];
  p_output1[15]=t7038;
  p_output1[16]=(-0.5*t3496*var2[0] - 0.5*t6595*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t4770*var2[0] - 0.5*t6877*var2[1] - 0.5*(1.70432*Power(t3236,2) + 1.70432*Power(t3461,2) + 1.70432*t2976*t4552 + 1.70432*t3303*t4751)*var2[2] - 0.5*t7073*var2[5] + 0.07323676079999998*t4751*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t5891*var2[0] - 0.5*t6955*var2[1] - 0.5*(1.70432*t3236*t5393 + 1.70432*t2976*t5565 + 1.70432*t3461*t5632 + 1.70432*t3303*t5834)*var2[2] - 0.5*t7245*var2[5] + 0.07323676079999998*t5834*var2[6]);
  p_output1[19]=t6235;
  p_output1[20]=t6980;
  p_output1[21]=-0.5*t7320*var2[5];
  p_output1[22]=-0.5*t6211*var2[0] - 0.5*t3496*var2[1] - 0.5*t7320*var2[2] - 1.*t7369*var2[5] + 0.07323676079999998*t3236*var2[6];
  p_output1[23]=t7461;
  p_output1[24]=(-0.5*t1866*var2[0] - 0.5*t6457*var2[1])*var2[5];
  p_output1[25]=(-0.5*t3659*var2[0] - 0.5*t6694*var2[1] - 0.5*t7073*var2[2])*var2[5];
  p_output1[26]=(-0.5*t5100*var2[0] - 0.5*t6916*var2[1] - 0.5*t7245*var2[2])*var2[5];
  p_output1[27]=-0.5*t6293*var2[5];
  p_output1[28]=t1867;
  p_output1[29]=-0.5*t7369*var2[5];
  p_output1[30]=-0.5*t6293*var2[0] - 0.5*t1866*var2[1] - 0.5*t7369*var2[2];
  p_output1[31]=(0.07323676079999998*t961*var2[0] + 0.07323676079999998*t2355*var2[1])*var2[5];
  p_output1[32]=(t7655 + t7659 + 0.07323676079999998*t4751*var2[2])*var2[5];
  p_output1[33]=(t7655 + t7659 + 0.07323676079999998*t5834*var2[2])*var2[5];
  p_output1[34]=t6416;
  p_output1[35]=t7038;
  p_output1[36]=t7461;
  p_output1[37]=0.07323676079999998*t2473*var2[0] + 0.07323676079999998*t961*var2[1] + 0.07323676079999998*t3236*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L5_J6_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L5_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

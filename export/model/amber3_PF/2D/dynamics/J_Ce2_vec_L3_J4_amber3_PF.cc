/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:18 GMT-08:00
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
  double t741;
  double t14;
  double t512;
  double t772;
  double t1001;
  double t553;
  double t899;
  double t910;
  double t7;
  double t1709;
  double t1731;
  double t1732;
  double t1762;
  double t1833;
  double t983;
  double t1053;
  double t1238;
  double t1380;
  double t1441;
  double t1514;
  double t1937;
  double t1942;
  double t1961;
  double t1917;
  double t1969;
  double t1985;
  double t2497;
  double t2322;
  double t2349;
  double t2375;
  double t2580;
  double t2596;
  double t2721;
  double t2770;
  double t2389;
  double t2506;
  double t2793;
  double t2806;
  double t2840;
  double t3064;
  double t3073;
  double t3306;
  double t3315;
  double t3334;
  double t3351;
  double t3385;
  double t3439;
  double t3496;
  double t3510;
  double t3523;
  double t3532;
  double t3729;
  double t3739;
  double t3750;
  double t3758;
  double t3928;
  double t4009;
  double t2057;
  double t2091;
  double t2153;
  double t2202;
  double t2211;
  double t4607;
  double t4619;
  double t1559;
  double t1866;
  double t1890;
  double t1912;
  double t3027;
  double t4206;
  double t4209;
  double t4301;
  double t3379;
  double t3535;
  double t3579;
  double t3708;
  double t3784;
  double t3902;
  double t4050;
  double t4115;
  double t4356;
  double t4444;
  double t4465;
  double t4498;
  double t4501;
  double t5148;
  double t5162;
  double t5189;
  double t5204;
  double t4661;
  double t4667;
  double t4726;
  double t4770;
  double t4772;
  double t4778;
  double t4786;
  double t4802;
  double t4817;
  double t4834;
  double t4845;
  double t4850;
  double t4867;
  double t4912;
  double t4947;
  double t4956;
  double t4960;
  double t5049;
  double t5077;
  double t5081;
  double t5085;
  double t5127;
  double t5834;
  double t5840;
  double t5216;
  double t5852;
  double t5883;
  double t5231;
  double t5284;
  double t5940;
  double t5950;
  double t5351;
  double t6365;
  double t6370;
  double t6380;
  double t6429;
  double t6450;
  double t6463;
  double t6472;
  double t6485;
  double t6531;
  double t6532;
  double t6539;
  double t6542;
  double t6547;
  double t3013;
  double t3037;
  double t2623;
  double t2670;
  double t2514;
  double t2697;
  double t2975;
  double t2976;
  double t3053;
  double t3122;
  double t3156;
  double t5147;
  double t5215;
  double t5230;
  double t5238;
  double t5244;
  double t5304;
  double t5310;
  double t5319;
  double t5350;
  double t5353;
  double t7009;
  double t5543;
  double t5559;
  double t5623;
  double t5643;
  double t5651;
  double t5730;
  double t5746;
  double t7039;
  double t7041;
  double t7072;
  double t7073;
  double t7077;
  double t7097;
  double t7100;
  double t7122;
  double t7138;
  double t7144;
  double t7164;
  double t7171;
  double t5850;
  double t5898;
  double t5906;
  double t7196;
  double t5926;
  double t5955;
  double t5987;
  double t5994;
  double t6004;
  double t6005;
  double t6010;
  double t6027;
  double t6030;
  double t6035;
  double t6123;
  double t6134;
  double t6148;
  double t6203;
  double t6235;
  double t6242;
  double t6259;
  double t6507;
  double t3675;
  double t4127;
  double t4350;
  double t4509;
  double t4517;
  double t1525;
  double t2028;
  double t2223;
  double t2256;
  double t7373;
  double t4521;
  double t6944;
  double t6957;
  double t6960;
  double t6963;
  double t6964;
  double t5143;
  double t5258;
  double t5278;
  double t5361;
  double t5377;
  double t7177;
  double t7199;
  double t7210;
  double t7217;
  double t7221;
  double t5824;
  double t5917;
  double t6020;
  double t6024;
  double t6047;
  double t6264;
  double t6285;
  double t7260;
  double t7264;
  double t7275;
  double t7308;
  double t7331;
  double t7352;
  double t7359;
  double t6556;
  double t7383;
  double t7773;
  double t7781;
  double t7793;
  double t6791;
  double t6803;
  double t6806;
  double t7057;
  double t4728;
  double t7483;
  double t7486;
  double t7492;
  double t7250;
  double t7253;
  double t7257;
  double t5632;
  double t5789;
  double t5792;
  double t7659;
  double t7660;
  double t7662;
  double t7665;
  double t7677;
  double t6593;
  double t6602;
  double t6631;
  double t2314;
  double t7819;
  double t7850;
  double t7879;
  double t8216;
  double t8217;
  double t6758;
  double t7455;
  double t7927;
  t741 = Cos(var1[3]);
  t14 = Cos(var1[4]);
  t512 = Sin(var1[3]);
  t772 = Sin(var1[4]);
  t1001 = Cos(var1[2]);
  t553 = -1.*t14*t512;
  t899 = -1.*t741*t772;
  t910 = t553 + t899;
  t7 = Sin(var1[2]);
  t1709 = -1.*t14;
  t1731 = 1. + t1709;
  t1732 = -0.9063*t1731;
  t1762 = -1.078185*t14;
  t1833 = t1732 + t1762;
  t983 = -1.*t7*t910;
  t1053 = -1.*t741*t14;
  t1238 = t512*t772;
  t1380 = t1053 + t1238;
  t1441 = t1001*t1380;
  t1514 = t983 + t1441;
  t1937 = t741*t14;
  t1942 = -1.*t512*t772;
  t1961 = t1937 + t1942;
  t1917 = t1001*t910;
  t1969 = -1.*t7*t1961;
  t1985 = t1917 + t1969;
  t2497 = t1001*t1961;
  t2322 = t14*t512;
  t2349 = t741*t772;
  t2375 = t2322 + t2349;
  t2580 = t7*t910;
  t2596 = t2580 + t2497;
  t2721 = -1.*t1001*t1961;
  t2770 = t983 + t2721;
  t2389 = -1.*t7*t2375;
  t2506 = t2389 + t2497;
  t2793 = t1001*t2375;
  t2806 = t7*t1961;
  t2840 = t2793 + t2806;
  t3064 = t7*t1380;
  t3073 = t1917 + t3064;
  t3306 = 0.4999*t512;
  t3315 = t1833*t512;
  t3334 = -0.17188499999999995*t741*t772;
  t3351 = t3306 + t3315 + t3334;
  t3385 = -1.*t741;
  t3439 = 1. + t3385;
  t3496 = -0.4999*t3439;
  t3510 = t741*t1833;
  t3523 = 0.17188499999999995*t512*t772;
  t3532 = t3496 + t3510 + t3523;
  t3729 = -0.4999*t512;
  t3739 = -1.*t1833*t512;
  t3750 = 0.17188499999999995*t741*t772;
  t3758 = t3729 + t3739 + t3750;
  t3928 = 0.4999*t741;
  t4009 = t3928 + t3510 + t3523;
  t2057 = 0.4999*t14;
  t2091 = t1833*t14;
  t2153 = Power(t772,2);
  t2202 = -0.17188499999999995*t2153;
  t2211 = t2057 + t2091 + t2202;
  t4607 = t7*t2375;
  t4619 = t4607 + t1441;
  t1559 = 0.4999*t772;
  t1866 = t1833*t772;
  t1890 = 0.17188499999999995*t14*t772;
  t1912 = t1559 + t1866 + t1890;
  t3027 = -1.*t7*t1380;
  t4206 = t3351*t2375;
  t4209 = t1961*t3532;
  t4301 = t4206 + t4209;
  t3379 = -1.*t3351*t1961;
  t3535 = -1.*t910*t3532;
  t3579 = t3379 + t3535;
  t3708 = t3351*t1961;
  t3784 = t3758*t1961;
  t3902 = t910*t3532;
  t4050 = t2375*t4009;
  t4115 = t3708 + t3784 + t3902 + t4050;
  t4356 = -1.*t910*t3351;
  t4444 = -1.*t910*t3758;
  t4465 = -1.*t1961*t4009;
  t4498 = -1.*t3532*t1380;
  t4501 = t4356 + t4444 + t4465 + t4498;
  t5148 = -0.4999*t741;
  t5162 = -1.*t741*t1833;
  t5189 = -0.17188499999999995*t512*t772;
  t5204 = t5148 + t5162 + t5189;
  t4661 = 0.07323676079999998*var2[4]*t4619;
  t4667 = 0.85216*t2211*t4619;
  t4726 = 0.85216*t1912*t3073;
  t4770 = 1.70432*t2596*t1985;
  t4772 = 0.85216*t2840*t1514;
  t4778 = 0.85216*t1985*t4619;
  t4786 = t2793 + t3027;
  t4802 = 0.85216*t2596*t4786;
  t4817 = 0.85216*t2506*t3073;
  t4834 = 1.70432*t1514*t3073;
  t4845 = t4770 + t4772 + t4778 + t4802 + t4817 + t4834;
  t4850 = -0.5*var2[1]*t4845;
  t4867 = Power(t2596,2);
  t4912 = 1.70432*t4867;
  t4947 = 1.70432*t2596*t4619;
  t4956 = 1.70432*t2840*t3073;
  t4960 = Power(t3073,2);
  t5049 = 1.70432*t4960;
  t5077 = t4912 + t4947 + t4956 + t5049;
  t5081 = -0.5*var2[0]*t5077;
  t5085 = 0.85216*t4301*t4619;
  t5127 = 0.85216*t3579*t3073;
  t5834 = 0.17188499999999995*t14*t512;
  t5840 = t5834 + t3750;
  t5216 = -1.*t2375*t3532;
  t5852 = -0.17188499999999995*t741*t14;
  t5883 = t5852 + t3523;
  t5231 = -1.*t3351*t1380;
  t5284 = t910*t3351;
  t5940 = 0.17188499999999995*t741*t14;
  t5950 = t5940 + t5189;
  t5351 = t3532*t1380;
  t6365 = 1.70432*t2596*t2840;
  t6370 = 1.70432*t2596*t3073;
  t6380 = t6365 + t6370;
  t6429 = 0.85216*t2596*t2506;
  t6450 = 0.85216*t1985*t2840;
  t6463 = 0.85216*t2596*t1514;
  t6472 = 0.85216*t1985*t3073;
  t6485 = t6429 + t6450 + t6463 + t6472;
  t6531 = 0.85216*t2596*t3579;
  t6532 = 0.85216*t2596*t4115;
  t6539 = 0.85216*t4301*t3073;
  t6542 = 0.85216*t2840*t4501;
  t6547 = t6531 + t6532 + t6539 + t6542;
  t3013 = -1.*t1001*t910;
  t3037 = t3013 + t3027;
  t2623 = -1.*t1001*t2375;
  t2670 = t2623 + t1969;
  t2514 = 1.70432*t2506*t1985;
  t2697 = 0.85216*t2596*t2670;
  t2975 = 0.85216*t2770*t2840;
  t2976 = 1.70432*t1985*t1514;
  t3053 = 0.85216*t2596*t3037;
  t3122 = 0.85216*t2770*t3073;
  t3156 = t2514 + t2697 + t2975 + t2976 + t3053 + t3122;
  t5147 = -1.*t3758*t1961;
  t5215 = -1.*t910*t5204;
  t5230 = -2.*t910*t4009;
  t5238 = -2.*t3758*t1380;
  t5244 = t5147 + t5215 + t5216 + t5230 + t5231 + t5238;
  t5304 = 2.*t910*t3758;
  t5310 = t3758*t2375;
  t5319 = t1961*t5204;
  t5350 = 2.*t1961*t4009;
  t5353 = t5284 + t5304 + t5310 + t5319 + t5350 + t5351;
  t7009 = 0.07323676079999998*var2[4]*t4786;
  t5543 = Power(t14,2);
  t5559 = 0.17188499999999995*t5543;
  t5623 = 0. + t2057 + t2091 + t5559;
  t5643 = -0.4999*t772;
  t5651 = -1.*t1833*t772;
  t5730 = -0.17188499999999995*t14*t772;
  t5746 = t5643 + t5651 + t5730;
  t7039 = 0.85216*t1912*t1514;
  t7041 = 0.85216*t2211*t4786;
  t7072 = Power(t1985,2);
  t7073 = 1.70432*t7072;
  t7077 = 1.70432*t2506*t1514;
  t7097 = Power(t1514,2);
  t7100 = 1.70432*t7097;
  t7122 = 1.70432*t1985*t4786;
  t7138 = t7073 + t7077 + t7100 + t7122;
  t7144 = -0.5*var2[1]*t7138;
  t7164 = -0.5*var2[0]*t4845;
  t7171 = 0.85216*t3579*t1514;
  t5850 = t5840*t1961;
  t5898 = t2375*t5883;
  t5906 = t3708 + t5850 + t3902 + t5898;
  t7196 = 0.85216*t4301*t4786;
  t5926 = -1.*t5840*t1961;
  t5955 = -1.*t910*t5950;
  t5987 = -1.*t910*t4009;
  t5994 = -1.*t910*t5883;
  t6004 = -1.*t3758*t1380;
  t6005 = -1.*t5840*t1380;
  t6010 = t5926 + t5955 + t5216 + t5987 + t5994 + t5231 + t6004 + t6005;
  t6027 = -1.*t910*t5840;
  t6030 = -1.*t1961*t5883;
  t6035 = t4356 + t6027 + t6030 + t4498;
  t6123 = t910*t3758;
  t6134 = t910*t5840;
  t6148 = t5840*t2375;
  t6203 = t1961*t5950;
  t6235 = t1961*t4009;
  t6242 = t1961*t5883;
  t6259 = t5284 + t6123 + t6134 + t6148 + t6203 + t6235 + t6242 + t5351;
  t6507 = -0.5*var2[3]*t6485;
  t3675 = 0.85216*t1985*t3579;
  t4127 = 0.85216*t1985*t4115;
  t4350 = 0.85216*t4301*t1514;
  t4509 = 0.85216*t2506*t4501;
  t4517 = t3675 + t4127 + t4350 + t4509;
  t1525 = 0.07323676079999998*var2[4]*t1514;
  t2028 = 0.85216*t1912*t1985;
  t2223 = 0.85216*t2211*t1514;
  t2256 = t2028 + t2223;
  t7373 = t2514 + t2976;
  t4521 = -0.5*var2[2]*t4517;
  t6944 = 0.85216*t2770*t3579;
  t6957 = 0.85216*t2770*t4115;
  t6960 = 0.85216*t4301*t3037;
  t6963 = 0.85216*t2670*t4501;
  t6964 = t6944 + t6957 + t6960 + t6963;
  t5143 = 1.70432*t4115*t3073;
  t5258 = 0.85216*t2840*t5244;
  t5278 = 1.70432*t2596*t4501;
  t5361 = 0.85216*t2596*t5353;
  t5377 = t5085 + t5127 + t5143 + t5258 + t5278 + t5361;
  t7177 = 1.70432*t4115*t1514;
  t7199 = 0.85216*t2506*t5244;
  t7210 = 1.70432*t1985*t4501;
  t7217 = 0.85216*t1985*t5353;
  t7221 = t7171 + t7177 + t7196 + t7199 + t7210 + t7217;
  t5824 = 0.85216*t4115*t3073;
  t5917 = 0.85216*t5906*t3073;
  t6020 = 0.85216*t2840*t6010;
  t6024 = 0.85216*t2596*t4501;
  t6047 = 0.85216*t2596*t6035;
  t6264 = 0.85216*t2596*t6259;
  t6285 = t5085 + t5127 + t5824 + t5917 + t6020 + t6024 + t6047 + t6264;
  t7260 = 0.85216*t4115*t1514;
  t7264 = 0.85216*t5906*t1514;
  t7275 = 0.85216*t2506*t6010;
  t7308 = 0.85216*t1985*t4501;
  t7331 = 0.85216*t1985*t6035;
  t7352 = 0.85216*t1985*t6259;
  t7359 = t7171 + t7260 + t7264 + t7196 + t7275 + t7308 + t7331 + t7352;
  t6556 = -0.5*var2[3]*t6547;
  t7383 = -0.5*var2[3]*t4517;
  t7773 = 1.70432*t4301*t4115;
  t7781 = 1.70432*t3579*t4501;
  t7793 = t7773 + t7781;
  t6791 = 0.85216*t1912*t2770;
  t6803 = 0.85216*t2211*t3037;
  t6806 = t6791 + t6803;
  t7057 = t7039 + t7041;
  t4728 = t4667 + t4726;
  t7483 = 0.85216*t1912*t5244;
  t7486 = 0.85216*t2211*t5353;
  t7492 = t7483 + t7486;
  t7250 = 0.85216*t5623*t1985;
  t7253 = 0.85216*t5746*t1514;
  t7257 = t7250 + t7253 + t7039 + t7041;
  t5632 = 0.85216*t5623*t2596;
  t5789 = 0.85216*t5746*t3073;
  t5792 = t5632 + t4667 + t5789 + t4726;
  t7659 = 0.85216*t5746*t4115;
  t7660 = 0.85216*t1912*t6010;
  t7662 = 0.85216*t5623*t4501;
  t7665 = 0.85216*t2211*t6259;
  t7677 = t7659 + t7660 + t7662 + t7665;
  t6593 = 0.85216*t1912*t2596;
  t6602 = 0.85216*t2211*t3073;
  t6631 = t6593 + t6602;
  t2314 = -0.5*var2[3]*t2256;
  t7819 = 0.85216*t2211*t4115;
  t7850 = 0.85216*t1912*t4501;
  t7879 = t7819 + t7850;
  t8216 = 0.07323676079999998*var2[0]*t4619;
  t8217 = 0.07323676079999998*var2[1]*t4786;
  t6758 = 0.07323676079999998*var2[3]*t3073;
  t7455 = 0.07323676079999998*var2[3]*t1514;
  t7927 = 0.07323676079999998*var2[3]*t4115;
  p_output1[0]=(t1525 + t2314 + t4521 - 0.5*(1.70432*t1514*t2596 + 1.70432*t2506*t2596 + 1.70432*t1985*t2840 + 1.70432*t1985*t3073)*var2[0] - 0.5*t3156*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t4661 + t4850 + t5081 - 0.5*t5377*var2[2] - 0.5*t4728*var2[3]);
  p_output1[2]=var2[3]*(t4661 + t4850 + t5081 - 0.5*t6285*var2[2] - 0.5*t5792*var2[3]);
  p_output1[3]=-0.5*t6380*var2[3];
  p_output1[4]=t6507;
  p_output1[5]=t6556;
  p_output1[6]=-0.5*t6380*var2[0] - 0.5*t6485*var2[1] - 0.5*t6547*var2[2] - 1.*t6631*var2[3] + 0.07323676079999998*t3073*var2[4];
  p_output1[7]=t6758;
  p_output1[8]=var2[3]*(-0.5*t3156*var2[0] - 0.5*(1.70432*t1985*t2670 + 1.70432*t1514*t2770 + 1.70432*t2506*t2770 + 1.70432*t1985*t3037)*var2[1] - 0.5*t6964*var2[2] - 0.5*t6806*var2[3] + 0.07323676079999998*t3037*var2[4]);
  p_output1[9]=var2[3]*(t7009 + t7144 + t7164 - 0.5*t7221*var2[2] - 0.5*t7057*var2[3]);
  p_output1[10]=var2[3]*(t7009 + t7144 + t7164 - 0.5*t7359*var2[2] - 0.5*t7257*var2[3]);
  p_output1[11]=t6507;
  p_output1[12]=-0.5*t7373*var2[3];
  p_output1[13]=t7383;
  p_output1[14]=t1525 + t4521 - 0.5*t6485*var2[0] - 0.5*t7373*var2[1] - 1.*t2256*var2[3];
  p_output1[15]=t7455;
  p_output1[16]=(-0.5*t4517*var2[0] - 0.5*t6964*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t5377*var2[0] - 0.5*t7221*var2[1] - 0.5*(1.70432*Power(t4115,2) + 1.70432*Power(t4501,2) + 1.70432*t3579*t5244 + 1.70432*t4301*t5353)*var2[2] - 0.5*t7492*var2[3] + 0.07323676079999998*t5353*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t6285*var2[0] - 0.5*t7359*var2[1] - 0.5*(1.70432*t4115*t5906 + 1.70432*t3579*t6010 + 1.70432*t4501*t6035 + 1.70432*t4301*t6259)*var2[2] - 0.5*t7677*var2[3] + 0.07323676079999998*t6259*var2[4]);
  p_output1[19]=t6556;
  p_output1[20]=t7383;
  p_output1[21]=-0.5*t7793*var2[3];
  p_output1[22]=-0.5*t6547*var2[0] - 0.5*t4517*var2[1] - 0.5*t7793*var2[2] - 1.*t7879*var2[3] + 0.07323676079999998*t4115*var2[4];
  p_output1[23]=t7927;
  p_output1[24]=(-0.5*t2256*var2[0] - 0.5*t6806*var2[1])*var2[3];
  p_output1[25]=(-0.5*t4728*var2[0] - 0.5*t7057*var2[1] - 0.5*t7492*var2[2])*var2[3];
  p_output1[26]=(-0.5*t5792*var2[0] - 0.5*t7257*var2[1] - 0.5*t7677*var2[2])*var2[3];
  p_output1[27]=-0.5*t6631*var2[3];
  p_output1[28]=t2314;
  p_output1[29]=-0.5*t7879*var2[3];
  p_output1[30]=-0.5*t6631*var2[0] - 0.5*t2256*var2[1] - 0.5*t7879*var2[2];
  p_output1[31]=(0.07323676079999998*t1514*var2[0] + 0.07323676079999998*t3037*var2[1])*var2[3];
  p_output1[32]=(t8216 + t8217 + 0.07323676079999998*t5353*var2[2])*var2[3];
  p_output1[33]=(t8216 + t8217 + 0.07323676079999998*t6259*var2[2])*var2[3];
  p_output1[34]=t6758;
  p_output1[35]=t7455;
  p_output1[36]=t7927;
  p_output1[37]=0.07323676079999998*t3073*var2[0] + 0.07323676079999998*t1514*var2[1] + 0.07323676079999998*t4115*var2[2];
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

#include "J_Ce2_vec_L3_J4_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L3_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:27:16 GMT-08:00
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
  double t634;
  double t360;
  double t576;
  double t687;
  double t796;
  double t597;
  double t693;
  double t716;
  double t152;
  double t989;
  double t992;
  double t1031;
  double t1067;
  double t1078;
  double t740;
  double t805;
  double t822;
  double t857;
  double t905;
  double t921;
  double t1205;
  double t1232;
  double t1290;
  double t1196;
  double t1314;
  double t1316;
  double t1696;
  double t1538;
  double t1551;
  double t1636;
  double t1739;
  double t1744;
  double t1841;
  double t1895;
  double t1659;
  double t1710;
  double t1901;
  double t1917;
  double t1942;
  double t1997;
  double t2016;
  double t2203;
  double t2221;
  double t2245;
  double t2247;
  double t2301;
  double t2305;
  double t2309;
  double t2316;
  double t2318;
  double t2331;
  double t2437;
  double t2449;
  double t2504;
  double t2512;
  double t2546;
  double t2570;
  double t1426;
  double t1443;
  double t1455;
  double t1496;
  double t1503;
  double t2753;
  double t2773;
  double t976;
  double t1111;
  double t1127;
  double t1162;
  double t1980;
  double t2618;
  double t2633;
  double t2634;
  double t2298;
  double t2335;
  double t2386;
  double t2402;
  double t2515;
  double t2536;
  double t2574;
  double t2590;
  double t2643;
  double t2649;
  double t2658;
  double t2664;
  double t2666;
  double t3147;
  double t3157;
  double t3162;
  double t3176;
  double t2783;
  double t2789;
  double t2791;
  double t2835;
  double t2852;
  double t2857;
  double t2866;
  double t2891;
  double t2932;
  double t2947;
  double t2965;
  double t2968;
  double t2971;
  double t2975;
  double t2989;
  double t2995;
  double t2999;
  double t3009;
  double t3013;
  double t3017;
  double t3024;
  double t3049;
  double t3680;
  double t3681;
  double t3233;
  double t3696;
  double t3705;
  double t3291;
  double t3434;
  double t3744;
  double t3745;
  double t3512;
  double t4012;
  double t4026;
  double t4029;
  double t4039;
  double t4054;
  double t4102;
  double t4105;
  double t4108;
  double t4121;
  double t4141;
  double t4162;
  double t4176;
  double t4186;
  double t1966;
  double t1984;
  double t1757;
  double t1780;
  double t1715;
  double t1831;
  double t1943;
  double t1948;
  double t1986;
  double t2053;
  double t2059;
  double t3124;
  double t3197;
  double t3289;
  double t3299;
  double t3317;
  double t3444;
  double t3449;
  double t3504;
  double t3508;
  double t3525;
  double t4584;
  double t3554;
  double t3558;
  double t3585;
  double t3605;
  double t3613;
  double t3631;
  double t3632;
  double t4587;
  double t4611;
  double t4646;
  double t4666;
  double t4671;
  double t4684;
  double t4688;
  double t4695;
  double t4702;
  double t4706;
  double t4727;
  double t4735;
  double t3693;
  double t3706;
  double t3719;
  double t4754;
  double t3736;
  double t3747;
  double t3749;
  double t3772;
  double t3780;
  double t3787;
  double t3794;
  double t3821;
  double t3824;
  double t3829;
  double t3840;
  double t3857;
  double t3879;
  double t3881;
  double t3898;
  double t3900;
  double t3904;
  double t4117;
  double t2399;
  double t2591;
  double t2635;
  double t2670;
  double t2679;
  double t952;
  double t1351;
  double t1512;
  double t1516;
  double t4956;
  double t2694;
  double t4522;
  double t4529;
  double t4536;
  double t4548;
  double t4561;
  double t3058;
  double t3358;
  double t3400;
  double t3527;
  double t3528;
  double t4750;
  double t4766;
  double t4770;
  double t4775;
  double t4793;
  double t3672;
  double t3727;
  double t3798;
  double t3817;
  double t3839;
  double t3919;
  double t3920;
  double t4852;
  double t4856;
  double t4859;
  double t4861;
  double t4876;
  double t4906;
  double t4916;
  double t4203;
  double t4962;
  double t5372;
  double t5373;
  double t5378;
  double t4371;
  double t4373;
  double t4392;
  double t4621;
  double t2809;
  double t5033;
  double t5041;
  double t5043;
  double t4840;
  double t4848;
  double t4849;
  double t3594;
  double t3640;
  double t3651;
  double t5254;
  double t5260;
  double t5295;
  double t5301;
  double t5303;
  double t4223;
  double t4265;
  double t4273;
  double t1519;
  double t5414;
  double t5439;
  double t5440;
  double t5740;
  double t5741;
  double t4352;
  double t5001;
  double t5494;
  t634 = Cos(var1[6]);
  t360 = Cos(var1[7]);
  t576 = Sin(var1[6]);
  t687 = Sin(var1[7]);
  t796 = Cos(var1[2]);
  t597 = -1.*t360*t576;
  t693 = -1.*t634*t687;
  t716 = t597 + t693;
  t152 = Sin(var1[2]);
  t989 = -1.*t360;
  t992 = 1. + t989;
  t1031 = -0.9063*t992;
  t1067 = -1.0567*t360;
  t1078 = t1031 + t1067;
  t740 = -1.*t152*t716;
  t805 = -1.*t634*t360;
  t822 = t576*t687;
  t857 = t805 + t822;
  t905 = t796*t857;
  t921 = t740 + t905;
  t1205 = t634*t360;
  t1232 = -1.*t576*t687;
  t1290 = t1205 + t1232;
  t1196 = t796*t716;
  t1314 = -1.*t152*t1290;
  t1316 = t1196 + t1314;
  t1696 = t796*t1290;
  t1538 = t360*t576;
  t1551 = t634*t687;
  t1636 = t1538 + t1551;
  t1739 = t152*t716;
  t1744 = t1739 + t1696;
  t1841 = -1.*t796*t1290;
  t1895 = t740 + t1841;
  t1659 = -1.*t152*t1636;
  t1710 = t1659 + t1696;
  t1901 = t796*t1636;
  t1917 = t152*t1290;
  t1942 = t1901 + t1917;
  t1997 = t152*t857;
  t2016 = t1196 + t1997;
  t2203 = 0.4999*t576;
  t2221 = t1078*t576;
  t2245 = -0.15039999999999998*t634*t687;
  t2247 = t2203 + t2221 + t2245;
  t2301 = -1.*t634;
  t2305 = 1. + t2301;
  t2309 = -0.4999*t2305;
  t2316 = t634*t1078;
  t2318 = 0.15039999999999998*t576*t687;
  t2331 = t2309 + t2316 + t2318;
  t2437 = -0.4999*t576;
  t2449 = -1.*t1078*t576;
  t2504 = 0.15039999999999998*t634*t687;
  t2512 = t2437 + t2449 + t2504;
  t2546 = 0.4999*t634;
  t2570 = t2546 + t2316 + t2318;
  t1426 = 0.4999*t360;
  t1443 = t1078*t360;
  t1455 = Power(t687,2);
  t1496 = -0.15039999999999998*t1455;
  t1503 = t1426 + t1443 + t1496;
  t2753 = t152*t1636;
  t2773 = t2753 + t905;
  t976 = 0.4999*t687;
  t1111 = t1078*t687;
  t1127 = 0.15039999999999998*t360*t687;
  t1162 = t976 + t1111 + t1127;
  t1980 = -1.*t152*t857;
  t2618 = t2247*t1636;
  t2633 = t1290*t2331;
  t2634 = t2618 + t2633;
  t2298 = -1.*t2247*t1290;
  t2335 = -1.*t716*t2331;
  t2386 = t2298 + t2335;
  t2402 = t2247*t1290;
  t2515 = t2512*t1290;
  t2536 = t716*t2331;
  t2574 = t1636*t2570;
  t2590 = t2402 + t2515 + t2536 + t2574;
  t2643 = -1.*t716*t2247;
  t2649 = -1.*t716*t2512;
  t2658 = -1.*t1290*t2570;
  t2664 = -1.*t2331*t857;
  t2666 = t2643 + t2649 + t2658 + t2664;
  t3147 = -0.4999*t634;
  t3157 = -1.*t634*t1078;
  t3162 = -0.15039999999999998*t576*t687;
  t3176 = t3147 + t3157 + t3162;
  t2783 = 0.26996047999999995*var2[7]*t2773;
  t2789 = 3.5899*t1503*t2773;
  t2791 = 3.5899*t1162*t2016;
  t2835 = 7.1798*t1744*t1316;
  t2852 = 3.5899*t1942*t921;
  t2857 = 3.5899*t1316*t2773;
  t2866 = t1901 + t1980;
  t2891 = 3.5899*t1744*t2866;
  t2932 = 3.5899*t1710*t2016;
  t2947 = 7.1798*t921*t2016;
  t2965 = t2835 + t2852 + t2857 + t2891 + t2932 + t2947;
  t2968 = -0.5*var2[1]*t2965;
  t2971 = Power(t1744,2);
  t2975 = 7.1798*t2971;
  t2989 = 7.1798*t1744*t2773;
  t2995 = 7.1798*t1942*t2016;
  t2999 = Power(t2016,2);
  t3009 = 7.1798*t2999;
  t3013 = t2975 + t2989 + t2995 + t3009;
  t3017 = -0.5*var2[0]*t3013;
  t3024 = 3.5899*t2634*t2773;
  t3049 = 3.5899*t2386*t2016;
  t3680 = 0.15039999999999998*t360*t576;
  t3681 = t3680 + t2504;
  t3233 = -1.*t1636*t2331;
  t3696 = -0.15039999999999998*t634*t360;
  t3705 = t3696 + t2318;
  t3291 = -1.*t2247*t857;
  t3434 = t716*t2247;
  t3744 = 0.15039999999999998*t634*t360;
  t3745 = t3744 + t3162;
  t3512 = t2331*t857;
  t4012 = 7.1798*t1744*t1942;
  t4026 = 7.1798*t1744*t2016;
  t4029 = t4012 + t4026;
  t4039 = 3.5899*t1744*t1710;
  t4054 = 3.5899*t1316*t1942;
  t4102 = 3.5899*t1744*t921;
  t4105 = 3.5899*t1316*t2016;
  t4108 = t4039 + t4054 + t4102 + t4105;
  t4121 = 3.5899*t1744*t2386;
  t4141 = 3.5899*t1744*t2590;
  t4162 = 3.5899*t2634*t2016;
  t4176 = 3.5899*t1942*t2666;
  t4186 = t4121 + t4141 + t4162 + t4176;
  t1966 = -1.*t796*t716;
  t1984 = t1966 + t1980;
  t1757 = -1.*t796*t1636;
  t1780 = t1757 + t1314;
  t1715 = 7.1798*t1710*t1316;
  t1831 = 3.5899*t1744*t1780;
  t1943 = 3.5899*t1895*t1942;
  t1948 = 7.1798*t1316*t921;
  t1986 = 3.5899*t1744*t1984;
  t2053 = 3.5899*t1895*t2016;
  t2059 = t1715 + t1831 + t1943 + t1948 + t1986 + t2053;
  t3124 = -1.*t2512*t1290;
  t3197 = -1.*t716*t3176;
  t3289 = -2.*t716*t2570;
  t3299 = -2.*t2512*t857;
  t3317 = t3124 + t3197 + t3233 + t3289 + t3291 + t3299;
  t3444 = 2.*t716*t2512;
  t3449 = t2512*t1636;
  t3504 = t1290*t3176;
  t3508 = 2.*t1290*t2570;
  t3525 = t3434 + t3444 + t3449 + t3504 + t3508 + t3512;
  t4584 = 0.26996047999999995*var2[7]*t2866;
  t3554 = Power(t360,2);
  t3558 = 0.15039999999999998*t3554;
  t3585 = 0. + t1426 + t1443 + t3558;
  t3605 = -0.4999*t687;
  t3613 = -1.*t1078*t687;
  t3631 = -0.15039999999999998*t360*t687;
  t3632 = t3605 + t3613 + t3631;
  t4587 = 3.5899*t1162*t921;
  t4611 = 3.5899*t1503*t2866;
  t4646 = Power(t1316,2);
  t4666 = 7.1798*t4646;
  t4671 = 7.1798*t1710*t921;
  t4684 = Power(t921,2);
  t4688 = 7.1798*t4684;
  t4695 = 7.1798*t1316*t2866;
  t4702 = t4666 + t4671 + t4688 + t4695;
  t4706 = -0.5*var2[1]*t4702;
  t4727 = -0.5*var2[0]*t2965;
  t4735 = 3.5899*t2386*t921;
  t3693 = t3681*t1290;
  t3706 = t1636*t3705;
  t3719 = t2402 + t3693 + t2536 + t3706;
  t4754 = 3.5899*t2634*t2866;
  t3736 = -1.*t3681*t1290;
  t3747 = -1.*t716*t3745;
  t3749 = -1.*t716*t2570;
  t3772 = -1.*t716*t3705;
  t3780 = -1.*t2512*t857;
  t3787 = -1.*t3681*t857;
  t3794 = t3736 + t3747 + t3233 + t3749 + t3772 + t3291 + t3780 + t3787;
  t3821 = -1.*t716*t3681;
  t3824 = -1.*t1290*t3705;
  t3829 = t2643 + t3821 + t3824 + t2664;
  t3840 = t716*t2512;
  t3857 = t716*t3681;
  t3879 = t3681*t1636;
  t3881 = t1290*t3745;
  t3898 = t1290*t2570;
  t3900 = t1290*t3705;
  t3904 = t3434 + t3840 + t3857 + t3879 + t3881 + t3898 + t3900 + t3512;
  t4117 = -0.5*var2[6]*t4108;
  t2399 = 3.5899*t1316*t2386;
  t2591 = 3.5899*t1316*t2590;
  t2635 = 3.5899*t2634*t921;
  t2670 = 3.5899*t1710*t2666;
  t2679 = t2399 + t2591 + t2635 + t2670;
  t952 = 0.26996047999999995*var2[7]*t921;
  t1351 = 3.5899*t1162*t1316;
  t1512 = 3.5899*t1503*t921;
  t1516 = t1351 + t1512;
  t4956 = t1715 + t1948;
  t2694 = -0.5*var2[2]*t2679;
  t4522 = 3.5899*t1895*t2386;
  t4529 = 3.5899*t1895*t2590;
  t4536 = 3.5899*t2634*t1984;
  t4548 = 3.5899*t1780*t2666;
  t4561 = t4522 + t4529 + t4536 + t4548;
  t3058 = 7.1798*t2590*t2016;
  t3358 = 3.5899*t1942*t3317;
  t3400 = 7.1798*t1744*t2666;
  t3527 = 3.5899*t1744*t3525;
  t3528 = t3024 + t3049 + t3058 + t3358 + t3400 + t3527;
  t4750 = 7.1798*t2590*t921;
  t4766 = 3.5899*t1710*t3317;
  t4770 = 7.1798*t1316*t2666;
  t4775 = 3.5899*t1316*t3525;
  t4793 = t4735 + t4750 + t4754 + t4766 + t4770 + t4775;
  t3672 = 3.5899*t2590*t2016;
  t3727 = 3.5899*t3719*t2016;
  t3798 = 3.5899*t1942*t3794;
  t3817 = 3.5899*t1744*t2666;
  t3839 = 3.5899*t1744*t3829;
  t3919 = 3.5899*t1744*t3904;
  t3920 = t3024 + t3049 + t3672 + t3727 + t3798 + t3817 + t3839 + t3919;
  t4852 = 3.5899*t2590*t921;
  t4856 = 3.5899*t3719*t921;
  t4859 = 3.5899*t1710*t3794;
  t4861 = 3.5899*t1316*t2666;
  t4876 = 3.5899*t1316*t3829;
  t4906 = 3.5899*t1316*t3904;
  t4916 = t4735 + t4852 + t4856 + t4754 + t4859 + t4861 + t4876 + t4906;
  t4203 = -0.5*var2[6]*t4186;
  t4962 = -0.5*var2[6]*t2679;
  t5372 = 7.1798*t2634*t2590;
  t5373 = 7.1798*t2386*t2666;
  t5378 = t5372 + t5373;
  t4371 = 3.5899*t1162*t1895;
  t4373 = 3.5899*t1503*t1984;
  t4392 = t4371 + t4373;
  t4621 = t4587 + t4611;
  t2809 = t2789 + t2791;
  t5033 = 3.5899*t1162*t3317;
  t5041 = 3.5899*t1503*t3525;
  t5043 = t5033 + t5041;
  t4840 = 3.5899*t3585*t1316;
  t4848 = 3.5899*t3632*t921;
  t4849 = t4840 + t4848 + t4587 + t4611;
  t3594 = 3.5899*t3585*t1744;
  t3640 = 3.5899*t3632*t2016;
  t3651 = t3594 + t2789 + t3640 + t2791;
  t5254 = 3.5899*t3632*t2590;
  t5260 = 3.5899*t1162*t3794;
  t5295 = 3.5899*t3585*t2666;
  t5301 = 3.5899*t1503*t3904;
  t5303 = t5254 + t5260 + t5295 + t5301;
  t4223 = 3.5899*t1162*t1744;
  t4265 = 3.5899*t1503*t2016;
  t4273 = t4223 + t4265;
  t1519 = -0.5*var2[6]*t1516;
  t5414 = 3.5899*t1503*t2590;
  t5439 = 3.5899*t1162*t2666;
  t5440 = t5414 + t5439;
  t5740 = 0.26996047999999995*var2[0]*t2773;
  t5741 = 0.26996047999999995*var2[1]*t2866;
  t4352 = 0.26996047999999995*var2[6]*t2016;
  t5001 = 0.26996047999999995*var2[6]*t921;
  t5494 = 0.26996047999999995*var2[6]*t2590;
  p_output1[0]=(t1519 + t2694 + t952 - 0.5*(7.1798*t1710*t1744 + 7.1798*t1316*t1942 + 7.1798*t1316*t2016 + 7.1798*t1744*t921)*var2[0] - 0.5*t2059*var2[1])*var2[6];
  p_output1[1]=var2[6]*(t2783 + t2968 + t3017 - 0.5*t3528*var2[2] - 0.5*t2809*var2[6]);
  p_output1[2]=var2[6]*(t2783 + t2968 + t3017 - 0.5*t3920*var2[2] - 0.5*t3651*var2[6]);
  p_output1[3]=-0.5*t4029*var2[6];
  p_output1[4]=t4117;
  p_output1[5]=t4203;
  p_output1[6]=-0.5*t4029*var2[0] - 0.5*t4108*var2[1] - 0.5*t4186*var2[2] - 1.*t4273*var2[6] + 0.26996047999999995*t2016*var2[7];
  p_output1[7]=t4352;
  p_output1[8]=var2[6]*(-0.5*t2059*var2[0] - 0.5*(7.1798*t1316*t1780 + 7.1798*t1710*t1895 + 7.1798*t1316*t1984 + 7.1798*t1895*t921)*var2[1] - 0.5*t4561*var2[2] - 0.5*t4392*var2[6] + 0.26996047999999995*t1984*var2[7]);
  p_output1[9]=var2[6]*(t4584 + t4706 + t4727 - 0.5*t4793*var2[2] - 0.5*t4621*var2[6]);
  p_output1[10]=var2[6]*(t4584 + t4706 + t4727 - 0.5*t4916*var2[2] - 0.5*t4849*var2[6]);
  p_output1[11]=t4117;
  p_output1[12]=-0.5*t4956*var2[6];
  p_output1[13]=t4962;
  p_output1[14]=t2694 + t952 - 0.5*t4108*var2[0] - 0.5*t4956*var2[1] - 1.*t1516*var2[6];
  p_output1[15]=t5001;
  p_output1[16]=(-0.5*t2679*var2[0] - 0.5*t4561*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t3528*var2[0] - 0.5*t4793*var2[1] - 0.5*(7.1798*Power(t2590,2) + 7.1798*Power(t2666,2) + 7.1798*t2386*t3317 + 7.1798*t2634*t3525)*var2[2] - 0.5*t5043*var2[6] + 0.26996047999999995*t3525*var2[7]);
  p_output1[18]=var2[6]*(-0.5*t3920*var2[0] - 0.5*t4916*var2[1] - 0.5*(7.1798*t2590*t3719 + 7.1798*t2386*t3794 + 7.1798*t2666*t3829 + 7.1798*t2634*t3904)*var2[2] - 0.5*t5303*var2[6] + 0.26996047999999995*t3904*var2[7]);
  p_output1[19]=t4203;
  p_output1[20]=t4962;
  p_output1[21]=-0.5*t5378*var2[6];
  p_output1[22]=-0.5*t4186*var2[0] - 0.5*t2679*var2[1] - 0.5*t5378*var2[2] - 1.*t5440*var2[6] + 0.26996047999999995*t2590*var2[7];
  p_output1[23]=t5494;
  p_output1[24]=(-0.5*t1516*var2[0] - 0.5*t4392*var2[1])*var2[6];
  p_output1[25]=(-0.5*t2809*var2[0] - 0.5*t4621*var2[1] - 0.5*t5043*var2[2])*var2[6];
  p_output1[26]=(-0.5*t3651*var2[0] - 0.5*t4849*var2[1] - 0.5*t5303*var2[2])*var2[6];
  p_output1[27]=-0.5*t4273*var2[6];
  p_output1[28]=t1519;
  p_output1[29]=-0.5*t5440*var2[6];
  p_output1[30]=-0.5*t4273*var2[0] - 0.5*t1516*var2[1] - 0.5*t5440*var2[2];
  p_output1[31]=(0.26996047999999995*t921*var2[0] + 0.26996047999999995*t1984*var2[1])*var2[6];
  p_output1[32]=(t5740 + t5741 + 0.26996047999999995*t3525*var2[2])*var2[6];
  p_output1[33]=(t5740 + t5741 + 0.26996047999999995*t3904*var2[2])*var2[6];
  p_output1[34]=t4352;
  p_output1[35]=t5001;
  p_output1[36]=t5494;
  p_output1[37]=0.26996047999999995*t2016*var2[0] + 0.26996047999999995*t921*var2[1] + 0.26996047999999995*t2590*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L6_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L6_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:32 GMT-08:00
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
  double t518;
  double t448;
  double t455;
  double t565;
  double t29;
  double t471;
  double t575;
  double t814;
  double t940;
  double t1219;
  double t1263;
  double t1342;
  double t1523;
  double t1673;
  double t1714;
  double t1751;
  double t2223;
  double t1469;
  double t1558;
  double t1932;
  double t1937;
  double t2097;
  double t2271;
  double t2448;
  double t2462;
  double t2502;
  double t835;
  double t2639;
  double t2677;
  double t2790;
  double t2611;
  double t2624;
  double t2830;
  double t2834;
  double t2845;
  double t2858;
  double t2884;
  double t2992;
  double t3146;
  double t3405;
  double t3410;
  double t3423;
  double t3471;
  double t3481;
  double t3483;
  double t3486;
  double t3509;
  double t3556;
  double t3382;
  double t3573;
  double t3619;
  double t3633;
  double t3657;
  double t3774;
  double t3778;
  double t3781;
  double t3679;
  double t3687;
  double t3759;
  double t3962;
  double t1348;
  double t1358;
  double t2396;
  double t2406;
  double t4020;
  double t4148;
  double t4191;
  double t4196;
  double t4200;
  double t4203;
  double t4208;
  double t4341;
  double t4342;
  double t4344;
  double t4531;
  double t4561;
  double t4605;
  double t4615;
  double t4634;
  double t4666;
  double t4725;
  double t4437;
  double t4733;
  double t4754;
  double t4772;
  double t4781;
  double t1991;
  double t2275;
  double t4970;
  double t4983;
  double t4994;
  double t5033;
  double t5105;
  double t4832;
  double t4835;
  double t4836;
  double t4884;
  double t4915;
  double t5202;
  double t5236;
  double t5248;
  double t5264;
  double t5312;
  double t5356;
  double t5212;
  double t5362;
  double t5365;
  double t5431;
  double t5481;
  double t5485;
  double t5492;
  double t5495;
  double t5503;
  double t5515;
  double t5460;
  double t5552;
  double t5583;
  double t5593;
  double t5600;
  double t5611;
  double t5810;
  double t5811;
  double t5812;
  double t5813;
  double t5867;
  double t5869;
  double t5720;
  double t5805;
  double t5862;
  double t5951;
  double t5963;
  double t6056;
  double t6079;
  double t6086;
  double t6087;
  double t6009;
  double t5852;
  double t5890;
  double t5893;
  double t5947;
  double t5973;
  double t5992;
  double t6016;
  double t6026;
  double t6030;
  double t6451;
  double t6458;
  double t6475;
  double t6508;
  double t6356;
  double t6379;
  double t6080;
  double t6099;
  double t6119;
  double t6558;
  double t6594;
  double t6125;
  double t6155;
  double t6158;
  double t6663;
  double t6982;
  double t6988;
  double t6753;
  double t6123;
  double t6242;
  double t6268;
  double t6875;
  double t6895;
  double t6927;
  double t7028;
  double t7031;
  double t7034;
  double t7070;
  double t7084;
  double t7112;
  double t7114;
  double t7127;
  double t7128;
  double t7166;
  double t7169;
  double t7170;
  double t7190;
  double t7191;
  double t7197;
  double t7198;
  double t7205;
  double t7215;
  double t7560;
  double t7688;
  double t7515;
  double t7524;
  double t7525;
  double t7622;
  double t7696;
  double t7702;
  double t7811;
  double t7813;
  double t7816;
  double t8131;
  double t8173;
  double t8271;
  double t8307;
  double t7866;
  double t7867;
  double t7926;
  double t7982;
  double t7985;
  double t8476;
  double t8508;
  double t8511;
  double t8574;
  double t8590;
  double t8598;
  double t8689;
  double t8616;
  double t8621;
  double t8630;
  double t8639;
  double t8691;
  double t8646;
  double t8709;
  double t8699;
  double t8698;
  double t8719;
  double t8748;
  double t8749;
  double t8743;
  double t8744;
  double t8746;
  double t8750;
  double t8752;
  double t8753;
  double t8755;
  double t8770;
  double t8771;
  double t8772;
  double t8773;
  double t8774;
  double t8783;
  t518 = Cos(var1[3]);
  t448 = Cos(var1[4]);
  t455 = Sin(var1[3]);
  t565 = Sin(var1[4]);
  t29 = Sin(var1[2]);
  t471 = -1.*t448*t455;
  t575 = -1.*t518*t565;
  t814 = t471 + t575;
  t940 = Cos(var1[2]);
  t1219 = t518*t448;
  t1263 = -1.*t455*t565;
  t1342 = t1219 + t1263;
  t1523 = t940*t1342;
  t1673 = t448*t455;
  t1714 = t518*t565;
  t1751 = t1673 + t1714;
  t2223 = -1.*t29*t1342;
  t1469 = t29*t814;
  t1558 = t1469 + t1523;
  t1932 = -1.*t29*t1751;
  t1937 = t1932 + t1523;
  t2097 = t940*t814;
  t2271 = t2097 + t2223;
  t2448 = t940*t1751;
  t2462 = t29*t1342;
  t2502 = t2448 + t2462;
  t835 = -1.*t29*t814;
  t2639 = -1.*t518*t448;
  t2677 = t455*t565;
  t2790 = t2639 + t2677;
  t2611 = 7.1798*t1558*t1937;
  t2624 = 7.1798*t2271*t2502;
  t2830 = t940*t2790;
  t2834 = t835 + t2830;
  t2845 = 7.1798*t1558*t2834;
  t2858 = t29*t2790;
  t2884 = t2097 + t2858;
  t2992 = 7.1798*t2271*t2884;
  t3146 = t2611 + t2624 + t2845 + t2992;
  t3405 = Power(t1558,2);
  t3410 = 7.1798*t3405;
  t3423 = t29*t1751;
  t3471 = t3423 + t2830;
  t3481 = 7.1798*t1558*t3471;
  t3483 = 7.1798*t2502*t2884;
  t3486 = Power(t2884,2);
  t3509 = 7.1798*t3486;
  t3556 = t3410 + t3481 + t3483 + t3509;
  t3382 = -0.5*var2[2]*t3146;
  t3573 = -0.5*var2[3]*t3556;
  t3619 = -0.5*var2[4]*t3556;
  t3633 = t3382 + t3573 + t3619;
  t3657 = var2[0]*t3633;
  t3774 = 7.1798*t1558*t2502;
  t3778 = 7.1798*t1558*t2884;
  t3781 = t3774 + t3778;
  t3679 = 7.1798*t1558*t2271;
  t3687 = 7.1798*t1937*t2502;
  t3759 = t3679 + t3687;
  t3962 = -0.5*var2[0]*t3781;
  t1348 = -1.*t940*t1342;
  t1358 = t835 + t1348;
  t2396 = -1.*t940*t1751;
  t2406 = t2396 + t2223;
  t4020 = -1.*t940*t814;
  t4148 = 7.1798*t1937*t2271;
  t4191 = 3.5899*t1558*t2406;
  t4196 = 3.5899*t1358*t2502;
  t4200 = 7.1798*t2271*t2834;
  t4203 = -1.*t29*t2790;
  t4208 = t4020 + t4203;
  t4341 = 3.5899*t1558*t4208;
  t4342 = 3.5899*t1358*t2884;
  t4344 = t4148 + t4191 + t4196 + t4200 + t4341 + t4342;
  t4531 = 3.5899*t2502*t2834;
  t4561 = 3.5899*t2271*t3471;
  t4605 = t2448 + t4203;
  t4615 = 3.5899*t1558*t4605;
  t4634 = 3.5899*t1937*t2884;
  t4666 = 7.1798*t2834*t2884;
  t4725 = t3679 + t4531 + t4561 + t4615 + t4634 + t4666;
  t4437 = -0.5*var2[2]*t4344;
  t4733 = -0.5*var2[3]*t4725;
  t4754 = -0.5*var2[4]*t4725;
  t4772 = t4437 + t4733 + t4754;
  t4781 = var2[0]*t4772;
  t1991 = Power(t1937,2);
  t2275 = Power(t2271,2);
  t4970 = 3.5899*t1558*t1937;
  t4983 = 3.5899*t2271*t2502;
  t4994 = 3.5899*t1558*t2834;
  t5033 = 3.5899*t2271*t2884;
  t5105 = t4970 + t4983 + t4994 + t5033;
  t4832 = 3.5899*t1358*t1558;
  t4835 = 3.5899*t1991;
  t4836 = 3.5899*t2275;
  t4884 = 3.5899*t2406*t2502;
  t4915 = t4832 + t4835 + t4836 + t4884;
  t5202 = -0.5*var2[0]*t5105;
  t5236 = -1.*t448;
  t5248 = 1. + t5236;
  t5264 = -0.9063*t5248;
  t5312 = -1.0567*t448;
  t5356 = t5264 + t5312;
  t5212 = 0.4999*t455;
  t5362 = t5356*t455;
  t5365 = -0.15039999999999998*t518*t565;
  t5431 = t5212 + t5362 + t5365;
  t5481 = -1.*t518;
  t5485 = 1. + t5481;
  t5492 = -0.4999*t5485;
  t5495 = t518*t5356;
  t5503 = 0.15039999999999998*t455*t565;
  t5515 = t5492 + t5495 + t5503;
  t5460 = -1.*t5431*t1342;
  t5552 = -1.*t814*t5515;
  t5583 = t5460 + t5552;
  t5593 = t5431*t1751;
  t5600 = t1342*t5515;
  t5611 = t5593 + t5600;
  t5810 = -0.4999*t455;
  t5811 = -1.*t5356*t455;
  t5812 = 0.15039999999999998*t518*t565;
  t5813 = t5810 + t5811 + t5812;
  t5867 = 0.4999*t518;
  t5869 = t5867 + t5495 + t5503;
  t5720 = 3.5899*t2271*t5583;
  t5805 = t5431*t1342;
  t5862 = t814*t5515;
  t5951 = 3.5899*t5611*t2834;
  t5963 = -1.*t814*t5431;
  t6056 = 0.15039999999999998*t448*t455;
  t6079 = t6056 + t5812;
  t6086 = -0.15039999999999998*t518*t448;
  t6087 = t6086 + t5503;
  t6009 = -1.*t5515*t2790;
  t5852 = t5813*t1342;
  t5890 = t1751*t5869;
  t5893 = t5805 + t5852 + t5862 + t5890;
  t5947 = 3.5899*t2271*t5893;
  t5973 = -1.*t814*t5813;
  t5992 = -1.*t1342*t5869;
  t6016 = t5963 + t5973 + t5992 + t6009;
  t6026 = 3.5899*t1937*t6016;
  t6030 = t5720 + t5947 + t5951 + t6026;
  t6451 = -0.4999*t518;
  t6458 = -1.*t518*t5356;
  t6475 = -0.15039999999999998*t455*t565;
  t6508 = t6451 + t6458 + t6475;
  t6356 = 3.5899*t5611*t3471;
  t6379 = 3.5899*t5583*t2884;
  t6080 = t6079*t1342;
  t6099 = t1751*t6087;
  t6119 = t5805 + t6080 + t5862 + t6099;
  t6558 = -1.*t1751*t5515;
  t6594 = -1.*t5431*t2790;
  t6125 = -1.*t814*t6079;
  t6155 = -1.*t1342*t6087;
  t6158 = t5963 + t6125 + t6155 + t6009;
  t6663 = t814*t5431;
  t6982 = 0.15039999999999998*t518*t448;
  t6988 = t6982 + t6475;
  t6753 = t5515*t2790;
  t6123 = 3.5899*t2271*t6119;
  t6242 = 3.5899*t1937*t6158;
  t6268 = t5720 + t6123 + t5951 + t6242;
  t6875 = 3.5899*t5893*t2884;
  t6895 = 3.5899*t6119*t2884;
  t6927 = -1.*t6079*t1342;
  t7028 = -1.*t814*t6988;
  t7031 = -1.*t814*t5869;
  t7034 = -1.*t814*t6087;
  t7070 = -1.*t5813*t2790;
  t7084 = -1.*t6079*t2790;
  t7112 = t6927 + t7028 + t6558 + t7031 + t7034 + t6594 + t7070 + t7084;
  t7114 = 3.5899*t2502*t7112;
  t7127 = 3.5899*t1558*t6016;
  t7128 = 3.5899*t1558*t6158;
  t7166 = t814*t5813;
  t7169 = t814*t6079;
  t7170 = t6079*t1751;
  t7190 = t1342*t6988;
  t7191 = t1342*t5869;
  t7197 = t1342*t6087;
  t7198 = t6663 + t7166 + t7169 + t7170 + t7190 + t7191 + t7197 + t6753;
  t7205 = 3.5899*t1558*t7198;
  t7215 = t6356 + t6379 + t6875 + t6895 + t7114 + t7127 + t7128 + t7205;
  t7560 = 3.5899*t1558*t5583;
  t7688 = 3.5899*t5611*t2884;
  t7515 = 3.5899*t1937*t5583;
  t7524 = 3.5899*t2271*t5611;
  t7525 = t7515 + t7524;
  t7622 = 3.5899*t1558*t5893;
  t7696 = 3.5899*t2502*t6016;
  t7702 = t7560 + t7622 + t7688 + t7696;
  t7811 = 3.5899*t1558*t6119;
  t7813 = 3.5899*t2502*t6158;
  t7816 = t7560 + t7811 + t7688 + t7813;
  t8131 = 0.4999*t565;
  t8173 = t5356*t565;
  t8271 = 0.15039999999999998*t448*t565;
  t8307 = t8131 + t8173 + t8271;
  t7866 = 0.4999*t448;
  t7867 = t5356*t448;
  t7926 = Power(t565,2);
  t7982 = -0.15039999999999998*t7926;
  t7985 = t7866 + t7867 + t7982;
  t8476 = 3.5899*t8307*t2271;
  t8508 = 3.5899*t7985*t2834;
  t8511 = t8476 + t8508;
  t8574 = Power(t448,2);
  t8590 = 0.15039999999999998*t8574;
  t8598 = t7866 + t7867 + t8590;
  t8689 = 3.5899*t7985*t3471;
  t8616 = -0.4999*t565;
  t8621 = -1.*t5356*t565;
  t8630 = -0.15039999999999998*t448*t565;
  t8639 = t8616 + t8621 + t8630;
  t8691 = 3.5899*t8307*t2884;
  t8646 = 3.5899*t8639*t2271;
  t8709 = 0. + t7866 + t7867 + t8590;
  t8699 = 3.5899*t8639*t2884;
  t8698 = 3.5899*t8598*t1558;
  t8719 = 3.5899*t8709*t1558;
  t8748 = 3.5899*t8307*t1558;
  t8749 = 3.5899*t7985*t2884;
  t8743 = 3.5899*t8307*t1937;
  t8744 = 3.5899*t7985*t2271;
  t8746 = t8743 + t8744;
  t8750 = t8748 + t8749;
  t8752 = 3.5899*t8639*t1558;
  t8753 = 3.5899*t8598*t2502;
  t8755 = t8752 + t8748 + t8753 + t8749;
  t8770 = 0.26996047999999995*var2[2]*t2834;
  t8771 = 0.26996047999999995*var2[3]*t3471;
  t8772 = 0.26996047999999995*var2[4]*t3471;
  t8773 = t8770 + t8771 + t8772;
  t8774 = var2[0]*t8773;
  t8783 = 0.26996047999999995*var2[0]*t2884;
  p_output1[0]=var2[0]*(-0.5*(7.1798*t1358*t1558 + 7.1798*t1991 + 7.1798*t2275 + 7.1798*t2406*t2502)*var2[2] - 0.5*t3146*var2[3] - 0.5*t3146*var2[4]);
  p_output1[1]=t3657;
  p_output1[2]=t3657;
  p_output1[3]=-0.5*t3759*var2[2] - 0.5*t3781*var2[3] - 0.5*t3781*var2[4];
  p_output1[4]=-0.5*t3759*var2[0];
  p_output1[5]=t3962;
  p_output1[6]=t3962;
  p_output1[7]=var2[0]*(-0.5*(10.7697*t1358*t2271 + 10.7697*t1937*t2406 + 3.5899*t2502*(t1348 + t3423) + 3.5899*t1558*(t2462 + t4020))*var2[2] - 0.5*t4344*var2[3] - 0.5*t4344*var2[4]);
  p_output1[8]=t4781;
  p_output1[9]=t4781;
  p_output1[10]=-0.5*t4915*var2[2] - 0.5*t5105*var2[3] - 0.5*t5105*var2[4];
  p_output1[11]=-0.5*t4915*var2[0];
  p_output1[12]=t5202;
  p_output1[13]=t5202;
  p_output1[14]=var2[0]*(-0.5*(3.5899*t2406*t5583 + 3.5899*t1358*t5611)*var2[2] - 0.5*t6030*var2[3] - 0.5*t6268*var2[4]);
  p_output1[15]=var2[0]*(-0.5*t6030*var2[2] - 0.5*(7.1798*t2884*t5893 + 7.1798*t1558*t6016 + t6356 + t6379 + 3.5899*t1558*(t1751*t5813 + 2.*t1342*t5869 + t1342*t6508 + t6663 + t6753 + 2.*t5813*t814) + 3.5899*t2502*(-1.*t1342*t5813 - 2.*t2790*t5813 + t6558 + t6594 - 2.*t5869*t814 - 1.*t6508*t814))*var2[3] - 0.5*t7215*var2[4]);
  p_output1[16]=var2[0]*(-0.5*t6268*var2[2] - 0.5*t7215*var2[3] - 0.5*(7.1798*t2884*t6119 + 7.1798*t1558*t6158 + t6356 + t6379 + 3.5899*t1558*(2.*t1342*t6087 + t6663 + t6753 + t7170 + t7190 + 2.*t6079*t814) + 3.5899*t2502*(-2.*t2790*t6079 + t6558 + t6594 + t6927 + t7028 - 2.*t6087*t814))*var2[4]);
  p_output1[17]=-0.5*t7525*var2[2] - 0.5*t7702*var2[3] - 0.5*t7816*var2[4];
  p_output1[18]=-0.5*t7525*var2[0];
  p_output1[19]=-0.5*t7702*var2[0];
  p_output1[20]=-0.5*t7816*var2[0];
  p_output1[21]=var2[0]*(-0.5*(3.5899*t1358*t7985 + 3.5899*t2406*t8307)*var2[2] - 0.5*t8511*var2[3] - 0.5*(t8476 + t8508 + 3.5899*t1937*t8598 + t8646)*var2[4]);
  p_output1[22]=var2[0]*(-0.5*t8511*var2[2] - 0.5*(t8689 + t8691)*var2[3] - 0.5*(t8689 + t8691 + t8698 + t8699)*var2[4]);
  p_output1[23]=var2[0]*(-0.5*(t8476 + t8508 + t8646 + 3.5899*t1937*t8709)*var2[2] - 0.5*(t8689 + t8691 + t8699 + t8719)*var2[3] - 0.5*(3.5899*t1558*(0. - 0.4999*t448 - 1.*t448*t5356 - 0.15039999999999998*t8574) + 3.5899*t2502*t8639 + 7.1798*t2884*t8639 + t8689 + t8691 + t8698 + t8719)*var2[4]);
  p_output1[24]=-0.5*t8746*var2[2] - 0.5*t8750*var2[3] - 0.5*t8755*var2[4];
  p_output1[25]=-0.5*t8746*var2[0];
  p_output1[26]=-0.5*t8750*var2[0];
  p_output1[27]=-0.5*t8755*var2[0];
  p_output1[28]=var2[0]*(0.26996047999999995*t1358*var2[2] + 0.26996047999999995*t2834*var2[3] + 0.26996047999999995*t2834*var2[4]);
  p_output1[29]=t8774;
  p_output1[30]=t8774;
  p_output1[31]=0.26996047999999995*t2271*var2[2] + 0.26996047999999995*t2884*var2[3] + 0.26996047999999995*t2884*var2[4];
  p_output1[32]=0.26996047999999995*t2271*var2[0];
  p_output1[33]=t8783;
  p_output1[34]=t8783;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 35, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L3_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L3_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

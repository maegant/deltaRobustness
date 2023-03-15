/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:48 GMT-08:00
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
  double t715;
  double t257;
  double t355;
  double t771;
  double t980;
  double t16;
  double t1019;
  double t1287;
  double t1582;
  double t1918;
  double t2019;
  double t2032;
  double t2039;
  double t2059;
  double t680;
  double t795;
  double t847;
  double t896;
  double t1769;
  double t1839;
  double t2524;
  double t2440;
  double t2457;
  double t2475;
  double t2522;
  double t2531;
  double t2985;
  double t2749;
  double t2796;
  double t3222;
  double t3278;
  double t2827;
  double t2842;
  double t2904;
  double t2952;
  double t2992;
  double t3772;
  double t3785;
  double t3883;
  double t3945;
  double t4043;
  double t4049;
  double t4068;
  double t4085;
  double t4093;
  double t4103;
  double t1888;
  double t2214;
  double t2312;
  double t2436;
  double t2607;
  double t2613;
  double t2617;
  double t2627;
  double t2637;
  double t4294;
  double t4313;
  double t4328;
  double t4330;
  double t4348;
  double t3498;
  double t3545;
  double t3558;
  double t3674;
  double t4634;
  double t4639;
  double t3948;
  double t4113;
  double t4143;
  double t4177;
  double t4187;
  double t4195;
  double t4853;
  double t4878;
  double t4884;
  double t4925;
  double t5037;
  double t5096;
  double t4352;
  double t4357;
  double t4366;
  double t4391;
  double t4396;
  double t4670;
  double t4722;
  double t4740;
  double t4745;
  double t4767;
  double t4772;
  double t4778;
  double t4795;
  double t4803;
  double t4808;
  double t4813;
  double t4831;
  double t4838;
  double t4841;
  double t4843;
  double t4844;
  double t5017;
  double t5195;
  double t5208;
  double t5470;
  double t5552;
  double t5589;
  double t5594;
  double t5223;
  double t5806;
  double t5807;
  double t5815;
  double t5817;
  double t5848;
  double t5856;
  double t5858;
  double t6055;
  double t6066;
  double t6080;
  double t5902;
  double t5906;
  double t5910;
  double t4371;
  double t4390;
  double t4941;
  double t5131;
  double t5135;
  double t5145;
  double t5214;
  double t5217;
  double t5246;
  double t5257;
  double t5281;
  double t5283;
  double t5285;
  double t5295;
  double t6264;
  double t6615;
  double t6618;
  double t6629;
  double t6637;
  double t6279;
  double t5401;
  double t5409;
  double t5411;
  double t5311;
  double t5320;
  double t5326;
  double t5364;
  double t6281;
  double t6284;
  double t6297;
  double t6304;
  double t6314;
  double t6369;
  double t6377;
  double t6381;
  double t6391;
  double t6410;
  double t6414;
  double t6423;
  double t6426;
  double t6486;
  double t6491;
  double t6492;
  double t6493;
  double t6546;
  double t6559;
  double t5566;
  double t5610;
  double t5620;
  double t6593;
  double t6668;
  double t6676;
  double t5698;
  double t5721;
  double t5734;
  double t6715;
  double t6927;
  double t6936;
  double t6741;
  double t7156;
  double t7165;
  double t7171;
  double t7177;
  double t7188;
  double t7240;
  double t7244;
  double t7246;
  double t7250;
  double t7252;
  double t7199;
  double t7202;
  double t7203;
  double t5397;
  double t5634;
  double t5737;
  double t5751;
  double t5770;
  double t7267;
  double t6830;
  double t6873;
  double t6900;
  double t6924;
  double t6938;
  double t6940;
  double t6943;
  double t6948;
  double t6976;
  double t7028;
  double t7032;
  double t7035;
  double t7041;
  double t7042;
  double t7047;
  double t7049;
  double t7051;
  double t7065;
  double t7072;
  double t7075;
  double t7077;
  double t7122;
  double t7134;
  double t7277;
  double t6822;
  double t7190;
  double t7196;
  double t7217;
  double t7226;
  double t7235;
  double t7461;
  double t7464;
  double t7465;
  double t7406;
  double t7416;
  double t7437;
  double t7261;
  t715 = Cos(var1[5]);
  t257 = Cos(var1[6]);
  t355 = Sin(var1[5]);
  t771 = Sin(var1[6]);
  t980 = Sin(var1[2]);
  t16 = Cos(var1[2]);
  t1019 = t715*t257;
  t1287 = -1.*t355*t771;
  t1582 = t1019 + t1287;
  t1918 = -1.*t257;
  t2019 = 1. + t1918;
  t2032 = -0.9063*t2019;
  t2039 = -1.078185*t257;
  t2059 = t2032 + t2039;
  t680 = -1.*t257*t355;
  t795 = -1.*t715*t771;
  t847 = t680 + t795;
  t896 = -1.*t16*t847;
  t1769 = t980*t1582;
  t1839 = t896 + t1769;
  t2524 = -1.*t16*t1582;
  t2440 = t257*t355;
  t2457 = t715*t771;
  t2475 = t2440 + t2457;
  t2522 = t980*t2475;
  t2531 = t2522 + t2524;
  t2985 = -1.*t980*t1582;
  t2749 = -1.*t980*t847;
  t2796 = t2749 + t2524;
  t3222 = t16*t847;
  t3278 = t3222 + t2985;
  t2827 = -1.*t980*t2475;
  t2842 = t16*t1582;
  t2904 = t2827 + t2842;
  t2952 = -1.*t16*t2475;
  t2992 = t2952 + t2985;
  t3772 = 0.4999*t355;
  t3785 = t2059*t355;
  t3883 = -0.17188499999999995*t715*t771;
  t3945 = t3772 + t3785 + t3883;
  t4043 = -1.*t715;
  t4049 = 1. + t4043;
  t4068 = -0.4999*t4049;
  t4085 = t715*t2059;
  t4093 = 0.17188499999999995*t355*t771;
  t4103 = t4068 + t4085 + t4093;
  t1888 = 0.4999*t771;
  t2214 = t2059*t771;
  t2312 = 0.17188499999999995*t257*t771;
  t2436 = t1888 + t2214 + t2312;
  t2607 = 0.4999*t257;
  t2613 = t2059*t257;
  t2617 = Power(t771,2);
  t2627 = -0.17188499999999995*t2617;
  t2637 = t2607 + t2613 + t2627;
  t4294 = -1.*t715*t257;
  t4313 = t355*t771;
  t4328 = t4294 + t4313;
  t4330 = -1.*t980*t4328;
  t4348 = t896 + t4330;
  t3498 = t980*t847;
  t3545 = t3498 + t2842;
  t3558 = t16*t2475;
  t3674 = t3558 + t1769;
  t4634 = t16*t4328;
  t4639 = t2749 + t4634;
  t3948 = -1.*t3945*t1582;
  t4113 = -1.*t847*t4103;
  t4143 = t3948 + t4113;
  t4177 = t3945*t2475;
  t4187 = t1582*t4103;
  t4195 = t4177 + t4187;
  t4853 = -0.4999*t355;
  t4878 = -1.*t2059*t355;
  t4884 = 0.17188499999999995*t715*t771;
  t4925 = t4853 + t4878 + t4884;
  t5037 = 0.4999*t715;
  t5096 = t5037 + t4085 + t4093;
  t4352 = -0.07323676079999998*var2[6]*t4348;
  t4357 = 0.85216*t2436*t2796;
  t4366 = 0.85216*t2637*t4348;
  t4391 = 1.70432*t2796*t2904;
  t4396 = 1.70432*t3278*t2992;
  t4670 = 1.70432*t2796*t4639;
  t4722 = 1.70432*t3278*t4348;
  t4740 = t4391 + t4396 + t4670 + t4722;
  t4745 = 0.5*var2[1]*t4740;
  t4767 = 1.70432*t2904*t3278;
  t4772 = 0.85216*t3545*t2992;
  t4778 = 0.85216*t2796*t3674;
  t4795 = 1.70432*t3278*t4639;
  t4803 = 0.85216*t3545*t4348;
  t4808 = t980*t4328;
  t4813 = t3222 + t4808;
  t4831 = 0.85216*t2796*t4813;
  t4838 = t4767 + t4772 + t4778 + t4795 + t4803 + t4831;
  t4841 = 0.5*var2[0]*t4838;
  t4843 = 0.85216*t2796*t4143;
  t4844 = t3945*t1582;
  t5017 = t847*t4103;
  t5195 = 0.85216*t4195*t4348;
  t5208 = -1.*t847*t3945;
  t5470 = 0.17188499999999995*t257*t355;
  t5552 = t5470 + t4884;
  t5589 = -0.17188499999999995*t715*t257;
  t5594 = t5589 + t4093;
  t5223 = -1.*t4103*t4328;
  t5806 = 0.85216*t2796*t3545;
  t5807 = Power(t2904,2);
  t5815 = 0.85216*t5807;
  t5817 = Power(t3278,2);
  t5848 = 0.85216*t5817;
  t5856 = 0.85216*t2992*t3674;
  t5858 = t5806 + t5815 + t5848 + t5856;
  t6055 = 0.85216*t2992*t4143;
  t6066 = 0.85216*t2796*t4195;
  t6080 = t6055 + t6066;
  t5902 = 0.85216*t2637*t2796;
  t5906 = 0.85216*t2436*t2992;
  t5910 = t5902 + t5906;
  t4371 = t4357 + t4366;
  t4390 = 0.5*var2[5]*t4371;
  t4941 = t4925*t1582;
  t5131 = t2475*t5096;
  t5135 = t4844 + t4941 + t5017 + t5131;
  t5145 = 0.85216*t2796*t5135;
  t5214 = -1.*t847*t4925;
  t5217 = -1.*t1582*t5096;
  t5246 = t5208 + t5214 + t5217 + t5223;
  t5257 = 0.85216*t2992*t5246;
  t5281 = t4843 + t5145 + t5195 + t5257;
  t5283 = 0.5*var2[2]*t5281;
  t5285 = t4352 + t4390 + t4745 + t4841 + t5283;
  t5295 = var2[1]*t5285;
  t6264 = t3558 + t4330;
  t6615 = -0.4999*t715;
  t6618 = -1.*t715*t2059;
  t6629 = -0.17188499999999995*t355*t771;
  t6637 = t6615 + t6618 + t6629;
  t6279 = -0.07323676079999998*var2[6]*t6264;
  t5401 = Power(t257,2);
  t5409 = 0.17188499999999995*t5401;
  t5411 = 0. + t2607 + t2613 + t5409;
  t5311 = -0.4999*t771;
  t5320 = -1.*t2059*t771;
  t5326 = -0.17188499999999995*t257*t771;
  t5364 = t5311 + t5320 + t5326;
  t6281 = 0.85216*t2436*t4639;
  t6284 = 0.85216*t2637*t6264;
  t6297 = 1.70432*t5817;
  t6304 = 1.70432*t2904*t4639;
  t6314 = Power(t4639,2);
  t6369 = 1.70432*t6314;
  t6377 = 1.70432*t3278*t6264;
  t6381 = t6297 + t6304 + t6369 + t6377;
  t6391 = 0.5*var2[1]*t6381;
  t6410 = 1.70432*t3545*t3278;
  t6414 = 0.85216*t3674*t4639;
  t6423 = t2522 + t4634;
  t6426 = 0.85216*t3278*t6423;
  t6486 = 0.85216*t3545*t6264;
  t6491 = 0.85216*t2904*t4813;
  t6492 = 1.70432*t4639*t4813;
  t6493 = t6410 + t6414 + t6426 + t6486 + t6491 + t6492;
  t6546 = 0.5*var2[0]*t6493;
  t6559 = 0.85216*t4143*t4639;
  t5566 = t5552*t1582;
  t5610 = t2475*t5594;
  t5620 = t4844 + t5566 + t5017 + t5610;
  t6593 = 0.85216*t4195*t6264;
  t6668 = -1.*t2475*t4103;
  t6676 = -1.*t3945*t4328;
  t5698 = -1.*t847*t5552;
  t5721 = -1.*t1582*t5594;
  t5734 = t5208 + t5698 + t5721 + t5223;
  t6715 = t847*t3945;
  t6927 = 0.17188499999999995*t715*t257;
  t6936 = t6927 + t6629;
  t6741 = t4103*t4328;
  t7156 = 0.85216*t3545*t2904;
  t7165 = 0.85216*t3278*t3674;
  t7171 = 0.85216*t3545*t4639;
  t7177 = 0.85216*t3278*t4813;
  t7188 = t7156 + t7165 + t7171 + t7177;
  t7240 = 0.85216*t3278*t4143;
  t7244 = 0.85216*t3278*t5135;
  t7246 = 0.85216*t4195*t4639;
  t7250 = 0.85216*t2904*t5246;
  t7252 = t7240 + t7244 + t7246 + t7250;
  t7199 = 0.85216*t2436*t3278;
  t7202 = 0.85216*t2637*t4639;
  t7203 = t7199 + t7202;
  t5397 = 0.85216*t5364*t2796;
  t5634 = 0.85216*t2796*t5620;
  t5737 = 0.85216*t2992*t5734;
  t5751 = t4843 + t5634 + t5195 + t5737;
  t5770 = 0.5*var2[2]*t5751;
  t7267 = t2607 + t2613 + t5409;
  t6830 = 0.85216*t5364*t4639;
  t6873 = 0.85216*t5135*t4639;
  t6900 = 0.85216*t5620*t4639;
  t6924 = -1.*t5552*t1582;
  t6938 = -1.*t847*t6936;
  t6940 = -1.*t847*t5096;
  t6943 = -1.*t847*t5594;
  t6948 = -1.*t4925*t4328;
  t6976 = -1.*t5552*t4328;
  t7028 = t6924 + t6938 + t6668 + t6940 + t6943 + t6676 + t6948 + t6976;
  t7032 = 0.85216*t2904*t7028;
  t7035 = 0.85216*t3278*t5246;
  t7041 = 0.85216*t3278*t5734;
  t7042 = t847*t4925;
  t7047 = t847*t5552;
  t7049 = t5552*t2475;
  t7051 = t1582*t6936;
  t7065 = t1582*t5096;
  t7072 = t1582*t5594;
  t7075 = t6715 + t7042 + t7047 + t7049 + t7051 + t7065 + t7072 + t6741;
  t7077 = 0.85216*t3278*t7075;
  t7122 = t6559 + t6873 + t6900 + t6593 + t7032 + t7035 + t7041 + t7077;
  t7134 = 0.5*var2[2]*t7122;
  t7277 = 0.85216*t7267*t3278;
  t6822 = 0.85216*t5411*t3278;
  t7190 = 0.5*var2[1]*t7188;
  t7196 = -0.07323676079999998*var2[6]*t4639;
  t7217 = t4767 + t4795;
  t7226 = var2[1]*t7217;
  t7235 = 0.5*var2[0]*t7188;
  t7461 = 0.85216*t3278*t5620;
  t7464 = 0.85216*t2904*t5734;
  t7465 = t7240 + t7461 + t7246 + t7464;
  t7406 = 0.85216*t7267*t2904;
  t7416 = 0.85216*t5364*t3278;
  t7437 = t7406 + t7416 + t7199 + t7202;
  t7261 = -0.07323676079999998*var2[1]*t4639;
  p_output1[0]=var2[1]*(0.5*(2.55648*t2904*t2992 + 2.55648*t2796*t3278 + 0.85216*t1839*t3545 + 0.85216*t2531*t3674)*var2[0] + 0.5*(1.70432*Power(t2796,2) + 1.70432*t2531*t2904 + 1.70432*Power(t2992,2) + 1.70432*t1839*t3278)*var2[1] + 0.5*(0.85216*t2531*t4143 + 0.85216*t1839*t4195)*var2[2] + 0.5*(0.85216*t2436*t2531 + 0.85216*t1839*t2637)*var2[5] - 0.07323676079999998*t1839*var2[6]);
  p_output1[1]=t5295;
  p_output1[2]=var2[1]*(t4352 + t4745 + t4841 + t5770 + 0.5*(t4357 + t4366 + t5397 + 0.85216*t2992*t5411)*var2[5]);
  p_output1[3]=0.5*t5858*var2[1];
  p_output1[4]=0.5*t5858*var2[0] + (1.70432*t2904*t2992 + 1.70432*t2796*t3278)*var2[1] + 0.5*t6080*var2[2] + 0.5*t5910*var2[5] - 0.07323676079999998*t2796*var2[6];
  p_output1[5]=0.5*t6080*var2[1];
  p_output1[6]=0.5*t5910*var2[1];
  p_output1[7]=-0.07323676079999998*t2796*var2[1];
  p_output1[8]=t5295;
  p_output1[9]=var2[1]*(t6279 + t6391 + t6546 + 0.5*(1.70432*t4639*t5135 + 1.70432*t3278*t5246 + t6559 + t6593 + 0.85216*t3278*(t2475*t4925 + 2.*t1582*t5096 + t1582*t6637 + t6715 + t6741 + 2.*t4925*t847) + 0.85216*t2904*(-1.*t1582*t4925 - 2.*t4328*t4925 + t6668 + t6676 - 2.*t5096*t847 - 1.*t6637*t847))*var2[2] + 0.5*(t6281 + t6284)*var2[5]);
  p_output1[10]=var2[1]*(t6279 + t6391 + t6546 + t7134 + 0.5*(t6281 + t6284 + t6822 + t6830)*var2[5]);
  p_output1[11]=t7190;
  p_output1[12]=t7196 + t7226 + t7235 + 0.5*t7252*var2[2] + 0.5*t7203*var2[5];
  p_output1[13]=0.5*t7252*var2[1];
  p_output1[14]=0.5*t7203*var2[1];
  p_output1[15]=t7261;
  p_output1[16]=var2[1]*(t4352 + t4745 + t4841 + t5770 + 0.5*(t4357 + t4366 + t5397 + 0.85216*t2992*t7267)*var2[5]);
  p_output1[17]=var2[1]*(t6279 + t6391 + t6546 + t7134 + 0.5*(t6281 + t6284 + t6830 + t7277)*var2[5]);
  p_output1[18]=var2[1]*(t6279 + t6391 + t6546 + 0.5*(1.70432*t4639*t5620 + 1.70432*t3278*t5734 + t6559 + t6593 + 0.85216*t3278*(2.*t1582*t5594 + t6715 + t6741 + t7049 + t7051 + 2.*t5552*t847) + 0.85216*t2904*(-2.*t4328*t5552 + t6668 + t6676 + t6924 + t6938 - 2.*t5594*t847))*var2[2] + 0.5*(0.85216*t2904*t5364 + 1.70432*t4639*t5364 + 0.85216*t3278*(0. - 0.4999*t257 - 1.*t2059*t257 - 0.17188499999999995*t5401) + t6281 + t6284 + t6822 + t7277)*var2[5]);
  p_output1[19]=t7190;
  p_output1[20]=t7196 + t7226 + t7235 + 0.5*t7465*var2[2] + 0.5*t7437*var2[5];
  p_output1[21]=0.5*t7465*var2[1];
  p_output1[22]=0.5*t7437*var2[1];
  p_output1[23]=t7261;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L5_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

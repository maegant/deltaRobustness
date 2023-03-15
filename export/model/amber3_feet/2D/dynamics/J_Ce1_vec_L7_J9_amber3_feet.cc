/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:39 GMT-08:00
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
  double t182;
  double t132;
  double t151;
  double t243;
  double t269;
  double t159;
  double t245;
  double t260;
  double t127;
  double t332;
  double t414;
  double t464;
  double t106;
  double t268;
  double t473;
  double t522;
  double t544;
  double t546;
  double t590;
  double t605;
  double t613;
  double t620;
  double t692;
  double t760;
  double t761;
  double t762;
  double t770;
  double t779;
  double t781;
  double t1038;
  double t1041;
  double t1045;
  double t1114;
  double t1118;
  double t784;
  double t793;
  double t797;
  double t825;
  double t1429;
  double t1465;
  double t1499;
  double t1502;
  double t1526;
  double t1550;
  double t1588;
  double t1595;
  double t1603;
  double t1640;
  double t1359;
  double t1384;
  double t1669;
  double t1677;
  double t1679;
  double t1691;
  double t828;
  double t845;
  double t863;
  double t1692;
  double t1776;
  double t1781;
  double t1782;
  double t1753;
  double t1762;
  double t1711;
  double t1720;
  double t1854;
  double t1860;
  double t1869;
  double t1915;
  double t2056;
  double t2070;
  double t1168;
  double t1169;
  double t1929;
  double t1942;
  double t2168;
  double t2178;
  double t2196;
  double t2140;
  double t2148;
  double t2207;
  double t2210;
  double t2212;
  double t2222;
  double t864;
  double t865;
  double t719;
  double t717;
  double t826;
  double t877;
  double t2354;
  double t2355;
  double t2366;
  double t2368;
  double t2370;
  double t2375;
  double t2290;
  double t2296;
  double t2297;
  double t2341;
  double t2376;
  double t2378;
  double t2409;
  double t2410;
  double t2460;
  double t2463;
  double t2259;
  double t2391;
  double t2482;
  double t2483;
  double t2575;
  double t2588;
  double t2768;
  double t2779;
  double t2784;
  double t2847;
  double t2850;
  double t2853;
  double t2854;
  double t2870;
  double t2881;
  double t2514;
  double t2528;
  double t2539;
  double t2548;
  double t2671;
  double t2689;
  double t2695;
  double t2710;
  double t2737;
  double t2570;
  double t2605;
  double t3016;
  double t3019;
  double t3036;
  double t3065;
  double t3068;
  double t3070;
  double t3071;
  double t2974;
  double t2978;
  double t2986;
  double t2994;
  double t2996;
  double t3005;
  double t3240;
  double t3241;
  double t3251;
  double t3254;
  double t2921;
  double t2954;
  double t2955;
  double t2957;
  double t2892;
  double t2897;
  double t2914;
  double t2929;
  double t2951;
  double t2961;
  double t3012;
  double t3402;
  double t3409;
  double t3183;
  double t3327;
  double t3329;
  double t3335;
  double t3342;
  double t3199;
  double t3201;
  double t3202;
  double t3533;
  double t3544;
  double t3562;
  double t3592;
  double t3595;
  double t3602;
  double t3607;
  double t3608;
  double t3614;
  double t3699;
  double t3704;
  double t3629;
  double t3426;
  double t3459;
  double t3671;
  double t3684;
  double t3688;
  double t3411;
  double t3412;
  double t3413;
  double t3418;
  double t3422;
  double t3423;
  double t3779;
  double t3458;
  double t3804;
  double t3461;
  double t3878;
  double t3908;
  double t3909;
  double t3929;
  double t3946;
  double t3956;
  double t3961;
  double t3986;
  double t3999;
  double t4003;
  double t4113;
  double t4155;
  double t4228;
  double t4330;
  double t4415;
  double t4455;
  double t4357;
  double t4396;
  double t4412;
  double t4472;
  double t4424;
  double t4558;
  double t4565;
  double t4570;
  double t4585;
  double t4591;
  double t4594;
  t182 = Cos(var1[7]);
  t132 = Cos(var1[8]);
  t151 = Sin(var1[7]);
  t243 = Sin(var1[8]);
  t269 = Cos(var1[6]);
  t159 = -1.*t132*t151;
  t245 = -1.*t182*t243;
  t260 = t159 + t245;
  t127 = Sin(var1[6]);
  t332 = t182*t132;
  t414 = -1.*t151*t243;
  t464 = t332 + t414;
  t106 = Sin(var1[2]);
  t268 = t127*t260;
  t473 = t269*t464;
  t522 = t268 + t473;
  t544 = -1.*t106*t522;
  t546 = Cos(var1[2]);
  t590 = t269*t260;
  t605 = -1.*t127*t464;
  t613 = t590 + t605;
  t620 = t546*t613;
  t692 = t544 + t620;
  t760 = t132*t151;
  t761 = t182*t243;
  t762 = t760 + t761;
  t770 = -1.*t127*t762;
  t779 = t770 + t473;
  t781 = -1.*t106*t779;
  t1038 = -1.*t127*t260;
  t1041 = -1.*t269*t464;
  t1045 = t1038 + t1041;
  t1114 = t106*t1045;
  t1118 = t1114 + t620;
  t784 = -1.*t269*t762;
  t793 = t784 + t605;
  t797 = t546*t793;
  t825 = t781 + t797;
  t1429 = -1.*t182*t132;
  t1465 = t151*t243;
  t1499 = t1429 + t1465;
  t1502 = t269*t1499;
  t1526 = t1038 + t1502;
  t1550 = t106*t1526;
  t1588 = t127*t1499;
  t1595 = t590 + t1588;
  t1603 = t546*t1595;
  t1640 = t1550 + t1603;
  t1359 = 0.03428571*var2[6]*t1118;
  t1384 = 0.03428571*var2[2]*t692;
  t1669 = 0.03428571*var2[7]*t1640;
  t1677 = 0.03428571*var2[8]*t1640;
  t1679 = t1359 + t1384 + t1669 + t1677;
  t1691 = var2[8]*t1679;
  t828 = t269*t762;
  t845 = t127*t464;
  t863 = t828 + t845;
  t1692 = t546*t779;
  t1776 = t546*t522;
  t1781 = t106*t613;
  t1782 = t1776 + t1781;
  t1753 = t106*t793;
  t1762 = t1692 + t1753;
  t1711 = -1.*t106*t863;
  t1720 = t1692 + t1711;
  t1854 = -1.*t546*t522;
  t1860 = -1.*t106*t613;
  t1869 = t1854 + t1860;
  t1915 = -1.*t546*t779;
  t2056 = t546*t1045;
  t2070 = t2056 + t1860;
  t1168 = t127*t762;
  t1169 = t1168 + t1041;
  t1929 = -1.*t106*t793;
  t1942 = t1915 + t1929;
  t2168 = t546*t1526;
  t2178 = -1.*t106*t1595;
  t2196 = t2168 + t2178;
  t2140 = 0.03428571*var2[6]*t2070;
  t2148 = 0.03428571*var2[2]*t1869;
  t2207 = 0.03428571*var2[7]*t2196;
  t2210 = 0.03428571*var2[8]*t2196;
  t2212 = t2140 + t2148 + t2207 + t2210;
  t2222 = var2[8]*t2212;
  t864 = -1.*t546*t863;
  t865 = t781 + t864;
  t719 = 0.03428571*var2[8]*t692;
  t717 = 0.03428571*var2[7]*t692;
  t826 = 0.03428571*var2[6]*t825;
  t877 = 0.03428571*var2[2]*t865;
  t2354 = -1.*t132;
  t2355 = 1. + t2354;
  t2366 = -1.3127*t2355;
  t2368 = -1.3127*t132;
  t2370 = -0.06*t243;
  t2375 = t2366 + t2368 + t2370;
  t2290 = -1.*t182;
  t2296 = 1. + t2290;
  t2297 = -0.9063*t2296;
  t2341 = -0.06*t132*t151;
  t2376 = t182*t2375;
  t2378 = t2297 + t2341 + t2376;
  t2409 = 0.06*t182*t132;
  t2410 = 0.9063*t151;
  t2460 = t151*t2375;
  t2463 = t2409 + t2410 + t2460;
  t2259 = -0.4999*t127;
  t2391 = -1.*t127*t2378;
  t2482 = -1.*t269*t2463;
  t2483 = t2259 + t2391 + t2482;
  t2575 = t269*t2378;
  t2588 = -1.*t127*t2463;
  t2768 = 0.9063*t182;
  t2779 = t2768 + t2341 + t2376;
  t2784 = -1.*t127*t2779;
  t2847 = -0.06*t182*t132;
  t2850 = -0.9063*t151;
  t2853 = -1.*t151*t2375;
  t2854 = t2847 + t2850 + t2853;
  t2870 = t269*t2854;
  t2881 = t2784 + t2870;
  t2514 = 0.4999*t127;
  t2528 = t127*t2378;
  t2539 = t269*t2463;
  t2548 = t2514 + t2528 + t2539;
  t2671 = -1.*t269;
  t2689 = 1. + t2671;
  t2695 = -0.4999*t2689;
  t2710 = t2695 + t2575 + t2588;
  t2737 = -1.*t269*t260;
  t2570 = 0.4999*t269;
  t2605 = t2570 + t2575 + t2588;
  t3016 = -0.06*t182*t243;
  t3019 = t2341 + t3016;
  t3036 = -1.*t127*t3019;
  t3065 = 0.06*t151*t243;
  t3068 = t2847 + t3065;
  t3070 = t269*t3068;
  t3071 = t3036 + t3070;
  t2974 = -1.*t2483*t1526;
  t2978 = -1.*t2548*t1526;
  t2986 = -1.*t127*t1499;
  t2994 = t2737 + t2986;
  t2996 = -1.*t2710*t2994;
  t3005 = -1.*t2605*t1595;
  t3240 = -0.9063*t182;
  t3241 = 0.06*t132*t151;
  t3251 = -1.*t182*t2375;
  t3254 = t3240 + t3241 + t3251;
  t2921 = -1.*t127*t2854;
  t2954 = t269*t2779;
  t2955 = t127*t2854;
  t2957 = t2954 + t2955;
  t2892 = -1.*t2881*t1045;
  t2897 = -1.*t2881*t522;
  t2914 = -1.*t269*t2779;
  t2929 = t2914 + t2921;
  t2951 = -1.*t2929*t613;
  t2961 = -1.*t2957*t613;
  t3012 = t2892 + t2897 + t2951 + t2961 + t2974 + t2978 + t2996 + t3005;
  t3402 = 0.06*t182*t243;
  t3409 = t3241 + t3402;
  t3183 = -1.*t127*t3068;
  t3327 = t1168 + t1502;
  t3329 = -1.*t2548*t3327;
  t3335 = t828 + t2986;
  t3342 = -1.*t2710*t3335;
  t3199 = t269*t3019;
  t3201 = t127*t3068;
  t3202 = t3199 + t3201;
  t3533 = -0.06*t132;
  t3544 = 0. + t3533;
  t3562 = t3544*t151;
  t3592 = t3562 + t3016;
  t3595 = -1.*t127*t3592;
  t3602 = t182*t3544;
  t3607 = t3602 + t3065;
  t3608 = t269*t3607;
  t3614 = t3595 + t3608;
  t3699 = -1.*t3544*t151;
  t3704 = t3699 + t3402;
  t3629 = -1.*t127*t3607;
  t3426 = -1.*t2881*t1526;
  t3459 = -1.*t2957*t1595;
  t3671 = t269*t3592;
  t3684 = t127*t3607;
  t3688 = t3671 + t3684;
  t3411 = t127*t3409;
  t3412 = t3411 + t3070;
  t3413 = -1.*t522*t3412;
  t3418 = t269*t3409;
  t3422 = t3418 + t3183;
  t3423 = -1.*t613*t3422;
  t3779 = -1.*t3614*t1526;
  t3458 = -1.*t3071*t1526;
  t3804 = -1.*t3688*t1595;
  t3461 = -1.*t3202*t1595;
  t3878 = -1.*t2710*t1045;
  t3908 = -1.*t2605*t522;
  t3909 = -1.*t2483*t613;
  t3929 = -1.*t2548*t613;
  t3946 = t3878 + t3908 + t3909 + t3929;
  t3956 = -1.*t2957*t522;
  t3961 = -1.*t2881*t613;
  t3986 = -1.*t2710*t1526;
  t3999 = -1.*t2548*t1595;
  t4003 = t3956 + t3961 + t3986 + t3999;
  t4113 = 0.4999*t260;
  t4155 = -1.*t2378*t762;
  t4228 = -1.*t2463*t1499;
  t4330 = -1.*t2779*t260;
  t4415 = -1.*t2854*t1499;
  t4455 = -1.*t260*t3592;
  t4357 = -1.*t260*t3019;
  t4396 = -1.*t260*t3409;
  t4412 = -1.*t464*t3068;
  t4472 = -1.*t3607*t1499;
  t4424 = -1.*t3068*t1499;
  t4558 = -1.*t2854*t260;
  t4565 = -1.*t2463*t260;
  t4570 = 0.4999*t464;
  t4585 = -1.*t2779*t464;
  t4591 = -1.*t2378*t1499;
  t4594 = t4558 + t4565 + t4570 + t4585 + t4591;
  p_output1[0]=(t717 + t719 + t826 + t877)*var2[8];
  p_output1[1]=var2[8]*(0.03428571*t825*var2[2] + 0.03428571*(t106*t1169 + t797)*var2[6] + 0.03428571*t1118*var2[7] + 0.03428571*t1118*var2[8]);
  p_output1[2]=t1691;
  p_output1[3]=t1691;
  p_output1[4]=0.03428571*t1720*var2[8];
  p_output1[5]=0.03428571*t1762*var2[8];
  p_output1[6]=0.03428571*t1782*var2[8];
  p_output1[7]=0.03428571*t1720*var2[2] + 0.03428571*t1762*var2[6] + 0.03428571*t1782*var2[7] + 0.06857142*t1782*var2[8];
  p_output1[8]=var2[8]*(0.03428571*(t1915 + t106*t863)*var2[2] + 0.03428571*t1942*var2[6] + 0.03428571*t1869*var2[7] + 0.03428571*t1869*var2[8]);
  p_output1[9]=var2[8]*(0.03428571*t1942*var2[2] + 0.03428571*(t1929 + t1169*t546)*var2[6] + 0.03428571*t2070*var2[7] + 0.03428571*t2070*var2[8]);
  p_output1[10]=t2222;
  p_output1[11]=t2222;
  p_output1[12]=0.03428571*t865*var2[8];
  p_output1[13]=0.03428571*t825*var2[8];
  p_output1[14]=t719;
  p_output1[15]=t717 + t826 + t877 + 0.06857142*t692*var2[8];
  p_output1[16]=var2[8]*(0.03428571*(-2.*t1045*t2483 - 1.*t1045*t2548 - 1.*t2483*t522 - 2.*t2605*t613 - 1.*(t127*t2463 - 0.4999*t269 - 1.*t2378*t269)*t613 - 1.*t2710*(t2737 + t845))*var2[6] + 0.03428571*t3012*var2[7] + 0.03428571*(t2974 + t2978 + t2996 + t3005 - 1.*t1045*t3071 - 1.*t3071*t522 - 1.*(-1.*t269*t3019 + t3183)*t613 - 1.*t3202*t613)*var2[8]);
  p_output1[17]=var2[8]*(0.03428571*t3012*var2[6] + 0.03428571*(-2.*t1526*t2881 - 2.*t1595*t2957 + t3329 + t3342 - 1.*(t2870 + t127*t3254)*t522 - 1.*(t2921 + t269*t3254)*t613)*var2[7] + 0.03428571*(t3329 + t3342 + t3413 + t3423 + t3426 + t3458 + t3459 + t3461)*var2[8]);
  p_output1[18]=var2[8]*(0.03428571*(t2974 + t2978 + t2996 + t3005 - 1.*t1045*t3614 - 1.*t3614*t522 - 1.*(-1.*t269*t3592 + t3629)*t613 - 1.*t3688*t613)*var2[6] + 0.03428571*(t3329 + t3342 + t3426 + t3459 + t3779 + t3804 - 1.*(t3608 + t127*t3704)*t522 - 1.*(t3629 + t269*t3704)*t613)*var2[7] + 0.03428571*(t3329 + t3342 + t3413 + t3423 + t3458 + t3461 + t3779 + t3804)*var2[8]);
  p_output1[19]=0.03428571*t3946*var2[8];
  p_output1[20]=0.03428571*t4003*var2[8];
  p_output1[21]=0.03428571*t3946*var2[6] + 0.03428571*t4003*var2[7] + 0.06857142*(t3986 + t3999 - 1.*t3202*t522 - 1.*t3071*t613)*var2[8];
  p_output1[22]=var2[8]*(0.03428571*(-2.*t260*t2779 - 2.*t1499*t2854 - 1.*t260*t3254 + t4113 + t4155 + t4228 - 1.*t2854*t464)*var2[7] + 0.03428571*(t4113 + t4155 + t4228 + t4330 + t4357 + t4396 + t4412 + t4415 + t4424)*var2[8]);
  p_output1[23]=var2[8]*(0.03428571*(-1.*t260*t3704 + t4113 + t4155 + t4228 + t4330 + t4415 + t4455 + t4472 - 1.*t3607*t464)*var2[7] + 0.03428571*(t4113 + t4155 + t4228 + t4357 + t4396 + t4412 + t4424 + t4455 + t4472)*var2[8]);
  p_output1[24]=0.03428571*t4594*var2[8];
  p_output1[25]=0.03428571*t4594*var2[7] + 0.06857142*(-1.*t260*t3068 + t4565 + t4570 + t4591 - 1.*t3019*t464)*var2[8];
  p_output1[26]=0.03428571*(0.06*Power(t132,2) - 0.9063*t243 - 1.*t2375*t243 - 0.06*Power(t243,2) + t132*t3544)*Power(var2[8],2);
  p_output1[27]=0.06857142*(0.9063*t132 + t132*t2375 + 0.06*t132*t243)*var2[8];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 28, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L7_J9_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L7_J9_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

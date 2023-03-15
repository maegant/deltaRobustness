/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:35 GMT-08:00
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
  double t174;
  double t61;
  double t62;
  double t179;
  double t396;
  double t429;
  double t432;
  double t508;
  double t635;
  double t690;
  double t716;
  double t939;
  double t361;
  double t1154;
  double t1231;
  double t1244;
  double t15;
  double t503;
  double t1066;
  double t1081;
  double t1112;
  double t155;
  double t185;
  double t270;
  double t1328;
  double t1334;
  double t1340;
  double t1357;
  double t1444;
  double t1469;
  double t483;
  double t1135;
  double t1475;
  double t1476;
  double t1806;
  double t1865;
  double t1497;
  double t1558;
  double t1623;
  double t1484;
  double t1935;
  double t1937;
  double t1980;
  double t1991;
  double t2182;
  double t2188;
  double t2294;
  double t2384;
  double t2406;
  double t1911;
  double t1921;
  double t2123;
  double t2441;
  double t2448;
  double t2462;
  double t2468;
  double t2472;
  double t2502;
  double t2539;
  double t2677;
  double t2681;
  double t2709;
  double t2734;
  double t2561;
  double t2097;
  double t2271;
  double t2275;
  double t2288;
  double t2540;
  double t2546;
  double t2564;
  double t2585;
  double t2620;
  double t3018;
  double t3033;
  double t3483;
  double t3486;
  double t3303;
  double t3322;
  double t3345;
  double t3366;
  double t2950;
  double t2991;
  double t2992;
  double t3079;
  double t2690;
  double t2735;
  double t2805;
  double t3180;
  double t3277;
  double t3295;
  double t3389;
  double t3428;
  double t2834;
  double t2849;
  double t2853;
  double t3538;
  double t3791;
  double t3792;
  double t3687;
  double t2830;
  double t2858;
  double t2876;
  double t3774;
  double t3784;
  double t3789;
  double t3802;
  double t3824;
  double t3874;
  double t3879;
  double t3880;
  double t3882;
  double t3895;
  double t4007;
  double t4017;
  double t4025;
  double t4026;
  double t4047;
  double t4048;
  double t4059;
  double t4068;
  double t4073;
  double t4078;
  double t4080;
  double t4605;
  double t4634;
  double t4615;
  double t4772;
  double t4832;
  double t4884;
  double t4966;
  double t5118;
  double t1491;
  double t1495;
  double t5315;
  double t344;
  double t490;
  double t5410;
  double t5483;
  double t5492;
  double t5495;
  double t5438;
  double t5498;
  double t5507;
  double t3299;
  double t3371;
  double t3427;
  double t3463;
  double t3471;
  double t3633;
  double t3675;
  double t3679;
  double t3684;
  double t3696;
  double t5624;
  double t5797;
  double t5812;
  double t5583;
  double t5592;
  double t5593;
  double t5903;
  double t5911;
  double t5947;
  double t5958;
  double t5959;
  double t6016;
  double t6026;
  double t4166;
  double t4196;
  double t4200;
  double t4342;
  double t4360;
  double t4366;
  double t1477;
  double t1631;
  double t1694;
  double t2624;
  double t2884;
  double t2944;
  double t4120;
  double t6338;
  double t6356;
  double t6379;
  double t6385;
  double t6403;
  double t6682;
  double t6701;
  double t6710;
  double t6791;
  double t6830;
  double t6831;
  double t6900;
  double t6944;
  double t6953;
  double t6958;
  double t6982;
  double t7114;
  double t7119;
  double t7124;
  double t7127;
  double t7160;
  double t7164;
  double t7166;
  double t7169;
  double t7191;
  double t7195;
  double t7197;
  double t7198;
  double t7231;
  double t7200;
  double t7283;
  double t7491;
  double t7492;
  double t7495;
  double t7524;
  double t7532;
  double t7560;
  double t7619;
  double t7622;
  t174 = Cos(var1[3]);
  t61 = Cos(var1[4]);
  t62 = Sin(var1[3]);
  t179 = Sin(var1[4]);
  t396 = t174*t61;
  t429 = -1.*t62*t179;
  t432 = t396 + t429;
  t508 = -1.*t61;
  t635 = 1. + t508;
  t690 = -0.9063*t635;
  t716 = -1.0567*t61;
  t939 = t690 + t716;
  t361 = Sin(var1[2]);
  t1154 = -1.*t61*t62;
  t1231 = -1.*t174*t179;
  t1244 = t1154 + t1231;
  t15 = Cos(var1[2]);
  t503 = 0.4999*t62;
  t1066 = t939*t62;
  t1081 = -0.15039999999999998*t174*t179;
  t1112 = t503 + t1066 + t1081;
  t155 = t61*t62;
  t185 = t174*t179;
  t270 = t155 + t185;
  t1328 = -1.*t174;
  t1334 = 1. + t1328;
  t1340 = -0.4999*t1334;
  t1357 = t174*t939;
  t1444 = 0.15039999999999998*t62*t179;
  t1469 = t1340 + t1357 + t1444;
  t483 = -1.*t361*t432;
  t1135 = -1.*t1112*t432;
  t1475 = -1.*t1244*t1469;
  t1476 = t1135 + t1475;
  t1806 = t15*t1244;
  t1865 = t1806 + t483;
  t1497 = t1112*t270;
  t1558 = t432*t1469;
  t1623 = t1497 + t1558;
  t1484 = -1.*t361*t1244;
  t1935 = -0.4999*t62;
  t1937 = -1.*t939*t62;
  t1980 = 0.15039999999999998*t174*t179;
  t1991 = t1935 + t1937 + t1980;
  t2182 = 0.4999*t174;
  t2188 = t2182 + t1357 + t1444;
  t2294 = -1.*t174*t61;
  t2384 = t62*t179;
  t2406 = t2294 + t2384;
  t1911 = 3.5899*t1865*t1476;
  t1921 = t1112*t432;
  t2123 = t1244*t1469;
  t2441 = t15*t2406;
  t2448 = t1484 + t2441;
  t2462 = 3.5899*t1623*t2448;
  t2468 = -1.*t361*t270;
  t2472 = t15*t432;
  t2502 = t2468 + t2472;
  t2539 = -1.*t1244*t1112;
  t2677 = 0.15039999999999998*t61*t62;
  t2681 = t2677 + t1980;
  t2709 = -0.15039999999999998*t174*t61;
  t2734 = t2709 + t1444;
  t2561 = -1.*t1469*t2406;
  t2097 = t1991*t432;
  t2271 = t270*t2188;
  t2275 = t1921 + t2097 + t2123 + t2271;
  t2288 = 3.5899*t1865*t2275;
  t2540 = -1.*t1244*t1991;
  t2546 = -1.*t432*t2188;
  t2564 = t2539 + t2540 + t2546 + t2561;
  t2585 = 3.5899*t2502*t2564;
  t2620 = t1911 + t2288 + t2462 + t2585;
  t3018 = t361*t2406;
  t3033 = t1806 + t3018;
  t3483 = t361*t1244;
  t3486 = t3483 + t2472;
  t3303 = -0.4999*t174;
  t3322 = -1.*t174*t939;
  t3345 = -0.15039999999999998*t62*t179;
  t3366 = t3303 + t3322 + t3345;
  t2950 = t361*t270;
  t2991 = t2950 + t2441;
  t2992 = 3.5899*t1623*t2991;
  t3079 = 3.5899*t1476*t3033;
  t2690 = t2681*t432;
  t2735 = t270*t2734;
  t2805 = t1921 + t2690 + t2123 + t2735;
  t3180 = t15*t270;
  t3277 = t361*t432;
  t3295 = t3180 + t3277;
  t3389 = -1.*t270*t1469;
  t3428 = -1.*t1112*t2406;
  t2834 = -1.*t1244*t2681;
  t2849 = -1.*t432*t2734;
  t2853 = t2539 + t2834 + t2849 + t2561;
  t3538 = t1244*t1112;
  t3791 = 0.15039999999999998*t174*t61;
  t3792 = t3791 + t3345;
  t3687 = t1469*t2406;
  t2830 = 3.5899*t1865*t2805;
  t2858 = 3.5899*t2502*t2853;
  t2876 = t1911 + t2830 + t2462 + t2858;
  t3774 = 3.5899*t2275*t3033;
  t3784 = 3.5899*t2805*t3033;
  t3789 = -1.*t2681*t432;
  t3802 = -1.*t1244*t3792;
  t3824 = -1.*t1244*t2188;
  t3874 = -1.*t1244*t2734;
  t3879 = -1.*t1991*t2406;
  t3880 = -1.*t2681*t2406;
  t3882 = t3789 + t3802 + t3389 + t3824 + t3874 + t3428 + t3879 + t3880;
  t3895 = 3.5899*t3295*t3882;
  t4007 = 3.5899*t3486*t2564;
  t4017 = 3.5899*t3486*t2853;
  t4025 = t1244*t1991;
  t4026 = t1244*t2681;
  t4047 = t2681*t270;
  t4048 = t432*t3792;
  t4059 = t432*t2188;
  t4068 = t432*t2734;
  t4073 = t3538 + t4025 + t4026 + t4047 + t4048 + t4059 + t4068 + t3687;
  t4078 = 3.5899*t3486*t4073;
  t4080 = t2992 + t3079 + t3774 + t3784 + t3895 + t4007 + t4017 + t4078;
  t4605 = 3.5899*t3486*t1476;
  t4634 = 3.5899*t1623*t3033;
  t4615 = 3.5899*t3486*t2275;
  t4772 = 3.5899*t3295*t2564;
  t4832 = t4605 + t4615 + t4634 + t4772;
  t4884 = 3.5899*t3486*t2805;
  t4966 = 3.5899*t3295*t2853;
  t5118 = t4605 + t4884 + t4634 + t4966;
  t1491 = -1.*t15*t432;
  t1495 = t1484 + t1491;
  t5315 = -1.*t15*t1244;
  t344 = -1.*t15*t270;
  t490 = t344 + t483;
  t5410 = 3.5899*t1495*t1476;
  t5483 = -1.*t361*t2406;
  t5492 = t5315 + t5483;
  t5495 = 3.5899*t1623*t5492;
  t5438 = 3.5899*t1495*t2275;
  t5498 = 3.5899*t490*t2564;
  t5507 = t5410 + t5438 + t5495 + t5498;
  t3299 = -1.*t1991*t432;
  t3371 = -1.*t1244*t3366;
  t3427 = -2.*t1244*t2188;
  t3463 = -2.*t1991*t2406;
  t3471 = t3299 + t3371 + t3389 + t3427 + t3428 + t3463;
  t3633 = 2.*t1244*t1991;
  t3675 = t1991*t270;
  t3679 = t432*t3366;
  t3684 = 2.*t432*t2188;
  t3696 = t3538 + t3633 + t3675 + t3679 + t3684 + t3687;
  t5624 = 3.5899*t1476*t2448;
  t5797 = t3180 + t5483;
  t5812 = 3.5899*t1623*t5797;
  t5583 = 3.5899*t1495*t2805;
  t5592 = 3.5899*t490*t2853;
  t5593 = t5410 + t5583 + t5495 + t5592;
  t5903 = 3.5899*t2275*t2448;
  t5911 = 3.5899*t2805*t2448;
  t5947 = 3.5899*t2502*t3882;
  t5958 = 3.5899*t1865*t2564;
  t5959 = 3.5899*t1865*t2853;
  t6016 = 3.5899*t1865*t4073;
  t6026 = t5624 + t5903 + t5911 + t5812 + t5947 + t5958 + t5959 + t6016;
  t4166 = -2.*t1244*t2734;
  t4196 = -2.*t2681*t2406;
  t4200 = t3789 + t3802 + t3389 + t4166 + t3428 + t4196;
  t4342 = 2.*t1244*t2681;
  t4360 = 2.*t432*t2734;
  t4366 = t3538 + t4342 + t4047 + t4048 + t4360 + t3687;
  t1477 = 3.5899*t490*t1476;
  t1631 = 3.5899*t1495*t1623;
  t1694 = t1477 + t1631;
  t2624 = -0.5*var2[3]*t2620;
  t2884 = -0.5*var2[4]*t2876;
  t2944 = -0.5*var2[2]*t2620;
  t4120 = -0.5*var2[2]*t2876;
  t6338 = 7.1798*t2275*t2805;
  t6356 = 7.1798*t1476*t3882;
  t6379 = 7.1798*t2564*t2853;
  t6385 = 7.1798*t1623*t4073;
  t6403 = t6338 + t6356 + t6379 + t6385;
  t6682 = 7.1798*t1623*t2275;
  t6701 = 7.1798*t1476*t2564;
  t6710 = t6682 + t6701;
  t6791 = 7.1798*t1623*t2805;
  t6830 = 7.1798*t1476*t2853;
  t6831 = t6791 + t6830;
  t6900 = 0.4999*t179;
  t6944 = t939*t179;
  t6953 = 0.15039999999999998*t61*t179;
  t6958 = t6900 + t6944 + t6953;
  t6982 = 0.4999*t61;
  t7114 = t939*t61;
  t7119 = Power(t179,2);
  t7124 = -0.15039999999999998*t7119;
  t7127 = t6982 + t7114 + t7124;
  t7160 = -0.4999*t179;
  t7164 = -1.*t939*t179;
  t7166 = -0.15039999999999998*t61*t179;
  t7169 = t7160 + t7164 + t7166;
  t7191 = 3.5899*t7169*t2275;
  t7195 = 3.5899*t6958*t3882;
  t7197 = Power(t61,2);
  t7198 = 0.15039999999999998*t7197;
  t7231 = 3.5899*t7127*t4073;
  t7200 = t6982 + t7114 + t7198;
  t7283 = 0. + t6982 + t7114 + t7198;
  t7491 = 3.5899*t7127*t2275;
  t7492 = 3.5899*t6958*t2564;
  t7495 = t7491 + t7492;
  t7524 = 3.5899*t7200*t1476;
  t7532 = 3.5899*t7169*t1623;
  t7560 = 3.5899*t7127*t2805;
  t7619 = 3.5899*t6958*t2853;
  t7622 = t7524 + t7532 + t7560 + t7619;
  p_output1[0]=var2[2]*(t2624 + t2884 - 0.5*t1694*var2[2]);
  p_output1[1]=var2[2]*(t2944 - 0.5*(t2992 + 7.1798*t2275*t3033 + t3079 + 3.5899*t3295*t3471 + 7.1798*t2564*t3486 + 3.5899*t3486*t3696)*var2[3] - 0.5*t4080*var2[4]);
  p_output1[2]=var2[2]*(t4120 - 0.5*t4080*var2[3] - 0.5*(t2992 + 7.1798*t2805*t3033 + t3079 + 7.1798*t2853*t3486 + 3.5899*t3295*t4200 + 3.5899*t3486*t4366)*var2[4]);
  p_output1[3]=-1.*(3.5899*t1623*t1865 + 3.5899*t1476*t2502)*var2[2] - 0.5*t4832*var2[3] - 0.5*t5118*var2[4];
  p_output1[4]=-0.5*t4832*var2[2];
  p_output1[5]=-0.5*t5118*var2[2];
  p_output1[6]=var2[2]*(-0.5*(3.5899*t1476*(t1491 + t2950) + 3.5899*t1623*(t3277 + t5315))*var2[2] - 0.5*t5507*var2[3] - 0.5*t5593*var2[4]);
  p_output1[7]=var2[2]*(-0.5*t5507*var2[2] - 0.5*(7.1798*t2275*t2448 + 7.1798*t1865*t2564 + 3.5899*t2502*t3471 + 3.5899*t1865*t3696 + t5624 + t5812)*var2[3] - 0.5*t6026*var2[4]);
  p_output1[8]=var2[2]*(-0.5*t5593*var2[2] - 0.5*t6026*var2[3] - 0.5*(7.1798*t2448*t2805 + 7.1798*t1865*t2853 + 3.5899*t2502*t4200 + 3.5899*t1865*t4366 + t5624 + t5812)*var2[4]);
  p_output1[9]=t2624 + t2884 - 1.*t1694*var2[2];
  p_output1[10]=t2944;
  p_output1[11]=t4120;
  p_output1[12]=var2[2]*(-0.5*(7.1798*Power(t2275,2) + 7.1798*Power(t2564,2) + 7.1798*t1476*t3471 + 7.1798*t1623*t3696)*var2[3] - 0.5*t6403*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t6403*var2[3] - 0.5*(7.1798*Power(t2805,2) + 7.1798*Power(t2853,2) + 7.1798*t1476*t4200 + 7.1798*t1623*t4366)*var2[4]);
  p_output1[14]=-0.5*t6710*var2[3] - 0.5*t6831*var2[4];
  p_output1[15]=-0.5*t6710*var2[2];
  p_output1[16]=-0.5*t6831*var2[2];
  p_output1[17]=var2[2]*(-0.5*(3.5899*t3471*t6958 + 3.5899*t3696*t7127)*var2[3] - 0.5*(t7191 + t7195 + 3.5899*t2564*t7200 + t7231)*var2[4]);
  p_output1[18]=var2[2]*(-0.5*(t7191 + t7195 + t7231 + 3.5899*t2564*t7283)*var2[3] - 0.5*(3.5899*t4200*t6958 + 3.5899*t4366*t7127 + 3.5899*t1476*t7169 + 7.1798*t2805*t7169 + 3.5899*t2853*t7200 + 3.5899*t2853*t7283 + 3.5899*t1623*(0. - 0.4999*t61 - 0.15039999999999998*t7197 - 1.*t61*t939))*var2[4]);
  p_output1[19]=-0.5*t7495*var2[3] - 0.5*t7622*var2[4];
  p_output1[20]=-0.5*t7495*var2[2];
  p_output1[21]=-0.5*t7622*var2[2];
  p_output1[22]=var2[2]*(0.26996047999999995*t3696*var2[3] + 0.26996047999999995*t4073*var2[4]);
  p_output1[23]=var2[2]*(0.26996047999999995*t4073*var2[3] + 0.26996047999999995*t4366*var2[4]);
  p_output1[24]=0.26996047999999995*t2275*var2[3] + 0.26996047999999995*t2805*var2[4];
  p_output1[25]=0.26996047999999995*t2275*var2[2];
  p_output1[26]=0.26996047999999995*t2805*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L3_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L3_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

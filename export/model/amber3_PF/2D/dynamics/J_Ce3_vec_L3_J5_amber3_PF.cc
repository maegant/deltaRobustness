/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:30 GMT-08:00
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
  double t312;
  double t26;
  double t132;
  double t323;
  double t576;
  double t290;
  double t374;
  double t485;
  double t3;
  double t642;
  double t659;
  double t737;
  double t498;
  double t1117;
  double t1250;
  double t1263;
  double t1343;
  double t1383;
  double t1384;
  double t1400;
  double t1415;
  double t1453;
  double t1458;
  double t1558;
  double t1571;
  double t856;
  double t861;
  double t1582;
  double t1596;
  double t1678;
  double t1956;
  double t1984;
  double t2004;
  double t2211;
  double t2249;
  double t2250;
  double t2261;
  double t2262;
  double t2343;
  double t2352;
  double t2380;
  double t2434;
  double t2637;
  double t2653;
  double t2014;
  double t2032;
  double t2038;
  double t2097;
  double t2114;
  double t2149;
  double t2170;
  double t2266;
  double t2283;
  double t2312;
  double t2338;
  double t2851;
  double t2878;
  double t2574;
  double t2621;
  double t2665;
  double t2688;
  double t2691;
  double t2700;
  double t2720;
  double t2724;
  double t3347;
  double t3370;
  double t3386;
  double t3402;
  double t3433;
  double t3277;
  double t3278;
  double t2846;
  double t2923;
  double t2930;
  double t2937;
  double t2940;
  double t2967;
  double t2998;
  double t3009;
  double t3037;
  double t3043;
  double t3049;
  double t3150;
  double t3194;
  double t3222;
  double t3294;
  double t3311;
  double t4294;
  double t4312;
  double t4313;
  double t4328;
  double t4068;
  double t4103;
  double t4187;
  double t3577;
  double t3638;
  t312 = Cos(var1[3]);
  t26 = Cos(var1[4]);
  t132 = Sin(var1[3]);
  t323 = Sin(var1[4]);
  t576 = Cos(var1[2]);
  t290 = -1.*t26*t132;
  t374 = -1.*t312*t323;
  t485 = t290 + t374;
  t3 = Sin(var1[2]);
  t642 = t312*t26;
  t659 = -1.*t132*t323;
  t737 = t642 + t659;
  t498 = -1.*t3*t485;
  t1117 = -1.*t576*t485;
  t1250 = -1.*t312*t26;
  t1263 = t132*t323;
  t1343 = t1250 + t1263;
  t1383 = t576*t1343;
  t1384 = t498 + t1383;
  t1400 = -0.07323676079999998*var2[0]*t1384;
  t1415 = -1.*t3*t1343;
  t1453 = t1117 + t1415;
  t1458 = -0.07323676079999998*var2[1]*t1453;
  t1558 = t1400 + t1458;
  t1571 = var2[4]*t1558;
  t856 = -1.*t576*t737;
  t861 = t498 + t856;
  t1582 = t576*t485;
  t1596 = -1.*t3*t737;
  t1678 = t1582 + t1596;
  t1956 = t26*t132;
  t1984 = t312*t323;
  t2004 = t1956 + t1984;
  t2211 = -1.*t26;
  t2249 = 1. + t2211;
  t2250 = -0.9063*t2249;
  t2261 = -1.078185*t26;
  t2262 = t2250 + t2261;
  t2343 = -0.4999*t132;
  t2352 = -1.*t2262*t132;
  t2380 = 0.17188499999999995*t312*t323;
  t2434 = t2343 + t2352 + t2380;
  t2637 = t312*t2262;
  t2653 = 0.17188499999999995*t132*t323;
  t2014 = t3*t2004;
  t2032 = t2014 + t1383;
  t2038 = -0.07323676079999998*var2[0]*t2032;
  t2097 = t576*t2004;
  t2114 = t2097 + t1415;
  t2149 = -0.07323676079999998*var2[1]*t2114;
  t2170 = 0.4999*t132;
  t2266 = t2262*t132;
  t2283 = -0.17188499999999995*t312*t323;
  t2312 = t2170 + t2266 + t2283;
  t2338 = t485*t2312;
  t2851 = 0.17188499999999995*t26*t132;
  t2878 = t2851 + t2380;
  t2574 = -0.17188499999999995*t132*t323;
  t2621 = 0.4999*t312;
  t2665 = t2621 + t2637 + t2653;
  t2688 = -1.*t312;
  t2691 = 1. + t2688;
  t2700 = -0.4999*t2691;
  t2720 = t2700 + t2637 + t2653;
  t2724 = t2720*t1343;
  t3347 = t2312*t737;
  t3370 = t2434*t737;
  t3386 = t485*t2720;
  t3402 = t2004*t2665;
  t3433 = t3347 + t3370 + t3386 + t3402;
  t3277 = t3*t1343;
  t3278 = t1582 + t3277;
  t2846 = t485*t2434;
  t2923 = t485*t2878;
  t2930 = t2878*t2004;
  t2937 = 0.17188499999999995*t312*t26;
  t2940 = t2937 + t2574;
  t2967 = t737*t2940;
  t2998 = t737*t2665;
  t3009 = -0.17188499999999995*t312*t26;
  t3037 = t3009 + t2653;
  t3043 = t737*t3037;
  t3049 = t2338 + t2846 + t2923 + t2930 + t2967 + t2998 + t3043 + t2724;
  t3150 = -0.07323676079999998*var2[2]*t3049;
  t3194 = t2038 + t2149 + t3150;
  t3222 = var2[4]*t3194;
  t3294 = -0.07323676079999998*var2[4]*t3278;
  t3311 = -0.07323676079999998*var2[4]*t1384;
  t4294 = -0.4999*t323;
  t4312 = -1.*t2262*t323;
  t4313 = -0.17188499999999995*t26*t323;
  t4328 = t4294 + t4312 + t4313;
  t4068 = t2878*t737;
  t4103 = t2004*t3037;
  t4187 = t3347 + t4068 + t3386 + t4103;
  t3577 = -0.07323676079999998*var2[1]*t1384;
  t3638 = -0.07323676079999998*var2[0]*t3278;
  p_output1[0]=(-0.07323676079999998*t861*var2[0] - 0.07323676079999998*(t1117 + t3*t737)*var2[1])*var2[4];
  p_output1[1]=t1571;
  p_output1[2]=t1571;
  p_output1[3]=-0.07323676079999998*t1678*var2[4];
  p_output1[4]=-0.07323676079999998*t861*var2[4];
  p_output1[5]=-0.07323676079999998*t1678*var2[0] - 0.07323676079999998*t861*var2[1];
  p_output1[6]=t1571;
  p_output1[7]=(t2038 + t2149 - 0.07323676079999998*(t2338 + t2004*t2434 + t2724 + 2.*t2434*t485 + 2.*t2665*t737 + (t2574 - 0.4999*t312 - 1.*t2262*t312)*t737)*var2[2])*var2[4];
  p_output1[8]=t3222;
  p_output1[9]=t3294;
  p_output1[10]=t3311;
  p_output1[11]=-0.07323676079999998*t3433*var2[4];
  p_output1[12]=t3577 + t3638 - 0.07323676079999998*t3433*var2[2];
  p_output1[13]=t1571;
  p_output1[14]=t3222;
  p_output1[15]=(t2038 + t2149 - 0.07323676079999998*(t2338 + t2724 + t2930 + t2967 + 2.*t2878*t485 + 2.*t3037*t737)*var2[2] - 0.07323676079999998*(0. - 0.4999*t26 - 1.*t2262*t26 - 0.17188499999999995*Power(t26,2))*var2[3])*var2[4];
  p_output1[16]=t3294;
  p_output1[17]=t3311;
  p_output1[18]=-0.07323676079999998*t4187*var2[4];
  p_output1[19]=-0.07323676079999998*t4328*var2[4];
  p_output1[20]=t3577 + t3638 - 0.07323676079999998*t4187*var2[2] - 0.07323676079999998*t4328*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L3_J5_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L3_J5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

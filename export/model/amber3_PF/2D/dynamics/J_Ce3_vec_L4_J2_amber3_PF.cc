/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:36 GMT-08:00
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
  double t86;
  double t165;
  double t629;
  double t730;
  double t536;
  double t922;
  double t1141;
  double t1400;
  double t1453;
  double t1458;
  double t1263;
  double t1383;
  double t1384;
  double t1571;
  double t1582;
  double t1783;
  double t2250;
  double t2261;
  double t2266;
  double t2312;
  double t2343;
  double t1180;
  double t1494;
  double t1558;
  double t1874;
  double t1883;
  double t1928;
  double t1946;
  double t1949;
  double t2018;
  double t2032;
  double t2079;
  double t2097;
  double t2114;
  double t2149;
  double t2248;
  double t2482;
  double t2380;
  double t2447;
  double t2457;
  double t2468;
  double t2522;
  double t2524;
  double t2580;
  double t2582;
  double t3278;
  double t3294;
  double t3311;
  double t3347;
  double t3370;
  double t3386;
  double t3674;
  double t3679;
  double t3698;
  double t2720;
  double t2796;
  double t2846;
  double t2937;
  double t2940;
  double t3009;
  double t3883;
  double t3896;
  double t2843;
  double t2844;
  double t3402;
  double t3433;
  double t3467;
  double t3558;
  double t3577;
  double t3632;
  double t3638;
  double t4348;
  double t4357;
  double t4360;
  double t3848;
  t86 = Cos(var1[5]);
  t165 = Sin(var1[2]);
  t629 = Cos(var1[2]);
  t730 = Sin(var1[5]);
  t536 = t86*t165;
  t922 = t629*t730;
  t1141 = t536 + t922;
  t1400 = t629*t86;
  t1453 = -1.*t165*t730;
  t1458 = t1400 + t1453;
  t1263 = -1.*t86*t165;
  t1383 = -1.*t629*t730;
  t1384 = t1263 + t1383;
  t1571 = -1.*t629*t86;
  t1582 = t165*t730;
  t1783 = t1571 + t1582;
  t2250 = -1.*t86;
  t2261 = 1. + t2250;
  t2266 = -0.4999*t2261;
  t2312 = -0.6493*t86;
  t2343 = t2266 + t2312;
  t1180 = -0.25592966999999994*var2[5]*t1141;
  t1494 = 10.2783*t1384*t1458;
  t1558 = 3.4261*t1141*t1458;
  t1874 = 10.2783*t1384*t1783;
  t1883 = 3.4261*t1141*t1783;
  t1928 = t1494 + t1558 + t1874 + t1883;
  t1946 = 0.5*var2[0]*t1928;
  t1949 = Power(t1384,2);
  t2018 = 6.8522*t1949;
  t2032 = 6.8522*t1384*t1141;
  t2079 = 6.8522*t1458*t1783;
  t2097 = Power(t1783,2);
  t2114 = 6.8522*t2097;
  t2149 = t2018 + t2032 + t2079 + t2114;
  t2248 = 0.5*var2[1]*t2149;
  t2482 = t2343*t86;
  t2380 = t2343*t730;
  t2447 = 0.14939999999999998*t86*t730;
  t2457 = t2380 + t2447;
  t2468 = 3.4261*t2457*t1783;
  t2522 = Power(t730,2);
  t2524 = -0.14939999999999998*t2522;
  t2580 = t2482 + t2524;
  t2582 = 3.4261*t1141*t2580;
  t3278 = 3.4261*t1949;
  t3294 = 3.4261*t1384*t1141;
  t3311 = Power(t1458,2);
  t3347 = 3.4261*t3311;
  t3370 = 3.4261*t1458*t1783;
  t3386 = t3278 + t3294 + t3347 + t3370;
  t3674 = 3.4261*t1384*t2457;
  t3679 = 3.4261*t1783*t2580;
  t3698 = t3674 + t3679;
  t2720 = Power(t86,2);
  t2796 = 0.14939999999999998*t2720;
  t2846 = -1.*t2343*t730;
  t2937 = -0.14939999999999998*t86*t730;
  t2940 = t2846 + t2937;
  t3009 = 3.4261*t2940*t1783;
  t3883 = t2482 + t2796;
  t3896 = 3.4261*t3883*t1384;
  t2843 = 0. + t2482 + t2796;
  t2844 = 3.4261*t2843*t1384;
  t3402 = 0.5*var2[1]*t3386;
  t3433 = -0.25592966999999994*var2[5]*t1783;
  t3467 = 6.8522*t1384*t1458;
  t3558 = 6.8522*t1384*t1783;
  t3577 = t3467 + t3558;
  t3632 = var2[1]*t3577;
  t3638 = 0.5*var2[0]*t3386;
  t4348 = 3.4261*t1384*t2940;
  t4357 = 3.4261*t3883*t1458;
  t4360 = t4348 + t3674 + t4357 + t3679;
  t3848 = -0.25592966999999994*var2[1]*t1783;
  p_output1[0]=var2[1]*(t1180 + t1946 + t2248 + 0.5*(t2468 + t2582)*var2[2]);
  p_output1[1]=var2[1]*(t1180 + t1946 + t2248 + 0.5*(t2468 + t2582 + t2844 + t3009)*var2[2]);
  p_output1[2]=t3402;
  p_output1[3]=t3433 + t3632 + t3638 + 0.5*t3698*var2[2];
  p_output1[4]=0.5*t3698*var2[1];
  p_output1[5]=t3848;
  p_output1[6]=var2[1]*(t1180 + t1946 + t2248 + 0.5*(t2468 + t2582 + t3009 + t3896)*var2[2]);
  p_output1[7]=var2[1]*(t1180 + t1946 + t2248 + 0.5*(t2468 + t2582 + t2844 + 3.4261*t1458*t2940 + 6.8522*t1783*t2940 + t3896 + 3.4261*t1384*(0. - 0.14939999999999998*t2720 - 1.*t2343*t86))*var2[2]);
  p_output1[8]=t3402;
  p_output1[9]=t3433 + t3632 + t3638 + 0.5*t4360*var2[2];
  p_output1[10]=0.5*t4360*var2[1];
  p_output1[11]=t3848;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L4_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L4_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

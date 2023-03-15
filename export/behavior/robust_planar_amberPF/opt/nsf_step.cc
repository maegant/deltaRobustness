/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:51 GMT-08:00
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
  double t1994;
  double t1241;
  double t2639;
  double t2659;
  double t2676;
  double t2782;
  double t2798;
  double t2818;
  double t2854;
  double t2887;
  double t2894;
  double t2900;
  double t2147;
  double t3126;
  double t3143;
  double t3205;
  double t3208;
  double t3218;
  double t3328;
  double t3340;
  double t3345;
  double t3355;
  double t1303;
  double t1565;
  double t2412;
  double t2509;
  double t2677;
  double t2779;
  double t3724;
  double t3733;
  double t3737;
  double t3151;
  double t3201;
  double t3870;
  double t3895;
  double t3900;
  t1994 = Sin(var1[2]);
  t1241 = Cos(var1[3]);
  t2639 = Cos(var1[2]);
  t2659 = Sin(var1[3]);
  t2676 = Cos(var1[4]);
  t2782 = t1241*t1994;
  t2798 = t2639*t2659;
  t2818 = t2782 + t2798;
  t2854 = t2639*t1241;
  t2887 = -1.*t1994*t2659;
  t2894 = t2854 + t2887;
  t2900 = Sin(var1[4]);
  t2147 = Cos(var1[5]);
  t3126 = Sin(var1[5]);
  t3143 = Cos(var1[6]);
  t3205 = t2147*t1994;
  t3208 = t2639*t3126;
  t3218 = t3205 + t3208;
  t3328 = t2639*t2147;
  t3340 = -1.*t1994*t3126;
  t3345 = t3328 + t3340;
  t3355 = Sin(var1[6]);
  t1303 = -1.*t1241;
  t1565 = 1. + t1303;
  t2412 = -1.*t2147;
  t2509 = 1. + t2412;
  t2677 = -1.*t2676;
  t2779 = 1. + t2677;
  t3724 = -1.*t1241*t1994;
  t3733 = -1.*t2639*t2659;
  t3737 = t3724 + t3733;
  t3151 = -1.*t3143;
  t3201 = 1. + t3151;
  t3870 = -1.*t2147*t1994;
  t3895 = -1.*t2639*t3126;
  t3900 = t3870 + t3895;
  p_output1[0]=-0.4999*t1565*t2639 + 0.4999*t2509*t2639 - 0.4999*t1994*t2659 - 0.9063*t2779*t2894 + 0.4999*t1994*t3126 + 0.9063*t3201*t3345 + 0.9063*t2900*t3737 - 1.373025*(t2676*t2894 + t2900*t3737) - 0.9063*t3355*t3900 + 1.373025*(t3143*t3345 + t3355*t3900) - (1.*var2[0])/(1. + Power(2.71828182845905,-50.*(-0.4999*t1565*t1994 + 0.4999*t1994*t2509 + 0.4999*t2639*t2659 - 0.9063*t2779*t2818 + 0.9063*t2894*t2900 - 1.373025*(t2676*t2818 + t2894*t2900) - 0.4999*t2639*t3126 + 0.9063*t3201*t3218 - 0.9063*t3345*t3355 + 1.373025*(t3143*t3218 + t3345*t3355) - 1.*var2[1])));
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
    ( !(mrows == 1 && ncols == 2) && 
      !(mrows == 2 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "nsf_step.hh"

namespace RightSS
{

void nsf_step_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

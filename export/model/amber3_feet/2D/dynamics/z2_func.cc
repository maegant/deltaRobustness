/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:47 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t120;
  double t154;
  double t163;
  double t164;
  double t166;
  double t167;
  double t171;
  double t178;
  double t189;
  double t190;
  double t191;
  double t192;
  double t194;
  double t203;
  double t204;
  double t205;
  double t197;
  double t198;
  double t199;
  double t207;
  t120 = Cos(var1[2]);
  t154 = Cos(var1[6]);
  t163 = t120*t154;
  t164 = Sin(var1[2]);
  t166 = Sin(var1[6]);
  t167 = -1.*t164*t166;
  t171 = t163 + t167;
  t178 = Cos(var1[7]);
  t189 = -1.*t154*t164;
  t190 = -1.*t120*t166;
  t191 = t189 + t190;
  t192 = Sin(var1[7]);
  t194 = Cos(var1[8]);
  t203 = t178*t191;
  t204 = -1.*t171*t192;
  t205 = t203 + t204;
  t197 = t178*t171;
  t198 = t191*t192;
  t199 = t197 + t198;
  t207 = Sin(var1[8]);
  p_output1[0]=0. - 0.4999*t171 + 0.9063*t171*(1. - 1.*t178) - 0.9063*t191*t192 + 1.3127*(1. - 1.*t194)*t199 - 1.3127*t205*t207 - 0.06*(t194*t205 - 1.*t199*t207) + 1.3127*(t194*t199 + t205*t207);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "z2_func.hh"

namespace SymFunction
{

void z2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

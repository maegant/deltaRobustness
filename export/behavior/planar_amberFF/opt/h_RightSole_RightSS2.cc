/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:08 GMT-08:00
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
  double t538;
  double t929;
  double t1062;
  double t1097;
  double t1283;
  double t1562;
  double t1590;
  double t1720;
  double t1871;
  double t1880;
  double t1883;
  double t1946;
  double t2035;
  double t2347;
  double t2349;
  double t2382;
  double t2567;
  double t2592;
  double t2616;
  double t2678;
  double t688;
  double t883;
  double t1304;
  double t1331;
  double t2046;
  double t2190;
  double t3705;
  double t3911;
  double t3965;
  double t4231;
  double t4383;
  double t4419;
  double t4102;
  double t4106;
  double t3038;
  double t3046;
  double t3317;
  t538 = Cos(var1[6]);
  t929 = Sin(var1[2]);
  t1062 = Cos(var1[2]);
  t1097 = Sin(var1[6]);
  t1283 = Cos(var1[7]);
  t1562 = t538*t929;
  t1590 = t1062*t1097;
  t1720 = t1562 + t1590;
  t1871 = t1062*t538;
  t1880 = -1.*t929*t1097;
  t1883 = t1871 + t1880;
  t1946 = Sin(var1[7]);
  t2035 = Cos(var1[8]);
  t2347 = t1283*t1720;
  t2349 = t1883*t1946;
  t2382 = t2347 + t2349;
  t2567 = t1283*t1883;
  t2592 = -1.*t1720*t1946;
  t2616 = t2567 + t2592;
  t2678 = Sin(var1[8]);
  t688 = -1.*t538;
  t883 = 1. + t688;
  t1304 = -1.*t1283;
  t1331 = 1. + t1304;
  t2046 = -1.*t2035;
  t2190 = 1. + t2046;
  t3705 = -1.*t538*t929;
  t3911 = -1.*t1062*t1097;
  t3965 = t3705 + t3911;
  t4231 = t1283*t3965;
  t4383 = -1.*t1883*t1946;
  t4419 = t4231 + t4383;
  t4102 = t3965*t1946;
  t4106 = t2567 + t4102;
  t3038 = t2035*t2616;
  t3046 = -1.*t2382*t2678;
  t3317 = t3038 + t3046;
  p_output1[0]=0.4999*t1062*t1097 - 0.9063*t1331*t1720 + 0.9063*t1883*t1946 - 1.3127*t2190*t2382 + 1.3127*t2616*t2678 - 1.3127*(t2035*t2382 + t2616*t2678) + 0.06*t3317 - 0.4999*t883*t929 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.9063*t1331*t1883 + 0.9063*t1946*t3965 - 1.3127*t2190*t4106 + 1.3127*t2678*t4419 + 0.06*(-1.*t2678*t4106 + t2035*t4419) - 1.3127*(t2035*t4106 + t2678*t4419) - 0.4999*t1062*t883 - 0.4999*t1097*t929 + var1[1] - 1.*var2[1];
  p_output1[2]=ArcTan(Sqrt(0. + Power(t3317,2)),t2678*t4106 - 1.*t2035*t4419) - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightSole_RightSS2.hh"

namespace RightSS2
{

void h_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

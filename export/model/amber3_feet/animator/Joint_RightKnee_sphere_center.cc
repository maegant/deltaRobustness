/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:32 GMT-08:00
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
  double t205;
  double t2110;
  double t2334;
  double t2337;
  double t2350;
  double t2409;
  double t2416;
  double t2441;
  double t2498;
  double t2511;
  double t2514;
  double t2566;
  double t807;
  double t1577;
  double t2354;
  double t2404;
  double t2895;
  double t2898;
  double t2912;
  t205 = Cos(var1[6]);
  t2110 = Sin(var1[2]);
  t2334 = Cos(var1[2]);
  t2337 = Sin(var1[6]);
  t2350 = Cos(var1[7]);
  t2409 = t205*t2110;
  t2416 = t2334*t2337;
  t2441 = t2409 + t2416;
  t2498 = t2334*t205;
  t2511 = -1.*t2110*t2337;
  t2514 = t2498 + t2511;
  t2566 = Sin(var1[7]);
  t807 = -1.*t205;
  t1577 = 1. + t807;
  t2354 = -1.*t2350;
  t2404 = 1. + t2354;
  t2895 = -1.*t205*t2110;
  t2898 = -1.*t2334*t2337;
  t2912 = t2895 + t2898;
  p_output1[0]=-0.4999*t1577*t2110 + 0.4999*t2334*t2337 - 0.9063*t2404*t2441 + 0.9063*t2514*t2566 - 0.9063*(t2350*t2441 + t2514*t2566) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1577*t2334 - 0.4999*t2110*t2337 - 0.9063*t2404*t2514 + 0.9063*t2566*t2912 - 0.9063*(t2350*t2514 + t2566*t2912) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_RightKnee_sphere_center.hh"

namespace SymFunction
{

void Joint_RightKnee_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

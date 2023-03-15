/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:47 GMT-08:00
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
  double t673;
  double t1477;
  double t2216;
  double t2733;
  double t3259;
  double t3500;
  double t3782;
  double t3920;
  double t4218;
  double t4402;
  double t4407;
  double t4531;
  double t681;
  double t682;
  double t3421;
  double t3472;
  double t5298;
  double t5324;
  double t5338;
  t673 = Cos(var1[3]);
  t1477 = Sin(var1[2]);
  t2216 = Cos(var1[2]);
  t2733 = Sin(var1[3]);
  t3259 = Cos(var1[4]);
  t3500 = t673*t1477;
  t3782 = t2216*t2733;
  t3920 = t3500 + t3782;
  t4218 = t2216*t673;
  t4402 = -1.*t1477*t2733;
  t4407 = t4218 + t4402;
  t4531 = Sin(var1[4]);
  t681 = -1.*t673;
  t682 = 1. + t681;
  t3421 = -1.*t3259;
  t3472 = 1. + t3421;
  t5298 = -1.*t673*t1477;
  t5324 = -1.*t2216*t2733;
  t5338 = t5298 + t5324;
  p_output1[0]=-0.4999*t2216*t2733 + 0.9063*t3472*t3920 - 0.9063*t4407*t4531 + 1.373025*(t3259*t3920 + t4407*t4531) + 0.4999*t1477*t682;
  p_output1[1]=0.4999*t1477*t2733 + 0.9063*t3472*t4407 - 0.9063*t4531*t5338 + 1.373025*(t3259*t4407 + t4531*t5338) + 0.4999*t2216*t682;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "z_lSS.hh"

namespace SymFunction
{

void z_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

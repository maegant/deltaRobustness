/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:47 GMT-08:00
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
  double t1185;
  double t1308;
  double t1633;
  double t1730;
  double t1812;
  double t1852;
  double t1855;
  double t1856;
  double t1896;
  double t1908;
  double t1930;
  double t1939;
  double t1577;
  double t2053;
  double t2077;
  double t2182;
  double t2243;
  double t2272;
  double t2341;
  double t2346;
  double t2351;
  double t2357;
  t1185 = Cos(var1[2]);
  t1308 = Cos(var1[3]);
  t1633 = Sin(var1[2]);
  t1730 = Sin(var1[3]);
  t1812 = Cos(var1[4]);
  t1852 = t1185*t1308;
  t1855 = -1.*t1633*t1730;
  t1856 = t1852 + t1855;
  t1896 = -1.*t1308*t1633;
  t1908 = -1.*t1185*t1730;
  t1930 = t1896 + t1908;
  t1939 = Sin(var1[4]);
  t1577 = Cos(var1[5]);
  t2053 = Sin(var1[5]);
  t2077 = Cos(var1[6]);
  t2182 = t1185*t1577;
  t2243 = -1.*t1633*t2053;
  t2272 = t2182 + t2243;
  t2341 = -1.*t1577*t1633;
  t2346 = -1.*t1185*t2053;
  t2351 = t2341 + t2346;
  t2357 = Sin(var1[6]);
  p_output1[0]=-0.4999*t1185*(1. - 1.*t1308) + 0.4999*t1185*(1. - 1.*t1577) - 0.4999*t1633*t1730 - 0.9063*(1. - 1.*t1812)*t1856 + 0.9063*t1930*t1939 - 1.373025*(t1812*t1856 + t1930*t1939) + 0.4999*t1633*t2053 + 0.9063*(1. - 1.*t2077)*t2272 - 0.9063*t2351*t2357 + 1.373025*(t2077*t2272 + t2351*t2357);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "nsf_posZ.hh"

namespace RightSS
{

void nsf_posZ_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

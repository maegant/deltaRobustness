/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:48 GMT-08:00
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
  double t1573;
  double t867;
  double t1845;
  double t1852;
  double t1859;
  double t1940;
  double t1952;
  double t1988;
  double t2015;
  double t2060;
  double t2147;
  double t2156;
  double t1610;
  double t2357;
  double t2452;
  double t2489;
  double t2504;
  double t2509;
  double t2537;
  double t2562;
  double t2597;
  double t2599;
  double t1856;
  double t1930;
  double t1939;
  double t1994;
  double t2182;
  double t2217;
  double t2272;
  double t2302;
  double t2351;
  double t2677;
  double t2712;
  double t2734;
  double t2412;
  double t2460;
  double t2471;
  double t2511;
  double t2619;
  double t2635;
  double t2638;
  double t2639;
  double t2659;
  double t2960;
  double t2979;
  double t2995;
  t1573 = Sin(var1[2]);
  t867 = Cos(var1[3]);
  t1845 = Cos(var1[2]);
  t1852 = Sin(var1[3]);
  t1859 = Cos(var1[4]);
  t1940 = -1.*t867*t1573;
  t1952 = -1.*t1845*t1852;
  t1988 = t1940 + t1952;
  t2015 = -1.*t1845*t867;
  t2060 = t1573*t1852;
  t2147 = t2015 + t2060;
  t2156 = Sin(var1[4]);
  t1610 = Cos(var1[5]);
  t2357 = Sin(var1[5]);
  t2452 = Cos(var1[6]);
  t2489 = -1.*t1610*t1573;
  t2504 = -1.*t1845*t2357;
  t2509 = t2489 + t2504;
  t2537 = -1.*t1845*t1610;
  t2562 = t1573*t2357;
  t2597 = t2537 + t2562;
  t2599 = Sin(var1[6]);
  t1856 = -0.4999*t1845*t1852;
  t1930 = -1.*t1859;
  t1939 = 1. + t1930;
  t1994 = -0.9063*t1939*t1988;
  t2182 = 0.9063*t2147*t2156;
  t2217 = t1859*t1988;
  t2272 = t2147*t2156;
  t2302 = t2217 + t2272;
  t2351 = -1.373025*t2302;
  t2677 = t1845*t867;
  t2712 = -1.*t1573*t1852;
  t2734 = t2677 + t2712;
  t2412 = 0.4999*t1845*t2357;
  t2460 = -1.*t2452;
  t2471 = 1. + t2460;
  t2511 = 0.9063*t2471*t2509;
  t2619 = -0.9063*t2597*t2599;
  t2635 = t2452*t2509;
  t2638 = t2597*t2599;
  t2639 = t2635 + t2638;
  t2659 = 1.373025*t2639;
  t2960 = t1845*t1610;
  t2979 = -1.*t1573*t2357;
  t2995 = t2960 + t2979;
  p_output1[0]=-0.4999*t1573*(1. - 1.*t1610) + t1856 + t1994 + t2182 + t2351 + t2412 + t2511 + t2619 + t2659 + 0.4999*t1573*(1. - 1.*t867);
  p_output1[1]=t1856 + t1994 + t2182 + t2351 - 0.4999*t1573*t867;
  p_output1[2]=0.9063*t1859*t1988 - 0.9063*t2156*t2734 - 1.373025*(t2217 - 1.*t2156*t2734);
  p_output1[3]=0.4999*t1573*t1610 + t2412 + t2511 + t2619 + t2659;
  p_output1[4]=-0.9063*t2452*t2509 + 0.9063*t2599*t2995 + 1.373025*(t2635 - 1.*t2599*t2995);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_posZ.hh"

namespace RightSS
{

void J_nsf_posZ_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

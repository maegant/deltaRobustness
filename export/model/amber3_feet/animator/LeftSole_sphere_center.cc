/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:35 GMT-08:00
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
  double t1189;
  double t2297;
  double t2498;
  double t2742;
  double t2850;
  double t3018;
  double t3172;
  double t3201;
  double t3252;
  double t3260;
  double t3296;
  double t3299;
  double t3365;
  double t3401;
  double t3412;
  double t3413;
  double t3442;
  double t3507;
  double t3546;
  double t3549;
  double t2034;
  double t2259;
  double t2912;
  double t2935;
  double t3369;
  double t3378;
  double t3788;
  double t3814;
  double t3902;
  double t3985;
  double t4013;
  double t4023;
  double t3953;
  double t3958;
  t1189 = Cos(var1[3]);
  t2297 = Sin(var1[2]);
  t2498 = Cos(var1[2]);
  t2742 = Sin(var1[3]);
  t2850 = Cos(var1[4]);
  t3018 = t1189*t2297;
  t3172 = t2498*t2742;
  t3201 = t3018 + t3172;
  t3252 = t2498*t1189;
  t3260 = -1.*t2297*t2742;
  t3296 = t3252 + t3260;
  t3299 = Sin(var1[4]);
  t3365 = Cos(var1[5]);
  t3401 = t2850*t3201;
  t3412 = t3296*t3299;
  t3413 = t3401 + t3412;
  t3442 = t2850*t3296;
  t3507 = -1.*t3201*t3299;
  t3546 = t3442 + t3507;
  t3549 = Sin(var1[5]);
  t2034 = -1.*t1189;
  t2259 = 1. + t2034;
  t2912 = -1.*t2850;
  t2935 = 1. + t2912;
  t3369 = -1.*t3365;
  t3378 = 1. + t3369;
  t3788 = -1.*t1189*t2297;
  t3814 = -1.*t2498*t2742;
  t3902 = t3788 + t3814;
  t3985 = t2850*t3902;
  t4013 = -1.*t3296*t3299;
  t4023 = t3985 + t4013;
  t3953 = t3902*t3299;
  t3958 = t3442 + t3953;
  p_output1[0]=-0.4999*t2259*t2297 + 0.4999*t2498*t2742 - 0.9063*t2935*t3201 + 0.9063*t3296*t3299 - 1.3127*t3378*t3413 + 1.3127*t3546*t3549 + 0.06*(t3365*t3546 - 1.*t3413*t3549) - 1.3127*(t3365*t3413 + t3546*t3549) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t2259*t2498 - 0.4999*t2297*t2742 - 0.9063*t2935*t3296 + 0.9063*t3299*t3902 - 1.3127*t3378*t3958 + 1.3127*t3549*t4023 + 0.06*(-1.*t3549*t3958 + t3365*t4023) - 1.3127*(t3365*t3958 + t3549*t4023) + var1[1];
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

#include "LeftSole_sphere_center.hh"

namespace SymFunction
{

void LeftSole_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

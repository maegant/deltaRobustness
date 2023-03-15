/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 09:31:04 GMT-08:00
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
  double t6;
  double t545;
  double t1948;
  double t2102;
  double t3052;
  double t3202;
  double t3377;
  double t3503;
  double t3655;
  double t3765;
  double t3842;
  double t4294;
  double t1739;
  double t1898;
  double t3121;
  double t3173;
  double t5424;
  double t5455;
  double t5602;
  double t2121;
  double t3636;
  double t4711;
  double t4716;
  double t4760;
  double t4972;
  double t4989;
  double t5275;
  double t5387;
  double t6099;
  double t6102;
  double t6312;
  double t6382;
  double t6391;
  double t6761;
  double t6811;
  double t6873;
  t6 = Cos(var1[2]);
  t545 = Cos(var1[5]);
  t1948 = Sin(var1[2]);
  t2102 = Sin(var1[5]);
  t3052 = Cos(var1[6]);
  t3202 = t6*t545;
  t3377 = -1.*t1948*t2102;
  t3503 = t3202 + t3377;
  t3655 = -1.*t545*t1948;
  t3765 = -1.*t6*t2102;
  t3842 = t3655 + t3765;
  t4294 = Sin(var1[6]);
  t1739 = -1.*t545;
  t1898 = 1. + t1739;
  t3121 = -1.*t3052;
  t3173 = 1. + t3121;
  t5424 = -1.*t6*t545;
  t5455 = t1948*t2102;
  t5602 = t5424 + t5455;
  t2121 = -0.4999*t1948*t2102;
  t3636 = -0.9063*t3173*t3503;
  t4711 = 0.9063*t3842*t4294;
  t4716 = t3052*t3503;
  t4760 = t3842*t4294;
  t4972 = t4716 + t4760;
  t4989 = -1.373025*t4972;
  t5275 = -0.4999*t6*t2102;
  t5387 = -0.9063*t3173*t3842;
  t6099 = 0.9063*t5602*t4294;
  t6102 = t3052*t3842;
  t6312 = t5602*t4294;
  t6382 = t6102 + t6312;
  t6391 = -1.373025*t6382;
  t6761 = t545*t1948;
  t6811 = t6*t2102;
  t6873 = t6761 + t6811;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=(0. + t2121 + t3636 + t4711 + t4989 - 0.4999*t1898*t6)*var2[0] + (0. + 0.4999*t1898*t1948 + t5275 + t5387 + t6099 + t6391)*var2[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0. + t2121 + t3636 + t4711 + t4989 + 0.4999*t545*t6)*var2[0] + (0. + t5275 + t5387 - 0.4999*t1948*t545 + t6099 + t6391)*var2[1];
  p_output1[6]=(0. + 0.9063*t3052*t3503 - 0.9063*t4294*t6873 - 1.373025*(t4716 - 1.*t4294*t6873))*var2[0] + (0. + 0.9063*t3052*t3842 - 0.9063*t3503*t4294 - 1.373025*(-1.*t3503*t4294 + t6102))*var2[1];
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_vec_RightSS0.hh"

namespace RightSS0
{

void fRightSole_vec_RightSS0_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

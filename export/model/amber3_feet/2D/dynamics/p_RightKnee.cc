/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:55 GMT-08:00
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
  double t3925;
  double t3938;
  double t3940;
  double t3942;
  double t3944;
  double t3947;
  double t3948;
  double t3949;
  double t3951;
  double t3952;
  double t3955;
  double t3956;
  double t3936;
  double t3937;
  double t3945;
  double t3946;
  double t3967;
  double t3968;
  double t3969;
  t3925 = Cos(var1[6]);
  t3938 = Sin(var1[2]);
  t3940 = Cos(var1[2]);
  t3942 = Sin(var1[6]);
  t3944 = Cos(var1[7]);
  t3947 = t3925*t3938;
  t3948 = t3940*t3942;
  t3949 = t3947 + t3948;
  t3951 = t3940*t3925;
  t3952 = -1.*t3938*t3942;
  t3955 = t3951 + t3952;
  t3956 = Sin(var1[7]);
  t3936 = -1.*t3925;
  t3937 = 1. + t3936;
  t3945 = -1.*t3944;
  t3946 = 1. + t3945;
  t3967 = -1.*t3925*t3938;
  t3968 = -1.*t3940*t3942;
  t3969 = t3967 + t3968;
  p_output1[0]=-0.4999*t3937*t3938 + 0.4999*t3940*t3942 - 0.9063*t3946*t3949 + 0.9063*t3955*t3956 - 0.9063*(t3944*t3949 + t3955*t3956) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t3937*t3940 - 0.4999*t3938*t3942 - 0.9063*t3946*t3955 + 0.9063*t3956*t3969 - 0.9063*(t3944*t3955 + t3956*t3969) + var1[1];
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

#include "p_RightKnee.hh"

namespace SymFunction
{

void p_RightKnee_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

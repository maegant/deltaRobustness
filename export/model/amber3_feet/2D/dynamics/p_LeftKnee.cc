/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:53 GMT-08:00
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
  double t3894;
  double t3903;
  double t3905;
  double t3906;
  double t3908;
  double t3912;
  double t3913;
  double t3914;
  double t3916;
  double t3917;
  double t3918;
  double t3919;
  double t3901;
  double t3902;
  double t3909;
  double t3910;
  double t3929;
  double t3930;
  double t3931;
  t3894 = Cos(var1[3]);
  t3903 = Sin(var1[2]);
  t3905 = Cos(var1[2]);
  t3906 = Sin(var1[3]);
  t3908 = Cos(var1[4]);
  t3912 = t3894*t3903;
  t3913 = t3905*t3906;
  t3914 = t3912 + t3913;
  t3916 = t3905*t3894;
  t3917 = -1.*t3903*t3906;
  t3918 = t3916 + t3917;
  t3919 = Sin(var1[4]);
  t3901 = -1.*t3894;
  t3902 = 1. + t3901;
  t3909 = -1.*t3908;
  t3910 = 1. + t3909;
  t3929 = -1.*t3894*t3903;
  t3930 = -1.*t3905*t3906;
  t3931 = t3929 + t3930;
  p_output1[0]=-0.4999*t3902*t3903 + 0.4999*t3905*t3906 - 0.9063*t3910*t3914 + 0.9063*t3918*t3919 - 0.9063*(t3908*t3914 + t3918*t3919) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t3902*t3905 - 0.4999*t3903*t3906 - 0.9063*t3910*t3918 + 0.9063*t3919*t3931 - 0.9063*(t3908*t3918 + t3919*t3931) + var1[1];
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

#include "p_LeftKnee.hh"

namespace SymFunction
{

void p_LeftKnee_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

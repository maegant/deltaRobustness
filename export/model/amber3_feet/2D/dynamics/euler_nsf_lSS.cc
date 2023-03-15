/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:49 GMT-08:00
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
  double t3876;
  double t3881;
  double t3873;
  double t3883;
  double t3871;
  double t3887;
  double t3888;
  double t3889;
  double t3877;
  double t3884;
  double t3885;
  double t3890;
  double t3859;
  double t3886;
  double t3891;
  double t3892;
  double t3894;
  double t3895;
  double t3896;
  double t3897;
  double t3898;
  double t3899;
  double t3900;
  double t3909;
  double t3910;
  double t3911;
  t3876 = Cos(var1[6]);
  t3881 = Sin(var1[2]);
  t3873 = Cos(var1[2]);
  t3883 = Sin(var1[6]);
  t3871 = Cos(var1[7]);
  t3887 = -1.*t3876*t3881;
  t3888 = -1.*t3873*t3883;
  t3889 = t3887 + t3888;
  t3877 = t3873*t3876;
  t3884 = -1.*t3881*t3883;
  t3885 = t3877 + t3884;
  t3890 = Sin(var1[7]);
  t3859 = Cos(var1[8]);
  t3886 = t3871*t3885;
  t3891 = t3889*t3890;
  t3892 = t3886 + t3891;
  t3894 = t3859*t3892;
  t3895 = t3871*t3889;
  t3896 = -1.*t3885*t3890;
  t3897 = t3895 + t3896;
  t3898 = Sin(var1[8]);
  t3899 = t3897*t3898;
  t3900 = t3894 + t3899;
  t3909 = t3876*t3881;
  t3910 = t3873*t3883;
  t3911 = t3909 + t3910;
  p_output1[0]=ArcTan(t3900,0);
  p_output1[1]=ArcTan(t3900,(-1.*(t3859*t3897 - 1.*t3892*t3898)*t3900)/Sqrt(Power(t3900,2)));
  p_output1[2]=ArcTan(-1.*t3898*(t3885*t3890 + t3871*t3911) + t3859*(t3886 - 1.*t3890*t3911),0.);
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

#include "euler_nsf_lSS.hh"

namespace SymFunction
{

void euler_nsf_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

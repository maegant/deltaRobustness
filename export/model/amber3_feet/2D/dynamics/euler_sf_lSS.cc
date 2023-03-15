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
  double t3858;
  double t3863;
  double t3855;
  double t3865;
  double t3853;
  double t3869;
  double t3870;
  double t3871;
  double t3859;
  double t3866;
  double t3867;
  double t3872;
  double t3836;
  double t3868;
  double t3873;
  double t3874;
  double t3876;
  double t3877;
  double t3878;
  double t3879;
  double t3880;
  double t3881;
  double t3882;
  double t3891;
  double t3892;
  double t3893;
  t3858 = Cos(var1[3]);
  t3863 = Sin(var1[2]);
  t3855 = Cos(var1[2]);
  t3865 = Sin(var1[3]);
  t3853 = Cos(var1[4]);
  t3869 = -1.*t3858*t3863;
  t3870 = -1.*t3855*t3865;
  t3871 = t3869 + t3870;
  t3859 = t3855*t3858;
  t3866 = -1.*t3863*t3865;
  t3867 = t3859 + t3866;
  t3872 = Sin(var1[4]);
  t3836 = Cos(var1[5]);
  t3868 = t3853*t3867;
  t3873 = t3871*t3872;
  t3874 = t3868 + t3873;
  t3876 = t3836*t3874;
  t3877 = t3853*t3871;
  t3878 = -1.*t3867*t3872;
  t3879 = t3877 + t3878;
  t3880 = Sin(var1[5]);
  t3881 = t3879*t3880;
  t3882 = t3876 + t3881;
  t3891 = t3858*t3863;
  t3892 = t3855*t3865;
  t3893 = t3891 + t3892;
  p_output1[0]=ArcTan(t3882,0);
  p_output1[1]=ArcTan(t3882,(-1.*(t3836*t3879 - 1.*t3874*t3880)*t3882)/Sqrt(Power(t3882,2)));
  p_output1[2]=ArcTan(-1.*t3880*(t3867*t3872 + t3853*t3893) + t3836*(t3868 - 1.*t3872*t3893),0.);
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

#include "euler_sf_lSS.hh"

namespace SymFunction
{

void euler_sf_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

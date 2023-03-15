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
  double t3939;
  double t3948;
  double t3950;
  double t3951;
  double t3956;
  double t3959;
  double t3960;
  double t3962;
  double t3964;
  double t3965;
  double t3966;
  double t3969;
  double t3971;
  double t3974;
  double t3975;
  double t3976;
  double t3978;
  double t3979;
  double t3980;
  double t3981;
  double t3943;
  double t3947;
  double t3957;
  double t3958;
  double t3972;
  double t3973;
  double t3991;
  double t3992;
  double t3993;
  double t3995;
  double t3996;
  double t3998;
  double t3999;
  double t4000;
  t3939 = Cos(var1[6]);
  t3948 = Sin(var1[2]);
  t3950 = Cos(var1[2]);
  t3951 = Sin(var1[6]);
  t3956 = Cos(var1[7]);
  t3959 = t3939*t3948;
  t3960 = t3950*t3951;
  t3962 = t3959 + t3960;
  t3964 = t3950*t3939;
  t3965 = -1.*t3948*t3951;
  t3966 = t3964 + t3965;
  t3969 = Sin(var1[7]);
  t3971 = Cos(var1[8]);
  t3974 = t3956*t3962;
  t3975 = t3966*t3969;
  t3976 = t3974 + t3975;
  t3978 = t3956*t3966;
  t3979 = -1.*t3962*t3969;
  t3980 = t3978 + t3979;
  t3981 = Sin(var1[8]);
  t3943 = -1.*t3939;
  t3947 = 1. + t3943;
  t3957 = -1.*t3956;
  t3958 = 1. + t3957;
  t3972 = -1.*t3971;
  t3973 = 1. + t3972;
  t3991 = -1.*t3939*t3948;
  t3992 = -1.*t3950*t3951;
  t3993 = t3991 + t3992;
  t3995 = t3993*t3969;
  t3996 = t3978 + t3995;
  t3998 = t3956*t3993;
  t3999 = -1.*t3966*t3969;
  t4000 = t3998 + t3999;
  p_output1[0]=-0.4999*t3947*t3948 + 0.4999*t3950*t3951 - 0.9063*t3958*t3962 + 0.9063*t3966*t3969 - 1.3127*t3973*t3976 + 1.3127*t3980*t3981 - 1.3127*(t3971*t3976 + t3980*t3981) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t3947*t3950 - 0.4999*t3948*t3951 - 0.9063*t3958*t3966 + 0.9063*t3969*t3993 - 1.3127*t3973*t3996 + 1.3127*t3981*t4000 - 1.3127*(t3971*t3996 + t3981*t4000) + var1[1];
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

#include "p_RightAnkle.hh"

namespace SymFunction
{

void p_RightAnkle_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

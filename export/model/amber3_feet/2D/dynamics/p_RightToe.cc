/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:57 GMT-08:00
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
  double t138;
  double t3978;
  double t3982;
  double t3983;
  double t3993;
  double t3997;
  double t4002;
  double t4003;
  double t4005;
  double t4006;
  double t4007;
  double t4008;
  double t4010;
  double t4013;
  double t4014;
  double t4017;
  double t4019;
  double t4021;
  double t4022;
  double t4025;
  double t3963;
  double t3974;
  double t3994;
  double t3996;
  double t4011;
  double t4012;
  double t4039;
  double t4040;
  double t4041;
  double t4046;
  double t4047;
  double t4048;
  double t4043;
  double t4044;
  t138 = Cos(var1[6]);
  t3978 = Sin(var1[2]);
  t3982 = Cos(var1[2]);
  t3983 = Sin(var1[6]);
  t3993 = Cos(var1[7]);
  t3997 = t138*t3978;
  t4002 = t3982*t3983;
  t4003 = t3997 + t4002;
  t4005 = t3982*t138;
  t4006 = -1.*t3978*t3983;
  t4007 = t4005 + t4006;
  t4008 = Sin(var1[7]);
  t4010 = Cos(var1[8]);
  t4013 = t3993*t4003;
  t4014 = t4007*t4008;
  t4017 = t4013 + t4014;
  t4019 = t3993*t4007;
  t4021 = -1.*t4003*t4008;
  t4022 = t4019 + t4021;
  t4025 = Sin(var1[8]);
  t3963 = -1.*t138;
  t3974 = 1. + t3963;
  t3994 = -1.*t3993;
  t3996 = 1. + t3994;
  t4011 = -1.*t4010;
  t4012 = 1. + t4011;
  t4039 = -1.*t138*t3978;
  t4040 = -1.*t3982*t3983;
  t4041 = t4039 + t4040;
  t4046 = t3993*t4041;
  t4047 = -1.*t4007*t4008;
  t4048 = t4046 + t4047;
  t4043 = t4041*t4008;
  t4044 = t4019 + t4043;
  p_output1[0]=-0.4999*t3974*t3978 + 0.4999*t3982*t3983 - 0.9063*t3996*t4003 + 0.9063*t4007*t4008 - 1.3127*t4012*t4017 + 1.3127*t4022*t4025 + 0.16*(t4010*t4022 - 1.*t4017*t4025) - 1.3127*(t4010*t4017 + t4022*t4025) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t3974*t3982 - 0.4999*t3978*t3983 - 0.9063*t3996*t4007 + 0.9063*t4008*t4041 - 1.3127*t4012*t4044 + 1.3127*t4025*t4048 + 0.16*(-1.*t4025*t4044 + t4010*t4048) - 1.3127*(t4010*t4044 + t4025*t4048) + var1[1];
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

#include "p_RightToe.hh"

namespace SymFunction
{

void p_RightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

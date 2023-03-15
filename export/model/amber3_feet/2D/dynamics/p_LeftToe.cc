/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:59 GMT-08:00
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
  double t88;
  double t4045;
  double t4053;
  double t4054;
  double t4062;
  double t4068;
  double t4075;
  double t4076;
  double t4078;
  double t4079;
  double t4080;
  double t4081;
  double t4083;
  double t4086;
  double t4087;
  double t4090;
  double t4092;
  double t4094;
  double t4095;
  double t4098;
  double t4027;
  double t4034;
  double t4063;
  double t4067;
  double t4084;
  double t4085;
  double t4112;
  double t4113;
  double t4114;
  double t4119;
  double t4120;
  double t4121;
  double t4116;
  double t4117;
  t88 = Cos(var1[3]);
  t4045 = Sin(var1[2]);
  t4053 = Cos(var1[2]);
  t4054 = Sin(var1[3]);
  t4062 = Cos(var1[4]);
  t4068 = t88*t4045;
  t4075 = t4053*t4054;
  t4076 = t4068 + t4075;
  t4078 = t4053*t88;
  t4079 = -1.*t4045*t4054;
  t4080 = t4078 + t4079;
  t4081 = Sin(var1[4]);
  t4083 = Cos(var1[5]);
  t4086 = t4062*t4076;
  t4087 = t4080*t4081;
  t4090 = t4086 + t4087;
  t4092 = t4062*t4080;
  t4094 = -1.*t4076*t4081;
  t4095 = t4092 + t4094;
  t4098 = Sin(var1[5]);
  t4027 = -1.*t88;
  t4034 = 1. + t4027;
  t4063 = -1.*t4062;
  t4067 = 1. + t4063;
  t4084 = -1.*t4083;
  t4085 = 1. + t4084;
  t4112 = -1.*t88*t4045;
  t4113 = -1.*t4053*t4054;
  t4114 = t4112 + t4113;
  t4119 = t4062*t4114;
  t4120 = -1.*t4080*t4081;
  t4121 = t4119 + t4120;
  t4116 = t4114*t4081;
  t4117 = t4092 + t4116;
  p_output1[0]=-0.4999*t4034*t4045 + 0.4999*t4053*t4054 - 0.9063*t4067*t4076 + 0.9063*t4080*t4081 - 1.3127*t4085*t4090 + 1.3127*t4095*t4098 + 0.16*(t4083*t4095 - 1.*t4090*t4098) - 1.3127*(t4083*t4090 + t4095*t4098) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t4034*t4053 - 0.4999*t4045*t4054 - 0.9063*t4067*t4080 + 0.9063*t4081*t4114 - 1.3127*t4085*t4117 + 1.3127*t4098*t4121 + 0.16*(-1.*t4098*t4117 + t4083*t4121) - 1.3127*(t4083*t4117 + t4098*t4121) + var1[1];
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

#include "p_LeftToe.hh"

namespace SymFunction
{

void p_LeftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

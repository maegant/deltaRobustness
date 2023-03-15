/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:15:00 GMT-08:00
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
  double t173;
  double t4068;
  double t4077;
  double t4078;
  double t4086;
  double t4092;
  double t4099;
  double t4100;
  double t4102;
  double t4103;
  double t4104;
  double t4105;
  double t4107;
  double t4110;
  double t4111;
  double t4114;
  double t4116;
  double t4118;
  double t4119;
  double t4122;
  double t4051;
  double t4058;
  double t4087;
  double t4091;
  double t4108;
  double t4109;
  double t4136;
  double t4137;
  double t4138;
  double t4143;
  double t4144;
  double t4145;
  double t4140;
  double t4141;
  t173 = Cos(var1[3]);
  t4068 = Sin(var1[2]);
  t4077 = Cos(var1[2]);
  t4078 = Sin(var1[3]);
  t4086 = Cos(var1[4]);
  t4092 = t173*t4068;
  t4099 = t4077*t4078;
  t4100 = t4092 + t4099;
  t4102 = t4077*t173;
  t4103 = -1.*t4068*t4078;
  t4104 = t4102 + t4103;
  t4105 = Sin(var1[4]);
  t4107 = Cos(var1[5]);
  t4110 = t4086*t4100;
  t4111 = t4104*t4105;
  t4114 = t4110 + t4111;
  t4116 = t4086*t4104;
  t4118 = -1.*t4100*t4105;
  t4119 = t4116 + t4118;
  t4122 = Sin(var1[5]);
  t4051 = -1.*t173;
  t4058 = 1. + t4051;
  t4087 = -1.*t4086;
  t4091 = 1. + t4087;
  t4108 = -1.*t4107;
  t4109 = 1. + t4108;
  t4136 = -1.*t173*t4068;
  t4137 = -1.*t4077*t4078;
  t4138 = t4136 + t4137;
  t4143 = t4086*t4138;
  t4144 = -1.*t4104*t4105;
  t4145 = t4143 + t4144;
  t4140 = t4138*t4105;
  t4141 = t4116 + t4140;
  p_output1[0]=-0.4999*t4058*t4068 + 0.4999*t4077*t4078 - 0.9063*t4091*t4100 + 0.9063*t4104*t4105 - 1.3127*t4109*t4114 + 1.3127*t4119*t4122 - 0.04*(t4107*t4119 - 1.*t4114*t4122) - 1.3127*(t4107*t4114 + t4119*t4122) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t4058*t4077 - 0.4999*t4068*t4078 - 0.9063*t4091*t4104 + 0.9063*t4105*t4138 - 1.3127*t4109*t4141 + 1.3127*t4122*t4145 - 0.04*(-1.*t4122*t4141 + t4107*t4145) - 1.3127*(t4107*t4141 + t4122*t4145) + var1[1];
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

#include "p_LeftHeel.hh"

namespace SymFunction
{

void p_LeftHeel_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

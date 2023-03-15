/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:58 GMT-08:00
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
  double t491;
  double t4026;
  double t4029;
  double t4030;
  double t4038;
  double t4045;
  double t4051;
  double t4052;
  double t4054;
  double t4055;
  double t4056;
  double t4057;
  double t4059;
  double t4062;
  double t4063;
  double t4066;
  double t4068;
  double t4070;
  double t4071;
  double t4074;
  double t4004;
  double t4013;
  double t4041;
  double t4043;
  double t4060;
  double t4061;
  double t4088;
  double t4089;
  double t4090;
  double t4095;
  double t4096;
  double t4097;
  double t4092;
  double t4093;
  t491 = Cos(var1[3]);
  t4026 = Sin(var1[2]);
  t4029 = Cos(var1[2]);
  t4030 = Sin(var1[3]);
  t4038 = Cos(var1[4]);
  t4045 = t491*t4026;
  t4051 = t4029*t4030;
  t4052 = t4045 + t4051;
  t4054 = t4029*t491;
  t4055 = -1.*t4026*t4030;
  t4056 = t4054 + t4055;
  t4057 = Sin(var1[4]);
  t4059 = Cos(var1[5]);
  t4062 = t4038*t4052;
  t4063 = t4056*t4057;
  t4066 = t4062 + t4063;
  t4068 = t4038*t4056;
  t4070 = -1.*t4052*t4057;
  t4071 = t4068 + t4070;
  t4074 = Sin(var1[5]);
  t4004 = -1.*t491;
  t4013 = 1. + t4004;
  t4041 = -1.*t4038;
  t4043 = 1. + t4041;
  t4060 = -1.*t4059;
  t4061 = 1. + t4060;
  t4088 = -1.*t491*t4026;
  t4089 = -1.*t4029*t4030;
  t4090 = t4088 + t4089;
  t4095 = t4038*t4090;
  t4096 = -1.*t4056*t4057;
  t4097 = t4095 + t4096;
  t4092 = t4090*t4057;
  t4093 = t4068 + t4092;
  p_output1[0]=-0.4999*t4013*t4026 + 0.4999*t4029*t4030 - 0.9063*t4043*t4052 + 0.9063*t4056*t4057 - 1.3127*t4061*t4066 + 1.3127*t4071*t4074 + 0.06*(t4059*t4071 - 1.*t4066*t4074) - 1.3127*(t4059*t4066 + t4071*t4074) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t4013*t4029 - 0.4999*t4026*t4030 - 0.9063*t4043*t4056 + 0.9063*t4057*t4090 - 1.3127*t4061*t4093 + 1.3127*t4074*t4097 + 0.06*(-1.*t4074*t4093 + t4059*t4097) - 1.3127*(t4059*t4093 + t4074*t4097) + var1[1];
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

#include "p_LeftSole.hh"

namespace SymFunction
{

void p_LeftSole_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

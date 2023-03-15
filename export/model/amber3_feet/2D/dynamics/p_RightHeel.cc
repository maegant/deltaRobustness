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
  double t3980;
  double t4002;
  double t4005;
  double t4009;
  double t4014;
  double t4026;
  double t4027;
  double t4028;
  double t4030;
  double t4031;
  double t4032;
  double t4033;
  double t4035;
  double t4038;
  double t4041;
  double t4042;
  double t4045;
  double t4046;
  double t4049;
  double t4050;
  double t3987;
  double t3997;
  double t4018;
  double t4019;
  double t4036;
  double t4037;
  double t4064;
  double t4065;
  double t4066;
  double t4071;
  double t4072;
  double t4073;
  double t4068;
  double t4069;
  t3980 = Cos(var1[6]);
  t4002 = Sin(var1[2]);
  t4005 = Cos(var1[2]);
  t4009 = Sin(var1[6]);
  t4014 = Cos(var1[7]);
  t4026 = t3980*t4002;
  t4027 = t4005*t4009;
  t4028 = t4026 + t4027;
  t4030 = t4005*t3980;
  t4031 = -1.*t4002*t4009;
  t4032 = t4030 + t4031;
  t4033 = Sin(var1[7]);
  t4035 = Cos(var1[8]);
  t4038 = t4014*t4028;
  t4041 = t4032*t4033;
  t4042 = t4038 + t4041;
  t4045 = t4014*t4032;
  t4046 = -1.*t4028*t4033;
  t4049 = t4045 + t4046;
  t4050 = Sin(var1[8]);
  t3987 = -1.*t3980;
  t3997 = 1. + t3987;
  t4018 = -1.*t4014;
  t4019 = 1. + t4018;
  t4036 = -1.*t4035;
  t4037 = 1. + t4036;
  t4064 = -1.*t3980*t4002;
  t4065 = -1.*t4005*t4009;
  t4066 = t4064 + t4065;
  t4071 = t4014*t4066;
  t4072 = -1.*t4032*t4033;
  t4073 = t4071 + t4072;
  t4068 = t4066*t4033;
  t4069 = t4045 + t4068;
  p_output1[0]=-0.4999*t3997*t4002 + 0.4999*t4005*t4009 - 0.9063*t4019*t4028 + 0.9063*t4032*t4033 - 1.3127*t4037*t4042 + 1.3127*t4049*t4050 - 0.04*(t4035*t4049 - 1.*t4042*t4050) - 1.3127*(t4035*t4042 + t4049*t4050) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t3997*t4005 - 0.4999*t4002*t4009 - 0.9063*t4019*t4032 + 0.9063*t4033*t4066 - 1.3127*t4037*t4069 + 1.3127*t4050*t4073 - 0.04*(-1.*t4050*t4069 + t4035*t4073) - 1.3127*(t4035*t4069 + t4050*t4073) + var1[1];
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

#include "p_RightHeel.hh"

namespace SymFunction
{

void p_RightHeel_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

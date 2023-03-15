/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:37 GMT-08:00
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
  double t274;
  double t1625;
  double t2291;
  double t2752;
  double t3077;
  double t3343;
  double t3412;
  double t3436;
  double t3638;
  double t3666;
  double t3729;
  double t3739;
  double t3941;
  double t3985;
  double t4031;
  double t4050;
  double t4084;
  double t4086;
  double t4091;
  double t4115;
  double t435;
  double t1270;
  double t3252;
  double t3273;
  double t3953;
  double t3976;
  double t4324;
  double t4344;
  double t4346;
  double t4430;
  double t4438;
  double t4445;
  double t4399;
  double t4400;
  t274 = Cos(var1[3]);
  t1625 = Sin(var1[2]);
  t2291 = Cos(var1[2]);
  t2752 = Sin(var1[3]);
  t3077 = Cos(var1[4]);
  t3343 = t274*t1625;
  t3412 = t2291*t2752;
  t3436 = t3343 + t3412;
  t3638 = t2291*t274;
  t3666 = -1.*t1625*t2752;
  t3729 = t3638 + t3666;
  t3739 = Sin(var1[4]);
  t3941 = Cos(var1[5]);
  t3985 = t3077*t3436;
  t4031 = t3729*t3739;
  t4050 = t3985 + t4031;
  t4084 = t3077*t3729;
  t4086 = -1.*t3436*t3739;
  t4091 = t4084 + t4086;
  t4115 = Sin(var1[5]);
  t435 = -1.*t274;
  t1270 = 1. + t435;
  t3252 = -1.*t3077;
  t3273 = 1. + t3252;
  t3953 = -1.*t3941;
  t3976 = 1. + t3953;
  t4324 = -1.*t274*t1625;
  t4344 = -1.*t2291*t2752;
  t4346 = t4324 + t4344;
  t4430 = t3077*t4346;
  t4438 = -1.*t3729*t3739;
  t4445 = t4430 + t4438;
  t4399 = t4346*t3739;
  t4400 = t4084 + t4399;
  p_output1[0]=-0.4999*t1270*t1625 + 0.4999*t2291*t2752 - 0.9063*t3273*t3436 + 0.9063*t3729*t3739 - 1.3127*t3976*t4050 + 1.3127*t4091*t4115 + 0.16*(t3941*t4091 - 1.*t4050*t4115) - 1.3127*(t3941*t4050 + t4091*t4115) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1270*t2291 - 0.4999*t1625*t2752 - 0.9063*t3273*t3729 + 0.9063*t3739*t4346 - 1.3127*t3976*t4400 + 1.3127*t4115*t4445 + 0.16*(-1.*t4115*t4400 + t3941*t4445) - 1.3127*(t3941*t4400 + t4115*t4445) + var1[1];
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

#include "LeftToe_sphere_center.hh"

namespace SymFunction
{

void LeftToe_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

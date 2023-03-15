/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:46 GMT-08:00
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
  double t78;
  double t1256;
  double t1677;
  double t2045;
  double t2436;
  double t3068;
  double t3259;
  double t3421;
  double t3500;
  double t3692;
  double t3782;
  double t3920;
  double t1116;
  double t1133;
  double t2855;
  double t3000;
  double t5119;
  double t5150;
  double t5212;
  t78 = Cos(var1[5]);
  t1256 = Sin(var1[2]);
  t1677 = Cos(var1[2]);
  t2045 = Sin(var1[5]);
  t2436 = Cos(var1[6]);
  t3068 = t78*t1256;
  t3259 = t1677*t2045;
  t3421 = t3068 + t3259;
  t3500 = t1677*t78;
  t3692 = -1.*t1256*t2045;
  t3782 = t3500 + t3692;
  t3920 = Sin(var1[6]);
  t1116 = -1.*t78;
  t1133 = 1. + t1116;
  t2855 = -1.*t2436;
  t3000 = 1. + t2855;
  t5119 = -1.*t78*t1256;
  t5150 = -1.*t1677*t2045;
  t5212 = t5119 + t5150;
  p_output1[0]=0.4999*t1133*t1256 - 0.4999*t1677*t2045 + 0.9063*t3000*t3421 - 0.9063*t3782*t3920 + 1.373025*(t2436*t3421 + t3782*t3920);
  p_output1[1]=0.4999*t1133*t1677 + 0.4999*t1256*t2045 + 0.9063*t3000*t3782 - 0.9063*t3920*t5212 + 1.373025*(t2436*t3782 + t3920*t5212);
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "z_rSS.hh"

namespace SymFunction
{

void z_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

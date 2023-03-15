/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:01 GMT-08:00
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
  double t223;
  double t2324;
  double t3828;
  double t3939;
  double t6109;
  double t6462;
  double t6655;
  double t6693;
  double t6797;
  double t6876;
  double t6883;
  double t6886;
  double t796;
  double t1966;
  double t6243;
  double t6439;
  double t7393;
  double t7402;
  double t7423;
  t223 = Cos(var1[3]);
  t2324 = Sin(var1[2]);
  t3828 = Cos(var1[2]);
  t3939 = Sin(var1[3]);
  t6109 = Cos(var1[4]);
  t6462 = t223*t2324;
  t6655 = t3828*t3939;
  t6693 = t6462 + t6655;
  t6797 = t3828*t223;
  t6876 = -1.*t2324*t3939;
  t6883 = t6797 + t6876;
  t6886 = Sin(var1[4]);
  t796 = -1.*t223;
  t1966 = 1. + t796;
  t6243 = -1.*t6109;
  t6439 = 1. + t6243;
  t7393 = -1.*t223*t2324;
  t7402 = -1.*t3828*t3939;
  t7423 = t7393 + t7402;
  p_output1[0]=-0.4999*t1966*t2324 + 0.4999*t3828*t3939 - 0.9063*t6439*t6693 + 0.9063*t6883*t6886 - 1.373025*(t6109*t6693 + t6883*t6886) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1966*t3828 - 0.4999*t2324*t3939 - 0.9063*t6439*t6883 + 0.9063*t6886*t7423 - 1.373025*(t6109*t6883 + t6886*t7423) + var1[1];
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

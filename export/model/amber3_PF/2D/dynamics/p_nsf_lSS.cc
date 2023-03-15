/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:53 GMT-08:00
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
  double t1814;
  double t3458;
  double t4422;
  double t4608;
  double t5205;
  double t5389;
  double t5399;
  double t5727;
  double t5847;
  double t5866;
  double t5896;
  double t5966;
  double t1836;
  double t2910;
  double t5212;
  double t5241;
  double t6748;
  double t6794;
  double t6797;
  t1814 = Cos(var1[5]);
  t3458 = Sin(var1[2]);
  t4422 = Cos(var1[2]);
  t4608 = Sin(var1[5]);
  t5205 = Cos(var1[6]);
  t5389 = t1814*t3458;
  t5399 = t4422*t4608;
  t5727 = t5389 + t5399;
  t5847 = t4422*t1814;
  t5866 = -1.*t3458*t4608;
  t5896 = t5847 + t5866;
  t5966 = Sin(var1[6]);
  t1836 = -1.*t1814;
  t2910 = 1. + t1836;
  t5212 = -1.*t5205;
  t5241 = 1. + t5212;
  t6748 = -1.*t1814*t3458;
  t6794 = -1.*t4422*t4608;
  t6797 = t6748 + t6794;
  p_output1[0]=-0.4999*t2910*t3458 + 0.4999*t4422*t4608 - 0.9063*t5241*t5727 + 0.9063*t5896*t5966 - 1.373025*(t5205*t5727 + t5896*t5966) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t2910*t4422 - 0.4999*t3458*t4608 - 0.9063*t5241*t5896 + 0.9063*t5966*t6797 - 1.373025*(t5205*t5896 + t5966*t6797) + var1[1];
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

#include "p_nsf_lSS.hh"

namespace SymFunction
{

void p_nsf_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

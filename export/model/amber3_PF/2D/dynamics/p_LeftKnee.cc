/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:57 GMT-08:00
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
  double t100;
  double t4718;
  double t5389;
  double t5399;
  double t5737;
  double t5966;
  double t5991;
  double t6109;
  double t6390;
  double t6436;
  double t6439;
  double t6462;
  double t1457;
  double t4254;
  double t5847;
  double t5896;
  double t6937;
  double t7025;
  double t7109;
  t100 = Cos(var1[3]);
  t4718 = Sin(var1[2]);
  t5389 = Cos(var1[2]);
  t5399 = Sin(var1[3]);
  t5737 = Cos(var1[4]);
  t5966 = t100*t4718;
  t5991 = t5389*t5399;
  t6109 = t5966 + t5991;
  t6390 = t5389*t100;
  t6436 = -1.*t4718*t5399;
  t6439 = t6390 + t6436;
  t6462 = Sin(var1[4]);
  t1457 = -1.*t100;
  t4254 = 1. + t1457;
  t5847 = -1.*t5737;
  t5896 = 1. + t5847;
  t6937 = -1.*t100*t4718;
  t7025 = -1.*t5389*t5399;
  t7109 = t6937 + t7025;
  p_output1[0]=-0.4999*t4254*t4718 + 0.4999*t5389*t5399 - 0.9063*t5896*t6109 + 0.9063*t6439*t6462 - 0.9063*(t5737*t6109 + t6439*t6462) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t4254*t5389 - 0.4999*t4718*t5399 - 0.9063*t5896*t6439 + 0.9063*t6462*t7109 - 0.9063*(t5737*t6439 + t6462*t7109) + var1[1];
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

#include "p_LeftKnee.hh"

namespace SymFunction
{

void p_LeftKnee_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

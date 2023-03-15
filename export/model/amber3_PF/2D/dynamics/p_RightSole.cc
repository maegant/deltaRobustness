/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:00 GMT-08:00
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
  double t1838;
  double t3179;
  double t3842;
  double t4250;
  double t4503;
  double t6109;
  double t6243;
  double t6439;
  double t6655;
  double t6683;
  double t6693;
  double t6699;
  double t2628;
  double t2763;
  double t5805;
  double t5966;
  double t7177;
  double t7210;
  double t7326;
  t1838 = Cos(var1[5]);
  t3179 = Sin(var1[2]);
  t3842 = Cos(var1[2]);
  t4250 = Sin(var1[5]);
  t4503 = Cos(var1[6]);
  t6109 = t1838*t3179;
  t6243 = t3842*t4250;
  t6439 = t6109 + t6243;
  t6655 = t3842*t1838;
  t6683 = -1.*t3179*t4250;
  t6693 = t6655 + t6683;
  t6699 = Sin(var1[6]);
  t2628 = -1.*t1838;
  t2763 = 1. + t2628;
  t5805 = -1.*t4503;
  t5966 = 1. + t5805;
  t7177 = -1.*t1838*t3179;
  t7210 = -1.*t3842*t4250;
  t7326 = t7177 + t7210;
  p_output1[0]=-0.4999*t2763*t3179 + 0.4999*t3842*t4250 - 0.9063*t5966*t6439 + 0.9063*t6693*t6699 - 1.373025*(t4503*t6439 + t6693*t6699) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t2763*t3842 - 0.4999*t3179*t4250 - 0.9063*t5966*t6693 + 0.9063*t6699*t7326 - 1.373025*(t4503*t6693 + t6699*t7326) + var1[1];
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

#include "p_RightSole.hh"

namespace SymFunction
{

void p_RightSole_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

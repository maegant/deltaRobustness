/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:59 GMT-08:00
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
  double t4538;
  double t5178;
  double t5991;
  double t6034;
  double t6150;
  double t6439;
  double t6462;
  double t6655;
  double t6699;
  double t6773;
  double t6797;
  double t6876;
  double t4983;
  double t5156;
  double t6200;
  double t6390;
  double t7253;
  double t7289;
  double t7326;
  t4538 = Cos(var1[5]);
  t5178 = Sin(var1[2]);
  t5991 = Cos(var1[2]);
  t6034 = Sin(var1[5]);
  t6150 = Cos(var1[6]);
  t6439 = t4538*t5178;
  t6462 = t5991*t6034;
  t6655 = t6439 + t6462;
  t6699 = t5991*t4538;
  t6773 = -1.*t5178*t6034;
  t6797 = t6699 + t6773;
  t6876 = Sin(var1[6]);
  t4983 = -1.*t4538;
  t5156 = 1. + t4983;
  t6200 = -1.*t6150;
  t6390 = 1. + t6200;
  t7253 = -1.*t4538*t5178;
  t7289 = -1.*t5991*t6034;
  t7326 = t7253 + t7289;
  p_output1[0]=-0.4999*t5156*t5178 + 0.4999*t5991*t6034 - 0.9063*t6390*t6655 + 0.9063*t6797*t6876 - 0.9063*(t6150*t6655 + t6797*t6876) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t5156*t5991 - 0.4999*t5178*t6034 - 0.9063*t6390*t6797 + 0.9063*t6876*t7326 - 0.9063*(t6150*t6797 + t6876*t7326) + var1[1];
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

#include "p_RightKnee.hh"

namespace SymFunction
{

void p_RightKnee_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

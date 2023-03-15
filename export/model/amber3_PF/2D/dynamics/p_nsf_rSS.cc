/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:52 GMT-08:00
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
  double t31;
  double t2076;
  double t2671;
  double t2689;
  double t3188;
  double t3979;
  double t4164;
  double t4254;
  double t4645;
  double t4672;
  double t4983;
  double t5212;
  double t921;
  double t1851;
  double t3239;
  double t3555;
  double t6106;
  double t6291;
  double t6390;
  t31 = Cos(var1[3]);
  t2076 = Sin(var1[2]);
  t2671 = Cos(var1[2]);
  t2689 = Sin(var1[3]);
  t3188 = Cos(var1[4]);
  t3979 = t31*t2076;
  t4164 = t2671*t2689;
  t4254 = t3979 + t4164;
  t4645 = t2671*t31;
  t4672 = -1.*t2076*t2689;
  t4983 = t4645 + t4672;
  t5212 = Sin(var1[4]);
  t921 = -1.*t31;
  t1851 = 1. + t921;
  t3239 = -1.*t3188;
  t3555 = 1. + t3239;
  t6106 = -1.*t31*t2076;
  t6291 = -1.*t2671*t2689;
  t6390 = t6106 + t6291;
  p_output1[0]=-0.4999*t1851*t2076 + 0.4999*t2671*t2689 - 0.9063*t3555*t4254 + 0.9063*t4983*t5212 - 1.373025*(t3188*t4254 + t4983*t5212) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1851*t2671 - 0.4999*t2076*t2689 - 0.9063*t3555*t4983 + 0.9063*t5212*t6390 - 1.373025*(t3188*t4983 + t5212*t6390) + var1[1];
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

#include "p_nsf_rSS.hh"

namespace SymFunction
{

void p_nsf_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

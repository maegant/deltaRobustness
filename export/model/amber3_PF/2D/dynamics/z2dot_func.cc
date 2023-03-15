/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:50 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t4261;
  double t1661;
  double t2126;
  double t4732;
  double t1014;
  double t3782;
  double t4879;
  double t4983;
  double t5252;
  double t5338;
  double t5352;
  double t5381;
  double t5501;
  double t6209;
  double t6291;
  double t6390;
  double t5966;
  double t6056;
  double t6095;
  double t6106;
  double t6421;
  double t6435;
  double t6436;
  double t6439;
  double t6462;
  t4261 = Cos(var1[2]);
  t1661 = Cos(var1[5]);
  t2126 = Sin(var1[2]);
  t4732 = Sin(var1[5]);
  t1014 = Cos(var1[6]);
  t3782 = -1.*t1661*t2126;
  t4879 = -1.*t4261*t4732;
  t4983 = t3782 + t4879;
  t5252 = t4261*t1661;
  t5338 = -1.*t2126*t4732;
  t5352 = t5252 + t5338;
  t5381 = Sin(var1[6]);
  t5501 = t1014*t4983;
  t6209 = -1.*t4261*t1661;
  t6291 = t2126*t4732;
  t6390 = t6209 + t6291;
  t5966 = -0.4999*t4983;
  t6056 = -1.*t1014;
  t6095 = 1. + t6056;
  t6106 = 0.9063*t6095*t4983;
  t6421 = -0.9063*t6390*t5381;
  t6435 = t6390*t5381;
  t6436 = t5501 + t6435;
  t6439 = 1.373025*t6436;
  t6462 = t5966 + t6106 + t6421 + t6439;
  p_output1[0]=t6462*var2[2] + t6462*var2[5] + (-0.9063*t1014*t4983 + 0.9063*t5352*t5381 + 1.373025*(-1.*t5352*t5381 + t5501))*var2[6];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "z2dot_func.hh"

namespace SymFunction
{

void z2dot_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:27 GMT-08:00
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
  double t64;
  double t284;
  double t979;
  double t1280;
  double t1463;
  double t1723;
  double t1735;
  double t1913;
  double t2026;
  double t2065;
  double t2218;
  double t2224;
  double t1412;
  double t1487;
  double t1527;
  double t1921;
  double t2226;
  double t2400;
  double t2422;
  double t2540;
  double t2548;
  double t2834;
  double t2845;
  double t2914;
  double t350;
  double t528;
  double t3230;
  double t3232;
  double t3307;
  double t3011;
  double t3025;
  double t3327;
  double t3329;
  double t3345;
  double t3367;
  double t3397;
  t64 = Cos(var1[2]);
  t284 = Cos(var1[5]);
  t979 = Sin(var1[2]);
  t1280 = Sin(var1[5]);
  t1463 = Cos(var1[6]);
  t1723 = t64*t284;
  t1735 = -1.*t979*t1280;
  t1913 = t1723 + t1735;
  t2026 = -1.*t284*t979;
  t2065 = -1.*t64*t1280;
  t2218 = t2026 + t2065;
  t2224 = Sin(var1[6]);
  t1412 = -0.4999*t979*t1280;
  t1487 = -1.*t1463;
  t1527 = 1. + t1487;
  t1921 = -0.9063*t1527*t1913;
  t2226 = 0.9063*t2218*t2224;
  t2400 = t1463*t1913;
  t2422 = t2218*t2224;
  t2540 = t2400 + t2422;
  t2548 = -1.373025*t2540;
  t2834 = t284*t979;
  t2845 = t64*t1280;
  t2914 = t2834 + t2845;
  t350 = -1.*t284;
  t528 = 1. + t350;
  t3230 = -1.*t64*t284;
  t3232 = t979*t1280;
  t3307 = t3230 + t3232;
  t3011 = -0.4999*t64*t1280;
  t3025 = -0.9063*t1527*t2218;
  t3327 = 0.9063*t3307*t2224;
  t3329 = t1463*t2218;
  t3345 = t3307*t2224;
  t3367 = t3329 + t3345;
  t3397 = -1.373025*t3367;
  p_output1[0]=1.;
  p_output1[1]=t1412 + t1921 + t2226 + t2548 - 0.4999*t528*t64;
  p_output1[2]=t1412 + t1921 + t2226 + t2548 + 0.4999*t284*t64;
  p_output1[3]=0.9063*t1463*t1913 - 0.9063*t2224*t2914 - 1.373025*(t2400 - 1.*t2224*t2914);
  p_output1[4]=-1.;
  p_output1[5]=1.;
  p_output1[6]=t3011 + t3025 + t3327 + t3397 + 0.4999*t528*t979;
  p_output1[7]=t3011 + t3025 + t3327 + t3397 - 0.4999*t284*t979;
  p_output1[8]=0.9063*t1463*t2218 - 0.9063*t1913*t2224 - 1.373025*(-1.*t1913*t2224 + t3329);
  p_output1[9]=-1.;
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightSole_RightSS.hh"

namespace RightSS
{

void J_h_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

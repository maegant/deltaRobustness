/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:49 GMT-08:00
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
  double t1336;
  double t743;
  double t962;
  double t1451;
  double t575;
  double t1211;
  double t1594;
  double t1615;
  double t1754;
  double t1843;
  double t1856;
  double t1927;
  double t1988;
  double t2619;
  double t2638;
  double t2639;
  double t2509;
  double t2511;
  double t2562;
  double t2597;
  double t2659;
  double t2669;
  double t2671;
  double t2674;
  t1336 = Cos(var1[2]);
  t743 = Cos(var1[3]);
  t962 = Sin(var1[2]);
  t1451 = Sin(var1[3]);
  t575 = Cos(var1[4]);
  t1211 = -1.*t743*t962;
  t1594 = -1.*t1336*t1451;
  t1615 = t1211 + t1594;
  t1754 = t1336*t743;
  t1843 = -1.*t962*t1451;
  t1856 = t1754 + t1843;
  t1927 = Sin(var1[4]);
  t1988 = t575*t1615;
  t2619 = -1.*t1336*t743;
  t2638 = t962*t1451;
  t2639 = t2619 + t2638;
  t2509 = -0.4999*t1336*t1451;
  t2511 = -1.*t575;
  t2562 = 1. + t2511;
  t2597 = -0.9063*t2562*t1615;
  t2659 = 0.9063*t2639*t1927;
  t2669 = t2639*t1927;
  t2671 = t1988 + t2669;
  t2674 = -1.373025*t2671;
  p_output1[0]=var2[1] + (t2509 + t2597 + t2659 + t2674 + 0.4999*(1. - 1.*t743)*t962)*var2[2] + (t2509 + t2597 + t2659 + t2674 - 0.4999*t743*t962)*var2[3] + (-0.9063*t1856*t1927 - 1.373025*(-1.*t1856*t1927 + t1988) + 0.9063*t1615*t575)*var2[4];
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

#include "nsf_velZ.hh"

namespace RightSS
{

void nsf_velZ_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

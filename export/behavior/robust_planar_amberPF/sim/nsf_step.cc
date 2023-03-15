/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:11 GMT-08:00
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
  double t3715;
  double t2020;
  double t4997;
  double t5050;
  double t5104;
  double t6025;
  double t6891;
  double t6901;
  double t7433;
  double t7520;
  double t7534;
  double t7549;
  double t4673;
  double t7680;
  double t7682;
  double t7709;
  double t7711;
  double t7715;
  double t7729;
  double t7731;
  double t7732;
  double t7735;
  double t3087;
  double t3292;
  double t4684;
  double t4688;
  double t5209;
  double t5263;
  double t7787;
  double t7789;
  double t7795;
  double t7697;
  double t7702;
  double t7808;
  double t7809;
  double t7810;
  t3715 = Sin(var1[2]);
  t2020 = Cos(var1[3]);
  t4997 = Cos(var1[2]);
  t5050 = Sin(var1[3]);
  t5104 = Cos(var1[4]);
  t6025 = t2020*t3715;
  t6891 = t4997*t5050;
  t6901 = t6025 + t6891;
  t7433 = t4997*t2020;
  t7520 = -1.*t3715*t5050;
  t7534 = t7433 + t7520;
  t7549 = Sin(var1[4]);
  t4673 = Cos(var1[5]);
  t7680 = Sin(var1[5]);
  t7682 = Cos(var1[6]);
  t7709 = t4673*t3715;
  t7711 = t4997*t7680;
  t7715 = t7709 + t7711;
  t7729 = t4997*t4673;
  t7731 = -1.*t3715*t7680;
  t7732 = t7729 + t7731;
  t7735 = Sin(var1[6]);
  t3087 = -1.*t2020;
  t3292 = 1. + t3087;
  t4684 = -1.*t4673;
  t4688 = 1. + t4684;
  t5209 = -1.*t5104;
  t5263 = 1. + t5209;
  t7787 = -1.*t2020*t3715;
  t7789 = -1.*t4997*t5050;
  t7795 = t7787 + t7789;
  t7697 = -1.*t7682;
  t7702 = 1. + t7697;
  t7808 = -1.*t4673*t3715;
  t7809 = -1.*t4997*t7680;
  t7810 = t7808 + t7809;
  p_output1[0]=-0.4999*t3292*t4997 + 0.4999*t4688*t4997 - 0.4999*t3715*t5050 - 0.9063*t5263*t7534 + 0.4999*t3715*t7680 + 0.9063*t7702*t7732 + 0.9063*t7549*t7795 - 1.373025*(t5104*t7534 + t7549*t7795) - 0.9063*t7735*t7810 + 1.373025*(t7682*t7732 + t7735*t7810) - (1.*var2[0])/(1. + Power(2.71828182845905,-50.*(-0.4999*t3292*t3715 + 0.4999*t3715*t4688 + 0.4999*t4997*t5050 - 0.9063*t5263*t6901 + 0.9063*t7534*t7549 - 1.373025*(t5104*t6901 + t7534*t7549) - 0.4999*t4997*t7680 + 0.9063*t7702*t7715 - 0.9063*t7732*t7735 + 1.373025*(t7682*t7715 + t7732*t7735) - 1.*var2[1])));
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
    ( !(mrows == 1 && ncols == 2) && 
      !(mrows == 2 && ncols == 1))) 
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

#include "nsf_step.hh"

namespace SymFunction
{

void nsf_step_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:47 GMT-08:00
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
  double t3800;
  double t3809;
  double t3799;
  double t3813;
  double t3786;
  double t3823;
  double t3830;
  double t3831;
  double t3808;
  double t3817;
  double t3818;
  double t3832;
  double t3777;
  double t3822;
  double t3833;
  double t3834;
  double t3835;
  double t3836;
  double t3837;
  double t3838;
  double t3839;
  double t3840;
  double t3841;
  double t3855;
  double t3856;
  double t3857;
  t3800 = Cos(var1[6]);
  t3809 = Sin(var1[2]);
  t3799 = Cos(var1[2]);
  t3813 = Sin(var1[6]);
  t3786 = Cos(var1[7]);
  t3823 = -1.*t3800*t3809;
  t3830 = -1.*t3799*t3813;
  t3831 = t3823 + t3830;
  t3808 = t3799*t3800;
  t3817 = -1.*t3809*t3813;
  t3818 = t3808 + t3817;
  t3832 = Sin(var1[7]);
  t3777 = Cos(var1[8]);
  t3822 = t3786*t3818;
  t3833 = t3831*t3832;
  t3834 = t3822 + t3833;
  t3835 = t3777*t3834;
  t3836 = t3786*t3831;
  t3837 = -1.*t3818*t3832;
  t3838 = t3836 + t3837;
  t3839 = Sin(var1[8]);
  t3840 = t3838*t3839;
  t3841 = t3835 + t3840;
  t3855 = t3800*t3809;
  t3856 = t3799*t3813;
  t3857 = t3855 + t3856;
  p_output1[0]=ArcTan(t3841,0);
  p_output1[1]=ArcTan(t3841,(-1.*(t3777*t3838 - 1.*t3834*t3839)*t3841)/Sqrt(Power(t3841,2)));
  p_output1[2]=ArcTan(-1.*t3839*(t3818*t3832 + t3786*t3857) + t3777*(t3822 - 1.*t3832*t3857),0.);
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
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

#include "euler_sf_rSS.hh"

namespace SymFunction
{

void euler_sf_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

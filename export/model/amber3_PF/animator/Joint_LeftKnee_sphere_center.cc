/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:13 GMT-08:00
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
  double t2643;
  double t2652;
  double t2656;
  double t2657;
  double t2665;
  double t2679;
  double t2681;
  double t2693;
  double t2696;
  double t2698;
  double t2700;
  double t2704;
  double t2647;
  double t2649;
  double t2666;
  double t2672;
  double t2721;
  double t2727;
  double t2728;
  t2643 = Cos(var1[3]);
  t2652 = Sin(var1[2]);
  t2656 = Cos(var1[2]);
  t2657 = Sin(var1[3]);
  t2665 = Cos(var1[4]);
  t2679 = t2643*t2652;
  t2681 = t2656*t2657;
  t2693 = t2679 + t2681;
  t2696 = t2656*t2643;
  t2698 = -1.*t2652*t2657;
  t2700 = t2696 + t2698;
  t2704 = Sin(var1[4]);
  t2647 = -1.*t2643;
  t2649 = 1. + t2647;
  t2666 = -1.*t2665;
  t2672 = 1. + t2666;
  t2721 = -1.*t2643*t2652;
  t2727 = -1.*t2656*t2657;
  t2728 = t2721 + t2727;
  p_output1[0]=-0.4999*t2649*t2652 + 0.4999*t2656*t2657 - 0.9063*t2672*t2693 + 0.9063*t2700*t2704 - 0.9063*(t2665*t2693 + t2700*t2704) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t2649*t2656 - 0.4999*t2652*t2657 - 0.9063*t2672*t2700 + 0.9063*t2704*t2728 - 0.9063*(t2665*t2700 + t2704*t2728) + var1[1];
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

#include "Joint_LeftKnee_sphere_center.hh"

namespace SymFunction
{

void Joint_LeftKnee_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

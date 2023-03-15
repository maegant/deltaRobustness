/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:17 GMT-08:00
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
  double t2707;
  double t2714;
  double t2720;
  double t2728;
  double t2731;
  double t2734;
  double t2735;
  double t2736;
  double t2738;
  double t2739;
  double t2740;
  double t2741;
  double t2712;
  double t2713;
  double t2732;
  double t2733;
  double t2758;
  double t2759;
  double t2765;
  t2707 = Cos(var1[5]);
  t2714 = Sin(var1[2]);
  t2720 = Cos(var1[2]);
  t2728 = Sin(var1[5]);
  t2731 = Cos(var1[6]);
  t2734 = t2707*t2714;
  t2735 = t2720*t2728;
  t2736 = t2734 + t2735;
  t2738 = t2720*t2707;
  t2739 = -1.*t2714*t2728;
  t2740 = t2738 + t2739;
  t2741 = Sin(var1[6]);
  t2712 = -1.*t2707;
  t2713 = 1. + t2712;
  t2732 = -1.*t2731;
  t2733 = 1. + t2732;
  t2758 = -1.*t2707*t2714;
  t2759 = -1.*t2720*t2728;
  t2765 = t2758 + t2759;
  p_output1[0]=-0.4999*t2713*t2714 + 0.4999*t2720*t2728 - 0.9063*t2733*t2736 + 0.9063*t2740*t2741 - 0.9063*(t2731*t2736 + t2740*t2741) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t2713*t2720 - 0.4999*t2714*t2728 - 0.9063*t2733*t2740 + 0.9063*t2741*t2765 - 0.9063*(t2731*t2740 + t2741*t2765) + var1[1];
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

#include "Joint_RightKnee_sphere_center.hh"

namespace SymFunction
{

void Joint_RightKnee_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

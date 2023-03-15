/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:19 GMT-08:00
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
  double t2717;
  double t2735;
  double t2737;
  double t2738;
  double t2741;
  double t2745;
  double t2746;
  double t2752;
  double t2754;
  double t2756;
  double t2757;
  double t2765;
  double t2730;
  double t2734;
  double t2742;
  double t2744;
  double t2776;
  double t2777;
  double t2778;
  t2717 = Cos(var1[3]);
  t2735 = Sin(var1[2]);
  t2737 = Cos(var1[2]);
  t2738 = Sin(var1[3]);
  t2741 = Cos(var1[4]);
  t2745 = t2717*t2735;
  t2746 = t2737*t2738;
  t2752 = t2745 + t2746;
  t2754 = t2737*t2717;
  t2756 = -1.*t2735*t2738;
  t2757 = t2754 + t2756;
  t2765 = Sin(var1[4]);
  t2730 = -1.*t2717;
  t2734 = 1. + t2730;
  t2742 = -1.*t2741;
  t2744 = 1. + t2742;
  t2776 = -1.*t2717*t2735;
  t2777 = -1.*t2737*t2738;
  t2778 = t2776 + t2777;
  p_output1[0]=-0.4999*t2734*t2735 + 0.4999*t2737*t2738 - 0.9063*t2744*t2752 + 0.9063*t2757*t2765 - 1.373025*(t2741*t2752 + t2757*t2765) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t2734*t2737 - 0.4999*t2735*t2738 - 0.9063*t2744*t2757 + 0.9063*t2765*t2778 - 1.373025*(t2741*t2757 + t2765*t2778) + var1[1];
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

#include "LeftSole_sphere_center.hh"

namespace SymFunction
{

void LeftSole_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

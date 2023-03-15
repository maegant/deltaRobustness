/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:28 GMT-08:00
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
  double t368;
  double t1582;
  double t1773;
  double t1830;
  double t1926;
  double t2060;
  double t2077;
  double t2085;
  double t2110;
  double t2111;
  double t2117;
  double t2170;
  double t2210;
  double t2240;
  double t2244;
  double t2334;
  double t2354;
  double t2355;
  double t2391;
  double t2404;
  double t1525;
  double t1541;
  double t2030;
  double t2051;
  double t2226;
  double t2231;
  double t2616;
  double t2629;
  double t2655;
  double t2682;
  double t2720;
  double t2752;
  double t2811;
  double t2832;
  t368 = Cos(var1[3]);
  t1582 = Sin(var1[2]);
  t1773 = Cos(var1[2]);
  t1830 = Sin(var1[3]);
  t1926 = Cos(var1[4]);
  t2060 = t368*t1582;
  t2077 = t1773*t1830;
  t2085 = t2060 + t2077;
  t2110 = t1773*t368;
  t2111 = -1.*t1582*t1830;
  t2117 = t2110 + t2111;
  t2170 = Sin(var1[4]);
  t2210 = Cos(var1[5]);
  t2240 = t1926*t2085;
  t2244 = t2117*t2170;
  t2334 = t2240 + t2244;
  t2354 = t1926*t2117;
  t2355 = -1.*t2085*t2170;
  t2391 = t2354 + t2355;
  t2404 = Sin(var1[5]);
  t1525 = -1.*t368;
  t1541 = 1. + t1525;
  t2030 = -1.*t1926;
  t2051 = 1. + t2030;
  t2226 = -1.*t2210;
  t2231 = 1. + t2226;
  t2616 = -1.*t368*t1582;
  t2629 = -1.*t1773*t1830;
  t2655 = t2616 + t2629;
  t2682 = t2655*t2170;
  t2720 = t2354 + t2682;
  t2752 = t1926*t2655;
  t2811 = -1.*t2117*t2170;
  t2832 = t2752 + t2811;
  p_output1[0]=-0.4999*t1541*t1582 + 0.4999*t1773*t1830 - 0.9063*t2051*t2085 + 0.9063*t2117*t2170 - 1.3127*t2231*t2334 + 1.3127*t2391*t2404 - 1.3127*(t2210*t2334 + t2391*t2404) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1541*t1773 - 0.4999*t1582*t1830 - 0.9063*t2051*t2117 + 0.9063*t2170*t2655 - 1.3127*t2231*t2720 + 1.3127*t2404*t2832 - 1.3127*(t2210*t2720 + t2404*t2832) + var1[1];
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

#include "Joint_LeftAnkle_sphere_center.hh"

namespace SymFunction
{

void Joint_LeftAnkle_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

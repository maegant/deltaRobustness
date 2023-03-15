/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:49 GMT-08:00
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
  double t196;
  double t214;
  double t220;
  double t222;
  double t225;
  double t229;
  double t230;
  double t231;
  double t233;
  double t234;
  double t235;
  double t237;
  double t239;
  double t242;
  double t243;
  double t244;
  double t246;
  double t249;
  double t251;
  double t252;
  double t197;
  double t208;
  double t226;
  double t227;
  double t240;
  double t241;
  double t268;
  double t269;
  double t270;
  double t275;
  double t276;
  double t277;
  double t272;
  double t273;
  t196 = Cos(var1[6]);
  t214 = Sin(var1[2]);
  t220 = Cos(var1[2]);
  t222 = Sin(var1[6]);
  t225 = Cos(var1[7]);
  t229 = t196*t214;
  t230 = t220*t222;
  t231 = t229 + t230;
  t233 = t220*t196;
  t234 = -1.*t214*t222;
  t235 = t233 + t234;
  t237 = Sin(var1[7]);
  t239 = Cos(var1[8]);
  t242 = t225*t231;
  t243 = t235*t237;
  t244 = t242 + t243;
  t246 = t225*t235;
  t249 = -1.*t231*t237;
  t251 = t246 + t249;
  t252 = Sin(var1[8]);
  t197 = -1.*t196;
  t208 = 1. + t197;
  t226 = -1.*t225;
  t227 = 1. + t226;
  t240 = -1.*t239;
  t241 = 1. + t240;
  t268 = -1.*t196*t214;
  t269 = -1.*t220*t222;
  t270 = t268 + t269;
  t275 = t225*t270;
  t276 = -1.*t235*t237;
  t277 = t275 + t276;
  t272 = t270*t237;
  t273 = t246 + t272;
  p_output1[0]=-0.4999*t208*t214 + 0.4999*t220*t222 - 0.9063*t227*t231 + 0.9063*t235*t237 - 1.3127*t241*t244 + 1.3127*t251*t252 + 0.06*(t239*t251 - 1.*t244*t252) - 1.3127*(t239*t244 + t251*t252) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t208*t220 - 0.4999*t214*t222 - 0.9063*t227*t235 + 0.9063*t237*t270 - 1.3127*t241*t273 + 1.3127*t252*t277 + 0.06*(-1.*t252*t273 + t239*t277) - 1.3127*(t239*t273 + t252*t277) + var1[1];
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

#include "p_sf_rSS.hh"

namespace SymFunction
{

void p_sf_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

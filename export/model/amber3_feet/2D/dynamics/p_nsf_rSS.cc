/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:50 GMT-08:00
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
  double t217;
  double t230;
  double t233;
  double t238;
  double t243;
  double t253;
  double t254;
  double t256;
  double t258;
  double t259;
  double t260;
  double t261;
  double t263;
  double t267;
  double t270;
  double t271;
  double t274;
  double t275;
  double t278;
  double t279;
  double t224;
  double t229;
  double t245;
  double t246;
  double t264;
  double t266;
  double t293;
  double t294;
  double t295;
  double t300;
  double t301;
  double t302;
  double t297;
  double t298;
  t217 = Cos(var1[3]);
  t230 = Sin(var1[2]);
  t233 = Cos(var1[2]);
  t238 = Sin(var1[3]);
  t243 = Cos(var1[4]);
  t253 = t217*t230;
  t254 = t233*t238;
  t256 = t253 + t254;
  t258 = t233*t217;
  t259 = -1.*t230*t238;
  t260 = t258 + t259;
  t261 = Sin(var1[4]);
  t263 = Cos(var1[5]);
  t267 = t243*t256;
  t270 = t260*t261;
  t271 = t267 + t270;
  t274 = t243*t260;
  t275 = -1.*t256*t261;
  t278 = t274 + t275;
  t279 = Sin(var1[5]);
  t224 = -1.*t217;
  t229 = 1. + t224;
  t245 = -1.*t243;
  t246 = 1. + t245;
  t264 = -1.*t263;
  t266 = 1. + t264;
  t293 = -1.*t217*t230;
  t294 = -1.*t233*t238;
  t295 = t293 + t294;
  t300 = t243*t295;
  t301 = -1.*t260*t261;
  t302 = t300 + t301;
  t297 = t295*t261;
  t298 = t274 + t297;
  p_output1[0]=-0.4999*t229*t230 + 0.4999*t233*t238 - 0.9063*t246*t256 + 0.9063*t260*t261 - 1.3127*t266*t271 + 1.3127*t278*t279 + 0.06*(t263*t278 - 1.*t271*t279) - 1.3127*(t263*t271 + t278*t279) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t229*t233 - 0.4999*t230*t238 - 0.9063*t246*t260 + 0.9063*t261*t295 - 1.3127*t266*t298 + 1.3127*t279*t302 + 0.06*(-1.*t279*t298 + t263*t302) - 1.3127*(t263*t298 + t279*t302) + var1[1];
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

#include "p_nsf_rSS.hh"

namespace SymFunction
{

void p_nsf_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

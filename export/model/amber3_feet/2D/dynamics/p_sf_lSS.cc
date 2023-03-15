/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:51 GMT-08:00
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
  double t232;
  double t254;
  double t258;
  double t262;
  double t270;
  double t280;
  double t281;
  double t282;
  double t284;
  double t285;
  double t286;
  double t287;
  double t289;
  double t292;
  double t295;
  double t296;
  double t299;
  double t300;
  double t303;
  double t304;
  double t242;
  double t253;
  double t272;
  double t274;
  double t290;
  double t291;
  double t318;
  double t319;
  double t320;
  double t325;
  double t326;
  double t327;
  double t322;
  double t323;
  t232 = Cos(var1[3]);
  t254 = Sin(var1[2]);
  t258 = Cos(var1[2]);
  t262 = Sin(var1[3]);
  t270 = Cos(var1[4]);
  t280 = t232*t254;
  t281 = t258*t262;
  t282 = t280 + t281;
  t284 = t258*t232;
  t285 = -1.*t254*t262;
  t286 = t284 + t285;
  t287 = Sin(var1[4]);
  t289 = Cos(var1[5]);
  t292 = t270*t282;
  t295 = t286*t287;
  t296 = t292 + t295;
  t299 = t270*t286;
  t300 = -1.*t282*t287;
  t303 = t299 + t300;
  t304 = Sin(var1[5]);
  t242 = -1.*t232;
  t253 = 1. + t242;
  t272 = -1.*t270;
  t274 = 1. + t272;
  t290 = -1.*t289;
  t291 = 1. + t290;
  t318 = -1.*t232*t254;
  t319 = -1.*t258*t262;
  t320 = t318 + t319;
  t325 = t270*t320;
  t326 = -1.*t286*t287;
  t327 = t325 + t326;
  t322 = t320*t287;
  t323 = t299 + t322;
  p_output1[0]=-0.4999*t253*t254 + 0.4999*t258*t262 - 0.9063*t274*t282 + 0.9063*t286*t287 - 1.3127*t291*t296 + 1.3127*t303*t304 + 0.06*(t289*t303 - 1.*t296*t304) - 1.3127*(t289*t296 + t303*t304) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t253*t258 - 0.4999*t254*t262 - 0.9063*t274*t286 + 0.9063*t287*t320 - 1.3127*t291*t323 + 1.3127*t304*t327 + 0.06*(-1.*t304*t323 + t289*t327) - 1.3127*(t289*t323 + t304*t327) + var1[1];
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

#include "p_sf_lSS.hh"

namespace SymFunction
{

void p_sf_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:52 GMT-08:00
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
  double t257;
  double t281;
  double t284;
  double t288;
  double t295;
  double t305;
  double t306;
  double t307;
  double t309;
  double t310;
  double t311;
  double t312;
  double t314;
  double t317;
  double t320;
  double t321;
  double t324;
  double t325;
  double t328;
  double t329;
  double t267;
  double t280;
  double t297;
  double t299;
  double t315;
  double t316;
  double t343;
  double t344;
  double t345;
  double t350;
  double t351;
  double t352;
  double t347;
  double t348;
  t257 = Cos(var1[6]);
  t281 = Sin(var1[2]);
  t284 = Cos(var1[2]);
  t288 = Sin(var1[6]);
  t295 = Cos(var1[7]);
  t305 = t257*t281;
  t306 = t284*t288;
  t307 = t305 + t306;
  t309 = t284*t257;
  t310 = -1.*t281*t288;
  t311 = t309 + t310;
  t312 = Sin(var1[7]);
  t314 = Cos(var1[8]);
  t317 = t295*t307;
  t320 = t311*t312;
  t321 = t317 + t320;
  t324 = t295*t311;
  t325 = -1.*t307*t312;
  t328 = t324 + t325;
  t329 = Sin(var1[8]);
  t267 = -1.*t257;
  t280 = 1. + t267;
  t297 = -1.*t295;
  t299 = 1. + t297;
  t315 = -1.*t314;
  t316 = 1. + t315;
  t343 = -1.*t257*t281;
  t344 = -1.*t284*t288;
  t345 = t343 + t344;
  t350 = t295*t345;
  t351 = -1.*t311*t312;
  t352 = t350 + t351;
  t347 = t345*t312;
  t348 = t324 + t347;
  p_output1[0]=-0.4999*t280*t281 + 0.4999*t284*t288 - 0.9063*t299*t307 + 0.9063*t311*t312 - 1.3127*t316*t321 + 1.3127*t328*t329 + 0.06*(t314*t328 - 1.*t321*t329) - 1.3127*(t314*t321 + t328*t329) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t280*t284 - 0.4999*t281*t288 - 0.9063*t299*t311 + 0.9063*t312*t345 - 1.3127*t316*t348 + 1.3127*t329*t352 + 0.06*(-1.*t329*t348 + t314*t352) - 1.3127*(t314*t348 + t329*t352) + var1[1];
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

#include "p_nsf_lSS.hh"

namespace SymFunction
{

void p_nsf_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:48 GMT-08:00
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
  double t188;
  double t175;
  double t180;
  double t191;
  double t163;
  double t182;
  double t193;
  double t195;
  double t197;
  double t198;
  double t200;
  double t203;
  double t211;
  double t214;
  double t215;
  double t216;
  double t218;
  double t219;
  double t220;
  double t221;
  double t223;
  double t234;
  double t235;
  double t236;
  double t228;
  double t212;
  double t213;
  double t250;
  double t251;
  double t252;
  double t254;
  double t255;
  double t257;
  double t258;
  double t246;
  double t247;
  double t248;
  double t249;
  double t253;
  double t256;
  double t259;
  double t260;
  double t261;
  double t262;
  double t263;
  double t264;
  double t265;
  double t266;
  double t267;
  double t268;
  t188 = Cos(var1[2]);
  t175 = Cos(var1[6]);
  t180 = Sin(var1[2]);
  t191 = Sin(var1[6]);
  t163 = Cos(var1[7]);
  t182 = -1.*t175*t180;
  t193 = -1.*t188*t191;
  t195 = t182 + t193;
  t197 = t188*t175;
  t198 = -1.*t180*t191;
  t200 = t197 + t198;
  t203 = Sin(var1[7]);
  t211 = Cos(var1[8]);
  t214 = t163*t195;
  t215 = -1.*t200*t203;
  t216 = t214 + t215;
  t218 = -1.*t163*t200;
  t219 = -1.*t195*t203;
  t220 = t218 + t219;
  t221 = Sin(var1[8]);
  t223 = t211*t216;
  t234 = t163*t200;
  t235 = t195*t203;
  t236 = t234 + t235;
  t228 = -1.*t216*t221;
  t212 = -1.*t211;
  t213 = 1. + t212;
  t250 = -1.*t188*t175;
  t251 = t180*t191;
  t252 = t250 + t251;
  t254 = t252*t203;
  t255 = t214 + t254;
  t257 = t163*t252;
  t258 = t257 + t219;
  t246 = -0.4999*t195;
  t247 = -1.*t163;
  t248 = 1. + t247;
  t249 = 0.9063*t248*t195;
  t253 = -0.9063*t252*t203;
  t256 = 1.3127*t213*t255;
  t259 = -1.3127*t258*t221;
  t260 = t211*t255;
  t261 = t258*t221;
  t262 = t260 + t261;
  t263 = 1.3127*t262;
  t264 = t211*t258;
  t265 = -1.*t255*t221;
  t266 = t264 + t265;
  t267 = -0.06*t266;
  t268 = t246 + t249 + t253 + t256 + t259 + t263 + t267;
  p_output1[0]=t268*var2[2] + t268*var2[6] + (-0.9063*t163*t195 + 0.9063*t200*t203 + 1.3127*t213*t216 - 1.3127*t220*t221 + 1.3127*(t220*t221 + t223) - 0.06*(t211*t220 + t228))*var2[7] + (-1.3127*t211*t216 + 1.3127*t221*t236 - 0.06*(t228 - 1.*t211*t236) + 1.3127*(t223 - 1.*t221*t236))*var2[8];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
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

#include "z2dot_func.hh"

namespace SymFunction
{

void z2dot_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

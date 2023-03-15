/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:44 GMT-08:00
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
  double t108;
  double t118;
  double t123;
  double t128;
  double t155;
  double t163;
  double t164;
  double t165;
  double t167;
  double t168;
  double t169;
  double t170;
  double t172;
  double t175;
  double t178;
  double t179;
  double t182;
  double t183;
  double t186;
  double t187;
  double t112;
  double t117;
  double t157;
  double t158;
  double t173;
  double t174;
  double t201;
  double t202;
  double t203;
  double t208;
  double t209;
  double t210;
  double t205;
  double t206;
  t108 = Cos(var1[3]);
  t118 = Sin(var1[2]);
  t123 = Cos(var1[2]);
  t128 = Sin(var1[3]);
  t155 = Cos(var1[4]);
  t163 = t108*t118;
  t164 = t123*t128;
  t165 = t163 + t164;
  t167 = t123*t108;
  t168 = -1.*t118*t128;
  t169 = t167 + t168;
  t170 = Sin(var1[4]);
  t172 = Cos(var1[5]);
  t175 = t155*t165;
  t178 = t169*t170;
  t179 = t175 + t178;
  t182 = t155*t169;
  t183 = -1.*t165*t170;
  t186 = t182 + t183;
  t187 = Sin(var1[5]);
  t112 = -1.*t108;
  t117 = 1. + t112;
  t157 = -1.*t155;
  t158 = 1. + t157;
  t173 = -1.*t172;
  t174 = 1. + t173;
  t201 = -1.*t108*t118;
  t202 = -1.*t123*t128;
  t203 = t201 + t202;
  t208 = t155*t203;
  t209 = -1.*t169*t170;
  t210 = t208 + t209;
  t205 = t203*t170;
  t206 = t182 + t205;
  p_output1[0]=0.4999*t117*t118 - 0.4999*t123*t128 + 0.9063*t158*t165 - 0.9063*t169*t170 + 1.3127*t174*t179 - 1.3127*t186*t187 - 0.06*(t172*t186 - 1.*t179*t187) + 1.3127*(t172*t179 + t186*t187);
  p_output1[1]=0.4999*t117*t123 + 0.4999*t118*t128 + 0.9063*t158*t169 - 0.9063*t170*t203 + 1.3127*t174*t206 - 1.3127*t187*t210 - 0.06*(-1.*t187*t206 + t172*t210) + 1.3127*(t172*t206 + t187*t210);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "z_lSS.hh"

namespace SymFunction
{

void z_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

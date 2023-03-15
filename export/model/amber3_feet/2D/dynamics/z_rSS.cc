/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:43 GMT-08:00
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
  double t101;
  double t106;
  double t109;
  double t111;
  double t113;
  double t117;
  double t118;
  double t119;
  double t123;
  double t124;
  double t126;
  double t127;
  double t150;
  double t154;
  double t155;
  double t156;
  double t158;
  double t159;
  double t160;
  double t162;
  double t103;
  double t104;
  double t114;
  double t116;
  double t152;
  double t153;
  double t176;
  double t177;
  double t178;
  double t183;
  double t184;
  double t185;
  double t180;
  double t181;
  t101 = Cos(var1[6]);
  t106 = Sin(var1[2]);
  t109 = Cos(var1[2]);
  t111 = Sin(var1[6]);
  t113 = Cos(var1[7]);
  t117 = t101*t106;
  t118 = t109*t111;
  t119 = t117 + t118;
  t123 = t109*t101;
  t124 = -1.*t106*t111;
  t126 = t123 + t124;
  t127 = Sin(var1[7]);
  t150 = Cos(var1[8]);
  t154 = t113*t119;
  t155 = t126*t127;
  t156 = t154 + t155;
  t158 = t113*t126;
  t159 = -1.*t119*t127;
  t160 = t158 + t159;
  t162 = Sin(var1[8]);
  t103 = -1.*t101;
  t104 = 1. + t103;
  t114 = -1.*t113;
  t116 = 1. + t114;
  t152 = -1.*t150;
  t153 = 1. + t152;
  t176 = -1.*t101*t106;
  t177 = -1.*t109*t111;
  t178 = t176 + t177;
  t183 = t113*t178;
  t184 = -1.*t126*t127;
  t185 = t183 + t184;
  t180 = t178*t127;
  t181 = t158 + t180;
  p_output1[0]=0.4999*t104*t106 - 0.4999*t109*t111 + 0.9063*t116*t119 - 0.9063*t126*t127 + 1.3127*t153*t156 - 1.3127*t160*t162 - 0.06*(t150*t160 - 1.*t156*t162) + 1.3127*(t150*t156 + t160*t162);
  p_output1[1]=0.4999*t104*t109 + 0.4999*t106*t111 + 0.9063*t116*t126 - 0.9063*t127*t178 + 1.3127*t153*t181 - 1.3127*t162*t185 - 0.06*(-1.*t162*t181 + t150*t185) + 1.3127*(t150*t181 + t162*t185);
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

#include "z_rSS.hh"

namespace SymFunction
{

void z_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

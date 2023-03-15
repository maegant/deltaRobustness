/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:41 GMT-08:00
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
  double t7;
  double t10;
  double t26;
  double t27;
  double t30;
  double t37;
  double t38;
  double t39;
  double t41;
  double t42;
  double t43;
  double t44;
  double t46;
  double t57;
  double t58;
  double t59;
  double t49;
  double t50;
  double t52;
  double t61;
  double t29;
  double t34;
  double t35;
  double t40;
  double t45;
  double t47;
  double t48;
  double t55;
  double t62;
  double t64;
  double t65;
  double t66;
  double t67;
  double t68;
  double t69;
  double t70;
  double t71;
  double t79;
  double t80;
  double t81;
  double t88;
  double t89;
  double t83;
  double t84;
  double t103;
  double t104;
  double t105;
  double t92;
  double t96;
  double t121;
  double t122;
  double t123;
  double t130;
  double t14;
  double t17;
  double t146;
  double t147;
  double t148;
  double t150;
  double t151;
  double t153;
  double t154;
  double t144;
  double t145;
  double t149;
  double t152;
  double t155;
  double t156;
  double t157;
  double t158;
  double t159;
  double t160;
  double t161;
  double t162;
  double t163;
  t7 = Cos(var1[2]);
  t10 = Cos(var1[6]);
  t26 = Sin(var1[2]);
  t27 = Sin(var1[6]);
  t30 = Cos(var1[7]);
  t37 = t7*t10;
  t38 = -1.*t26*t27;
  t39 = t37 + t38;
  t41 = -1.*t10*t26;
  t42 = -1.*t7*t27;
  t43 = t41 + t42;
  t44 = Sin(var1[7]);
  t46 = Cos(var1[8]);
  t57 = t30*t43;
  t58 = -1.*t39*t44;
  t59 = t57 + t58;
  t49 = t30*t39;
  t50 = t43*t44;
  t52 = t49 + t50;
  t61 = Sin(var1[8]);
  t29 = 0.4999*t26*t27;
  t34 = -1.*t30;
  t35 = 1. + t34;
  t40 = 0.9063*t35*t39;
  t45 = -0.9063*t43*t44;
  t47 = -1.*t46;
  t48 = 1. + t47;
  t55 = 1.3127*t48*t52;
  t62 = -1.3127*t59*t61;
  t64 = t46*t59;
  t65 = -1.*t52*t61;
  t66 = t64 + t65;
  t67 = -0.06*t66;
  t68 = t46*t52;
  t69 = t59*t61;
  t70 = t68 + t69;
  t71 = 1.3127*t70;
  t79 = t10*t26;
  t80 = t7*t27;
  t81 = t79 + t80;
  t88 = -1.*t30*t81;
  t89 = t88 + t58;
  t83 = -1.*t81*t44;
  t84 = t49 + t83;
  t103 = t30*t81;
  t104 = t39*t44;
  t105 = t103 + t104;
  t92 = -1.*t84*t61;
  t96 = t46*t84;
  t121 = -1.*t30*t39;
  t122 = -1.*t43*t44;
  t123 = t121 + t122;
  t130 = -1.*t59*t61;
  t14 = -1.*t10;
  t17 = 1. + t14;
  t146 = -1.*t7*t10;
  t147 = t26*t27;
  t148 = t146 + t147;
  t150 = t148*t44;
  t151 = t57 + t150;
  t153 = t30*t148;
  t154 = t153 + t122;
  t144 = 0.4999*t7*t27;
  t145 = 0.9063*t35*t43;
  t149 = -0.9063*t148*t44;
  t152 = 1.3127*t48*t151;
  t155 = -1.3127*t154*t61;
  t156 = t46*t151;
  t157 = t154*t61;
  t158 = t156 + t157;
  t159 = 1.3127*t158;
  t160 = t46*t154;
  t161 = -1.*t151*t61;
  t162 = t160 + t161;
  t163 = -0.06*t162;
  p_output1[0]=(t29 + t40 + t45 + t55 + t62 + t67 + 0.4999*t17*t7 + t71)*var2[2] + (t29 + t40 + t45 + t55 + t62 + t67 - 0.4999*t10*t7 + t71)*var2[6] + (-0.9063*t30*t39 + 0.9063*t44*t81 + 1.3127*t48*t84 - 1.3127*t61*t89 - 0.06*(t46*t89 + t92) + 1.3127*(t61*t89 + t96))*var2[7] + (1.3127*t105*t61 - 1.3127*t46*t84 - 0.06*(-1.*t105*t46 + t92) + 1.3127*(-1.*t105*t61 + t96))*var2[8];
  p_output1[1]=(t144 + t145 + t149 + t152 + t155 + t159 + t163 - 0.4999*t17*t26)*var2[2] + (t144 + t145 + t149 + t152 + t155 + t159 + t163 + 0.4999*t10*t26)*var2[6] + (-0.9063*t30*t43 + 0.9063*t39*t44 - 0.06*(t130 + t123*t46) + 1.3127*t48*t59 - 1.3127*t123*t61 + 1.3127*(t123*t61 + t64))*var2[7] + (-0.06*(t130 - 1.*t46*t52) - 1.3127*t46*t59 + 1.3127*t52*t61 + 1.3127*t66)*var2[8];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "global_vel.hh"

namespace SymFunction
{

void global_vel_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

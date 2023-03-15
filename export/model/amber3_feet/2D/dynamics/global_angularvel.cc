/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:42 GMT-08:00
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
  double t49;
  double t37;
  double t40;
  double t50;
  double t29;
  double t64;
  double t66;
  double t67;
  double t45;
  double t55;
  double t57;
  double t68;
  double t22;
  double t62;
  double t69;
  double t70;
  double t71;
  double t76;
  double t79;
  double t80;
  double t82;
  double t90;
  double t91;
  double t93;
  double t85;
  double t89;
  double t95;
  double t98;
  double t99;
  double t100;
  double t73;
  double t74;
  double t75;
  double t77;
  double t78;
  double t97;
  double t102;
  double t107;
  double t129;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t147;
  double t148;
  double t149;
  t49 = Cos(var1[2]);
  t37 = Cos(var1[6]);
  t40 = Sin(var1[2]);
  t50 = Sin(var1[6]);
  t29 = Cos(var1[7]);
  t64 = t49*t37;
  t66 = -1.*t40*t50;
  t67 = t64 + t66;
  t45 = -1.*t37*t40;
  t55 = -1.*t49*t50;
  t57 = t45 + t55;
  t68 = Sin(var1[7]);
  t22 = Cos(var1[8]);
  t62 = t29*t57;
  t69 = -1.*t67*t68;
  t70 = t62 + t69;
  t71 = t22*t70;
  t76 = Sin(var1[8]);
  t79 = t29*t67;
  t80 = t57*t68;
  t82 = t79 + t80;
  t90 = t22*t82;
  t91 = t70*t76;
  t93 = t90 + t91;
  t85 = -1.*t82*t76;
  t89 = t71 + t85;
  t95 = Power(t93,2);
  t98 = Power(t89,2);
  t99 = t98 + t95;
  t100 = 1/t99;
  t73 = -1.*t29*t67;
  t74 = -1.*t57*t68;
  t75 = t73 + t74;
  t77 = t75*t76;
  t78 = t71 + t77;
  t97 = 1/Sqrt(t95);
  t102 = Power(t95,-1.5);
  t107 = -1.*t70*t76;
  t129 = -1.*t49*t37;
  t131 = t40*t50;
  t132 = t129 + t131;
  t133 = t132*t68;
  t134 = t62 + t133;
  t135 = t22*t134;
  t136 = t29*t132;
  t137 = t136 + t74;
  t138 = t137*t76;
  t139 = t135 + t138;
  t140 = -1.*t139*t89*t93*t97*t100;
  t141 = t139*t89*t95*t102;
  t142 = -1.*t139*t89*t97;
  t143 = t22*t137;
  t144 = -1.*t134*t76;
  t145 = t143 + t144;
  t147 = -1.*t93*t97*t145;
  t148 = t141 + t142 + t147;
  t149 = -1.*t93*t100*t148;
  p_output1[0]=(1. + t140 + t149)*var2[2] + (t140 + t149)*var2[6] + (-1.*t100*t78*t89*t93*t97 - 1.*t100*t93*(t102*t78*t89*t95 - 1.*t78*t89*t97 - 1.*(t107 + t22*t75)*t93*t97))*var2[7] + (-1.*t100*t93*t97*t98 - 1.*t100*t93*(-1.*(t107 - 1.*t22*t82)*t93*t97 + t102*t95*t98 - 1.*t97*t98))*var2[8];
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

#include "global_angularvel.hh"

namespace SymFunction
{

void global_angularvel_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

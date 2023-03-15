/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:12:14 GMT-08:00
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
  double t50;
  double t43;
  double t46;
  double t51;
  double t64;
  double t34;
  double t68;
  double t69;
  double t70;
  double t49;
  double t53;
  double t60;
  double t63;
  double t71;
  double t75;
  double t79;
  double t80;
  double t81;
  double t84;
  double t85;
  double t88;
  double t110;
  double t111;
  double t112;
  double t113;
  double t114;
  double t109;
  double t115;
  double t116;
  double t117;
  double t119;
  double t120;
  double t122;
  double t124;
  double t125;
  double t126;
  double t92;
  double t94;
  double t95;
  double t96;
  double t97;
  double t99;
  double t104;
  double t105;
  double t118;
  double t127;
  double t128;
  double t130;
  double t131;
  double t132;
  double t141;
  double t142;
  double t143;
  double t144;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t129;
  double t133;
  double t134;
  double t153;
  double t154;
  double t155;
  double t140;
  double t145;
  double t146;
  double t156;
  double t157;
  double t158;
  double t165;
  double t166;
  double t167;
  double t147;
  double t159;
  double t168;
  double t169;
  double t175;
  double t176;
  t50 = Cos(var1[6]);
  t43 = Cos(var1[7]);
  t46 = Sin(var1[6]);
  t51 = Sin(var1[7]);
  t64 = Cos(var1[2]);
  t34 = Sin(var1[2]);
  t68 = t50*t43;
  t69 = -1.*t46*t51;
  t70 = t68 + t69;
  t49 = -1.*t43*t46;
  t53 = -1.*t50*t51;
  t60 = t49 + t53;
  t63 = t34*t60;
  t71 = t64*t70;
  t75 = t63 + t71;
  t79 = t43*t46;
  t80 = t50*t51;
  t81 = t79 + t80;
  t84 = t64*t81;
  t85 = t34*t70;
  t88 = t84 + t85;
  t110 = -1.*t43;
  t111 = 1. + t110;
  t112 = -0.9063*t111;
  t113 = -1.0567*t43;
  t114 = t112 + t113;
  t109 = 0.4999*t46;
  t115 = t114*t46;
  t116 = -0.15039999999999998*t50*t51;
  t117 = t109 + t115 + t116;
  t119 = -1.*t50;
  t120 = 1. + t119;
  t122 = -0.4999*t120;
  t124 = t50*t114;
  t125 = 0.15039999999999998*t46*t51;
  t126 = t122 + t124 + t125;
  t92 = t64*t60;
  t94 = -1.*t34*t70;
  t95 = t92 + t94;
  t96 = 3.5899*t75*t95;
  t97 = -1.*t34*t81;
  t99 = t97 + t71;
  t104 = 3.5899*t99*t88;
  t105 = t96 + t104;
  t118 = -1.*t117*t70;
  t127 = -1.*t60*t126;
  t128 = t118 + t127;
  t130 = t117*t81;
  t131 = t70*t126;
  t132 = t130 + t131;
  t141 = 0.4999*t51;
  t142 = t114*t51;
  t143 = 0.15039999999999998*t43*t51;
  t144 = t141 + t142 + t143;
  t135 = 0.4999*t43;
  t136 = t114*t43;
  t137 = Power(t51,2);
  t138 = -0.15039999999999998*t137;
  t139 = t135 + t136 + t138;
  t129 = 3.5899*t88*t128;
  t133 = 3.5899*t75*t132;
  t134 = t129 + t133;
  t153 = 3.5899*t99*t128;
  t154 = 3.5899*t95*t132;
  t155 = t153 + t154;
  t140 = 3.5899*t139*t75;
  t145 = 3.5899*t144*t88;
  t146 = t140 + t145;
  t156 = 3.5899*t144*t99;
  t157 = 3.5899*t139*t95;
  t158 = t156 + t157;
  t165 = 3.5899*t144*t128;
  t166 = 3.5899*t139*t132;
  t167 = 0.0378 + t165 + t166;
  t147 = -0.5399209599999999*t75;
  t159 = -0.5399209599999999*t95;
  t168 = -0.5399209599999999*t132;
  t169 = 0.0378 + t168;
  t175 = -0.5399209599999999*t139;
  t176 = 0.0378 + t175;
  p_output1[0]=3.5899*Power(t75,2) + 3.5899*Power(t88,2);
  p_output1[1]=t105;
  p_output1[2]=t134;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t146;
  p_output1[7]=t147;
  p_output1[8]=0;
  p_output1[9]=t105;
  p_output1[10]=3.5899*Power(t95,2) + 3.5899*Power(t99,2);
  p_output1[11]=t155;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t158;
  p_output1[16]=t159;
  p_output1[17]=0;
  p_output1[18]=t134;
  p_output1[19]=t155;
  p_output1[20]=0.0378 + 3.5899*Power(t128,2) + 3.5899*Power(t132,2);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=t167;
  p_output1[25]=t169;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=t146;
  p_output1[55]=t158;
  p_output1[56]=t167;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0.0378 + 3.5899*Power(t139,2) + 3.5899*Power(t144,2);
  p_output1[61]=t176;
  p_output1[62]=0;
  p_output1[63]=t147;
  p_output1[64]=t159;
  p_output1[65]=t169;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=t176;
  p_output1[70]=0.11900411238399997;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat6_amber3_feet.hh"

namespace SymFunction
{

void Mmat6_amber3_feet_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

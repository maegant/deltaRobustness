/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:12:13 GMT-08:00
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
  double t27;
  double t20;
  double t23;
  double t28;
  double t33;
  double t26;
  double t29;
  double t30;
  double t17;
  double t34;
  double t35;
  double t36;
  double t41;
  double t37;
  double t16;
  double t52;
  double t53;
  double t58;
  double t32;
  double t38;
  double t43;
  double t44;
  double t45;
  double t40;
  double t46;
  double t49;
  double t59;
  double t60;
  double t63;
  double t64;
  double t65;
  double t66;
  double t67;
  double t68;
  double t86;
  double t87;
  double t88;
  double t89;
  double t90;
  double t91;
  double t82;
  double t83;
  double t84;
  double t85;
  double t92;
  double t93;
  double t95;
  double t96;
  double t97;
  double t98;
  double t102;
  double t103;
  double t104;
  double t105;
  double t106;
  double t107;
  double t81;
  double t94;
  double t99;
  double t100;
  double t72;
  double t73;
  double t74;
  double t75;
  double t76;
  double t77;
  double t78;
  double t79;
  double t80;
  double t101;
  double t108;
  double t109;
  double t111;
  double t112;
  double t113;
  double t116;
  double t117;
  double t118;
  double t119;
  double t121;
  double t122;
  double t123;
  double t124;
  double t127;
  double t128;
  double t129;
  double t130;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t110;
  double t114;
  double t115;
  double t145;
  double t146;
  double t147;
  double t120;
  double t125;
  double t126;
  double t148;
  double t149;
  double t150;
  double t160;
  double t161;
  double t162;
  double t131;
  double t137;
  double t138;
  double t151;
  double t152;
  double t153;
  double t163;
  double t164;
  double t165;
  double t173;
  double t174;
  double t175;
  double t139;
  double t154;
  double t166;
  double t167;
  double t176;
  double t177;
  double t183;
  double t184;
  t27 = Cos(var1[4]);
  t20 = Cos(var1[5]);
  t23 = Sin(var1[4]);
  t28 = Sin(var1[5]);
  t33 = Cos(var1[3]);
  t26 = -1.*t20*t23;
  t29 = -1.*t27*t28;
  t30 = t26 + t29;
  t17 = Sin(var1[3]);
  t34 = t27*t20;
  t35 = -1.*t23*t28;
  t36 = t34 + t35;
  t41 = Sin(var1[2]);
  t37 = t33*t36;
  t16 = Cos(var1[2]);
  t52 = t20*t23;
  t53 = t27*t28;
  t58 = t52 + t53;
  t32 = t17*t30;
  t38 = t32 + t37;
  t43 = t33*t30;
  t44 = -1.*t17*t36;
  t45 = t43 + t44;
  t40 = t16*t38;
  t46 = t41*t45;
  t49 = t40 + t46;
  t59 = -1.*t17*t58;
  t60 = t59 + t37;
  t63 = t41*t60;
  t64 = t33*t58;
  t65 = t17*t36;
  t66 = t64 + t65;
  t67 = t16*t66;
  t68 = t63 + t67;
  t86 = -1.*t20;
  t87 = 1. + t86;
  t88 = -1.3127*t87;
  t89 = -1.3127*t20;
  t90 = -0.06*t28;
  t91 = t88 + t89 + t90;
  t82 = -1.*t27;
  t83 = 1. + t82;
  t84 = -0.9063*t83;
  t85 = -0.06*t20*t23;
  t92 = t27*t91;
  t93 = t84 + t85 + t92;
  t95 = 0.06*t27*t20;
  t96 = 0.9063*t23;
  t97 = t23*t91;
  t98 = t95 + t96 + t97;
  t102 = -1.*t33;
  t103 = 1. + t102;
  t104 = -0.4999*t103;
  t105 = t33*t93;
  t106 = -1.*t17*t98;
  t107 = t104 + t105 + t106;
  t81 = 0.4999*t17;
  t94 = t17*t93;
  t99 = t33*t98;
  t100 = t81 + t94 + t99;
  t72 = -1.*t41*t38;
  t73 = t16*t45;
  t74 = t72 + t73;
  t75 = 1.142857*t74*t49;
  t76 = t16*t60;
  t77 = -1.*t41*t66;
  t78 = t76 + t77;
  t79 = 1.142857*t68*t78;
  t80 = t75 + t79;
  t101 = -1.*t100*t38;
  t108 = -1.*t107*t45;
  t109 = t101 + t108;
  t111 = t107*t60;
  t112 = t100*t66;
  t113 = t111 + t112;
  t116 = t98*t58;
  t117 = 0.4999*t36;
  t118 = t93*t36;
  t119 = t116 + t117 + t118;
  t121 = -1.*t93*t30;
  t122 = 0.4999*t58;
  t123 = -1.*t98*t36;
  t124 = t121 + t122 + t123;
  t127 = 0.9063*t20;
  t128 = t20*t91;
  t129 = 0.06*t20*t28;
  t130 = t127 + t128 + t129;
  t132 = Power(t20,2);
  t133 = -0.06*t132;
  t134 = 0.9063*t28;
  t135 = t91*t28;
  t136 = t133 + t134 + t135;
  t110 = 1.142857*t109*t68;
  t114 = 1.142857*t49*t113;
  t115 = t110 + t114;
  t145 = 1.142857*t109*t78;
  t146 = 1.142857*t74*t113;
  t147 = t145 + t146;
  t120 = 1.142857*t119*t49;
  t125 = 1.142857*t124*t68;
  t126 = t120 + t125;
  t148 = 1.142857*t119*t74;
  t149 = 1.142857*t124*t78;
  t150 = t148 + t149;
  t160 = 1.142857*t124*t109;
  t161 = 1.142857*t119*t113;
  t162 = 0.0085 + t160 + t161;
  t131 = 1.142857*t130*t49;
  t137 = 1.142857*t136*t68;
  t138 = t131 + t137;
  t151 = 1.142857*t130*t74;
  t152 = 1.142857*t136*t78;
  t153 = t151 + t152;
  t163 = 1.142857*t136*t109;
  t164 = 1.142857*t130*t113;
  t165 = 0.0085 + t163 + t164;
  t173 = 1.142857*t130*t119;
  t174 = 1.142857*t136*t124;
  t175 = 0.0085 + t173 + t174;
  t139 = -0.06857142*t68;
  t154 = -0.06857142*t78;
  t166 = -0.06857142*t109;
  t167 = 0.0085 + t166;
  t176 = -0.06857142*t124;
  t177 = 0.0085 + t176;
  t183 = -0.06857142*t136;
  t184 = 0.0085 + t183;
  p_output1[0]=1.142857*Power(t49,2) + 1.142857*Power(t68,2);
  p_output1[1]=t80;
  p_output1[2]=t115;
  p_output1[3]=t126;
  p_output1[4]=t138;
  p_output1[5]=t139;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t80;
  p_output1[10]=1.142857*Power(t74,2) + 1.142857*Power(t78,2);
  p_output1[11]=t147;
  p_output1[12]=t150;
  p_output1[13]=t153;
  p_output1[14]=t154;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t115;
  p_output1[19]=t147;
  p_output1[20]=0.0085 + 1.142857*Power(t109,2) + 1.142857*Power(t113,2);
  p_output1[21]=t162;
  p_output1[22]=t165;
  p_output1[23]=t167;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t126;
  p_output1[28]=t150;
  p_output1[29]=t162;
  p_output1[30]=0.0085 + 1.142857*Power(t119,2) + 1.142857*Power(t124,2);
  p_output1[31]=t175;
  p_output1[32]=t177;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t138;
  p_output1[37]=t153;
  p_output1[38]=t165;
  p_output1[39]=t175;
  p_output1[40]=0.0085 + 1.142857*Power(t130,2) + 1.142857*Power(t136,2);
  p_output1[41]=t184;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t139;
  p_output1[46]=t154;
  p_output1[47]=t167;
  p_output1[48]=t177;
  p_output1[49]=t184;
  p_output1[50]=0.0126142852;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
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

#include "Mmat4_amber3_feet.hh"

namespace SymFunction
{

void Mmat4_amber3_feet_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:12:15 GMT-08:00
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
  double t76;
  double t68;
  double t71;
  double t78;
  double t85;
  double t75;
  double t79;
  double t80;
  double t64;
  double t88;
  double t89;
  double t90;
  double t96;
  double t91;
  double t63;
  double t115;
  double t116;
  double t122;
  double t84;
  double t92;
  double t99;
  double t104;
  double t105;
  double t95;
  double t109;
  double t112;
  double t124;
  double t125;
  double t128;
  double t129;
  double t130;
  double t131;
  double t132;
  double t133;
  double t151;
  double t152;
  double t153;
  double t154;
  double t155;
  double t156;
  double t147;
  double t148;
  double t149;
  double t150;
  double t157;
  double t158;
  double t160;
  double t161;
  double t162;
  double t163;
  double t167;
  double t168;
  double t169;
  double t170;
  double t171;
  double t172;
  double t146;
  double t159;
  double t164;
  double t165;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t166;
  double t173;
  double t174;
  double t176;
  double t177;
  double t178;
  double t181;
  double t182;
  double t183;
  double t184;
  double t186;
  double t187;
  double t188;
  double t189;
  double t192;
  double t193;
  double t194;
  double t195;
  double t197;
  double t198;
  double t199;
  double t200;
  double t201;
  double t175;
  double t179;
  double t180;
  double t210;
  double t211;
  double t212;
  double t185;
  double t190;
  double t191;
  double t213;
  double t214;
  double t215;
  double t225;
  double t226;
  double t227;
  double t196;
  double t202;
  double t203;
  double t216;
  double t217;
  double t218;
  double t228;
  double t229;
  double t230;
  double t238;
  double t239;
  double t240;
  double t204;
  double t219;
  double t231;
  double t232;
  double t241;
  double t242;
  double t248;
  double t249;
  t76 = Cos(var1[7]);
  t68 = Cos(var1[8]);
  t71 = Sin(var1[7]);
  t78 = Sin(var1[8]);
  t85 = Cos(var1[6]);
  t75 = -1.*t68*t71;
  t79 = -1.*t76*t78;
  t80 = t75 + t79;
  t64 = Sin(var1[6]);
  t88 = t76*t68;
  t89 = -1.*t71*t78;
  t90 = t88 + t89;
  t96 = Sin(var1[2]);
  t91 = t85*t90;
  t63 = Cos(var1[2]);
  t115 = t68*t71;
  t116 = t76*t78;
  t122 = t115 + t116;
  t84 = t64*t80;
  t92 = t84 + t91;
  t99 = t85*t80;
  t104 = -1.*t64*t90;
  t105 = t99 + t104;
  t95 = t63*t92;
  t109 = t96*t105;
  t112 = t95 + t109;
  t124 = -1.*t64*t122;
  t125 = t124 + t91;
  t128 = t96*t125;
  t129 = t85*t122;
  t130 = t64*t90;
  t131 = t129 + t130;
  t132 = t63*t131;
  t133 = t128 + t132;
  t151 = -1.*t68;
  t152 = 1. + t151;
  t153 = -1.3127*t152;
  t154 = -1.3127*t68;
  t155 = -0.06*t78;
  t156 = t153 + t154 + t155;
  t147 = -1.*t76;
  t148 = 1. + t147;
  t149 = -0.9063*t148;
  t150 = -0.06*t68*t71;
  t157 = t76*t156;
  t158 = t149 + t150 + t157;
  t160 = 0.06*t76*t68;
  t161 = 0.9063*t71;
  t162 = t71*t156;
  t163 = t160 + t161 + t162;
  t167 = -1.*t85;
  t168 = 1. + t167;
  t169 = -0.4999*t168;
  t170 = t85*t158;
  t171 = -1.*t64*t163;
  t172 = t169 + t170 + t171;
  t146 = 0.4999*t64;
  t159 = t64*t158;
  t164 = t85*t163;
  t165 = t146 + t159 + t164;
  t137 = -1.*t96*t92;
  t138 = t63*t105;
  t139 = t137 + t138;
  t140 = 1.142857*t139*t112;
  t141 = t63*t125;
  t142 = -1.*t96*t131;
  t143 = t141 + t142;
  t144 = 1.142857*t133*t143;
  t145 = t140 + t144;
  t166 = -1.*t165*t92;
  t173 = -1.*t172*t105;
  t174 = t166 + t173;
  t176 = t172*t125;
  t177 = t165*t131;
  t178 = t176 + t177;
  t181 = t163*t122;
  t182 = 0.4999*t90;
  t183 = t158*t90;
  t184 = t181 + t182 + t183;
  t186 = -1.*t158*t80;
  t187 = 0.4999*t122;
  t188 = -1.*t163*t90;
  t189 = t186 + t187 + t188;
  t192 = 0.9063*t68;
  t193 = t68*t156;
  t194 = 0.06*t68*t78;
  t195 = t192 + t193 + t194;
  t197 = Power(t68,2);
  t198 = -0.06*t197;
  t199 = 0.9063*t78;
  t200 = t156*t78;
  t201 = t198 + t199 + t200;
  t175 = 1.142857*t174*t133;
  t179 = 1.142857*t112*t178;
  t180 = t175 + t179;
  t210 = 1.142857*t174*t143;
  t211 = 1.142857*t139*t178;
  t212 = t210 + t211;
  t185 = 1.142857*t184*t112;
  t190 = 1.142857*t189*t133;
  t191 = t185 + t190;
  t213 = 1.142857*t184*t139;
  t214 = 1.142857*t189*t143;
  t215 = t213 + t214;
  t225 = 1.142857*t189*t174;
  t226 = 1.142857*t184*t178;
  t227 = 0.0085 + t225 + t226;
  t196 = 1.142857*t195*t112;
  t202 = 1.142857*t201*t133;
  t203 = t196 + t202;
  t216 = 1.142857*t195*t139;
  t217 = 1.142857*t201*t143;
  t218 = t216 + t217;
  t228 = 1.142857*t201*t174;
  t229 = 1.142857*t195*t178;
  t230 = 0.0085 + t228 + t229;
  t238 = 1.142857*t195*t184;
  t239 = 1.142857*t201*t189;
  t240 = 0.0085 + t238 + t239;
  t204 = -0.06857142*t133;
  t219 = -0.06857142*t143;
  t231 = -0.06857142*t174;
  t232 = 0.0085 + t231;
  t241 = -0.06857142*t189;
  t242 = 0.0085 + t241;
  t248 = -0.06857142*t201;
  t249 = 0.0085 + t248;
  p_output1[0]=1.142857*Power(t112,2) + 1.142857*Power(t133,2);
  p_output1[1]=t145;
  p_output1[2]=t180;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t191;
  p_output1[7]=t203;
  p_output1[8]=t204;
  p_output1[9]=t145;
  p_output1[10]=1.142857*Power(t139,2) + 1.142857*Power(t143,2);
  p_output1[11]=t212;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t215;
  p_output1[16]=t218;
  p_output1[17]=t219;
  p_output1[18]=t180;
  p_output1[19]=t212;
  p_output1[20]=0.0085 + 1.142857*Power(t174,2) + 1.142857*Power(t178,2);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=t227;
  p_output1[25]=t230;
  p_output1[26]=t232;
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
  p_output1[54]=t191;
  p_output1[55]=t215;
  p_output1[56]=t227;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0.0085 + 1.142857*Power(t184,2) + 1.142857*Power(t189,2);
  p_output1[61]=t240;
  p_output1[62]=t242;
  p_output1[63]=t203;
  p_output1[64]=t218;
  p_output1[65]=t230;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=t240;
  p_output1[70]=0.0085 + 1.142857*Power(t195,2) + 1.142857*Power(t201,2);
  p_output1[71]=t249;
  p_output1[72]=t204;
  p_output1[73]=t219;
  p_output1[74]=t232;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=t242;
  p_output1[79]=t249;
  p_output1[80]=0.0126142852;
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

#include "Mmat7_amber3_feet.hh"

namespace SymFunction
{

void Mmat7_amber3_feet_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

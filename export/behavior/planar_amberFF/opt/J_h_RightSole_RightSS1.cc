/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:25 GMT-08:00
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
  double t27;
  double t174;
  double t606;
  double t677;
  double t1231;
  double t2022;
  double t2083;
  double t2101;
  double t2589;
  double t2717;
  double t2747;
  double t2765;
  double t2814;
  double t3418;
  double t3420;
  double t3795;
  double t3199;
  double t3323;
  double t3350;
  double t3811;
  double t1053;
  double t1743;
  double t1765;
  double t2356;
  double t2810;
  double t2998;
  double t3178;
  double t3406;
  double t3837;
  double t3856;
  double t3964;
  double t4012;
  double t4041;
  double t4219;
  double t4266;
  double t4274;
  double t4426;
  double t4799;
  double t4914;
  double t4915;
  double t4981;
  double t4997;
  double t4926;
  double t4964;
  double t5101;
  double t5104;
  double t5118;
  double t5020;
  double t5039;
  double t235;
  double t292;
  double t5168;
  double t5169;
  double t5171;
  double t5189;
  double t5193;
  double t5212;
  double t5216;
  double t5225;
  double t5161;
  double t5167;
  double t5184;
  double t5209;
  double t5247;
  double t5253;
  double t5254;
  double t5258;
  double t5261;
  double t5263;
  double t5265;
  double t5278;
  double t5286;
  double t5319;
  double t5321;
  double t5372;
  double t5138;
  double t5147;
  double t5444;
  double t5445;
  double t5456;
  double t5457;
  double t5461;
  double t5462;
  double t5474;
  double t5477;
  double t5438;
  double t5450;
  double t5478;
  double t5480;
  double t5490;
  double t5491;
  double t5495;
  double t5496;
  double t5498;
  double t5014;
  double t5021;
  double t5125;
  double t5127;
  t27 = Cos(var1[2]);
  t174 = Cos(var1[6]);
  t606 = Sin(var1[2]);
  t677 = Sin(var1[6]);
  t1231 = Cos(var1[7]);
  t2022 = t27*t174;
  t2083 = -1.*t606*t677;
  t2101 = t2022 + t2083;
  t2589 = -1.*t174*t606;
  t2717 = -1.*t27*t677;
  t2747 = t2589 + t2717;
  t2765 = Sin(var1[7]);
  t2814 = Cos(var1[8]);
  t3418 = t1231*t2747;
  t3420 = -1.*t2101*t2765;
  t3795 = t3418 + t3420;
  t3199 = t1231*t2101;
  t3323 = t2747*t2765;
  t3350 = t3199 + t3323;
  t3811 = Sin(var1[8]);
  t1053 = -0.4999*t606*t677;
  t1743 = -1.*t1231;
  t1765 = 1. + t1743;
  t2356 = -0.9063*t1765*t2101;
  t2810 = 0.9063*t2747*t2765;
  t2998 = -1.*t2814;
  t3178 = 1. + t2998;
  t3406 = -1.3127*t3178*t3350;
  t3837 = 1.3127*t3795*t3811;
  t3856 = t2814*t3795;
  t3964 = -1.*t3350*t3811;
  t4012 = t3856 + t3964;
  t4041 = 0.06*t4012;
  t4219 = t2814*t3350;
  t4266 = t3795*t3811;
  t4274 = t4219 + t4266;
  t4426 = -1.3127*t4274;
  t4799 = t174*t606;
  t4914 = t27*t677;
  t4915 = t4799 + t4914;
  t4981 = -1.*t1231*t4915;
  t4997 = t4981 + t3420;
  t4926 = -1.*t4915*t2765;
  t4964 = t3199 + t4926;
  t5101 = t1231*t4915;
  t5104 = t2101*t2765;
  t5118 = t5101 + t5104;
  t5020 = -1.*t4964*t3811;
  t5039 = t2814*t4964;
  t235 = -1.*t174;
  t292 = 1. + t235;
  t5168 = -1.*t27*t174;
  t5169 = t606*t677;
  t5171 = t5168 + t5169;
  t5189 = t5171*t2765;
  t5193 = t3418 + t5189;
  t5212 = t1231*t5171;
  t5216 = -1.*t2747*t2765;
  t5225 = t5212 + t5216;
  t5161 = -0.4999*t27*t677;
  t5167 = -0.9063*t1765*t2747;
  t5184 = 0.9063*t5171*t2765;
  t5209 = -1.3127*t3178*t5193;
  t5247 = 1.3127*t5225*t3811;
  t5253 = t2814*t5193;
  t5254 = t5225*t3811;
  t5258 = t5253 + t5254;
  t5261 = -1.3127*t5258;
  t5263 = t2814*t5225;
  t5265 = -1.*t5193*t3811;
  t5278 = t5263 + t5265;
  t5286 = 0.06*t5278;
  t5319 = -1.*t1231*t2101;
  t5321 = t5319 + t5216;
  t5372 = -1.*t3795*t3811;
  t5138 = -1.*t5118*t3811;
  t5147 = t5039 + t5138;
  t5444 = Power(t5147,2);
  t5445 = 0. + t5444;
  t5456 = -1.*t2814*t3795;
  t5457 = t3350*t3811;
  t5461 = t5456 + t5457;
  t5462 = Power(t5461,2);
  t5474 = 0. + t5462 + t5444;
  t5477 = 1/t5474;
  t5438 = Power(t4012,2);
  t5450 = 1/Sqrt(t5445);
  t5478 = t5438*t5147*t5450*t5477;
  t5480 = -1.*t2814*t5225;
  t5490 = t5193*t3811;
  t5491 = t5480 + t5490;
  t5495 = Sqrt(t5445);
  t5496 = t5491*t5495*t5477;
  t5498 = t5478 + t5496;
  t5014 = t2814*t4997;
  t5021 = t5014 + t5020;
  t5125 = -1.*t2814*t5118;
  t5127 = t5125 + t5020;
  p_output1[0]=1.;
  p_output1[1]=t1053 + t2356 + t2810 - 0.4999*t27*t292 + t3406 + t3837 + t4041 + t4426;
  p_output1[2]=t1053 + t2356 + 0.4999*t174*t27 + t2810 + t3406 + t3837 + t4041 + t4426;
  p_output1[3]=0.9063*t1231*t2101 - 0.9063*t2765*t4915 - 1.3127*t3178*t4964 + 1.3127*t3811*t4997 + 0.06*t5021 - 1.3127*(t3811*t4997 + t5039);
  p_output1[4]=1.3127*t2814*t4964 - 1.3127*t3811*t5118 + 0.06*t5127 - 1.3127*t5147;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t5161 + t5167 + t5184 + t5209 + t5247 + t5261 + t5286 + 0.4999*t292*t606;
  p_output1[8]=t5161 + t5167 + t5184 + t5209 + t5247 + t5261 + t5286 - 0.4999*t174*t606;
  p_output1[9]=0.9063*t1231*t2747 - 0.9063*t2101*t2765 - 1.3127*t3178*t3795 + 1.3127*t3811*t5321 - 1.3127*(t3856 + t3811*t5321) + 0.06*(t2814*t5321 + t5372);
  p_output1[10]=1.3127*t2814*t3795 - 1.3127*t3350*t3811 - 1.3127*t4012 + 0.06*(-1.*t2814*t3350 + t5372);
  p_output1[11]=-1.;
  p_output1[12]=t5498;
  p_output1[13]=t5498;
  p_output1[14]=t4012*t5021*t5147*t5450*t5477 + (t4266 - 1.*t2814*t5321)*t5477*t5495;
  p_output1[15]=t4012*t5127*t5147*t5450*t5477 + t4274*t5477*t5495;
  p_output1[16]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightSole_RightSS1.hh"

namespace RightSS1
{

void J_h_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

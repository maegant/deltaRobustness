/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:40 GMT-08:00
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
  double t772;
  double t313;
  double t409;
  double t849;
  double t1104;
  double t531;
  double t891;
  double t1091;
  double t294;
  double t1187;
  double t1188;
  double t1289;
  double t13;
  double t1093;
  double t1456;
  double t1564;
  double t1667;
  double t1716;
  double t1717;
  double t1758;
  double t1850;
  double t1986;
  double t2021;
  double t2235;
  double t2240;
  double t2252;
  double t2308;
  double t2335;
  double t2349;
  double t3200;
  double t3235;
  double t3249;
  double t2350;
  double t2380;
  double t3528;
  double t2663;
  double t2822;
  double t2843;
  double t4454;
  double t4458;
  double t4553;
  double t4584;
  double t4592;
  double t4630;
  double t4241;
  double t4285;
  double t4391;
  double t4453;
  double t4794;
  double t4802;
  double t4912;
  double t4948;
  double t4957;
  double t5091;
  double t5108;
  double t5216;
  double t6339;
  double t6346;
  double t6531;
  double t6561;
  double t6578;
  double t7863;
  double t4086;
  double t4095;
  double t4169;
  double t5219;
  double t5222;
  double t5883;
  double t5907;
  double t5916;
  double t6069;
  double t7954;
  double t7958;
  double t7961;
  double t8015;
  double t8022;
  double t8037;
  double t8044;
  double t7964;
  double t7967;
  double t7968;
  double t7971;
  double t7984;
  double t7996;
  double t8108;
  double t8116;
  double t8120;
  t772 = Cos(var1[4]);
  t313 = Cos(var1[5]);
  t409 = Sin(var1[4]);
  t849 = Sin(var1[5]);
  t1104 = Cos(var1[3]);
  t531 = -1.*t313*t409;
  t891 = -1.*t772*t849;
  t1091 = t531 + t891;
  t294 = Sin(var1[3]);
  t1187 = t772*t313;
  t1188 = -1.*t409*t849;
  t1289 = t1187 + t1188;
  t13 = Cos(var1[2]);
  t1093 = t294*t1091;
  t1456 = t1104*t1289;
  t1564 = t1093 + t1456;
  t1667 = t13*t1564;
  t1716 = Sin(var1[2]);
  t1717 = t1104*t1091;
  t1758 = -1.*t294*t1289;
  t1850 = t1717 + t1758;
  t1986 = t1716*t1850;
  t2021 = t1667 + t1986;
  t2235 = t313*t409;
  t2240 = t772*t849;
  t2252 = t2235 + t2240;
  t2308 = -1.*t294*t2252;
  t2335 = t2308 + t1456;
  t2349 = t13*t2335;
  t3200 = -1.*t1716*t1564;
  t3235 = t13*t1850;
  t3249 = t3200 + t3235;
  t2350 = -1.*t1104*t2252;
  t2380 = t2350 + t1758;
  t3528 = -1.*t1716*t2335;
  t2663 = t1104*t2252;
  t2822 = t294*t1289;
  t2843 = t2663 + t2822;
  t4454 = -1.*t313;
  t4458 = 1. + t4454;
  t4553 = -1.3127*t4458;
  t4584 = -1.3127*t313;
  t4592 = -0.06*t849;
  t4630 = t4553 + t4584 + t4592;
  t4241 = -1.*t772;
  t4285 = 1. + t4241;
  t4391 = -0.9063*t4285;
  t4453 = -0.06*t313*t409;
  t4794 = t772*t4630;
  t4802 = t4391 + t4453 + t4794;
  t4912 = t1104*t4802;
  t4948 = 0.06*t772*t313;
  t4957 = 0.9063*t409;
  t5091 = t409*t4630;
  t5108 = t4948 + t4957 + t5091;
  t5216 = -1.*t294*t5108;
  t6339 = 0.9063*t772;
  t6346 = t6339 + t4453 + t4794;
  t6531 = -0.06*t772*t313;
  t6561 = -0.9063*t409;
  t6578 = -1.*t409*t4630;
  t7863 = t6531 + t6561 + t6578;
  t4086 = -1.*t1104;
  t4095 = 1. + t4086;
  t4169 = -0.4999*t4095;
  t5219 = t4169 + t4912 + t5216;
  t5222 = -1.*t294*t1091;
  t5883 = 0.4999*t294;
  t5907 = t294*t4802;
  t5916 = t1104*t5108;
  t6069 = t5883 + t5907 + t5916;
  t7954 = -1.*t772*t313;
  t7958 = t409*t849;
  t7961 = t7954 + t7958;
  t8015 = -0.06*t772*t849;
  t8022 = t4453 + t8015;
  t8037 = 0.06*t409*t849;
  t8044 = t6531 + t8037;
  t7964 = t1104*t7961;
  t7967 = t5222 + t7964;
  t7968 = -1.*t5219*t7967;
  t7971 = t294*t7961;
  t7984 = t1717 + t7971;
  t7996 = -1.*t6069*t7984;
  t8108 = -1.*t5108*t1091;
  t8116 = 0.4999*t1289;
  t8120 = -1.*t4802*t7961;
  p_output1[0]=var2[5]*(0.03428571*(t2349 - 1.*t1716*t2843)*var2[2] + 0.03428571*(t2349 + t1716*t2380)*var2[3] + 0.03428571*t2021*var2[4] + 0.03428571*t2021*var2[5]);
  p_output1[1]=var2[5]*(0.03428571*(-1.*t13*t2843 + t3528)*var2[2] + 0.03428571*(t13*t2380 + t3528)*var2[3] + 0.03428571*t3249*var2[4] + 0.03428571*t3249*var2[5]);
  p_output1[2]=var2[5]*(0.03428571*(-1.*t1850*(-0.4999*t294 - 1.*t294*t4802 - 1.*t1104*t5108) - 1.*t1564*(0.4999*t1104 + t4912 + t5216) - 1.*t5219*(-1.*t1104*t1289 + t5222) - 1.*t1850*t6069)*var2[3] + 0.03428571*(-1.*t1850*(-1.*t294*t6346 + t1104*t7863) - 1.*t1564*(t1104*t6346 + t294*t7863) + t7968 + t7996)*var2[4] + 0.03428571*(t7968 + t7996 - 1.*t1850*(-1.*t294*t8022 + t1104*t8044) - 1.*t1564*(t1104*t8022 + t294*t8044))*var2[5]);
  p_output1[3]=var2[5]*(0.03428571*(-1.*t1289*t6346 - 1.*t1091*t7863 + t8108 + t8116 + t8120)*var2[4] + 0.03428571*(-1.*t1289*t8022 - 1.*t1091*t8044 + t8108 + t8116 + t8120)*var2[5]);
  p_output1[4]=0.03428571*(0.9063*t313 + t313*t4630 + 0.06*t313*t849)*Power(var2[5],2);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec_L4_J6_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L4_J6_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

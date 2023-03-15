/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:07 GMT-08:00
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
  double t519;
  double t233;
  double t302;
  double t803;
  double t190;
  double t317;
  double t1226;
  double t2494;
  double t3377;
  double t3436;
  double t3492;
  double t3600;
  double t3702;
  double t4249;
  double t4433;
  double t4467;
  double t4743;
  double t3684;
  double t3915;
  double t4592;
  double t4605;
  double t4674;
  double t4902;
  double t5342;
  double t5424;
  double t5639;
  double t3016;
  double t5931;
  double t5957;
  double t5996;
  double t5723;
  double t5827;
  double t6063;
  double t6105;
  double t6115;
  double t6149;
  double t6305;
  double t6378;
  double t6386;
  double t3601;
  double t3661;
  double t5211;
  double t5213;
  double t6747;
  double t6750;
  double t6764;
  double t6996;
  double t7030;
  double t7085;
  double t7137;
  double t7182;
  double t6978;
  double t7209;
  double t7214;
  double t7236;
  double t7247;
  double t7299;
  double t7394;
  double t7447;
  double t7479;
  double t7484;
  double t7237;
  double t7517;
  double t7686;
  double t7780;
  double t7795;
  double t7860;
  double t7907;
  double t7917;
  double t7929;
  double t7932;
  double t7973;
  double t7975;
  double t7899;
  double t7905;
  double t7959;
  double t7993;
  double t7997;
  double t8011;
  double t8012;
  double t8022;
  double t8023;
  double t8003;
  double t8049;
  double t8050;
  double t8051;
  double t8052;
  double t8043;
  double t8044;
  double t8045;
  double t8046;
  double t8047;
  double t8058;
  double t8059;
  t519 = Cos(var1[5]);
  t233 = Cos(var1[6]);
  t302 = Sin(var1[5]);
  t803 = Sin(var1[6]);
  t190 = Sin(var1[2]);
  t317 = -1.*t233*t302;
  t1226 = -1.*t519*t803;
  t2494 = t317 + t1226;
  t3377 = Cos(var1[2]);
  t3436 = t519*t233;
  t3492 = -1.*t302*t803;
  t3600 = t3436 + t3492;
  t3702 = t3377*t3600;
  t4249 = t233*t302;
  t4433 = t519*t803;
  t4467 = t4249 + t4433;
  t4743 = -1.*t190*t3600;
  t3684 = t190*t2494;
  t3915 = t3684 + t3702;
  t4592 = -1.*t190*t4467;
  t4605 = t4592 + t3702;
  t4674 = t3377*t2494;
  t4902 = t4674 + t4743;
  t5342 = t3377*t4467;
  t5424 = t190*t3600;
  t5639 = t5342 + t5424;
  t3016 = -1.*t190*t2494;
  t5931 = -1.*t519*t233;
  t5957 = t302*t803;
  t5996 = t5931 + t5957;
  t5723 = 0.85216*t3915*t4605;
  t5827 = 0.85216*t4902*t5639;
  t6063 = t3377*t5996;
  t6105 = t3016 + t6063;
  t6115 = 0.85216*t3915*t6105;
  t6149 = t190*t5996;
  t6305 = t4674 + t6149;
  t6378 = 0.85216*t4902*t6305;
  t6386 = t5723 + t5827 + t6115 + t6378;
  t3601 = -1.*t3377*t3600;
  t3661 = t3016 + t3601;
  t5211 = -1.*t3377*t4467;
  t5213 = t5211 + t4743;
  t6747 = 1.70432*t4605*t4902;
  t6750 = 1.70432*t4902*t6105;
  t6764 = t6747 + t6750;
  t6996 = -1.*t233;
  t7030 = 1. + t6996;
  t7085 = -0.9063*t7030;
  t7137 = -1.078185*t233;
  t7182 = t7085 + t7137;
  t6978 = 0.4999*t302;
  t7209 = t7182*t302;
  t7214 = -0.17188499999999995*t519*t803;
  t7236 = t6978 + t7209 + t7214;
  t7247 = -1.*t519;
  t7299 = 1. + t7247;
  t7394 = -0.4999*t7299;
  t7447 = t519*t7182;
  t7479 = 0.17188499999999995*t302*t803;
  t7484 = t7394 + t7447 + t7479;
  t7237 = -1.*t7236*t3600;
  t7517 = -1.*t2494*t7484;
  t7686 = t7237 + t7517;
  t7780 = t7236*t4467;
  t7795 = t3600*t7484;
  t7860 = t7780 + t7795;
  t7907 = -0.4999*t302;
  t7917 = -1.*t7182*t302;
  t7929 = 0.17188499999999995*t519*t803;
  t7932 = t7907 + t7917 + t7929;
  t7973 = 0.4999*t519;
  t7975 = t7973 + t7447 + t7479;
  t7899 = 0.85216*t4902*t7686;
  t7905 = t7236*t3600;
  t7959 = t2494*t7484;
  t7993 = 0.85216*t7860*t6105;
  t7997 = -1.*t2494*t7236;
  t8011 = 0.17188499999999995*t233*t302;
  t8012 = t8011 + t7929;
  t8022 = -0.17188499999999995*t519*t233;
  t8023 = t8022 + t7479;
  t8003 = -1.*t7484*t5996;
  t8049 = 0.4999*t803;
  t8050 = t7182*t803;
  t8051 = 0.17188499999999995*t233*t803;
  t8052 = t8049 + t8050 + t8051;
  t8043 = 0.4999*t233;
  t8044 = t7182*t233;
  t8045 = Power(t803,2);
  t8046 = -0.17188499999999995*t8045;
  t8047 = t8043 + t8044 + t8046;
  t8058 = 0.85216*t8052*t4902;
  t8059 = 0.85216*t8047*t6105;
  p_output1[0]=var2[1]*(-0.5*(0.85216*t3661*t3915 + 0.85216*Power(t4605,2) + 0.85216*Power(t4902,2) + 0.85216*t5213*t5639)*var2[2] - 0.5*t6386*var2[5] - 0.5*t6386*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(1.70432*t3661*t4902 + 1.70432*t4605*t5213)*var2[2] - 0.5*t6764*var2[5] - 0.5*t6764*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(0.85216*t5213*t7686 + 0.85216*t3661*t7860)*var2[2] - 0.5*(t7899 + 0.85216*t4902*(t7905 + t3600*t7932 + t7959 + t4467*t7975) + t7993 + 0.85216*t4605*(-1.*t2494*t7932 - 1.*t3600*t7975 + t7997 + t8003))*var2[5] - 0.5*(t7899 + t7993 + 0.85216*t4605*(t7997 + t8003 - 1.*t2494*t8012 - 1.*t3600*t8023) + 0.85216*t4902*(t7905 + t7959 + t3600*t8012 + t4467*t8023))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[1]*(-0.5*(0.85216*t3661*t8047 + 0.85216*t5213*t8052)*var2[2] - 0.5*(t8058 + t8059)*var2[5] - 0.5*(0.85216*t4902*(-0.4999*t803 - 0.17188499999999995*t233*t803 - 1.*t7182*t803) + 0.85216*t4605*(0.17188499999999995*Power(t233,2) + t8043 + t8044) + t8058 + t8059)*var2[6]);
  p_output1[6]=var2[1]*(0.07323676079999998*t3661*var2[2] + 0.07323676079999998*t6105*var2[5] + 0.07323676079999998*t6105*var2[6]);
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec_L5_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L5_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:06 GMT-08:00
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
  double t3215;
  double t2030;
  double t2051;
  double t3243;
  double t3620;
  double t3148;
  double t3423;
  double t3454;
  double t1466;
  double t3702;
  double t3963;
  double t4439;
  double t4592;
  double t5090;
  double t5424;
  double t5485;
  double t3492;
  double t4605;
  double t5691;
  double t5710;
  double t5723;
  double t4630;
  double t6063;
  double t6072;
  double t6105;
  double t6107;
  double t6115;
  double t6149;
  double t6305;
  double t6330;
  double t5578;
  double t5639;
  double t4649;
  double t4670;
  double t6504;
  double t6996;
  double t7085;
  double t7137;
  double t7182;
  double t7209;
  double t7214;
  double t7232;
  double t7410;
  double t7446;
  double t7447;
  double t7479;
  double t7480;
  double t7394;
  double t7517;
  double t7686;
  double t7695;
  double t7746;
  double t7753;
  double t7771;
  double t7780;
  double t7795;
  double t7807;
  double t7744;
  double t7813;
  double t7860;
  double t7866;
  double t7897;
  double t7899;
  double t7939;
  double t7951;
  double t7959;
  double t7967;
  double t7983;
  double t7984;
  double t7929;
  double t7932;
  double t7975;
  double t7997;
  double t7998;
  double t8009;
  double t8010;
  double t8012;
  double t8017;
  double t8002;
  double t8040;
  double t8041;
  double t8042;
  double t8043;
  double t8045;
  double t8046;
  double t8047;
  double t8048;
  double t8049;
  double t8053;
  double t8054;
  t3215 = Cos(var1[5]);
  t2030 = Cos(var1[6]);
  t2051 = Sin(var1[5]);
  t3243 = Sin(var1[6]);
  t3620 = Cos(var1[2]);
  t3148 = -1.*t2030*t2051;
  t3423 = -1.*t3215*t3243;
  t3454 = t3148 + t3423;
  t1466 = Sin(var1[2]);
  t3702 = t3215*t2030;
  t3963 = -1.*t2051*t3243;
  t4439 = t3702 + t3963;
  t4592 = t3620*t4439;
  t5090 = t2030*t2051;
  t5424 = t3215*t3243;
  t5485 = t5090 + t5424;
  t3492 = t1466*t3454;
  t4605 = t3492 + t4592;
  t5691 = t3620*t5485;
  t5710 = t1466*t4439;
  t5723 = t5691 + t5710;
  t4630 = t3620*t3454;
  t6063 = 1.70432*t4605*t5723;
  t6072 = -1.*t3215*t2030;
  t6105 = t2051*t3243;
  t6107 = t6072 + t6105;
  t6115 = t1466*t6107;
  t6149 = t4630 + t6115;
  t6305 = 1.70432*t4605*t6149;
  t6330 = t6063 + t6305;
  t5578 = -1.*t1466*t5485;
  t5639 = t5578 + t4592;
  t4649 = -1.*t1466*t4439;
  t4670 = t4630 + t4649;
  t6504 = -1.*t1466*t3454;
  t6996 = 0.85216*t4605*t5639;
  t7085 = 0.85216*t4670*t5723;
  t7137 = t3620*t6107;
  t7182 = t6504 + t7137;
  t7209 = 0.85216*t4605*t7182;
  t7214 = 0.85216*t4670*t6149;
  t7232 = t6996 + t7085 + t7209 + t7214;
  t7410 = -1.*t2030;
  t7446 = 1. + t7410;
  t7447 = -0.9063*t7446;
  t7479 = -1.078185*t2030;
  t7480 = t7447 + t7479;
  t7394 = 0.4999*t2051;
  t7517 = t7480*t2051;
  t7686 = -0.17188499999999995*t3215*t3243;
  t7695 = t7394 + t7517 + t7686;
  t7746 = -1.*t3215;
  t7753 = 1. + t7746;
  t7771 = -0.4999*t7753;
  t7780 = t3215*t7480;
  t7795 = 0.17188499999999995*t2051*t3243;
  t7807 = t7771 + t7780 + t7795;
  t7744 = -1.*t7695*t4439;
  t7813 = -1.*t3454*t7807;
  t7860 = t7744 + t7813;
  t7866 = t7695*t5485;
  t7897 = t4439*t7807;
  t7899 = t7866 + t7897;
  t7939 = -0.4999*t2051;
  t7951 = -1.*t7480*t2051;
  t7959 = 0.17188499999999995*t3215*t3243;
  t7967 = t7939 + t7951 + t7959;
  t7983 = 0.4999*t3215;
  t7984 = t7983 + t7780 + t7795;
  t7929 = 0.85216*t4605*t7860;
  t7932 = t7695*t4439;
  t7975 = t3454*t7807;
  t7997 = 0.85216*t7899*t6149;
  t7998 = -1.*t3454*t7695;
  t8009 = 0.17188499999999995*t2030*t2051;
  t8010 = t8009 + t7959;
  t8012 = -0.17188499999999995*t3215*t2030;
  t8017 = t8012 + t7795;
  t8002 = -1.*t7807*t6107;
  t8040 = 0.4999*t3243;
  t8041 = t7480*t3243;
  t8042 = 0.17188499999999995*t2030*t3243;
  t8043 = t8040 + t8041 + t8042;
  t8045 = 0.4999*t2030;
  t8046 = t7480*t2030;
  t8047 = Power(t3243,2);
  t8048 = -0.17188499999999995*t8047;
  t8049 = t8045 + t8046 + t8048;
  t8053 = 0.85216*t8043*t4605;
  t8054 = 0.85216*t8049*t6149;
  p_output1[0]=var2[0]*(-0.5*(1.70432*t4605*t4670 + 1.70432*t5639*t5723)*var2[2] - 0.5*t6330*var2[5] - 0.5*t6330*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(0.85216*Power(t4670,2) + 0.85216*Power(t5639,2) + 0.85216*(t4649 - 1.*t3620*t5485)*t5723 + 0.85216*t4605*(-1.*t3620*t4439 + t6504))*var2[2] - 0.5*t7232*var2[5] - 0.5*t7232*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(0.85216*t5639*t7860 + 0.85216*t4670*t7899)*var2[2] - 0.5*(t7929 + 0.85216*t4605*(t7932 + t4439*t7967 + t7975 + t5485*t7984) + t7997 + 0.85216*t5723*(-1.*t3454*t7967 - 1.*t4439*t7984 + t7998 + t8002))*var2[5] - 0.5*(t7929 + t7997 + 0.85216*t5723*(t7998 + t8002 - 1.*t3454*t8010 - 1.*t4439*t8017) + 0.85216*t4605*(t7932 + t7975 + t4439*t8010 + t5485*t8017))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[0]*(-0.5*(0.85216*t5639*t8043 + 0.85216*t4670*t8049)*var2[2] - 0.5*(t8053 + t8054)*var2[5] - 0.5*(0.85216*t4605*(-0.4999*t3243 - 0.17188499999999995*t2030*t3243 - 1.*t3243*t7480) + 0.85216*t5723*(0.17188499999999995*Power(t2030,2) + t8045 + t8046) + t8053 + t8054)*var2[6]);
  p_output1[6]=var2[0]*(0.07323676079999998*t4670*var2[2] + 0.07323676079999998*t6149*var2[5] + 0.07323676079999998*t6149*var2[6]);
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

#include "Ce1_vec_L5_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L5_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

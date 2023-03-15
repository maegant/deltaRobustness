/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:11 GMT-08:00
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
  double t1119;
  double t45;
  double t3852;
  double t3716;
  double t1276;
  double t1776;
  double t1875;
  double t1987;
  double t2711;
  double t4477;
  double t3702;
  double t4546;
  double t4605;
  double t4614;
  double t1055;
  double t2809;
  double t3485;
  double t3684;
  double t5380;
  double t5472;
  double t5534;
  double t4621;
  double t5090;
  double t5179;
  double t5213;
  double t5341;
  double t5345;
  double t5550;
  double t5723;
  double t5827;
  double t5957;
  double t3731;
  double t4086;
  double t4249;
  double t6042;
  double t6063;
  double t6105;
  double t6115;
  double t6149;
  double t6305;
  double t5639;
  double t5663;
  double t7417;
  double t6747;
  double t6762;
  double t6774;
  double t4475;
  double t5026;
  double t6496;
  double t6501;
  double t6557;
  double t6726;
  double t7897;
  double t7899;
  double t7929;
  double t7939;
  double t8039;
  double t8040;
  double t8005;
  double t8006;
  double t8009;
  double t8011;
  double t8022;
  double t8024;
  double t8025;
  double t8027;
  double t8043;
  double t8044;
  double t8031;
  double t8037;
  double t8038;
  double t8041;
  double t8020;
  double t8042;
  double t8048;
  double t8068;
  double t8069;
  double t8071;
  double t8072;
  double t8051;
  t1119 = Cos(var1[6]);
  t45 = Sin(var1[6]);
  t3852 = Cos(var1[5]);
  t3716 = Sin(var1[5]);
  t1276 = -1.*t1119;
  t1776 = 1. + t1276;
  t1875 = -0.9063*t1776;
  t1987 = -1.078185*t1119;
  t2711 = t1875 + t1987;
  t4477 = Cos(var1[2]);
  t3702 = Sin(var1[2]);
  t4546 = t3852*t1119;
  t4605 = -1.*t3716*t45;
  t4614 = t4546 + t4605;
  t1055 = 0.4999*t45;
  t2809 = t2711*t45;
  t3485 = 0.17188499999999995*t1119*t45;
  t3684 = t1055 + t2809 + t3485;
  t5380 = -1.*t1119*t3716;
  t5472 = -1.*t3852*t45;
  t5534 = t5380 + t5472;
  t4621 = t4477*t4614;
  t5090 = 0.4999*t1119;
  t5179 = t2711*t1119;
  t5213 = Power(t45,2);
  t5341 = -0.17188499999999995*t5213;
  t5345 = t5090 + t5179 + t5341;
  t5550 = t4477*t5534;
  t5723 = t3702*t5534;
  t5827 = t5723 + t4621;
  t5957 = 0.85216*t3684*t5827;
  t3731 = t1119*t3716;
  t4086 = t3852*t45;
  t4249 = t3731 + t4086;
  t6042 = -1.*t3852*t1119;
  t6063 = t3716*t45;
  t6105 = t6042 + t6063;
  t6115 = t3702*t6105;
  t6149 = t5550 + t6115;
  t6305 = 0.85216*t5345*t6149;
  t5639 = -1.*t3702*t4614;
  t5663 = t5550 + t5639;
  t7417 = -1.*t3702*t5534;
  t6747 = Power(t1119,2);
  t6762 = 0.17188499999999995*t6747;
  t6774 = t5090 + t5179 + t6762;
  t4475 = -1.*t3702*t4249;
  t5026 = t4475 + t4621;
  t6496 = -0.4999*t45;
  t6501 = -1.*t2711*t45;
  t6557 = -0.17188499999999995*t1119*t45;
  t6726 = t6496 + t6501 + t6557;
  t7897 = 0.85216*t3684*t5663;
  t7899 = t4477*t6105;
  t7929 = t7417 + t7899;
  t7939 = 0.85216*t5345*t7929;
  t8039 = t3852*t2711;
  t8040 = 0.17188499999999995*t3716*t45;
  t8005 = 0.4999*t3716;
  t8006 = t2711*t3716;
  t8009 = -0.17188499999999995*t3852*t45;
  t8011 = t8005 + t8006 + t8009;
  t8022 = -0.4999*t3716;
  t8024 = -1.*t2711*t3716;
  t8025 = 0.17188499999999995*t3852*t45;
  t8027 = t8022 + t8024 + t8025;
  t8043 = 0.4999*t3852;
  t8044 = t8043 + t8039 + t8040;
  t8031 = -1.*t3852;
  t8037 = 1. + t8031;
  t8038 = -0.4999*t8037;
  t8041 = t8038 + t8039 + t8040;
  t8020 = t8011*t4614;
  t8042 = t5534*t8041;
  t8048 = -1.*t5534*t8011;
  t8068 = 0.17188499999999995*t1119*t3716;
  t8069 = t8068 + t8025;
  t8071 = -0.17188499999999995*t3852*t1119;
  t8072 = t8071 + t8040;
  t8051 = -1.*t8041*t6105;
  p_output1[0]=var2[5]*(-0.5*(0.85216*t3684*t5026 + 0.85216*t5345*t5663)*var2[2] - 0.5*(t5957 + t6305)*var2[5] - 0.5*(t5957 + t6305 + 0.85216*t5827*t6726 + 0.85216*(t4249*t4477 + t3702*t4614)*t6774)*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(0.85216*t3684*(-1.*t4249*t4477 + t5639) + 0.85216*t5345*(-1.*t4477*t4614 + t7417))*var2[2] - 0.5*(t7897 + t7939)*var2[5] - 0.5*(0.85216*t5663*t6726 + 0.85216*t5026*t6774 + t7897 + t7939)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(0.85216*t5345*(t8020 + t4614*t8027 + t8042 + t4249*t8044) + 0.85216*t3684*(-1.*t5534*t8027 - 1.*t4614*t8044 + t8048 + t8051))*var2[5] - 0.5*(0.85216*t6726*(t4249*t8011 + t4614*t8041) + 0.85216*t6774*(-1.*t4614*t8011 - 1.*t5534*t8041) + 0.85216*t5345*(t8020 + t8042 + t4614*t8069 + t4249*t8072) + 0.85216*t3684*(t8048 + t8051 - 1.*t5534*t8069 - 1.*t4614*t8072))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(1.70432*t5345*t6726 + 1.70432*t3684*t6774)*var2[5]*var2[6];
  p_output1[6]=0.07323676079999998*t6726*var2[5]*var2[6];
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

#include "Ce1_vec_L5_J6_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L5_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

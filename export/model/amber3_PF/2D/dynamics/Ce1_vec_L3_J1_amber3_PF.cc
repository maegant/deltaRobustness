/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:55 GMT-08:00
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
  double t2510;
  double t2265;
  double t2318;
  double t2774;
  double t3455;
  double t2377;
  double t3054;
  double t3269;
  double t2006;
  double t3460;
  double t3510;
  double t3530;
  double t3701;
  double t4670;
  double t4933;
  double t4975;
  double t3299;
  double t3949;
  double t5416;
  double t5479;
  double t5548;
  double t4078;
  double t6328;
  double t6665;
  double t6750;
  double t6855;
  double t6992;
  double t7069;
  double t7085;
  double t7133;
  double t5159;
  double t5395;
  double t4091;
  double t4514;
  double t7442;
  double t7807;
  double t7812;
  double t7813;
  double t7818;
  double t7824;
  double t7831;
  double t7835;
  double t7867;
  double t7868;
  double t7873;
  double t7874;
  double t7878;
  double t7866;
  double t7883;
  double t7885;
  double t7892;
  double t7901;
  double t7904;
  double t7905;
  double t7907;
  double t7908;
  double t7909;
  double t7895;
  double t7913;
  double t7917;
  double t7931;
  double t7932;
  double t7937;
  double t7948;
  double t7949;
  double t7951;
  double t7952;
  double t7967;
  double t7968;
  double t7946;
  double t7947;
  double t7959;
  double t7975;
  double t7977;
  double t7990;
  double t7991;
  double t7993;
  double t7994;
  double t7982;
  double t8009;
  double t8010;
  double t8011;
  double t8012;
  double t8017;
  double t8020;
  double t8021;
  double t8022;
  double t8023;
  double t8028;
  double t8029;
  t2510 = Cos(var1[3]);
  t2265 = Cos(var1[4]);
  t2318 = Sin(var1[3]);
  t2774 = Sin(var1[4]);
  t3455 = Cos(var1[2]);
  t2377 = -1.*t2265*t2318;
  t3054 = -1.*t2510*t2774;
  t3269 = t2377 + t3054;
  t2006 = Sin(var1[2]);
  t3460 = t2510*t2265;
  t3510 = -1.*t2318*t2774;
  t3530 = t3460 + t3510;
  t3701 = t3455*t3530;
  t4670 = t2265*t2318;
  t4933 = t2510*t2774;
  t4975 = t4670 + t4933;
  t3299 = t2006*t3269;
  t3949 = t3299 + t3701;
  t5416 = t3455*t4975;
  t5479 = t2006*t3530;
  t5548 = t5416 + t5479;
  t4078 = t3455*t3269;
  t6328 = 1.70432*t3949*t5548;
  t6665 = -1.*t2510*t2265;
  t6750 = t2318*t2774;
  t6855 = t6665 + t6750;
  t6992 = t2006*t6855;
  t7069 = t4078 + t6992;
  t7085 = 1.70432*t3949*t7069;
  t7133 = t6328 + t7085;
  t5159 = -1.*t2006*t4975;
  t5395 = t5159 + t3701;
  t4091 = -1.*t2006*t3530;
  t4514 = t4078 + t4091;
  t7442 = -1.*t2006*t3269;
  t7807 = 0.85216*t3949*t5395;
  t7812 = 0.85216*t4514*t5548;
  t7813 = t3455*t6855;
  t7818 = t7442 + t7813;
  t7824 = 0.85216*t3949*t7818;
  t7831 = 0.85216*t4514*t7069;
  t7835 = t7807 + t7812 + t7824 + t7831;
  t7867 = -1.*t2265;
  t7868 = 1. + t7867;
  t7873 = -0.9063*t7868;
  t7874 = -1.078185*t2265;
  t7878 = t7873 + t7874;
  t7866 = 0.4999*t2318;
  t7883 = t7878*t2318;
  t7885 = -0.17188499999999995*t2510*t2774;
  t7892 = t7866 + t7883 + t7885;
  t7901 = -1.*t2510;
  t7904 = 1. + t7901;
  t7905 = -0.4999*t7904;
  t7907 = t2510*t7878;
  t7908 = 0.17188499999999995*t2318*t2774;
  t7909 = t7905 + t7907 + t7908;
  t7895 = -1.*t7892*t3530;
  t7913 = -1.*t3269*t7909;
  t7917 = t7895 + t7913;
  t7931 = t7892*t4975;
  t7932 = t3530*t7909;
  t7937 = t7931 + t7932;
  t7948 = -0.4999*t2318;
  t7949 = -1.*t7878*t2318;
  t7951 = 0.17188499999999995*t2510*t2774;
  t7952 = t7948 + t7949 + t7951;
  t7967 = 0.4999*t2510;
  t7968 = t7967 + t7907 + t7908;
  t7946 = 0.85216*t3949*t7917;
  t7947 = t7892*t3530;
  t7959 = t3269*t7909;
  t7975 = 0.85216*t7937*t7069;
  t7977 = -1.*t3269*t7892;
  t7990 = 0.17188499999999995*t2265*t2318;
  t7991 = t7990 + t7951;
  t7993 = -0.17188499999999995*t2510*t2265;
  t7994 = t7993 + t7908;
  t7982 = -1.*t7909*t6855;
  t8009 = 0.4999*t2774;
  t8010 = t7878*t2774;
  t8011 = 0.17188499999999995*t2265*t2774;
  t8012 = t8009 + t8010 + t8011;
  t8017 = 0.4999*t2265;
  t8020 = t7878*t2265;
  t8021 = Power(t2774,2);
  t8022 = -0.17188499999999995*t8021;
  t8023 = t8017 + t8020 + t8022;
  t8028 = 0.85216*t8012*t3949;
  t8029 = 0.85216*t8023*t7069;
  p_output1[0]=var2[0]*(-0.5*(1.70432*t3949*t4514 + 1.70432*t5395*t5548)*var2[2] - 0.5*t7133*var2[3] - 0.5*t7133*var2[4]);
  p_output1[1]=var2[0]*(-0.5*(0.85216*Power(t4514,2) + 0.85216*Power(t5395,2) + 0.85216*(t4091 - 1.*t3455*t4975)*t5548 + 0.85216*t3949*(-1.*t3455*t3530 + t7442))*var2[2] - 0.5*t7835*var2[3] - 0.5*t7835*var2[4]);
  p_output1[2]=var2[0]*(-0.5*(0.85216*t5395*t7917 + 0.85216*t4514*t7937)*var2[2] - 0.5*(t7946 + 0.85216*t3949*(t7947 + t3530*t7952 + t7959 + t4975*t7968) + t7975 + 0.85216*t5548*(-1.*t3269*t7952 - 1.*t3530*t7968 + t7977 + t7982))*var2[3] - 0.5*(t7946 + t7975 + 0.85216*t5548*(t7977 + t7982 - 1.*t3269*t7991 - 1.*t3530*t7994) + 0.85216*t3949*(t7947 + t7959 + t3530*t7991 + t4975*t7994))*var2[4]);
  p_output1[3]=var2[0]*(-0.5*(0.85216*t5395*t8012 + 0.85216*t4514*t8023)*var2[2] - 0.5*(t8028 + t8029)*var2[3] - 0.5*(0.85216*t3949*(-0.4999*t2774 - 0.17188499999999995*t2265*t2774 - 1.*t2774*t7878) + 0.85216*t5548*(0.17188499999999995*Power(t2265,2) + t8017 + t8020) + t8028 + t8029)*var2[4]);
  p_output1[4]=var2[0]*(0.07323676079999998*t4514*var2[2] + 0.07323676079999998*t7069*var2[3] + 0.07323676079999998*t7069*var2[4]);
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "Ce1_vec_L3_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L3_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

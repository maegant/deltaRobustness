/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:08 GMT-08:00
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
  double t1878;
  double t678;
  double t714;
  double t1924;
  double t3485;
  double t3661;
  double t3676;
  double t3915;
  double t4036;
  double t4086;
  double t4249;
  double t4433;
  double t3436;
  double t4674;
  double t4815;
  double t4902;
  double t205;
  double t3852;
  double t4546;
  double t4605;
  double t4630;
  double t1875;
  double t1987;
  double t2110;
  double t4914;
  double t4973;
  double t5026;
  double t5090;
  double t5213;
  double t5342;
  double t3684;
  double t4670;
  double t5424;
  double t5472;
  double t6105;
  double t6115;
  double t5691;
  double t5710;
  double t5723;
  double t5639;
  double t6378;
  double t6409;
  double t6420;
  double t6471;
  double t6557;
  double t6643;
  double t6750;
  double t6774;
  double t6814;
  double t6149;
  double t6305;
  double t6501;
  double t6837;
  double t6949;
  double t6978;
  double t7085;
  double t7116;
  double t7137;
  double t7209;
  double t7771;
  double t7780;
  double t7860;
  double t7861;
  double t7394;
  double t5646;
  double t5663;
  double t6496;
  double t6726;
  double t6746;
  double t8001;
  double t3079;
  double t3702;
  double t7214;
  double t7343;
  double t7417;
  double t8020;
  double t7795;
  double t7866;
  double t7897;
  double t8024;
  double t8025;
  double t8027;
  double t7905;
  double t7907;
  double t7929;
  double t8056;
  double t8057;
  double t8060;
  double t8061;
  double t8062;
  double t8064;
  double t8065;
  double t8066;
  double t8067;
  t1878 = Cos(var1[5]);
  t678 = Cos(var1[6]);
  t714 = Sin(var1[5]);
  t1924 = Sin(var1[6]);
  t3485 = t1878*t678;
  t3661 = -1.*t714*t1924;
  t3676 = t3485 + t3661;
  t3915 = -1.*t678;
  t4036 = 1. + t3915;
  t4086 = -0.9063*t4036;
  t4249 = -1.078185*t678;
  t4433 = t4086 + t4249;
  t3436 = Cos(var1[2]);
  t4674 = -1.*t678*t714;
  t4815 = -1.*t1878*t1924;
  t4902 = t4674 + t4815;
  t205 = Sin(var1[2]);
  t3852 = 0.4999*t714;
  t4546 = t4433*t714;
  t4605 = -0.17188499999999995*t1878*t1924;
  t4630 = t3852 + t4546 + t4605;
  t1875 = t678*t714;
  t1987 = t1878*t1924;
  t2110 = t1875 + t1987;
  t4914 = -1.*t1878;
  t4973 = 1. + t4914;
  t5026 = -0.4999*t4973;
  t5090 = t1878*t4433;
  t5213 = 0.17188499999999995*t714*t1924;
  t5342 = t5026 + t5090 + t5213;
  t3684 = t3436*t3676;
  t4670 = -1.*t4630*t3676;
  t5424 = -1.*t4902*t5342;
  t5472 = t4670 + t5424;
  t6105 = t205*t4902;
  t6115 = t6105 + t3684;
  t5691 = t4630*t2110;
  t5710 = t3676*t5342;
  t5723 = t5691 + t5710;
  t5639 = t3436*t4902;
  t6378 = -0.4999*t714;
  t6409 = -1.*t4433*t714;
  t6420 = 0.17188499999999995*t1878*t1924;
  t6471 = t6378 + t6409 + t6420;
  t6557 = 0.4999*t1878;
  t6643 = t6557 + t5090 + t5213;
  t6750 = -1.*t1878*t678;
  t6774 = t714*t1924;
  t6814 = t6750 + t6774;
  t6149 = 0.85216*t6115*t5472;
  t6305 = t4630*t3676;
  t6501 = t4902*t5342;
  t6837 = t205*t6814;
  t6949 = t5639 + t6837;
  t6978 = 0.85216*t5723*t6949;
  t7085 = t3436*t2110;
  t7116 = t205*t3676;
  t7137 = t7085 + t7116;
  t7209 = -1.*t4902*t4630;
  t7771 = 0.17188499999999995*t678*t714;
  t7780 = t7771 + t6420;
  t7860 = -0.17188499999999995*t1878*t678;
  t7861 = t7860 + t5213;
  t7394 = -1.*t5342*t6814;
  t5646 = -1.*t205*t3676;
  t5663 = t5639 + t5646;
  t6496 = t6471*t3676;
  t6726 = t2110*t6643;
  t6746 = t6305 + t6496 + t6501 + t6726;
  t8001 = -1.*t205*t4902;
  t3079 = -1.*t205*t2110;
  t3702 = t3079 + t3684;
  t7214 = -1.*t4902*t6471;
  t7343 = -1.*t3676*t6643;
  t7417 = t7209 + t7214 + t7343 + t7394;
  t8020 = 0.85216*t5663*t5472;
  t7795 = t7780*t3676;
  t7866 = t2110*t7861;
  t7897 = t6305 + t7795 + t6501 + t7866;
  t8024 = t3436*t6814;
  t8025 = t8001 + t8024;
  t8027 = 0.85216*t5723*t8025;
  t7905 = -1.*t4902*t7780;
  t7907 = -1.*t3676*t7861;
  t7929 = t7209 + t7905 + t7907 + t7394;
  t8056 = 0.4999*t678;
  t8057 = t4433*t678;
  t8060 = Power(t1924,2);
  t8061 = -0.17188499999999995*t8060;
  t8062 = t8056 + t8057 + t8061;
  t8064 = 0.4999*t1924;
  t8065 = t4433*t1924;
  t8066 = 0.17188499999999995*t678*t1924;
  t8067 = t8064 + t8065 + t8066;
  p_output1[0]=var2[2]*(-0.5*(0.85216*t3702*t5472 + 0.85216*t5663*t5723)*var2[2] - 0.5*(t6149 + 0.85216*t6115*t6746 + t6978 + 0.85216*t7137*t7417)*var2[5] - 0.5*(t6149 + t6978 + 0.85216*t6115*t7897 + 0.85216*t7137*t7929)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(0.85216*t5472*(-1.*t2110*t3436 + t5646) + 0.85216*t5723*(-1.*t3436*t3676 + t8001))*var2[2] - 0.5*(0.85216*t5663*t6746 + 0.85216*t3702*t7417 + t8020 + t8027)*var2[5] - 0.5*(0.85216*t5663*t7897 + 0.85216*t3702*t7929 + t8020 + t8027)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(1.70432*t5723*t6746 + 1.70432*t5472*t7417)*var2[5] - 0.5*(1.70432*t5723*t7897 + 1.70432*t5472*t7929)*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[2]*(-0.5*(0.85216*t6746*t8062 + 0.85216*t7417*t8067)*var2[5] - 0.5*(0.85216*t5723*(-0.4999*t1924 - 1.*t1924*t4433 - 0.17188499999999995*t1924*t678) + 0.85216*t5472*(0.17188499999999995*Power(t678,2) + t8056 + t8057) + 0.85216*t7897*t8062 + 0.85216*t7929*t8067)*var2[6]);
  p_output1[6]=var2[2]*(0.07323676079999998*t6746*var2[5] + 0.07323676079999998*t7897*var2[6]);
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

#include "Ce1_vec_L5_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L5_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

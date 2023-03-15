/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:30 GMT-08:00
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
  double t2929;
  double t2493;
  double t2737;
  double t3005;
  double t3694;
  double t2819;
  double t3312;
  double t3617;
  double t2432;
  double t3773;
  double t3851;
  double t3910;
  double t4130;
  double t4753;
  double t4852;
  double t5299;
  double t3692;
  double t4131;
  double t5493;
  double t5630;
  double t5740;
  double t4171;
  double t6562;
  double t7719;
  double t7745;
  double t7757;
  double t7766;
  double t7775;
  double t7777;
  double t7778;
  double t5460;
  double t5491;
  double t4496;
  double t4647;
  double t7790;
  double t7841;
  double t7842;
  double t7846;
  double t7847;
  double t7848;
  double t7849;
  double t7853;
  double t7868;
  double t7869;
  double t7870;
  double t7871;
  double t7878;
  double t7863;
  double t7879;
  double t7885;
  double t7886;
  double t7889;
  double t7890;
  double t7891;
  double t7893;
  double t7894;
  double t7895;
  double t7887;
  double t7896;
  double t7897;
  double t7901;
  double t7902;
  double t7905;
  double t7911;
  double t7912;
  double t7913;
  double t7914;
  double t7919;
  double t7921;
  double t7909;
  double t7910;
  double t7918;
  double t7926;
  double t7927;
  double t7936;
  double t7937;
  double t7939;
  double t7943;
  double t7931;
  double t7959;
  double t7961;
  double t7962;
  double t7964;
  double t7966;
  double t7967;
  double t7968;
  double t7969;
  double t7970;
  double t7977;
  double t7978;
  t2929 = Cos(var1[3]);
  t2493 = Cos(var1[4]);
  t2737 = Sin(var1[3]);
  t3005 = Sin(var1[4]);
  t3694 = Cos(var1[2]);
  t2819 = -1.*t2493*t2737;
  t3312 = -1.*t2929*t3005;
  t3617 = t2819 + t3312;
  t2432 = Sin(var1[2]);
  t3773 = t2929*t2493;
  t3851 = -1.*t2737*t3005;
  t3910 = t3773 + t3851;
  t4130 = t3694*t3910;
  t4753 = t2493*t2737;
  t4852 = t2929*t3005;
  t5299 = t4753 + t4852;
  t3692 = t2432*t3617;
  t4131 = t3692 + t4130;
  t5493 = t3694*t5299;
  t5630 = t2432*t3910;
  t5740 = t5493 + t5630;
  t4171 = t3694*t3617;
  t6562 = 7.1798*t4131*t5740;
  t7719 = -1.*t2929*t2493;
  t7745 = t2737*t3005;
  t7757 = t7719 + t7745;
  t7766 = t2432*t7757;
  t7775 = t4171 + t7766;
  t7777 = 7.1798*t4131*t7775;
  t7778 = t6562 + t7777;
  t5460 = -1.*t2432*t5299;
  t5491 = t5460 + t4130;
  t4496 = -1.*t2432*t3910;
  t4647 = t4171 + t4496;
  t7790 = -1.*t2432*t3617;
  t7841 = 3.5899*t4131*t5491;
  t7842 = 3.5899*t4647*t5740;
  t7846 = t3694*t7757;
  t7847 = t7790 + t7846;
  t7848 = 3.5899*t4131*t7847;
  t7849 = 3.5899*t4647*t7775;
  t7853 = t7841 + t7842 + t7848 + t7849;
  t7868 = -1.*t2493;
  t7869 = 1. + t7868;
  t7870 = -0.9063*t7869;
  t7871 = -1.0567*t2493;
  t7878 = t7870 + t7871;
  t7863 = 0.4999*t2737;
  t7879 = t7878*t2737;
  t7885 = -0.15039999999999998*t2929*t3005;
  t7886 = t7863 + t7879 + t7885;
  t7889 = -1.*t2929;
  t7890 = 1. + t7889;
  t7891 = -0.4999*t7890;
  t7893 = t2929*t7878;
  t7894 = 0.15039999999999998*t2737*t3005;
  t7895 = t7891 + t7893 + t7894;
  t7887 = -1.*t7886*t3910;
  t7896 = -1.*t3617*t7895;
  t7897 = t7887 + t7896;
  t7901 = t7886*t5299;
  t7902 = t3910*t7895;
  t7905 = t7901 + t7902;
  t7911 = -0.4999*t2737;
  t7912 = -1.*t7878*t2737;
  t7913 = 0.15039999999999998*t2929*t3005;
  t7914 = t7911 + t7912 + t7913;
  t7919 = 0.4999*t2929;
  t7921 = t7919 + t7893 + t7894;
  t7909 = 3.5899*t4131*t7897;
  t7910 = t7886*t3910;
  t7918 = t3617*t7895;
  t7926 = 3.5899*t7905*t7775;
  t7927 = -1.*t3617*t7886;
  t7936 = 0.15039999999999998*t2493*t2737;
  t7937 = t7936 + t7913;
  t7939 = -0.15039999999999998*t2929*t2493;
  t7943 = t7939 + t7894;
  t7931 = -1.*t7895*t7757;
  t7959 = 0.4999*t3005;
  t7961 = t7878*t3005;
  t7962 = 0.15039999999999998*t2493*t3005;
  t7964 = t7959 + t7961 + t7962;
  t7966 = 0.4999*t2493;
  t7967 = t7878*t2493;
  t7968 = Power(t3005,2);
  t7969 = -0.15039999999999998*t7968;
  t7970 = t7966 + t7967 + t7969;
  t7977 = 3.5899*t7964*t4131;
  t7978 = 3.5899*t7970*t7775;
  p_output1[0]=var2[0]*(-0.5*(7.1798*t4131*t4647 + 7.1798*t5491*t5740)*var2[2] - 0.5*t7778*var2[3] - 0.5*t7778*var2[4]);
  p_output1[1]=var2[0]*(-0.5*(3.5899*Power(t4647,2) + 3.5899*Power(t5491,2) + 3.5899*(t4496 - 1.*t3694*t5299)*t5740 + 3.5899*t4131*(-1.*t3694*t3910 + t7790))*var2[2] - 0.5*t7853*var2[3] - 0.5*t7853*var2[4]);
  p_output1[2]=var2[0]*(-0.5*(3.5899*t5491*t7897 + 3.5899*t4647*t7905)*var2[2] - 0.5*(t7909 + 3.5899*t4131*(t7910 + t3910*t7914 + t7918 + t5299*t7921) + t7926 + 3.5899*t5740*(-1.*t3617*t7914 - 1.*t3910*t7921 + t7927 + t7931))*var2[3] - 0.5*(t7909 + t7926 + 3.5899*t5740*(t7927 + t7931 - 1.*t3617*t7937 - 1.*t3910*t7943) + 3.5899*t4131*(t7910 + t7918 + t3910*t7937 + t5299*t7943))*var2[4]);
  p_output1[3]=var2[0]*(-0.5*(3.5899*t5491*t7964 + 3.5899*t4647*t7970)*var2[2] - 0.5*(t7977 + t7978)*var2[3] - 0.5*(3.5899*t4131*(-0.4999*t3005 - 0.15039999999999998*t2493*t3005 - 1.*t3005*t7878) + 3.5899*t5740*(0.15039999999999998*Power(t2493,2) + t7966 + t7967) + t7977 + t7978)*var2[4]);
  p_output1[4]=var2[0]*(0.26996047999999995*t4647*var2[2] + 0.26996047999999995*t7775*var2[3] + 0.26996047999999995*t7775*var2[4]);
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

#include "Ce1_vec_L3_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L3_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

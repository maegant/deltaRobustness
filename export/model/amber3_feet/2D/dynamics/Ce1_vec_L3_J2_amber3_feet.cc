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
  double t1310;
  double t1121;
  double t1130;
  double t1686;
  double t578;
  double t1304;
  double t2158;
  double t2277;
  double t2290;
  double t2342;
  double t2372;
  double t2377;
  double t2540;
  double t3692;
  double t3773;
  double t4028;
  double t4647;
  double t2465;
  double t2594;
  double t4046;
  double t4130;
  double t4208;
  double t4752;
  double t5491;
  double t5493;
  double t5630;
  double t2278;
  double t6206;
  double t6562;
  double t7745;
  double t6008;
  double t6054;
  double t7766;
  double t7775;
  double t7777;
  double t7779;
  double t7782;
  double t7783;
  double t7784;
  double t2379;
  double t2440;
  double t4995;
  double t5407;
  double t7824;
  double t7831;
  double t7832;
  double t7848;
  double t7849;
  double t7854;
  double t7856;
  double t7857;
  double t7847;
  double t7861;
  double t7863;
  double t7870;
  double t7879;
  double t7885;
  double t7891;
  double t7893;
  double t7894;
  double t7897;
  double t7871;
  double t7899;
  double t7901;
  double t7905;
  double t7906;
  double t7907;
  double t7916;
  double t7918;
  double t7919;
  double t7922;
  double t7926;
  double t7929;
  double t7911;
  double t7913;
  double t7925;
  double t7934;
  double t7935;
  double t7949;
  double t7950;
  double t7952;
  double t7953;
  double t7939;
  double t7981;
  double t7982;
  double t7983;
  double t7984;
  double t7970;
  double t7971;
  double t7972;
  double t7976;
  double t7979;
  double t7988;
  double t7989;
  t1310 = Cos(var1[3]);
  t1121 = Cos(var1[4]);
  t1130 = Sin(var1[3]);
  t1686 = Sin(var1[4]);
  t578 = Sin(var1[2]);
  t1304 = -1.*t1121*t1130;
  t2158 = -1.*t1310*t1686;
  t2277 = t1304 + t2158;
  t2290 = Cos(var1[2]);
  t2342 = t1310*t1121;
  t2372 = -1.*t1130*t1686;
  t2377 = t2342 + t2372;
  t2540 = t2290*t2377;
  t3692 = t1121*t1130;
  t3773 = t1310*t1686;
  t4028 = t3692 + t3773;
  t4647 = -1.*t578*t2377;
  t2465 = t578*t2277;
  t2594 = t2465 + t2540;
  t4046 = -1.*t578*t4028;
  t4130 = t4046 + t2540;
  t4208 = t2290*t2277;
  t4752 = t4208 + t4647;
  t5491 = t2290*t4028;
  t5493 = t578*t2377;
  t5630 = t5491 + t5493;
  t2278 = -1.*t578*t2277;
  t6206 = -1.*t1310*t1121;
  t6562 = t1130*t1686;
  t7745 = t6206 + t6562;
  t6008 = 3.5899*t2594*t4130;
  t6054 = 3.5899*t4752*t5630;
  t7766 = t2290*t7745;
  t7775 = t2278 + t7766;
  t7777 = 3.5899*t2594*t7775;
  t7779 = t578*t7745;
  t7782 = t4208 + t7779;
  t7783 = 3.5899*t4752*t7782;
  t7784 = t6008 + t6054 + t7777 + t7783;
  t2379 = -1.*t2290*t2377;
  t2440 = t2278 + t2379;
  t4995 = -1.*t2290*t4028;
  t5407 = t4995 + t4647;
  t7824 = 7.1798*t4130*t4752;
  t7831 = 7.1798*t4752*t7775;
  t7832 = t7824 + t7831;
  t7848 = -1.*t1121;
  t7849 = 1. + t7848;
  t7854 = -0.9063*t7849;
  t7856 = -1.0567*t1121;
  t7857 = t7854 + t7856;
  t7847 = 0.4999*t1130;
  t7861 = t7857*t1130;
  t7863 = -0.15039999999999998*t1310*t1686;
  t7870 = t7847 + t7861 + t7863;
  t7879 = -1.*t1310;
  t7885 = 1. + t7879;
  t7891 = -0.4999*t7885;
  t7893 = t1310*t7857;
  t7894 = 0.15039999999999998*t1130*t1686;
  t7897 = t7891 + t7893 + t7894;
  t7871 = -1.*t7870*t2377;
  t7899 = -1.*t2277*t7897;
  t7901 = t7871 + t7899;
  t7905 = t7870*t4028;
  t7906 = t2377*t7897;
  t7907 = t7905 + t7906;
  t7916 = -0.4999*t1130;
  t7918 = -1.*t7857*t1130;
  t7919 = 0.15039999999999998*t1310*t1686;
  t7922 = t7916 + t7918 + t7919;
  t7926 = 0.4999*t1310;
  t7929 = t7926 + t7893 + t7894;
  t7911 = 3.5899*t4752*t7901;
  t7913 = t7870*t2377;
  t7925 = t2277*t7897;
  t7934 = 3.5899*t7907*t7775;
  t7935 = -1.*t2277*t7870;
  t7949 = 0.15039999999999998*t1121*t1130;
  t7950 = t7949 + t7919;
  t7952 = -0.15039999999999998*t1310*t1121;
  t7953 = t7952 + t7894;
  t7939 = -1.*t7897*t7745;
  t7981 = 0.4999*t1686;
  t7982 = t7857*t1686;
  t7983 = 0.15039999999999998*t1121*t1686;
  t7984 = t7981 + t7982 + t7983;
  t7970 = 0.4999*t1121;
  t7971 = t7857*t1121;
  t7972 = Power(t1686,2);
  t7976 = -0.15039999999999998*t7972;
  t7979 = t7970 + t7971 + t7976;
  t7988 = 3.5899*t7984*t4752;
  t7989 = 3.5899*t7979*t7775;
  p_output1[0]=var2[1]*(-0.5*(3.5899*t2440*t2594 + 3.5899*Power(t4130,2) + 3.5899*Power(t4752,2) + 3.5899*t5407*t5630)*var2[2] - 0.5*t7784*var2[3] - 0.5*t7784*var2[4]);
  p_output1[1]=var2[1]*(-0.5*(7.1798*t2440*t4752 + 7.1798*t4130*t5407)*var2[2] - 0.5*t7832*var2[3] - 0.5*t7832*var2[4]);
  p_output1[2]=var2[1]*(-0.5*(3.5899*t5407*t7901 + 3.5899*t2440*t7907)*var2[2] - 0.5*(t7911 + 3.5899*t4752*(t7913 + t2377*t7922 + t7925 + t4028*t7929) + t7934 + 3.5899*t4130*(-1.*t2277*t7922 - 1.*t2377*t7929 + t7935 + t7939))*var2[3] - 0.5*(t7911 + t7934 + 3.5899*t4130*(t7935 + t7939 - 1.*t2277*t7950 - 1.*t2377*t7953) + 3.5899*t4752*(t7913 + t7925 + t2377*t7950 + t4028*t7953))*var2[4]);
  p_output1[3]=var2[1]*(-0.5*(3.5899*t2440*t7979 + 3.5899*t5407*t7984)*var2[2] - 0.5*(t7988 + t7989)*var2[3] - 0.5*(3.5899*t4752*(-0.4999*t1686 - 0.15039999999999998*t1121*t1686 - 1.*t1686*t7857) + 3.5899*t4130*(0.15039999999999998*Power(t1121,2) + t7970 + t7971) + t7988 + t7989)*var2[4]);
  p_output1[4]=var2[1]*(0.26996047999999995*t2440*var2[2] + 0.26996047999999995*t7775*var2[3] + 0.26996047999999995*t7775*var2[4]);
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

#include "Ce1_vec_L3_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L3_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

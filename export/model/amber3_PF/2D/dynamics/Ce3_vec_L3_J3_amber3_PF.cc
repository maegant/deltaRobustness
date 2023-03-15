/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:05 GMT-08:00
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
  double t702;
  double t370;
  double t550;
  double t931;
  double t2135;
  double t2499;
  double t2640;
  double t2886;
  double t2987;
  double t3004;
  double t3056;
  double t3155;
  double t1826;
  double t3582;
  double t3603;
  double t3639;
  double t244;
  double t2860;
  double t3234;
  double t3504;
  double t3517;
  double t697;
  double t1029;
  double t1298;
  double t3767;
  double t3808;
  double t3883;
  double t3897;
  double t3900;
  double t3903;
  double t3535;
  double t3941;
  double t3942;
  double t2709;
  double t4185;
  double t4190;
  double t4202;
  double t4765;
  double t4769;
  double t4794;
  double t4795;
  double t4804;
  double t4811;
  double t4827;
  double t4828;
  double t4829;
  double t4903;
  double t4908;
  double t4636;
  double t4705;
  double t3994;
  double t5023;
  double t5029;
  double t5042;
  double t4483;
  double t4513;
  double t4526;
  double t5004;
  double t5006;
  double t5022;
  double t5045;
  double t5052;
  double t5242;
  double t5332;
  double t4928;
  double t4930;
  double t4931;
  double t4948;
  double t4951;
  double t6832;
  double t6835;
  double t6841;
  double t6870;
  double t6911;
  double t6949;
  double t7108;
  double t4985;
  double t4989;
  double t4996;
  double t4998;
  double t5107;
  double t5117;
  double t5165;
  double t5170;
  double t7592;
  double t7626;
  double t7836;
  double t5580;
  double t5679;
  double t5755;
  double t5797;
  double t5861;
  double t5886;
  double t5887;
  t702 = Cos(var1[3]);
  t370 = Cos(var1[4]);
  t550 = Sin(var1[3]);
  t931 = Sin(var1[4]);
  t2135 = t702*t370;
  t2499 = -1.*t550*t931;
  t2640 = t2135 + t2499;
  t2886 = -1.*t370;
  t2987 = 1. + t2886;
  t3004 = -0.9063*t2987;
  t3056 = -1.078185*t370;
  t3155 = t3004 + t3056;
  t1826 = Sin(var1[2]);
  t3582 = -1.*t370*t550;
  t3603 = -1.*t702*t931;
  t3639 = t3582 + t3603;
  t244 = Cos(var1[2]);
  t2860 = 0.4999*t550;
  t3234 = t3155*t550;
  t3504 = -0.17188499999999995*t702*t931;
  t3517 = t2860 + t3234 + t3504;
  t697 = t370*t550;
  t1029 = t702*t931;
  t1298 = t697 + t1029;
  t3767 = -1.*t702;
  t3808 = 1. + t3767;
  t3883 = -0.4999*t3808;
  t3897 = t702*t3155;
  t3900 = 0.17188499999999995*t550*t931;
  t3903 = t3883 + t3897 + t3900;
  t3535 = -1.*t3517*t2640;
  t3941 = -1.*t3639*t3903;
  t3942 = t3535 + t3941;
  t2709 = -1.*t1826*t2640;
  t4185 = t3517*t1298;
  t4190 = t2640*t3903;
  t4202 = t4185 + t4190;
  t4765 = t3517*t2640;
  t4769 = -0.4999*t550;
  t4794 = -1.*t3155*t550;
  t4795 = 0.17188499999999995*t702*t931;
  t4804 = t4769 + t4794 + t4795;
  t4811 = t4804*t2640;
  t4827 = t3639*t3903;
  t4828 = 0.4999*t702;
  t4829 = t4828 + t3897 + t3900;
  t4903 = t1298*t4829;
  t4908 = t4765 + t4811 + t4827 + t4903;
  t4636 = t244*t3639;
  t4705 = t4636 + t2709;
  t3994 = -1.*t1826*t3639;
  t5023 = -1.*t702*t370;
  t5029 = t550*t931;
  t5042 = t5023 + t5029;
  t4483 = -1.*t1826*t1298;
  t4513 = t244*t2640;
  t4526 = t4483 + t4513;
  t5004 = -1.*t3639*t3517;
  t5006 = -1.*t3639*t4804;
  t5022 = -1.*t2640*t4829;
  t5045 = -1.*t3903*t5042;
  t5052 = t5004 + t5006 + t5022 + t5045;
  t5242 = t1826*t3639;
  t5332 = t5242 + t4513;
  t4928 = 0.4999*t370;
  t4930 = t3155*t370;
  t4931 = Power(t931,2);
  t4948 = -0.17188499999999995*t4931;
  t4951 = t4928 + t4930 + t4948;
  t6832 = 0.17188499999999995*t370*t550;
  t6835 = t6832 + t4795;
  t6841 = t6835*t2640;
  t6870 = -0.17188499999999995*t702*t370;
  t6911 = t6870 + t3900;
  t6949 = t1298*t6911;
  t7108 = t4765 + t6841 + t4827 + t6949;
  t4985 = 0.4999*t931;
  t4989 = t3155*t931;
  t4996 = 0.17188499999999995*t370*t931;
  t4998 = t4985 + t4989 + t4996;
  t5107 = 0.85216*t4705*t3942;
  t5117 = t244*t5042;
  t5165 = t3994 + t5117;
  t5170 = 0.85216*t4202*t5165;
  t7592 = -1.*t3639*t6835;
  t7626 = -1.*t2640*t6911;
  t7836 = t5004 + t7592 + t7626 + t5045;
  t5580 = 0.85216*t5332*t3942;
  t5679 = t1826*t5042;
  t5755 = t4636 + t5679;
  t5797 = 0.85216*t4202*t5755;
  t5861 = t244*t1298;
  t5886 = t1826*t2640;
  t5887 = t5861 + t5886;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(0.85216*t3942*t4526 + 0.85216*t4202*t4705)*var2[0] + 0.5*(0.85216*(-1.*t1298*t244 + t2709)*t3942 + 0.85216*(-1.*t244*t2640 + t3994)*t4202)*var2[1])*var2[2];
  p_output1[3]=var2[2]*(0.5*(0.85216*t4908*t5332 + t5580 + t5797 + 0.85216*t5052*t5887)*var2[0] + 0.5*(0.85216*t4705*t4908 + 0.85216*t4526*t5052 + t5107 + t5170)*var2[1] + 0.5*(1.70432*t4202*t4908 + 1.70432*t3942*t5052)*var2[2] + 0.5*(0.85216*t4908*t4951 + 0.85216*t4998*t5052)*var2[3] - 0.07323676079999998*t4908*var2[4]);
  p_output1[4]=var2[2]*(0.5*(t5580 + t5797 + 0.85216*t5332*t7108 + 0.85216*t5887*t7836)*var2[0] + 0.5*(t5107 + t5170 + 0.85216*t4705*t7108 + 0.85216*t4526*t7836)*var2[1] + 0.5*(1.70432*t4202*t7108 + 1.70432*t3942*t7836)*var2[2] + 0.5*(0.85216*t3942*(0.17188499999999995*Power(t370,2) + t4928 + t4930) + 0.85216*t4951*t7108 + 0.85216*t4998*t7836 + 0.85216*t4202*(-0.4999*t931 - 1.*t3155*t931 - 0.17188499999999995*t370*t931))*var2[3] - 0.07323676079999998*t7108*var2[4]);
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

#include "Ce3_vec_L3_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L3_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

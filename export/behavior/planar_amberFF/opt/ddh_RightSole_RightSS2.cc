/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:13 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t11;
  double t940;
  double t1984;
  double t460;
  double t539;
  double t615;
  double t932;
  double t1049;
  double t1386;
  double t1945;
  double t2434;
  double t2594;
  double t2703;
  double t4141;
  double t3972;
  double t4010;
  double t4054;
  double t3687;
  double t4380;
  double t4104;
  double t4221;
  double t4300;
  double t3533;
  double t4517;
  double t4546;
  double t4596;
  double t2927;
  double t2994;
  double t3211;
  double t3236;
  double t3249;
  double t3399;
  double t1955;
  double t1990;
  double t2161;
  double t2182;
  double t2275;
  double t2288;
  double t2384;
  double t4379;
  double t4641;
  double t4787;
  double t5899;
  double t5906;
  double t5914;
  double t5668;
  double t5202;
  double t5203;
  double t5256;
  double t5280;
  double t5289;
  double t5322;
  double t5062;
  double t5088;
  double t5091;
  double t5099;
  double t5100;
  double t5133;
  double t5346;
  double t5357;
  double t5420;
  double t6532;
  double t6537;
  double t6548;
  double t6559;
  double t6561;
  double t6566;
  double t6732;
  double t6739;
  double t6752;
  double t6765;
  double t6770;
  double t6835;
  double t6847;
  double t6482;
  double t6512;
  double t6905;
  double t6922;
  double t6574;
  double t6595;
  double t6621;
  double t6990;
  double t6994;
  double t7018;
  double t7039;
  double t7044;
  double t7047;
  double t6800;
  double t6867;
  double t6871;
  double t6877;
  double t6878;
  double t6880;
  double t6884;
  double t6894;
  double t6963;
  double t6348;
  double t6350;
  double t6106;
  double t6107;
  double t6117;
  double t6147;
  double t6172;
  double t6207;
  double t7267;
  double t7347;
  double t7278;
  double t7280;
  double t2906;
  double t4956;
  double t4970;
  double t5024;
  double t6645;
  double t6646;
  double t6659;
  double t6596;
  double t6601;
  double t6619;
  double t17;
  double t1570;
  double t7421;
  double t7430;
  double t7451;
  double t7452;
  double t7063;
  double t7067;
  double t7076;
  double t7094;
  double t7117;
  double t7119;
  double t7468;
  double t7501;
  t11 = Cos(var1[8]);
  t940 = Sin(var1[8]);
  t1984 = Sin(var1[7]);
  t460 = -1.*t11;
  t539 = 1. + t460;
  t615 = -1.3127*t539;
  t932 = -1.3127*t11;
  t1049 = -0.06*t940;
  t1386 = t615 + t932 + t1049;
  t1945 = Cos(var1[7]);
  t2434 = t1945*t11;
  t2594 = -1.*t1984*t940;
  t2703 = t2434 + t2594;
  t4141 = Cos(var1[6]);
  t3972 = -1.*t11*t1984;
  t4010 = -1.*t1945*t940;
  t4054 = t3972 + t4010;
  t3687 = Sin(var1[6]);
  t4380 = Cos(var1[2]);
  t4104 = t3687*t4054;
  t4221 = t4141*t2703;
  t4300 = t4104 + t4221;
  t3533 = Sin(var1[2]);
  t4517 = t4141*t4054;
  t4546 = -1.*t3687*t2703;
  t4596 = t4517 + t4546;
  t2927 = -1.*t1945;
  t2994 = 1. + t2927;
  t3211 = -0.9063*t2994;
  t3236 = -0.06*t11*t1984;
  t3249 = t1945*t1386;
  t3399 = t3211 + t3236 + t3249;
  t1955 = 0.06*t1945*t11;
  t1990 = 0.9063*t1984;
  t2161 = t1984*t1386;
  t2182 = t1955 + t1990 + t2161;
  t2275 = t11*t1984;
  t2288 = t1945*t940;
  t2384 = t2275 + t2288;
  t4379 = -1.*t3533*t4300;
  t4641 = t4380*t4596;
  t4787 = t4379 + t4641;
  t5899 = -1.*t3687*t4054;
  t5906 = -1.*t4141*t2703;
  t5914 = t5899 + t5906;
  t5668 = -1.*t3533*t4596;
  t5202 = -1.*t3687*t2384;
  t5203 = t5202 + t4221;
  t5256 = 0.4999*t3687;
  t5280 = t3687*t3399;
  t5289 = t4141*t2182;
  t5322 = t5256 + t5280 + t5289;
  t5062 = -1.*t4141;
  t5088 = 1. + t5062;
  t5091 = -0.4999*t5088;
  t5099 = t4141*t3399;
  t5100 = -1.*t3687*t2182;
  t5133 = t5091 + t5099 + t5100;
  t5346 = t4141*t2384;
  t5357 = t3687*t2703;
  t5420 = t5346 + t5357;
  t6532 = 0.9063*t1945;
  t6537 = t6532 + t3236 + t3249;
  t6548 = -0.06*t1945*t11;
  t6559 = -0.9063*t1984;
  t6561 = -1.*t1984*t1386;
  t6566 = t6548 + t6559 + t6561;
  t6732 = -1.*t1945*t11;
  t6739 = t1984*t940;
  t6752 = t6732 + t6739;
  t6765 = t4141*t6752;
  t6770 = t5899 + t6765;
  t6835 = t3687*t6752;
  t6847 = t4517 + t6835;
  t6482 = 0.4999*t4054;
  t6512 = t3399*t4054;
  t6905 = -0.06*t11;
  t6922 = 0. + t6905;
  t6574 = t2182*t2703;
  t6595 = t5322*t4300;
  t6621 = t5133*t4596;
  t6990 = t6922*t1984;
  t6994 = -0.06*t1945*t940;
  t7018 = t6990 + t6994;
  t7039 = t1945*t6922;
  t7044 = 0.06*t1984*t940;
  t7047 = t7039 + t7044;
  t6800 = t3533*t6770;
  t6867 = t4380*t6847;
  t6871 = t6800 + t6867;
  t6877 = var2[0]*t6871;
  t6878 = t4380*t6770;
  t6880 = -1.*t3533*t6847;
  t6884 = t6878 + t6880;
  t6894 = var2[1]*t6884;
  t6963 = Power(t11,2);
  t6348 = 0.4999*t4141;
  t6350 = t6348 + t5099 + t5100;
  t6106 = -0.4999*t3687;
  t6107 = -1.*t3687*t3399;
  t6117 = -1.*t4141*t2182;
  t6147 = t6106 + t6107 + t6117;
  t6172 = -1.*t4141*t2384;
  t6207 = t6172 + t4546;
  t7267 = t4380*t5203;
  t7347 = -1.*t3533*t5203;
  t7278 = -1.*t3533*t5420;
  t7280 = t7267 + t7278;
  t2906 = 0.4999*t2703;
  t4956 = t4380*t4300;
  t4970 = t3533*t4596;
  t5024 = t4956 + t4970;
  t6645 = t4141*t6537;
  t6646 = t3687*t6566;
  t6659 = t6645 + t6646;
  t6596 = -1.*t3687*t6537;
  t6601 = t4141*t6566;
  t6619 = t6596 + t6601;
  t17 = 0.9063*t11;
  t1570 = t11*t1386;
  t7421 = -1.*t2182*t4054;
  t7430 = -1.*t3399*t6752;
  t7451 = var2[1]*t4787;
  t7452 = var2[0]*t5024;
  t7063 = -1.*t3687*t7018;
  t7067 = t4141*t7047;
  t7076 = t7063 + t7067;
  t7094 = t4141*t7018;
  t7117 = t3687*t7047;
  t7119 = t7094 + t7117;
  t7468 = -1.*t5133*t6770;
  t7501 = -1.*t5322*t6847;
  p_output1[0]=(t4787*var2[0] + (-1.*t4300*t4380 + t5668)*var2[1])*var2[2] + ((t4641 + t3533*t5914)*var2[0] + (t5668 + t4380*t5914)*var2[1] + (t5203*t5322 + t5203*t6147 + t5133*t6207 + t5420*t6350)*var2[2])*var2[6] + (t6877 + t6894 + (t6595 + t5203*t6619 + t6621 + t5420*t6659)*var2[2] + (t6482 + t6512 + t2384*t6537 + t2703*t6566 + t6574)*var2[6])*var2[7] + (t6877 + t6894 + (t6595 + t6621 + t5203*t7076 + t5420*t7119)*var2[2] + (t6482 + t6512 + t6574 + t2384*t7018 + t2703*t7047)*var2[6] + (t11*t6922 + 0.06*t6963 - 0.9063*t940 - 1.*t1386*t940 - 0.06*Power(t940,2))*var2[7])*var2[8] + t5024*var3[0] + t4787*var3[1] + (t5133*t5203 + t5322*t5420)*var3[2] + (t2182*t2384 + t2906 + t2703*t3399)*var3[6] + (t1570 + t17 + 0.06*t11*t940)*var3[7];
  p_output1[1]=(t7280*var2[0] + (-1.*t4380*t5420 + t7347)*var2[1])*var2[2] + ((t3533*t6207 + t7267)*var2[0] + (t4380*t6207 + t7347)*var2[1] + (-1.*t4596*t5322 - 1.*t5133*t5914 - 1.*t4596*t6147 - 1.*t4300*t6350)*var2[2])*var2[6] + (t7451 + t7452 + (-1.*t4596*t6619 - 1.*t4300*t6659 + t7468 + t7501)*var2[2] + (t2906 - 1.*t2703*t6537 - 1.*t4054*t6566 + t7421 + t7430)*var2[6])*var2[7] + (t7451 + t7452 + (-1.*t4596*t7076 - 1.*t4300*t7119 + t7468 + t7501)*var2[2] + (t2906 - 1.*t2703*t7018 - 1.*t4054*t7047 + t7421 + t7430)*var2[6] + (t1570 + t17 + 0.12*t11*t940 + t6922*t940)*var2[7])*var2[8] + (t3533*t5203 + t4380*t5420)*var3[0] + t7280*var3[1] + (-1.*t4596*t5133 - 1.*t4300*t5322)*var3[2] + (0.4999*t2384 - 1.*t2182*t2703 - 1.*t3399*t4054)*var3[6] + (-0.06*t6963 + 0.9063*t940 + t1386*t940)*var3[7] - 0.06*var3[8];
  p_output1[2]=var3[2] + var3[6] + var3[7] + var3[8];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightSole_RightSS2.hh"

namespace RightSS2
{

void ddh_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:28 GMT-08:00
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
  double t159;
  double t695;
  double t951;
  double t918;
  double t383;
  double t409;
  double t485;
  double t498;
  double t562;
  double t1092;
  double t865;
  double t1141;
  double t1166;
  double t1212;
  double t1384;
  double t1458;
  double t1558;
  double t1571;
  double t1582;
  double t1596;
  double t1657;
  double t1214;
  double t374;
  double t642;
  double t737;
  double t856;
  double t861;
  double t924;
  double t1012;
  double t1031;
  double t1674;
  double t1044;
  double t1263;
  double t2085;
  double t2355;
  double t2380;
  double t2437;
  double t2338;
  double t2343;
  double t2352;
  double t2447;
  double t2457;
  double t2482;
  double t2776;
  double t2783;
  double t2796;
  double t2843;
  double t2574;
  double t2653;
  double t2665;
  double t2668;
  double t1673;
  double t1883;
  double t2578;
  double t2580;
  double t2582;
  double t2684;
  double t2688;
  double t2720;
  double t1343;
  double t1928;
  double t1934;
  double t3043;
  double t3049;
  double t3149;
  double t2558;
  double t2563;
  double t2587;
  double t2594;
  double t2621;
  double t2637;
  double t1949;
  double t4036;
  double t4043;
  double t3577;
  double t3602;
  double t3638;
  double t3678;
  double t4294;
  double t4328;
  double t4330;
  double t4340;
  double t3766;
  double t3768;
  double t3772;
  double t3825;
  double t4187;
  double t4219;
  double t3905;
  double t3934;
  double t3948;
  double t4129;
  double t3280;
  double t3294;
  double t3311;
  double t3334;
  double t3386;
  double t3398;
  double t3402;
  double t3433;
  double t3461;
  double t4154;
  double t4341;
  double t4878;
  double t4879;
  double t4383;
  double t4884;
  double t4892;
  double t4941;
  double t4944;
  double t4549;
  double t4772;
  double t4778;
  double t4813;
  double t4841;
  double t4843;
  double t4853;
  double t4858;
  double t5045;
  double t5047;
  double t5058;
  double t5086;
  double t5096;
  double t5326;
  double t5333;
  double t5358;
  double t5413;
  double t5420;
  double t5439;
  double t2844;
  double t2930;
  double t5567;
  double t4706;
  double t4790;
  double t4873;
  double t4883;
  double t4924;
  double t4931;
  double t4950;
  double t4968;
  double t5014;
  double t5017;
  double t5037;
  double t5148;
  double t5158;
  double t5184;
  double t5185;
  double t5195;
  double t5217;
  double t5281;
  double t5286;
  double t5930;
  double t5973;
  double t5998;
  double t6011;
  double t5830;
  double t4702;
  double t5885;
  double t4786;
  double t2170;
  double t6695;
  double t6700;
  double t6708;
  double t6478;
  double t5582;
  double t5587;
  double t6522;
  double t6572;
  double t6593;
  double t6615;
  double t6618;
  double t6629;
  double t6652;
  double t6658;
  double t6668;
  double t6791;
  double t6798;
  double t6802;
  double t6822;
  double t6830;
  double t6833;
  double t6900;
  double t6907;
  t159 = Cos(var1[4]);
  t695 = Sin(var1[4]);
  t951 = Cos(var1[3]);
  t918 = Sin(var1[3]);
  t383 = -1.*t159;
  t409 = 1. + t383;
  t485 = -0.9063*t409;
  t498 = -1.078185*t159;
  t562 = t485 + t498;
  t1092 = Cos(var1[2]);
  t865 = Sin(var1[2]);
  t1141 = t951*t159;
  t1166 = -1.*t918*t695;
  t1212 = t1141 + t1166;
  t1384 = 0.4999*t695;
  t1458 = t562*t695;
  t1558 = 0.17188499999999995*t159*t695;
  t1571 = t1384 + t1458 + t1558;
  t1582 = t159*t918;
  t1596 = t951*t695;
  t1657 = t1582 + t1596;
  t1214 = -1.*t1092*t1212;
  t374 = 0.4999*t159;
  t642 = t562*t159;
  t737 = Power(t695,2);
  t856 = -0.17188499999999995*t737;
  t861 = t374 + t642 + t856;
  t924 = -1.*t159*t918;
  t1012 = -1.*t951*t695;
  t1031 = t924 + t1012;
  t1674 = -1.*t865*t1212;
  t1044 = -1.*t865*t1031;
  t1263 = t1044 + t1214;
  t2085 = -1.*t1092*t1031;
  t2355 = -1.*t951*t159;
  t2380 = t918*t695;
  t2437 = t2355 + t2380;
  t2338 = t1092*t1031;
  t2343 = t2338 + t1674;
  t2352 = 0.85216*t1571*t2343;
  t2447 = t1092*t2437;
  t2457 = t1044 + t2447;
  t2482 = 0.85216*t861*t2457;
  t2776 = -0.4999*t695;
  t2783 = -1.*t562*t695;
  t2796 = -0.17188499999999995*t159*t695;
  t2843 = t2776 + t2783 + t2796;
  t2574 = 0.85216*t1571*t1263;
  t2653 = Power(t159,2);
  t2665 = 0.17188499999999995*t2653;
  t2668 = 0. + t374 + t642 + t2665;
  t1673 = -1.*t1092*t1657;
  t1883 = t1673 + t1674;
  t2578 = -1.*t865*t2437;
  t2580 = t2085 + t2578;
  t2582 = 0.85216*t861*t2580;
  t2684 = -1.*t865*t1657;
  t2688 = t1092*t1212;
  t2720 = t2684 + t2688;
  t1343 = 0.85216*t861*t1263;
  t1928 = 0.85216*t1571*t1883;
  t1934 = t1343 + t1928;
  t3043 = 0.85216*t1571*t2720;
  t3049 = 0.85216*t861*t2343;
  t3149 = t3043 + t3049;
  t2558 = t2352 + t2482;
  t2563 = 0.5*var2[0]*t2558;
  t2587 = t2574 + t2582;
  t2594 = 0.5*var2[1]*t2587;
  t2621 = t2563 + t2594;
  t2637 = var2[3]*t2621;
  t1949 = t865*t1657;
  t4036 = t951*t562;
  t4043 = 0.17188499999999995*t918*t695;
  t3577 = -0.4999*t918;
  t3602 = -1.*t562*t918;
  t3638 = 0.17188499999999995*t951*t695;
  t3678 = t3577 + t3602 + t3638;
  t4294 = 0.4999*t918;
  t4328 = t562*t918;
  t4330 = -0.17188499999999995*t951*t695;
  t4340 = t4294 + t4328 + t4330;
  t3766 = -0.4999*t951;
  t3768 = -1.*t951*t562;
  t3772 = -0.17188499999999995*t918*t695;
  t3825 = t3766 + t3768 + t3772;
  t4187 = 0.4999*t951;
  t4219 = t4187 + t4036 + t4043;
  t3905 = -1.*t951;
  t3934 = 1. + t3905;
  t3948 = -0.4999*t3934;
  t4129 = t3948 + t4036 + t4043;
  t3280 = 0.85216*t1571*t2457;
  t3294 = t1092*t1657;
  t3311 = t3294 + t2578;
  t3334 = 0.85216*t861*t3311;
  t3386 = t1949 + t2447;
  t3398 = 0.85216*t861*t3386;
  t3402 = t865*t2437;
  t3433 = t2338 + t3402;
  t3461 = 0.85216*t1571*t3433;
  t4154 = -1.*t1657*t4129;
  t4341 = -1.*t4340*t2437;
  t4878 = 0.17188499999999995*t159*t918;
  t4879 = t4878 + t3638;
  t4383 = t1031*t4340;
  t4884 = 0.17188499999999995*t951*t159;
  t4892 = t4884 + t3772;
  t4941 = -0.17188499999999995*t951*t159;
  t4944 = t4941 + t4043;
  t4549 = t4129*t2437;
  t4772 = t865*t1031;
  t4778 = t4772 + t2688;
  t4813 = t4340*t1212;
  t4841 = t3678*t1212;
  t4843 = t1031*t4129;
  t4853 = t1657*t4219;
  t4858 = t4813 + t4841 + t4843 + t4853;
  t5045 = -1.*t1031*t4340;
  t5047 = -1.*t1031*t3678;
  t5058 = -1.*t1212*t4219;
  t5086 = -1.*t4129*t2437;
  t5096 = t5045 + t5047 + t5058 + t5086;
  t5326 = 0.85216*t1571*t4778;
  t5333 = 0.85216*t861*t3433;
  t5358 = t5326 + t5333;
  t5413 = 0.85216*t861*t4858;
  t5420 = 0.85216*t1571*t5096;
  t5439 = t5413 + t5420;
  t2844 = 0.85216*t2843*t2343;
  t2930 = 0.85216*t2843*t1263;
  t5567 = t374 + t642 + t2665;
  t4706 = 0.85216*t2843*t2457;
  t4790 = 0.85216*t2843*t3433;
  t4873 = 0.85216*t2843*t4858;
  t4883 = -1.*t4879*t1212;
  t4924 = -1.*t1031*t4892;
  t4931 = -1.*t1031*t4219;
  t4950 = -1.*t1031*t4944;
  t4968 = -1.*t3678*t2437;
  t5014 = -1.*t4879*t2437;
  t5017 = t4883 + t4924 + t4154 + t4931 + t4950 + t4341 + t4968 + t5014;
  t5037 = 0.85216*t1571*t5017;
  t5148 = t1031*t3678;
  t5158 = t1031*t4879;
  t5184 = t4879*t1657;
  t5185 = t1212*t4892;
  t5195 = t1212*t4219;
  t5217 = t1212*t4944;
  t5281 = t4383 + t5148 + t5158 + t5184 + t5185 + t5195 + t5217 + t4549;
  t5286 = 0.85216*t861*t5281;
  t5930 = -0.4999*t159;
  t5973 = -1.*t562*t159;
  t5998 = -0.17188499999999995*t2653;
  t6011 = 0. + t5930 + t5973 + t5998;
  t5830 = 0.85216*t5567*t2343;
  t4702 = 0.85216*t2668*t2343;
  t5885 = 0.85216*t5567*t4778;
  t4786 = 0.85216*t2668*t4778;
  t2170 = t865*t1212;
  t6695 = -1.*t1031*t4879;
  t6700 = -1.*t1212*t4944;
  t6708 = t5045 + t6695 + t6700 + t5086;
  t6478 = t3294 + t2170;
  t5582 = 0.85216*t5567*t2720;
  t5587 = t5582 + t2844 + t2352 + t2482;
  t6522 = -1.*t4340*t1212;
  t6572 = -1.*t1031*t4129;
  t6593 = t6522 + t6572;
  t6615 = t4340*t1657;
  t6618 = t1212*t4129;
  t6629 = t6615 + t6618;
  t6652 = t4879*t1212;
  t6658 = t1657*t4944;
  t6668 = t4813 + t6652 + t4843 + t6658;
  t6791 = 0.85216*t2843*t4778;
  t6798 = 0.85216*t5567*t6478;
  t6802 = t6791 + t5326 + t6798 + t5333;
  t6822 = 0.85216*t5567*t6593;
  t6830 = 0.85216*t2843*t6629;
  t6833 = 0.85216*t861*t6668;
  t6900 = 0.85216*t1571*t6708;
  t6907 = t6822 + t6830 + t6833 + t6900;
  p_output1[0]=(0.5*t1934*var2[0] + 0.5*(0.85216*t1571*(t1214 + t1949) + 0.85216*(t2085 + t2170)*t861)*var2[1])*var2[3];
  p_output1[1]=t2637;
  p_output1[2]=(0.5*(t2352 + t2482 + 0.85216*t2668*t2720 + t2844)*var2[0] + 0.5*(t2574 + t2582 + 0.85216*t1883*t2668 + t2930)*var2[1])*var2[3];
  p_output1[3]=0.5*t3149*var2[3];
  p_output1[4]=0.5*t1934*var2[3];
  p_output1[5]=0.5*t3149*var2[0] + 0.5*t1934*var2[1];
  p_output1[6]=t2637;
  p_output1[7]=(0.5*(t3398 + t3461)*var2[0] + 0.5*(t3280 + t3334)*var2[1] + 0.5*(0.85216*t1571*(-1.*t1212*t3678 - 2.*t2437*t3678 - 1.*t1031*t3825 + t4154 - 2.*t1031*t4219 + t4341) + 0.85216*(2.*t1031*t3678 + t1657*t3678 + t1212*t3825 + 2.*t1212*t4219 + t4383 + t4549)*t861)*var2[2])*var2[3];
  p_output1[8]=(0.5*(t3398 + t3461 + t4786 + t4790)*var2[0] + 0.5*(t3280 + t3334 + t4702 + t4706)*var2[1] + 0.5*(t4873 + t5037 + 0.85216*t2668*t5096 + t5286)*var2[2])*var2[3];
  p_output1[9]=0.5*t5358*var2[3];
  p_output1[10]=0.5*t2558*var2[3];
  p_output1[11]=0.5*t5439*var2[3];
  p_output1[12]=0.5*t5358*var2[0] + 0.5*t2558*var2[1] + 0.5*t5439*var2[2];
  p_output1[13]=(0.5*t5587*var2[0] + 0.5*(t2574 + t2582 + t2930 + 0.85216*t1883*t5567)*var2[1])*var2[3];
  p_output1[14]=(0.5*(t3398 + t3461 + t4790 + t5885)*var2[0] + 0.5*(t3280 + t3334 + t4706 + t5830)*var2[1] + 0.5*(t4873 + t5037 + t5286 + 0.85216*t5096*t5567)*var2[2])*var2[3];
  p_output1[15]=var2[3]*(0.5*(t3398 + 1.70432*t2843*t3433 + t3461 + t4786 + t5885 + 0.85216*t4778*t6011 + 0.85216*t2843*t6478)*var2[0] + 0.5*(1.70432*t2457*t2843 + 0.85216*t2720*t2843 + t3280 + t3334 + t4702 + t5830 + 0.85216*t2343*t6011)*var2[1] + 0.5*(0.85216*t1571*(t4154 + t4341 - 2.*t2437*t4879 + t4883 + t4924 - 2.*t1031*t4944) + 0.85216*t2843*t6593 + 0.85216*t6011*t6629 + 1.70432*t2843*t6668 + 0.85216*t2668*t6708 + 0.85216*t5567*t6708 + 0.85216*(t4383 + t4549 + 2.*t1031*t4879 + 2.*t1212*t4944 + t5184 + t5185)*t861)*var2[2] + 0.5*(1.70432*t1571*t2843 + 1.70432*Power(t2843,2) + 1.70432*t2668*t5567 + 1.70432*t6011*t861)*var2[3] - 0.07323676079999998*t6011*var2[4]);
  p_output1[16]=0.5*t6802*var2[3];
  p_output1[17]=0.5*t5587*var2[3];
  p_output1[18]=0.5*t6907*var2[3];
  p_output1[19]=0.5*t6802*var2[0] + 0.5*t5587*var2[1] + 0.5*t6907*var2[2] + (1.70432*t1571*t5567 + 1.70432*t2843*t861)*var2[3] - 0.07323676079999998*t2843*var2[4];
  p_output1[20]=-0.07323676079999998*t2843*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L3_J4_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L3_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:42 GMT-08:00
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
  double t33;
  double t408;
  double t1166;
  double t1271;
  double t1851;
  double t2130;
  double t2132;
  double t2190;
  double t2206;
  double t2263;
  double t2324;
  double t2703;
  double t466;
  double t519;
  double t1101;
  double t1775;
  double t2424;
  double t2478;
  double t2756;
  double t2793;
  double t2900;
  double t2906;
  double t3110;
  double t3164;
  double t3243;
  double t3444;
  double t3588;
  double t3621;
  double t3626;
  double t4533;
  double t4617;
  double t4646;
  double t4968;
  double t3266;
  double t3627;
  double t4525;
  double t4344;
  double t4378;
  double t4422;
  double t3763;
  double t3797;
  double t3904;
  double t4118;
  double t4176;
  double t4188;
  double t4804;
  double t4833;
  double t162;
  double t2480;
  double t2907;
  double t2910;
  double t5086;
  double t5110;
  double t5112;
  double t3736;
  double t4449;
  double t4480;
  double t5270;
  double t5313;
  double t5372;
  double t5901;
  double t5950;
  double t5954;
  double t5968;
  double t6011;
  double t6040;
  double t6067;
  double t6079;
  double t6081;
  double t6106;
  double t6150;
  double t6169;
  double t6200;
  double t6221;
  double t6331;
  double t6332;
  double t6337;
  double t6338;
  double t6340;
  double t6363;
  double t6375;
  double t5506;
  double t4890;
  double t5127;
  double t5146;
  double t5651;
  double t5176;
  double t5187;
  double t5210;
  double t7545;
  double t7558;
  double t7589;
  double t7614;
  double t7620;
  double t7634;
  double t7960;
  double t7982;
  double t8001;
  double t6282;
  double t6287;
  double t6314;
  double t6327;
  double t7803;
  double t7849;
  double t7856;
  double t7568;
  double t7792;
  double t7793;
  double t6242;
  double t6260;
  double t6269;
  double t6273;
  double t6276;
  double t7802;
  double t7950;
  double t8024;
  double t8088;
  double t8365;
  double t8422;
  double t8452;
  double t8457;
  double t8476;
  double t6523;
  double t6506;
  double t6654;
  double t6780;
  double t8484;
  double t8486;
  double t8491;
  double t8508;
  double t8511;
  double t6416;
  double t6421;
  double t6426;
  double t6428;
  double t7399;
  double t7405;
  double t7412;
  double t7220;
  double t7301;
  double t7303;
  double t8667;
  double t8668;
  double t8671;
  double t8673;
  double t8670;
  double t8674;
  double t8675;
  double t8677;
  double t8678;
  double t8679;
  double t8676;
  double t8680;
  double t8681;
  double t8557;
  double t8567;
  double t8596;
  double t8598;
  double t8608;
  double t8695;
  double t8696;
  double t8697;
  double t8630;
  double t8634;
  double t8637;
  double t8639;
  double t8641;
  double t8653;
  double t8655;
  double t8656;
  double t8658;
  double t8659;
  t33 = Sin(var1[6]);
  t408 = Cos(var1[7]);
  t1166 = Cos(var1[8]);
  t1271 = Sin(var1[7]);
  t1851 = -1.*t1166;
  t2130 = 1. + t1851;
  t2132 = -1.3127*t2130;
  t2190 = -1.3127*t1166;
  t2206 = Sin(var1[8]);
  t2263 = -0.06*t2206;
  t2324 = t2132 + t2190 + t2263;
  t2703 = Cos(var1[6]);
  t466 = -1.*t408;
  t519 = 1. + t466;
  t1101 = -0.9063*t519;
  t1775 = -0.06*t1166*t1271;
  t2424 = t408*t2324;
  t2478 = t1101 + t1775 + t2424;
  t2756 = 0.06*t408*t1166;
  t2793 = 0.9063*t1271;
  t2900 = t1271*t2324;
  t2906 = t2756 + t2793 + t2900;
  t3110 = -1.*t1166*t1271;
  t3164 = -1.*t408*t2206;
  t3243 = t3110 + t3164;
  t3444 = t408*t1166;
  t3588 = -1.*t1271*t2206;
  t3621 = t3444 + t3588;
  t3626 = t2703*t3621;
  t4533 = t1166*t1271;
  t4617 = t408*t2206;
  t4646 = t4533 + t4617;
  t4968 = Sin(var1[2]);
  t3266 = t33*t3243;
  t3627 = t3266 + t3626;
  t4525 = Cos(var1[2]);
  t4344 = t2703*t3243;
  t4378 = -1.*t33*t3621;
  t4422 = t4344 + t4378;
  t3763 = -1.*t2703;
  t3797 = 1. + t3763;
  t3904 = -0.4999*t3797;
  t4118 = t2703*t2478;
  t4176 = -1.*t33*t2906;
  t4188 = t3904 + t4118 + t4176;
  t4804 = -1.*t33*t4646;
  t4833 = t4804 + t3626;
  t162 = 0.4999*t33;
  t2480 = t33*t2478;
  t2907 = t2703*t2906;
  t2910 = t162 + t2480 + t2907;
  t5086 = t2703*t4646;
  t5110 = t33*t3621;
  t5112 = t5086 + t5110;
  t3736 = -1.*t2910*t3627;
  t4449 = -1.*t4188*t4422;
  t4480 = t3736 + t4449;
  t5270 = t4188*t4833;
  t5313 = t2910*t5112;
  t5372 = t5270 + t5313;
  t5901 = -1.*t33*t3243;
  t5950 = -1.*t2703*t3621;
  t5954 = t5901 + t5950;
  t5968 = -1.*t4188*t5954;
  t6011 = 0.4999*t2703;
  t6040 = t6011 + t4118 + t4176;
  t6067 = -1.*t6040*t3627;
  t6079 = -0.4999*t33;
  t6081 = -1.*t33*t2478;
  t6106 = -1.*t2703*t2906;
  t6150 = t6079 + t6081 + t6106;
  t6169 = -1.*t6150*t4422;
  t6200 = -1.*t2910*t4422;
  t6221 = t5968 + t6067 + t6169 + t6200;
  t6331 = t6150*t4833;
  t6332 = t2910*t4833;
  t6337 = -1.*t2703*t4646;
  t6338 = t6337 + t4378;
  t6340 = t4188*t6338;
  t6363 = t6040*t5112;
  t6375 = t6331 + t6332 + t6340 + t6363;
  t5506 = -1.*t4968*t4833;
  t4890 = t4525*t4833;
  t5127 = -1.*t4968*t5112;
  t5146 = t4890 + t5127;
  t5651 = -1.*t4968*t4422;
  t5176 = -1.*t4968*t3627;
  t5187 = t4525*t4422;
  t5210 = t5176 + t5187;
  t7545 = 0.9063*t408;
  t7558 = t7545 + t1775 + t2424;
  t7589 = -0.06*t408*t1166;
  t7614 = -0.9063*t1271;
  t7620 = -1.*t1271*t2324;
  t7634 = t7589 + t7614 + t7620;
  t7960 = -1.*t408*t1166;
  t7982 = t1271*t2206;
  t8001 = t7960 + t7982;
  t6282 = 0.9063*t1166;
  t6287 = t1166*t2324;
  t6314 = 0.06*t1166*t2206;
  t6327 = t6282 + t6287 + t6314;
  t7803 = -1.*t33*t7558;
  t7849 = t2703*t7634;
  t7856 = t7803 + t7849;
  t7568 = t2703*t7558;
  t7792 = t33*t7634;
  t7793 = t7568 + t7792;
  t6242 = Power(t1166,2);
  t6260 = -0.06*t6242;
  t6269 = 0.9063*t2206;
  t6273 = t2324*t2206;
  t6276 = t6260 + t6269 + t6273;
  t7802 = -1.*t7793*t3627;
  t7950 = -1.*t7856*t4422;
  t8024 = t2703*t8001;
  t8088 = t5901 + t8024;
  t8365 = -1.*t4188*t8088;
  t8422 = t33*t8001;
  t8452 = t4344 + t8422;
  t8457 = -1.*t2910*t8452;
  t8476 = t7802 + t7950 + t8365 + t8457;
  t6523 = 0.4999*t3621;
  t6506 = t2906*t4646;
  t6654 = t2478*t3621;
  t6780 = t6506 + t6523 + t6654;
  t8484 = t2910*t3627;
  t8486 = t7856*t4833;
  t8491 = t4188*t4422;
  t8508 = t7793*t5112;
  t8511 = t8484 + t8486 + t8491 + t8508;
  t6416 = -1.*t2478*t3243;
  t6421 = 0.4999*t4646;
  t6426 = -1.*t2906*t3621;
  t6428 = t6416 + t6421 + t6426;
  t7399 = t4525*t3627;
  t7405 = t4968*t4422;
  t7412 = t7399 + t7405;
  t7220 = t4968*t4833;
  t7301 = t4525*t5112;
  t7303 = t7220 + t7301;
  t8667 = -0.06*t408*t2206;
  t8668 = t1775 + t8667;
  t8671 = 0.06*t1271*t2206;
  t8673 = t7589 + t8671;
  t8670 = -1.*t33*t8668;
  t8674 = t2703*t8673;
  t8675 = t8670 + t8674;
  t8677 = t2703*t8668;
  t8678 = t33*t8673;
  t8679 = t8677 + t8678;
  t8676 = -1.*t4422*t8675;
  t8680 = -1.*t3627*t8679;
  t8681 = t8676 + t8680 + t8365 + t8457;
  t8557 = -1.*t2906*t3243;
  t8567 = -1.*t2478*t8001;
  t8596 = 0.4999*t3243;
  t8598 = t2478*t3243;
  t8608 = t2906*t3621;
  t8695 = t4833*t8675;
  t8696 = t5112*t8679;
  t8697 = t8484 + t8491 + t8695 + t8696;
  t8630 = 1.142857*t7412*t4480;
  t8634 = t4968*t8088;
  t8637 = t4525*t8452;
  t8639 = t8634 + t8637;
  t8641 = 1.142857*t5372*t8639;
  t8653 = 1.142857*t5210*t4480;
  t8655 = t4525*t8088;
  t8656 = -1.*t4968*t8452;
  t8658 = t8655 + t8656;
  t8659 = 1.142857*t5372*t8658;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(1.142857*t4480*t5146 + 1.142857*t5210*t5372)*var2[0] + 0.5*(1.142857*t4480*(-1.*t4525*t5112 + t5506) + 1.142857*t5372*(-1.*t3627*t4525 + t5651))*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[2]*(0.5*(1.142857*t5372*(t5187 + t4968*t5954) + 1.142857*t4480*(t4890 + t4968*t6338) + 1.142857*t6221*t7303 + 1.142857*t6375*t7412)*var2[0] + 0.5*(1.142857*t5372*(t5651 + t4525*t5954) + 1.142857*t5146*t6221 + 1.142857*t4480*(t5506 + t4525*t6338) + 1.142857*t5210*t6375)*var2[1] + 0.5*(2.285714*t4480*t6221 + 2.285714*t5372*t6375)*var2[2] + 0.5*(1.142857*t6221*t6428 + 1.142857*t6375*t6780)*var2[6] + 0.5*(1.142857*t6221*t6276 + 1.142857*t6327*t6375)*var2[7] - 0.03428571*t6221*var2[8]);
  p_output1[7]=var2[2]*(0.5*(1.142857*t7303*t8476 + 1.142857*t7412*t8511 + t8630 + t8641)*var2[0] + 0.5*(1.142857*t5146*t8476 + 1.142857*t5210*t8511 + t8653 + t8659)*var2[1] + 0.5*(2.285714*t4480*t8476 + 2.285714*t5372*t8511)*var2[2] + 0.5*(1.142857*t6428*t8476 + 1.142857*t6780*t8511 + 1.142857*t4480*(t6523 - 1.*t3621*t7558 - 1.*t3243*t7634 + t8557 + t8567) + 1.142857*t5372*(t4646*t7558 + t3621*t7634 + t8596 + t8598 + t8608))*var2[6] + 0.5*(1.142857*t6276*t8476 + 1.142857*t6327*t8511)*var2[7] - 0.03428571*t8476*var2[8]);
  p_output1[8]=var2[2]*(0.5*(t8630 + t8641 + 1.142857*t7303*t8681 + 1.142857*t7412*t8697)*var2[0] + 0.5*(t8653 + t8659 + 1.142857*t5146*t8681 + 1.142857*t5210*t8697)*var2[1] + 0.5*(2.285714*t4480*t8681 + 2.285714*t5372*t8697)*var2[2] + 0.5*(1.142857*t4480*(t6523 + t8557 + t8567 - 1.*t3621*t8668 - 1.*t3243*t8673) + 1.142857*t5372*(t8596 + t8598 + t8608 + t4646*t8668 + t3621*t8673) + 1.142857*t6428*t8681 + 1.142857*t6780*t8697)*var2[6] + 0.5*(1.142857*(0. - 0.9063*t2206 - 0.06*Power(t2206,2) - 1.*t2206*t2324)*t5372 + 1.142857*t4480*t6327 + 1.142857*t6276*t8681 + 1.142857*t6327*t8697)*var2[7] - 0.03428571*t8681*var2[8]);
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

#include "Ce3_vec_L7_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L7_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

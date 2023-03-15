/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:45 GMT-08:00
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
  double t499;
  double t292;
  double t162;
  double t1020;
  double t677;
  double t776;
  double t887;
  double t970;
  double t1101;
  double t1181;
  double t1721;
  double t1722;
  double t1775;
  double t2867;
  double t2815;
  double t2820;
  double t2831;
  double t2793;
  double t2132;
  double t2190;
  double t2263;
  double t2270;
  double t2287;
  double t2292;
  double t1214;
  double t1260;
  double t1329;
  double t293;
  double t501;
  double t1192;
  double t1208;
  double t2937;
  double t2900;
  double t2756;
  double t1615;
  double t1794;
  double t2424;
  double t2480;
  double t2860;
  double t2907;
  double t3003;
  double t3015;
  double t3266;
  double t3683;
  double t3719;
  double t3727;
  double t3790;
  double t3794;
  double t3860;
  double t3973;
  double t4062;
  double t4118;
  double t3289;
  double t3904;
  double t5210;
  double t5270;
  double t5313;
  double t4480;
  double t4617;
  double t5428;
  double t5430;
  double t6079;
  double t6221;
  double t6276;
  double t6281;
  double t6282;
  double t6287;
  double t6300;
  double t6307;
  double t6314;
  double t6327;
  double t5931;
  double t5987;
  double t6011;
  double t6233;
  double t6260;
  double t6269;
  double t6654;
  double t6703;
  double t6467;
  double t6475;
  double t6488;
  double t6492;
  double t6506;
  double t6653;
  double t6780;
  double t6804;
  double t6839;
  double t6848;
  double t6871;
  double t6904;
  double t7112;
  double t7115;
  double t7131;
  double t7133;
  double t7138;
  double t7169;
  double t7425;
  double t7444;
  double t7485;
  double t4462;
  double t4519;
  double t4791;
  double t4890;
  double t7545;
  double t7568;
  double t7614;
  double t7792;
  double t8603;
  double t8608;
  double t8612;
  double t8572;
  double t8574;
  double t8596;
  double t7009;
  double t7014;
  double t7034;
  double t7077;
  double t8653;
  double t8654;
  double t8658;
  double t8659;
  double t7205;
  double t7220;
  double t7301;
  double t7303;
  double t7313;
  double t8655;
  double t8660;
  double t8661;
  double t8681;
  double t8683;
  double t8685;
  double t7492;
  double t7502;
  double t7503;
  double t7516;
  double t7589;
  double t7849;
  double t7982;
  double t8024;
  double t8476;
  double t8486;
  double t8491;
  double t8508;
  double t8511;
  double t8549;
  double t8552;
  double t8556;
  double t8617;
  double t8620;
  double t8621;
  double t8569;
  double t8599;
  double t8710;
  double t8712;
  double t8713;
  double t8715;
  double t8717;
  double t8718;
  double t8632;
  double t8634;
  t499 = Sin(var1[7]);
  t292 = Cos(var1[8]);
  t162 = Cos(var1[7]);
  t1020 = Sin(var1[8]);
  t677 = -1.*t292;
  t776 = 1. + t677;
  t887 = -1.3127*t776;
  t970 = -1.3127*t292;
  t1101 = -0.06*t1020;
  t1181 = t887 + t970 + t1101;
  t1721 = t162*t292;
  t1722 = -1.*t499*t1020;
  t1775 = t1721 + t1722;
  t2867 = Cos(var1[6]);
  t2815 = -1.*t292*t499;
  t2820 = -1.*t162*t1020;
  t2831 = t2815 + t2820;
  t2793 = Sin(var1[6]);
  t2132 = -1.*t162;
  t2190 = 1. + t2132;
  t2263 = -0.9063*t2190;
  t2270 = -0.06*t292*t499;
  t2287 = t162*t1181;
  t2292 = t2263 + t2270 + t2287;
  t1214 = t292*t499;
  t1260 = t162*t1020;
  t1329 = t1214 + t1260;
  t293 = 0.06*t162*t292;
  t501 = 0.9063*t499;
  t1192 = t499*t1181;
  t1208 = t293 + t501 + t1192;
  t2937 = Sin(var1[2]);
  t2900 = t2867*t1775;
  t2756 = Cos(var1[2]);
  t1615 = t1208*t1329;
  t1794 = 0.4999*t1775;
  t2424 = t2292*t1775;
  t2480 = t1615 + t1794 + t2424;
  t2860 = t2793*t2831;
  t2907 = t2860 + t2900;
  t3003 = t2867*t2831;
  t3015 = -1.*t2793*t1775;
  t3266 = t3003 + t3015;
  t3683 = -1.*t2292*t2831;
  t3719 = 0.4999*t1329;
  t3727 = -1.*t1208*t1775;
  t3790 = t3683 + t3719 + t3727;
  t3794 = -1.*t2793*t1329;
  t3860 = t3794 + t2900;
  t3973 = t2867*t1329;
  t4062 = t2793*t1775;
  t4118 = t3973 + t4062;
  t3289 = -1.*t2937*t3266;
  t3904 = -1.*t2937*t3860;
  t5210 = -1.*t2793*t2831;
  t5270 = -1.*t2867*t1775;
  t5313 = t5210 + t5270;
  t4480 = t2756*t3266;
  t4617 = t2756*t3860;
  t5428 = -1.*t2867*t1329;
  t5430 = t5428 + t3015;
  t6079 = t2867*t2292;
  t6221 = -1.*t2793*t1208;
  t6276 = -0.4999*t2793;
  t6281 = -1.*t2793*t2292;
  t6282 = -1.*t2867*t1208;
  t6287 = t6276 + t6281 + t6282;
  t6300 = 0.4999*t2793;
  t6307 = t2793*t2292;
  t6314 = t2867*t1208;
  t6327 = t6300 + t6307 + t6314;
  t5931 = -1.*t2867;
  t5987 = 1. + t5931;
  t6011 = -0.4999*t5987;
  t6233 = t6011 + t6079 + t6221;
  t6260 = 0.4999*t2867;
  t6269 = t6260 + t6079 + t6221;
  t6654 = 0.9063*t162;
  t6703 = t6654 + t2270 + t2287;
  t6467 = -0.06*t162*t292;
  t6475 = -0.9063*t499;
  t6488 = -1.*t499*t1181;
  t6492 = t6467 + t6475 + t6488;
  t6506 = -1.*t6492*t2831;
  t6653 = -1.*t1208*t2831;
  t6780 = -1.*t6703*t1775;
  t6804 = -1.*t162*t292;
  t6839 = t499*t1020;
  t6848 = t6804 + t6839;
  t6871 = -1.*t2292*t6848;
  t6904 = t6506 + t6653 + t1794 + t6780 + t6871;
  t7112 = 0.4999*t2831;
  t7115 = t2292*t2831;
  t7131 = t6703*t1329;
  t7133 = t6492*t1775;
  t7138 = t1208*t1775;
  t7169 = t7112 + t7115 + t7131 + t7133 + t7138;
  t7425 = t2756*t2907;
  t7444 = t2937*t3266;
  t7485 = t7425 + t7444;
  t4462 = -1.*t2937*t2907;
  t4519 = t4462 + t4480;
  t4791 = -1.*t2937*t4118;
  t4890 = t4617 + t4791;
  t7545 = t2867*t6848;
  t7568 = t5210 + t7545;
  t7614 = t2793*t6848;
  t7792 = t3003 + t7614;
  t8603 = t2867*t6703;
  t8608 = t2793*t6492;
  t8612 = t8603 + t8608;
  t8572 = -1.*t2793*t6703;
  t8574 = t2867*t6492;
  t8596 = t8572 + t8574;
  t7009 = 0.9063*t292;
  t7014 = t292*t1181;
  t7034 = 0.06*t292*t1020;
  t7077 = t7009 + t7014 + t7034;
  t8653 = -0.06*t162*t1020;
  t8654 = t2270 + t8653;
  t8658 = 0.06*t499*t1020;
  t8659 = t6467 + t8658;
  t7205 = Power(t292,2);
  t7220 = -0.06*t7205;
  t7301 = 0.9063*t1020;
  t7303 = t1181*t1020;
  t7313 = t7220 + t7301 + t7303;
  t8655 = -1.*t8654*t1775;
  t8660 = -1.*t2831*t8659;
  t8661 = t6653 + t1794 + t8655 + t8660 + t6871;
  t8681 = t8654*t1329;
  t8683 = t1775*t8659;
  t8685 = t7112 + t7115 + t8681 + t7138 + t8683;
  t7492 = 1.142857*t3790*t7485;
  t7502 = t2937*t3860;
  t7503 = t2756*t4118;
  t7516 = t7502 + t7503;
  t7589 = t2937*t7568;
  t7849 = t2756*t7792;
  t7982 = t7589 + t7849;
  t8024 = 1.142857*t2480*t7982;
  t8476 = 1.142857*t3790*t4519;
  t8486 = t2756*t7568;
  t8491 = -1.*t2937*t7792;
  t8508 = t8486 + t8491;
  t8511 = 1.142857*t2480*t8508;
  t8549 = -1.*t6327*t2907;
  t8552 = -1.*t6233*t3266;
  t8556 = t8549 + t8552;
  t8617 = t6233*t3860;
  t8620 = t6327*t4118;
  t8621 = t8617 + t8620;
  t8569 = t6327*t2907;
  t8599 = t6233*t3266;
  t8710 = -1.*t2793*t8654;
  t8712 = t2867*t8659;
  t8713 = t8710 + t8712;
  t8715 = t2867*t8654;
  t8717 = t2793*t8659;
  t8718 = t8715 + t8717;
  t8632 = -1.*t6233*t7568;
  t8634 = -1.*t6327*t7792;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(1.142857*t2480*t4519 + 1.142857*t3790*t4890)*var2[0] + 0.5*(1.142857*t2480*(-1.*t2756*t2907 + t3289) + 1.142857*t3790*(t3904 - 1.*t2756*t4118))*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.5*(1.142857*t2480*(t4480 + t2937*t5313) + 1.142857*t3790*(t4617 + t2937*t5430))*var2[0] + 0.5*(1.142857*t2480*(t3289 + t2756*t5313) + 1.142857*t3790*(t3904 + t2756*t5430))*var2[1] + 0.5*(1.142857*t3790*(-1.*t5313*t6233 - 1.*t2907*t6269 - 1.*t3266*t6287 - 1.*t3266*t6327) + 1.142857*t2480*(t5430*t6233 + t4118*t6269 + t3860*t6287 + t3860*t6327))*var2[2])*var2[6];
  p_output1[7]=var2[6]*(0.5*(1.142857*t7169*t7485 + t7492 + 1.142857*t6904*t7516 + t8024)*var2[0] + 0.5*(1.142857*t4890*t6904 + 1.142857*t4519*t7169 + t8476 + t8511)*var2[1] + 0.5*(1.142857*t6904*t8556 + 1.142857*t2480*(t8569 + t3860*t8596 + t8599 + t4118*t8612) + 1.142857*t7169*t8621 + 1.142857*t3790*(-1.*t3266*t8596 - 1.*t2907*t8612 + t8632 + t8634))*var2[2] + 0.5*(2.285714*t3790*t6904 + 2.285714*t2480*t7169)*var2[6] + 0.5*(1.142857*t7077*t7169 + 1.142857*t6904*t7313)*var2[7] - 0.03428571*t6904*var2[8]);
  p_output1[8]=var2[6]*(0.5*(t7492 + t8024 + 1.142857*t7516*t8661 + 1.142857*t7485*t8685)*var2[0] + 0.5*(t8476 + t8511 + 1.142857*t4890*t8661 + 1.142857*t4519*t8685)*var2[1] + 0.5*(1.142857*t8556*t8661 + 1.142857*t8621*t8685 + 1.142857*t3790*(t8632 + t8634 - 1.*t3266*t8713 - 1.*t2907*t8718) + 1.142857*t2480*(t8569 + t8599 + t3860*t8713 + t4118*t8718))*var2[2] + 0.5*(2.285714*t3790*t8661 + 2.285714*t2480*t8685)*var2[6] + 0.5*(1.142857*(0. - 0.9063*t1020 - 0.06*Power(t1020,2) - 1.*t1020*t1181)*t2480 + 1.142857*t3790*t7077 + 1.142857*t7313*t8661 + 1.142857*t7077*t8685)*var2[7] - 0.03428571*t8661*var2[8]);
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

#include "Ce3_vec_L7_J7_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L7_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

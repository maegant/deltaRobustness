/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:23 GMT-08:00
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
  double t210;
  double t581;
  double t831;
  double t801;
  double t1061;
  double t827;
  double t936;
  double t951;
  double t767;
  double t1115;
  double t1145;
  double t1151;
  double t251;
  double t308;
  double t357;
  double t427;
  double t594;
  double t614;
  double t1437;
  double t1228;
  double t750;
  double t2340;
  double t2531;
  double t2684;
  double t218;
  double t665;
  double t712;
  double t739;
  double t952;
  double t1378;
  double t1570;
  double t1590;
  double t1654;
  double t1719;
  double t1927;
  double t1928;
  double t2171;
  double t2266;
  double t2903;
  double t3023;
  double t3425;
  double t3512;
  double t3561;
  double t1661;
  double t3052;
  double t4444;
  double t4562;
  double t4579;
  double t3906;
  double t4012;
  double t4687;
  double t4715;
  double t5154;
  double t5197;
  double t5300;
  double t5336;
  double t5341;
  double t5348;
  double t5357;
  double t5440;
  double t5471;
  double t5538;
  double t5568;
  double t5603;
  double t5954;
  double t5980;
  double t5994;
  double t5995;
  double t5998;
  double t6015;
  double t6021;
  double t6028;
  double t5039;
  double t5042;
  double t5127;
  double t5816;
  double t5894;
  double t5948;
  double t6876;
  double t6904;
  double t7004;
  double t7097;
  double t6428;
  double t6435;
  double t7312;
  double t7313;
  double t7342;
  double t3844;
  double t3992;
  double t7718;
  double t7947;
  double t7976;
  double t7989;
  double t8491;
  double t8496;
  double t8505;
  double t8485;
  double t8486;
  double t8487;
  double t8549;
  double t8550;
  double t8552;
  double t8554;
  double t8556;
  double t7299;
  double t6352;
  double t6357;
  double t7121;
  double t7161;
  double t8596;
  double t8597;
  double t8599;
  double t8601;
  double t7406;
  double t7558;
  double t7568;
  double t7614;
  double t7704;
  double t7960;
  double t8001;
  double t8350;
  double t8361;
  double t8444;
  double t4055;
  double t4118;
  double t8452;
  double t8454;
  double t8457;
  double t8467;
  double t8484;
  double t8489;
  double t8638;
  double t8639;
  double t8640;
  double t8642;
  double t8643;
  double t8644;
  double t8523;
  double t8524;
  t210 = Cos(var1[5]);
  t581 = Sin(var1[5]);
  t831 = Cos(var1[4]);
  t801 = Sin(var1[4]);
  t1061 = Cos(var1[3]);
  t827 = -1.*t210*t801;
  t936 = -1.*t831*t581;
  t951 = t827 + t936;
  t767 = Sin(var1[3]);
  t1115 = t831*t210;
  t1145 = -1.*t801*t581;
  t1151 = t1115 + t1145;
  t251 = -1.*t210;
  t308 = 1. + t251;
  t357 = -1.3127*t308;
  t427 = -1.3127*t210;
  t594 = -0.06*t581;
  t614 = t357 + t427 + t594;
  t1437 = Sin(var1[2]);
  t1228 = t1061*t1151;
  t750 = Cos(var1[2]);
  t2340 = t210*t801;
  t2531 = t831*t581;
  t2684 = t2340 + t2531;
  t218 = 0.9063*t210;
  t665 = t210*t614;
  t712 = 0.06*t210*t581;
  t739 = t218 + t665 + t712;
  t952 = t767*t951;
  t1378 = t952 + t1228;
  t1570 = t1061*t951;
  t1590 = -1.*t767*t1151;
  t1654 = t1570 + t1590;
  t1719 = Power(t210,2);
  t1927 = -0.06*t1719;
  t1928 = 0.9063*t581;
  t2171 = t614*t581;
  t2266 = t1927 + t1928 + t2171;
  t2903 = -1.*t767*t2684;
  t3023 = t2903 + t1228;
  t3425 = t1061*t2684;
  t3512 = t767*t1151;
  t3561 = t3425 + t3512;
  t1661 = -1.*t1437*t1654;
  t3052 = -1.*t1437*t3023;
  t4444 = -1.*t767*t951;
  t4562 = -1.*t1061*t1151;
  t4579 = t4444 + t4562;
  t3906 = t750*t1654;
  t4012 = t750*t3023;
  t4687 = -1.*t1061*t2684;
  t4715 = t4687 + t1590;
  t5154 = -1.*t831;
  t5197 = 1. + t5154;
  t5300 = -0.9063*t5197;
  t5336 = -0.06*t210*t801;
  t5341 = t831*t614;
  t5348 = t5300 + t5336 + t5341;
  t5357 = t1061*t5348;
  t5440 = 0.06*t831*t210;
  t5471 = 0.9063*t801;
  t5538 = t801*t614;
  t5568 = t5440 + t5471 + t5538;
  t5603 = -1.*t767*t5568;
  t5954 = -0.4999*t767;
  t5980 = -1.*t767*t5348;
  t5994 = -1.*t1061*t5568;
  t5995 = t5954 + t5980 + t5994;
  t5998 = 0.4999*t767;
  t6015 = t767*t5348;
  t6021 = t1061*t5568;
  t6028 = t5998 + t6015 + t6021;
  t5039 = -1.*t1061;
  t5042 = 1. + t5039;
  t5127 = -0.4999*t5042;
  t5816 = t5127 + t5357 + t5603;
  t5894 = 0.4999*t1061;
  t5948 = t5894 + t5357 + t5603;
  t6876 = -0.06*t831*t210;
  t6904 = -0.9063*t801;
  t7004 = -1.*t801*t614;
  t7097 = t6876 + t6904 + t7004;
  t6428 = 0.9063*t831;
  t6435 = t6428 + t5336 + t5341;
  t7312 = -1.*t831*t210;
  t7313 = t801*t581;
  t7342 = t7312 + t7313;
  t3844 = -1.*t1437*t1378;
  t3992 = t3844 + t3906;
  t7718 = t1061*t7342;
  t7947 = t4444 + t7718;
  t7976 = t767*t7342;
  t7989 = t1570 + t7976;
  t8491 = t1061*t6435;
  t8496 = t767*t7097;
  t8505 = t8491 + t8496;
  t8485 = -1.*t767*t6435;
  t8486 = t1061*t7097;
  t8487 = t8485 + t8486;
  t8549 = -0.9063*t581;
  t8550 = -1.*t614*t581;
  t8552 = Power(t581,2);
  t8554 = -0.06*t8552;
  t8556 = 0. + t8549 + t8550 + t8554;
  t7299 = 0.4999*t1151;
  t6352 = 0.4999*t951;
  t6357 = t5348*t951;
  t7121 = t5568*t1151;
  t7161 = -1.*t5568*t951;
  t8596 = -0.06*t831*t581;
  t8597 = t5336 + t8596;
  t8599 = 0.06*t801*t581;
  t8601 = t6876 + t8599;
  t7406 = -1.*t5348*t7342;
  t7558 = t750*t1378;
  t7568 = t1437*t1654;
  t7614 = t7558 + t7568;
  t7704 = 1.142857*t2266*t7614;
  t7960 = t1437*t7947;
  t8001 = t750*t7989;
  t8350 = t7960 + t8001;
  t8361 = 1.142857*t739*t8350;
  t8444 = 1.142857*t2266*t3992;
  t4055 = -1.*t1437*t3561;
  t4118 = t4012 + t4055;
  t8452 = t750*t7947;
  t8454 = -1.*t1437*t7989;
  t8457 = t8452 + t8454;
  t8467 = 1.142857*t739*t8457;
  t8484 = t6028*t1378;
  t8489 = t5816*t1654;
  t8638 = -1.*t767*t8597;
  t8639 = t1061*t8601;
  t8640 = t8638 + t8639;
  t8642 = t1061*t8597;
  t8643 = t767*t8601;
  t8644 = t8642 + t8643;
  t8523 = -1.*t5816*t7947;
  t8524 = -1.*t6028*t7989;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(1.142857*t2266*t4118 + 1.142857*t3992*t739)*var2[0] + 0.5*(1.142857*t739*(t1661 - 1.*t1378*t750) + 1.142857*t2266*(t3052 - 1.*t3561*t750))*var2[1])*var2[4];
  p_output1[3]=(0.5*(1.142857*t2266*(t4012 + t1437*t4715) + 1.142857*(t3906 + t1437*t4579)*t739)*var2[0] + 0.5*(1.142857*t739*(t1661 + t4579*t750) + 1.142857*t2266*(t3052 + t4715*t750))*var2[1] + 0.5*(1.142857*t2266*(-1.*t4579*t5816 - 1.*t1378*t5948 - 1.*t1654*t5995 - 1.*t1654*t6028) + 1.142857*(t4715*t5816 + t3561*t5948 + t3023*t5995 + t3023*t6028)*t739)*var2[2])*var2[4];
  p_output1[4]=(0.5*(t7704 + t8361)*var2[0] + 0.5*(t8444 + t8467)*var2[1] + 0.5*(1.142857*t739*(t8484 + t3023*t8487 + t8489 + t3561*t8505) + 1.142857*t2266*(-1.*t1654*t8487 - 1.*t1378*t8505 + t8523 + t8524))*var2[2] + 0.5*(1.142857*(t6352 + t6357 + t2684*t6435 + t1151*t7097 + t7121)*t739 + 1.142857*t2266*(-1.*t1151*t6435 + t7161 + t7299 + t7406 - 1.*t7097*t951))*var2[3])*var2[4];
  p_output1[5]=var2[4]*(0.5*(1.142857*t739*(t1437*t3023 + t3561*t750) + t7704 + t8361 + 1.142857*t7614*t8556)*var2[0] + 0.5*(1.142857*t4118*t739 + t8444 + t8467 + 1.142857*t3992*t8556)*var2[1] + 0.5*(1.142857*(-1.*t1654*t5816 - 1.*t1378*t6028)*t739 + 1.142857*(t3023*t5816 + t3561*t6028)*t8556 + 1.142857*t2266*(t8523 + t8524 - 1.*t1654*t8640 - 1.*t1378*t8644) + 1.142857*t739*(t8484 + t8489 + t3023*t8640 + t3561*t8644))*var2[2] + 0.5*(1.142857*(t1151*t5348 + t2684*t5568 + t7299)*t8556 + 1.142857*t739*(t6352 + t6357 + t7121 + t2684*t8597 + t1151*t8601) + 1.142857*t739*(0.4999*t2684 - 1.*t1151*t5568 - 1.*t5348*t951) + 1.142857*t2266*(t7161 + t7299 + t7406 - 1.*t1151*t8597 - 1.*t8601*t951))*var2[3] + 0.5*(2.285714*t2266*t739 + 2.285714*t739*t8556)*var2[4] - 0.03428571*t739*var2[5]);
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

#include "Ce3_vec_L4_J5_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L4_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

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
  double t293;
  double t572;
  double t854;
  double t773;
  double t1101;
  double t821;
  double t887;
  double t970;
  double t694;
  double t1192;
  double t1214;
  double t1260;
  double t474;
  double t501;
  double t516;
  double t523;
  double t576;
  double t618;
  double t1515;
  double t1307;
  double t666;
  double t1950;
  double t2015;
  double t2086;
  double t373;
  double t631;
  double t660;
  double t664;
  double t1046;
  double t1350;
  double t1518;
  double t1542;
  double t1543;
  double t1715;
  double t1721;
  double t1759;
  double t1794;
  double t1877;
  double t2165;
  double t2218;
  double t2270;
  double t2284;
  double t2287;
  double t1561;
  double t2263;
  double t3419;
  double t3444;
  double t3580;
  double t2860;
  double t2922;
  double t3790;
  double t3962;
  double t4668;
  double t4686;
  double t4724;
  double t4811;
  double t4857;
  double t4871;
  double t4890;
  double t4961;
  double t5086;
  double t5110;
  double t5146;
  double t5157;
  double t5408;
  double t5430;
  double t5445;
  double t5478;
  double t5495;
  double t5573;
  double t5583;
  double t5586;
  double t4533;
  double t4576;
  double t4617;
  double t5187;
  double t5339;
  double t5372;
  double t6285;
  double t6293;
  double t6300;
  double t6307;
  double t6260;
  double t6273;
  double t6393;
  double t6403;
  double t6404;
  double t2760;
  double t2900;
  double t6839;
  double t6904;
  double t7009;
  double t7014;
  double t7358;
  double t7369;
  double t7372;
  double t7220;
  double t7251;
  double t7301;
  double t7545;
  double t7559;
  double t7589;
  double t7614;
  double t7849;
  double t6375;
  double t6216;
  double t6242;
  double t6331;
  double t6363;
  double t8516;
  double t8541;
  double t8562;
  double t8569;
  double t6421;
  double t6475;
  double t6654;
  double t6676;
  double t6801;
  double t6937;
  double t7028;
  double t7034;
  double t7072;
  double t7115;
  double t3003;
  double t3167;
  double t7131;
  double t7133;
  double t7138;
  double t7144;
  double t7205;
  double t7313;
  double t8674;
  double t8677;
  double t8678;
  double t8683;
  double t8685;
  double t8687;
  double t7444;
  double t7446;
  t293 = Cos(var1[8]);
  t572 = Sin(var1[8]);
  t854 = Cos(var1[7]);
  t773 = Sin(var1[7]);
  t1101 = Cos(var1[6]);
  t821 = -1.*t293*t773;
  t887 = -1.*t854*t572;
  t970 = t821 + t887;
  t694 = Sin(var1[6]);
  t1192 = t854*t293;
  t1214 = -1.*t773*t572;
  t1260 = t1192 + t1214;
  t474 = -1.*t293;
  t501 = 1. + t474;
  t516 = -1.3127*t501;
  t523 = -1.3127*t293;
  t576 = -0.06*t572;
  t618 = t516 + t523 + t576;
  t1515 = Sin(var1[2]);
  t1307 = t1101*t1260;
  t666 = Cos(var1[2]);
  t1950 = t293*t773;
  t2015 = t854*t572;
  t2086 = t1950 + t2015;
  t373 = 0.9063*t293;
  t631 = t293*t618;
  t660 = 0.06*t293*t572;
  t664 = t373 + t631 + t660;
  t1046 = t694*t970;
  t1350 = t1046 + t1307;
  t1518 = t1101*t970;
  t1542 = -1.*t694*t1260;
  t1543 = t1518 + t1542;
  t1715 = Power(t293,2);
  t1721 = -0.06*t1715;
  t1759 = 0.9063*t572;
  t1794 = t618*t572;
  t1877 = t1721 + t1759 + t1794;
  t2165 = -1.*t694*t2086;
  t2218 = t2165 + t1307;
  t2270 = t1101*t2086;
  t2284 = t694*t1260;
  t2287 = t2270 + t2284;
  t1561 = -1.*t1515*t1543;
  t2263 = -1.*t1515*t2218;
  t3419 = -1.*t694*t970;
  t3444 = -1.*t1101*t1260;
  t3580 = t3419 + t3444;
  t2860 = t666*t1543;
  t2922 = t666*t2218;
  t3790 = -1.*t1101*t2086;
  t3962 = t3790 + t1542;
  t4668 = -1.*t854;
  t4686 = 1. + t4668;
  t4724 = -0.9063*t4686;
  t4811 = -0.06*t293*t773;
  t4857 = t854*t618;
  t4871 = t4724 + t4811 + t4857;
  t4890 = t1101*t4871;
  t4961 = 0.06*t854*t293;
  t5086 = 0.9063*t773;
  t5110 = t773*t618;
  t5146 = t4961 + t5086 + t5110;
  t5157 = -1.*t694*t5146;
  t5408 = -0.4999*t694;
  t5430 = -1.*t694*t4871;
  t5445 = -1.*t1101*t5146;
  t5478 = t5408 + t5430 + t5445;
  t5495 = 0.4999*t694;
  t5573 = t694*t4871;
  t5583 = t1101*t5146;
  t5586 = t5495 + t5573 + t5583;
  t4533 = -1.*t1101;
  t4576 = 1. + t4533;
  t4617 = -0.4999*t4576;
  t5187 = t4617 + t4890 + t5157;
  t5339 = 0.4999*t1101;
  t5372 = t5339 + t4890 + t5157;
  t6285 = -0.06*t854*t293;
  t6293 = -0.9063*t773;
  t6300 = -1.*t773*t618;
  t6307 = t6285 + t6293 + t6300;
  t6260 = 0.9063*t854;
  t6273 = t6260 + t4811 + t4857;
  t6393 = -1.*t854*t293;
  t6403 = t773*t572;
  t6404 = t6393 + t6403;
  t2760 = -1.*t1515*t1350;
  t2900 = t2760 + t2860;
  t6839 = t1101*t6404;
  t6904 = t3419 + t6839;
  t7009 = t694*t6404;
  t7014 = t1518 + t7009;
  t7358 = t1101*t6273;
  t7369 = t694*t6307;
  t7372 = t7358 + t7369;
  t7220 = -1.*t694*t6273;
  t7251 = t1101*t6307;
  t7301 = t7220 + t7251;
  t7545 = -0.9063*t572;
  t7559 = -1.*t618*t572;
  t7589 = Power(t572,2);
  t7614 = -0.06*t7589;
  t7849 = 0. + t7545 + t7559 + t7614;
  t6375 = 0.4999*t1260;
  t6216 = 0.4999*t970;
  t6242 = t4871*t970;
  t6331 = t5146*t1260;
  t6363 = -1.*t5146*t970;
  t8516 = -0.06*t854*t572;
  t8541 = t4811 + t8516;
  t8562 = 0.06*t773*t572;
  t8569 = t6285 + t8562;
  t6421 = -1.*t4871*t6404;
  t6475 = t666*t1350;
  t6654 = t1515*t1543;
  t6676 = t6475 + t6654;
  t6801 = 1.142857*t1877*t6676;
  t6937 = t1515*t6904;
  t7028 = t666*t7014;
  t7034 = t6937 + t7028;
  t7072 = 1.142857*t664*t7034;
  t7115 = 1.142857*t1877*t2900;
  t3003 = -1.*t1515*t2287;
  t3167 = t2922 + t3003;
  t7131 = t666*t6904;
  t7133 = -1.*t1515*t7014;
  t7138 = t7131 + t7133;
  t7144 = 1.142857*t664*t7138;
  t7205 = t5586*t1350;
  t7313 = t5187*t1543;
  t8674 = -1.*t694*t8541;
  t8677 = t1101*t8569;
  t8678 = t8674 + t8677;
  t8683 = t1101*t8541;
  t8685 = t694*t8569;
  t8687 = t8683 + t8685;
  t7444 = -1.*t5187*t6904;
  t7446 = -1.*t5586*t7014;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(1.142857*t1877*t3167 + 1.142857*t2900*t664)*var2[0] + 0.5*(1.142857*t664*(t1561 - 1.*t1350*t666) + 1.142857*t1877*(t2263 - 1.*t2287*t666))*var2[1])*var2[7];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.5*(1.142857*t1877*(t2922 + t1515*t3962) + 1.142857*(t2860 + t1515*t3580)*t664)*var2[0] + 0.5*(1.142857*t664*(t1561 + t3580*t666) + 1.142857*t1877*(t2263 + t3962*t666))*var2[1] + 0.5*(1.142857*t1877*(-1.*t3580*t5187 - 1.*t1350*t5372 - 1.*t1543*t5478 - 1.*t1543*t5586) + 1.142857*(t3962*t5187 + t2287*t5372 + t2218*t5478 + t2218*t5586)*t664)*var2[2])*var2[7];
  p_output1[7]=(0.5*(t6801 + t7072)*var2[0] + 0.5*(t7115 + t7144)*var2[1] + 0.5*(1.142857*t664*(t7205 + t2218*t7301 + t7313 + t2287*t7372) + 1.142857*t1877*(-1.*t1543*t7301 - 1.*t1350*t7372 + t7444 + t7446))*var2[2] + 0.5*(1.142857*(t6216 + t6242 + t2086*t6273 + t1260*t6307 + t6331)*t664 + 1.142857*t1877*(-1.*t1260*t6273 + t6363 + t6375 + t6421 - 1.*t6307*t970))*var2[6])*var2[7];
  p_output1[8]=var2[7]*(0.5*(1.142857*t664*(t1515*t2218 + t2287*t666) + t6801 + t7072 + 1.142857*t6676*t7849)*var2[0] + 0.5*(1.142857*t3167*t664 + t7115 + t7144 + 1.142857*t2900*t7849)*var2[1] + 0.5*(1.142857*(-1.*t1543*t5187 - 1.*t1350*t5586)*t664 + 1.142857*(t2218*t5187 + t2287*t5586)*t7849 + 1.142857*t1877*(t7444 + t7446 - 1.*t1543*t8678 - 1.*t1350*t8687) + 1.142857*t664*(t7205 + t7313 + t2218*t8678 + t2287*t8687))*var2[2] + 0.5*(1.142857*(t1260*t4871 + t2086*t5146 + t6375)*t7849 + 1.142857*t664*(t6216 + t6242 + t6331 + t2086*t8541 + t1260*t8569) + 1.142857*t664*(0.4999*t2086 - 1.*t1260*t5146 - 1.*t4871*t970) + 1.142857*t1877*(t6363 + t6375 + t6421 - 1.*t1260*t8541 - 1.*t8569*t970))*var2[6] + 0.5*(2.285714*t1877*t664 + 2.285714*t664*t7849)*var2[7] - 0.03428571*t664*var2[8]);
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

#include "Ce3_vec_L7_J8_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L7_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

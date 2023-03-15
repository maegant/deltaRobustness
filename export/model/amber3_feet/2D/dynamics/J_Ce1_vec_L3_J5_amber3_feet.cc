/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:38 GMT-08:00
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
  double t155;
  double t110;
  double t125;
  double t209;
  double t25;
  double t148;
  double t268;
  double t275;
  double t338;
  double t356;
  double t472;
  double t490;
  double t503;
  double t545;
  double t553;
  double t718;
  double t934;
  double t956;
  double t981;
  double t986;
  double t671;
  double t1051;
  double t1106;
  double t1340;
  double t1353;
  double t388;
  double t390;
  double t417;
  double t1357;
  double t1397;
  double t1410;
  double t1439;
  double t1444;
  double t1559;
  double t1644;
  double t1648;
  double t1865;
  double t1911;
  double t1791;
  double t1921;
  double t1938;
  double t1980;
  double t2017;
  double t421;
  double t456;
  double t615;
  double t467;
  double t607;
  double t2125;
  double t2152;
  double t2214;
  double t2231;
  double t2254;
  double t2384;
  double t2426;
  double t2441;
  double t2448;
  double t2709;
  double t2735;
  double t2123;
  double t2271;
  double t2275;
  double t2288;
  double t2348;
  double t2962;
  double t2991;
  double t2538;
  double t2685;
  double t2745;
  double t2805;
  double t2830;
  double t2853;
  double t2858;
  double t2895;
  double t2950;
  double t2992;
  double t3018;
  double t3042;
  double t3048;
  double t3079;
  double t3083;
  double t3084;
  double t3088;
  double t3119;
  double t3172;
  double t3437;
  double t3438;
  double t3440;
  double t3448;
  double t3471;
  t155 = Cos(var1[3]);
  t110 = Cos(var1[4]);
  t125 = Sin(var1[3]);
  t209 = Sin(var1[4]);
  t25 = Sin(var1[2]);
  t148 = -1.*t110*t125;
  t268 = -1.*t155*t209;
  t275 = t148 + t268;
  t338 = -1.*t25*t275;
  t356 = Cos(var1[2]);
  t472 = -1.*t155*t110;
  t490 = t125*t209;
  t503 = t472 + t490;
  t545 = t356*t503;
  t553 = t338 + t545;
  t718 = t110*t125;
  t934 = t155*t209;
  t956 = t718 + t934;
  t981 = t25*t956;
  t986 = t981 + t545;
  t671 = 0.26996047999999995*var2[2]*t553;
  t1051 = 0.26996047999999995*var2[3]*t986;
  t1106 = 0.26996047999999995*var2[4]*t986;
  t1340 = t671 + t1051 + t1106;
  t1353 = var2[4]*t1340;
  t388 = t155*t110;
  t390 = -1.*t125*t209;
  t417 = t388 + t390;
  t1357 = t356*t275;
  t1397 = -1.*t25*t417;
  t1410 = t1357 + t1397;
  t1439 = t25*t503;
  t1444 = t1357 + t1439;
  t1559 = -1.*t356*t275;
  t1644 = -1.*t25*t503;
  t1648 = t1559 + t1644;
  t1865 = t356*t956;
  t1911 = t1865 + t1644;
  t1791 = 0.26996047999999995*var2[2]*t1648;
  t1921 = 0.26996047999999995*var2[3]*t1911;
  t1938 = 0.26996047999999995*var2[4]*t1911;
  t1980 = t1791 + t1921 + t1938;
  t2017 = var2[4]*t1980;
  t421 = -1.*t356*t417;
  t456 = t338 + t421;
  t615 = 0.26996047999999995*var2[4]*t553;
  t467 = 0.26996047999999995*var2[2]*t456;
  t607 = 0.26996047999999995*var2[3]*t553;
  t2125 = -1.*t110;
  t2152 = 1. + t2125;
  t2214 = -0.9063*t2152;
  t2231 = -1.0567*t110;
  t2254 = t2214 + t2231;
  t2384 = -0.4999*t125;
  t2426 = -1.*t2254*t125;
  t2441 = 0.15039999999999998*t155*t209;
  t2448 = t2384 + t2426 + t2441;
  t2709 = t155*t2254;
  t2735 = 0.15039999999999998*t125*t209;
  t2123 = 0.4999*t125;
  t2271 = t2254*t125;
  t2275 = -0.15039999999999998*t155*t209;
  t2288 = t2123 + t2271 + t2275;
  t2348 = t275*t2288;
  t2962 = 0.15039999999999998*t110*t125;
  t2991 = t2962 + t2441;
  t2538 = -0.15039999999999998*t125*t209;
  t2685 = 0.4999*t155;
  t2745 = t2685 + t2709 + t2735;
  t2805 = -1.*t155;
  t2830 = 1. + t2805;
  t2853 = -0.4999*t2830;
  t2858 = t2853 + t2709 + t2735;
  t2895 = t2858*t503;
  t2950 = t275*t2448;
  t2992 = t275*t2991;
  t3018 = t2991*t956;
  t3042 = 0.15039999999999998*t155*t110;
  t3048 = t3042 + t2538;
  t3079 = t417*t3048;
  t3083 = t417*t2745;
  t3084 = -0.15039999999999998*t155*t110;
  t3088 = t3084 + t2735;
  t3119 = t417*t3088;
  t3172 = t2348 + t2950 + t2992 + t3018 + t3079 + t3083 + t3119 + t2895;
  t3437 = t2288*t417;
  t3438 = t2448*t417;
  t3440 = t275*t2858;
  t3448 = t956*t2745;
  t3471 = t3437 + t3438 + t3440 + t3448;
  p_output1[0]=(t467 + t607 + t615)*var2[4];
  p_output1[1]=t1353;
  p_output1[2]=t1353;
  p_output1[3]=0.26996047999999995*t1410*var2[4];
  p_output1[4]=0.26996047999999995*t1444*var2[4];
  p_output1[5]=0.26996047999999995*t1410*var2[2] + 0.26996047999999995*t1444*var2[3] + 0.5399209599999999*t1444*var2[4];
  p_output1[6]=var2[4]*(0.26996047999999995*(t1559 + t25*t417)*var2[2] + 0.26996047999999995*t1648*var2[3] + 0.26996047999999995*t1648*var2[4]);
  p_output1[7]=t2017;
  p_output1[8]=t2017;
  p_output1[9]=0.26996047999999995*t456*var2[4];
  p_output1[10]=t615;
  p_output1[11]=t467 + t607 + 0.5399209599999999*t553*var2[4];
  p_output1[12]=var2[4]*(0.26996047999999995*(t2348 + 2.*t2448*t275 + t2895 + (-0.4999*t155 - 1.*t155*t2254 + t2538)*t417 + 2.*t2745*t417 + t2448*t956)*var2[3] + 0.26996047999999995*t3172*var2[4]);
  p_output1[13]=var2[4]*(0.26996047999999995*t3172*var2[3] + 0.26996047999999995*(t2348 + t2895 + 2.*t275*t2991 + t3018 + t3079 + 2.*t3088*t417)*var2[4]);
  p_output1[14]=0.26996047999999995*t3471*var2[4];
  p_output1[15]=0.26996047999999995*t3471*var2[3] + 0.5399209599999999*(t3437 + t3440 + t2991*t417 + t3088*t956)*var2[4];
  p_output1[16]=0.26996047999999995*(0. - 0.4999*t110 - 0.15039999999999998*Power(t110,2) - 1.*t110*t2254)*Power(var2[4],2);
  p_output1[17]=0.5399209599999999*(-0.4999*t209 - 0.15039999999999998*t110*t209 - 1.*t209*t2254)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L3_J5_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L3_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

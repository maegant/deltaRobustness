/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:38 GMT-08:00
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
  double t208;
  double t1370;
  double t1558;
  double t1482;
  double t536;
  double t750;
  double t922;
  double t1066;
  double t1141;
  double t1384;
  double t1400;
  double t1458;
  double t1494;
  double t1582;
  double t1666;
  double t1949;
  double t2018;
  double t2032;
  double t2079;
  double t2236;
  double t2266;
  double t2312;
  double t1759;
  double t1783;
  double t1874;
  double t1883;
  double t2097;
  double t2621;
  double t2637;
  double t2668;
  double t2361;
  double t2482;
  double t2522;
  double t2524;
  double t2380;
  double t2904;
  double t2937;
  double t2940;
  double t2385;
  double t3278;
  double t3294;
  double t3311;
  double t2700;
  double t2843;
  double t3674;
  double t4036;
  double t4043;
  double t4049;
  double t3679;
  double t2580;
  double t3772;
  double t3043;
  double t4313;
  double t3848;
  double t4576;
  double t4597;
  t208 = Cos(var1[5]);
  t1370 = Sin(var1[5]);
  t1558 = Sin(var1[2]);
  t1482 = Cos(var1[2]);
  t536 = -1.*t208;
  t750 = 1. + t536;
  t922 = -0.4999*t750;
  t1066 = -0.6493*t208;
  t1141 = t922 + t1066;
  t1384 = t1141*t1370;
  t1400 = 0.14939999999999998*t208*t1370;
  t1458 = t1384 + t1400;
  t1494 = -1.*t1482*t208;
  t1582 = t1558*t1370;
  t1666 = t1494 + t1582;
  t1949 = t1141*t208;
  t2018 = Power(t1370,2);
  t2032 = -0.14939999999999998*t2018;
  t2079 = t1949 + t2032;
  t2236 = -1.*t208*t1558;
  t2266 = -1.*t1482*t1370;
  t2312 = t2236 + t2266;
  t1759 = 3.4261*t1458*t1666;
  t1783 = t208*t1558;
  t1874 = t1482*t1370;
  t1883 = t1783 + t1874;
  t2097 = 3.4261*t1883*t2079;
  t2621 = -1.*t1141*t1370;
  t2637 = -0.14939999999999998*t208*t1370;
  t2668 = t2621 + t2637;
  t2361 = 3.4261*t2312*t1458;
  t2482 = Power(t208,2);
  t2522 = 0.14939999999999998*t2482;
  t2524 = 0. + t1949 + t2522;
  t2380 = 3.4261*t1666*t2079;
  t2904 = t1482*t208;
  t2937 = -1.*t1558*t1370;
  t2940 = t2904 + t2937;
  t2385 = t2361 + t2380;
  t3278 = 3.4261*t1458*t2940;
  t3294 = 3.4261*t2312*t2079;
  t3311 = t3278 + t3294;
  t2700 = 3.4261*t2668*t1666;
  t2843 = 3.4261*t2312*t2668;
  t3674 = t1949 + t2522;
  t4036 = -1.*t1141*t208;
  t4043 = -0.14939999999999998*t2482;
  t4049 = 0. + t4036 + t4043;
  t3679 = 3.4261*t3674*t2312;
  t2580 = 3.4261*t2524*t2312;
  t3772 = 3.4261*t3674*t2940;
  t3043 = 3.4261*t2524*t2940;
  t4313 = 3.4261*t2668*t2940;
  t3848 = t2843 + t2361 + t3772 + t2380;
  t4576 = 3.4261*t3674*t1883;
  t4597 = t4576 + t4313 + t3278 + t3294;
  p_output1[0]=(0.5*t2385*var2[0] + 0.5*(t1759 + t2097)*var2[1])*var2[2];
  p_output1[1]=(0.5*(t2361 + t2380 + t2843 + t3043)*var2[0] + 0.5*(t1759 + t2097 + t2580 + t2700)*var2[1])*var2[2];
  p_output1[2]=0.5*t3311*var2[2];
  p_output1[3]=0.5*t2385*var2[2];
  p_output1[4]=0.5*t3311*var2[0] + 0.5*t2385*var2[1];
  p_output1[5]=(0.5*t3848*var2[0] + 0.5*(t1759 + t2097 + t2700 + t3679)*var2[1])*var2[2];
  p_output1[6]=var2[2]*(0.5*(t2361 + t2380 + 3.4261*t1883*t2668 + 6.8522*t2312*t2668 + t3043 + t3772 + 3.4261*t2940*t4049)*var2[0] + 0.5*(t1759 + t2097 + t2580 + 6.8522*t1666*t2668 + t3679 + 3.4261*t2312*t4049 + t4313)*var2[1] + 0.5*(6.8522*t1458*t2668 + 6.8522*Power(t2668,2) + 6.8522*t2524*t3674 + 6.8522*t2079*t4049)*var2[2] - 0.25592966999999994*t4049*var2[5]);
  p_output1[7]=0.5*t4597*var2[2];
  p_output1[8]=0.5*t3848*var2[2];
  p_output1[9]=0.5*t4597*var2[0] + 0.5*t3848*var2[1] + (6.8522*t2079*t2668 + 6.8522*t1458*t3674)*var2[2] - 0.25592966999999994*t2668*var2[5];
  p_output1[10]=-0.25592966999999994*t2668*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L4_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L4_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

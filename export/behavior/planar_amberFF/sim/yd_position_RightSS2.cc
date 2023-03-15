/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:00 GMT-08:00
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
  double t904;
  double t905;
  double t931;
  double t932;
  double t953;
  double t1049;
  double t1380;
  double t1413;
  double t1628;
  double t1639;
  double t2055;
  double t2080;
  double t2148;
  double t2168;
  double t2184;
  double t2313;
  double t2622;
  double t2881;
  double t2885;
  double t3068;
  double t3138;
  t904 = -1.*var3[1];
  t905 = var3[0] + t904;
  t931 = 1/t905;
  t932 = 0.8128*var1[2];
  t953 = 0.8128*var1[6];
  t1049 = 0.4064*var1[7];
  t1380 = 0. + t904 + t932 + t953 + t1049;
  t1413 = -1.*t931*t1380;
  t1628 = 1. + t1413;
  t1639 = Power(t1628,5);
  t2055 = Power(t1628,4);
  t2080 = Power(t905,-2);
  t2148 = Power(t1628,3);
  t2168 = Power(t1380,2);
  t2184 = Power(t905,-3);
  t2313 = Power(t1628,2);
  t2622 = Power(t1380,3);
  t2881 = Power(t905,-4);
  t2885 = Power(t1380,4);
  t3068 = Power(t905,-5);
  t3138 = Power(t1380,5);
  p_output1[0]=t1639*var2[0] + 5.*t1380*t2055*t931*var2[5] + 10.*t2080*t2148*t2168*var2[10] + 10.*t2184*t2313*t2622*var2[15] + 5.*t1628*t2881*t2885*var2[20] + t3068*t3138*var2[25];
  p_output1[1]=t1639*var2[1] + 5.*t1380*t2055*t931*var2[6] + 10.*t2080*t2148*t2168*var2[11] + 10.*t2184*t2313*t2622*var2[16] + 5.*t1628*t2881*t2885*var2[21] + t3068*t3138*var2[26];
  p_output1[2]=t1639*var2[2] + 5.*t1380*t2055*t931*var2[7] + 10.*t2080*t2148*t2168*var2[12] + 10.*t2184*t2313*t2622*var2[17] + 5.*t1628*t2881*t2885*var2[22] + t3068*t3138*var2[27];
  p_output1[3]=t1639*var2[3] + 5.*t1380*t2055*t931*var2[8] + 10.*t2080*t2148*t2168*var2[13] + 10.*t2184*t2313*t2622*var2[18] + 5.*t1628*t2881*t2885*var2[23] + t3068*t3138*var2[28];
  p_output1[4]=t1639*var2[4] + 5.*t1380*t2055*t931*var2[9] + 10.*t2080*t2148*t2168*var2[14] + 10.*t2184*t2313*t2622*var2[19] + 5.*t1628*t2881*t2885*var2[24] + t3068*t3138*var2[29];
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_position_RightSS2.hh"

namespace SymFunction
{

void yd_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE

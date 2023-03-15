/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:35 GMT-08:00
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
  double t451;
  double t472;
  double t623;
  double t660;
  double t689;
  double t690;
  double t757;
  double t852;
  double t1160;
  double t1414;
  double t1521;
  double t2122;
  double t2245;
  double t2308;
  double t2410;
  double t2481;
  double t2915;
  double t3232;
  double t3327;
  double t3488;
  double t3668;
  t451 = -1.*var3[1];
  t472 = var3[0] + t451;
  t623 = 1/t472;
  t660 = 0.8731249999999999*var1[2];
  t689 = 0.8731249999999999*var1[5];
  t690 = 0.46672499999999995*var1[6];
  t757 = t451 + t660 + t689 + t690;
  t852 = -1.*t623*t757;
  t1160 = 1. + t852;
  t1414 = Power(t1160,5);
  t1521 = Power(t1160,4);
  t2122 = Power(t472,-2);
  t2245 = Power(t1160,3);
  t2308 = Power(t757,2);
  t2410 = Power(t472,-3);
  t2481 = Power(t1160,2);
  t2915 = Power(t757,3);
  t3232 = Power(t472,-4);
  t3327 = Power(t757,4);
  t3488 = Power(t472,-5);
  t3668 = Power(t757,5);
  p_output1[0]=var1[6] - 1.*t1414*var2[0] - 5.*t1521*t623*t757*var2[4] - 10.*t2122*t2245*t2308*var2[8] - 10.*t2410*t2481*t2915*var2[12] - 5.*t1160*t3232*t3327*var2[16] - 1.*t3488*t3668*var2[20];
  p_output1[1]=var1[5] - 1.*t1414*var2[1] - 5.*t1521*t623*t757*var2[5] - 10.*t2122*t2245*t2308*var2[9] - 10.*t2410*t2481*t2915*var2[13] - 5.*t1160*t3232*t3327*var2[17] - 1.*t3488*t3668*var2[21];
  p_output1[2]=var1[3] - 1.*t1414*var2[2] - 5.*t1521*t623*t757*var2[6] - 10.*t2122*t2245*t2308*var2[10] - 10.*t2410*t2481*t2915*var2[14] - 5.*t1160*t3232*t3327*var2[18] - 1.*t3488*t3668*var2[22];
  p_output1[3]=var1[4] - 1.*t1414*var2[3] - 5.*t1521*t623*t757*var2[7] - 10.*t2122*t2245*t2308*var2[11] - 10.*t2410*t2481*t2915*var2[15] - 5.*t1160*t3232*t3327*var2[19] - 1.*t3488*t3668*var2[23];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "y_position_RightSS.hh"

namespace RightSS
{

void y_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE

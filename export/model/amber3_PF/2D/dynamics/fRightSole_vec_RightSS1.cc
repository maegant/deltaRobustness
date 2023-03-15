/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 09:34:47 GMT-08:00
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
  double t660;
  double t811;
  double t1741;
  double t1742;
  double t2026;
  double t2079;
  double t2128;
  double t2139;
  double t2343;
  double t2344;
  double t2502;
  double t2545;
  double t1673;
  double t1717;
  double t2037;
  double t2057;
  double t3063;
  double t3095;
  double t3135;
  double t1865;
  double t2203;
  double t2565;
  double t2636;
  double t2642;
  double t2727;
  double t2776;
  double t2979;
  double t3004;
  double t3138;
  double t3174;
  double t3272;
  double t3278;
  double t3356;
  double t3900;
  double t3907;
  double t3936;
  t660 = Cos(var1[2]);
  t811 = Cos(var1[5]);
  t1741 = Sin(var1[2]);
  t1742 = Sin(var1[5]);
  t2026 = Cos(var1[6]);
  t2079 = t660*t811;
  t2128 = -1.*t1741*t1742;
  t2139 = t2079 + t2128;
  t2343 = -1.*t811*t1741;
  t2344 = -1.*t660*t1742;
  t2502 = t2343 + t2344;
  t2545 = Sin(var1[6]);
  t1673 = -1.*t811;
  t1717 = 1. + t1673;
  t2037 = -1.*t2026;
  t2057 = 1. + t2037;
  t3063 = -1.*t660*t811;
  t3095 = t1741*t1742;
  t3135 = t3063 + t3095;
  t1865 = -0.4999*t1741*t1742;
  t2203 = -0.9063*t2057*t2139;
  t2565 = 0.9063*t2502*t2545;
  t2636 = t2026*t2139;
  t2642 = t2502*t2545;
  t2727 = t2636 + t2642;
  t2776 = -1.373025*t2727;
  t2979 = -0.4999*t660*t1742;
  t3004 = -0.9063*t2057*t2502;
  t3138 = 0.9063*t3135*t2545;
  t3174 = t2026*t2502;
  t3272 = t3135*t2545;
  t3278 = t3174 + t3272;
  t3356 = -1.373025*t3278;
  t3900 = t811*t1741;
  t3907 = t660*t1742;
  t3936 = t3900 + t3907;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=(0. + t1865 + t2203 + t2565 + t2776 - 0.4999*t1717*t660)*var2[0] + (0. + 0.4999*t1717*t1741 + t2979 + t3004 + t3138 + t3356)*var2[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0. + t1865 + t2203 + t2565 + t2776 + 0.4999*t660*t811)*var2[0] + (0. + t2979 + t3004 + t3138 + t3356 - 0.4999*t1741*t811)*var2[1];
  p_output1[6]=(0. + 0.9063*t2026*t2139 - 0.9063*t2545*t3936 - 1.373025*(t2636 - 1.*t2545*t3936))*var2[0] + (0. + 0.9063*t2026*t2502 - 0.9063*t2139*t2545 - 1.373025*(-1.*t2139*t2545 + t3174))*var2[1];
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_vec_RightSS1.hh"

namespace RightSS1
{

void fRightSole_vec_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:24 GMT-08:00
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
  double t52;
  double t330;
  double t915;
  double t1010;
  double t1067;
  double t1743;
  double t1765;
  double t1887;
  double t2101;
  double t2134;
  double t2233;
  double t2292;
  double t2568;
  double t2717;
  double t2747;
  double t2748;
  double t2814;
  double t2987;
  double t2998;
  double t3041;
  double t101;
  double t143;
  double t1531;
  double t1604;
  double t2613;
  double t2651;
  double t4053;
  double t4066;
  double t4219;
  double t4432;
  double t4452;
  double t4694;
  double t4274;
  double t4318;
  double t3420;
  double t3516;
  double t3795;
  t52 = Cos(var1[6]);
  t330 = Sin(var1[2]);
  t915 = Cos(var1[2]);
  t1010 = Sin(var1[6]);
  t1067 = Cos(var1[7]);
  t1743 = t52*t330;
  t1765 = t915*t1010;
  t1887 = t1743 + t1765;
  t2101 = t915*t52;
  t2134 = -1.*t330*t1010;
  t2233 = t2101 + t2134;
  t2292 = Sin(var1[7]);
  t2568 = Cos(var1[8]);
  t2717 = t1067*t1887;
  t2747 = t2233*t2292;
  t2748 = t2717 + t2747;
  t2814 = t1067*t2233;
  t2987 = -1.*t1887*t2292;
  t2998 = t2814 + t2987;
  t3041 = Sin(var1[8]);
  t101 = -1.*t52;
  t143 = 1. + t101;
  t1531 = -1.*t1067;
  t1604 = 1. + t1531;
  t2613 = -1.*t2568;
  t2651 = 1. + t2613;
  t4053 = -1.*t52*t330;
  t4066 = -1.*t915*t1010;
  t4219 = t4053 + t4066;
  t4432 = t1067*t4219;
  t4452 = -1.*t2233*t2292;
  t4694 = t4432 + t4452;
  t4274 = t4219*t2292;
  t4318 = t2814 + t4274;
  t3420 = t2568*t2998;
  t3516 = -1.*t2748*t3041;
  t3795 = t3420 + t3516;
  p_output1[0]=-0.9063*t1604*t1887 + 0.9063*t2233*t2292 - 1.3127*t2651*t2748 + 1.3127*t2998*t3041 - 1.3127*(t2568*t2748 + t2998*t3041) - 0.4999*t143*t330 + 0.06*t3795 + 0.4999*t1010*t915 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.9063*t1604*t2233 - 0.4999*t1010*t330 + 0.9063*t2292*t4219 - 1.3127*t2651*t4318 + 1.3127*t3041*t4694 + 0.06*(-1.*t3041*t4318 + t2568*t4694) - 1.3127*(t2568*t4318 + t3041*t4694) - 0.4999*t143*t915 + var1[1] - 1.*var2[1];
  p_output1[2]=ArcTan(Sqrt(0. + Power(t3795,2)),t3041*t4318 - 1.*t2568*t4694) - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightSole_RightSS1.hh"

namespace RightSS1
{

void h_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

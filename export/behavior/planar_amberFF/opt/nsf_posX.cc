/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:47 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t433;
  double t290;
  double t609;
  double t653;
  double t743;
  double t831;
  double t850;
  double t859;
  double t899;
  double t904;
  double t921;
  double t939;
  double t998;
  double t1066;
  double t1089;
  double t1183;
  double t1257;
  double t1293;
  double t1295;
  double t1327;
  double t440;
  double t1476;
  double t1600;
  double t1680;
  double t1685;
  double t1728;
  double t1799;
  double t1804;
  double t1807;
  double t1815;
  double t1900;
  double t1942;
  double t1985;
  double t2021;
  double t2026;
  double t2033;
  double t2090;
  double t2091;
  t433 = Sin(var1[2]);
  t290 = Cos(var1[3]);
  t609 = Cos(var1[2]);
  t653 = Sin(var1[3]);
  t743 = Cos(var1[4]);
  t831 = t290*t433;
  t850 = t609*t653;
  t859 = t831 + t850;
  t899 = t609*t290;
  t904 = -1.*t433*t653;
  t921 = t899 + t904;
  t939 = Sin(var1[4]);
  t998 = Cos(var1[5]);
  t1066 = t743*t859;
  t1089 = t921*t939;
  t1183 = t1066 + t1089;
  t1257 = t743*t921;
  t1293 = -1.*t859*t939;
  t1295 = t1257 + t1293;
  t1327 = Sin(var1[5]);
  t440 = Cos(var1[6]);
  t1476 = Sin(var1[6]);
  t1600 = Cos(var1[7]);
  t1680 = t440*t433;
  t1685 = t609*t1476;
  t1728 = t1680 + t1685;
  t1799 = t609*t440;
  t1804 = -1.*t433*t1476;
  t1807 = t1799 + t1804;
  t1815 = Sin(var1[7]);
  t1900 = Cos(var1[8]);
  t1942 = t1600*t1728;
  t1985 = t1807*t1815;
  t2021 = t1942 + t1985;
  t2026 = t1600*t1807;
  t2033 = -1.*t1728*t1815;
  t2090 = t2026 + t2033;
  t2091 = Sin(var1[8]);
  p_output1[0]=1.3127*t1295*t1327 + 0.9063*(1. - 1.*t1600)*t1728 - 0.9063*t1807*t1815 + 1.3127*(1. - 1.*t1900)*t2021 - 1.3127*t2090*t2091 - 0.06*(t1900*t2090 - 1.*t2021*t2091) + 1.3127*(t1900*t2021 + t2090*t2091) - 0.4999*(1. - 1.*t290)*t433 + 0.4999*t433*(1. - 1.*t440) - 0.4999*t1476*t609 + 0.4999*t609*t653 - 0.9063*(1. - 1.*t743)*t859 + 0.9063*t921*t939 - 1.3127*t1183*(1. - 1.*t998) - 1.3127*(t1295*t1327 + t1183*t998) + 0.06*(-1.*t1183*t1327 + t1295*t998);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "nsf_posX.hh"

namespace RightSS1
{

void nsf_posX_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:31 GMT-08:00
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
  double t727;
  double t561;
  double t588;
  double t739;
  double t423;
  double t718;
  double t762;
  double t795;
  double t833;
  double t851;
  double t893;
  double t896;
  double t919;
  double t1158;
  double t1168;
  double t1198;
  double t1252;
  double t1287;
  double t1289;
  double t1311;
  double t1330;
  double t1534;
  double t1555;
  double t1564;
  double t1382;
  double t956;
  double t1001;
  double t2016;
  double t2032;
  double t2038;
  double t2119;
  double t2145;
  double t2183;
  double t2189;
  double t1948;
  double t1964;
  double t2006;
  double t2014;
  double t2049;
  double t2166;
  double t2200;
  double t2203;
  double t2219;
  double t2230;
  double t2242;
  double t2245;
  double t2252;
  double t2265;
  double t2275;
  t727 = Cos(var1[2]);
  t561 = Cos(var1[3]);
  t588 = Sin(var1[2]);
  t739 = Sin(var1[3]);
  t423 = Cos(var1[4]);
  t718 = -1.*t561*t588;
  t762 = -1.*t727*t739;
  t795 = t718 + t762;
  t833 = t727*t561;
  t851 = -1.*t588*t739;
  t893 = t833 + t851;
  t896 = Sin(var1[4]);
  t919 = Cos(var1[5]);
  t1158 = t423*t795;
  t1168 = -1.*t893*t896;
  t1198 = t1158 + t1168;
  t1252 = -1.*t423*t893;
  t1287 = -1.*t795*t896;
  t1289 = t1252 + t1287;
  t1311 = Sin(var1[5]);
  t1330 = t919*t1198;
  t1534 = t423*t893;
  t1555 = t795*t896;
  t1564 = t1534 + t1555;
  t1382 = -1.*t1198*t1311;
  t956 = -1.*t919;
  t1001 = 1. + t956;
  t2016 = -1.*t727*t561;
  t2032 = t588*t739;
  t2038 = t2016 + t2032;
  t2119 = t2038*t896;
  t2145 = t1158 + t2119;
  t2183 = t423*t2038;
  t2189 = t2183 + t1287;
  t1948 = -0.4999*t727*t739;
  t1964 = -1.*t423;
  t2006 = 1. + t1964;
  t2014 = -0.9063*t2006*t795;
  t2049 = 0.9063*t2038*t896;
  t2166 = -1.3127*t1001*t2145;
  t2200 = 1.3127*t2189*t1311;
  t2203 = t919*t2145;
  t2219 = t2189*t1311;
  t2230 = t2203 + t2219;
  t2242 = -1.3127*t2230;
  t2245 = t919*t2189;
  t2252 = -1.*t2145*t1311;
  t2265 = t2245 + t2252;
  t2275 = 0.06*t2265;
  p_output1[0]=var2[1] + (t1948 + t2014 + t2049 + t2166 + t2200 + t2242 + t2275 + 0.4999*(1. - 1.*t561)*t588)*var2[2] + (t1948 + t2014 + t2049 + t2166 + t2200 + t2242 + t2275 - 0.4999*t561*t588)*var2[3] + (-1.3127*t1001*t1198 + 1.3127*t1289*t1311 - 1.3127*(t1289*t1311 + t1330) + 0.9063*t423*t795 - 0.9063*t893*t896 + 0.06*(t1382 + t1289*t919))*var2[4] + (-1.3127*t1311*t1564 - 1.3127*(t1330 - 1.*t1311*t1564) + 1.3127*t1198*t919 + 0.06*(t1382 - 1.*t1564*t919))*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "nsf_velZ.hh"

namespace RightSS2
{

void nsf_velZ_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

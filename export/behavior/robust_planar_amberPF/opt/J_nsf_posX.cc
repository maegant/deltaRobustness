/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:44 GMT-08:00
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
  double t291;
  double t308;
  double t738;
  double t784;
  double t909;
  double t988;
  double t990;
  double t1015;
  double t1029;
  double t1037;
  double t1039;
  double t1101;
  double t527;
  double t1179;
  double t1264;
  double t1308;
  double t1321;
  double t1333;
  double t1360;
  double t1390;
  double t1397;
  double t1469;
  double t850;
  double t948;
  double t958;
  double t1024;
  double t1115;
  double t1148;
  double t1150;
  double t1172;
  double t1175;
  double t1688;
  double t1713;
  double t1726;
  double t1188;
  double t1274;
  double t1302;
  double t1336;
  double t1524;
  double t1551;
  double t1577;
  double t1593;
  double t1594;
  double t1855;
  double t1856;
  double t1876;
  t291 = Cos(var1[2]);
  t308 = Cos(var1[3]);
  t738 = Sin(var1[2]);
  t784 = Sin(var1[3]);
  t909 = Cos(var1[4]);
  t988 = t291*t308;
  t990 = -1.*t738*t784;
  t1015 = t988 + t990;
  t1029 = -1.*t308*t738;
  t1037 = -1.*t291*t784;
  t1039 = t1029 + t1037;
  t1101 = Sin(var1[4]);
  t527 = Cos(var1[5]);
  t1179 = Sin(var1[5]);
  t1264 = Cos(var1[6]);
  t1308 = t291*t527;
  t1321 = -1.*t738*t1179;
  t1333 = t1308 + t1321;
  t1360 = -1.*t527*t738;
  t1390 = -1.*t291*t1179;
  t1397 = t1360 + t1390;
  t1469 = Sin(var1[6]);
  t850 = -0.4999*t738*t784;
  t948 = -1.*t909;
  t958 = 1. + t948;
  t1024 = -0.9063*t958*t1015;
  t1115 = 0.9063*t1039*t1101;
  t1148 = t909*t1015;
  t1150 = t1039*t1101;
  t1172 = t1148 + t1150;
  t1175 = -1.373025*t1172;
  t1688 = t308*t738;
  t1713 = t291*t784;
  t1726 = t1688 + t1713;
  t1188 = 0.4999*t738*t1179;
  t1274 = -1.*t1264;
  t1302 = 1. + t1274;
  t1336 = 0.9063*t1302*t1333;
  t1524 = -0.9063*t1397*t1469;
  t1551 = t1264*t1333;
  t1577 = t1397*t1469;
  t1593 = t1551 + t1577;
  t1594 = 1.373025*t1593;
  t1855 = t527*t738;
  t1856 = t291*t1179;
  t1876 = t1855 + t1856;
  p_output1[0]=t1024 + t1115 + t1175 + t1188 + t1336 + t1524 + t1594 - 0.4999*t291*(1. - 1.*t308) + 0.4999*t291*(1. - 1.*t527) + t850;
  p_output1[1]=t1024 + t1115 + t1175 + 0.4999*t291*t308 + t850;
  p_output1[2]=-0.9063*t1101*t1726 - 1.373025*(t1148 - 1.*t1101*t1726) + 0.9063*t1015*t909;
  p_output1[3]=t1188 + t1336 + t1524 + t1594 - 0.4999*t291*t527;
  p_output1[4]=-0.9063*t1264*t1333 + 0.9063*t1469*t1876 + 1.373025*(t1551 - 1.*t1469*t1876);
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_posX.hh"

namespace RightSS
{

void J_nsf_posX_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

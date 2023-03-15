/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:46 GMT-08:00
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
  double t1024;
  double t521;
  double t621;
  double t1115;
  double t510;
  double t850;
  double t1150;
  double t1185;
  double t1336;
  double t1397;
  double t1524;
  double t1549;
  double t1577;
  double t1820;
  double t1843;
  double t1845;
  double t1754;
  double t1761;
  double t1772;
  double t1812;
  double t1852;
  double t1855;
  double t1856;
  double t1859;
  double t1308;
  double t1573;
  double t1593;
  double t1594;
  double t1610;
  double t1617;
  double t1633;
  double t1930;
  double t1939;
  double t1940;
  double t2060;
  double t2077;
  double t2128;
  double t1637;
  double t1713;
  double t2351;
  double t2357;
  double t2412;
  double t2415;
  double t2452;
  double t2460;
  double t2471;
  t1024 = Cos(var1[2]);
  t521 = Cos(var1[3]);
  t621 = Sin(var1[2]);
  t1115 = Sin(var1[3]);
  t510 = Cos(var1[4]);
  t850 = -1.*t521*t621;
  t1150 = -1.*t1024*t1115;
  t1185 = t850 + t1150;
  t1336 = t1024*t521;
  t1397 = -1.*t621*t1115;
  t1524 = t1336 + t1397;
  t1549 = Sin(var1[4]);
  t1577 = t510*t1185;
  t1820 = -1.*t1024*t521;
  t1843 = t621*t1115;
  t1845 = t1820 + t1843;
  t1754 = -0.4999*t1024*t1115;
  t1761 = -1.*t510;
  t1772 = 1. + t1761;
  t1812 = -0.9063*t1772*t1185;
  t1852 = 0.9063*t1845*t1549;
  t1855 = t1845*t1549;
  t1856 = t1577 + t1855;
  t1859 = -1.373025*t1856;
  t1308 = 0.9063*t510*t1185;
  t1573 = -0.9063*t1524*t1549;
  t1593 = -1.*t1524*t1549;
  t1594 = t1577 + t1593;
  t1610 = -1.373025*t1594;
  t1617 = t1308 + t1573 + t1610;
  t1633 = var2[4]*t1617;
  t1930 = -0.4999*t521*t621;
  t1939 = t1930 + t1754 + t1812 + t1852 + t1859;
  t1940 = var2[3]*t1939;
  t2060 = t521*t621;
  t2077 = t1024*t1115;
  t2128 = t2060 + t2077;
  t1637 = -1.*t521;
  t1713 = 1. + t1637;
  t2351 = -0.4999*t621*t1115;
  t2357 = -0.9063*t1772*t1524;
  t2412 = 0.9063*t1185*t1549;
  t2415 = t510*t1524;
  t2452 = t1185*t1549;
  t2460 = t2415 + t2452;
  t2471 = -1.373025*t2460;
  p_output1[0]=t1633 + t1940 + (t1754 + t1812 + t1852 + t1859 + 0.4999*t1713*t621)*var2[2];
  p_output1[1]=t1633 + t1940 + t1939*var2[2];
  p_output1[2]=t1617*var2[2] + t1617*var2[3] + (t1573 - 0.9063*t2128*t510 - 1.373025*(t1593 - 1.*t2128*t510))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=-0.4999*t1024*t1713 + t2351 + t2357 + t2412 + t2471;
  p_output1[5]=t2351 + t2357 + t2412 + t2471 + 0.4999*t1024*t521;
  p_output1[6]=-0.9063*t1549*t2128 - 1.373025*(-1.*t1549*t2128 + t2415) + 0.9063*t1524*t510;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_velX.hh"

namespace RightSS
{

void J_nsf_velX_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

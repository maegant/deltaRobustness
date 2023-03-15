/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:28 GMT-08:00
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
  double t559;
  double t845;
  double t1921;
  double t2218;
  double t2329;
  double t2540;
  double t2548;
  double t2569;
  double t2747;
  double t2748;
  double t2834;
  double t2845;
  double t2226;
  double t2422;
  double t2520;
  double t2667;
  double t2918;
  double t2972;
  double t2980;
  double t2981;
  double t2988;
  double t3345;
  double t3367;
  double t3397;
  double t1412;
  double t1723;
  double t3835;
  double t3923;
  double t3927;
  double t3935;
  double t3890;
  double t3916;
  double t3956;
  double t3995;
  double t4017;
  double t4029;
  t559 = Cos(var1[2]);
  t845 = Cos(var1[5]);
  t1921 = Sin(var1[2]);
  t2218 = Sin(var1[5]);
  t2329 = Cos(var1[6]);
  t2540 = t559*t845;
  t2548 = -1.*t1921*t2218;
  t2569 = t2540 + t2548;
  t2747 = -1.*t845*t1921;
  t2748 = -1.*t559*t2218;
  t2834 = t2747 + t2748;
  t2845 = Sin(var1[6]);
  t2226 = -0.4999*t1921*t2218;
  t2422 = -1.*t2329;
  t2520 = 1. + t2422;
  t2667 = -0.9063*t2520*t2569;
  t2918 = 0.9063*t2834*t2845;
  t2972 = t2329*t2569;
  t2980 = t2834*t2845;
  t2981 = t2972 + t2980;
  t2988 = -1.373025*t2981;
  t3345 = t845*t1921;
  t3367 = t559*t2218;
  t3397 = t3345 + t3367;
  t1412 = -1.*t845;
  t1723 = 1. + t1412;
  t3835 = t2329*t2834;
  t3923 = -1.*t559*t845;
  t3927 = t1921*t2218;
  t3935 = t3923 + t3927;
  t3890 = -0.4999*t559*t2218;
  t3916 = -0.9063*t2520*t2834;
  t3956 = 0.9063*t3935*t2845;
  t3995 = t3935*t2845;
  t4017 = t3835 + t3995;
  t4029 = -1.373025*t4017;
  p_output1[0]=var2[0] + (0. + t2226 + t2667 + t2918 + t2988 - 0.4999*t1723*t559)*var2[2] + (0. + t2226 + t2667 + t2918 + t2988 + 0.4999*t559*t845)*var2[5] + (0. + 0.9063*t2329*t2569 - 0.9063*t2845*t3397 - 1.373025*(t2972 - 1.*t2845*t3397))*var2[6];
  p_output1[1]=var2[1] + (0. + 0.4999*t1723*t1921 + t3890 + t3916 + t3956 + t4029)*var2[2] + (0. + t3890 + t3916 + t3956 + t4029 - 0.4999*t1921*t845)*var2[5] + (0. + 0.9063*t2329*t2834 - 0.9063*t2569*t2845 - 1.373025*(-1.*t2569*t2845 + t3835))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightSole_RightSS.hh"

namespace RightSS
{

void dh_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

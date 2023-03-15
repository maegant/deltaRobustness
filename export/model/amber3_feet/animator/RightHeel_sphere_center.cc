/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:39 GMT-08:00
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
  double t420;
  double t1398;
  double t1641;
  double t2173;
  double t2806;
  double t3230;
  double t3900;
  double t3924;
  double t4185;
  double t4305;
  double t4399;
  double t4418;
  double t4465;
  double t4589;
  double t4654;
  double t4692;
  double t4705;
  double t4709;
  double t4728;
  double t4739;
  double t425;
  double t1086;
  double t2825;
  double t2922;
  double t4489;
  double t4509;
  double t4872;
  double t4890;
  double t4903;
  double t4931;
  double t4939;
  double t4942;
  double t4914;
  double t4916;
  t420 = Cos(var1[6]);
  t1398 = Sin(var1[2]);
  t1641 = Cos(var1[2]);
  t2173 = Sin(var1[6]);
  t2806 = Cos(var1[7]);
  t3230 = t420*t1398;
  t3900 = t1641*t2173;
  t3924 = t3230 + t3900;
  t4185 = t1641*t420;
  t4305 = -1.*t1398*t2173;
  t4399 = t4185 + t4305;
  t4418 = Sin(var1[7]);
  t4465 = Cos(var1[8]);
  t4589 = t2806*t3924;
  t4654 = t4399*t4418;
  t4692 = t4589 + t4654;
  t4705 = t2806*t4399;
  t4709 = -1.*t3924*t4418;
  t4728 = t4705 + t4709;
  t4739 = Sin(var1[8]);
  t425 = -1.*t420;
  t1086 = 1. + t425;
  t2825 = -1.*t2806;
  t2922 = 1. + t2825;
  t4489 = -1.*t4465;
  t4509 = 1. + t4489;
  t4872 = -1.*t420*t1398;
  t4890 = -1.*t1641*t2173;
  t4903 = t4872 + t4890;
  t4931 = t2806*t4903;
  t4939 = -1.*t4399*t4418;
  t4942 = t4931 + t4939;
  t4914 = t4903*t4418;
  t4916 = t4705 + t4914;
  p_output1[0]=-0.4999*t1086*t1398 + 0.4999*t1641*t2173 - 0.9063*t2922*t3924 + 0.9063*t4399*t4418 - 1.3127*t4509*t4692 + 1.3127*t4728*t4739 - 0.04*(t4465*t4728 - 1.*t4692*t4739) - 1.3127*(t4465*t4692 + t4728*t4739) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1086*t1641 - 0.4999*t1398*t2173 - 0.9063*t2922*t4399 + 0.9063*t4418*t4903 - 1.3127*t4509*t4916 + 1.3127*t4739*t4942 - 0.04*(-1.*t4739*t4916 + t4465*t4942) - 1.3127*(t4465*t4916 + t4739*t4942) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "RightHeel_sphere_center.hh"

namespace SymFunction
{

void RightHeel_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

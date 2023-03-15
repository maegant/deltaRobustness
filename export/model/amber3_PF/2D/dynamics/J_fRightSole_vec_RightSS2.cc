/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 09:34:50 GMT-08:00
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
  double t1567;
  double t1881;
  double t2859;
  double t2979;
  double t3218;
  double t3356;
  double t3357;
  double t3389;
  double t3433;
  double t3462;
  double t3465;
  double t3521;
  double t2282;
  double t2322;
  double t3237;
  double t3278;
  double t3952;
  double t3955;
  double t3987;
  double t3095;
  double t3418;
  double t3634;
  double t3681;
  double t3719;
  double t3831;
  double t3877;
  double t3946;
  double t4001;
  double t4082;
  double t4117;
  double t4130;
  double t4136;
  double t4179;
  double t4604;
  double t4668;
  double t4682;
  double t3907;
  double t4304;
  double t4316;
  double t4322;
  double t4355;
  double t4370;
  double t4381;
  double t4396;
  double t4410;
  double t4491;
  double t4510;
  double t4537;
  double t4543;
  double t4548;
  double t4550;
  double t4574;
  double t4700;
  double t4704;
  double t4707;
  double t4719;
  double t4765;
  double t4783;
  double t4845;
  double t4928;
  double t4944;
  double t4950;
  double t4971;
  double t4973;
  double t4974;
  double t4999;
  t1567 = Cos(var1[2]);
  t1881 = Cos(var1[5]);
  t2859 = Sin(var1[2]);
  t2979 = Sin(var1[5]);
  t3218 = Cos(var1[6]);
  t3356 = -1.*t1567*t1881;
  t3357 = t2859*t2979;
  t3389 = t3356 + t3357;
  t3433 = t1881*t2859;
  t3462 = t1567*t2979;
  t3465 = t3433 + t3462;
  t3521 = Sin(var1[6]);
  t2282 = -1.*t1881;
  t2322 = 1. + t2282;
  t3237 = -1.*t3218;
  t3278 = 1. + t3237;
  t3952 = -1.*t1881*t2859;
  t3955 = -1.*t1567*t2979;
  t3987 = t3952 + t3955;
  t3095 = 0.4999*t2859*t2979;
  t3418 = -0.9063*t3278*t3389;
  t3634 = 0.9063*t3465*t3521;
  t3681 = t3218*t3389;
  t3719 = t3465*t3521;
  t3831 = t3681 + t3719;
  t3877 = -1.373025*t3831;
  t3946 = -0.4999*t1567*t2979;
  t4001 = -0.9063*t3278*t3987;
  t4082 = 0.9063*t3389*t3521;
  t4117 = t3218*t3987;
  t4130 = t3389*t3521;
  t4136 = t4117 + t4130;
  t4179 = -1.373025*t4136;
  t4604 = t1567*t1881;
  t4668 = -1.*t2859*t2979;
  t4682 = t4604 + t4668;
  t3907 = 0.4999*t2322*t2859;
  t4304 = -0.4999*t1567*t1881;
  t4316 = t4304 + t3095 + t3418 + t3634 + t3877;
  t4322 = var2[1]*t4316;
  t4355 = -0.4999*t1881*t2859;
  t4370 = t4355 + t3946 + t4001 + t4082 + t4179;
  t4381 = var2[0]*t4370;
  t4396 = t4322 + t4381;
  t4410 = 0.9063*t3218*t3389;
  t4491 = -0.9063*t3987*t3521;
  t4510 = -1.*t3987*t3521;
  t4537 = t3681 + t4510;
  t4543 = -1.373025*t4537;
  t4548 = t4410 + t4491 + t4543;
  t4550 = var2[1]*t4548;
  t4574 = 0.9063*t3218*t3987;
  t4700 = -0.9063*t4682*t3521;
  t4704 = -1.*t4682*t3521;
  t4707 = t4117 + t4704;
  t4719 = -1.373025*t4707;
  t4765 = t4574 + t4700 + t4719;
  t4783 = var2[0]*t4765;
  t4845 = t4550 + t4783;
  t4928 = -0.4999*t2859*t2979;
  t4944 = -0.9063*t3278*t4682;
  t4950 = 0.9063*t3987*t3521;
  t4971 = t3218*t4682;
  t4973 = t3987*t3521;
  t4974 = t4971 + t4973;
  t4999 = -1.373025*t4974;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=(t3907 + t3946 + t4001 + t4082 + t4179)*var2[0] + (0.4999*t1567*t2322 + t3095 + t3418 + t3634 + t3877)*var2[1];
  p_output1[3]=t4396;
  p_output1[4]=t4845;
  p_output1[5]=0. - 0.4999*t1567*t2322 + t4928 + t4944 + t4950 + t4999;
  p_output1[6]=0. + t3907 + t3946 + t4001 + t4082 + t4179;
  p_output1[7]=t4396;
  p_output1[8]=t4396;
  p_output1[9]=t4845;
  p_output1[10]=0. + 0.4999*t1567*t1881 + t4928 + t4944 + t4950 + t4999;
  p_output1[11]=0. + t3946 + t4001 + t4082 + t4179 + t4355;
  p_output1[12]=t4845;
  p_output1[13]=t4845;
  p_output1[14]=(-0.9063*t3218*t3465 + t4700 - 1.373025*(-1.*t3218*t3465 + t4704))*var2[0] + (t4491 - 0.9063*t3218*t4682 - 1.373025*(t4510 - 1.*t3218*t4682))*var2[1];
  p_output1[15]=0. - 0.9063*t3465*t3521 + 0.9063*t3218*t4682 - 1.373025*(-1.*t3465*t3521 + t4971);
  p_output1[16]=0. + t4574 + t4700 + t4719;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightSole_vec_RightSS2.hh"

namespace RightSS2
{

void J_fRightSole_vec_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

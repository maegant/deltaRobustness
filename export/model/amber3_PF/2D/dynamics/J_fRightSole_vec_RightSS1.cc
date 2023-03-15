/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 09:34:48 GMT-08:00
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
  double t871;
  double t1670;
  double t2203;
  double t2502;
  double t2642;
  double t2834;
  double t2859;
  double t2887;
  double t3004;
  double t3095;
  double t3135;
  double t3138;
  double t1733;
  double t1865;
  double t2727;
  double t2776;
  double t3844;
  double t3856;
  double t3874;
  double t2565;
  double t2979;
  double t3272;
  double t3278;
  double t3356;
  double t3418;
  double t3462;
  double t3719;
  double t3877;
  double t3881;
  double t3900;
  double t3907;
  double t3946;
  double t3952;
  double t4381;
  double t4383;
  double t4392;
  double t3681;
  double t4082;
  double t4117;
  double t4130;
  double t4136;
  double t4179;
  double t4203;
  double t4223;
  double t4231;
  double t4288;
  double t4298;
  double t4304;
  double t4316;
  double t4322;
  double t4355;
  double t4370;
  double t4396;
  double t4469;
  double t4491;
  double t4510;
  double t4537;
  double t4543;
  double t4548;
  double t4574;
  double t4604;
  double t4668;
  double t4679;
  double t4682;
  double t4700;
  double t4704;
  t871 = Cos(var1[2]);
  t1670 = Cos(var1[5]);
  t2203 = Sin(var1[2]);
  t2502 = Sin(var1[5]);
  t2642 = Cos(var1[6]);
  t2834 = -1.*t871*t1670;
  t2859 = t2203*t2502;
  t2887 = t2834 + t2859;
  t3004 = t1670*t2203;
  t3095 = t871*t2502;
  t3135 = t3004 + t3095;
  t3138 = Sin(var1[6]);
  t1733 = -1.*t1670;
  t1865 = 1. + t1733;
  t2727 = -1.*t2642;
  t2776 = 1. + t2727;
  t3844 = -1.*t1670*t2203;
  t3856 = -1.*t871*t2502;
  t3874 = t3844 + t3856;
  t2565 = 0.4999*t2203*t2502;
  t2979 = -0.9063*t2776*t2887;
  t3272 = 0.9063*t3135*t3138;
  t3278 = t2642*t2887;
  t3356 = t3135*t3138;
  t3418 = t3278 + t3356;
  t3462 = -1.373025*t3418;
  t3719 = -0.4999*t871*t2502;
  t3877 = -0.9063*t2776*t3874;
  t3881 = 0.9063*t2887*t3138;
  t3900 = t2642*t3874;
  t3907 = t2887*t3138;
  t3946 = t3900 + t3907;
  t3952 = -1.373025*t3946;
  t4381 = t871*t1670;
  t4383 = -1.*t2203*t2502;
  t4392 = t4381 + t4383;
  t3681 = 0.4999*t1865*t2203;
  t4082 = -0.4999*t871*t1670;
  t4117 = t4082 + t2565 + t2979 + t3272 + t3462;
  t4130 = var2[1]*t4117;
  t4136 = -0.4999*t1670*t2203;
  t4179 = t4136 + t3719 + t3877 + t3881 + t3952;
  t4203 = var2[0]*t4179;
  t4223 = t4130 + t4203;
  t4231 = 0.9063*t2642*t2887;
  t4288 = -0.9063*t3874*t3138;
  t4298 = -1.*t3874*t3138;
  t4304 = t3278 + t4298;
  t4316 = -1.373025*t4304;
  t4322 = t4231 + t4288 + t4316;
  t4355 = var2[1]*t4322;
  t4370 = 0.9063*t2642*t3874;
  t4396 = -0.9063*t4392*t3138;
  t4469 = -1.*t4392*t3138;
  t4491 = t3900 + t4469;
  t4510 = -1.373025*t4491;
  t4537 = t4370 + t4396 + t4510;
  t4543 = var2[0]*t4537;
  t4548 = t4355 + t4543;
  t4574 = -0.4999*t2203*t2502;
  t4604 = -0.9063*t2776*t4392;
  t4668 = 0.9063*t3874*t3138;
  t4679 = t2642*t4392;
  t4682 = t3874*t3138;
  t4700 = t4679 + t4682;
  t4704 = -1.373025*t4700;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=(t3681 + t3719 + t3877 + t3881 + t3952)*var2[0] + (t2565 + t2979 + t3272 + t3462 + 0.4999*t1865*t871)*var2[1];
  p_output1[3]=t4223;
  p_output1[4]=t4548;
  p_output1[5]=0. + t4574 + t4604 + t4668 + t4704 - 0.4999*t1865*t871;
  p_output1[6]=0. + t3681 + t3719 + t3877 + t3881 + t3952;
  p_output1[7]=t4223;
  p_output1[8]=t4223;
  p_output1[9]=t4548;
  p_output1[10]=0. + t4574 + t4604 + t4668 + t4704 + 0.4999*t1670*t871;
  p_output1[11]=0. + t3719 + t3877 + t3881 + t3952 + t4136;
  p_output1[12]=t4548;
  p_output1[13]=t4548;
  p_output1[14]=(-0.9063*t2642*t3135 + t4396 - 1.373025*(-1.*t2642*t3135 + t4469))*var2[0] + (t4288 - 0.9063*t2642*t4392 - 1.373025*(t4298 - 1.*t2642*t4392))*var2[1];
  p_output1[15]=0. - 0.9063*t3135*t3138 + 0.9063*t2642*t4392 - 1.373025*(-1.*t3135*t3138 + t4679);
  p_output1[16]=0. + t4370 + t4396 + t4510;
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

#include "J_fRightSole_vec_RightSS1.hh"

namespace RightSS1
{

void J_fRightSole_vec_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:30 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t6;
  double t173;
  double t999;
  double t1052;
  double t1072;
  double t1757;
  double t2173;
  double t2327;
  double t2750;
  double t2816;
  double t2918;
  double t2980;
  double t1058;
  double t1289;
  double t1641;
  double t2347;
  double t3011;
  double t3025;
  double t3232;
  double t3307;
  double t3327;
  double t3795;
  double t3846;
  double t3853;
  double t3927;
  double t3935;
  double t3956;
  double t3995;
  double t4017;
  double t4029;
  double t4031;
  double t305;
  double t450;
  double t4173;
  double t4183;
  double t4184;
  double t4167;
  double t4171;
  double t4187;
  double t4196;
  double t4200;
  double t4220;
  double t4141;
  double t4291;
  double t4307;
  double t4309;
  double t4143;
  double t4568;
  double t4582;
  double t4669;
  double t4670;
  double t4671;
  double t4676;
  double t4685;
  double t4742;
  double t4746;
  double t4760;
  double t4766;
  double t4767;
  double t4772;
  double t4733;
  double t4808;
  double t4818;
  double t4831;
  t6 = Cos(var1[2]);
  t173 = Cos(var1[5]);
  t999 = Sin(var1[2]);
  t1052 = Sin(var1[5]);
  t1072 = Cos(var1[6]);
  t1757 = t6*t173;
  t2173 = -1.*t999*t1052;
  t2327 = t1757 + t2173;
  t2750 = -1.*t173*t999;
  t2816 = -1.*t6*t1052;
  t2918 = t2750 + t2816;
  t2980 = Sin(var1[6]);
  t1058 = -0.4999*t999*t1052;
  t1289 = -1.*t1072;
  t1641 = 1. + t1289;
  t2347 = -0.9063*t1641*t2327;
  t3011 = 0.9063*t2918*t2980;
  t3025 = t1072*t2327;
  t3232 = t2918*t2980;
  t3307 = t3025 + t3232;
  t3327 = -1.373025*t3307;
  t3795 = t173*t999;
  t3846 = t6*t1052;
  t3853 = t3795 + t3846;
  t3927 = 0.9063*t1072*t2918;
  t3935 = -0.9063*t2327*t2980;
  t3956 = t1072*t2918;
  t3995 = -1.*t2327*t2980;
  t4017 = t3956 + t3995;
  t4029 = -1.373025*t4017;
  t4031 = t3927 + t3935 + t4029;
  t305 = -1.*t173;
  t450 = 1. + t305;
  t4173 = -1.*t6*t173;
  t4183 = t999*t1052;
  t4184 = t4173 + t4183;
  t4167 = -0.4999*t6*t1052;
  t4171 = -0.9063*t1641*t2918;
  t4187 = 0.9063*t4184*t2980;
  t4196 = t4184*t2980;
  t4200 = t3956 + t4196;
  t4220 = -1.373025*t4200;
  t4141 = var2[6]*t4031;
  t4291 = -0.4999*t173*t999;
  t4307 = t4291 + t4167 + t4171 + t4187 + t4220;
  t4309 = var2[5]*t4307;
  t4143 = 0.4999*t450*t999;
  t4568 = -0.9063*t2918*t2980;
  t4582 = -1.*t2918*t2980;
  t4669 = 0.9063*t1072*t4184;
  t4670 = t1072*t4184;
  t4671 = t4670 + t4582;
  t4676 = -1.373025*t4671;
  t4685 = t4669 + t4568 + t4676;
  t4742 = 0.4999*t999*t1052;
  t4746 = -0.9063*t1641*t4184;
  t4760 = 0.9063*t3853*t2980;
  t4766 = t3853*t2980;
  t4767 = t4670 + t4766;
  t4772 = -1.373025*t4767;
  t4733 = var2[6]*t4685;
  t4808 = -0.4999*t6*t173;
  t4818 = t4808 + t4742 + t4746 + t4760 + t4772;
  t4831 = var2[5]*t4818;
  p_output1[0]=var2[2]*(t4141 + t4309 + (t4143 + t4167 + t4171 + t4187 + t4220)*var2[2]) + (t4141 + t4309 + t4307*var2[2])*var2[5] + var2[6]*(t4031*var2[2] + t4031*var2[5] + (-0.9063*t1072*t3853 + t3935 - 1.373025*(-1.*t1072*t3853 + t3995))*var2[6]) + var3[0] + (0. + t1058 + t2347 + t3011 + t3327 - 0.4999*t450*t6)*var3[2] + (0. + t1058 + t2347 + t3011 + t3327 + 0.4999*t173*t6)*var3[5] + (0. + 0.9063*t1072*t2327 - 0.9063*t2980*t3853 - 1.373025*(t3025 - 1.*t2980*t3853))*var3[6];
  p_output1[1]=var2[2]*(t4733 + t4831 + (t4742 + t4746 + t4760 + t4772 + 0.4999*t450*t6)*var2[2]) + (t4733 + t4831 + t4818*var2[2])*var2[5] + var2[6]*(t4685*var2[2] + t4685*var2[5] + (-0.9063*t1072*t2327 + t4568 - 1.373025*(-1.*t1072*t2327 + t4582))*var2[6]) + var3[1] + (0. + t4143 + t4167 + t4171 + t4187 + t4220)*var3[2] + (0. + t4167 + t4171 + t4187 + t4220 + t4291)*var3[5] + (0. + t3927 + t3935 + t4029)*var3[6];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightSole_RightSS.hh"

namespace RightSS
{

void ddh_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE

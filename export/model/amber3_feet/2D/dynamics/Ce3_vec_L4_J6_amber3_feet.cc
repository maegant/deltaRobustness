/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:24 GMT-08:00
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
  double t427;
  double t254;
  double t263;
  double t458;
  double t665;
  double t357;
  double t548;
  double t549;
  double t218;
  double t712;
  double t739;
  double t866;
  double t1115;
  double t594;
  double t885;
  double t952;
  double t211;
  double t1228;
  double t1268;
  double t1303;
  double t1927;
  double t1928;
  double t1969;
  double t1971;
  double t1982;
  double t2016;
  double t1724;
  double t1738;
  double t1766;
  double t1838;
  double t2049;
  double t2111;
  double t2128;
  double t2139;
  double t2171;
  double t2199;
  double t2266;
  double t2269;
  double t2322;
  double t2340;
  double t2365;
  double t3425;
  double t3460;
  double t3512;
  double t1085;
  double t1529;
  double t4011;
  double t4012;
  double t3004;
  double t3006;
  double t4646;
  double t4649;
  double t4334;
  double t4375;
  double t4392;
  double t4417;
  double t1672;
  double t1690;
  double t1719;
  double t2318;
  double t2394;
  double t4734;
  double t4804;
  double t4831;
  double t3637;
  double t3676;
  double t3783;
  double t3785;
  double t4425;
  double t4642;
  double t4851;
  double t4932;
  double t4939;
  double t4956;
  double t4977;
  double t4998;
  double t5001;
  double t5032;
  double t5088;
  double t6112;
  double t6137;
  double t6180;
  double t6186;
  double t5423;
  double t5440;
  double t5471;
  double t5538;
  double t5876;
  double t5894;
  t427 = Cos(var1[4]);
  t254 = Cos(var1[5]);
  t263 = Sin(var1[4]);
  t458 = Sin(var1[5]);
  t665 = Cos(var1[3]);
  t357 = t254*t263;
  t548 = t427*t458;
  t549 = t357 + t548;
  t218 = Sin(var1[3]);
  t712 = t427*t254;
  t739 = -1.*t263*t458;
  t866 = t712 + t739;
  t1115 = Cos(var1[2]);
  t594 = -1.*t218*t549;
  t885 = t665*t866;
  t952 = t594 + t885;
  t211 = Sin(var1[2]);
  t1228 = t665*t549;
  t1268 = t218*t866;
  t1303 = t1228 + t1268;
  t1927 = -1.*t254;
  t1928 = 1. + t1927;
  t1969 = -1.3127*t1928;
  t1971 = -1.3127*t254;
  t1982 = -0.06*t458;
  t2016 = t1969 + t1971 + t1982;
  t1724 = -1.*t427;
  t1738 = 1. + t1724;
  t1766 = -0.9063*t1738;
  t1838 = -0.06*t254*t263;
  t2049 = t427*t2016;
  t2111 = t1766 + t1838 + t2049;
  t2128 = t665*t2111;
  t2139 = 0.06*t427*t254;
  t2171 = 0.9063*t263;
  t2199 = t263*t2016;
  t2266 = t2139 + t2171 + t2199;
  t2269 = -1.*t218*t2266;
  t2322 = -1.*t254*t263;
  t2340 = -1.*t427*t458;
  t2365 = t2322 + t2340;
  t3425 = t665*t2365;
  t3460 = -1.*t218*t866;
  t3512 = t3425 + t3460;
  t1085 = -1.*t211*t952;
  t1529 = t1115*t952;
  t4011 = -1.*t665*t549;
  t4012 = t4011 + t3460;
  t3004 = t218*t2365;
  t3006 = t3004 + t885;
  t4646 = 0.9063*t427;
  t4649 = t4646 + t1838 + t2049;
  t4334 = -0.06*t427*t254;
  t4375 = -0.9063*t263;
  t4392 = -1.*t263*t2016;
  t4417 = t4334 + t4375 + t4392;
  t1672 = -1.*t665;
  t1690 = 1. + t1672;
  t1719 = -0.4999*t1690;
  t2318 = t1719 + t2128 + t2269;
  t2394 = -1.*t218*t2365;
  t4734 = -1.*t427*t254;
  t4804 = t263*t458;
  t4831 = t4734 + t4804;
  t3637 = 0.4999*t218;
  t3676 = t218*t2111;
  t3783 = t665*t2266;
  t3785 = t3637 + t3676 + t3783;
  t4425 = -1.*t2266*t2365;
  t4642 = 0.4999*t866;
  t4851 = -1.*t2111*t4831;
  t4932 = -1.*t211*t3006;
  t4939 = t1115*t3512;
  t4956 = t4932 + t4939;
  t4977 = -0.03428571*var2[1]*t4956;
  t4998 = t1115*t3006;
  t5001 = t211*t3512;
  t5032 = t4998 + t5001;
  t5088 = -0.03428571*var2[0]*t5032;
  t6112 = -0.06*t427*t458;
  t6137 = t1838 + t6112;
  t6180 = 0.06*t263*t458;
  t6186 = t4334 + t6180;
  t5423 = t665*t4831;
  t5440 = t2394 + t5423;
  t5471 = -1.*t2318*t5440;
  t5538 = t218*t4831;
  t5876 = t3425 + t5538;
  t5894 = -1.*t3785*t5876;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.03428571*(t1529 - 1.*t1303*t211)*var2[0] - 0.03428571*(t1085 - 1.*t1115*t1303)*var2[1])*var2[5];
  p_output1[3]=(-0.03428571*(t1529 + t211*t4012)*var2[0] - 0.03428571*(t1085 + t1115*t4012)*var2[1] - 0.03428571*(-1.*t3512*t3785 - 1.*t3006*(t2128 + t2269 + 0.4999*t665) - 1.*t3512*(-0.4999*t218 - 1.*t2111*t218 - 1.*t2266*t665) - 1.*t2318*(t2394 - 1.*t665*t866))*var2[2])*var2[5];
  p_output1[4]=(t4977 + t5088 - 0.03428571*(t5471 + t5894 - 1.*t3512*(-1.*t218*t4649 + t4417*t665) - 1.*t3006*(t218*t4417 + t4649*t665))*var2[2] - 0.03428571*(-1.*t2365*t4417 + t4425 + t4642 + t4851 - 1.*t4649*t866)*var2[3])*var2[5];
  p_output1[5]=(t4977 + t5088 - 0.03428571*(t5471 + t5894 - 1.*t3006*(t218*t6186 + t6137*t665) - 1.*t3512*(-1.*t218*t6137 + t6186*t665))*var2[2] - 0.03428571*(t4425 + t4642 + t4851 - 1.*t2365*t6186 - 1.*t6137*t866)*var2[3] - 0.03428571*(0.9063*t254 + t2016*t254 + 0.06*t254*t458)*var2[4])*var2[5];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec_L4_J6_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L4_J6_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

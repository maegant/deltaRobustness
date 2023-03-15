/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:36 GMT-08:00
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
  double t438;
  double t148;
  double t318;
  double t589;
  double t144;
  double t404;
  double t645;
  double t705;
  double t709;
  double t765;
  double t1712;
  double t1731;
  double t1733;
  double t1750;
  double t1753;
  double t1834;
  double t1860;
  double t1870;
  double t1912;
  double t1948;
  double t1833;
  double t1968;
  double t2057;
  double t2091;
  double t2105;
  double t1312;
  double t1373;
  double t1386;
  double t2210;
  double t2212;
  double t2223;
  double t2289;
  double t2300;
  double t2387;
  double t2581;
  double t2634;
  double t2903;
  double t2939;
  double t2873;
  double t2943;
  double t2961;
  double t2976;
  double t3027;
  double t1444;
  double t1504;
  double t1812;
  double t1683;
  double t1755;
  double t3171;
  double t3219;
  double t3236;
  double t3249;
  double t3271;
  double t3351;
  double t3369;
  double t3379;
  double t3393;
  double t3576;
  double t3580;
  double t3122;
  double t3306;
  double t3315;
  double t3316;
  double t3321;
  double t3806;
  double t3809;
  double t3523;
  double t3539;
  double t3635;
  double t3693;
  double t3727;
  double t3729;
  double t3739;
  double t3741;
  double t3786;
  double t3859;
  double t3898;
  double t3928;
  double t4127;
  double t4131;
  double t4147;
  double t4179;
  double t4180;
  double t4206;
  double t4209;
  double t4408;
  double t4428;
  double t4438;
  double t4456;
  double t4501;
  t438 = Cos(var1[5]);
  t148 = Cos(var1[6]);
  t318 = Sin(var1[5]);
  t589 = Sin(var1[6]);
  t144 = Sin(var1[2]);
  t404 = -1.*t148*t318;
  t645 = -1.*t438*t589;
  t705 = t404 + t645;
  t709 = -1.*t144*t705;
  t765 = Cos(var1[2]);
  t1712 = -1.*t438*t148;
  t1731 = t318*t589;
  t1733 = t1712 + t1731;
  t1750 = t765*t1733;
  t1753 = t709 + t1750;
  t1834 = t148*t318;
  t1860 = t438*t589;
  t1870 = t1834 + t1860;
  t1912 = t144*t1870;
  t1948 = t1912 + t1750;
  t1833 = 0.07323676079999998*var2[2]*t1753;
  t1968 = 0.07323676079999998*var2[5]*t1948;
  t2057 = 0.07323676079999998*var2[6]*t1948;
  t2091 = t1833 + t1968 + t2057;
  t2105 = var2[6]*t2091;
  t1312 = t438*t148;
  t1373 = -1.*t318*t589;
  t1386 = t1312 + t1373;
  t2210 = t765*t705;
  t2212 = -1.*t144*t1386;
  t2223 = t2210 + t2212;
  t2289 = t144*t1733;
  t2300 = t2210 + t2289;
  t2387 = -1.*t765*t705;
  t2581 = -1.*t144*t1733;
  t2634 = t2387 + t2581;
  t2903 = t765*t1870;
  t2939 = t2903 + t2581;
  t2873 = 0.07323676079999998*var2[2]*t2634;
  t2943 = 0.07323676079999998*var2[5]*t2939;
  t2961 = 0.07323676079999998*var2[6]*t2939;
  t2976 = t2873 + t2943 + t2961;
  t3027 = var2[6]*t2976;
  t1444 = -1.*t765*t1386;
  t1504 = t709 + t1444;
  t1812 = 0.07323676079999998*var2[6]*t1753;
  t1683 = 0.07323676079999998*var2[2]*t1504;
  t1755 = 0.07323676079999998*var2[5]*t1753;
  t3171 = -1.*t148;
  t3219 = 1. + t3171;
  t3236 = -0.9063*t3219;
  t3249 = -1.078185*t148;
  t3271 = t3236 + t3249;
  t3351 = -0.4999*t318;
  t3369 = -1.*t3271*t318;
  t3379 = 0.17188499999999995*t438*t589;
  t3393 = t3351 + t3369 + t3379;
  t3576 = t438*t3271;
  t3580 = 0.17188499999999995*t318*t589;
  t3122 = 0.4999*t318;
  t3306 = t3271*t318;
  t3315 = -0.17188499999999995*t438*t589;
  t3316 = t3122 + t3306 + t3315;
  t3321 = t705*t3316;
  t3806 = 0.17188499999999995*t148*t318;
  t3809 = t3806 + t3379;
  t3523 = -0.17188499999999995*t318*t589;
  t3539 = 0.4999*t438;
  t3635 = t3539 + t3576 + t3580;
  t3693 = -1.*t438;
  t3727 = 1. + t3693;
  t3729 = -0.4999*t3727;
  t3739 = t3729 + t3576 + t3580;
  t3741 = t3739*t1733;
  t3786 = t705*t3393;
  t3859 = t705*t3809;
  t3898 = t3809*t1870;
  t3928 = 0.17188499999999995*t438*t148;
  t4127 = t3928 + t3523;
  t4131 = t1386*t4127;
  t4147 = t1386*t3635;
  t4179 = -0.17188499999999995*t438*t148;
  t4180 = t4179 + t3580;
  t4206 = t1386*t4180;
  t4209 = t3321 + t3786 + t3859 + t3898 + t4131 + t4147 + t4206 + t3741;
  t4408 = t3316*t1386;
  t4428 = t3393*t1386;
  t4438 = t705*t3739;
  t4456 = t1870*t3635;
  t4501 = t4408 + t4428 + t4438 + t4456;
  p_output1[0]=(t1683 + t1755 + t1812)*var2[6];
  p_output1[1]=t2105;
  p_output1[2]=t2105;
  p_output1[3]=0.07323676079999998*t2223*var2[6];
  p_output1[4]=0.07323676079999998*t2300*var2[6];
  p_output1[5]=0.07323676079999998*t2223*var2[2] + 0.07323676079999998*t2300*var2[5] + 0.14647352159999996*t2300*var2[6];
  p_output1[6]=var2[6]*(0.07323676079999998*(t1386*t144 + t2387)*var2[2] + 0.07323676079999998*t2634*var2[5] + 0.07323676079999998*t2634*var2[6]);
  p_output1[7]=t3027;
  p_output1[8]=t3027;
  p_output1[9]=0.07323676079999998*t1504*var2[6];
  p_output1[10]=t1812;
  p_output1[11]=t1683 + t1755 + 0.14647352159999996*t1753*var2[6];
  p_output1[12]=var2[6]*(0.07323676079999998*(t3321 + t1870*t3393 + 2.*t1386*t3635 + t3741 + t1386*(t3523 - 0.4999*t438 - 1.*t3271*t438) + 2.*t3393*t705)*var2[5] + 0.07323676079999998*t4209*var2[6]);
  p_output1[13]=var2[6]*(0.07323676079999998*t4209*var2[5] + 0.07323676079999998*(t3321 + t3741 + t3898 + t4131 + 2.*t1386*t4180 + 2.*t3809*t705)*var2[6]);
  p_output1[14]=0.07323676079999998*t4501*var2[6];
  p_output1[15]=0.07323676079999998*t4501*var2[5] + 0.14647352159999996*(t1386*t3809 + t1870*t4180 + t4408 + t4438)*var2[6];
  p_output1[16]=0.07323676079999998*(0. - 0.4999*t148 - 0.17188499999999995*Power(t148,2) - 1.*t148*t3271)*Power(var2[6],2);
  p_output1[17]=0.14647352159999996*(-0.4999*t589 - 0.17188499999999995*t148*t589 - 1.*t3271*t589)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L5_J7_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L5_J7_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

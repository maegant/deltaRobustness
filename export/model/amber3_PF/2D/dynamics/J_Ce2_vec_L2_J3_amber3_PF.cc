/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:04 GMT-08:00
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
  double t1312;
  double t1504;
  double t38;
  double t1683;
  double t1819;
  double t1829;
  double t1833;
  double t1755;
  double t1810;
  double t1812;
  double t1375;
  double t1731;
  double t1750;
  double t1860;
  double t1866;
  double t1870;
  double t2301;
  double t2305;
  double t2322;
  double t2375;
  double t2379;
  double t1753;
  double t1834;
  double t1888;
  double t1912;
  double t1920;
  double t1948;
  double t1968;
  double t2057;
  double t2091;
  double t2105;
  double t2210;
  double t2223;
  double t2256;
  double t2289;
  double t2300;
  double t2389;
  double t2483;
  double t2527;
  double t2634;
  double t2647;
  double t2656;
  double t2670;
  double t2675;
  double t2806;
  double t3351;
  double t3379;
  double t3428;
  double t3444;
  double t3503;
  double t3523;
  double t3532;
  double t3534;
  double t3806;
  double t3859;
  double t3928;
  double t4127;
  double t4147;
  double t4179;
  double t3063;
  double t3064;
  double t3122;
  double t2961;
  double t2976;
  double t3027;
  double t4206;
  double t4209;
  double t3539;
  double t4356;
  double t4370;
  double t2873;
  double t4232;
  double t4273;
  double t4276;
  double t4284;
  double t3037;
  double t3236;
  double t3249;
  double t3729;
  double t3739;
  double t3742;
  double t2903;
  double t4781;
  double t4817;
  double t4834;
  double t4850;
  double t3786;
  double t4517;
  t1312 = Cos(var1[3]);
  t1504 = Sin(var1[2]);
  t38 = Cos(var1[2]);
  t1683 = Sin(var1[3]);
  t1819 = t38*t1312;
  t1829 = -1.*t1504*t1683;
  t1833 = t1819 + t1829;
  t1755 = -1.*t1312*t1504;
  t1810 = -1.*t38*t1683;
  t1812 = t1755 + t1810;
  t1375 = -1.*t38*t1312;
  t1731 = t1504*t1683;
  t1750 = t1375 + t1731;
  t1860 = t1312*t1504;
  t1866 = t38*t1683;
  t1870 = t1860 + t1866;
  t2301 = -1.*t1312;
  t2305 = 1. + t2301;
  t2322 = -0.4999*t2305;
  t2375 = -0.6493*t1312;
  t2379 = t2322 + t2375;
  t1753 = 0.25592966999999994*var2[3]*t1750;
  t1834 = 10.2783*t1812*t1833;
  t1888 = 3.4261*t1870*t1833;
  t1912 = 10.2783*t1812*t1750;
  t1920 = 3.4261*t1870*t1750;
  t1948 = t1834 + t1888 + t1912 + t1920;
  t1968 = -0.5*var2[1]*t1948;
  t2057 = Power(t1812,2);
  t2091 = 6.8522*t2057;
  t2105 = 6.8522*t1812*t1870;
  t2210 = Power(t1833,2);
  t2223 = 6.8522*t2210;
  t2256 = 6.8522*t1833*t1750;
  t2289 = t2091 + t2105 + t2223 + t2256;
  t2300 = -0.5*var2[0]*t2289;
  t2389 = t2379*t1683;
  t2483 = 0.14939999999999998*t1312*t1683;
  t2527 = t2389 + t2483;
  t2634 = 3.4261*t1812*t2527;
  t2647 = t2379*t1312;
  t2656 = Power(t1683,2);
  t2670 = -0.14939999999999998*t2656;
  t2675 = t2647 + t2670;
  t2806 = 3.4261*t1750*t2675;
  t3351 = 6.8522*t1812*t1833;
  t3379 = 6.8522*t1870*t1833;
  t3428 = t3351 + t3379;
  t3444 = 3.4261*t2057;
  t3503 = 3.4261*t1812*t1870;
  t3523 = 3.4261*t2210;
  t3532 = 3.4261*t1833*t1750;
  t3534 = t3444 + t3503 + t3523 + t3532;
  t3806 = 0.25592966999999994*var2[3]*t1870;
  t3859 = -0.5*var2[0]*t1948;
  t3928 = Power(t1750,2);
  t4127 = 6.8522*t3928;
  t4147 = t2091 + t2105 + t2256 + t4127;
  t4179 = -0.5*var2[1]*t4147;
  t3063 = Power(t1312,2);
  t3064 = 0.14939999999999998*t3063;
  t3122 = 0. + t2647 + t3064;
  t2961 = -1.*t2379*t1683;
  t2976 = -0.14939999999999998*t1312*t1683;
  t3027 = t2961 + t2976;
  t4206 = 3.4261*t2527*t1750;
  t4209 = 3.4261*t1870*t2675;
  t3539 = -0.5*var2[2]*t3534;
  t4356 = 6.8522*t1812*t1750;
  t4370 = t3351 + t4356;
  t2873 = t2634 + t2806;
  t4232 = t4206 + t4209;
  t4273 = 3.4261*t3122*t1812;
  t4276 = 3.4261*t3027*t1750;
  t4284 = t4273 + t4276 + t4206 + t4209;
  t3037 = 3.4261*t1812*t3027;
  t3236 = 3.4261*t3122*t1833;
  t3249 = t3037 + t2634 + t3236 + t2806;
  t3729 = 3.4261*t2527*t1833;
  t3739 = 3.4261*t1812*t2675;
  t3742 = t3729 + t3739;
  t2903 = -0.5*var2[2]*t2873;
  t4781 = 0.25592966999999994*var2[1]*t1870;
  t4817 = 0.25592966999999994*var2[0]*t1750;
  t4834 = t4781 + t4817;
  t4850 = var2[2]*t4834;
  t3786 = 0.25592966999999994*var2[2]*t1812;
  t4517 = 0.25592966999999994*var2[2]*t1750;
  p_output1[0]=(t1753 + t1968 + t2300 + t2903)*var2[2];
  p_output1[1]=var2[2]*(t1753 + t1968 + t2300 - 0.5*t3249*var2[2]);
  p_output1[2]=-0.5*t3428*var2[2];
  p_output1[3]=t3539;
  p_output1[4]=-0.5*t3428*var2[0] - 0.5*t3534*var2[1] - 1.*t3742*var2[2] + 0.25592966999999994*t1812*var2[3];
  p_output1[5]=t3786;
  p_output1[6]=var2[2]*(t3806 + t3859 + t4179 - 0.5*t4232*var2[2]);
  p_output1[7]=var2[2]*(t3806 + t3859 + t4179 - 0.5*t4284*var2[2]);
  p_output1[8]=t3539;
  p_output1[9]=-0.5*t4370*var2[2];
  p_output1[10]=t1753 - 0.5*t3534*var2[0] - 0.5*t4370*var2[1] - 1.*t2873*var2[2];
  p_output1[11]=t4517;
  p_output1[12]=(-0.5*t2873*var2[0] - 0.5*t4232*var2[1])*var2[2];
  p_output1[13]=(-0.5*t3249*var2[0] - 0.5*t4284*var2[1])*var2[2];
  p_output1[14]=-0.5*t3742*var2[2];
  p_output1[15]=t2903;
  p_output1[16]=-0.5*t3742*var2[0] - 0.5*t2873*var2[1];
  p_output1[17]=t4850;
  p_output1[18]=t4850;
  p_output1[19]=t3786;
  p_output1[20]=t4517;
  p_output1[21]=0.25592966999999994*t1812*var2[0] + 0.25592966999999994*t1750*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L2_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L2_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

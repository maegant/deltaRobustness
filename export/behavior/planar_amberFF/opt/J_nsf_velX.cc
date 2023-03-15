/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:50 GMT-08:00
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
  double t458;
  double t315;
  double t323;
  double t659;
  double t263;
  double t337;
  double t837;
  double t850;
  double t1123;
  double t1383;
  double t1402;
  double t1427;
  double t1456;
  double t1624;
  double t1685;
  double t1742;
  double t1807;
  double t1893;
  double t1903;
  double t1904;
  double t2024;
  double t2491;
  double t2517;
  double t2519;
  double t2329;
  double t1546;
  double t1597;
  double t2936;
  double t2937;
  double t2968;
  double t3013;
  double t3017;
  double t3061;
  double t3071;
  double t2880;
  double t2886;
  double t2914;
  double t2919;
  double t2981;
  double t3052;
  double t3101;
  double t3153;
  double t3202;
  double t3241;
  double t3255;
  double t3283;
  double t3288;
  double t3289;
  double t3308;
  double t1040;
  double t1453;
  double t1799;
  double t1911;
  double t2056;
  double t2104;
  double t2126;
  double t2178;
  double t2332;
  double t2362;
  double t2363;
  double t2405;
  double t2476;
  double t2533;
  double t2593;
  double t2599;
  double t2628;
  double t2632;
  double t2652;
  double t2661;
  double t2685;
  double t2708;
  double t3332;
  double t3358;
  double t3366;
  double t3596;
  double t3621;
  double t3622;
  double t3624;
  double t3643;
  double t3689;
  double t3690;
  double t3695;
  double t3848;
  double t3851;
  double t3770;
  double t3673;
  double t3694;
  double t3720;
  double t3723;
  double t3735;
  double t3744;
  double t3780;
  double t3797;
  double t3815;
  double t4011;
  double t4017;
  double t4024;
  double t2783;
  double t2797;
  double t4214;
  double t4341;
  double t4351;
  double t4354;
  double t4359;
  double t4367;
  double t4373;
  double t4385;
  double t4390;
  double t4434;
  double t4072;
  double t4087;
  double t4559;
  t458 = Cos(var1[2]);
  t315 = Cos(var1[3]);
  t323 = Sin(var1[2]);
  t659 = Sin(var1[3]);
  t263 = Cos(var1[4]);
  t337 = -1.*t315*t323;
  t837 = -1.*t458*t659;
  t850 = t337 + t837;
  t1123 = t458*t315;
  t1383 = -1.*t323*t659;
  t1402 = t1123 + t1383;
  t1427 = Sin(var1[4]);
  t1456 = Cos(var1[5]);
  t1624 = t263*t850;
  t1685 = -1.*t1402*t1427;
  t1742 = t1624 + t1685;
  t1807 = -1.*t263*t1402;
  t1893 = -1.*t850*t1427;
  t1903 = t1807 + t1893;
  t1904 = Sin(var1[5]);
  t2024 = t1456*t1742;
  t2491 = t263*t1402;
  t2517 = t850*t1427;
  t2519 = t2491 + t2517;
  t2329 = -1.*t1742*t1904;
  t1546 = -1.*t1456;
  t1597 = 1. + t1546;
  t2936 = -1.*t458*t315;
  t2937 = t323*t659;
  t2968 = t2936 + t2937;
  t3013 = t2968*t1427;
  t3017 = t1624 + t3013;
  t3061 = t263*t2968;
  t3071 = t3061 + t1893;
  t2880 = -0.4999*t458*t659;
  t2886 = -1.*t263;
  t2914 = 1. + t2886;
  t2919 = -0.9063*t2914*t850;
  t2981 = 0.9063*t2968*t1427;
  t3052 = -1.3127*t1597*t3017;
  t3101 = 1.3127*t3071*t1904;
  t3153 = t1456*t3017;
  t3202 = t3071*t1904;
  t3241 = t3153 + t3202;
  t3255 = -1.3127*t3241;
  t3283 = t1456*t3071;
  t3288 = -1.*t3017*t1904;
  t3289 = t3283 + t3288;
  t3308 = 0.06*t3289;
  t1040 = 0.9063*t263*t850;
  t1453 = -0.9063*t1402*t1427;
  t1799 = -1.3127*t1597*t1742;
  t1911 = 1.3127*t1903*t1904;
  t2056 = t1903*t1904;
  t2104 = t2024 + t2056;
  t2126 = -1.3127*t2104;
  t2178 = t1456*t1903;
  t2332 = t2178 + t2329;
  t2362 = 0.06*t2332;
  t2363 = t1040 + t1453 + t1799 + t1911 + t2126 + t2362;
  t2405 = var2[4]*t2363;
  t2476 = 1.3127*t1456*t1742;
  t2533 = -1.3127*t2519*t1904;
  t2593 = -1.*t2519*t1904;
  t2599 = t2024 + t2593;
  t2628 = -1.3127*t2599;
  t2632 = -1.*t1456*t2519;
  t2652 = t2632 + t2329;
  t2661 = 0.06*t2652;
  t2685 = t2476 + t2533 + t2628 + t2661;
  t2708 = var2[5]*t2685;
  t3332 = -0.4999*t315*t323;
  t3358 = t3332 + t2880 + t2919 + t2981 + t3052 + t3101 + t3255 + t3308;
  t3366 = var2[3]*t3358;
  t3596 = t315*t323;
  t3621 = t458*t659;
  t3622 = t3596 + t3621;
  t3624 = -1.*t263*t3622;
  t3643 = t3624 + t1685;
  t3689 = -1.*t3622*t1427;
  t3690 = t2491 + t3689;
  t3695 = t1456*t3643;
  t3848 = t3622*t1427;
  t3851 = t1807 + t3848;
  t3770 = -1.*t3643*t1904;
  t3673 = 1.3127*t1456*t3643;
  t3694 = -1.3127*t3690*t1904;
  t3720 = -1.*t3690*t1904;
  t3723 = t3695 + t3720;
  t3735 = -1.3127*t3723;
  t3744 = -1.*t1456*t3690;
  t3780 = t3744 + t3770;
  t3797 = 0.06*t3780;
  t3815 = t3673 + t3694 + t3735 + t3797;
  t4011 = t263*t3622;
  t4017 = t1402*t1427;
  t4024 = t4011 + t4017;
  t2783 = -1.*t315;
  t2797 = 1. + t2783;
  t4214 = -0.4999*t323*t659;
  t4341 = -0.9063*t2914*t1402;
  t4351 = 0.9063*t850*t1427;
  t4354 = -1.3127*t1597*t2519;
  t4359 = 1.3127*t1742*t1904;
  t4367 = 0.06*t2599;
  t4373 = t1456*t2519;
  t4385 = t1742*t1904;
  t4390 = t4373 + t4385;
  t4434 = -1.3127*t4390;
  t4072 = -1.*t1456*t4024;
  t4087 = t4072 + t3720;
  t4559 = t1456*t3690;
  p_output1[0]=t2405 + t2708 + t3366 + (t2880 + t2919 + t2981 + t3052 + t3101 + 0.4999*t2797*t323 + t3255 + t3308)*var2[2];
  p_output1[1]=t2405 + t2708 + t3366 + t3358*var2[2];
  p_output1[2]=t2363*var2[2] + t2363*var2[3] + (t1453 - 0.9063*t263*t3622 - 1.3127*t1597*t3643 + 1.3127*t1904*t3851 + 0.06*(t3770 + t1456*t3851) - 1.3127*(t3695 + t1904*t3851))*var2[4] + t3815*var2[5];
  p_output1[3]=t2685*var2[2] + t2685*var2[3] + t3815*var2[4] + (t3694 - 1.3127*t1456*t4024 + 0.06*(t3744 + t1904*t4024) - 1.3127*t4087)*var2[5];
  p_output1[4]=1.;
  p_output1[5]=t4214 + t4341 + t4351 + t4354 + t4359 + t4367 + t4434 - 0.4999*t2797*t458;
  p_output1[6]=t4214 + t4341 + t4351 + t4354 + t4359 + t4367 + t4434 + 0.4999*t315*t458;
  p_output1[7]=0.9063*t1402*t263 - 0.9063*t1427*t3622 + 1.3127*t1904*t3643 - 1.3127*t1597*t3690 + 0.06*t3723 - 1.3127*(t1904*t3643 + t4559);
  p_output1[8]=1.3127*t1456*t3690 - 1.3127*t1904*t4024 + 0.06*t4087 - 1.3127*(-1.*t1904*t4024 + t4559);
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

#include "J_nsf_velX.hh"

namespace RightSS1
{

void J_nsf_velX_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

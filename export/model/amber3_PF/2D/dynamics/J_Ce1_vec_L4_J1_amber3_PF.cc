/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:14 GMT-08:00
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
  double t183;
  double t249;
  double t612;
  double t894;
  double t969;
  double t1324;
  double t1428;
  double t1746;
  double t1747;
  double t1754;
  double t1489;
  double t1578;
  double t1622;
  double t1648;
  double t1665;
  double t1718;
  double t1787;
  double t1792;
  double t1841;
  double t1881;
  double t1882;
  double t1885;
  double t1903;
  double t2189;
  double t2193;
  double t2205;
  double t2208;
  double t2220;
  double t2237;
  double t2271;
  double t2398;
  double t2409;
  double t2419;
  double t2453;
  double t2463;
  double t2541;
  double t2557;
  double t2560;
  double t2566;
  double t2581;
  double t2584;
  double t2605;
  double t2634;
  double t2645;
  double t2673;
  double t2820;
  double t2828;
  double t2871;
  double t2873;
  double t2875;
  double t2889;
  double t2907;
  double t3044;
  double t3057;
  double t3070;
  double t3085;
  double t3104;
  double t3119;
  double t3134;
  double t3142;
  double t3357;
  double t3371;
  double t3394;
  double t3495;
  double t3519;
  double t3528;
  double t3539;
  double t3547;
  double t3718;
  double t3740;
  double t4049;
  double t4072;
  double t4120;
  double t4131;
  double t4180;
  double t4189;
  double t4284;
  double t4354;
  double t4355;
  double t4388;
  double t4421;
  t183 = Cos(var1[5]);
  t249 = Sin(var1[2]);
  t612 = -1.*t183*t249;
  t894 = Cos(var1[2]);
  t969 = Sin(var1[5]);
  t1324 = -1.*t894*t969;
  t1428 = t612 + t1324;
  t1746 = t894*t183;
  t1747 = -1.*t249*t969;
  t1754 = t1746 + t1747;
  t1489 = Power(t1428,2);
  t1578 = 6.8522*t1489;
  t1622 = t183*t249;
  t1648 = t894*t969;
  t1665 = t1622 + t1648;
  t1718 = 6.8522*t1428*t1665;
  t1787 = Power(t1754,2);
  t1792 = 6.8522*t1787;
  t1841 = -1.*t894*t183;
  t1881 = t249*t969;
  t1882 = t1841 + t1881;
  t1885 = 6.8522*t1754*t1882;
  t1903 = t1578 + t1718 + t1792 + t1885;
  t2189 = -0.5*var2[2]*t1903;
  t2193 = -0.5*var2[5]*t1903;
  t2205 = t2189 + t2193;
  t2208 = var2[0]*t2205;
  t2220 = 6.8522*t1428*t1754;
  t2237 = 6.8522*t1665*t1754;
  t2271 = t2220 + t2237;
  t2398 = -0.5*var2[0]*t2271;
  t2409 = 10.2783*t1428*t1754;
  t2419 = 3.4261*t1665*t1754;
  t2453 = 10.2783*t1428*t1882;
  t2463 = 3.4261*t1665*t1882;
  t2541 = t2409 + t2419 + t2453 + t2463;
  t2557 = -0.5*var2[2]*t2541;
  t2560 = -0.5*var2[5]*t2541;
  t2566 = t2557 + t2560;
  t2581 = var2[0]*t2566;
  t2584 = 3.4261*t1489;
  t2605 = 3.4261*t1428*t1665;
  t2634 = 3.4261*t1787;
  t2645 = 3.4261*t1754*t1882;
  t2673 = t2584 + t2605 + t2634 + t2645;
  t2820 = -0.5*var2[0]*t2673;
  t2828 = -1.*t183;
  t2871 = 1. + t2828;
  t2873 = -0.4999*t2871;
  t2875 = -0.6493*t183;
  t2889 = t2873 + t2875;
  t2907 = t2889*t969;
  t3044 = 0.14939999999999998*t183*t969;
  t3057 = t2907 + t3044;
  t3070 = 3.4261*t1428*t3057;
  t3085 = t2889*t183;
  t3104 = Power(t969,2);
  t3119 = -0.14939999999999998*t3104;
  t3134 = t3085 + t3119;
  t3142 = 3.4261*t1882*t3134;
  t3357 = -1.*t2889*t969;
  t3371 = -0.14939999999999998*t183*t969;
  t3394 = t3357 + t3371;
  t3495 = 3.4261*t1428*t3394;
  t3519 = Power(t183,2);
  t3528 = 0.14939999999999998*t3519;
  t3539 = t3085 + t3528;
  t3547 = 3.4261*t3539*t1754;
  t3718 = 0. + t3085 + t3528;
  t3740 = 3.4261*t3718*t1754;
  t4049 = 3.4261*t3057*t1754;
  t4072 = 3.4261*t1428*t3134;
  t4120 = t4049 + t4072;
  t4131 = 3.4261*t3539*t1665;
  t4180 = 3.4261*t3394*t1754;
  t4189 = t4131 + t4180 + t4049 + t4072;
  t4284 = 0.25592966999999994*var2[2]*t1882;
  t4354 = 0.25592966999999994*var2[5]*t1882;
  t4355 = t4284 + t4354;
  t4388 = var2[0]*t4355;
  t4421 = 0.25592966999999994*var2[0]*t1428;
  p_output1[0]=t2208;
  p_output1[1]=t2208;
  p_output1[2]=-0.5*t2271*var2[2] - 0.5*t2271*var2[5];
  p_output1[3]=t2398;
  p_output1[4]=t2398;
  p_output1[5]=t2581;
  p_output1[6]=t2581;
  p_output1[7]=-0.5*t2673*var2[2] - 0.5*t2673*var2[5];
  p_output1[8]=t2820;
  p_output1[9]=t2820;
  p_output1[10]=var2[0]*(-0.5*(t3070 + t3142)*var2[2] - 0.5*(t3070 + t3142 + t3495 + t3547)*var2[5]);
  p_output1[11]=var2[0]*(-0.5*(t3070 + t3142 + t3495 + t3740)*var2[2] - 0.5*(t3070 + t3142 + 6.8522*t1428*t3394 + 3.4261*t1665*t3394 + 3.4261*t1754*(0. - 1.*t183*t2889 - 0.14939999999999998*t3519) + t3547 + t3740)*var2[5]);
  p_output1[12]=-0.5*t4120*var2[2] - 0.5*t4189*var2[5];
  p_output1[13]=-0.5*t4120*var2[0];
  p_output1[14]=-0.5*t4189*var2[0];
  p_output1[15]=t4388;
  p_output1[16]=t4388;
  p_output1[17]=0.25592966999999994*t1428*var2[2] + 0.25592966999999994*t1428*var2[5];
  p_output1[18]=t4421;
  p_output1[19]=t4421;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L4_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L4_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

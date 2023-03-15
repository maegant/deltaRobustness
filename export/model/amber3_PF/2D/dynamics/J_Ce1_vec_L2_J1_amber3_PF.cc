/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:51 GMT-08:00
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
  double t49;
  double t155;
  double t157;
  double t245;
  double t252;
  double t539;
  double t560;
  double t1083;
  double t1272;
  double t1321;
  double t616;
  double t640;
  double t790;
  double t833;
  double t915;
  double t986;
  double t1440;
  double t1448;
  double t1462;
  double t1482;
  double t1495;
  double t1606;
  double t1766;
  double t1796;
  double t1822;
  double t1831;
  double t1861;
  double t1885;
  double t1898;
  double t1910;
  double t2417;
  double t2525;
  double t2529;
  double t2545;
  double t2695;
  double t2803;
  double t2847;
  double t2935;
  double t2950;
  double t3023;
  double t3058;
  double t3060;
  double t3072;
  double t3097;
  double t3111;
  double t3240;
  double t3285;
  double t3356;
  double t3357;
  double t3362;
  double t3381;
  double t3474;
  double t3513;
  double t3529;
  double t3531;
  double t3538;
  double t3564;
  double t3568;
  double t3663;
  double t3699;
  double t3870;
  double t3874;
  double t3887;
  double t3996;
  double t4044;
  double t4047;
  double t4049;
  double t4066;
  double t4286;
  double t4359;
  double t5132;
  double t5167;
  double t5176;
  double t5249;
  double t5264;
  double t5314;
  double t5502;
  double t5551;
  double t5562;
  double t5606;
  double t5949;
  t49 = Cos(var1[3]);
  t155 = Sin(var1[2]);
  t157 = -1.*t49*t155;
  t245 = Cos(var1[2]);
  t252 = Sin(var1[3]);
  t539 = -1.*t245*t252;
  t560 = t157 + t539;
  t1083 = t245*t49;
  t1272 = -1.*t155*t252;
  t1321 = t1083 + t1272;
  t616 = Power(t560,2);
  t640 = 6.8522*t616;
  t790 = t49*t155;
  t833 = t245*t252;
  t915 = t790 + t833;
  t986 = 6.8522*t560*t915;
  t1440 = Power(t1321,2);
  t1448 = 6.8522*t1440;
  t1462 = -1.*t245*t49;
  t1482 = t155*t252;
  t1495 = t1462 + t1482;
  t1606 = 6.8522*t1321*t1495;
  t1766 = t640 + t986 + t1448 + t1606;
  t1796 = -0.5*var2[2]*t1766;
  t1822 = -0.5*var2[3]*t1766;
  t1831 = t1796 + t1822;
  t1861 = var2[0]*t1831;
  t1885 = 6.8522*t560*t1321;
  t1898 = 6.8522*t915*t1321;
  t1910 = t1885 + t1898;
  t2417 = -0.5*var2[0]*t1910;
  t2525 = 10.2783*t560*t1321;
  t2529 = 3.4261*t915*t1321;
  t2545 = 10.2783*t560*t1495;
  t2695 = 3.4261*t915*t1495;
  t2803 = t2525 + t2529 + t2545 + t2695;
  t2847 = -0.5*var2[2]*t2803;
  t2935 = -0.5*var2[3]*t2803;
  t2950 = t2847 + t2935;
  t3023 = var2[0]*t2950;
  t3058 = 3.4261*t616;
  t3060 = 3.4261*t560*t915;
  t3072 = 3.4261*t1440;
  t3097 = 3.4261*t1321*t1495;
  t3111 = t3058 + t3060 + t3072 + t3097;
  t3240 = -0.5*var2[0]*t3111;
  t3285 = -1.*t49;
  t3356 = 1. + t3285;
  t3357 = -0.4999*t3356;
  t3362 = -0.6493*t49;
  t3381 = t3357 + t3362;
  t3474 = t3381*t252;
  t3513 = 0.14939999999999998*t49*t252;
  t3529 = t3474 + t3513;
  t3531 = 3.4261*t560*t3529;
  t3538 = t3381*t49;
  t3564 = Power(t252,2);
  t3568 = -0.14939999999999998*t3564;
  t3663 = t3538 + t3568;
  t3699 = 3.4261*t1495*t3663;
  t3870 = -1.*t3381*t252;
  t3874 = -0.14939999999999998*t49*t252;
  t3887 = t3870 + t3874;
  t3996 = 3.4261*t560*t3887;
  t4044 = Power(t49,2);
  t4047 = 0.14939999999999998*t4044;
  t4049 = t3538 + t4047;
  t4066 = 3.4261*t4049*t1321;
  t4286 = 0. + t3538 + t4047;
  t4359 = 3.4261*t4286*t1321;
  t5132 = 3.4261*t3529*t1321;
  t5167 = 3.4261*t560*t3663;
  t5176 = t5132 + t5167;
  t5249 = 3.4261*t4049*t915;
  t5264 = 3.4261*t3887*t1321;
  t5314 = t5249 + t5264 + t5132 + t5167;
  t5502 = 0.25592966999999994*var2[2]*t1495;
  t5551 = 0.25592966999999994*var2[3]*t1495;
  t5562 = t5502 + t5551;
  t5606 = var2[0]*t5562;
  t5949 = 0.25592966999999994*var2[0]*t560;
  p_output1[0]=t1861;
  p_output1[1]=t1861;
  p_output1[2]=-0.5*t1910*var2[2] - 0.5*t1910*var2[3];
  p_output1[3]=t2417;
  p_output1[4]=t2417;
  p_output1[5]=t3023;
  p_output1[6]=t3023;
  p_output1[7]=-0.5*t3111*var2[2] - 0.5*t3111*var2[3];
  p_output1[8]=t3240;
  p_output1[9]=t3240;
  p_output1[10]=var2[0]*(-0.5*(t3531 + t3699)*var2[2] - 0.5*(t3531 + t3699 + t3996 + t4066)*var2[3]);
  p_output1[11]=var2[0]*(-0.5*(t3531 + t3699 + t3996 + t4359)*var2[2] - 0.5*(t3531 + t3699 + t4066 + t4359 + 3.4261*t1321*(0. - 0.14939999999999998*t4044 - 1.*t3381*t49) + 6.8522*t3887*t560 + 3.4261*t3887*t915)*var2[3]);
  p_output1[12]=-0.5*t5176*var2[2] - 0.5*t5314*var2[3];
  p_output1[13]=-0.5*t5176*var2[0];
  p_output1[14]=-0.5*t5314*var2[0];
  p_output1[15]=t5606;
  p_output1[16]=t5606;
  p_output1[17]=0.25592966999999994*t560*var2[2] + 0.25592966999999994*t560*var2[3];
  p_output1[18]=t5949;
  p_output1[19]=t5949;
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

#include "J_Ce1_vec_L2_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L2_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

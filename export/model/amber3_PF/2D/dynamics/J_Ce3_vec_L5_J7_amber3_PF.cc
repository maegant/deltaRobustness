/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:56 GMT-08:00
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
  double t494;
  double t330;
  double t433;
  double t636;
  double t711;
  double t454;
  double t637;
  double t643;
  double t164;
  double t744;
  double t773;
  double t804;
  double t699;
  double t917;
  double t1379;
  double t1420;
  double t1480;
  double t1506;
  double t1591;
  double t1619;
  double t1743;
  double t1779;
  double t1800;
  double t1811;
  double t1846;
  double t811;
  double t818;
  double t1851;
  double t1883;
  double t1888;
  double t2108;
  double t2143;
  double t2164;
  double t2371;
  double t2391;
  double t2422;
  double t2436;
  double t2440;
  double t2547;
  double t2556;
  double t2613;
  double t2616;
  double t2796;
  double t2812;
  double t2207;
  double t2251;
  double t2264;
  double t2281;
  double t2287;
  double t2303;
  double t2312;
  double t2445;
  double t2459;
  double t2522;
  double t2531;
  double t3246;
  double t3268;
  double t2687;
  double t2780;
  double t2842;
  double t2940;
  double t2959;
  double t2986;
  double t2992;
  double t3002;
  double t3798;
  double t3822;
  double t3824;
  double t3829;
  double t3835;
  double t3728;
  double t3762;
  double t3244;
  double t3276;
  double t3278;
  double t3296;
  double t3302;
  double t3347;
  double t3370;
  double t3388;
  double t3392;
  double t3480;
  double t3498;
  double t3571;
  double t3674;
  double t3682;
  double t3766;
  double t3776;
  double t4173;
  double t4177;
  double t4183;
  double t4184;
  double t4143;
  double t4159;
  double t4167;
  double t3873;
  double t3883;
  t494 = Cos(var1[5]);
  t330 = Cos(var1[6]);
  t433 = Sin(var1[5]);
  t636 = Sin(var1[6]);
  t711 = Cos(var1[2]);
  t454 = -1.*t330*t433;
  t637 = -1.*t494*t636;
  t643 = t454 + t637;
  t164 = Sin(var1[2]);
  t744 = t494*t330;
  t773 = -1.*t433*t636;
  t804 = t744 + t773;
  t699 = -1.*t164*t643;
  t917 = -1.*t711*t643;
  t1379 = -1.*t494*t330;
  t1420 = t433*t636;
  t1480 = t1379 + t1420;
  t1506 = t711*t1480;
  t1591 = t699 + t1506;
  t1619 = -0.07323676079999998*var2[0]*t1591;
  t1743 = -1.*t164*t1480;
  t1779 = t917 + t1743;
  t1800 = -0.07323676079999998*var2[1]*t1779;
  t1811 = t1619 + t1800;
  t1846 = var2[6]*t1811;
  t811 = -1.*t711*t804;
  t818 = t699 + t811;
  t1851 = t711*t643;
  t1883 = -1.*t164*t804;
  t1888 = t1851 + t1883;
  t2108 = t330*t433;
  t2143 = t494*t636;
  t2164 = t2108 + t2143;
  t2371 = -1.*t330;
  t2391 = 1. + t2371;
  t2422 = -0.9063*t2391;
  t2436 = -1.078185*t330;
  t2440 = t2422 + t2436;
  t2547 = -0.4999*t433;
  t2556 = -1.*t2440*t433;
  t2613 = 0.17188499999999995*t494*t636;
  t2616 = t2547 + t2556 + t2613;
  t2796 = t494*t2440;
  t2812 = 0.17188499999999995*t433*t636;
  t2207 = t164*t2164;
  t2251 = t2207 + t1506;
  t2264 = -0.07323676079999998*var2[0]*t2251;
  t2281 = t711*t2164;
  t2287 = t2281 + t1743;
  t2303 = -0.07323676079999998*var2[1]*t2287;
  t2312 = 0.4999*t433;
  t2445 = t2440*t433;
  t2459 = -0.17188499999999995*t494*t636;
  t2522 = t2312 + t2445 + t2459;
  t2531 = t643*t2522;
  t3246 = 0.17188499999999995*t330*t433;
  t3268 = t3246 + t2613;
  t2687 = -0.17188499999999995*t433*t636;
  t2780 = 0.4999*t494;
  t2842 = t2780 + t2796 + t2812;
  t2940 = -1.*t494;
  t2959 = 1. + t2940;
  t2986 = -0.4999*t2959;
  t2992 = t2986 + t2796 + t2812;
  t3002 = t2992*t1480;
  t3798 = t2522*t804;
  t3822 = t2616*t804;
  t3824 = t643*t2992;
  t3829 = t2164*t2842;
  t3835 = t3798 + t3822 + t3824 + t3829;
  t3728 = t164*t1480;
  t3762 = t1851 + t3728;
  t3244 = t643*t2616;
  t3276 = t643*t3268;
  t3278 = t3268*t2164;
  t3296 = 0.17188499999999995*t494*t330;
  t3302 = t3296 + t2687;
  t3347 = t804*t3302;
  t3370 = t804*t2842;
  t3388 = -0.17188499999999995*t494*t330;
  t3392 = t3388 + t2812;
  t3480 = t804*t3392;
  t3498 = t2531 + t3244 + t3276 + t3278 + t3347 + t3370 + t3480 + t3002;
  t3571 = -0.07323676079999998*var2[2]*t3498;
  t3674 = t2264 + t2303 + t3571;
  t3682 = var2[6]*t3674;
  t3766 = -0.07323676079999998*var2[6]*t3762;
  t3776 = -0.07323676079999998*var2[6]*t1591;
  t4173 = -0.4999*t636;
  t4177 = -1.*t2440*t636;
  t4183 = -0.17188499999999995*t330*t636;
  t4184 = t4173 + t4177 + t4183;
  t4143 = t3268*t804;
  t4159 = t2164*t3392;
  t4167 = t3798 + t4143 + t3824 + t4159;
  t3873 = -0.07323676079999998*var2[1]*t1591;
  t3883 = -0.07323676079999998*var2[0]*t3762;
  p_output1[0]=(-0.07323676079999998*t818*var2[0] - 0.07323676079999998*(t164*t804 + t917)*var2[1])*var2[6];
  p_output1[1]=t1846;
  p_output1[2]=t1846;
  p_output1[3]=-0.07323676079999998*t1888*var2[6];
  p_output1[4]=-0.07323676079999998*t818*var2[6];
  p_output1[5]=-0.07323676079999998*t1888*var2[0] - 0.07323676079999998*t818*var2[1];
  p_output1[6]=t1846;
  p_output1[7]=(t2264 + t2303 - 0.07323676079999998*(t2531 + t2164*t2616 + t3002 + 2.*t2616*t643 + 2.*t2842*t804 + (t2687 - 0.4999*t494 - 1.*t2440*t494)*t804)*var2[2])*var2[6];
  p_output1[8]=t3682;
  p_output1[9]=t3766;
  p_output1[10]=t3776;
  p_output1[11]=-0.07323676079999998*t3835*var2[6];
  p_output1[12]=t3873 + t3883 - 0.07323676079999998*t3835*var2[2];
  p_output1[13]=t1846;
  p_output1[14]=t3682;
  p_output1[15]=(t2264 + t2303 - 0.07323676079999998*(t2531 + t3002 + t3278 + t3347 + 2.*t3268*t643 + 2.*t3392*t804)*var2[2] - 0.07323676079999998*(0. - 0.4999*t330 - 1.*t2440*t330 - 0.17188499999999995*Power(t330,2))*var2[5])*var2[6];
  p_output1[16]=t3766;
  p_output1[17]=t3776;
  p_output1[18]=-0.07323676079999998*t4167*var2[6];
  p_output1[19]=-0.07323676079999998*t4184*var2[6];
  p_output1[20]=t3873 + t3883 - 0.07323676079999998*t4167*var2[2] - 0.07323676079999998*t4184*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J7_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L5_J7_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

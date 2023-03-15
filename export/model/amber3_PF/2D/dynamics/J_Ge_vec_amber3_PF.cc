/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:09 GMT-08:00
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
  double t571;
  double t818;
  double t1060;
  double t1106;
  double t858;
  double t1000;
  double t1045;
  double t1259;
  double t1292;
  double t1362;
  double t1420;
  double t1779;
  double t1846;
  double t1851;
  double t1888;
  double t1964;
  double t2164;
  double t2281;
  double t2207;
  double t2251;
  double t2264;
  double t2287;
  double t2303;
  double t2312;
  double t2422;
  double t2522;
  double t2637;
  double t2668;
  double t2679;
  double t2687;
  double t1506;
  double t3026;
  double t1800;
  double t1808;
  double t1811;
  double t1965;
  double t2026;
  double t2049;
  double t2055;
  double t2065;
  double t3276;
  double t3296;
  double t3302;
  double t2436;
  double t3674;
  double t2547;
  double t2613;
  double t2617;
  double t2716;
  double t2753;
  double t2780;
  double t2796;
  double t2812;
  double t3822;
  double t3824;
  double t3829;
  double t3072;
  double t3100;
  double t3213;
  double t3232;
  double t3244;
  double t3246;
  double t3370;
  double t3388;
  double t3480;
  double t3498;
  double t3512;
  double t3571;
  double t3890;
  double t3894;
  double t3925;
  double t3682;
  double t3728;
  double t3762;
  double t3766;
  double t3776;
  double t3798;
  double t3835;
  double t3841;
  double t3853;
  double t3855;
  double t3873;
  double t3883;
  double t4085;
  double t4094;
  double t4099;
  t571 = Cos(var1[2]);
  t818 = Cos(var1[3]);
  t1060 = Sin(var1[2]);
  t1106 = Sin(var1[3]);
  t858 = -1.*t818;
  t1000 = 1. + t858;
  t1045 = 0.4999*t571*t1000;
  t1259 = 0.4999*t1060*t1106;
  t1292 = -1.*t571*t818;
  t1362 = t1060*t1106;
  t1420 = t1292 + t1362;
  t1779 = Cos(var1[4]);
  t1846 = t818*t1060;
  t1851 = t571*t1106;
  t1888 = t1846 + t1851;
  t1964 = Sin(var1[4]);
  t2164 = Cos(var1[5]);
  t2281 = Sin(var1[5]);
  t2207 = -1.*t2164;
  t2251 = 1. + t2207;
  t2264 = 0.4999*t571*t2251;
  t2287 = 0.4999*t1060*t2281;
  t2303 = -1.*t571*t2164;
  t2312 = t1060*t2281;
  t2422 = t2303 + t2312;
  t2522 = Cos(var1[6]);
  t2637 = t2164*t1060;
  t2668 = t571*t2281;
  t2679 = t2637 + t2668;
  t2687 = Sin(var1[6]);
  t1506 = -0.6493*t1420;
  t3026 = -0.4999*t571*t818;
  t1800 = -1.*t1779;
  t1808 = 1. + t1800;
  t1811 = -0.9063*t1808*t1420;
  t1965 = 0.9063*t1888*t1964;
  t2026 = t1779*t1420;
  t2049 = t1888*t1964;
  t2055 = t2026 + t2049;
  t2065 = -1.078185*t2055;
  t3276 = -1.*t818*t1060;
  t3296 = -1.*t571*t1106;
  t3302 = t3276 + t3296;
  t2436 = -0.6493*t2422;
  t3674 = -0.4999*t571*t2164;
  t2547 = -1.*t2522;
  t2613 = 1. + t2547;
  t2617 = -0.9063*t2613*t2422;
  t2716 = 0.9063*t2679*t2687;
  t2753 = t2522*t2422;
  t2780 = t2679*t2687;
  t2796 = t2753 + t2780;
  t2812 = -1.078185*t2796;
  t3822 = -1.*t2164*t1060;
  t3824 = -1.*t571*t2281;
  t3829 = t3822 + t3824;
  t3072 = t3026 + t1259 + t1506;
  t3100 = -33.610041*t3072;
  t3213 = t3026 + t1259 + t1811 + t1965 + t2065;
  t3232 = -8.359689600000001*t3213;
  t3244 = t3100 + t3232;
  t3246 = 0.9063*t1779*t1420;
  t3370 = -0.9063*t3302*t1964;
  t3388 = -1.*t3302*t1964;
  t3480 = t2026 + t3388;
  t3498 = -1.078185*t3480;
  t3512 = t3246 + t3370 + t3498;
  t3571 = -8.359689600000001*t3512;
  t3890 = t571*t818;
  t3894 = -1.*t1060*t1106;
  t3925 = t3890 + t3894;
  t3682 = t3674 + t2287 + t2436;
  t3728 = -33.610041*t3682;
  t3762 = t3674 + t2287 + t2617 + t2716 + t2812;
  t3766 = -8.359689600000001*t3762;
  t3776 = t3728 + t3766;
  t3798 = 0.9063*t2522*t2422;
  t3835 = -0.9063*t3829*t2687;
  t3841 = -1.*t3829*t2687;
  t3853 = t2753 + t3841;
  t3855 = -1.078185*t3853;
  t3873 = t3798 + t3835 + t3855;
  t3883 = -8.359689600000001*t3873;
  t4085 = t571*t2164;
  t4094 = -1.*t1060*t2281;
  t4099 = t4085 + t4094;
  p_output1[0]=-33.610041*(t1045 + t1259 + t1506) - 8.359689600000001*(t1045 + t1259 + t1811 + t1965 + t2065) - 33.610041*(t2264 + t2287 + t2436) - 8.359689600000001*(t2264 + t2287 + t2617 + t2716 + t2812) - 36.3549771*t571;
  p_output1[1]=t3244;
  p_output1[2]=t3571;
  p_output1[3]=t3776;
  p_output1[4]=t3883;
  p_output1[5]=t3244;
  p_output1[6]=t3244;
  p_output1[7]=t3571;
  p_output1[8]=t3571;
  p_output1[9]=t3571;
  p_output1[10]=-8.359689600000001*(t3370 - 0.9063*t1779*t3925 - 1.078185*(t3388 - 1.*t1779*t3925));
  p_output1[11]=t3776;
  p_output1[12]=t3776;
  p_output1[13]=t3883;
  p_output1[14]=t3883;
  p_output1[15]=t3883;
  p_output1[16]=-8.359689600000001*(t3835 - 0.9063*t2522*t4099 - 1.078185*(t3841 - 1.*t2522*t4099));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_amber3_PF.hh"

namespace RightSS
{

void J_Ge_vec_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

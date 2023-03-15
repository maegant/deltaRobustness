/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:46 GMT-08:00
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
  double t1696;
  double t1600;
  double t1618;
  double t1731;
  double t1901;
  double t1685;
  double t1762;
  double t1839;
  double t88;
  double t2357;
  double t2376;
  double t2388;
  double t2391;
  double t2451;
  double t1847;
  double t1948;
  double t2008;
  double t2028;
  double t2093;
  double t2196;
  double t2607;
  double t2618;
  double t2727;
  double t2762;
  double t2777;
  double t2800;
  double t3290;
  double t3299;
  double t3325;
  double t3331;
  double t3341;
  double t3346;
  double t3607;
  double t3661;
  double t4165;
  double t4185;
  double t4187;
  double t4192;
  double t4195;
  double t4197;
  double t4205;
  double t4207;
  double t4210;
  double t4211;
  double t4495;
  double t4574;
  double t4605;
  double t4610;
  double t4701;
  double t4706;
  double t3950;
  double t3951;
  double t4027;
  double t2353;
  double t2495;
  double t2566;
  double t2591;
  double t2998;
  double t3014;
  double t3021;
  double t3029;
  double t3032;
  double t3492;
  double t3517;
  double t3523;
  double t3701;
  double t4070;
  double t4074;
  double t4093;
  double t4193;
  double t4213;
  double t4221;
  double t4223;
  double t4672;
  double t4680;
  double t4734;
  double t4738;
  double t4744;
  double t4745;
  double t4757;
  double t4792;
  double t4803;
  double t4812;
  double t4815;
  double t4819;
  double t5031;
  double t5052;
  double t5070;
  double t5100;
  double t5102;
  double t4222;
  double t4740;
  double t4777;
  double t4820;
  double t4824;
  double t4846;
  double t4847;
  double t4850;
  double t2806;
  double t3127;
  double t3142;
  double t5350;
  double t5370;
  double t5377;
  t1696 = Cos(var1[6]);
  t1600 = Cos(var1[7]);
  t1618 = Sin(var1[6]);
  t1731 = Sin(var1[7]);
  t1901 = Sin(var1[2]);
  t1685 = -1.*t1600*t1618;
  t1762 = -1.*t1696*t1731;
  t1839 = t1685 + t1762;
  t88 = Cos(var1[2]);
  t2357 = -1.*t1600;
  t2376 = 1. + t2357;
  t2388 = -0.9063*t2376;
  t2391 = -1.0567*t1600;
  t2451 = t2388 + t2391;
  t1847 = t88*t1839;
  t1948 = -1.*t1696*t1600;
  t2008 = t1618*t1731;
  t2028 = t1948 + t2008;
  t2093 = t1901*t2028;
  t2196 = t1847 + t2093;
  t2607 = t1901*t1839;
  t2618 = t1696*t1600;
  t2727 = -1.*t1618*t1731;
  t2762 = t2618 + t2727;
  t2777 = t88*t2762;
  t2800 = t2607 + t2777;
  t3290 = t1600*t1618;
  t3299 = t1696*t1731;
  t3325 = t3290 + t3299;
  t3331 = t88*t3325;
  t3341 = t1901*t2762;
  t3346 = t3331 + t3341;
  t3607 = -1.*t1901*t2762;
  t3661 = t1847 + t3607;
  t4165 = 0.4999*t1618;
  t4185 = t2451*t1618;
  t4187 = -0.15039999999999998*t1696*t1731;
  t4192 = t4165 + t4185 + t4187;
  t4195 = -1.*t1696;
  t4197 = 1. + t4195;
  t4205 = -0.4999*t4197;
  t4207 = t1696*t2451;
  t4210 = 0.15039999999999998*t1618*t1731;
  t4211 = t4205 + t4207 + t4210;
  t4495 = -0.4999*t1618;
  t4574 = -1.*t2451*t1618;
  t4605 = 0.15039999999999998*t1696*t1731;
  t4610 = t4495 + t4574 + t4605;
  t4701 = 0.4999*t1696;
  t4706 = t4701 + t4207 + t4210;
  t3950 = -1.*t1901*t1839;
  t3951 = t88*t2028;
  t4027 = t3950 + t3951;
  t2353 = 0.4999*t1731;
  t2495 = t2451*t1731;
  t2566 = 0.15039999999999998*t1600*t1731;
  t2591 = t2353 + t2495 + t2566;
  t2998 = 0.4999*t1600;
  t3014 = t2451*t1600;
  t3021 = Power(t1731,2);
  t3029 = -0.15039999999999998*t3021;
  t3032 = t2998 + t3014 + t3029;
  t3492 = -1.*t1901*t3325;
  t3517 = t3492 + t2777;
  t3523 = 3.5899*t2800*t3517;
  t3701 = 3.5899*t3661*t3346;
  t4070 = 3.5899*t2800*t4027;
  t4074 = 3.5899*t3661*t2196;
  t4093 = t3523 + t3701 + t4070 + t4074;
  t4193 = -1.*t4192*t2762;
  t4213 = -1.*t1839*t4211;
  t4221 = t4193 + t4213;
  t4223 = t4192*t2762;
  t4672 = t4610*t2762;
  t4680 = t1839*t4211;
  t4734 = t3325*t4706;
  t4738 = t4223 + t4672 + t4680 + t4734;
  t4744 = t4192*t3325;
  t4745 = t2762*t4211;
  t4757 = t4744 + t4745;
  t4792 = -1.*t1839*t4192;
  t4803 = -1.*t1839*t4610;
  t4812 = -1.*t2762*t4706;
  t4815 = -1.*t4211*t2028;
  t4819 = t4792 + t4803 + t4812 + t4815;
  t5031 = 3.5899*t3661*t4221;
  t5052 = 3.5899*t3661*t4738;
  t5070 = 3.5899*t4757*t4027;
  t5100 = 3.5899*t3517*t4819;
  t5102 = t5031 + t5052 + t5070 + t5100;
  t4222 = 3.5899*t2800*t4221;
  t4740 = 3.5899*t2800*t4738;
  t4777 = 3.5899*t4757*t2196;
  t4820 = 3.5899*t3346*t4819;
  t4824 = t4222 + t4740 + t4777 + t4820;
  t4846 = 3.5899*t2591*t3661;
  t4847 = 3.5899*t3032*t4027;
  t4850 = t4846 + t4847;
  t2806 = 3.5899*t2591*t2800;
  t3127 = 3.5899*t3032*t2196;
  t3142 = t2806 + t3127;
  t5350 = 3.5899*t3032*t4738;
  t5370 = 3.5899*t2591*t4819;
  t5377 = t5350 + t5370;
  p_output1[0]=var2[6]*(-0.5*(7.1798*t2196*t2800 + 7.1798*t2800*t3346)*var2[0] - 0.5*t4093*var2[1] - 0.5*t4824*var2[2] - 0.5*t3142*var2[6] + 0.26996047999999995*t2196*var2[7]);
  p_output1[1]=var2[6]*(-0.5*t4093*var2[0] - 0.5*(7.1798*t3517*t3661 + 7.1798*t3661*t4027)*var2[1] - 0.5*t5102*var2[2] - 0.5*t4850*var2[6] + 0.26996047999999995*t4027*var2[7]);
  p_output1[2]=var2[6]*(-0.5*t4824*var2[0] - 0.5*t5102*var2[1] - 0.5*(7.1798*t4738*t4757 + 7.1798*t4221*t4819)*var2[2] - 0.5*t5377*var2[6] + 0.26996047999999995*t4738*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-0.5*t3142*var2[0] - 0.5*t4850*var2[1] - 0.5*t5377*var2[2])*var2[6];
  p_output1[7]=(0.26996047999999995*t2196*var2[0] + 0.26996047999999995*t4027*var2[1] + 0.26996047999999995*t4738*var2[2])*var2[6];
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

#include "Ce2_vec_L6_J7_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L6_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

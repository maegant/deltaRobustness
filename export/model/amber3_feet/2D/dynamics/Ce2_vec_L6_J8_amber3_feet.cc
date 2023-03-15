/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:47 GMT-08:00
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
  double t850;
  double t92;
  double t201;
  double t862;
  double t1086;
  double t815;
  double t911;
  double t1034;
  double t88;
  double t1978;
  double t1996;
  double t2008;
  double t2087;
  double t2093;
  double t2297;
  double t2302;
  double t2337;
  double t2353;
  double t2388;
  double t2391;
  double t2656;
  double t2661;
  double t1077;
  double t1201;
  double t1280;
  double t1283;
  double t1363;
  double t1372;
  double t2797;
  double t2800;
  double t2806;
  double t2823;
  double t2998;
  double t3014;
  double t3517;
  double t3523;
  double t4185;
  double t4187;
  double t4205;
  double t4207;
  double t4221;
  double t4222;
  double t4223;
  double t4231;
  double t4315;
  double t4394;
  double t4605;
  double t4672;
  double t4680;
  double t4738;
  double t4740;
  double t3701;
  double t3951;
  double t4027;
  double t2754;
  double t2770;
  double t2777;
  double t3401;
  double t3489;
  double t1847;
  double t2196;
  double t2213;
  double t2257;
  double t2566;
  double t2572;
  double t2591;
  double t2607;
  double t3029;
  double t3032;
  double t3127;
  double t3490;
  double t3661;
  double t4070;
  double t4074;
  double t4097;
  double t4210;
  double t4433;
  double t4495;
  double t4546;
  double t4701;
  double t4734;
  double t4744;
  double t4745;
  double t4777;
  double t4819;
  double t4820;
  double t4839;
  double t4842;
  double t4843;
  double t4846;
  double t4847;
  double t5405;
  double t5433;
  double t5509;
  double t5511;
  double t5536;
  double t4535;
  double t4757;
  double t4828;
  double t4851;
  double t4854;
  double t5012;
  double t5031;
  double t5052;
  double t5070;
  double t5100;
  double t2495;
  double t2618;
  double t3021;
  double t3240;
  double t3290;
  double t5670;
  double t5671;
  double t5759;
  double t5809;
  double t5934;
  t850 = Cos(var1[6]);
  t92 = Cos(var1[7]);
  t201 = Sin(var1[6]);
  t862 = Sin(var1[7]);
  t1086 = Sin(var1[2]);
  t815 = -1.*t92*t201;
  t911 = -1.*t850*t862;
  t1034 = t815 + t911;
  t88 = Cos(var1[2]);
  t1978 = -1.*t92;
  t1996 = 1. + t1978;
  t2008 = -0.9063*t1996;
  t2087 = -1.0567*t92;
  t2093 = t2008 + t2087;
  t2297 = t1086*t1034;
  t2302 = t850*t92;
  t2337 = -1.*t201*t862;
  t2353 = t2302 + t2337;
  t2388 = t88*t2353;
  t2391 = t2297 + t2388;
  t2656 = 0.4999*t92;
  t2661 = t2093*t92;
  t1077 = t88*t1034;
  t1201 = -1.*t850*t92;
  t1280 = t201*t862;
  t1283 = t1201 + t1280;
  t1363 = t1086*t1283;
  t1372 = t1077 + t1363;
  t2797 = t92*t201;
  t2800 = t850*t862;
  t2806 = t2797 + t2800;
  t2823 = t88*t2806;
  t2998 = t1086*t2353;
  t3014 = t2823 + t2998;
  t3517 = -1.*t1086*t2353;
  t3523 = t1077 + t3517;
  t4185 = 0.4999*t201;
  t4187 = t2093*t201;
  t4205 = -0.15039999999999998*t850*t862;
  t4207 = t4185 + t4187 + t4205;
  t4221 = -1.*t850;
  t4222 = 1. + t4221;
  t4223 = -0.4999*t4222;
  t4231 = t850*t2093;
  t4315 = 0.15039999999999998*t201*t862;
  t4394 = t4223 + t4231 + t4315;
  t4605 = 0.15039999999999998*t92*t201;
  t4672 = 0.15039999999999998*t850*t862;
  t4680 = t4605 + t4672;
  t4738 = -0.15039999999999998*t850*t92;
  t4740 = t4738 + t4315;
  t3701 = -1.*t1086*t1034;
  t3951 = t88*t1283;
  t4027 = t3701 + t3951;
  t2754 = Power(t92,2);
  t2770 = 0.15039999999999998*t2754;
  t2777 = t2656 + t2661 + t2770;
  t3401 = -1.*t1086*t2806;
  t3489 = t3401 + t2388;
  t1847 = -0.4999*t862;
  t2196 = -1.*t2093*t862;
  t2213 = -0.15039999999999998*t92*t862;
  t2257 = t1847 + t2196 + t2213;
  t2566 = 0.4999*t862;
  t2572 = t2093*t862;
  t2591 = 0.15039999999999998*t92*t862;
  t2607 = t2566 + t2572 + t2591;
  t3029 = Power(t862,2);
  t3032 = -0.15039999999999998*t3029;
  t3127 = t2656 + t2661 + t3032;
  t3490 = 3.5899*t2391*t3489;
  t3661 = 3.5899*t3523*t3014;
  t4070 = 3.5899*t2391*t4027;
  t4074 = 3.5899*t3523*t1372;
  t4097 = t3490 + t3661 + t4070 + t4074;
  t4210 = -1.*t4207*t2353;
  t4433 = -1.*t1034*t4394;
  t4495 = t4210 + t4433;
  t4546 = t4207*t2353;
  t4701 = t4680*t2353;
  t4734 = t1034*t4394;
  t4744 = t2806*t4740;
  t4745 = t4546 + t4701 + t4734 + t4744;
  t4777 = t4207*t2806;
  t4819 = t2353*t4394;
  t4820 = t4777 + t4819;
  t4839 = -1.*t1034*t4207;
  t4842 = -1.*t1034*t4680;
  t4843 = -1.*t2353*t4740;
  t4846 = -1.*t4394*t1283;
  t4847 = t4839 + t4842 + t4843 + t4846;
  t5405 = 3.5899*t3523*t4495;
  t5433 = 3.5899*t3523*t4745;
  t5509 = 3.5899*t4820*t4027;
  t5511 = 3.5899*t3489*t4847;
  t5536 = t5405 + t5433 + t5509 + t5511;
  t4535 = 3.5899*t2391*t4495;
  t4757 = 3.5899*t2391*t4745;
  t4828 = 3.5899*t4820*t1372;
  t4851 = 3.5899*t3014*t4847;
  t4854 = t4535 + t4757 + t4828 + t4851;
  t5012 = 3.5899*t2777*t3489;
  t5031 = 3.5899*t2257*t3523;
  t5052 = 3.5899*t2607*t3523;
  t5070 = 3.5899*t3127*t4027;
  t5100 = t5012 + t5031 + t5052 + t5070;
  t2495 = 3.5899*t2257*t2391;
  t2618 = 3.5899*t2607*t2391;
  t3021 = 3.5899*t2777*t3014;
  t3240 = 3.5899*t3127*t1372;
  t3290 = t2495 + t2618 + t3021 + t3240;
  t5670 = 3.5899*t2777*t4495;
  t5671 = 3.5899*t2257*t4820;
  t5759 = 3.5899*t3127*t4745;
  t5809 = 3.5899*t2607*t4847;
  t5934 = t5670 + t5671 + t5759 + t5809;
  p_output1[0]=var2[7]*(-0.5*(7.1798*t1372*t2391 + 7.1798*t2391*t3014)*var2[0] - 0.5*t4097*var2[1] - 0.5*t4854*var2[2] - 0.5*t3290*var2[6] + 0.26996047999999995*t1372*var2[7]);
  p_output1[1]=var2[7]*(-0.5*t4097*var2[0] - 0.5*(7.1798*t3489*t3523 + 7.1798*t3523*t4027)*var2[1] - 0.5*t5536*var2[2] - 0.5*t5100*var2[6] + 0.26996047999999995*t4027*var2[7]);
  p_output1[2]=var2[7]*(-0.5*t4854*var2[0] - 0.5*t5536*var2[1] - 0.5*(7.1798*t4745*t4820 + 7.1798*t4495*t4847)*var2[2] - 0.5*t5934*var2[6] + 0.26996047999999995*t4745*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[7]*(-0.5*t3290*var2[0] - 0.5*t5100*var2[1] - 0.5*t5934*var2[2] - 0.5*(7.1798*t2607*t2777 + 7.1798*t2257*t3127)*var2[6] + 0.26996047999999995*t2257*var2[7]);
  p_output1[7]=(0.26996047999999995*t1372*var2[0] + 0.26996047999999995*t4027*var2[1] + 0.26996047999999995*t4745*var2[2] + 0.26996047999999995*t2257*var2[6])*var2[7];
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

#include "Ce2_vec_L6_J8_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L6_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

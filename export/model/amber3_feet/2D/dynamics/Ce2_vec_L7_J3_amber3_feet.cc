/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:49 GMT-08:00
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
  double t1280;
  double t90;
  double t104;
  double t1363;
  double t1630;
  double t1077;
  double t1372;
  double t1418;
  double t88;
  double t1708;
  double t1746;
  double t1847;
  double t2189;
  double t1941;
  double t64;
  double t2754;
  double t2770;
  double t2777;
  double t2391;
  double t2495;
  double t2566;
  double t2572;
  double t2591;
  double t2607;
  double t1620;
  double t2008;
  double t2087;
  double t2213;
  double t2257;
  double t2285;
  double t2286;
  double t2297;
  double t2797;
  double t2800;
  double t2823;
  double t2998;
  double t3000;
  double t3014;
  double t3021;
  double t3029;
  double t3777;
  double t3796;
  double t3834;
  double t3838;
  double t3839;
  double t3841;
  double t3489;
  double t3490;
  double t3523;
  double t3624;
  double t4274;
  double t4315;
  double t4495;
  double t4546;
  double t4605;
  double t4672;
  double t5133;
  double t5290;
  double t5300;
  double t5324;
  double t5350;
  double t5370;
  double t5031;
  double t5052;
  double t5070;
  double t5071;
  double t4828;
  double t4847;
  double t4851;
  double t2388;
  double t2618;
  double t2656;
  double t2661;
  double t4757;
  double t4777;
  double t4819;
  double t3127;
  double t3240;
  double t3299;
  double t3300;
  double t3331;
  double t3661;
  double t3733;
  double t3951;
  double t4027;
  double t4074;
  double t4165;
  double t4185;
  double t4187;
  double t4744;
  double t4745;
  double t4820;
  double t4858;
  double t4859;
  double t4862;
  double t4863;
  double t5072;
  double t5405;
  double t5433;
  double t5509;
  double t5511;
  double t5576;
  double t5473;
  double t5597;
  double t5644;
  double t6088;
  double t6115;
  double t6185;
  double t5969;
  double t5976;
  double t5993;
  double t4070;
  double t4205;
  double t4223;
  double t5809;
  double t5936;
  double t5942;
  double t3032;
  double t3341;
  double t3346;
  t1280 = Cos(var1[7]);
  t90 = Cos(var1[8]);
  t104 = Sin(var1[7]);
  t1363 = Sin(var1[8]);
  t1630 = Cos(var1[6]);
  t1077 = t90*t104;
  t1372 = t1280*t1363;
  t1418 = t1077 + t1372;
  t88 = Sin(var1[6]);
  t1708 = t1280*t90;
  t1746 = -1.*t104*t1363;
  t1847 = t1708 + t1746;
  t2189 = Sin(var1[2]);
  t1941 = t1630*t1847;
  t64 = Cos(var1[2]);
  t2754 = -1.*t90*t104;
  t2770 = -1.*t1280*t1363;
  t2777 = t2754 + t2770;
  t2391 = -1.*t90;
  t2495 = 1. + t2391;
  t2566 = -1.3127*t2495;
  t2572 = -1.3127*t90;
  t2591 = -0.06*t1363;
  t2607 = t2566 + t2572 + t2591;
  t1620 = -1.*t88*t1418;
  t2008 = t1620 + t1941;
  t2087 = t64*t2008;
  t2213 = t1630*t1418;
  t2257 = t88*t1847;
  t2285 = t2213 + t2257;
  t2286 = -1.*t2189*t2285;
  t2297 = t2087 + t2286;
  t2797 = t88*t2777;
  t2800 = t2797 + t1941;
  t2823 = -1.*t2189*t2800;
  t2998 = t1630*t2777;
  t3000 = -1.*t88*t1847;
  t3014 = t2998 + t3000;
  t3021 = t64*t3014;
  t3029 = t2823 + t3021;
  t3777 = -1.*t1280;
  t3796 = 1. + t3777;
  t3834 = -0.9063*t3796;
  t3838 = -0.06*t90*t104;
  t3839 = t1280*t2607;
  t3841 = t3834 + t3838 + t3839;
  t3489 = 0.06*t1280*t90;
  t3490 = 0.9063*t104;
  t3523 = t104*t2607;
  t3624 = t3489 + t3490 + t3523;
  t4274 = t64*t2800;
  t4315 = t2189*t3014;
  t4495 = t4274 + t4315;
  t4546 = t2189*t2008;
  t4605 = t64*t2285;
  t4672 = t4546 + t4605;
  t5133 = -1.*t1630;
  t5290 = 1. + t5133;
  t5300 = -0.4999*t5290;
  t5324 = t1630*t3841;
  t5350 = -1.*t88*t3624;
  t5370 = t5300 + t5324 + t5350;
  t5031 = 0.4999*t88;
  t5052 = t88*t3841;
  t5070 = t1630*t3624;
  t5071 = t5031 + t5052 + t5070;
  t4828 = -1.*t2189*t2008;
  t4847 = -1.*t64*t2285;
  t4851 = t4828 + t4847;
  t2388 = 0.9063*t90;
  t2618 = t90*t2607;
  t2656 = 0.06*t90*t1363;
  t2661 = t2388 + t2618 + t2656;
  t4757 = -1.*t64*t2800;
  t4777 = -1.*t2189*t3014;
  t4819 = t4757 + t4777;
  t3127 = Power(t90,2);
  t3240 = -0.06*t3127;
  t3299 = 0.9063*t1363;
  t3300 = t2607*t1363;
  t3331 = t3240 + t3299 + t3300;
  t3661 = t3624*t1418;
  t3733 = 0.4999*t1847;
  t3951 = t3841*t1847;
  t4027 = t3661 + t3733 + t3951;
  t4074 = -1.*t3841*t2777;
  t4165 = 0.4999*t1418;
  t4185 = -1.*t3624*t1847;
  t4187 = t4074 + t4165 + t4185;
  t4744 = Power(t3029,2);
  t4745 = 1.142857*t4744;
  t4820 = 1.142857*t4819*t4495;
  t4858 = 1.142857*t4851*t4672;
  t4859 = Power(t2297,2);
  t4862 = 1.142857*t4859;
  t4863 = t4745 + t4820 + t4858 + t4862;
  t5072 = -1.*t5071*t2800;
  t5405 = -1.*t5370*t3014;
  t5433 = t5072 + t5405;
  t5509 = t5370*t2008;
  t5511 = t5071*t2285;
  t5576 = t5509 + t5511;
  t5473 = 1.142857*t5433*t2297;
  t5597 = 1.142857*t3029*t5576;
  t5644 = t5473 + t5597;
  t6088 = 1.142857*t5433*t4851;
  t6115 = 1.142857*t4819*t5576;
  t6185 = t6088 + t6115;
  t5969 = 1.142857*t4027*t4819;
  t5976 = 1.142857*t4187*t4851;
  t5993 = t5969 + t5976;
  t4070 = 1.142857*t4027*t3029;
  t4205 = 1.142857*t4187*t2297;
  t4223 = t4070 + t4205;
  t5809 = 1.142857*t2661*t4819;
  t5936 = 1.142857*t3331*t4851;
  t5942 = t5809 + t5936;
  t3032 = 1.142857*t2661*t3029;
  t3341 = 1.142857*t3331*t2297;
  t3346 = t3032 + t3341;
  p_output1[0]=var2[2]*(-0.5*(2.285714*t3029*t4495 + 2.285714*t2297*t4672)*var2[0] - 0.5*t4863*var2[1] - 0.5*t5644*var2[2] - 0.5*t4223*var2[6] - 0.5*t3346*var2[7] + 0.03428571*t2297*var2[8]);
  p_output1[1]=var2[2]*(-0.5*t4863*var2[0] - 0.5*(2.285714*t3029*t4819 + 2.285714*t2297*t4851)*var2[1] - 0.5*t6185*var2[2] - 0.5*t5993*var2[6] - 0.5*t5942*var2[7] + 0.03428571*t4851*var2[8]);
  p_output1[2]=(-0.5*t5644*var2[0] - 0.5*t6185*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-0.5*t4223*var2[0] - 0.5*t5993*var2[1])*var2[2];
  p_output1[7]=(-0.5*t3346*var2[0] - 0.5*t5942*var2[1])*var2[2];
  p_output1[8]=(0.03428571*t2297*var2[0] + 0.03428571*t4851*var2[1])*var2[2];
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

#include "Ce2_vec_L7_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L7_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

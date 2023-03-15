/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:20 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t121;
  double t379;
  double t481;
  double t501;
  double t506;
  double t526;
  double t700;
  double t775;
  double t842;
  double t1043;
  double t1620;
  double t1719;
  double t1886;
  double t1891;
  double t1955;
  double t2047;
  double t2093;
  double t2215;
  double t2228;
  double t1074;
  double t1195;
  double t1835;
  double t1869;
  double t1990;
  double t2009;
  double t2118;
  double t2209;
  double t2232;
  double t2238;
  double t2885;
  double t3181;
  double t3272;
  double t3281;
  double t3586;
  double t3642;
  double t3678;
  double t3706;
  double t3819;
  double t3938;
  double t3950;
  double t3968;
  double t3971;
  double t4029;
  double t4068;
  double t2582;
  double t2668;
  double t2729;
  double t2798;
  double t2837;
  double t2843;
  double t2911;
  double t5527;
  double t5544;
  double t5555;
  double t5556;
  double t5560;
  double t5565;
  double t5573;
  double t5583;
  double t5621;
  double t5636;
  double t5669;
  double t6171;
  double t6202;
  double t6265;
  double t6297;
  double t6318;
  double t6348;
  double t6376;
  double t6402;
  double t6417;
  double t6451;
  double t6455;
  double t6961;
  double t6963;
  double t6967;
  double t6968;
  double t6970;
  double t6981;
  double t6982;
  double t6990;
  double t6994;
  double t7044;
  double t7045;
  t121 = -1.*var3[1];
  t379 = var3[0] + t121;
  t481 = 1/t379;
  t501 = 0.8128*var1[2];
  t506 = 0.8128*var1[6];
  t526 = 0.4064*var1[7];
  t700 = 0. + t121 + t501 + t506 + t526;
  t775 = -1.*t481*t700;
  t842 = 1. + t775;
  t1043 = Power(t842,4);
  t1620 = Power(t379,-2);
  t1719 = Power(t842,3);
  t1886 = Power(t379,-3);
  t1891 = Power(t842,2);
  t1955 = Power(t700,2);
  t2047 = Power(t379,-4);
  t2093 = Power(t700,3);
  t2215 = Power(t379,-5);
  t2228 = Power(t700,4);
  t1074 = 4.064*var2[0]*t481*t1043;
  t1195 = -4.064*var2[5]*t481*t1043;
  t1835 = 16.256*var2[5]*t1620*t1719*t700;
  t1869 = -16.256*var2[10]*t1620*t1719*t700;
  t1990 = 24.383999999999997*var2[10]*t1886*t1891*t1955;
  t2009 = -24.383999999999997*var2[15]*t1886*t1891*t1955;
  t2118 = 16.256*var2[15]*t2047*t842*t2093;
  t2209 = -16.256*var2[20]*t2047*t842*t2093;
  t2232 = 4.064*var2[20]*t2215*t2228;
  t2238 = -4.064*var2[25]*t2215*t2228;
  t2885 = Power(t700,5);
  t3181 = Power(t379,-6);
  t3272 = -1.*t1620*t700;
  t3281 = t481 + t3272;
  t3586 = 4.064*var2[1]*t481*t1043;
  t3642 = -4.064*var2[6]*t481*t1043;
  t3678 = 16.256*var2[6]*t1620*t1719*t700;
  t3706 = -16.256*var2[11]*t1620*t1719*t700;
  t3819 = 24.383999999999997*var2[11]*t1886*t1891*t1955;
  t3938 = -24.383999999999997*var2[16]*t1886*t1891*t1955;
  t3950 = 16.256*var2[16]*t2047*t842*t2093;
  t3968 = -16.256*var2[21]*t2047*t842*t2093;
  t3971 = 4.064*var2[21]*t2215*t2228;
  t4029 = -4.064*var2[26]*t2215*t2228;
  t4068 = t3586 + t3642 + t3678 + t3706 + t3819 + t3938 + t3950 + t3968 + t3971 + t4029;
  t2582 = Power(t842,5);
  t2668 = -1.*t2582;
  t2729 = -5.*t481*t1043*t700;
  t2798 = -10.*t1620*t1719*t1955;
  t2837 = -10.*t1886*t1891*t2093;
  t2843 = -5.*t2047*t842*t2228;
  t2911 = -1.*t2215*t2885;
  t5527 = 4.064*var2[2]*t481*t1043;
  t5544 = -4.064*var2[7]*t481*t1043;
  t5555 = 16.256*var2[7]*t1620*t1719*t700;
  t5556 = -16.256*var2[12]*t1620*t1719*t700;
  t5560 = 24.383999999999997*var2[12]*t1886*t1891*t1955;
  t5565 = -24.383999999999997*var2[17]*t1886*t1891*t1955;
  t5573 = 16.256*var2[17]*t2047*t842*t2093;
  t5583 = -16.256*var2[22]*t2047*t842*t2093;
  t5621 = 4.064*var2[22]*t2215*t2228;
  t5636 = -4.064*var2[27]*t2215*t2228;
  t5669 = t5527 + t5544 + t5555 + t5556 + t5560 + t5565 + t5573 + t5583 + t5621 + t5636;
  t6171 = 4.064*var2[3]*t481*t1043;
  t6202 = -4.064*var2[8]*t481*t1043;
  t6265 = 16.256*var2[8]*t1620*t1719*t700;
  t6297 = -16.256*var2[13]*t1620*t1719*t700;
  t6318 = 24.383999999999997*var2[13]*t1886*t1891*t1955;
  t6348 = -24.383999999999997*var2[18]*t1886*t1891*t1955;
  t6376 = 16.256*var2[18]*t2047*t842*t2093;
  t6402 = -16.256*var2[23]*t2047*t842*t2093;
  t6417 = 4.064*var2[23]*t2215*t2228;
  t6451 = -4.064*var2[28]*t2215*t2228;
  t6455 = t6171 + t6202 + t6265 + t6297 + t6318 + t6348 + t6376 + t6402 + t6417 + t6451;
  t6961 = 4.064*var2[4]*t481*t1043;
  t6963 = -4.064*var2[9]*t481*t1043;
  t6967 = 16.256*var2[9]*t1620*t1719*t700;
  t6968 = -16.256*var2[14]*t1620*t1719*t700;
  t6970 = 24.383999999999997*var2[14]*t1886*t1891*t1955;
  t6981 = -24.383999999999997*var2[19]*t1886*t1891*t1955;
  t6982 = 16.256*var2[19]*t2047*t842*t2093;
  t6990 = -16.256*var2[24]*t2047*t842*t2093;
  t6994 = 4.064*var2[24]*t2215*t2228;
  t7044 = -4.064*var2[29]*t2215*t2228;
  t7045 = t6961 + t6963 + t6967 + t6968 + t6970 + t6981 + t6982 + t6990 + t6994 + t7044;
  p_output1[0]=t1074 + t1195 + t1835 + t1869 + t1990 + t2009 + t2118 + t2209 + t2232 + t2238;
  p_output1[1]=1. + t1074 + t1195 + t1835 + t1869 + t1990 + t2009 + t2118 + t2209 + t2232 + t2238;
  p_output1[2]=2.032*t1043*t481*var2[0] - 2.032*t1043*t481*var2[5] + 8.128*t1620*t1719*t700*var2[5] + 12.191999999999998*t1886*t1891*t1955*var2[10] - 8.128*t1620*t1719*t700*var2[10] - 12.191999999999998*t1886*t1891*t1955*var2[15] + 8.128*t2047*t2093*t842*var2[15] + 2.032*t2215*t2228*var2[20] - 8.128*t2047*t2093*t842*var2[20] - 2.032*t2215*t2228*var2[25];
  p_output1[3]=t2668;
  p_output1[4]=t2729;
  p_output1[5]=t2798;
  p_output1[6]=t2837;
  p_output1[7]=t2843;
  p_output1[8]=t2911;
  p_output1[9]=-5.*t1043*t1620*t700*var2[0] - 20.*t1719*t1886*t1955*var2[5] + 5.*t1043*t1620*t700*var2[5] + 20.*t1719*t1886*t1955*var2[10] - 30.*t1891*t2047*t2093*var2[10] + 30.*t1891*t2047*t2093*var2[15] - 20.*t2215*t2228*t842*var2[15] - 5.*t2885*t3181*var2[20] + 20.*t2215*t2228*t842*var2[20] + 5.*t2885*t3181*var2[25];
  p_output1[10]=-5.*t1043*t3281*var2[0] + 5.*t1043*t481*var2[5] - 5.*t1043*t1620*t700*var2[5] - 20.*t1719*t3281*t481*t700*var2[5] - 20.*t1719*t1886*t1955*var2[10] - 30.*t1620*t1891*t1955*t3281*var2[10] + 20.*t1620*t1719*t700*var2[10] + 30.*t1886*t1891*t1955*var2[15] - 30.*t1891*t2047*t2093*var2[15] - 20.*t1886*t2093*t3281*t842*var2[15] - 5.*t2047*t2228*t3281*var2[20] + 20.*t2047*t2093*t842*var2[20] - 20.*t2215*t2228*t842*var2[20] + 5.*t2215*t2228*var2[25] - 5.*t2885*t3181*var2[25];
  p_output1[11]=t4068;
  p_output1[12]=t4068;
  p_output1[13]=1. + 2.032*t1043*t481*var2[1] - 2.032*t1043*t481*var2[6] + 8.128*t1620*t1719*t700*var2[6] + 12.191999999999998*t1886*t1891*t1955*var2[11] - 8.128*t1620*t1719*t700*var2[11] - 12.191999999999998*t1886*t1891*t1955*var2[16] + 8.128*t2047*t2093*t842*var2[16] + 2.032*t2215*t2228*var2[21] - 8.128*t2047*t2093*t842*var2[21] - 2.032*t2215*t2228*var2[26];
  p_output1[14]=t2668;
  p_output1[15]=t2729;
  p_output1[16]=t2798;
  p_output1[17]=t2837;
  p_output1[18]=t2843;
  p_output1[19]=t2911;
  p_output1[20]=-5.*t1043*t1620*t700*var2[1] - 20.*t1719*t1886*t1955*var2[6] + 5.*t1043*t1620*t700*var2[6] + 20.*t1719*t1886*t1955*var2[11] - 30.*t1891*t2047*t2093*var2[11] + 30.*t1891*t2047*t2093*var2[16] - 20.*t2215*t2228*t842*var2[16] - 5.*t2885*t3181*var2[21] + 20.*t2215*t2228*t842*var2[21] + 5.*t2885*t3181*var2[26];
  p_output1[21]=-5.*t1043*t3281*var2[1] + 5.*t1043*t481*var2[6] - 5.*t1043*t1620*t700*var2[6] - 20.*t1719*t3281*t481*t700*var2[6] - 20.*t1719*t1886*t1955*var2[11] - 30.*t1620*t1891*t1955*t3281*var2[11] + 20.*t1620*t1719*t700*var2[11] + 30.*t1886*t1891*t1955*var2[16] - 30.*t1891*t2047*t2093*var2[16] - 20.*t1886*t2093*t3281*t842*var2[16] - 5.*t2047*t2228*t3281*var2[21] + 20.*t2047*t2093*t842*var2[21] - 20.*t2215*t2228*t842*var2[21] + 5.*t2215*t2228*var2[26] - 5.*t2885*t3181*var2[26];
  p_output1[22]=t5669;
  p_output1[23]=1.;
  p_output1[24]=t5669;
  p_output1[25]=2.032*t1043*t481*var2[2] - 2.032*t1043*t481*var2[7] + 8.128*t1620*t1719*t700*var2[7] + 12.191999999999998*t1886*t1891*t1955*var2[12] - 8.128*t1620*t1719*t700*var2[12] - 12.191999999999998*t1886*t1891*t1955*var2[17] + 8.128*t2047*t2093*t842*var2[17] + 2.032*t2215*t2228*var2[22] - 8.128*t2047*t2093*t842*var2[22] - 2.032*t2215*t2228*var2[27];
  p_output1[26]=t2668;
  p_output1[27]=t2729;
  p_output1[28]=t2798;
  p_output1[29]=t2837;
  p_output1[30]=t2843;
  p_output1[31]=t2911;
  p_output1[32]=-5.*t1043*t1620*t700*var2[2] - 20.*t1719*t1886*t1955*var2[7] + 5.*t1043*t1620*t700*var2[7] + 20.*t1719*t1886*t1955*var2[12] - 30.*t1891*t2047*t2093*var2[12] + 30.*t1891*t2047*t2093*var2[17] - 20.*t2215*t2228*t842*var2[17] - 5.*t2885*t3181*var2[22] + 20.*t2215*t2228*t842*var2[22] + 5.*t2885*t3181*var2[27];
  p_output1[33]=-5.*t1043*t3281*var2[2] + 5.*t1043*t481*var2[7] - 5.*t1043*t1620*t700*var2[7] - 20.*t1719*t3281*t481*t700*var2[7] - 20.*t1719*t1886*t1955*var2[12] - 30.*t1620*t1891*t1955*t3281*var2[12] + 20.*t1620*t1719*t700*var2[12] + 30.*t1886*t1891*t1955*var2[17] - 30.*t1891*t2047*t2093*var2[17] - 20.*t1886*t2093*t3281*t842*var2[17] - 5.*t2047*t2228*t3281*var2[22] + 20.*t2047*t2093*t842*var2[22] - 20.*t2215*t2228*t842*var2[22] + 5.*t2215*t2228*var2[27] - 5.*t2885*t3181*var2[27];
  p_output1[34]=t6455;
  p_output1[35]=1.;
  p_output1[36]=t6455;
  p_output1[37]=2.032*t1043*t481*var2[3] - 2.032*t1043*t481*var2[8] + 8.128*t1620*t1719*t700*var2[8] + 12.191999999999998*t1886*t1891*t1955*var2[13] - 8.128*t1620*t1719*t700*var2[13] - 12.191999999999998*t1886*t1891*t1955*var2[18] + 8.128*t2047*t2093*t842*var2[18] + 2.032*t2215*t2228*var2[23] - 8.128*t2047*t2093*t842*var2[23] - 2.032*t2215*t2228*var2[28];
  p_output1[38]=t2668;
  p_output1[39]=t2729;
  p_output1[40]=t2798;
  p_output1[41]=t2837;
  p_output1[42]=t2843;
  p_output1[43]=t2911;
  p_output1[44]=-5.*t1043*t1620*t700*var2[3] - 20.*t1719*t1886*t1955*var2[8] + 5.*t1043*t1620*t700*var2[8] + 20.*t1719*t1886*t1955*var2[13] - 30.*t1891*t2047*t2093*var2[13] + 30.*t1891*t2047*t2093*var2[18] - 20.*t2215*t2228*t842*var2[18] - 5.*t2885*t3181*var2[23] + 20.*t2215*t2228*t842*var2[23] + 5.*t2885*t3181*var2[28];
  p_output1[45]=-5.*t1043*t3281*var2[3] + 5.*t1043*t481*var2[8] - 5.*t1043*t1620*t700*var2[8] - 20.*t1719*t3281*t481*t700*var2[8] - 20.*t1719*t1886*t1955*var2[13] - 30.*t1620*t1891*t1955*t3281*var2[13] + 20.*t1620*t1719*t700*var2[13] + 30.*t1886*t1891*t1955*var2[18] - 30.*t1891*t2047*t2093*var2[18] - 20.*t1886*t2093*t3281*t842*var2[18] - 5.*t2047*t2228*t3281*var2[23] + 20.*t2047*t2093*t842*var2[23] - 20.*t2215*t2228*t842*var2[23] + 5.*t2215*t2228*var2[28] - 5.*t2885*t3181*var2[28];
  p_output1[46]=t7045;
  p_output1[47]=1.;
  p_output1[48]=t7045;
  p_output1[49]=2.032*t1043*t481*var2[4] - 2.032*t1043*t481*var2[9] + 8.128*t1620*t1719*t700*var2[9] + 12.191999999999998*t1886*t1891*t1955*var2[14] - 8.128*t1620*t1719*t700*var2[14] - 12.191999999999998*t1886*t1891*t1955*var2[19] + 8.128*t2047*t2093*t842*var2[19] + 2.032*t2215*t2228*var2[24] - 8.128*t2047*t2093*t842*var2[24] - 2.032*t2215*t2228*var2[29];
  p_output1[50]=t2668;
  p_output1[51]=t2729;
  p_output1[52]=t2798;
  p_output1[53]=t2837;
  p_output1[54]=t2843;
  p_output1[55]=t2911;
  p_output1[56]=-5.*t1043*t1620*t700*var2[4] - 20.*t1719*t1886*t1955*var2[9] + 5.*t1043*t1620*t700*var2[9] + 20.*t1719*t1886*t1955*var2[14] - 30.*t1891*t2047*t2093*var2[14] + 30.*t1891*t2047*t2093*var2[19] - 20.*t2215*t2228*t842*var2[19] - 5.*t2885*t3181*var2[24] + 20.*t2215*t2228*t842*var2[24] + 5.*t2885*t3181*var2[29];
  p_output1[57]=-5.*t1043*t3281*var2[4] + 5.*t1043*t481*var2[9] - 5.*t1043*t1620*t700*var2[9] - 20.*t1719*t3281*t481*t700*var2[9] - 20.*t1719*t1886*t1955*var2[14] - 30.*t1620*t1891*t1955*t3281*var2[14] + 20.*t1620*t1719*t700*var2[14] + 30.*t1886*t1891*t1955*var2[19] - 30.*t1891*t2047*t2093*var2[19] - 20.*t1886*t2093*t3281*t842*var2[19] - 5.*t2047*t2228*t3281*var2[24] + 20.*t2047*t2093*t842*var2[24] - 20.*t2215*t2228*t842*var2[24] + 5.*t2215*t2228*var2[29] - 5.*t2885*t3181*var2[29];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 58, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_y_position_RightSS2.hh"

namespace RightSS2
{

void J_y_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE

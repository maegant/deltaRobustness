/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:36 GMT-08:00
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
  double t246;
  double t532;
  double t543;
  double t767;
  double t850;
  double t862;
  double t882;
  double t1008;
  double t1138;
  double t1201;
  double t1395;
  double t1503;
  double t1824;
  double t1840;
  double t1842;
  double t1884;
  double t1892;
  double t2011;
  double t2022;
  double t1302;
  double t1333;
  double t1593;
  double t1820;
  double t1843;
  double t1845;
  double t1908;
  double t1930;
  double t2095;
  double t2100;
  double t2794;
  double t3221;
  double t3313;
  double t3330;
  double t3694;
  double t3695;
  double t3720;
  double t3723;
  double t3735;
  double t3848;
  double t3872;
  double t3913;
  double t4011;
  double t4197;
  double t4203;
  double t2525;
  double t2545;
  double t2709;
  double t2730;
  double t2731;
  double t2769;
  double t2795;
  double t5290;
  double t5325;
  double t5383;
  double t5387;
  double t5394;
  double t5398;
  double t5407;
  double t5425;
  double t5461;
  double t5471;
  double t5474;
  double t5867;
  double t5877;
  double t5885;
  double t5891;
  double t5893;
  double t5910;
  double t5912;
  double t5922;
  double t5928;
  double t5930;
  double t5932;
  double t6189;
  double t6206;
  double t6212;
  double t6228;
  double t6231;
  double t6245;
  double t6246;
  double t6248;
  double t6250;
  double t6252;
  double t6253;
  t246 = -1.*var3[1];
  t532 = var3[0] + t246;
  t543 = 1/t532;
  t767 = 0.8128*var1[2];
  t850 = 0.8128*var1[6];
  t862 = 0.4064*var1[7];
  t882 = 0. + t246 + t767 + t850 + t862;
  t1008 = -1.*t543*t882;
  t1138 = 1. + t1008;
  t1201 = Power(t1138,4);
  t1395 = Power(t532,-2);
  t1503 = Power(t1138,3);
  t1824 = Power(t532,-3);
  t1840 = Power(t1138,2);
  t1842 = Power(t882,2);
  t1884 = Power(t532,-4);
  t1892 = Power(t882,3);
  t2011 = Power(t532,-5);
  t2022 = Power(t882,4);
  t1302 = 4.064*var2[0]*t543*t1201;
  t1333 = -4.064*var2[5]*t543*t1201;
  t1593 = 16.256*var2[5]*t1395*t1503*t882;
  t1820 = -16.256*var2[10]*t1395*t1503*t882;
  t1843 = 24.383999999999997*var2[10]*t1824*t1840*t1842;
  t1845 = -24.383999999999997*var2[15]*t1824*t1840*t1842;
  t1908 = 16.256*var2[15]*t1884*t1138*t1892;
  t1930 = -16.256*var2[20]*t1884*t1138*t1892;
  t2095 = 4.064*var2[20]*t2011*t2022;
  t2100 = -4.064*var2[25]*t2011*t2022;
  t2794 = Power(t882,5);
  t3221 = Power(t532,-6);
  t3313 = -1.*t1395*t882;
  t3330 = t543 + t3313;
  t3694 = 4.064*var2[1]*t543*t1201;
  t3695 = -4.064*var2[6]*t543*t1201;
  t3720 = 16.256*var2[6]*t1395*t1503*t882;
  t3723 = -16.256*var2[11]*t1395*t1503*t882;
  t3735 = 24.383999999999997*var2[11]*t1824*t1840*t1842;
  t3848 = -24.383999999999997*var2[16]*t1824*t1840*t1842;
  t3872 = 16.256*var2[16]*t1884*t1138*t1892;
  t3913 = -16.256*var2[21]*t1884*t1138*t1892;
  t4011 = 4.064*var2[21]*t2011*t2022;
  t4197 = -4.064*var2[26]*t2011*t2022;
  t4203 = t3694 + t3695 + t3720 + t3723 + t3735 + t3848 + t3872 + t3913 + t4011 + t4197;
  t2525 = Power(t1138,5);
  t2545 = -1.*t2525;
  t2709 = -5.*t543*t1201*t882;
  t2730 = -10.*t1395*t1503*t1842;
  t2731 = -10.*t1824*t1840*t1892;
  t2769 = -5.*t1884*t1138*t2022;
  t2795 = -1.*t2011*t2794;
  t5290 = 4.064*var2[2]*t543*t1201;
  t5325 = -4.064*var2[7]*t543*t1201;
  t5383 = 16.256*var2[7]*t1395*t1503*t882;
  t5387 = -16.256*var2[12]*t1395*t1503*t882;
  t5394 = 24.383999999999997*var2[12]*t1824*t1840*t1842;
  t5398 = -24.383999999999997*var2[17]*t1824*t1840*t1842;
  t5407 = 16.256*var2[17]*t1884*t1138*t1892;
  t5425 = -16.256*var2[22]*t1884*t1138*t1892;
  t5461 = 4.064*var2[22]*t2011*t2022;
  t5471 = -4.064*var2[27]*t2011*t2022;
  t5474 = t5290 + t5325 + t5383 + t5387 + t5394 + t5398 + t5407 + t5425 + t5461 + t5471;
  t5867 = 4.064*var2[3]*t543*t1201;
  t5877 = -4.064*var2[8]*t543*t1201;
  t5885 = 16.256*var2[8]*t1395*t1503*t882;
  t5891 = -16.256*var2[13]*t1395*t1503*t882;
  t5893 = 24.383999999999997*var2[13]*t1824*t1840*t1842;
  t5910 = -24.383999999999997*var2[18]*t1824*t1840*t1842;
  t5912 = 16.256*var2[18]*t1884*t1138*t1892;
  t5922 = -16.256*var2[23]*t1884*t1138*t1892;
  t5928 = 4.064*var2[23]*t2011*t2022;
  t5930 = -4.064*var2[28]*t2011*t2022;
  t5932 = t5867 + t5877 + t5885 + t5891 + t5893 + t5910 + t5912 + t5922 + t5928 + t5930;
  t6189 = 4.064*var2[4]*t543*t1201;
  t6206 = -4.064*var2[9]*t543*t1201;
  t6212 = 16.256*var2[9]*t1395*t1503*t882;
  t6228 = -16.256*var2[14]*t1395*t1503*t882;
  t6231 = 24.383999999999997*var2[14]*t1824*t1840*t1842;
  t6245 = -24.383999999999997*var2[19]*t1824*t1840*t1842;
  t6246 = 16.256*var2[19]*t1884*t1138*t1892;
  t6248 = -16.256*var2[24]*t1884*t1138*t1892;
  t6250 = 4.064*var2[24]*t2011*t2022;
  t6252 = -4.064*var2[29]*t2011*t2022;
  t6253 = t6189 + t6206 + t6212 + t6228 + t6231 + t6245 + t6246 + t6248 + t6250 + t6252;
  p_output1[0]=t1302 + t1333 + t1593 + t1820 + t1843 + t1845 + t1908 + t1930 + t2095 + t2100;
  p_output1[1]=1. + t1302 + t1333 + t1593 + t1820 + t1843 + t1845 + t1908 + t1930 + t2095 + t2100;
  p_output1[2]=2.032*t1201*t543*var2[0] - 2.032*t1201*t543*var2[5] + 8.128*t1395*t1503*t882*var2[5] + 12.191999999999998*t1824*t1840*t1842*var2[10] - 8.128*t1395*t1503*t882*var2[10] - 12.191999999999998*t1824*t1840*t1842*var2[15] + 8.128*t1138*t1884*t1892*var2[15] - 8.128*t1138*t1884*t1892*var2[20] + 2.032*t2011*t2022*var2[20] - 2.032*t2011*t2022*var2[25];
  p_output1[3]=t2545;
  p_output1[4]=t2709;
  p_output1[5]=t2730;
  p_output1[6]=t2731;
  p_output1[7]=t2769;
  p_output1[8]=t2795;
  p_output1[9]=-5.*t1201*t1395*t882*var2[0] - 20.*t1503*t1824*t1842*var2[5] + 5.*t1201*t1395*t882*var2[5] + 20.*t1503*t1824*t1842*var2[10] - 30.*t1840*t1884*t1892*var2[10] + 30.*t1840*t1884*t1892*var2[15] - 20.*t1138*t2011*t2022*var2[15] + 20.*t1138*t2011*t2022*var2[20] - 5.*t2794*t3221*var2[20] + 5.*t2794*t3221*var2[25];
  p_output1[10]=-5.*t1201*t3330*var2[0] + 5.*t1201*t543*var2[5] - 5.*t1201*t1395*t882*var2[5] - 20.*t1503*t3330*t543*t882*var2[5] - 20.*t1503*t1824*t1842*var2[10] - 30.*t1395*t1840*t1842*t3330*var2[10] + 20.*t1395*t1503*t882*var2[10] + 30.*t1824*t1840*t1842*var2[15] - 30.*t1840*t1884*t1892*var2[15] - 20.*t1138*t1824*t1892*t3330*var2[15] + 20.*t1138*t1884*t1892*var2[20] - 20.*t1138*t2011*t2022*var2[20] - 5.*t1884*t2022*t3330*var2[20] + 5.*t2011*t2022*var2[25] - 5.*t2794*t3221*var2[25];
  p_output1[11]=t4203;
  p_output1[12]=t4203;
  p_output1[13]=1. + 2.032*t1201*t543*var2[1] - 2.032*t1201*t543*var2[6] + 8.128*t1395*t1503*t882*var2[6] + 12.191999999999998*t1824*t1840*t1842*var2[11] - 8.128*t1395*t1503*t882*var2[11] - 12.191999999999998*t1824*t1840*t1842*var2[16] + 8.128*t1138*t1884*t1892*var2[16] - 8.128*t1138*t1884*t1892*var2[21] + 2.032*t2011*t2022*var2[21] - 2.032*t2011*t2022*var2[26];
  p_output1[14]=t2545;
  p_output1[15]=t2709;
  p_output1[16]=t2730;
  p_output1[17]=t2731;
  p_output1[18]=t2769;
  p_output1[19]=t2795;
  p_output1[20]=-5.*t1201*t1395*t882*var2[1] - 20.*t1503*t1824*t1842*var2[6] + 5.*t1201*t1395*t882*var2[6] + 20.*t1503*t1824*t1842*var2[11] - 30.*t1840*t1884*t1892*var2[11] + 30.*t1840*t1884*t1892*var2[16] - 20.*t1138*t2011*t2022*var2[16] + 20.*t1138*t2011*t2022*var2[21] - 5.*t2794*t3221*var2[21] + 5.*t2794*t3221*var2[26];
  p_output1[21]=-5.*t1201*t3330*var2[1] + 5.*t1201*t543*var2[6] - 5.*t1201*t1395*t882*var2[6] - 20.*t1503*t3330*t543*t882*var2[6] - 20.*t1503*t1824*t1842*var2[11] - 30.*t1395*t1840*t1842*t3330*var2[11] + 20.*t1395*t1503*t882*var2[11] + 30.*t1824*t1840*t1842*var2[16] - 30.*t1840*t1884*t1892*var2[16] - 20.*t1138*t1824*t1892*t3330*var2[16] + 20.*t1138*t1884*t1892*var2[21] - 20.*t1138*t2011*t2022*var2[21] - 5.*t1884*t2022*t3330*var2[21] + 5.*t2011*t2022*var2[26] - 5.*t2794*t3221*var2[26];
  p_output1[22]=t5474;
  p_output1[23]=1.;
  p_output1[24]=t5474;
  p_output1[25]=2.032*t1201*t543*var2[2] - 2.032*t1201*t543*var2[7] + 8.128*t1395*t1503*t882*var2[7] + 12.191999999999998*t1824*t1840*t1842*var2[12] - 8.128*t1395*t1503*t882*var2[12] - 12.191999999999998*t1824*t1840*t1842*var2[17] + 8.128*t1138*t1884*t1892*var2[17] - 8.128*t1138*t1884*t1892*var2[22] + 2.032*t2011*t2022*var2[22] - 2.032*t2011*t2022*var2[27];
  p_output1[26]=t2545;
  p_output1[27]=t2709;
  p_output1[28]=t2730;
  p_output1[29]=t2731;
  p_output1[30]=t2769;
  p_output1[31]=t2795;
  p_output1[32]=-5.*t1201*t1395*t882*var2[2] - 20.*t1503*t1824*t1842*var2[7] + 5.*t1201*t1395*t882*var2[7] + 20.*t1503*t1824*t1842*var2[12] - 30.*t1840*t1884*t1892*var2[12] + 30.*t1840*t1884*t1892*var2[17] - 20.*t1138*t2011*t2022*var2[17] + 20.*t1138*t2011*t2022*var2[22] - 5.*t2794*t3221*var2[22] + 5.*t2794*t3221*var2[27];
  p_output1[33]=-5.*t1201*t3330*var2[2] + 5.*t1201*t543*var2[7] - 5.*t1201*t1395*t882*var2[7] - 20.*t1503*t3330*t543*t882*var2[7] - 20.*t1503*t1824*t1842*var2[12] - 30.*t1395*t1840*t1842*t3330*var2[12] + 20.*t1395*t1503*t882*var2[12] + 30.*t1824*t1840*t1842*var2[17] - 30.*t1840*t1884*t1892*var2[17] - 20.*t1138*t1824*t1892*t3330*var2[17] + 20.*t1138*t1884*t1892*var2[22] - 20.*t1138*t2011*t2022*var2[22] - 5.*t1884*t2022*t3330*var2[22] + 5.*t2011*t2022*var2[27] - 5.*t2794*t3221*var2[27];
  p_output1[34]=t5932;
  p_output1[35]=1.;
  p_output1[36]=t5932;
  p_output1[37]=2.032*t1201*t543*var2[3] - 2.032*t1201*t543*var2[8] + 8.128*t1395*t1503*t882*var2[8] + 12.191999999999998*t1824*t1840*t1842*var2[13] - 8.128*t1395*t1503*t882*var2[13] - 12.191999999999998*t1824*t1840*t1842*var2[18] + 8.128*t1138*t1884*t1892*var2[18] - 8.128*t1138*t1884*t1892*var2[23] + 2.032*t2011*t2022*var2[23] - 2.032*t2011*t2022*var2[28];
  p_output1[38]=t2545;
  p_output1[39]=t2709;
  p_output1[40]=t2730;
  p_output1[41]=t2731;
  p_output1[42]=t2769;
  p_output1[43]=t2795;
  p_output1[44]=-5.*t1201*t1395*t882*var2[3] - 20.*t1503*t1824*t1842*var2[8] + 5.*t1201*t1395*t882*var2[8] + 20.*t1503*t1824*t1842*var2[13] - 30.*t1840*t1884*t1892*var2[13] + 30.*t1840*t1884*t1892*var2[18] - 20.*t1138*t2011*t2022*var2[18] + 20.*t1138*t2011*t2022*var2[23] - 5.*t2794*t3221*var2[23] + 5.*t2794*t3221*var2[28];
  p_output1[45]=-5.*t1201*t3330*var2[3] + 5.*t1201*t543*var2[8] - 5.*t1201*t1395*t882*var2[8] - 20.*t1503*t3330*t543*t882*var2[8] - 20.*t1503*t1824*t1842*var2[13] - 30.*t1395*t1840*t1842*t3330*var2[13] + 20.*t1395*t1503*t882*var2[13] + 30.*t1824*t1840*t1842*var2[18] - 30.*t1840*t1884*t1892*var2[18] - 20.*t1138*t1824*t1892*t3330*var2[18] + 20.*t1138*t1884*t1892*var2[23] - 20.*t1138*t2011*t2022*var2[23] - 5.*t1884*t2022*t3330*var2[23] + 5.*t2011*t2022*var2[28] - 5.*t2794*t3221*var2[28];
  p_output1[46]=t6253;
  p_output1[47]=1.;
  p_output1[48]=t6253;
  p_output1[49]=2.032*t1201*t543*var2[4] - 2.032*t1201*t543*var2[9] + 8.128*t1395*t1503*t882*var2[9] + 12.191999999999998*t1824*t1840*t1842*var2[14] - 8.128*t1395*t1503*t882*var2[14] - 12.191999999999998*t1824*t1840*t1842*var2[19] + 8.128*t1138*t1884*t1892*var2[19] - 8.128*t1138*t1884*t1892*var2[24] + 2.032*t2011*t2022*var2[24] - 2.032*t2011*t2022*var2[29];
  p_output1[50]=t2545;
  p_output1[51]=t2709;
  p_output1[52]=t2730;
  p_output1[53]=t2731;
  p_output1[54]=t2769;
  p_output1[55]=t2795;
  p_output1[56]=-5.*t1201*t1395*t882*var2[4] - 20.*t1503*t1824*t1842*var2[9] + 5.*t1201*t1395*t882*var2[9] + 20.*t1503*t1824*t1842*var2[14] - 30.*t1840*t1884*t1892*var2[14] + 30.*t1840*t1884*t1892*var2[19] - 20.*t1138*t2011*t2022*var2[19] + 20.*t1138*t2011*t2022*var2[24] - 5.*t2794*t3221*var2[24] + 5.*t2794*t3221*var2[29];
  p_output1[57]=-5.*t1201*t3330*var2[4] + 5.*t1201*t543*var2[9] - 5.*t1201*t1395*t882*var2[9] - 20.*t1503*t3330*t543*t882*var2[9] - 20.*t1503*t1824*t1842*var2[14] - 30.*t1395*t1840*t1842*t3330*var2[14] + 20.*t1395*t1503*t882*var2[14] + 30.*t1824*t1840*t1842*var2[19] - 30.*t1840*t1884*t1892*var2[19] - 20.*t1138*t1824*t1892*t3330*var2[19] + 20.*t1138*t1884*t1892*var2[24] - 20.*t1138*t2011*t2022*var2[24] - 5.*t1884*t2022*t3330*var2[24] + 5.*t2011*t2022*var2[29] - 5.*t2794*t3221*var2[29];
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

#include "J_y_position_RightSS1.hh"

namespace RightSS1
{

void J_y_position_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE

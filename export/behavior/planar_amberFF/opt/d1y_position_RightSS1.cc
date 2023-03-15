/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:38 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t75;
  double t98;
  double t395;
  double t532;
  double t767;
  double t850;
  double t862;
  double t995;
  double t1036;
  double t1235;
  double t1399;
  double t1440;
  double t1815;
  double t1942;
  double t2021;
  double t2139;
  double t2157;
  double t2335;
  double t2372;
  double t2405;
  double t2431;
  double t2443;
  double t2465;
  double t2476;
  double t2490;
  double t2491;
  double t2516;
  double t2588;
  double t2708;
  double t2796;
  double t3265;
  double t3288;
  double t3308;
  double t3312;
  double t3332;
  double t3334;
  double t3356;
  double t3357;
  double t3362;
  double t3381;
  double t3419;
  double t3848;
  double t3872;
  double t3913;
  double t3961;
  double t4011;
  double t4024;
  double t4072;
  double t4126;
  double t4168;
  double t4197;
  double t4203;
  double t4467;
  double t4482;
  double t4485;
  double t4496;
  double t4530;
  double t4547;
  double t4557;
  double t4575;
  double t4588;
  double t4604;
  double t4609;
  double t4934;
  double t4959;
  double t4968;
  double t5059;
  double t5060;
  double t5061;
  double t5063;
  double t5124;
  double t5152;
  double t5234;
  double t5253;
  t75 = -1.*var4[1];
  t98 = var4[0] + t75;
  t395 = 1/t98;
  t532 = 0.8128*var1[2];
  t767 = 0.8128*var1[6];
  t850 = 0.4064*var1[7];
  t862 = 0. + t75 + t532 + t767 + t850;
  t995 = -1.*t395*t862;
  t1036 = 1. + t995;
  t1235 = Power(t1036,4);
  t1399 = Power(t98,-2);
  t1440 = Power(t1036,3);
  t1815 = Power(t98,-3);
  t1942 = Power(t1036,2);
  t2021 = Power(t862,2);
  t2139 = Power(t98,-4);
  t2157 = Power(t862,3);
  t2335 = Power(t98,-5);
  t2372 = Power(t862,4);
  t2405 = -4.064*var3[0]*t395*t1235;
  t2431 = 4.064*var3[5]*t395*t1235;
  t2443 = -16.256*var3[5]*t1399*t1440*t862;
  t2465 = 16.256*var3[10]*t1399*t1440*t862;
  t2476 = -24.383999999999997*var3[10]*t1815*t1942*t2021;
  t2490 = 24.383999999999997*var3[15]*t1815*t1942*t2021;
  t2491 = -16.256*var3[15]*t2139*t1036*t2157;
  t2516 = 16.256*var3[20]*t2139*t1036*t2157;
  t2588 = -4.064*var3[20]*t2335*t2372;
  t2708 = 4.064*var3[25]*t2335*t2372;
  t2796 = t2405 + t2431 + t2443 + t2465 + t2476 + t2490 + t2491 + t2516 + t2588 + t2708;
  t3265 = -4.064*var3[1]*t395*t1235;
  t3288 = 4.064*var3[6]*t395*t1235;
  t3308 = -16.256*var3[6]*t1399*t1440*t862;
  t3312 = 16.256*var3[11]*t1399*t1440*t862;
  t3332 = -24.383999999999997*var3[11]*t1815*t1942*t2021;
  t3334 = 24.383999999999997*var3[16]*t1815*t1942*t2021;
  t3356 = -16.256*var3[16]*t2139*t1036*t2157;
  t3357 = 16.256*var3[21]*t2139*t1036*t2157;
  t3362 = -4.064*var3[21]*t2335*t2372;
  t3381 = 4.064*var3[26]*t2335*t2372;
  t3419 = t3265 + t3288 + t3308 + t3312 + t3332 + t3334 + t3356 + t3357 + t3362 + t3381;
  t3848 = -4.064*var3[2]*t395*t1235;
  t3872 = 4.064*var3[7]*t395*t1235;
  t3913 = -16.256*var3[7]*t1399*t1440*t862;
  t3961 = 16.256*var3[12]*t1399*t1440*t862;
  t4011 = -24.383999999999997*var3[12]*t1815*t1942*t2021;
  t4024 = 24.383999999999997*var3[17]*t1815*t1942*t2021;
  t4072 = -16.256*var3[17]*t2139*t1036*t2157;
  t4126 = 16.256*var3[22]*t2139*t1036*t2157;
  t4168 = -4.064*var3[22]*t2335*t2372;
  t4197 = 4.064*var3[27]*t2335*t2372;
  t4203 = t3848 + t3872 + t3913 + t3961 + t4011 + t4024 + t4072 + t4126 + t4168 + t4197;
  t4467 = -4.064*var3[3]*t395*t1235;
  t4482 = 4.064*var3[8]*t395*t1235;
  t4485 = -16.256*var3[8]*t1399*t1440*t862;
  t4496 = 16.256*var3[13]*t1399*t1440*t862;
  t4530 = -24.383999999999997*var3[13]*t1815*t1942*t2021;
  t4547 = 24.383999999999997*var3[18]*t1815*t1942*t2021;
  t4557 = -16.256*var3[18]*t2139*t1036*t2157;
  t4575 = 16.256*var3[23]*t2139*t1036*t2157;
  t4588 = -4.064*var3[23]*t2335*t2372;
  t4604 = 4.064*var3[28]*t2335*t2372;
  t4609 = t4467 + t4482 + t4485 + t4496 + t4530 + t4547 + t4557 + t4575 + t4588 + t4604;
  t4934 = -4.064*var3[4]*t395*t1235;
  t4959 = 4.064*var3[9]*t395*t1235;
  t4968 = -16.256*var3[9]*t1399*t1440*t862;
  t5059 = 16.256*var3[14]*t1399*t1440*t862;
  t5060 = -24.383999999999997*var3[14]*t1815*t1942*t2021;
  t5061 = 24.383999999999997*var3[19]*t1815*t1942*t2021;
  t5063 = -16.256*var3[19]*t2139*t1036*t2157;
  t5124 = 16.256*var3[24]*t2139*t1036*t2157;
  t5152 = -4.064*var3[24]*t2335*t2372;
  t5234 = 4.064*var3[29]*t2335*t2372;
  t5253 = t4934 + t4959 + t4968 + t5059 + t5060 + t5061 + t5063 + t5124 + t5152 + t5234;
  p_output1[0]=-1.*t2796*var2[2] + var2[6] - 1.*t2796*var2[6] - 1.*var2[7]*(-2.032*t1235*t395*var3[0] + 2.032*t1235*t395*var3[5] - 8.128*t1399*t1440*t862*var3[5] - 12.191999999999998*t1815*t1942*t2021*var3[10] + 8.128*t1399*t1440*t862*var3[10] + 12.191999999999998*t1815*t1942*t2021*var3[15] - 8.128*t1036*t2139*t2157*var3[15] + 8.128*t1036*t2139*t2157*var3[20] - 2.032*t2335*t2372*var3[20] + 2.032*t2335*t2372*var3[25]);
  p_output1[1]=-1.*t3419*var2[2] - 1.*t3419*var2[6] + var2[7] - 1.*var2[7]*(-2.032*t1235*t395*var3[1] + 2.032*t1235*t395*var3[6] - 8.128*t1399*t1440*t862*var3[6] - 12.191999999999998*t1815*t1942*t2021*var3[11] + 8.128*t1399*t1440*t862*var3[11] + 12.191999999999998*t1815*t1942*t2021*var3[16] - 8.128*t1036*t2139*t2157*var3[16] + 8.128*t1036*t2139*t2157*var3[21] - 2.032*t2335*t2372*var3[21] + 2.032*t2335*t2372*var3[26]);
  p_output1[2]=-1.*t4203*var2[2] + var2[3] - 1.*t4203*var2[6] - 1.*var2[7]*(-2.032*t1235*t395*var3[2] + 2.032*t1235*t395*var3[7] - 8.128*t1399*t1440*t862*var3[7] - 12.191999999999998*t1815*t1942*t2021*var3[12] + 8.128*t1399*t1440*t862*var3[12] + 12.191999999999998*t1815*t1942*t2021*var3[17] - 8.128*t1036*t2139*t2157*var3[17] + 8.128*t1036*t2139*t2157*var3[22] - 2.032*t2335*t2372*var3[22] + 2.032*t2335*t2372*var3[27]);
  p_output1[3]=-1.*t4609*var2[2] + var2[4] - 1.*t4609*var2[6] - 1.*var2[7]*(-2.032*t1235*t395*var3[3] + 2.032*t1235*t395*var3[8] - 8.128*t1399*t1440*t862*var3[8] - 12.191999999999998*t1815*t1942*t2021*var3[13] + 8.128*t1399*t1440*t862*var3[13] + 12.191999999999998*t1815*t1942*t2021*var3[18] - 8.128*t1036*t2139*t2157*var3[18] + 8.128*t1036*t2139*t2157*var3[23] - 2.032*t2335*t2372*var3[23] + 2.032*t2335*t2372*var3[28]);
  p_output1[4]=-1.*t5253*var2[2] + var2[5] - 1.*t5253*var2[6] - 1.*var2[7]*(-2.032*t1235*t395*var3[4] + 2.032*t1235*t395*var3[9] - 8.128*t1399*t1440*t862*var3[9] - 12.191999999999998*t1815*t1942*t2021*var3[14] + 8.128*t1399*t1440*t862*var3[14] + 12.191999999999998*t1815*t1942*t2021*var3[19] - 8.128*t1036*t2139*t2157*var3[19] + 8.128*t1036*t2139*t2157*var3[24] - 2.032*t2335*t2372*var3[24] + 2.032*t2335*t2372*var3[29]);
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "d1y_position_RightSS1.hh"

namespace RightSS1
{

void d1y_position_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

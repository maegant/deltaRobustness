/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:01 GMT-08:00
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
  double t3;
  double t420;
  double t1224;
  double t884;
  double t1346;
  double t1128;
  double t1288;
  double t1290;
  double t755;
  double t1406;
  double t1424;
  double t1505;
  double t150;
  double t160;
  double t163;
  double t319;
  double t422;
  double t425;
  double t1657;
  double t743;
  double t2204;
  double t2310;
  double t2351;
  double t1827;
  double t24;
  double t428;
  double t649;
  double t742;
  double t2488;
  double t1813;
  double t1905;
  double t1924;
  double t2056;
  double t2068;
  double t2076;
  double t2077;
  double t2133;
  double t2355;
  double t2522;
  double t2523;
  double t3348;
  double t3500;
  double t1301;
  double t4491;
  double t4501;
  double t4513;
  double t4273;
  double t4295;
  double t4416;
  double t4473;
  double t3751;
  double t3788;
  double t3842;
  double t4522;
  double t4538;
  double t4570;
  double t4591;
  double t4600;
  double t4657;
  double t4664;
  double t4683;
  double t1512;
  double t1519;
  double t2705;
  double t2751;
  double t5983;
  double t6095;
  double t3606;
  double t3639;
  double t7136;
  double t4960;
  double t5148;
  double t5267;
  double t5433;
  double t5437;
  double t4023;
  double t4063;
  double t7327;
  double t7498;
  double t7499;
  double t7933;
  double t8190;
  double t8197;
  double t8228;
  double t8235;
  double t8237;
  double t8242;
  double t8250;
  double t8251;
  double t8252;
  double t8255;
  double t8256;
  double t8258;
  double t8273;
  double t8274;
  double t8278;
  double t8279;
  double t8281;
  double t8282;
  double t8283;
  double t8284;
  double t8149;
  double t8181;
  double t8187;
  double t8259;
  double t8268;
  double t8271;
  double t8334;
  double t8338;
  double t8341;
  double t8343;
  double t8344;
  double t8345;
  double t8350;
  double t8357;
  double t8359;
  double t8339;
  double t8346;
  double t8347;
  double t8333;
  double t8349;
  double t8393;
  double t8394;
  double t8402;
  double t8405;
  double t8399;
  double t8406;
  double t8408;
  double t8410;
  double t8411;
  double t8412;
  double t8371;
  double t8374;
  double t8438;
  double t8429;
  double t8430;
  double t8433;
  double t8437;
  double t8440;
  t3 = Cos(var1[8]);
  t420 = Sin(var1[8]);
  t1224 = Cos(var1[7]);
  t884 = Sin(var1[7]);
  t1346 = Cos(var1[6]);
  t1128 = -1.*t3*t884;
  t1288 = -1.*t1224*t420;
  t1290 = t1128 + t1288;
  t755 = Sin(var1[6]);
  t1406 = t1224*t3;
  t1424 = -1.*t884*t420;
  t1505 = t1406 + t1424;
  t150 = -1.*t3;
  t160 = 1. + t150;
  t163 = -1.3127*t160;
  t319 = -1.3127*t3;
  t422 = -0.06*t420;
  t425 = t163 + t319 + t422;
  t1657 = Cos(var1[2]);
  t743 = Sin(var1[2]);
  t2204 = t3*t884;
  t2310 = t1224*t420;
  t2351 = t2204 + t2310;
  t1827 = -1.*t755*t1505;
  t24 = 0.9063*t3;
  t428 = t3*t425;
  t649 = 0.06*t3*t420;
  t742 = t24 + t428 + t649;
  t2488 = t1346*t1505;
  t1813 = t1346*t1290;
  t1905 = t1813 + t1827;
  t1924 = t1657*t1905;
  t2056 = Power(t3,2);
  t2068 = -0.06*t2056;
  t2076 = 0.9063*t420;
  t2077 = t425*t420;
  t2133 = t2068 + t2076 + t2077;
  t2355 = -1.*t755*t2351;
  t2522 = t2355 + t2488;
  t2523 = t1657*t2522;
  t3348 = t755*t1290;
  t3500 = t3348 + t2488;
  t1301 = -1.*t755*t1290;
  t4491 = -1.*t1224*t3;
  t4501 = t884*t420;
  t4513 = t4491 + t4501;
  t4273 = t1657*t3500;
  t4295 = t743*t1905;
  t4416 = t4273 + t4295;
  t4473 = 1.142857*t2133*t4416;
  t3751 = t1346*t2351;
  t3788 = t755*t1505;
  t3842 = t3751 + t3788;
  t4522 = t1346*t4513;
  t4538 = t1301 + t4522;
  t4570 = t743*t4538;
  t4591 = t755*t4513;
  t4600 = t1813 + t4591;
  t4657 = t1657*t4600;
  t4664 = t4570 + t4657;
  t4683 = 1.142857*t742*t4664;
  t1512 = -1.*t1346*t1505;
  t1519 = t1301 + t1512;
  t2705 = -1.*t1346*t2351;
  t2751 = t2705 + t1827;
  t5983 = -1.*t743*t1905;
  t6095 = -1.*t743*t2522;
  t3606 = -1.*t743*t3500;
  t3639 = t3606 + t1924;
  t7136 = 1.142857*t2133*t3639;
  t4960 = -0.9063*t420;
  t5148 = -1.*t425*t420;
  t5267 = Power(t420,2);
  t5433 = -0.06*t5267;
  t5437 = 0. + t4960 + t5148 + t5433;
  t4023 = -1.*t743*t3842;
  t4063 = t2523 + t4023;
  t7327 = t1657*t4538;
  t7498 = -1.*t743*t4600;
  t7499 = t7327 + t7498;
  t7933 = 1.142857*t742*t7499;
  t8190 = -1.*t1224;
  t8197 = 1. + t8190;
  t8228 = -0.9063*t8197;
  t8235 = -0.06*t3*t884;
  t8237 = t1224*t425;
  t8242 = t8228 + t8235 + t8237;
  t8250 = t1346*t8242;
  t8251 = 0.06*t1224*t3;
  t8252 = 0.9063*t884;
  t8255 = t884*t425;
  t8256 = t8251 + t8252 + t8255;
  t8258 = -1.*t755*t8256;
  t8273 = -0.4999*t755;
  t8274 = -1.*t755*t8242;
  t8278 = -1.*t1346*t8256;
  t8279 = t8273 + t8274 + t8278;
  t8281 = 0.4999*t755;
  t8282 = t755*t8242;
  t8283 = t1346*t8256;
  t8284 = t8281 + t8282 + t8283;
  t8149 = -1.*t1346;
  t8181 = 1. + t8149;
  t8187 = -0.4999*t8181;
  t8259 = t8187 + t8250 + t8258;
  t8268 = 0.4999*t1346;
  t8271 = t8268 + t8250 + t8258;
  t8334 = 0.9063*t1224;
  t8338 = t8334 + t8235 + t8237;
  t8341 = -0.06*t1224*t3;
  t8343 = -0.9063*t884;
  t8344 = -1.*t884*t425;
  t8345 = t8341 + t8343 + t8344;
  t8350 = t1346*t8338;
  t8357 = t755*t8345;
  t8359 = t8350 + t8357;
  t8339 = -1.*t755*t8338;
  t8346 = t1346*t8345;
  t8347 = t8339 + t8346;
  t8333 = t8284*t3500;
  t8349 = t8259*t1905;
  t8393 = -0.06*t1224*t420;
  t8394 = t8235 + t8393;
  t8402 = 0.06*t884*t420;
  t8405 = t8341 + t8402;
  t8399 = -1.*t755*t8394;
  t8406 = t1346*t8405;
  t8408 = t8399 + t8406;
  t8410 = t1346*t8394;
  t8411 = t755*t8405;
  t8412 = t8410 + t8411;
  t8371 = -1.*t8259*t4538;
  t8374 = -1.*t8284*t4600;
  t8438 = 0.4999*t1505;
  t8429 = 0.4999*t1290;
  t8430 = t8242*t1290;
  t8433 = t8256*t1505;
  t8437 = -1.*t8256*t1290;
  t8440 = -1.*t8242*t4513;
  p_output1[0]=var2[7]*(-0.5*(1.142857*t2133*t4063 + 1.142857*t3639*t742)*var2[2] - 0.5*(1.142857*t742*(t1924 + t1519*t743) + 1.142857*t2133*(t2523 + t2751*t743))*var2[6] - 0.5*(t4473 + t4683)*var2[7] - 0.5*(t4473 + t4683 + 1.142857*t4416*t5437 + 1.142857*t742*(t1657*t3842 + t2522*t743))*var2[8]);
  p_output1[1]=var2[7]*(-0.5*(1.142857*t2133*(-1.*t1657*t3842 + t6095) + 1.142857*(-1.*t1657*t3500 + t5983)*t742)*var2[2] - 0.5*(1.142857*t2133*(t1657*t2751 + t6095) + 1.142857*(t1519*t1657 + t5983)*t742)*var2[6] - 0.5*(t7136 + t7933)*var2[7] - 0.5*(1.142857*t3639*t5437 + t7136 + 1.142857*t4063*t742 + t7933)*var2[8]);
  p_output1[2]=var2[7]*(-0.5*(1.142857*t2133*(-1.*t1519*t8259 - 1.*t3500*t8271 - 1.*t1905*t8279 - 1.*t1905*t8284) + 1.142857*t742*(t2751*t8259 + t3842*t8271 + t2522*t8279 + t2522*t8284))*var2[6] - 0.5*(1.142857*t742*(t8333 + t2522*t8347 + t8349 + t3842*t8359) + 1.142857*t2133*(-1.*t1905*t8347 - 1.*t3500*t8359 + t8371 + t8374))*var2[7] - 0.5*(1.142857*t742*(-1.*t1905*t8259 - 1.*t3500*t8284) + 1.142857*t5437*(t2522*t8259 + t3842*t8284) + 1.142857*t2133*(t8371 + t8374 - 1.*t1905*t8408 - 1.*t3500*t8412) + 1.142857*t742*(t8333 + t8349 + t2522*t8408 + t3842*t8412))*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[7]*(-0.5*(1.142857*t742*(t2351*t8338 + t1505*t8345 + t8429 + t8430 + t8433) + 1.142857*t2133*(-1.*t1505*t8338 - 1.*t1290*t8345 + t8437 + t8438 + t8440))*var2[7] - 0.5*(1.142857*t742*(0.4999*t2351 - 1.*t1290*t8242 - 1.*t1505*t8256) + 1.142857*t742*(t2351*t8394 + t1505*t8405 + t8429 + t8430 + t8433) + 1.142857*t5437*(t1505*t8242 + t2351*t8256 + t8438) + 1.142857*t2133*(-1.*t1505*t8394 - 1.*t1290*t8405 + t8437 + t8438 + t8440))*var2[8]);
  p_output1[7]=-0.5*(2.285714*t2133*t742 + 2.285714*t5437*t742)*var2[7]*var2[8];
  p_output1[8]=0.03428571*t742*var2[7]*var2[8];
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

#include "Ce1_vec_L7_J8_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L7_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

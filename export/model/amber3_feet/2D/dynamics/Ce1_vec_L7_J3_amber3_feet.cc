/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:57 GMT-08:00
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
  double t190;
  double t520;
  double t597;
  double t826;
  double t896;
  double t919;
  double t1224;
  double t1286;
  double t1296;
  double t1346;
  double t1347;
  double t1521;
  double t525;
  double t530;
  double t573;
  double t884;
  double t1354;
  double t1516;
  double t1541;
  double t1827;
  double t1895;
  double t1896;
  double t1980;
  double t1992;
  double t2020;
  double t2092;
  double t2203;
  double t2385;
  double t2399;
  double t3751;
  double t3788;
  double t3828;
  double t4041;
  double t2056;
  double t2439;
  double t3534;
  double t3142;
  double t3260;
  double t3394;
  double t2700;
  double t2741;
  double t2859;
  double t2864;
  double t3073;
  double t3074;
  double t3948;
  double t3965;
  double t319;
  double t1519;
  double t1905;
  double t1958;
  double t4063;
  double t4067;
  double t4133;
  double t2695;
  double t3464;
  double t3479;
  double t4023;
  double t5055;
  double t5068;
  double t5083;
  double t4453;
  double t4491;
  double t4501;
  double t4513;
  double t5179;
  double t5182;
  double t5196;
  double t5296;
  double t4650;
  double t4683;
  double t5148;
  double t5156;
  double t5556;
  double t5825;
  double t5890;
  double t6524;
  double t6580;
  double t6688;
  double t6754;
  double t6799;
  double t6963;
  double t7954;
  double t7964;
  double t7999;
  double t5437;
  double t5441;
  double t5465;
  double t7499;
  double t7627;
  double t7925;
  double t6663;
  double t6964;
  double t7122;
  double t8045;
  double t8054;
  double t8082;
  double t8127;
  double t6309;
  double t6476;
  double t7346;
  double t8197;
  double t8201;
  double t8204;
  double t8211;
  double t8076;
  double t8136;
  double t8139;
  double t8147;
  double t8203;
  double t8228;
  double t8230;
  double t8237;
  double t8242;
  double t8243;
  double t8163;
  double t8169;
  double t8269;
  double t5107;
  double t5164;
  double t5392;
  double t5407;
  double t5433;
  double t4168;
  double t4172;
  double t8276;
  double t4346;
  double t4466;
  double t5907;
  double t5937;
  double t5974;
  double t5975;
  double t5983;
  double t7327;
  double t7933;
  double t7938;
  double t8155;
  double t8157;
  double t8181;
  double t8302;
  double t8235;
  double t8250;
  double t8251;
  double t8310;
  double t8311;
  double t8312;
  double t8313;
  double t8253;
  double t8254;
  double t8255;
  double t8363;
  double t8361;
  double t8364;
  double t8365;
  double t8353;
  double t8354;
  double t8355;
  double t8357;
  double t8370;
  double t8372;
  double t8376;
  double t8377;
  double t8384;
  double t8419;
  double t8420;
  double t8421;
  double t8422;
  double t8410;
  double t8411;
  double t8412;
  double t8413;
  double t8417;
  t190 = Sin(var1[6]);
  t520 = Cos(var1[7]);
  t597 = Cos(var1[8]);
  t826 = Sin(var1[7]);
  t896 = -1.*t597;
  t919 = 1. + t896;
  t1224 = -1.3127*t919;
  t1286 = -1.3127*t597;
  t1296 = Sin(var1[8]);
  t1346 = -0.06*t1296;
  t1347 = t1224 + t1286 + t1346;
  t1521 = Cos(var1[6]);
  t525 = -1.*t520;
  t530 = 1. + t525;
  t573 = -0.9063*t530;
  t884 = -0.06*t597*t826;
  t1354 = t520*t1347;
  t1516 = t573 + t884 + t1354;
  t1541 = 0.06*t520*t597;
  t1827 = 0.9063*t826;
  t1895 = t826*t1347;
  t1896 = t1541 + t1827 + t1895;
  t1980 = -1.*t597*t826;
  t1992 = -1.*t520*t1296;
  t2020 = t1980 + t1992;
  t2092 = t520*t597;
  t2203 = -1.*t826*t1296;
  t2385 = t2092 + t2203;
  t2399 = t1521*t2385;
  t3751 = t597*t826;
  t3788 = t520*t1296;
  t3828 = t3751 + t3788;
  t4041 = Sin(var1[2]);
  t2056 = t190*t2020;
  t2439 = t2056 + t2399;
  t3534 = Cos(var1[2]);
  t3142 = t1521*t2020;
  t3260 = -1.*t190*t2385;
  t3394 = t3142 + t3260;
  t2700 = -1.*t1521;
  t2741 = 1. + t2700;
  t2859 = -0.4999*t2741;
  t2864 = t1521*t1516;
  t3073 = -1.*t190*t1896;
  t3074 = t2859 + t2864 + t3073;
  t3948 = -1.*t190*t3828;
  t3965 = t3948 + t2399;
  t319 = 0.4999*t190;
  t1519 = t190*t1516;
  t1905 = t1521*t1896;
  t1958 = t319 + t1519 + t1905;
  t4063 = t1521*t3828;
  t4067 = t190*t2385;
  t4133 = t4063 + t4067;
  t2695 = -1.*t1958*t2439;
  t3464 = -1.*t3074*t3394;
  t3479 = t2695 + t3464;
  t4023 = t3534*t3965;
  t5055 = -1.*t190*t2020;
  t5068 = -1.*t1521*t2385;
  t5083 = t5055 + t5068;
  t4453 = t3534*t3394;
  t4491 = t3074*t3965;
  t4501 = t1958*t4133;
  t4513 = t4491 + t4501;
  t5179 = -0.4999*t190;
  t5182 = -1.*t190*t1516;
  t5196 = -1.*t1521*t1896;
  t5296 = t5179 + t5182 + t5196;
  t4650 = -1.*t1521*t3828;
  t4683 = t4650 + t3260;
  t5148 = 0.4999*t1521;
  t5156 = t5148 + t2864 + t3073;
  t5556 = t3534*t2439;
  t5825 = t4041*t3394;
  t5890 = t5556 + t5825;
  t6524 = 0.9063*t520;
  t6580 = t6524 + t884 + t1354;
  t6688 = -0.06*t520*t597;
  t6754 = -0.9063*t826;
  t6799 = -1.*t826*t1347;
  t6963 = t6688 + t6754 + t6799;
  t7954 = -1.*t520*t597;
  t7964 = t826*t1296;
  t7999 = t7954 + t7964;
  t5437 = t4041*t3965;
  t5441 = t3534*t4133;
  t5465 = t5437 + t5441;
  t7499 = t1521*t6580;
  t7627 = t190*t6963;
  t7925 = t7499 + t7627;
  t6663 = -1.*t190*t6580;
  t6964 = t1521*t6963;
  t7122 = t6663 + t6964;
  t8045 = t1521*t7999;
  t8054 = t5055 + t8045;
  t8082 = t190*t7999;
  t8127 = t3142 + t8082;
  t6309 = 1.142857*t5890*t3479;
  t6476 = t1958*t2439;
  t7346 = t3074*t3394;
  t8197 = -0.06*t520*t1296;
  t8201 = t884 + t8197;
  t8204 = 0.06*t826*t1296;
  t8211 = t6688 + t8204;
  t8076 = t4041*t8054;
  t8136 = t3534*t8127;
  t8139 = t8076 + t8136;
  t8147 = 1.142857*t4513*t8139;
  t8203 = -1.*t190*t8201;
  t8228 = t1521*t8211;
  t8230 = t8203 + t8228;
  t8237 = t1521*t8201;
  t8242 = t190*t8211;
  t8243 = t8237 + t8242;
  t8163 = -1.*t3074*t8054;
  t8169 = -1.*t1958*t8127;
  t8269 = -1.*t4041*t3965;
  t5107 = -1.*t3074*t5083;
  t5164 = -1.*t5156*t2439;
  t5392 = -1.*t5296*t3394;
  t5407 = -1.*t1958*t3394;
  t5433 = t5107 + t5164 + t5392 + t5407;
  t4168 = -1.*t4041*t4133;
  t4172 = t4023 + t4168;
  t8276 = -1.*t4041*t3394;
  t4346 = -1.*t4041*t2439;
  t4466 = t4346 + t4453;
  t5907 = t5296*t3965;
  t5937 = t1958*t3965;
  t5974 = t3074*t4683;
  t5975 = t5156*t4133;
  t5983 = t5907 + t5937 + t5974 + t5975;
  t7327 = t7122*t3965;
  t7933 = t7925*t4133;
  t7938 = t6476 + t7327 + t7346 + t7933;
  t8155 = -1.*t7925*t2439;
  t8157 = -1.*t7122*t3394;
  t8181 = t8155 + t8157 + t8163 + t8169;
  t8302 = 1.142857*t4466*t3479;
  t8235 = t3965*t8230;
  t8250 = t4133*t8243;
  t8251 = t6476 + t7346 + t8235 + t8250;
  t8310 = t3534*t8054;
  t8311 = -1.*t4041*t8127;
  t8312 = t8310 + t8311;
  t8313 = 1.142857*t4513*t8312;
  t8253 = -1.*t3394*t8230;
  t8254 = -1.*t2439*t8243;
  t8255 = t8253 + t8254 + t8163 + t8169;
  t8363 = 0.4999*t2385;
  t8361 = t1896*t3828;
  t8364 = t1516*t2385;
  t8365 = t8361 + t8363 + t8364;
  t8353 = -1.*t1516*t2020;
  t8354 = 0.4999*t3828;
  t8355 = -1.*t1896*t2385;
  t8357 = t8353 + t8354 + t8355;
  t8370 = -1.*t1896*t2020;
  t8372 = -1.*t1516*t7999;
  t8376 = 0.4999*t2020;
  t8377 = t1516*t2020;
  t8384 = t1896*t2385;
  t8419 = 0.9063*t597;
  t8420 = t597*t1347;
  t8421 = 0.06*t597*t1296;
  t8422 = t8419 + t8420 + t8421;
  t8410 = Power(t597,2);
  t8411 = -0.06*t8410;
  t8412 = 0.9063*t1296;
  t8413 = t1347*t1296;
  t8417 = t8411 + t8412 + t8413;
  p_output1[0]=var2[2]*(-0.5*(1.142857*t3479*t4172 + 1.142857*t4466*t4513)*var2[2] - 0.5*(1.142857*t3479*(t4023 + t4041*t4683) + 1.142857*t4513*(t4453 + t4041*t5083) + 1.142857*t5433*t5465 + 1.142857*t5890*t5983)*var2[6] - 0.5*(t6309 + 1.142857*t5890*t7938 + t8147 + 1.142857*t5465*t8181)*var2[7] - 0.5*(t6309 + t8147 + 1.142857*t5890*t8251 + 1.142857*t5465*t8255)*var2[8]);
  p_output1[1]=var2[2]*(-0.5*(1.142857*t3479*(-1.*t3534*t4133 + t8269) + 1.142857*t4513*(-1.*t2439*t3534 + t8276))*var2[2] - 0.5*(1.142857*t4172*t5433 + 1.142857*t4466*t5983 + 1.142857*t3479*(t3534*t4683 + t8269) + 1.142857*t4513*(t3534*t5083 + t8276))*var2[6] - 0.5*(1.142857*t4466*t7938 + 1.142857*t4172*t8181 + t8302 + t8313)*var2[7] - 0.5*(1.142857*t4466*t8251 + 1.142857*t4172*t8255 + t8302 + t8313)*var2[8]);
  p_output1[2]=var2[2]*(-0.5*(2.285714*t3479*t5433 + 2.285714*t4513*t5983)*var2[6] - 0.5*(2.285714*t4513*t7938 + 2.285714*t3479*t8181)*var2[7] - 0.5*(2.285714*t4513*t8251 + 2.285714*t3479*t8255)*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[2]*(-0.5*(1.142857*t5433*t8357 + 1.142857*t5983*t8365)*var2[6] - 0.5*(1.142857*t8181*t8357 + 1.142857*t7938*t8365 + 1.142857*t3479*(-1.*t2385*t6580 - 1.*t2020*t6963 + t8363 + t8370 + t8372) + 1.142857*t4513*(t3828*t6580 + t2385*t6963 + t8376 + t8377 + t8384))*var2[7] - 0.5*(1.142857*t8255*t8357 + 1.142857*t8251*t8365 + 1.142857*t3479*(-1.*t2385*t8201 - 1.*t2020*t8211 + t8363 + t8370 + t8372) + 1.142857*t4513*(t3828*t8201 + t2385*t8211 + t8376 + t8377 + t8384))*var2[8]);
  p_output1[7]=var2[2]*(-0.5*(1.142857*t5433*t8417 + 1.142857*t5983*t8422)*var2[6] - 0.5*(1.142857*t8181*t8417 + 1.142857*t7938*t8422)*var2[7] - 0.5*(1.142857*(0. - 0.9063*t1296 - 0.06*Power(t1296,2) - 1.*t1296*t1347)*t4513 + 1.142857*t8255*t8417 + 1.142857*t3479*t8422 + 1.142857*t8251*t8422)*var2[8]);
  p_output1[8]=var2[2]*(0.03428571*t5433*var2[6] + 0.03428571*t8181*var2[7] + 0.03428571*t8255*var2[8]);
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

#include "Ce1_vec_L7_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L7_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

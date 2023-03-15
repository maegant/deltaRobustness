/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:00 GMT-08:00
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
  double t246;
  double t143;
  double t63;
  double t1002;
  double t376;
  double t573;
  double t755;
  double t884;
  double t1224;
  double t1286;
  double t1541;
  double t1733;
  double t1765;
  double t2320;
  double t2173;
  double t2178;
  double t2191;
  double t2141;
  double t1887;
  double t1895;
  double t1905;
  double t2040;
  double t2056;
  double t2063;
  double t1301;
  double t1346;
  double t1354;
  double t163;
  double t319;
  double t1288;
  double t1298;
  double t2399;
  double t2092;
  double t2489;
  double t1519;
  double t1827;
  double t2076;
  double t2077;
  double t3500;
  double t2488;
  double t2653;
  double t2705;
  double t2859;
  double t2864;
  double t2938;
  double t3142;
  double t3479;
  double t3577;
  double t3606;
  double t4063;
  double t4067;
  double t4570;
  double t4600;
  double t4683;
  double t5433;
  double t5437;
  double t5441;
  double t5465;
  double t5148;
  double t5179;
  double t4295;
  double t4416;
  double t4453;
  double t2299;
  double t5890;
  double t5907;
  double t5937;
  double t4918;
  double t4950;
  double t4960;
  double t5526;
  double t5811;
  double t7327;
  double t7346;
  double t7499;
  double t7627;
  double t5974;
  double t5983;
  double t6003;
  double t6095;
  double t6185;
  double t6235;
  double t6309;
  double t6476;
  double t6524;
  double t6688;
  double t6754;
  double t6964;
  double t2347;
  double t2352;
  double t3608;
  double t3639;
  double t8188;
  double t8204;
  double t4172;
  double t4269;
  double t5267;
  double t5497;
  double t5547;
  double t5556;
  double t5825;
  double t5975;
  double t4466;
  double t4491;
  double t8271;
  double t7498;
  double t7933;
  double t7938;
  double t7964;
  double t8045;
  double t8076;
  double t8274;
  double t8277;
  double t8278;
  double t8279;
  double t8302;
  double t8309;
  double t8322;
  double t8324;
  double t8325;
  double t8326;
  double t8331;
  double t8333;
  double t8334;
  double t8335;
  double t8299;
  double t8300;
  double t8301;
  double t8310;
  double t8313;
  double t8316;
  double t8369;
  double t8371;
  double t8373;
  double t8364;
  double t8365;
  double t8366;
  double t8351;
  double t8354;
  double t8357;
  double t8377;
  double t8379;
  double t8381;
  double t8361;
  double t8368;
  double t8395;
  double t8399;
  double t8400;
  double t8405;
  double t8406;
  double t8407;
  double t8387;
  double t8388;
  double t8434;
  double t8435;
  double t8436;
  double t8437;
  double t8439;
  double t8440;
  double t8441;
  double t8442;
  double t8443;
  t246 = Sin(var1[7]);
  t143 = Cos(var1[8]);
  t63 = Cos(var1[7]);
  t1002 = Sin(var1[8]);
  t376 = -1.*t143;
  t573 = 1. + t376;
  t755 = -1.3127*t573;
  t884 = -1.3127*t143;
  t1224 = -0.06*t1002;
  t1286 = t755 + t884 + t1224;
  t1541 = t63*t143;
  t1733 = -1.*t246*t1002;
  t1765 = t1541 + t1733;
  t2320 = Cos(var1[6]);
  t2173 = -1.*t143*t246;
  t2178 = -1.*t63*t1002;
  t2191 = t2173 + t2178;
  t2141 = Sin(var1[6]);
  t1887 = -1.*t63;
  t1895 = 1. + t1887;
  t1905 = -0.9063*t1895;
  t2040 = -0.06*t143*t246;
  t2056 = t63*t1286;
  t2063 = t1905 + t2040 + t2056;
  t1301 = t143*t246;
  t1346 = t63*t1002;
  t1354 = t1301 + t1346;
  t163 = 0.06*t63*t143;
  t319 = 0.9063*t246;
  t1288 = t246*t1286;
  t1298 = t163 + t319 + t1288;
  t2399 = Cos(var1[2]);
  t2092 = Sin(var1[2]);
  t2489 = -1.*t2141*t1765;
  t1519 = t1298*t1354;
  t1827 = 0.4999*t1765;
  t2076 = t2063*t1765;
  t2077 = t1519 + t1827 + t2076;
  t3500 = t2320*t1765;
  t2488 = t2320*t2191;
  t2653 = t2488 + t2489;
  t2705 = t2399*t2653;
  t2859 = -1.*t2063*t2191;
  t2864 = 0.4999*t1354;
  t2938 = -1.*t1298*t1765;
  t3142 = t2859 + t2864 + t2938;
  t3479 = -1.*t2141*t1354;
  t3577 = t3479 + t3500;
  t3606 = t2399*t3577;
  t4063 = t2141*t2191;
  t4067 = t4063 + t3500;
  t4570 = t2399*t4067;
  t4600 = t2092*t2653;
  t4683 = t4570 + t4600;
  t5433 = -0.06*t63*t143;
  t5437 = -0.9063*t246;
  t5441 = -1.*t246*t1286;
  t5465 = t5433 + t5437 + t5441;
  t5148 = 0.9063*t63;
  t5179 = t5148 + t2040 + t2056;
  t4295 = t2320*t1354;
  t4416 = t2141*t1765;
  t4453 = t4295 + t4416;
  t2299 = -1.*t2141*t2191;
  t5890 = -1.*t63*t143;
  t5907 = t246*t1002;
  t5937 = t5890 + t5907;
  t4918 = 1.142857*t3142*t4683;
  t4950 = 0.4999*t2191;
  t4960 = t2063*t2191;
  t5526 = t1298*t1765;
  t5811 = -1.*t1298*t2191;
  t7327 = -0.06*t63*t1002;
  t7346 = t2040 + t7327;
  t7499 = 0.06*t246*t1002;
  t7627 = t5433 + t7499;
  t5974 = -1.*t2063*t5937;
  t5983 = t2092*t3577;
  t6003 = t2399*t4453;
  t6095 = t5983 + t6003;
  t6185 = t2320*t5937;
  t6235 = t2299 + t6185;
  t6309 = t2092*t6235;
  t6476 = t2141*t5937;
  t6524 = t2488 + t6476;
  t6688 = t2399*t6524;
  t6754 = t6309 + t6688;
  t6964 = 1.142857*t2077*t6754;
  t2347 = -1.*t2320*t1765;
  t2352 = t2299 + t2347;
  t3608 = -1.*t2320*t1354;
  t3639 = t3608 + t2489;
  t8188 = -1.*t2092*t2653;
  t8204 = -1.*t2092*t3577;
  t4172 = -1.*t2092*t4067;
  t4269 = t4172 + t2705;
  t5267 = t5179*t1354;
  t5497 = t5465*t1765;
  t5547 = t4950 + t4960 + t5267 + t5497 + t5526;
  t5556 = -1.*t5465*t2191;
  t5825 = -1.*t5179*t1765;
  t5975 = t5556 + t5811 + t1827 + t5825 + t5974;
  t4466 = -1.*t2092*t4453;
  t4491 = t3606 + t4466;
  t8271 = 1.142857*t3142*t4269;
  t7498 = t7346*t1354;
  t7933 = t1765*t7627;
  t7938 = t4950 + t4960 + t7498 + t5526 + t7933;
  t7964 = -1.*t7346*t1765;
  t8045 = -1.*t2191*t7627;
  t8076 = t5811 + t1827 + t7964 + t8045 + t5974;
  t8274 = t2399*t6235;
  t8277 = -1.*t2092*t6524;
  t8278 = t8274 + t8277;
  t8279 = 1.142857*t2077*t8278;
  t8302 = t2320*t2063;
  t8309 = -1.*t2141*t1298;
  t8322 = -0.4999*t2141;
  t8324 = -1.*t2141*t2063;
  t8325 = -1.*t2320*t1298;
  t8326 = t8322 + t8324 + t8325;
  t8331 = 0.4999*t2141;
  t8333 = t2141*t2063;
  t8334 = t2320*t1298;
  t8335 = t8331 + t8333 + t8334;
  t8299 = -1.*t2320;
  t8300 = 1. + t8299;
  t8301 = -0.4999*t8300;
  t8310 = t8301 + t8302 + t8309;
  t8313 = 0.4999*t2320;
  t8316 = t8313 + t8302 + t8309;
  t8369 = t2320*t5179;
  t8371 = t2141*t5465;
  t8373 = t8369 + t8371;
  t8364 = -1.*t2141*t5179;
  t8365 = t2320*t5465;
  t8366 = t8364 + t8365;
  t8351 = -1.*t8335*t4067;
  t8354 = -1.*t8310*t2653;
  t8357 = t8351 + t8354;
  t8377 = t8310*t3577;
  t8379 = t8335*t4453;
  t8381 = t8377 + t8379;
  t8361 = t8335*t4067;
  t8368 = t8310*t2653;
  t8395 = -1.*t2141*t7346;
  t8399 = t2320*t7627;
  t8400 = t8395 + t8399;
  t8405 = t2320*t7346;
  t8406 = t2141*t7627;
  t8407 = t8405 + t8406;
  t8387 = -1.*t8310*t6235;
  t8388 = -1.*t8335*t6524;
  t8434 = 0.9063*t143;
  t8435 = t143*t1286;
  t8436 = 0.06*t143*t1002;
  t8437 = t8434 + t8435 + t8436;
  t8439 = Power(t143,2);
  t8440 = -0.06*t8439;
  t8441 = 0.9063*t1002;
  t8442 = t1286*t1002;
  t8443 = t8440 + t8441 + t8442;
  p_output1[0]=var2[6]*(-0.5*(1.142857*t2077*t4269 + 1.142857*t3142*t4491)*var2[2] - 0.5*(1.142857*t2077*(t2092*t2352 + t2705) + 1.142857*t3142*(t3606 + t2092*t3639))*var2[6] - 0.5*(t4918 + 1.142857*t4683*t5547 + 1.142857*t5975*t6095 + t6964)*var2[7] - 0.5*(t4918 + t6964 + 1.142857*t4683*t7938 + 1.142857*t6095*t8076)*var2[8]);
  p_output1[1]=var2[6]*(-0.5*(1.142857*t2077*(-1.*t2399*t4067 + t8188) + 1.142857*t3142*(-1.*t2399*t4453 + t8204))*var2[2] - 0.5*(1.142857*t2077*(t2352*t2399 + t8188) + 1.142857*t3142*(t2399*t3639 + t8204))*var2[6] - 0.5*(1.142857*t4269*t5547 + 1.142857*t4491*t5975 + t8271 + t8279)*var2[7] - 0.5*(1.142857*t4269*t7938 + 1.142857*t4491*t8076 + t8271 + t8279)*var2[8]);
  p_output1[2]=var2[6]*(-0.5*(1.142857*t3142*(-1.*t2352*t8310 - 1.*t4067*t8316 - 1.*t2653*t8326 - 1.*t2653*t8335) + 1.142857*t2077*(t3639*t8310 + t4453*t8316 + t3577*t8326 + t3577*t8335))*var2[6] - 0.5*(1.142857*t5975*t8357 + 1.142857*t2077*(t8361 + t3577*t8366 + t8368 + t4453*t8373) + 1.142857*t5547*t8381 + 1.142857*t3142*(-1.*t2653*t8366 - 1.*t4067*t8373 + t8387 + t8388))*var2[7] - 0.5*(1.142857*t8076*t8357 + 1.142857*t7938*t8381 + 1.142857*t3142*(t8387 + t8388 - 1.*t2653*t8400 - 1.*t4067*t8407) + 1.142857*t2077*(t8361 + t8368 + t3577*t8400 + t4453*t8407))*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[6]*(-0.5*(2.285714*t2077*t5547 + 2.285714*t3142*t5975)*var2[7] - 0.5*(2.285714*t2077*t7938 + 2.285714*t3142*t8076)*var2[8]);
  p_output1[7]=var2[6]*(-0.5*(1.142857*t5547*t8437 + 1.142857*t5975*t8443)*var2[7] - 0.5*(1.142857*(0. - 0.9063*t1002 - 0.06*Power(t1002,2) - 1.*t1002*t1286)*t2077 + 1.142857*t3142*t8437 + 1.142857*t7938*t8437 + 1.142857*t8076*t8443)*var2[8]);
  p_output1[8]=var2[6]*(0.03428571*t5975*var2[7] + 0.03428571*t8076*var2[8]);
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

#include "Ce1_vec_L7_J7_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L7_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

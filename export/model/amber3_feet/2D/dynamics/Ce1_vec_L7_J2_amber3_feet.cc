/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:56 GMT-08:00
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
  double t988;
  double t141;
  double t360;
  double t1021;
  double t1532;
  double t362;
  double t1249;
  double t1318;
  double t140;
  double t1541;
  double t1604;
  double t1807;
  double t134;
  double t2828;
  double t3142;
  double t3808;
  double t3924;
  double t4023;
  double t1434;
  double t2584;
  double t2659;
  double t4067;
  double t4273;
  double t4312;
  double t4650;
  double t4683;
  double t4729;
  double t4737;
  double t4742;
  double t4798;
  double t4918;
  double t5164;
  double t5068;
  double t5083;
  double t5091;
  double t4317;
  double t4346;
  double t4490;
  double t4501;
  double t4513;
  double t4538;
  double t4747;
  double t5055;
  double t5107;
  double t5148;
  double t5371;
  double t5392;
  double t6239;
  double t6309;
  double t6339;
  double t6476;
  double t6518;
  double t6580;
  double t6617;
  double t6095;
  double t6235;
  double t6524;
  double t6663;
  double t6688;
  double t6754;
  double t6799;
  double t6940;
  double t6963;
  double t6964;
  double t7061;
  double t4466;
  double t4491;
  double t4950;
  double t4960;
  double t5525;
  double t5526;
  double t5657;
  double t5890;
  double t8082;
  double t8127;
  double t8135;
  double t8171;
  double t8173;
  double t8181;
  double t8187;
  double t8188;
  double t8189;
  double t8158;
  double t8160;
  double t8163;
  double t8169;
  double t8190;
  double t8196;
  double t8201;
  double t8203;
  double t8204;
  double t8210;
  double t8226;
  double t8227;
  double t8228;
  double t8230;
  double t8232;
  double t8233;
  double t8157;
  double t8197;
  double t8211;
  double t8221;
  double t8222;
  double t8234;
  double t8235;
  double t8242;
  double t8243;
  double t8250;
  double t8259;
  double t8260;
  double t8262;
  double t8263;
  double t8256;
  double t8257;
  double t8284;
  double t8287;
  double t8291;
  double t8293;
  double t8294;
  double t8295;
  double t8301;
  double t8302;
  double t8303;
  double t8288;
  double t8296;
  double t8298;
  double t8282;
  double t8283;
  double t8300;
  double t8326;
  double t8327;
  double t8329;
  double t8330;
  double t8312;
  double t8328;
  double t8331;
  double t8332;
  double t8334;
  double t8335;
  double t8337;
  double t8318;
  double t8320;
  double t8351;
  double t8352;
  double t8353;
  double t8354;
  double t8356;
  double t8357;
  double t8358;
  double t8359;
  double t8369;
  double t8370;
  double t8371;
  double t8374;
  double t8378;
  double t8380;
  double t8385;
  double t8406;
  double t8407;
  double t8408;
  double t8409;
  double t8411;
  double t8412;
  double t8413;
  double t8417;
  double t8418;
  double t8426;
  double t8427;
  t988 = Cos(var1[7]);
  t141 = Cos(var1[8]);
  t360 = Sin(var1[7]);
  t1021 = Sin(var1[8]);
  t1532 = Cos(var1[6]);
  t362 = -1.*t141*t360;
  t1249 = -1.*t988*t1021;
  t1318 = t362 + t1249;
  t140 = Sin(var1[6]);
  t1541 = t988*t141;
  t1604 = -1.*t360*t1021;
  t1807 = t1541 + t1604;
  t134 = Sin(var1[2]);
  t2828 = Cos(var1[2]);
  t3142 = t1532*t1318;
  t3808 = -1.*t140*t1807;
  t3924 = t3142 + t3808;
  t4023 = t2828*t3924;
  t1434 = -1.*t140*t1318;
  t2584 = -1.*t1532*t1807;
  t2659 = t1434 + t2584;
  t4067 = t140*t1318;
  t4273 = t1532*t1807;
  t4312 = t4067 + t4273;
  t4650 = t141*t360;
  t4683 = t988*t1021;
  t4729 = t4650 + t4683;
  t4737 = -1.*t140*t4729;
  t4742 = t4737 + t4273;
  t4798 = -1.*t1532*t4729;
  t4918 = t4798 + t3808;
  t5164 = t2828*t4742;
  t5068 = t1532*t4729;
  t5083 = t140*t1807;
  t5091 = t5068 + t5083;
  t4317 = -1.*t134*t4312;
  t4346 = t4317 + t4023;
  t4490 = -1.*t134*t3924;
  t4501 = t2828*t4312;
  t4513 = t134*t3924;
  t4538 = t4501 + t4513;
  t4747 = -1.*t134*t4742;
  t5055 = t134*t4742;
  t5107 = t2828*t5091;
  t5148 = t5055 + t5107;
  t5371 = -1.*t134*t5091;
  t5392 = t5164 + t5371;
  t6239 = -1.*t988*t141;
  t6309 = t360*t1021;
  t6339 = t6239 + t6309;
  t6476 = t1532*t6339;
  t6518 = t1434 + t6476;
  t6580 = t140*t6339;
  t6617 = t3142 + t6580;
  t6095 = 1.142857*t4346*t5148;
  t6235 = 1.142857*t4538*t5392;
  t6524 = t134*t6518;
  t6663 = t2828*t6617;
  t6688 = t6524 + t6663;
  t6754 = 1.142857*t4346*t6688;
  t6799 = t2828*t6518;
  t6940 = -1.*t134*t6617;
  t6963 = t6799 + t6940;
  t6964 = 1.142857*t4538*t6963;
  t7061 = t6095 + t6235 + t6754 + t6964;
  t4466 = t2828*t2659;
  t4491 = t4466 + t4490;
  t4950 = t2828*t4918;
  t4960 = t4747 + t4950;
  t5525 = -1.*t2828*t4312;
  t5526 = t5525 + t4490;
  t5657 = -1.*t2828*t5091;
  t5890 = t4747 + t5657;
  t8082 = 2.285714*t4346*t5392;
  t8127 = 2.285714*t4346*t6963;
  t8135 = t8082 + t8127;
  t8171 = -1.*t141;
  t8173 = 1. + t8171;
  t8181 = -1.3127*t8173;
  t8187 = -1.3127*t141;
  t8188 = -0.06*t1021;
  t8189 = t8181 + t8187 + t8188;
  t8158 = -1.*t988;
  t8160 = 1. + t8158;
  t8163 = -0.9063*t8160;
  t8169 = -0.06*t141*t360;
  t8190 = t988*t8189;
  t8196 = t8163 + t8169 + t8190;
  t8201 = 0.06*t988*t141;
  t8203 = 0.9063*t360;
  t8204 = t360*t8189;
  t8210 = t8201 + t8203 + t8204;
  t8226 = -1.*t1532;
  t8227 = 1. + t8226;
  t8228 = -0.4999*t8227;
  t8230 = t1532*t8196;
  t8232 = -1.*t140*t8210;
  t8233 = t8228 + t8230 + t8232;
  t8157 = 0.4999*t140;
  t8197 = t140*t8196;
  t8211 = t1532*t8210;
  t8221 = t8157 + t8197 + t8211;
  t8222 = -1.*t8221*t4312;
  t8234 = -1.*t8233*t3924;
  t8235 = t8222 + t8234;
  t8242 = t8233*t4742;
  t8243 = t8221*t5091;
  t8250 = t8242 + t8243;
  t8259 = -0.4999*t140;
  t8260 = -1.*t140*t8196;
  t8262 = -1.*t1532*t8210;
  t8263 = t8259 + t8260 + t8262;
  t8256 = 0.4999*t1532;
  t8257 = t8256 + t8230 + t8232;
  t8284 = 0.9063*t988;
  t8287 = t8284 + t8169 + t8190;
  t8291 = -0.06*t988*t141;
  t8293 = -0.9063*t360;
  t8294 = -1.*t360*t8189;
  t8295 = t8291 + t8293 + t8294;
  t8301 = t1532*t8287;
  t8302 = t140*t8295;
  t8303 = t8301 + t8302;
  t8288 = -1.*t140*t8287;
  t8296 = t1532*t8295;
  t8298 = t8288 + t8296;
  t8282 = 1.142857*t4346*t8235;
  t8283 = t8221*t4312;
  t8300 = t8233*t3924;
  t8326 = -0.06*t988*t1021;
  t8327 = t8169 + t8326;
  t8329 = 0.06*t360*t1021;
  t8330 = t8291 + t8329;
  t8312 = 1.142857*t8250*t6963;
  t8328 = -1.*t140*t8327;
  t8331 = t1532*t8330;
  t8332 = t8328 + t8331;
  t8334 = t1532*t8327;
  t8335 = t140*t8330;
  t8337 = t8334 + t8335;
  t8318 = -1.*t8233*t6518;
  t8320 = -1.*t8221*t6617;
  t8351 = t8210*t4729;
  t8352 = 0.4999*t1807;
  t8353 = t8196*t1807;
  t8354 = t8351 + t8352 + t8353;
  t8356 = -1.*t8196*t1318;
  t8357 = 0.4999*t4729;
  t8358 = -1.*t8210*t1807;
  t8359 = t8356 + t8357 + t8358;
  t8369 = 1.142857*t8359*t4346;
  t8370 = 0.4999*t1318;
  t8371 = t8196*t1318;
  t8374 = t8210*t1807;
  t8378 = -1.*t8210*t1318;
  t8380 = -1.*t8196*t6339;
  t8385 = 1.142857*t8354*t6963;
  t8406 = 0.9063*t141;
  t8407 = t141*t8189;
  t8408 = 0.06*t141*t1021;
  t8409 = t8406 + t8407 + t8408;
  t8411 = Power(t141,2);
  t8412 = -0.06*t8411;
  t8413 = 0.9063*t1021;
  t8417 = t8189*t1021;
  t8418 = t8412 + t8413 + t8417;
  t8426 = 1.142857*t8418*t4346;
  t8427 = 1.142857*t8409*t6963;
  p_output1[0]=var2[1]*(-0.5*(1.142857*Power(t4346,2) + 1.142857*Power(t5392,2) + 1.142857*t4538*t5526 + 1.142857*t5148*t5890)*var2[2] - 0.5*(1.142857*(t134*t2659 + t4023)*t4346 + 1.142857*t4491*t4538 + 1.142857*t4960*t5148 + 1.142857*(t134*t4918 + t5164)*t5392)*var2[6] - 0.5*t7061*var2[7] - 0.5*t7061*var2[8]);
  p_output1[1]=var2[1]*(-0.5*(2.285714*t4346*t5526 + 2.285714*t5392*t5890)*var2[2] - 0.5*(2.285714*t4346*t4491 + 2.285714*t4960*t5392)*var2[6] - 0.5*t8135*var2[7] - 0.5*t8135*var2[8]);
  p_output1[2]=var2[1]*(-0.5*(1.142857*t5890*t8235 + 1.142857*t5526*t8250)*var2[2] - 0.5*(1.142857*t4960*t8235 + 1.142857*t4491*t8250 + 1.142857*t5392*(-1.*t3924*t8221 - 1.*t2659*t8233 - 1.*t4312*t8257 - 1.*t3924*t8263) + 1.142857*t4346*(t4742*t8221 + t4918*t8233 + t5091*t8257 + t4742*t8263))*var2[6] - 0.5*(t8282 + 1.142857*t4346*(t8283 + t4742*t8298 + t8300 + t5091*t8303) + t8312 + 1.142857*t5392*(-1.*t3924*t8298 - 1.*t4312*t8303 + t8318 + t8320))*var2[7] - 0.5*(t8282 + t8312 + 1.142857*t5392*(t8318 + t8320 - 1.*t3924*t8332 - 1.*t4312*t8337) + 1.142857*t4346*(t8283 + t8300 + t4742*t8332 + t5091*t8337))*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[1]*(-0.5*(1.142857*t5526*t8354 + 1.142857*t5890*t8359)*var2[2] - 0.5*(1.142857*t4491*t8354 + 1.142857*t4960*t8359)*var2[6] - 0.5*(t8369 + 1.142857*t4346*(t4729*t8287 + t1807*t8295 + t8370 + t8371 + t8374) + 1.142857*t5392*(-1.*t1807*t8287 - 1.*t1318*t8295 + t8352 + t8378 + t8380) + t8385)*var2[7] - 0.5*(t8369 + 1.142857*t4346*(t4729*t8327 + t1807*t8330 + t8370 + t8371 + t8374) + 1.142857*t5392*(-1.*t1807*t8327 - 1.*t1318*t8330 + t8352 + t8378 + t8380) + t8385)*var2[8]);
  p_output1[7]=var2[1]*(-0.5*(1.142857*t5526*t8409 + 1.142857*t5890*t8418)*var2[2] - 0.5*(1.142857*t4491*t8409 + 1.142857*t4960*t8418)*var2[6] - 0.5*(t8426 + t8427)*var2[7] - 0.5*(1.142857*t4346*(0. - 0.9063*t1021 - 0.06*Power(t1021,2) - 1.*t1021*t8189) + 1.142857*t5392*t8409 + t8426 + t8427)*var2[8]);
  p_output1[8]=var2[1]*(0.03428571*t5890*var2[2] + 0.03428571*t4960*var2[6] + 0.03428571*t4346*var2[7] + 0.03428571*t4346*var2[8]);
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

#include "Ce1_vec_L7_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L7_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

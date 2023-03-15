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
  double t2369;
  double t1193;
  double t1920;
  double t3117;
  double t3653;
  double t2246;
  double t3195;
  double t3229;
  double t749;
  double t3808;
  double t3833;
  double t3847;
  double t3985;
  double t126;
  double t4023;
  double t4117;
  double t4121;
  double t4453;
  double t4650;
  double t4747;
  double t4875;
  double t4909;
  double t4912;
  double t4346;
  double t4465;
  double t4312;
  double t4466;
  double t4513;
  double t4538;
  double t5107;
  double t5148;
  double t5164;
  double t5330;
  double t5392;
  double t5407;
  double t4918;
  double t3631;
  double t6272;
  double t6339;
  double t6464;
  double t6239;
  double t6524;
  double t6531;
  double t6663;
  double t6799;
  double t6910;
  double t6963;
  double t6964;
  double t7061;
  double t7277;
  double t3850;
  double t3862;
  double t3924;
  double t4317;
  double t5546;
  double t5550;
  double t5045;
  double t5055;
  double t5083;
  double t5091;
  double t5746;
  double t5890;
  double t7958;
  double t8012;
  double t8187;
  double t8188;
  double t8189;
  double t8190;
  double t8195;
  double t8196;
  double t8197;
  double t8200;
  double t8223;
  double t8225;
  double t8226;
  double t8227;
  double t8228;
  double t8229;
  double t8217;
  double t8219;
  double t8221;
  double t8222;
  double t8230;
  double t8231;
  double t8233;
  double t8234;
  double t8235;
  double t8236;
  double t8240;
  double t8241;
  double t8242;
  double t8243;
  double t8246;
  double t8248;
  double t8211;
  double t8232;
  double t8237;
  double t8238;
  double t8239;
  double t8249;
  double t8250;
  double t8252;
  double t8253;
  double t8254;
  double t8263;
  double t8264;
  double t8265;
  double t8266;
  double t8260;
  double t8261;
  double t8284;
  double t8285;
  double t8287;
  double t8288;
  double t8289;
  double t8290;
  double t8295;
  double t8296;
  double t8297;
  double t8286;
  double t8291;
  double t8292;
  double t8282;
  double t8283;
  double t8294;
  double t8313;
  double t8314;
  double t8316;
  double t8317;
  double t8301;
  double t8315;
  double t8318;
  double t8319;
  double t8321;
  double t8322;
  double t8323;
  double t8304;
  double t8305;
  double t8335;
  double t8336;
  double t8337;
  double t8338;
  double t8340;
  double t8341;
  double t8342;
  double t8343;
  double t8351;
  double t8352;
  double t8353;
  double t8356;
  double t8360;
  double t8362;
  double t8365;
  double t8380;
  double t8381;
  double t8384;
  double t8385;
  double t8387;
  double t8388;
  double t8389;
  double t8390;
  double t8391;
  double t8403;
  double t8404;
  t2369 = Cos(var1[7]);
  t1193 = Cos(var1[8]);
  t1920 = Sin(var1[7]);
  t3117 = Sin(var1[8]);
  t3653 = Cos(var1[6]);
  t2246 = -1.*t1193*t1920;
  t3195 = -1.*t2369*t3117;
  t3229 = t2246 + t3195;
  t749 = Sin(var1[6]);
  t3808 = t2369*t1193;
  t3833 = -1.*t1920*t3117;
  t3847 = t3808 + t3833;
  t3985 = Cos(var1[2]);
  t126 = Sin(var1[2]);
  t4023 = t3653*t3229;
  t4117 = -1.*t749*t3847;
  t4121 = t4023 + t4117;
  t4453 = t3653*t3847;
  t4650 = t1193*t1920;
  t4747 = t2369*t3117;
  t4875 = t4650 + t4747;
  t4909 = -1.*t749*t4875;
  t4912 = t4909 + t4453;
  t4346 = t749*t3229;
  t4465 = t4346 + t4453;
  t4312 = t3985*t4121;
  t4466 = t3985*t4465;
  t4513 = t126*t4121;
  t4538 = t4466 + t4513;
  t5107 = t126*t4912;
  t5148 = t3653*t4875;
  t5164 = t749*t3847;
  t5330 = t5148 + t5164;
  t5392 = t3985*t5330;
  t5407 = t5107 + t5392;
  t4918 = t3985*t4912;
  t3631 = -1.*t749*t3229;
  t6272 = -1.*t2369*t1193;
  t6339 = t1920*t3117;
  t6464 = t6272 + t6339;
  t6239 = 2.285714*t4538*t5407;
  t6524 = t3653*t6464;
  t6531 = t3631 + t6524;
  t6663 = t126*t6531;
  t6799 = t749*t6464;
  t6910 = t4023 + t6799;
  t6963 = t3985*t6910;
  t6964 = t6663 + t6963;
  t7061 = 2.285714*t4538*t6964;
  t7277 = t6239 + t7061;
  t3850 = -1.*t3653*t3847;
  t3862 = t3631 + t3850;
  t3924 = t126*t3862;
  t4317 = t3924 + t4312;
  t5546 = -1.*t126*t4465;
  t5550 = t5546 + t4312;
  t5045 = -1.*t3653*t4875;
  t5055 = t5045 + t4117;
  t5083 = t126*t5055;
  t5091 = t4918 + t5083;
  t5746 = -1.*t126*t5330;
  t5890 = t4918 + t5746;
  t7958 = -1.*t126*t4121;
  t8012 = -1.*t126*t4912;
  t8187 = 1.142857*t5550*t5407;
  t8188 = 1.142857*t4538*t5890;
  t8189 = 1.142857*t5550*t6964;
  t8190 = t3985*t6531;
  t8195 = -1.*t126*t6910;
  t8196 = t8190 + t8195;
  t8197 = 1.142857*t4538*t8196;
  t8200 = t8187 + t8188 + t8189 + t8197;
  t8223 = -1.*t1193;
  t8225 = 1. + t8223;
  t8226 = -1.3127*t8225;
  t8227 = -1.3127*t1193;
  t8228 = -0.06*t3117;
  t8229 = t8226 + t8227 + t8228;
  t8217 = -1.*t2369;
  t8219 = 1. + t8217;
  t8221 = -0.9063*t8219;
  t8222 = -0.06*t1193*t1920;
  t8230 = t2369*t8229;
  t8231 = t8221 + t8222 + t8230;
  t8233 = 0.06*t2369*t1193;
  t8234 = 0.9063*t1920;
  t8235 = t1920*t8229;
  t8236 = t8233 + t8234 + t8235;
  t8240 = -1.*t3653;
  t8241 = 1. + t8240;
  t8242 = -0.4999*t8241;
  t8243 = t3653*t8231;
  t8246 = -1.*t749*t8236;
  t8248 = t8242 + t8243 + t8246;
  t8211 = 0.4999*t749;
  t8232 = t749*t8231;
  t8237 = t3653*t8236;
  t8238 = t8211 + t8232 + t8237;
  t8239 = -1.*t8238*t4465;
  t8249 = -1.*t8248*t4121;
  t8250 = t8239 + t8249;
  t8252 = t8248*t4912;
  t8253 = t8238*t5330;
  t8254 = t8252 + t8253;
  t8263 = -0.4999*t749;
  t8264 = -1.*t749*t8231;
  t8265 = -1.*t3653*t8236;
  t8266 = t8263 + t8264 + t8265;
  t8260 = 0.4999*t3653;
  t8261 = t8260 + t8243 + t8246;
  t8284 = 0.9063*t2369;
  t8285 = t8284 + t8222 + t8230;
  t8287 = -0.06*t2369*t1193;
  t8288 = -0.9063*t1920;
  t8289 = -1.*t1920*t8229;
  t8290 = t8287 + t8288 + t8289;
  t8295 = t3653*t8285;
  t8296 = t749*t8290;
  t8297 = t8295 + t8296;
  t8286 = -1.*t749*t8285;
  t8291 = t3653*t8290;
  t8292 = t8286 + t8291;
  t8282 = 1.142857*t4538*t8250;
  t8283 = t8238*t4465;
  t8294 = t8248*t4121;
  t8313 = -0.06*t2369*t3117;
  t8314 = t8222 + t8313;
  t8316 = 0.06*t1920*t3117;
  t8317 = t8287 + t8316;
  t8301 = 1.142857*t8254*t6964;
  t8315 = -1.*t749*t8314;
  t8318 = t3653*t8317;
  t8319 = t8315 + t8318;
  t8321 = t3653*t8314;
  t8322 = t749*t8317;
  t8323 = t8321 + t8322;
  t8304 = -1.*t8248*t6531;
  t8305 = -1.*t8238*t6910;
  t8335 = t8236*t4875;
  t8336 = 0.4999*t3847;
  t8337 = t8231*t3847;
  t8338 = t8335 + t8336 + t8337;
  t8340 = -1.*t8231*t3229;
  t8341 = 0.4999*t4875;
  t8342 = -1.*t8236*t3847;
  t8343 = t8340 + t8341 + t8342;
  t8351 = 1.142857*t8343*t4538;
  t8352 = 0.4999*t3229;
  t8353 = t8231*t3229;
  t8356 = t8236*t3847;
  t8360 = -1.*t8236*t3229;
  t8362 = -1.*t8231*t6464;
  t8365 = 1.142857*t8338*t6964;
  t8380 = 0.9063*t1193;
  t8381 = t1193*t8229;
  t8384 = 0.06*t1193*t3117;
  t8385 = t8380 + t8381 + t8384;
  t8387 = Power(t1193,2);
  t8388 = -0.06*t8387;
  t8389 = 0.9063*t3117;
  t8390 = t8229*t3117;
  t8391 = t8388 + t8389 + t8390;
  t8403 = 1.142857*t8391*t4538;
  t8404 = 1.142857*t8385*t6964;
  p_output1[0]=var2[0]*(-0.5*(2.285714*t4538*t5550 + 2.285714*t5407*t5890)*var2[2] - 0.5*(2.285714*t4317*t4538 + 2.285714*t5091*t5407)*var2[6] - 0.5*t7277*var2[7] - 0.5*t7277*var2[8]);
  p_output1[1]=var2[0]*(-0.5*(1.142857*Power(t5550,2) + 1.142857*Power(t5890,2) + 1.142857*t4538*(-1.*t3985*t4465 + t7958) + 1.142857*t5407*(-1.*t3985*t5330 + t8012))*var2[2] - 0.5*(1.142857*t4317*t5550 + 1.142857*t5091*t5890 + 1.142857*t4538*(t3862*t3985 + t7958) + 1.142857*t5407*(t3985*t5055 + t8012))*var2[6] - 0.5*t8200*var2[7] - 0.5*t8200*var2[8]);
  p_output1[2]=var2[0]*(-0.5*(1.142857*t5890*t8250 + 1.142857*t5550*t8254)*var2[2] - 0.5*(1.142857*t5091*t8250 + 1.142857*t4317*t8254 + 1.142857*t5407*(-1.*t4121*t8238 - 1.*t3862*t8248 - 1.*t4465*t8261 - 1.*t4121*t8266) + 1.142857*t4538*(t4912*t8238 + t5055*t8248 + t5330*t8261 + t4912*t8266))*var2[6] - 0.5*(t8282 + 1.142857*t4538*(t8283 + t4912*t8292 + t8294 + t5330*t8297) + t8301 + 1.142857*t5407*(-1.*t4121*t8292 - 1.*t4465*t8297 + t8304 + t8305))*var2[7] - 0.5*(t8282 + t8301 + 1.142857*t5407*(t8304 + t8305 - 1.*t4121*t8319 - 1.*t4465*t8323) + 1.142857*t4538*(t8283 + t8294 + t4912*t8319 + t5330*t8323))*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[0]*(-0.5*(1.142857*t5550*t8338 + 1.142857*t5890*t8343)*var2[2] - 0.5*(1.142857*t4317*t8338 + 1.142857*t5091*t8343)*var2[6] - 0.5*(t8351 + 1.142857*t4538*(t4875*t8285 + t3847*t8290 + t8352 + t8353 + t8356) + 1.142857*t5407*(-1.*t3847*t8285 - 1.*t3229*t8290 + t8336 + t8360 + t8362) + t8365)*var2[7] - 0.5*(t8351 + 1.142857*t4538*(t4875*t8314 + t3847*t8317 + t8352 + t8353 + t8356) + 1.142857*t5407*(-1.*t3847*t8314 - 1.*t3229*t8317 + t8336 + t8360 + t8362) + t8365)*var2[8]);
  p_output1[7]=var2[0]*(-0.5*(1.142857*t5550*t8385 + 1.142857*t5890*t8391)*var2[2] - 0.5*(1.142857*t4317*t8385 + 1.142857*t5091*t8391)*var2[6] - 0.5*(t8403 + t8404)*var2[7] - 0.5*(1.142857*t4538*(0. - 0.9063*t3117 - 0.06*Power(t3117,2) - 1.*t3117*t8229) + 1.142857*t5407*t8385 + t8403 + t8404)*var2[8]);
  p_output1[8]=var2[0]*(0.03428571*t5890*var2[2] + 0.03428571*t5091*var2[6] + 0.03428571*t4538*var2[7] + 0.03428571*t4538*var2[8]);
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

#include "Ce1_vec_L7_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L7_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

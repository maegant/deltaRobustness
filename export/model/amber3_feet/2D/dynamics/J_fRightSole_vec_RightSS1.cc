/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:56 GMT-08:00
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
  double t331;
  double t175;
  double t226;
  double t403;
  double t523;
  double t275;
  double t417;
  double t434;
  double t62;
  double t560;
  double t584;
  double t641;
  double t766;
  double t675;
  double t25;
  double t865;
  double t869;
  double t873;
  double t778;
  double t794;
  double t835;
  double t844;
  double t903;
  double t920;
  double t972;
  double t503;
  double t724;
  double t1186;
  double t1493;
  double t1497;
  double t1509;
  double t1420;
  double t1431;
  double t1454;
  double t1466;
  double t1540;
  double t1554;
  double t1559;
  double t1582;
  double t1603;
  double t1635;
  double t1639;
  double t1692;
  double t1701;
  double t1017;
  double t1088;
  double t1093;
  double t1206;
  double t1210;
  double t1879;
  double t1958;
  double t1258;
  double t1303;
  double t742;
  double t863;
  double t2110;
  double t2171;
  double t2203;
  double t2226;
  double t2231;
  double t2240;
  double t1095;
  double t1141;
  double t2343;
  double t2374;
  double t2380;
  double t2391;
  double t2404;
  double t2436;
  double t2321;
  double t2333;
  double t2334;
  double t2337;
  double t2441;
  double t2503;
  double t2511;
  double t2514;
  double t2566;
  double t2580;
  double t2585;
  double t2587;
  double t2757;
  double t2776;
  double t2791;
  double t2808;
  double t2826;
  double t2827;
  double t2832;
  double t2851;
  double t2261;
  double t2264;
  double t2286;
  double t2615;
  double t2629;
  double t2699;
  double t3063;
  double t3069;
  double t3088;
  double t3103;
  double t3118;
  double t3123;
  double t3201;
  double t3222;
  double t3240;
  double t3079;
  double t3124;
  double t3125;
  double t3058;
  double t3162;
  double t3413;
  double t3414;
  double t3423;
  double t3442;
  double t3489;
  double t3507;
  double t3523;
  double t3526;
  double t3506;
  double t3540;
  double t3542;
  double t3549;
  double t3555;
  double t3560;
  double t3321;
  double t3346;
  double t3745;
  double t3755;
  double t3790;
  double t3884;
  double t3933;
  double t3947;
  double t4297;
  double t4305;
  double t4414;
  t331 = Cos(var1[7]);
  t175 = Cos(var1[8]);
  t226 = Sin(var1[7]);
  t403 = Sin(var1[8]);
  t523 = Cos(var1[6]);
  t275 = -1.*t175*t226;
  t417 = -1.*t331*t403;
  t434 = t275 + t417;
  t62 = Sin(var1[6]);
  t560 = t331*t175;
  t584 = -1.*t226*t403;
  t641 = t560 + t584;
  t766 = Cos(var1[2]);
  t675 = t523*t641;
  t25 = Sin(var1[2]);
  t865 = t175*t226;
  t869 = t331*t403;
  t873 = t865 + t869;
  t778 = t523*t434;
  t794 = -1.*t62*t641;
  t835 = t778 + t794;
  t844 = t766*t835;
  t903 = -1.*t62*t873;
  t920 = t903 + t675;
  t972 = t766*t920;
  t503 = t62*t434;
  t724 = t503 + t675;
  t1186 = -1.*t62*t434;
  t1493 = -1.*t331*t175;
  t1497 = t226*t403;
  t1509 = t1493 + t1497;
  t1420 = t766*t724;
  t1431 = t25*t835;
  t1454 = t1420 + t1431;
  t1466 = var2[1]*t1454;
  t1540 = t523*t1509;
  t1554 = t1186 + t1540;
  t1559 = t25*t1554;
  t1582 = t62*t1509;
  t1603 = t778 + t1582;
  t1635 = t766*t1603;
  t1639 = t1559 + t1635;
  t1692 = var2[0]*t1639;
  t1701 = t1466 + t1692;
  t1017 = t523*t873;
  t1088 = t62*t641;
  t1093 = t1017 + t1088;
  t1206 = -1.*t523*t641;
  t1210 = t1186 + t1206;
  t1879 = -1.*t25*t835;
  t1958 = -1.*t25*t920;
  t1258 = -1.*t523*t873;
  t1303 = t1258 + t794;
  t742 = -1.*t25*t724;
  t863 = t742 + t844;
  t2110 = var2[1]*t863;
  t2171 = t766*t1554;
  t2203 = -1.*t25*t1603;
  t2226 = t2171 + t2203;
  t2231 = var2[0]*t2226;
  t2240 = t2110 + t2231;
  t1095 = -1.*t25*t1093;
  t1141 = t972 + t1095;
  t2343 = -1.*t175;
  t2374 = 1. + t2343;
  t2380 = -1.3127*t2374;
  t2391 = -1.3127*t175;
  t2404 = -0.06*t403;
  t2436 = t2380 + t2391 + t2404;
  t2321 = -1.*t331;
  t2333 = 1. + t2321;
  t2334 = -0.9063*t2333;
  t2337 = -0.06*t175*t226;
  t2441 = t331*t2436;
  t2503 = t2334 + t2337 + t2441;
  t2511 = t523*t2503;
  t2514 = 0.06*t331*t175;
  t2566 = 0.9063*t226;
  t2580 = t226*t2436;
  t2585 = t2514 + t2566 + t2580;
  t2587 = -1.*t62*t2585;
  t2757 = -0.4999*t62;
  t2776 = -1.*t62*t2503;
  t2791 = -1.*t523*t2585;
  t2808 = t2757 + t2776 + t2791;
  t2826 = 0.4999*t62;
  t2827 = t62*t2503;
  t2832 = t523*t2585;
  t2851 = t2826 + t2827 + t2832;
  t2261 = -1.*t523;
  t2264 = 1. + t2261;
  t2286 = -0.4999*t2264;
  t2615 = t2286 + t2511 + t2587;
  t2629 = 0.4999*t523;
  t2699 = t2629 + t2511 + t2587;
  t3063 = 0.9063*t331;
  t3069 = t3063 + t2337 + t2441;
  t3088 = -0.06*t331*t175;
  t3103 = -0.9063*t226;
  t3118 = -1.*t226*t2436;
  t3123 = t3088 + t3103 + t3118;
  t3201 = t523*t3069;
  t3222 = t62*t3123;
  t3240 = t3201 + t3222;
  t3079 = -1.*t62*t3069;
  t3124 = t523*t3123;
  t3125 = t3079 + t3124;
  t3058 = t2851*t724;
  t3162 = t2615*t835;
  t3413 = -0.06*t175;
  t3414 = 0. + t3413;
  t3423 = t3414*t226;
  t3442 = -0.06*t331*t403;
  t3489 = t3423 + t3442;
  t3507 = t331*t3414;
  t3523 = 0.06*t226*t403;
  t3526 = t3507 + t3523;
  t3506 = -1.*t62*t3489;
  t3540 = t523*t3526;
  t3542 = t3506 + t3540;
  t3549 = t523*t3489;
  t3555 = t62*t3526;
  t3560 = t3549 + t3555;
  t3321 = -1.*t2615*t1554;
  t3346 = -1.*t2851*t1603;
  t3745 = 0.4999*t434;
  t3755 = t2503*t434;
  t3790 = t2585*t641;
  t3884 = -1.*t2585*t434;
  t3933 = 0.4999*t641;
  t3947 = -1.*t2503*t1509;
  t4297 = 0.9063*t175;
  t4305 = t175*t2436;
  t4414 = Power(t175,2);
  p_output1[0]=t863*var2[0] + t1141*var2[1];
  p_output1[1]=(t1210*t25 + t844)*var2[0] + (t1303*t25 + t972)*var2[1];
  p_output1[2]=t1701;
  p_output1[3]=t1701;
  p_output1[4]=t1454;
  p_output1[5]=t1093*t766 + t25*t920;
  p_output1[6]=(t1879 - 1.*t724*t766)*var2[0] + (t1958 - 1.*t1093*t766)*var2[1];
  p_output1[7]=(t1879 + t1210*t766)*var2[0] + (t1958 + t1303*t766)*var2[1];
  p_output1[8]=t2240;
  p_output1[9]=t2240;
  p_output1[10]=t863;
  p_output1[11]=t1141;
  p_output1[12]=(t1303*t2615 + t1093*t2699 + t2808*t920 + t2851*t920)*var2[0] + (-1.*t1210*t2615 - 1.*t2699*t724 - 1.*t2808*t835 - 1.*t2851*t835)*var2[1];
  p_output1[13]=(t3058 + t3162 + t1093*t3240 + t3125*t920)*var2[0] + (t3321 + t3346 - 1.*t3240*t724 - 1.*t3125*t835)*var2[1];
  p_output1[14]=(t3058 + t3162 + t1093*t3560 + t3542*t920)*var2[0] + (t3321 + t3346 - 1.*t3560*t724 - 1.*t3542*t835)*var2[1];
  p_output1[15]=t1093*t2851 + t2615*t920;
  p_output1[16]=-1.*t2851*t724 - 1.*t2615*t835;
  p_output1[17]=1.;
  p_output1[18]=(t3745 + t3755 + t3790 + t3123*t641 + t3069*t873)*var2[0] + (t3884 + t3933 + t3947 - 1.*t3123*t434 - 1.*t3069*t641)*var2[1];
  p_output1[19]=(t3745 + t3755 + t3790 + t3526*t641 + t3489*t873)*var2[0] + (t3884 + t3933 + t3947 - 1.*t3526*t434 - 1.*t3489*t641)*var2[1];
  p_output1[20]=t3933 + t2503*t641 + t2585*t873;
  p_output1[21]=-1.*t2503*t434 - 1.*t2585*t641 + 0.4999*t873;
  p_output1[22]=1.;
  p_output1[23]=(t175*t3414 - 0.9063*t403 - 1.*t2436*t403 - 0.06*Power(t403,2) + 0.06*t4414)*var2[0] + (0.12*t175*t403 + t3414*t403 + t4297 + t4305)*var2[1];
  p_output1[24]=0.06*t175*t403 + t4297 + t4305;
  p_output1[25]=0.9063*t403 + t2436*t403 - 0.06*t4414;
  p_output1[26]=1.;
  p_output1[27]=-0.06;
  p_output1[28]=1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 29, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightSole_vec_RightSS1.hh"

namespace RightSS1
{

void J_fRightSole_vec_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:11 GMT-08:00
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
  double t1292;
  double t557;
  double t580;
  double t1562;
  double t1871;
  double t986;
  double t1601;
  double t1764;
  double t455;
  double t1984;
  double t2055;
  double t2263;
  double t2985;
  double t1863;
  double t2288;
  double t2302;
  double t193;
  double t2994;
  double t3051;
  double t3073;
  double t3211;
  double t3799;
  double t3979;
  double t4016;
  double t3285;
  double t4838;
  double t4853;
  double t4956;
  double t4970;
  double t5024;
  double t5032;
  double t4665;
  double t4715;
  double t4787;
  double t4790;
  double t5034;
  double t5046;
  double t5088;
  double t5091;
  double t5099;
  double t5114;
  double t5202;
  double t5203;
  double t5208;
  double t5214;
  double t5223;
  double t5527;
  double t5532;
  double t5289;
  double t5322;
  double t5346;
  double t5348;
  double t5944;
  double t6038;
  double t6103;
  double t6107;
  double t6113;
  double t6114;
  double t5511;
  double t5513;
  double t5522;
  double t5543;
  double t5705;
  double t5709;
  double t5721;
  double t6472;
  double t6482;
  double t6484;
  double t6512;
  double t6531;
  double t6537;
  double t6543;
  double t5921;
  double t5939;
  double t6583;
  double t6592;
  double t6147;
  double t6207;
  double t6350;
  double t6688;
  double t6718;
  double t6719;
  double t6732;
  double t6739;
  double t6741;
  double t6532;
  double t6546;
  double t6548;
  double t6559;
  double t6561;
  double t6563;
  double t6566;
  double t6571;
  double t2640;
  double t3215;
  double t5669;
  double t5671;
  double t4641;
  double t5054;
  double t5154;
  double t5164;
  double t6976;
  double t5623;
  double t5660;
  double t6991;
  double t6938;
  double t6884;
  double t6894;
  double t6897;
  double t6352;
  double t6376;
  double t6389;
  double t6251;
  double t6265;
  double t6298;
  double t6968;
  double t6969;
  double t7134;
  double t7156;
  double t7161;
  double t7164;
  double t6777;
  double t6800;
  double t6831;
  double t6847;
  double t6867;
  double t6868;
  double t7171;
  double t7172;
  double t6995;
  double t7007;
  double t6596;
  t1292 = Cos(var1[7]);
  t557 = Cos(var1[8]);
  t580 = Sin(var1[7]);
  t1562 = Sin(var1[8]);
  t1871 = Cos(var1[6]);
  t986 = -1.*t557*t580;
  t1601 = -1.*t1292*t1562;
  t1764 = t986 + t1601;
  t455 = Sin(var1[6]);
  t1984 = t1292*t557;
  t2055 = -1.*t580*t1562;
  t2263 = t1984 + t2055;
  t2985 = Cos(var1[2]);
  t1863 = t455*t1764;
  t2288 = t1871*t2263;
  t2302 = t1863 + t2288;
  t193 = Sin(var1[2]);
  t2994 = t1871*t1764;
  t3051 = -1.*t455*t2263;
  t3073 = t2994 + t3051;
  t3211 = t2985*t3073;
  t3799 = -1.*t455*t1764;
  t3979 = -1.*t1871*t2263;
  t4016 = t3799 + t3979;
  t3285 = -1.*t193*t3073;
  t4838 = -1.*t557;
  t4853 = 1. + t4838;
  t4956 = -1.3127*t4853;
  t4970 = -1.3127*t557;
  t5024 = -0.06*t1562;
  t5032 = t4956 + t4970 + t5024;
  t4665 = -1.*t1292;
  t4715 = 1. + t4665;
  t4787 = -0.9063*t4715;
  t4790 = -0.06*t557*t580;
  t5034 = t1292*t5032;
  t5046 = t4787 + t4790 + t5034;
  t5088 = 0.06*t1292*t557;
  t5091 = 0.9063*t580;
  t5099 = t580*t5032;
  t5114 = t5088 + t5091 + t5099;
  t5202 = t557*t580;
  t5203 = t1292*t1562;
  t5208 = t5202 + t5203;
  t5214 = -1.*t455*t5208;
  t5223 = t5214 + t2288;
  t5527 = t1871*t5046;
  t5532 = -1.*t455*t5114;
  t5289 = 0.4999*t455;
  t5322 = t455*t5046;
  t5346 = t1871*t5114;
  t5348 = t5289 + t5322 + t5346;
  t5944 = 0.9063*t1292;
  t6038 = t5944 + t4790 + t5034;
  t6103 = -0.06*t1292*t557;
  t6107 = -0.9063*t580;
  t6113 = -1.*t580*t5032;
  t6114 = t6103 + t6107 + t6113;
  t5511 = -1.*t1871;
  t5513 = 1. + t5511;
  t5522 = -0.4999*t5513;
  t5543 = t5522 + t5527 + t5532;
  t5705 = t1871*t5208;
  t5709 = t455*t2263;
  t5721 = t5705 + t5709;
  t6472 = -1.*t1292*t557;
  t6482 = t580*t1562;
  t6484 = t6472 + t6482;
  t6512 = t1871*t6484;
  t6531 = t3799 + t6512;
  t6537 = t455*t6484;
  t6543 = t2994 + t6537;
  t5921 = 0.4999*t1764;
  t5939 = t5046*t1764;
  t6583 = -0.06*t557;
  t6592 = 0. + t6583;
  t6147 = t5114*t2263;
  t6207 = t5348*t2302;
  t6350 = t5543*t3073;
  t6688 = t6592*t580;
  t6718 = -0.06*t1292*t1562;
  t6719 = t6688 + t6718;
  t6732 = t1292*t6592;
  t6739 = 0.06*t580*t1562;
  t6741 = t6732 + t6739;
  t6532 = t193*t6531;
  t6546 = t2985*t6543;
  t6548 = t6532 + t6546;
  t6559 = var2[0]*t6548;
  t6561 = t2985*t6531;
  t6563 = -1.*t193*t6543;
  t6566 = t6561 + t6563;
  t6571 = var2[1]*t6566;
  t2640 = -1.*t193*t2302;
  t3215 = t2640 + t3211;
  t5669 = 0.4999*t1871;
  t5671 = t5669 + t5527 + t5532;
  t4641 = -0.4999*t455;
  t5054 = -1.*t455*t5046;
  t5154 = -1.*t1871*t5114;
  t5164 = t4641 + t5054 + t5154;
  t6976 = -1.*t193*t5223;
  t5623 = -1.*t1871*t5208;
  t5660 = t5623 + t3051;
  t6991 = t2985*t5223;
  t6938 = 0.4999*t2263;
  t6884 = t2985*t2302;
  t6894 = t193*t3073;
  t6897 = t6884 + t6894;
  t6352 = t1871*t6038;
  t6376 = t455*t6114;
  t6389 = t6352 + t6376;
  t6251 = -1.*t455*t6038;
  t6265 = t1871*t6114;
  t6298 = t6251 + t6265;
  t6968 = 0.9063*t557;
  t6969 = t557*t5032;
  t7134 = -1.*t5114*t1764;
  t7156 = -1.*t5046*t6484;
  t7161 = var2[1]*t3215;
  t7164 = var2[0]*t6897;
  t6777 = -1.*t455*t6719;
  t6800 = t1871*t6741;
  t6831 = t6777 + t6800;
  t6847 = t1871*t6719;
  t6867 = t455*t6741;
  t6868 = t6847 + t6867;
  t7171 = -1.*t5543*t6531;
  t7172 = -1.*t5348*t6543;
  t6995 = -1.*t193*t5721;
  t7007 = t6991 + t6995;
  t6596 = Power(t557,2);
  p_output1[0]=t3215*var2[0] + (-1.*t2302*t2985 + t3285)*var2[1];
  p_output1[1]=(t3211 + t193*t4016)*var2[0] + (t3285 + t2985*t4016)*var2[1] + (t5164*t5223 + t5223*t5348 + t5543*t5660 + t5671*t5721)*var2[2];
  p_output1[2]=t6559 + t6571 + (t6207 + t5223*t6298 + t6350 + t5721*t6389)*var2[2] + (t5921 + t5939 + t5208*t6038 + t2263*t6114 + t6147)*var2[6];
  p_output1[3]=t6559 + t6571 + (t6207 + t6350 + t5223*t6831 + t5721*t6868)*var2[2] + (t5921 + t5939 + t6147 + t5208*t6719 + t2263*t6741)*var2[6] + (-0.9063*t1562 - 0.06*Power(t1562,2) - 1.*t1562*t5032 + t557*t6592 + 0.06*t6596)*var2[7];
  p_output1[4]=t6897;
  p_output1[5]=t3215;
  p_output1[6]=t5223*t5543 + t5348*t5721;
  p_output1[7]=t2263*t5046 + t5114*t5208 + t6938;
  p_output1[8]=0.06*t1562*t557 + t6968 + t6969;
  p_output1[9]=t7007*var2[0] + (-1.*t2985*t5721 + t6976)*var2[1];
  p_output1[10]=(t193*t5660 + t6991)*var2[0] + (t2985*t5660 + t6976)*var2[1] + (-1.*t3073*t5164 - 1.*t3073*t5348 - 1.*t4016*t5543 - 1.*t2302*t5671)*var2[2];
  p_output1[11]=t7161 + t7164 + (-1.*t3073*t6298 - 1.*t2302*t6389 + t7171 + t7172)*var2[2] + (-1.*t2263*t6038 - 1.*t1764*t6114 + t6938 + t7134 + t7156)*var2[6];
  p_output1[12]=t7161 + t7164 + (-1.*t3073*t6831 - 1.*t2302*t6868 + t7171 + t7172)*var2[2] + (-1.*t2263*t6719 - 1.*t1764*t6741 + t6938 + t7134 + t7156)*var2[6] + (0.12*t1562*t557 + t1562*t6592 + t6968 + t6969)*var2[7];
  p_output1[13]=t193*t5223 + t2985*t5721;
  p_output1[14]=t7007;
  p_output1[15]=-1.*t2302*t5348 - 1.*t3073*t5543;
  p_output1[16]=-1.*t1764*t5046 - 1.*t2263*t5114 + 0.4999*t5208;
  p_output1[17]=0.9063*t1562 + t1562*t5032 - 0.06*t6596;
  p_output1[18]=-0.06;
  p_output1[19]=1.;
  p_output1[20]=1.;
  p_output1[21]=1.;
  p_output1[22]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightSole_RightSS2.hh"

namespace RightSS2
{

void J_dh_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

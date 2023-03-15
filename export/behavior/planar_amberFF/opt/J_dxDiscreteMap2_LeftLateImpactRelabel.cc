/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:49 GMT-08:00
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
  double t1339;
  double t66;
  double t596;
  double t1349;
  double t2971;
  double t2975;
  double t3019;
  double t1273;
  double t1670;
  double t1721;
  double t4014;
  double t4269;
  double t4304;
  double t4307;
  double t4357;
  double t3711;
  double t3845;
  double t3969;
  double t3047;
  double t4444;
  double t4455;
  double t4539;
  double t4747;
  double t4815;
  double t4886;
  double t4892;
  double t5005;
  double t5007;
  double t5136;
  double t5142;
  double t5196;
  double t5210;
  double t5220;
  double t5233;
  double t5307;
  double t5313;
  double t5346;
  double t5410;
  double t5459;
  double t5509;
  double t5571;
  double t5583;
  double t5644;
  double t5661;
  double t5672;
  double t5697;
  double t5725;
  double t5736;
  double t5741;
  double t5808;
  double t5820;
  double t2643;
  double t3974;
  double t3978;
  double t4003;
  double t3102;
  double t6474;
  double t6477;
  double t6525;
  double t6527;
  double t6553;
  double t6163;
  double t6167;
  double t6177;
  double t6555;
  double t6049;
  double t6137;
  double t6160;
  double t6564;
  double t6374;
  double t6376;
  double t6395;
  double t5861;
  double t4544;
  double t4944;
  double t4967;
  double t6447;
  double t6455;
  double t6470;
  double t6570;
  double t6162;
  double t6188;
  double t6202;
  double t6583;
  double t6590;
  double t6593;
  double t6402;
  double t6405;
  double t6407;
  double t6621;
  double t6636;
  double t5003;
  double t6473;
  double t6639;
  double t6642;
  double t6760;
  double t6768;
  double t6410;
  double t6620;
  double t6751;
  double t6755;
  t1339 = Cos(var2[2]);
  t66 = Cos(var2[3]);
  t596 = Sin(var2[2]);
  t1349 = Sin(var2[3]);
  t2971 = t1339*t66;
  t2975 = -1.*t596*t1349;
  t3019 = t2971 + t2975;
  t1273 = t66*t596;
  t1670 = t1339*t1349;
  t1721 = t1273 + t1670;
  t4014 = -1.*t66;
  t4269 = 1. + t4014;
  t4304 = -0.4999*t4269;
  t4307 = -0.6493*t66;
  t4357 = t4304 + t4307;
  t3711 = -1.*t66*t596;
  t3845 = -1.*t1339*t1349;
  t3969 = t3711 + t3845;
  t3047 = Power(t3019,2);
  t4444 = t4357*t1349;
  t4455 = 0.14939999999999998*t66*t1349;
  t4539 = t4444 + t4455;
  t4747 = t4357*t66;
  t4815 = Power(t1349,2);
  t4886 = -0.14939999999999998*t4815;
  t4892 = t4747 + t4886;
  t5005 = -1.*var1[6];
  t5007 = var3[3] + t5005;
  t5136 = -0.5118593399999999*t5007*t3969;
  t5142 = -1.*var1[0];
  t5196 = var3[0] + t5142;
  t5210 = 6.8522*t3969*t3019;
  t5220 = 6.8522*t1721*t3019;
  t5233 = t5210 + t5220;
  t5307 = t5196*t5233;
  t5313 = -1.*var1[1];
  t5346 = var3[1] + t5313;
  t5410 = Power(t3969,2);
  t5459 = 3.4261*t5410;
  t5509 = 3.4261*t3969*t1721;
  t5571 = 3.4261*t3047;
  t5583 = -1.*t1339*t66;
  t5644 = t596*t1349;
  t5661 = t5583 + t5644;
  t5672 = 3.4261*t3019*t5661;
  t5697 = t5459 + t5509 + t5571 + t5672;
  t5725 = t5346*t5697;
  t5736 = -1.*var1[2];
  t5741 = var3[2] + t5736;
  t5808 = 3.4261*t4539*t3019;
  t5820 = 3.4261*t3969*t4892;
  t2643 = Power(t1721,2);
  t3974 = -3.4261*t3969*t3019;
  t3978 = -3.4261*t1721*t3019;
  t4003 = t3974 + t3978;
  t3102 = -3.4261*t3047;
  t6474 = -0.5118593399999999*t5007*t5661;
  t6477 = 6.8522*t3969*t5661;
  t6525 = t5210 + t6477;
  t6527 = t5346*t6525;
  t6553 = t5196*t5697;
  t6163 = -1.*t4357*t1349;
  t6167 = -0.14939999999999998*t66*t1349;
  t6177 = t6163 + t6167;
  t6555 = 3.4261*t3969*t4539;
  t6049 = Power(t66,2);
  t6137 = 0.14939999999999998*t6049;
  t6160 = 0. + t4747 + t6137;
  t6564 = 3.4261*t5661*t4892;
  t6374 = 3.4261*t3969*t3019;
  t6376 = 3.4261*t1721*t3019;
  t6395 = t6374 + t6376;
  t5861 = t5808 + t5820;
  t4544 = -3.4261*t1721*t4539;
  t4944 = -3.4261*t3019*t4892;
  t4967 = t4544 + t4944;
  t6447 = -3.4261*t4539*t3019;
  t6455 = -3.4261*t3969*t4892;
  t6470 = t6447 + t6455;
  t6570 = t6555 + t6564;
  t6162 = 3.4261*t6160*t1721;
  t6188 = 3.4261*t6177*t3019;
  t6202 = t6162 + t6188 + t5808 + t5820;
  t6583 = 3.4261*t3969*t6177;
  t6590 = 3.4261*t6160*t3019;
  t6593 = t6583 + t6555 + t6590 + t6564;
  t6402 = 3.4261*t1721*t4539;
  t6405 = 3.4261*t3019*t4892;
  t6407 = t6402 + t6405;
  t6621 = Power(t4539,2);
  t6636 = Power(t4892,2);
  t5003 = 0.5118593399999999*t3019;
  t6473 = 0.5118593399999999*t3969;
  t6639 = 0.5118593399999999*t4892;
  t6642 = -0.0389 + t6639;
  t6760 = -0.5118593399999999*t5196*t3969;
  t6768 = -0.5118593399999999*t5346*t5661;
  t6410 = -0.5118593399999999*t3019;
  t6620 = -0.5118593399999999*t3969;
  t6751 = -0.5118593399999999*t4892;
  t6755 = 0.0389 + t6751;
  p_output1[0]=-3.4261*t2643 + t3102;
  p_output1[1]=t4003;
  p_output1[2]=t4967;
  p_output1[3]=t5003;
  p_output1[4]=t5136 + t5307 + t5725 + t5741*t5861;
  p_output1[5]=t5136 + t5307 + t5725 + t5741*t6202;
  p_output1[6]=3.4261*t2643 + t5571;
  p_output1[7]=t6395;
  p_output1[8]=t6407;
  p_output1[9]=t6410;
  p_output1[10]=t4003;
  p_output1[11]=t3102 - 3.4261*t5410;
  p_output1[12]=t6470;
  p_output1[13]=t6473;
  p_output1[14]=t6474 + t6527 + t6553 + t5741*t6570;
  p_output1[15]=t6474 + t6527 + t6553 + t5741*t6593;
  p_output1[16]=t6395;
  p_output1[17]=t5459 + t5571;
  p_output1[18]=t5861;
  p_output1[19]=t6620;
  p_output1[20]=t4967;
  p_output1[21]=t6470;
  p_output1[22]=-0.0389 - 3.4261*t6621 - 3.4261*t6636;
  p_output1[23]=t6642;
  p_output1[24]=t5196*t5861 + t5346*t6570;
  p_output1[25]=-0.5118593399999999*t5007*t6177 + t5741*(6.8522*t4539*t6160 + 6.8522*t4892*t6177) + t5196*t6202 + t5346*t6593;
  p_output1[26]=t6407;
  p_output1[27]=t5861;
  p_output1[28]=0.0389 + 3.4261*t6621 + 3.4261*t6636;
  p_output1[29]=t6755;
  p_output1[30]=t5003;
  p_output1[31]=t6473;
  p_output1[32]=t6642;
  p_output1[33]=-0.11537178539599996;
  p_output1[34]=t6760 + t6768;
  p_output1[35]=-0.5118593399999999*t5741*t6177 + t6760 + t6768;
  p_output1[36]=t6410;
  p_output1[37]=t6620;
  p_output1[38]=t6755;
  p_output1[39]=0.11537178539599996;
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap2_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void J_dxDiscreteMap2_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

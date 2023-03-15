/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:43 GMT-08:00
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
  double t2636;
  double t1491;
  double t2438;
  double t3080;
  double t3641;
  double t2619;
  double t3160;
  double t3367;
  double t1144;
  double t3730;
  double t3806;
  double t3931;
  double t4206;
  double t3974;
  double t1143;
  double t5139;
  double t5155;
  double t5204;
  double t4687;
  double t4691;
  double t4747;
  double t4886;
  double t4892;
  double t4944;
  double t3397;
  double t4076;
  double t4153;
  double t4225;
  double t4444;
  double t4450;
  double t4539;
  double t4554;
  double t5219;
  double t5226;
  double t5231;
  double t5249;
  double t5269;
  double t5302;
  double t5344;
  double t5346;
  double t5714;
  double t5719;
  double t5725;
  double t5730;
  double t5736;
  double t5746;
  double t5644;
  double t5669;
  double t5672;
  double t5684;
  double t6297;
  double t6314;
  double t6317;
  double t6318;
  double t6348;
  double t6349;
  double t6177;
  double t6188;
  double t6202;
  double t6217;
  double t400;
  double t1027;
  double t6151;
  double t6158;
  double t6160;
  double t4615;
  double t4637;
  double t4653;
  double t4986;
  double t5007;
  double t5049;
  double t6078;
  double t6099;
  double t6101;
  double t5360;
  double t5408;
  double t5429;
  double t5455;
  double t5509;
  double t5573;
  double t5583;
  double t5690;
  double t5697;
  double t5751;
  double t5776;
  double t5814;
  double t5818;
  double t5833;
  double t5840;
  double t5879;
  double t5920;
  double t6129;
  double t6162;
  double t6163;
  double t6053;
  double t6058;
  double t6171;
  double t6173;
  double t6279;
  double t6359;
  double t6362;
  double t6385;
  double t6395;
  double t6397;
  double t6532;
  double t6536;
  double t6539;
  double t6376;
  double t6402;
  double t6405;
  double t5808;
  double t5846;
  double t5857;
  double t6469;
  double t6470;
  double t6473;
  double t6595;
  double t6600;
  double t6616;
  double t6675;
  double t6686;
  double t6688;
  double t5347;
  double t5514;
  double t5520;
  double t6419;
  double t6431;
  double t6447;
  double t6578;
  double t6583;
  double t6590;
  double t6784;
  double t6788;
  double t6661;
  double t6666;
  double t6564;
  double t6570;
  t2636 = Cos(var2[4]);
  t1491 = Cos(var2[5]);
  t2438 = Sin(var2[4]);
  t3080 = Sin(var2[5]);
  t3641 = Cos(var2[3]);
  t2619 = t1491*t2438;
  t3160 = t2636*t3080;
  t3367 = t2619 + t3160;
  t1144 = Sin(var2[3]);
  t3730 = t2636*t1491;
  t3806 = -1.*t2438*t3080;
  t3931 = t3730 + t3806;
  t4206 = Cos(var2[2]);
  t3974 = t3641*t3931;
  t1143 = Sin(var2[2]);
  t5139 = -1.*t1491*t2438;
  t5155 = -1.*t2636*t3080;
  t5204 = t5139 + t5155;
  t4687 = -1.*t1491;
  t4691 = 1. + t4687;
  t4747 = -1.3127*t4691;
  t4886 = -1.3127*t1491;
  t4892 = -0.06*t3080;
  t4944 = t4747 + t4886 + t4892;
  t3397 = -1.*t1144*t3367;
  t4076 = t3397 + t3974;
  t4153 = t1143*t4076;
  t4225 = t3641*t3367;
  t4444 = t1144*t3931;
  t4450 = t4225 + t4444;
  t4539 = t4206*t4450;
  t4554 = t4153 + t4539;
  t5219 = t1144*t5204;
  t5226 = t5219 + t3974;
  t5231 = t4206*t5226;
  t5249 = t3641*t5204;
  t5269 = -1.*t1144*t3931;
  t5302 = t5249 + t5269;
  t5344 = t1143*t5302;
  t5346 = t5231 + t5344;
  t5714 = -1.*t2636;
  t5719 = 1. + t5714;
  t5725 = -0.9063*t5719;
  t5730 = -0.06*t1491*t2438;
  t5736 = t2636*t4944;
  t5746 = t5725 + t5730 + t5736;
  t5644 = 0.06*t2636*t1491;
  t5669 = 0.9063*t2438;
  t5672 = t2438*t4944;
  t5684 = t5644 + t5669 + t5672;
  t6297 = -1.*t3641;
  t6314 = 1. + t6297;
  t6317 = -0.4999*t6314;
  t6318 = t3641*t5746;
  t6348 = -1.*t1144*t5684;
  t6349 = t6317 + t6318 + t6348;
  t6177 = 0.4999*t1144;
  t6188 = t1144*t5746;
  t6202 = t3641*t5684;
  t6217 = t6177 + t6188 + t6202;
  t400 = -1.*var1[8];
  t1027 = var3[5] + t400;
  t6151 = t4206*t4076;
  t6158 = -1.*t1143*t4450;
  t6160 = t6151 + t6158;
  t4615 = -1.*var1[7];
  t4637 = var3[4] + t4615;
  t4653 = 0.9063*t1491;
  t4986 = t1491*t4944;
  t5007 = 0.06*t1491*t3080;
  t5049 = t4653 + t4986 + t5007;
  t6078 = -1.*t1143*t5226;
  t6099 = t4206*t5302;
  t6101 = t6078 + t6099;
  t5360 = Power(t1491,2);
  t5408 = -0.06*t5360;
  t5429 = 0.9063*t3080;
  t5455 = t4944*t3080;
  t5509 = t5408 + t5429 + t5455;
  t5573 = -1.*var1[6];
  t5583 = var3[3] + t5573;
  t5690 = t5684*t3367;
  t5697 = 0.4999*t3931;
  t5751 = t5746*t3931;
  t5776 = t5690 + t5697 + t5751;
  t5814 = -1.*t5746*t5204;
  t5818 = 0.4999*t3367;
  t5833 = -1.*t5684*t3931;
  t5840 = t5814 + t5818 + t5833;
  t5879 = -1.*var1[0];
  t5920 = var3[0] + t5879;
  t6129 = 1.142857*t6101*t5346;
  t6162 = 1.142857*t4554*t6160;
  t6163 = t6129 + t6162;
  t6053 = -1.*var1[1];
  t6058 = var3[1] + t6053;
  t6171 = -1.*var1[2];
  t6173 = var3[2] + t6171;
  t6279 = -1.*t6217*t5226;
  t6359 = -1.*t6349*t5302;
  t6362 = t6279 + t6359;
  t6385 = t6349*t4076;
  t6395 = t6217*t4450;
  t6397 = t6385 + t6395;
  t6532 = 1.142857*t6362*t6160;
  t6536 = 1.142857*t6101*t6397;
  t6539 = t6532 + t6536;
  t6376 = 1.142857*t6362*t4554;
  t6402 = 1.142857*t5346*t6397;
  t6405 = t6376 + t6402;
  t5808 = 1.142857*t5776*t5346;
  t5846 = 1.142857*t5840*t4554;
  t5857 = t5808 + t5846;
  t6469 = 1.142857*t5776*t6101;
  t6470 = 1.142857*t5840*t6160;
  t6473 = t6469 + t6470;
  t6595 = 1.142857*t5840*t6362;
  t6600 = 1.142857*t5776*t6397;
  t6616 = 0.0085 + t6595 + t6600;
  t6675 = 1.142857*t5049*t5776;
  t6686 = 1.142857*t5509*t5840;
  t6688 = 0.0085 + t6675 + t6686;
  t5347 = 1.142857*t5049*t5346;
  t5514 = 1.142857*t5509*t4554;
  t5520 = t5347 + t5514;
  t6419 = 1.142857*t5049*t6101;
  t6431 = 1.142857*t5509*t6160;
  t6447 = t6419 + t6431;
  t6578 = 1.142857*t5509*t6362;
  t6583 = 1.142857*t5049*t6397;
  t6590 = 0.0085 + t6578 + t6583;
  t6784 = -0.06857142*t5509;
  t6788 = 0.0085 + t6784;
  t6661 = -0.06857142*t5840;
  t6666 = 0.0085 + t6661;
  t6564 = -0.06857142*t6362;
  t6570 = 0.0085 + t6564;
  p_output1[0]=-0.06857142*t1027*t4554 + t4637*t5520 + t5583*t5857 + (1.142857*Power(t4554,2) + 1.142857*Power(t5346,2))*t5920 + t6058*t6163 + t6173*t6405;
  p_output1[1]=-0.06857142*t1027*t6160 + t6058*(1.142857*Power(t6101,2) + 1.142857*Power(t6160,2)) + t5920*t6163 + t4637*t6447 + t5583*t6473 + t6173*t6539;
  p_output1[2]=t6173*(0.0085 + 1.142857*Power(t6362,2) + 1.142857*Power(t6397,2)) + t5920*t6405 + t6058*t6539 + t1027*t6570 + t4637*t6590 + t5583*t6616;
  p_output1[3]=t5583*(0.0085 + 1.142857*Power(t5776,2) + 1.142857*Power(t5840,2)) + t5857*t5920 + t6058*t6473 + t6173*t6616 + t1027*t6666 + t4637*t6688;
  p_output1[4]=t4637*(0.0085 + 1.142857*Power(t5049,2) + 1.142857*Power(t5509,2)) + t5520*t5920 + t6058*t6447 + t6173*t6590 + t5583*t6688 + t1027*t6788;
  p_output1[5]=0.0126142852*t1027 - 0.06857142*t4554*t5920 - 0.06857142*t6058*t6160 + t6173*t6570 + t5583*t6666 + t4637*t6788;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap4_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void dxDiscreteMap4_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

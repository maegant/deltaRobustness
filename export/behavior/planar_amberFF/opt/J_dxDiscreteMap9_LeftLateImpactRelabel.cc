/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:19:00 GMT-08:00
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
  double t643;
  double t396;
  double t479;
  double t711;
  double t1002;
  double t636;
  double t892;
  double t968;
  double t285;
  double t1068;
  double t1313;
  double t1568;
  double t1793;
  double t1605;
  double t199;
  double t2626;
  double t2651;
  double t2786;
  double t2181;
  double t2217;
  double t2291;
  double t2426;
  double t2829;
  double t2882;
  double t2897;
  double t987;
  double t1656;
  double t3607;
  double t4406;
  double t4420;
  double t4455;
  double t4210;
  double t4309;
  double t4344;
  double t4376;
  double t4588;
  double t4612;
  double t4617;
  double t4618;
  double t4659;
  double t4750;
  double t4823;
  double t4869;
  double t4886;
  double t2941;
  double t2945;
  double t3287;
  double t4971;
  double t4976;
  double t5051;
  double t5055;
  double t5081;
  double t5097;
  double t3623;
  double t3631;
  double t3929;
  double t3969;
  double t1754;
  double t2440;
  double t5643;
  double t5661;
  double t5744;
  double t5792;
  double t5808;
  double t5820;
  double t6371;
  double t6381;
  double t6395;
  double t6402;
  double t6407;
  double t6447;
  double t6256;
  double t6309;
  double t6317;
  double t6347;
  double t6455;
  double t6470;
  double t6483;
  double t6486;
  double t6491;
  double t6527;
  double t6555;
  double t6564;
  double t6621;
  double t6633;
  double t6637;
  double t6644;
  double t6661;
  double t6671;
  double t6673;
  double t6675;
  double t6192;
  double t6230;
  double t6238;
  double t6570;
  double t6595;
  double t6616;
  double t6792;
  double t6804;
  double t6826;
  double t6828;
  double t6840;
  double t6860;
  double t6953;
  double t6954;
  double t6962;
  double t6810;
  double t6888;
  double t6910;
  double t6790;
  double t6947;
  double t7099;
  double t7117;
  double t7118;
  double t7125;
  double t7159;
  double t7167;
  double t7183;
  double t7194;
  double t7165;
  double t7201;
  double t7204;
  double t7241;
  double t7297;
  double t7300;
  double t7059;
  double t7074;
  double t7379;
  double t7382;
  double t7399;
  double t7496;
  double t7497;
  double t7516;
  double t7683;
  double t7687;
  double t7689;
  double t7690;
  t643 = Cos(var2[7]);
  t396 = Cos(var2[8]);
  t479 = Sin(var2[7]);
  t711 = Sin(var2[8]);
  t1002 = Cos(var2[6]);
  t636 = -1.*t396*t479;
  t892 = -1.*t643*t711;
  t968 = t636 + t892;
  t285 = Sin(var2[6]);
  t1068 = t643*t396;
  t1313 = -1.*t479*t711;
  t1568 = t1068 + t1313;
  t1793 = Cos(var2[2]);
  t1605 = t1002*t1568;
  t199 = Sin(var2[2]);
  t2626 = t396*t479;
  t2651 = t643*t711;
  t2786 = t2626 + t2651;
  t2181 = t1002*t968;
  t2217 = -1.*t285*t1568;
  t2291 = t2181 + t2217;
  t2426 = t1793*t2291;
  t2829 = -1.*t285*t2786;
  t2882 = t2829 + t1605;
  t2897 = t1793*t2882;
  t987 = t285*t968;
  t1656 = t987 + t1605;
  t3607 = -1.*t285*t968;
  t4406 = -1.*t643*t396;
  t4420 = t479*t711;
  t4455 = t4406 + t4420;
  t4210 = t1793*t1656;
  t4309 = t199*t2291;
  t4344 = t4210 + t4309;
  t4376 = -1.*var4[1]*t4344;
  t4588 = t1002*t4455;
  t4612 = t3607 + t4588;
  t4617 = t199*t4612;
  t4618 = t285*t4455;
  t4659 = t2181 + t4618;
  t4750 = t1793*t4659;
  t4823 = t4617 + t4750;
  t4869 = -1.*var4[0]*t4823;
  t4886 = t4376 + t4869;
  t2941 = t1002*t2786;
  t2945 = t285*t1568;
  t3287 = t2941 + t2945;
  t4971 = -1.*t1793*t1656;
  t4976 = -1.*t199*t2291;
  t5051 = t4971 + t4976;
  t5055 = -1.*t199*t2882;
  t5081 = -1.*t1793*t3287;
  t5097 = t5055 + t5081;
  t3623 = -1.*t1002*t1568;
  t3631 = t3607 + t3623;
  t3929 = -1.*t1002*t2786;
  t3969 = t3929 + t2217;
  t1754 = -1.*t199*t1656;
  t2440 = t1754 + t2426;
  t5643 = -1.*var4[1]*t2440;
  t5661 = t1793*t4612;
  t5744 = -1.*t199*t4659;
  t5792 = t5661 + t5744;
  t5808 = -1.*var4[0]*t5792;
  t5820 = t5643 + t5808;
  t6371 = -1.*t396;
  t6381 = 1. + t6371;
  t6395 = -1.3127*t6381;
  t6402 = -1.3127*t396;
  t6407 = -0.06*t711;
  t6447 = t6395 + t6402 + t6407;
  t6256 = -1.*t643;
  t6309 = 1. + t6256;
  t6317 = -0.9063*t6309;
  t6347 = -0.06*t396*t479;
  t6455 = t643*t6447;
  t6470 = t6317 + t6347 + t6455;
  t6483 = t1002*t6470;
  t6486 = 0.06*t643*t396;
  t6491 = 0.9063*t479;
  t6527 = t479*t6447;
  t6555 = t6486 + t6491 + t6527;
  t6564 = -1.*t285*t6555;
  t6621 = -0.4999*t285;
  t6633 = -1.*t285*t6470;
  t6637 = -1.*t1002*t6555;
  t6644 = t6621 + t6633 + t6637;
  t6661 = 0.4999*t285;
  t6671 = t285*t6470;
  t6673 = t1002*t6555;
  t6675 = t6661 + t6671 + t6673;
  t6192 = -1.*t1002;
  t6230 = 1. + t6192;
  t6238 = -0.4999*t6230;
  t6570 = t6238 + t6483 + t6564;
  t6595 = 0.4999*t1002;
  t6616 = t6595 + t6483 + t6564;
  t6792 = 0.9063*t643;
  t6804 = t6792 + t6347 + t6455;
  t6826 = -0.06*t643*t396;
  t6828 = -0.9063*t479;
  t6840 = -1.*t479*t6447;
  t6860 = t6826 + t6828 + t6840;
  t6953 = t1002*t6804;
  t6954 = t285*t6860;
  t6962 = t6953 + t6954;
  t6810 = -1.*t285*t6804;
  t6888 = t1002*t6860;
  t6910 = t6810 + t6888;
  t6790 = t6675*t1656;
  t6947 = t6570*t2291;
  t7099 = -0.06*t396;
  t7117 = 0. + t7099;
  t7118 = t7117*t479;
  t7125 = -0.06*t643*t711;
  t7159 = t7118 + t7125;
  t7167 = t643*t7117;
  t7183 = 0.06*t479*t711;
  t7194 = t7167 + t7183;
  t7165 = -1.*t285*t7159;
  t7201 = t1002*t7194;
  t7204 = t7165 + t7201;
  t7241 = t1002*t7159;
  t7297 = t285*t7194;
  t7300 = t7241 + t7297;
  t7059 = -1.*t6570*t4612;
  t7074 = -1.*t6675*t4659;
  t7379 = 0.4999*t968;
  t7382 = t6470*t968;
  t7399 = t6555*t1568;
  t7496 = -1.*t6555*t968;
  t7497 = 0.4999*t1568;
  t7516 = -1.*t6470*t4455;
  t7683 = Power(t396,2);
  t7687 = 0.06*t7683;
  t7689 = -0.9063*t711;
  t7690 = -1.*t6447*t711;
  p_output1[0]=-1.*t2440*var4[0] - 1.*(t2897 - 1.*t199*t3287)*var4[1];
  p_output1[1]=-1.*(t2426 + t199*t3631)*var4[0] - 1.*(t2897 + t199*t3969)*var4[1];
  p_output1[2]=t4886;
  p_output1[3]=t4886;
  p_output1[4]=t5051;
  p_output1[5]=t5097;
  p_output1[6]=-1.*t5051*var4[0] - 1.*t5097*var4[1];
  p_output1[7]=-1.*(t1793*t3631 + t4976)*var4[0] - 1.*(t1793*t3969 + t5055)*var4[1];
  p_output1[8]=t5820;
  p_output1[9]=t5820;
  p_output1[10]=t1656*t199 - 1.*t1793*t2291;
  p_output1[11]=-1.*t1793*t2882 + t199*t3287;
  p_output1[12]=-1.*(t3969*t6570 + t3287*t6616 + t2882*t6644 + t2882*t6675)*var4[0] - 1.*(-1.*t3631*t6570 - 1.*t1656*t6616 - 1.*t2291*t6644 - 1.*t2291*t6675)*var4[1];
  p_output1[13]=-1.*(t6790 + t2882*t6910 + t6947 + t3287*t6962)*var4[0] - 1.*(-1.*t2291*t6910 - 1.*t1656*t6962 + t7059 + t7074)*var4[1];
  p_output1[14]=-1.*(t6790 + t6947 + t2882*t7204 + t3287*t7300)*var4[0] - 1.*(t7059 + t7074 - 1.*t2291*t7204 - 1.*t1656*t7300)*var4[1];
  p_output1[15]=-1.*t2882*t6570 - 1.*t3287*t6675;
  p_output1[16]=t6790 + t6947;
  p_output1[17]=-1.;
  p_output1[18]=-1.*(t2786*t6804 + t1568*t6860 + t7379 + t7382 + t7399)*var4[0] - 1.*(-1.*t1568*t6804 + t7496 + t7497 + t7516 - 1.*t6860*t968)*var4[1];
  p_output1[19]=-1.*(t2786*t7159 + t1568*t7194 + t7379 + t7382 + t7399)*var4[0] - 1.*(-1.*t1568*t7159 + t7496 + t7497 + t7516 - 1.*t7194*t968)*var4[1];
  p_output1[20]=-0.4999*t1568 - 1.*t1568*t6470 - 1.*t2786*t6555;
  p_output1[21]=-0.4999*t2786 + t7382 + t7399;
  p_output1[22]=-1.;
  p_output1[23]=-1.*(-0.06*Power(t711,2) + t396*t7117 + t7687 + t7689 + t7690)*var4[0] - 1.*(0.9063*t396 + t396*t6447 + 0.12*t396*t711 + t711*t7117)*var4[1];
  p_output1[24]=-0.9063*t396 - 1.*t396*t6447 - 0.06*t396*t711;
  p_output1[25]=t7687 + t7689 + t7690;
  p_output1[26]=-1.;
  p_output1[27]=0.06;
  p_output1[28]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 29, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap9_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void J_dxDiscreteMap9_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

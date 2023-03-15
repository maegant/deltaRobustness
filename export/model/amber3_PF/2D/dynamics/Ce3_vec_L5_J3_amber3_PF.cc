/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:17 GMT-08:00
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
  double t839;
  double t379;
  double t731;
  double t1003;
  double t1986;
  double t2128;
  double t2680;
  double t4156;
  double t4309;
  double t4394;
  double t4429;
  double t4513;
  double t1700;
  double t4931;
  double t4989;
  double t4998;
  double t135;
  double t3546;
  double t4566;
  double t4755;
  double t4769;
  double t798;
  double t1247;
  double t1611;
  double t5029;
  double t5057;
  double t5072;
  double t5089;
  double t5164;
  double t5165;
  double t4927;
  double t5171;
  double t5177;
  double t2911;
  double t5576;
  double t5580;
  double t5591;
  double t6089;
  double t6112;
  double t6136;
  double t6174;
  double t6226;
  double t6232;
  double t6257;
  double t6319;
  double t6321;
  double t6327;
  double t6329;
  double t5755;
  double t5797;
  double t5422;
  double t6870;
  double t6896;
  double t6991;
  double t5618;
  double t5660;
  double t5679;
  double t6852;
  double t6853;
  double t6863;
  double t7017;
  double t7019;
  double t7604;
  double t7624;
  double t6444;
  double t6510;
  double t6529;
  double t6550;
  double t6551;
  double t8086;
  double t8088;
  double t8089;
  double t8093;
  double t8095;
  double t8097;
  double t8098;
  double t6774;
  double t6777;
  double t6841;
  double t6848;
  double t7251;
  double t7334;
  double t7438;
  double t7493;
  double t8121;
  double t8122;
  double t8123;
  double t7652;
  double t7836;
  double t7916;
  double t7981;
  double t8008;
  double t8039;
  double t8060;
  t839 = Cos(var1[5]);
  t379 = Cos(var1[6]);
  t731 = Sin(var1[5]);
  t1003 = Sin(var1[6]);
  t1986 = t839*t379;
  t2128 = -1.*t731*t1003;
  t2680 = t1986 + t2128;
  t4156 = -1.*t379;
  t4309 = 1. + t4156;
  t4394 = -0.9063*t4309;
  t4429 = -1.078185*t379;
  t4513 = t4394 + t4429;
  t1700 = Sin(var1[2]);
  t4931 = -1.*t379*t731;
  t4989 = -1.*t839*t1003;
  t4998 = t4931 + t4989;
  t135 = Cos(var1[2]);
  t3546 = 0.4999*t731;
  t4566 = t4513*t731;
  t4755 = -0.17188499999999995*t839*t1003;
  t4769 = t3546 + t4566 + t4755;
  t798 = t379*t731;
  t1247 = t839*t1003;
  t1611 = t798 + t1247;
  t5029 = -1.*t839;
  t5057 = 1. + t5029;
  t5072 = -0.4999*t5057;
  t5089 = t839*t4513;
  t5164 = 0.17188499999999995*t731*t1003;
  t5165 = t5072 + t5089 + t5164;
  t4927 = -1.*t4769*t2680;
  t5171 = -1.*t4998*t5165;
  t5177 = t4927 + t5171;
  t2911 = -1.*t1700*t2680;
  t5576 = t4769*t1611;
  t5580 = t2680*t5165;
  t5591 = t5576 + t5580;
  t6089 = t4769*t2680;
  t6112 = -0.4999*t731;
  t6136 = -1.*t4513*t731;
  t6174 = 0.17188499999999995*t839*t1003;
  t6226 = t6112 + t6136 + t6174;
  t6232 = t6226*t2680;
  t6257 = t4998*t5165;
  t6319 = 0.4999*t839;
  t6321 = t6319 + t5089 + t5164;
  t6327 = t1611*t6321;
  t6329 = t6089 + t6232 + t6257 + t6327;
  t5755 = t135*t4998;
  t5797 = t5755 + t2911;
  t5422 = -1.*t1700*t4998;
  t6870 = -1.*t839*t379;
  t6896 = t731*t1003;
  t6991 = t6870 + t6896;
  t5618 = -1.*t1700*t1611;
  t5660 = t135*t2680;
  t5679 = t5618 + t5660;
  t6852 = -1.*t4998*t4769;
  t6853 = -1.*t4998*t6226;
  t6863 = -1.*t2680*t6321;
  t7017 = -1.*t5165*t6991;
  t7019 = t6852 + t6853 + t6863 + t7017;
  t7604 = t1700*t4998;
  t7624 = t7604 + t5660;
  t6444 = 0.4999*t379;
  t6510 = t4513*t379;
  t6529 = Power(t1003,2);
  t6550 = -0.17188499999999995*t6529;
  t6551 = t6444 + t6510 + t6550;
  t8086 = 0.17188499999999995*t379*t731;
  t8088 = t8086 + t6174;
  t8089 = t8088*t2680;
  t8093 = -0.17188499999999995*t839*t379;
  t8095 = t8093 + t5164;
  t8097 = t1611*t8095;
  t8098 = t6089 + t8089 + t6257 + t8097;
  t6774 = 0.4999*t1003;
  t6777 = t4513*t1003;
  t6841 = 0.17188499999999995*t379*t1003;
  t6848 = t6774 + t6777 + t6841;
  t7251 = 0.85216*t5797*t5177;
  t7334 = t135*t6991;
  t7438 = t5422 + t7334;
  t7493 = 0.85216*t5591*t7438;
  t8121 = -1.*t4998*t8088;
  t8122 = -1.*t2680*t8095;
  t8123 = t6852 + t8121 + t8122 + t7017;
  t7652 = 0.85216*t7624*t5177;
  t7836 = t1700*t6991;
  t7916 = t5755 + t7836;
  t7981 = 0.85216*t5591*t7916;
  t8008 = t135*t1611;
  t8039 = t1700*t2680;
  t8060 = t8008 + t8039;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(0.85216*t5177*t5679 + 0.85216*t5591*t5797)*var2[0] + 0.5*(0.85216*(-1.*t135*t1611 + t2911)*t5177 + 0.85216*(-1.*t135*t2680 + t5422)*t5591)*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[2]*(0.5*(0.85216*t6329*t7624 + t7652 + t7981 + 0.85216*t7019*t8060)*var2[0] + 0.5*(0.85216*t5797*t6329 + 0.85216*t5679*t7019 + t7251 + t7493)*var2[1] + 0.5*(1.70432*t5591*t6329 + 1.70432*t5177*t7019)*var2[2] + 0.5*(0.85216*t6329*t6551 + 0.85216*t6848*t7019)*var2[5] - 0.07323676079999998*t6329*var2[6]);
  p_output1[6]=var2[2]*(0.5*(t7652 + t7981 + 0.85216*t7624*t8098 + 0.85216*t8060*t8123)*var2[0] + 0.5*(t7251 + t7493 + 0.85216*t5797*t8098 + 0.85216*t5679*t8123)*var2[1] + 0.5*(1.70432*t5591*t8098 + 1.70432*t5177*t8123)*var2[2] + 0.5*(0.85216*(-0.4999*t1003 - 0.17188499999999995*t1003*t379 - 1.*t1003*t4513)*t5591 + 0.85216*t5177*(0.17188499999999995*Power(t379,2) + t6444 + t6510) + 0.85216*t6551*t8098 + 0.85216*t6848*t8123)*var2[5] - 0.07323676079999998*t8098*var2[6]);
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec_L5_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L5_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:22 GMT-08:00
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
  double t2437;
  double t1833;
  double t2028;
  double t2447;
  double t1800;
  double t2088;
  double t2482;
  double t2504;
  double t2799;
  double t3035;
  double t3042;
  double t3053;
  double t3104;
  double t3151;
  double t3219;
  double t3751;
  double t3896;
  double t3909;
  double t3984;
  double t4005;
  double t4597;
  double t4678;
  double t4836;
  double t4855;
  double t4911;
  double t4922;
  double t5578;
  double t5589;
  double t5590;
  double t5591;
  double t5616;
  double t5618;
  double t5620;
  double t5622;
  double t5627;
  double t5629;
  double t654;
  double t1284;
  double t5075;
  double t5079;
  double t5080;
  double t3510;
  double t3657;
  double t4349;
  double t4439;
  double t4570;
  double t4591;
  double t5122;
  double t5158;
  double t3736;
  double t4117;
  double t4202;
  double t4227;
  double t4301;
  double t5063;
  double t5073;
  double t5407;
  double t5417;
  double t5116;
  double t5162;
  double t5180;
  double t5523;
  double t5568;
  double t5613;
  double t5647;
  double t5664;
  double t5721;
  double t5732;
  double t5749;
  double t5681;
  double t5755;
  double t5766;
  double t5922;
  double t5928;
  double t5930;
  double t5801;
  double t5815;
  double t5830;
  double t4302;
  double t4948;
  double t4982;
  double t5952;
  double t5965;
  double t5967;
  double t6068;
  double t6072;
  double t5937;
  double t5948;
  t2437 = Cos(var2[3]);
  t1833 = Cos(var2[4]);
  t2028 = Sin(var2[3]);
  t2447 = Sin(var2[4]);
  t1800 = Sin(var2[2]);
  t2088 = -1.*t1833*t2028;
  t2482 = -1.*t2437*t2447;
  t2504 = t2088 + t2482;
  t2799 = t1800*t2504;
  t3035 = Cos(var2[2]);
  t3042 = t2437*t1833;
  t3053 = -1.*t2028*t2447;
  t3104 = t3042 + t3053;
  t3151 = t3035*t3104;
  t3219 = t2799 + t3151;
  t3751 = -1.*t1833;
  t3896 = 1. + t3751;
  t3909 = -0.9063*t3896;
  t3984 = -1.0567*t1833;
  t4005 = t3909 + t3984;
  t4597 = t1833*t2028;
  t4678 = t2437*t2447;
  t4836 = t4597 + t4678;
  t4855 = t3035*t4836;
  t4911 = t1800*t3104;
  t4922 = t4855 + t4911;
  t5578 = 0.4999*t2028;
  t5589 = t4005*t2028;
  t5590 = -0.15039999999999998*t2437*t2447;
  t5591 = t5578 + t5589 + t5590;
  t5616 = -1.*t2437;
  t5618 = 1. + t5616;
  t5620 = -0.4999*t5618;
  t5622 = t2437*t4005;
  t5627 = 0.15039999999999998*t2028*t2447;
  t5629 = t5620 + t5622 + t5627;
  t654 = -1.*var1[7];
  t1284 = var3[4] + t654;
  t5075 = t3035*t2504;
  t5079 = -1.*t1800*t3104;
  t5080 = t5075 + t5079;
  t3510 = -1.*var1[6];
  t3657 = var3[3] + t3510;
  t4349 = 0.4999*t2447;
  t4439 = t4005*t2447;
  t4570 = 0.15039999999999998*t1833*t2447;
  t4591 = t4349 + t4439 + t4570;
  t5122 = -1.*t1800*t4836;
  t5158 = t5122 + t3151;
  t3736 = 0.4999*t1833;
  t4117 = t4005*t1833;
  t4202 = Power(t2447,2);
  t4227 = -0.15039999999999998*t4202;
  t4301 = t3736 + t4117 + t4227;
  t5063 = -1.*var1[1];
  t5073 = var3[1] + t5063;
  t5407 = -1.*var1[0];
  t5417 = var3[0] + t5407;
  t5116 = 3.5899*t3219*t5080;
  t5162 = 3.5899*t5158*t4922;
  t5180 = t5116 + t5162;
  t5523 = -1.*var1[2];
  t5568 = var3[2] + t5523;
  t5613 = -1.*t5591*t3104;
  t5647 = -1.*t2504*t5629;
  t5664 = t5613 + t5647;
  t5721 = t5591*t4836;
  t5732 = t3104*t5629;
  t5749 = t5721 + t5732;
  t5681 = 3.5899*t4922*t5664;
  t5755 = 3.5899*t3219*t5749;
  t5766 = t5681 + t5755;
  t5922 = 3.5899*t5158*t5664;
  t5928 = 3.5899*t5080*t5749;
  t5930 = t5922 + t5928;
  t5801 = 3.5899*t4591*t5158;
  t5815 = 3.5899*t4301*t5080;
  t5830 = t5801 + t5815;
  t4302 = 3.5899*t4301*t3219;
  t4948 = 3.5899*t4591*t4922;
  t4982 = t4302 + t4948;
  t5952 = 3.5899*t4591*t5664;
  t5965 = 3.5899*t4301*t5749;
  t5967 = 0.0378 + t5952 + t5965;
  t6068 = -0.5399209599999999*t4301;
  t6072 = 0.0378 + t6068;
  t5937 = -0.5399209599999999*t5749;
  t5948 = 0.0378 + t5937;
  p_output1[0]=-0.5399209599999999*t1284*t3219 + t3657*t4982 + t5073*t5180 + (3.5899*Power(t3219,2) + 3.5899*Power(t4922,2))*t5417 + t5568*t5766;
  p_output1[1]=-0.5399209599999999*t1284*t5080 + t5073*(3.5899*Power(t5080,2) + 3.5899*Power(t5158,2)) + t5180*t5417 + t3657*t5830 + t5568*t5930;
  p_output1[2]=t5568*(0.0378 + 3.5899*Power(t5664,2) + 3.5899*Power(t5749,2)) + t5417*t5766 + t5073*t5930 + t1284*t5948 + t3657*t5967;
  p_output1[3]=t3657*(0.0378 + 3.5899*Power(t4301,2) + 3.5899*Power(t4591,2)) + t4982*t5417 + t5073*t5830 + t5568*t5967 + t1284*t6072;
  p_output1[4]=0.11900411238399997*t1284 - 0.5399209599999999*t5073*t5080 - 0.5399209599999999*t3219*t5417 + t5568*t5948 + t3657*t6072;
  p_output1[5]=0;
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

#include "dxDiscreteMap3_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap3_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

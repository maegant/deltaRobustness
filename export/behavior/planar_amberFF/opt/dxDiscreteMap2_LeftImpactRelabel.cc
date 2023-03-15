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
  double t1797;
  double t1865;
  double t1681;
  double t1989;
  double t1833;
  double t2027;
  double t2028;
  double t3042;
  double t3104;
  double t3151;
  double t4204;
  double t4215;
  double t4227;
  double t4301;
  double t4302;
  double t1199;
  double t1284;
  double t2500;
  double t2665;
  double t2799;
  double t3668;
  double t3736;
  double t3035;
  double t3393;
  double t3510;
  double t2480;
  double t2482;
  double t3909;
  double t3984;
  double t4157;
  double t4202;
  double t4349;
  double t4439;
  double t4570;
  double t4678;
  double t4836;
  double t4855;
  double t4911;
  double t5122;
  double t5158;
  double t5180;
  double t4591;
  double t4922;
  double t4948;
  double t5417;
  double t5434;
  t1797 = Cos(var2[3]);
  t1865 = Sin(var2[2]);
  t1681 = Cos(var2[2]);
  t1989 = Sin(var2[3]);
  t1833 = t1681*t1797;
  t2027 = -1.*t1865*t1989;
  t2028 = t1833 + t2027;
  t3042 = t1797*t1865;
  t3104 = t1681*t1989;
  t3151 = t3042 + t3104;
  t4204 = -1.*t1797;
  t4215 = 1. + t4204;
  t4227 = -0.4999*t4215;
  t4301 = -0.6493*t1797;
  t4302 = t4227 + t4301;
  t1199 = -1.*var1[6];
  t1284 = var3[3] + t1199;
  t2500 = -1.*t1797*t1865;
  t2665 = -1.*t1681*t1989;
  t2799 = t2500 + t2665;
  t3668 = -1.*var1[0];
  t3736 = var3[0] + t3668;
  t3035 = 3.4261*t2799*t2028;
  t3393 = 3.4261*t3151*t2028;
  t3510 = t3035 + t3393;
  t2480 = -1.*var1[1];
  t2482 = var3[1] + t2480;
  t3909 = Power(t2028,2);
  t3984 = 3.4261*t3909;
  t4157 = -1.*var1[2];
  t4202 = var3[2] + t4157;
  t4349 = t4302*t1989;
  t4439 = 0.14939999999999998*t1797*t1989;
  t4570 = t4349 + t4439;
  t4678 = t4302*t1797;
  t4836 = Power(t1989,2);
  t4855 = -0.14939999999999998*t4836;
  t4911 = t4678 + t4855;
  t5122 = 3.4261*t4570*t2028;
  t5158 = 3.4261*t2799*t4911;
  t5180 = t5122 + t5158;
  t4591 = 3.4261*t3151*t4570;
  t4922 = 3.4261*t2028*t4911;
  t4948 = t4591 + t4922;
  t5417 = -0.5118593399999999*t4911;
  t5434 = 0.0389 + t5417;
  p_output1[0]=-0.5118593399999999*t1284*t2028 + t2482*t3510 + t3736*(3.4261*Power(t3151,2) + t3984) + t4202*t4948;
  p_output1[1]=-0.5118593399999999*t1284*t2799 + t3510*t3736 + t2482*(3.4261*Power(t2799,2) + t3984) + t4202*t5180;
  p_output1[2]=t4202*(0.0389 + 3.4261*Power(t4570,2) + 3.4261*Power(t4911,2)) + t3736*t4948 + t2482*t5180 + t1284*t5434;
  p_output1[3]=0.11537178539599996*t1284 - 0.5118593399999999*t2482*t2799 - 0.5118593399999999*t2028*t3736 + t4202*t5434;
  p_output1[4]=0;
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

#include "dxDiscreteMap2_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap2_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

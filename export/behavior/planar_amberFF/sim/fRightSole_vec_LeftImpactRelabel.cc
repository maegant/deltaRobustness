/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:07 GMT-08:00
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
  double t2676;
  double t1045;
  double t1052;
  double t3053;
  double t3929;
  double t2015;
  double t3485;
  double t3570;
  double t152;
  double t4102;
  double t4142;
  double t4352;
  double t4583;
  double t4477;
  double t151;
  double t4797;
  double t4801;
  double t4805;
  double t3668;
  double t4503;
  double t4609;
  double t4735;
  double t4767;
  double t4809;
  double t4814;
  double t5293;
  double t5920;
  double t6159;
  double t7694;
  double t7696;
  double t7699;
  double t7701;
  double t7702;
  double t7703;
  double t7664;
  double t7667;
  double t7680;
  double t7685;
  double t7705;
  double t7709;
  double t7715;
  double t7716;
  double t7719;
  double t7720;
  double t7730;
  double t7731;
  double t7732;
  double t7734;
  double t7735;
  double t7738;
  double t7662;
  double t7714;
  double t7725;
  double t7727;
  t2676 = Cos(var1[7]);
  t1045 = Cos(var1[8]);
  t1052 = Sin(var1[7]);
  t3053 = Sin(var1[8]);
  t3929 = Cos(var1[6]);
  t2015 = -1.*t1045*t1052;
  t3485 = -1.*t2676*t3053;
  t3570 = t2015 + t3485;
  t152 = Sin(var1[6]);
  t4102 = t2676*t1045;
  t4142 = -1.*t1052*t3053;
  t4352 = t4102 + t4142;
  t4583 = Sin(var1[2]);
  t4477 = t3929*t4352;
  t151 = Cos(var1[2]);
  t4797 = t1045*t1052;
  t4801 = t2676*t3053;
  t4805 = t4797 + t4801;
  t3668 = t152*t3570;
  t4503 = t3668 + t4477;
  t4609 = t3929*t3570;
  t4735 = -1.*t152*t4352;
  t4767 = t4609 + t4735;
  t4809 = -1.*t152*t4805;
  t4814 = t4809 + t4477;
  t5293 = t3929*t4805;
  t5920 = t152*t4352;
  t6159 = t5293 + t5920;
  t7694 = -1.*t1045;
  t7696 = 1. + t7694;
  t7699 = -1.3127*t7696;
  t7701 = -1.3127*t1045;
  t7702 = -0.06*t3053;
  t7703 = t7699 + t7701 + t7702;
  t7664 = -1.*t2676;
  t7667 = 1. + t7664;
  t7680 = -0.9063*t7667;
  t7685 = -0.06*t1045*t1052;
  t7705 = t2676*t7703;
  t7709 = t7680 + t7685 + t7705;
  t7715 = 0.06*t2676*t1045;
  t7716 = 0.9063*t1052;
  t7719 = t1052*t7703;
  t7720 = t7715 + t7716 + t7719;
  t7730 = -1.*t3929;
  t7731 = 1. + t7730;
  t7732 = -0.4999*t7731;
  t7734 = t3929*t7709;
  t7735 = -1.*t152*t7720;
  t7738 = t7732 + t7734 + t7735;
  t7662 = 0.4999*t152;
  t7714 = t152*t7709;
  t7725 = t3929*t7720;
  t7727 = t7662 + t7714 + t7725;
  p_output1[0]=(t151*t4503 + t4583*t4767)*var2[0] + (t4583*t4814 + t151*t6159)*var2[1];
  p_output1[1]=(-1.*t4503*t4583 + t151*t4767)*var2[0] + (t151*t4814 - 1.*t4583*t6159)*var2[1];
  p_output1[2]=(t6159*t7727 + t4814*t7738)*var2[0] + (-1.*t4503*t7727 - 1.*t4767*t7738)*var2[1] + var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.4999*t4352 + t4352*t7709 + t4805*t7720)*var2[0] + (0.4999*t4805 - 1.*t3570*t7709 - 1.*t4352*t7720)*var2[1] + var2[2];
  p_output1[7]=(0.9063*t1045 + 0.06*t1045*t3053 + t1045*t7703)*var2[0] + (-0.06*Power(t1045,2) + 0.9063*t3053 + t3053*t7703)*var2[1] + var2[2];
  p_output1[8]=-0.06*var2[1] + var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_vec_LeftImpactRelabel.hh"

namespace SymFunction
{

void fRightSole_vec_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

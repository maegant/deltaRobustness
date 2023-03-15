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
static void output1(double *p_output1,const double *var1)
{
  double t1962;
  double t1014;
  double t1116;
  double t2563;
  double t3668;
  double t1745;
  double t3012;
  double t3126;
  double t1012;
  double t4102;
  double t4438;
  double t4477;
  double t4786;
  double t3306;
  double t4576;
  double t4609;
  double t1010;
  double t4789;
  double t4797;
  double t4801;
  double t7637;
  double t7639;
  double t7644;
  double t7649;
  double t7650;
  double t7651;
  double t7542;
  double t7594;
  double t7601;
  double t7608;
  double t7654;
  double t7655;
  double t7662;
  double t7680;
  double t7685;
  double t7699;
  double t7703;
  double t7705;
  double t7714;
  double t7715;
  double t7716;
  double t7739;
  double t7740;
  double t7741;
  double t7725;
  double t7728;
  double t7732;
  double t7734;
  double t5293;
  double t5662;
  double t5920;
  double t7661;
  double t7701;
  double t7702;
  t1962 = Cos(var1[7]);
  t1014 = Cos(var1[8]);
  t1116 = Sin(var1[7]);
  t2563 = Sin(var1[8]);
  t3668 = Cos(var1[6]);
  t1745 = -1.*t1014*t1116;
  t3012 = -1.*t1962*t2563;
  t3126 = t1745 + t3012;
  t1012 = Sin(var1[6]);
  t4102 = t1962*t1014;
  t4438 = -1.*t1116*t2563;
  t4477 = t4102 + t4438;
  t4786 = Sin(var1[2]);
  t3306 = t1012*t3126;
  t4576 = t3668*t4477;
  t4609 = t3306 + t4576;
  t1010 = Cos(var1[2]);
  t4789 = t3668*t3126;
  t4797 = -1.*t1012*t4477;
  t4801 = t4789 + t4797;
  t7637 = -1.*t1014;
  t7639 = 1. + t7637;
  t7644 = -1.3127*t7639;
  t7649 = -1.3127*t1014;
  t7650 = -0.06*t2563;
  t7651 = t7644 + t7649 + t7650;
  t7542 = -1.*t1962;
  t7594 = 1. + t7542;
  t7601 = -0.9063*t7594;
  t7608 = -0.06*t1014*t1116;
  t7654 = t1962*t7651;
  t7655 = t7601 + t7608 + t7654;
  t7662 = 0.06*t1962*t1014;
  t7680 = 0.9063*t1116;
  t7685 = t1116*t7651;
  t7699 = t7662 + t7680 + t7685;
  t7703 = t1014*t1116;
  t7705 = t1962*t2563;
  t7714 = t7703 + t7705;
  t7715 = -1.*t1012*t7714;
  t7716 = t7715 + t4576;
  t7739 = t3668*t7714;
  t7740 = t1012*t4477;
  t7741 = t7739 + t7740;
  t7725 = 0.4999*t1012;
  t7728 = t1012*t7655;
  t7732 = t3668*t7699;
  t7734 = t7725 + t7728 + t7732;
  t5293 = -1.*t3668;
  t5662 = 1. + t5293;
  t5920 = -0.4999*t5662;
  t7661 = t3668*t7655;
  t7701 = -1.*t1012*t7699;
  t7702 = t5920 + t7661 + t7701;
  p_output1[0]=t1010*t4609 + t4786*t4801;
  p_output1[1]=-1.*t4609*t4786 + t1010*t4801;
  p_output1[2]=t7702*t7716 + t7734*t7741;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.4999*t4477 + t4477*t7655 + t7699*t7714;
  p_output1[7]=0.9063*t1014 + 0.06*t1014*t2563 + t1014*t7651;
  p_output1[8]=0;
  p_output1[9]=t4786*t7716 + t1010*t7741;
  p_output1[10]=t1010*t7716 - 1.*t4786*t7741;
  p_output1[11]=-1.*t4801*t7702 - 1.*t4609*t7734;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-1.*t3126*t7655 - 1.*t4477*t7699 + 0.4999*t7714;
  p_output1[16]=-0.06*Power(t1014,2) + 0.9063*t2563 + t2563*t7651;
  p_output1[17]=-0.06;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=1.;
  p_output1[25]=1.;
  p_output1[26]=1.;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_map_LeftLateImpactRelabel.hh"

namespace SymFunction
{

void fRightSole_map_LeftLateImpactRelabel_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

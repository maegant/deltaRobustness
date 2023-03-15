/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:06 GMT-08:00
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
  double t1336;
  double t559;
  double t700;
  double t1973;
  double t2862;
  double t729;
  double t2185;
  double t2548;
  double t274;
  double t3053;
  double t3057;
  double t3283;
  double t3856;
  double t2676;
  double t3485;
  double t3520;
  double t149;
  double t3929;
  double t4020;
  double t4024;
  double t4784;
  double t4785;
  double t4786;
  double t4789;
  double t4797;
  double t4801;
  double t4748;
  double t4761;
  double t4767;
  double t4768;
  double t4805;
  double t4806;
  double t4814;
  double t5105;
  double t5293;
  double t5448;
  double t5920;
  double t6159;
  double t7480;
  double t7481;
  double t7521;
  double t7637;
  double t7639;
  double t7643;
  double t7594;
  double t7601;
  double t7608;
  double t7636;
  double t4718;
  double t4721;
  double t4735;
  double t4809;
  double t5468;
  double t5886;
  t1336 = Cos(var1[7]);
  t559 = Cos(var1[8]);
  t700 = Sin(var1[7]);
  t1973 = Sin(var1[8]);
  t2862 = Cos(var1[6]);
  t729 = -1.*t559*t700;
  t2185 = -1.*t1336*t1973;
  t2548 = t729 + t2185;
  t274 = Sin(var1[6]);
  t3053 = t1336*t559;
  t3057 = -1.*t700*t1973;
  t3283 = t3053 + t3057;
  t3856 = Sin(var1[2]);
  t2676 = t274*t2548;
  t3485 = t2862*t3283;
  t3520 = t2676 + t3485;
  t149 = Cos(var1[2]);
  t3929 = t2862*t2548;
  t4020 = -1.*t274*t3283;
  t4024 = t3929 + t4020;
  t4784 = -1.*t559;
  t4785 = 1. + t4784;
  t4786 = -1.3127*t4785;
  t4789 = -1.3127*t559;
  t4797 = -0.06*t1973;
  t4801 = t4786 + t4789 + t4797;
  t4748 = -1.*t1336;
  t4761 = 1. + t4748;
  t4767 = -0.9063*t4761;
  t4768 = -0.06*t559*t700;
  t4805 = t1336*t4801;
  t4806 = t4767 + t4768 + t4805;
  t4814 = 0.06*t1336*t559;
  t5105 = 0.9063*t700;
  t5293 = t700*t4801;
  t5448 = t4814 + t5105 + t5293;
  t5920 = t559*t700;
  t6159 = t1336*t1973;
  t7480 = t5920 + t6159;
  t7481 = -1.*t274*t7480;
  t7521 = t7481 + t3485;
  t7637 = t2862*t7480;
  t7639 = t274*t3283;
  t7643 = t7637 + t7639;
  t7594 = 0.4999*t274;
  t7601 = t274*t4806;
  t7608 = t2862*t5448;
  t7636 = t7594 + t7601 + t7608;
  t4718 = -1.*t2862;
  t4721 = 1. + t4718;
  t4735 = -0.4999*t4721;
  t4809 = t2862*t4806;
  t5468 = -1.*t274*t5448;
  t5886 = t4735 + t4809 + t5468;
  p_output1[0]=t149*t3520 + t3856*t4024;
  p_output1[1]=-1.*t3520*t3856 + t149*t4024;
  p_output1[2]=t5886*t7521 + t7636*t7643;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.4999*t3283 + t3283*t4806 + t5448*t7480;
  p_output1[7]=0.9063*t559 + 0.06*t1973*t559 + t4801*t559;
  p_output1[8]=0;
  p_output1[9]=t3856*t7521 + t149*t7643;
  p_output1[10]=t149*t7521 - 1.*t3856*t7643;
  p_output1[11]=-1.*t4024*t5886 - 1.*t3520*t7636;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-1.*t2548*t4806 - 1.*t3283*t5448 + 0.4999*t7480;
  p_output1[16]=0.9063*t1973 + t1973*t4801 - 0.06*Power(t559,2);
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

#include "fRightSole_map_LeftImpactRelabel.hh"

namespace SymFunction
{

void fRightSole_map_LeftImpactRelabel_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

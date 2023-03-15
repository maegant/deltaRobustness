/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:47 GMT-08:00
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
  double t1184;
  double t296;
  double t644;
  double t1216;
  double t1444;
  double t719;
  double t1291;
  double t1294;
  double t240;
  double t1721;
  double t1878;
  double t2313;
  double t3191;
  double t2901;
  double t215;
  double t4003;
  double t4014;
  double t4103;
  double t1339;
  double t2977;
  double t3607;
  double t3722;
  double t3771;
  double t4313;
  double t4415;
  double t4455;
  double t4539;
  double t4571;
  double t5514;
  double t5520;
  double t5571;
  double t5583;
  double t5644;
  double t5661;
  double t5440;
  double t5455;
  double t5459;
  double t5509;
  double t5672;
  double t5683;
  double t5725;
  double t5736;
  double t5741;
  double t5751;
  double t5920;
  double t5968;
  double t6031;
  double t6049;
  double t6058;
  double t6084;
  double t5410;
  double t5697;
  double t5808;
  double t5818;
  double t5347;
  t1184 = Cos(var2[7]);
  t296 = Cos(var2[8]);
  t644 = Sin(var2[7]);
  t1216 = Sin(var2[8]);
  t1444 = Cos(var2[6]);
  t719 = -1.*t296*t644;
  t1291 = -1.*t1184*t1216;
  t1294 = t719 + t1291;
  t240 = Sin(var2[6]);
  t1721 = t1184*t296;
  t1878 = -1.*t644*t1216;
  t2313 = t1721 + t1878;
  t3191 = Sin(var2[2]);
  t2901 = t1444*t2313;
  t215 = Cos(var2[2]);
  t4003 = t296*t644;
  t4014 = t1184*t1216;
  t4103 = t4003 + t4014;
  t1339 = t240*t1294;
  t2977 = t1339 + t2901;
  t3607 = t1444*t1294;
  t3722 = -1.*t240*t2313;
  t3771 = t3607 + t3722;
  t4313 = -1.*t240*t4103;
  t4415 = t4313 + t2901;
  t4455 = t1444*t4103;
  t4539 = t240*t2313;
  t4571 = t4455 + t4539;
  t5514 = -1.*t296;
  t5520 = 1. + t5514;
  t5571 = -1.3127*t5520;
  t5583 = -1.3127*t296;
  t5644 = -0.06*t1216;
  t5661 = t5571 + t5583 + t5644;
  t5440 = -1.*t1184;
  t5455 = 1. + t5440;
  t5459 = -0.9063*t5455;
  t5509 = -0.06*t296*t644;
  t5672 = t1184*t5661;
  t5683 = t5459 + t5509 + t5672;
  t5725 = 0.06*t1184*t296;
  t5736 = 0.9063*t644;
  t5741 = t644*t5661;
  t5751 = t5725 + t5736 + t5741;
  t5920 = -1.*t1444;
  t5968 = 1. + t5920;
  t6031 = -0.4999*t5968;
  t6049 = t1444*t5683;
  t6058 = -1.*t240*t5751;
  t6084 = t6031 + t6049 + t6058;
  t5410 = 0.4999*t240;
  t5697 = t240*t5683;
  t5808 = t1444*t5751;
  t5818 = t5410 + t5697 + t5808;
  t5347 = -1.*var4[2];
  p_output1[0]=-1.*(t215*t2977 + t3191*t3771)*var4[0] - 1.*(t3191*t4415 + t215*t4571)*var4[1];
  p_output1[1]=-1.*(-1.*t2977*t3191 + t215*t3771)*var4[0] - 1.*(t215*t4415 - 1.*t3191*t4571)*var4[1];
  p_output1[2]=t5347 - 1.*(t4571*t5818 + t4415*t6084)*var4[0] - 1.*(-1.*t2977*t5818 - 1.*t3771*t6084)*var4[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t5347 - 1.*(0.4999*t2313 + t2313*t5683 + t4103*t5751)*var4[0] - 1.*(0.4999*t4103 - 1.*t1294*t5683 - 1.*t2313*t5751)*var4[1];
  p_output1[7]=t5347 - 1.*(0.9063*t296 + 0.06*t1216*t296 + t296*t5661)*var4[0] - 1.*(0.9063*t1216 - 0.06*Power(t296,2) + t1216*t5661)*var4[1];
  p_output1[8]=t5347 + 0.06*var4[1];
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

#include "dxDiscreteMap9_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void dxDiscreteMap9_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

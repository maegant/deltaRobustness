/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:58 GMT-08:00
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
  double t1388;
  double t626;
  double t902;
  double t1561;
  double t622;
  double t943;
  double t1636;
  double t1724;
  double t1752;
  double t1794;
  double t2755;
  double t2821;
  double t3033;
  double t3071;
  double t3233;
  double t1893;
  double t2072;
  double t2171;
  double t3726;
  double t4059;
  double t4145;
  double t4725;
  double t5074;
  double t5090;
  double t5112;
  double t5277;
  double t5909;
  double t5931;
  double t4670;
  double t5395;
  double t5418;
  double t5424;
  double t5479;
  double t5691;
  double t5871;
  double t5878;
  double t5894;
  double t6051;
  double t6063;
  double t6107;
  double t6204;
  double t6305;
  t1388 = Cos(var1[3]);
  t626 = Cos(var1[4]);
  t902 = Sin(var1[3]);
  t1561 = Sin(var1[4]);
  t622 = Cos(var1[2]);
  t943 = -1.*t626*t902;
  t1636 = -1.*t1388*t1561;
  t1724 = t943 + t1636;
  t1752 = t622*t1724;
  t1794 = Sin(var1[2]);
  t2755 = -1.*t1388*t626;
  t2821 = t902*t1561;
  t3033 = t2755 + t2821;
  t3071 = t1794*t3033;
  t3233 = t1752 + t3071;
  t1893 = t1388*t626;
  t2072 = -1.*t902*t1561;
  t2171 = t1893 + t2072;
  t3726 = -1.*t1794*t1724;
  t4059 = t622*t3033;
  t4145 = t3726 + t4059;
  t4725 = -1.*t626;
  t5074 = 1. + t4725;
  t5090 = -0.9063*t5074;
  t5112 = -1.078185*t626;
  t5277 = t5090 + t5112;
  t5909 = t1388*t5277;
  t5931 = 0.17188499999999995*t902*t1561;
  t4670 = 0.4999*t902;
  t5395 = t5277*t902;
  t5418 = -0.17188499999999995*t1388*t1561;
  t5424 = t4670 + t5395 + t5418;
  t5479 = t5424*t2171;
  t5691 = 0.17188499999999995*t1388*t1561;
  t5871 = -1.*t1388;
  t5878 = 1. + t5871;
  t5894 = -0.4999*t5878;
  t6051 = t5894 + t5909 + t5931;
  t6063 = t1724*t6051;
  t6107 = t626*t902;
  t6204 = t1388*t1561;
  t6305 = t6107 + t6204;
  p_output1[0]=var2[4]*(0.07323676079999998*(t1752 - 1.*t1794*t2171)*var2[2] + 0.07323676079999998*t3233*var2[3] + 0.07323676079999998*t3233*var2[4]);
  p_output1[1]=var2[4]*(0.07323676079999998*(t3726 - 1.*t2171*t622)*var2[2] + 0.07323676079999998*t4145*var2[3] + 0.07323676079999998*t4145*var2[4]);
  p_output1[2]=var2[4]*(0.07323676079999998*(t5479 + t6063 + (0.4999*t1388 + t5909 + t5931)*t6305 + t2171*(t5691 - 0.4999*t902 - 1.*t5277*t902))*var2[3] + 0.07323676079999998*(t5479 + t6063 + (t5931 - 0.17188499999999995*t1388*t626)*t6305 + t2171*(t5691 + 0.17188499999999995*t626*t902))*var2[4]);
  p_output1[3]=0.07323676079999998*(-0.4999*t1561 - 1.*t1561*t5277 - 0.17188499999999995*t1561*t626)*Power(var2[4],2);
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "Ce1_vec_L3_J5_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L3_J5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

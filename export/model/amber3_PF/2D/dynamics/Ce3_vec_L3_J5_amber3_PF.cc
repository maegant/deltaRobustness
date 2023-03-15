/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:07 GMT-08:00
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
  double t475;
  double t143;
  double t218;
  double t776;
  double t1265;
  double t431;
  double t941;
  double t1100;
  double t128;
  double t2010;
  double t2067;
  double t2225;
  double t3552;
  double t3883;
  double t3897;
  double t3900;
  double t3910;
  double t4711;
  double t4741;
  double t1215;
  double t2406;
  double t4930;
  double t4931;
  double t4948;
  double t3504;
  double t3942;
  double t3987;
  double t4042;
  double t4202;
  double t4476;
  double t4636;
  double t4705;
  double t4709;
  double t4746;
  double t4764;
  double t4765;
  double t4769;
  double t4795;
  double t4951;
  double t4985;
  double t4989;
  double t4998;
  double t5029;
  double t5052;
  t475 = Cos(var1[3]);
  t143 = Cos(var1[4]);
  t218 = Sin(var1[3]);
  t776 = Sin(var1[4]);
  t1265 = Cos(var1[2]);
  t431 = -1.*t143*t218;
  t941 = -1.*t475*t776;
  t1100 = t431 + t941;
  t128 = Sin(var1[2]);
  t2010 = t475*t143;
  t2067 = -1.*t218*t776;
  t2225 = t2010 + t2067;
  t3552 = -1.*t143;
  t3883 = 1. + t3552;
  t3897 = -0.9063*t3883;
  t3900 = -1.078185*t143;
  t3910 = t3897 + t3900;
  t4711 = t475*t3910;
  t4741 = 0.17188499999999995*t218*t776;
  t1215 = -1.*t128*t1100;
  t2406 = t1265*t1100;
  t4930 = -1.*t475*t143;
  t4931 = t218*t776;
  t4948 = t4930 + t4931;
  t3504 = 0.4999*t218;
  t3942 = t3910*t218;
  t3987 = -0.17188499999999995*t475*t776;
  t4042 = t3504 + t3942 + t3987;
  t4202 = t4042*t2225;
  t4476 = 0.17188499999999995*t475*t776;
  t4636 = -1.*t475;
  t4705 = 1. + t4636;
  t4709 = -0.4999*t4705;
  t4746 = t4709 + t4711 + t4741;
  t4764 = t1100*t4746;
  t4765 = t143*t218;
  t4769 = t475*t776;
  t4795 = t4765 + t4769;
  t4951 = t1265*t4948;
  t4985 = t1215 + t4951;
  t4989 = -0.07323676079999998*var2[1]*t4985;
  t4998 = t128*t4948;
  t5029 = t2406 + t4998;
  t5052 = -0.07323676079999998*var2[0]*t5029;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.07323676079999998*(-1.*t128*t2225 + t2406)*var2[0] - 0.07323676079999998*(t1215 - 1.*t1265*t2225)*var2[1])*var2[4];
  p_output1[3]=(t4989 + t5052 - 0.07323676079999998*(t4202 + t2225*(-0.4999*t218 - 1.*t218*t3910 + t4476) + t4764 + (t4711 + t4741 + 0.4999*t475)*t4795)*var2[2])*var2[4];
  p_output1[4]=(t4989 + t5052 - 0.07323676079999998*(t4202 + t2225*(0.17188499999999995*t143*t218 + t4476) + t4764 + (t4741 - 0.17188499999999995*t143*t475)*t4795)*var2[2] - 0.07323676079999998*(-0.4999*t776 - 0.17188499999999995*t143*t776 - 1.*t3910*t776)*var2[3])*var2[4];
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

#include "Ce3_vec_L3_J5_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L3_J5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

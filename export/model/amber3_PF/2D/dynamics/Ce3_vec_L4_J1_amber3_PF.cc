/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:10 GMT-08:00
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
  double t609;
  double t1204;
  double t1426;
  double t2010;
  double t2278;
  double t2299;
  double t2378;
  double t2599;
  double t2800;
  double t2860;
  double t2891;
  double t3095;
  double t3105;
  double t4462;
  double t4476;
  double t4513;
  double t4526;
  double t4709;
  double t2544;
  double t2874;
  double t3195;
  double t3234;
  double t3504;
  double t3872;
  double t3897;
  double t3900;
  double t3942;
  double t3986;
  double t3987;
  double t4016;
  double t4042;
  double t4202;
  double t4210;
  double t4211;
  double t4765;
  double t4711;
  double t4741;
  double t4746;
  double t4764;
  double t4769;
  double t4795;
  double t4828;
  double t4868;
  t609 = Cos(var1[5]);
  t1204 = Sin(var1[2]);
  t1426 = -1.*t609*t1204;
  t2010 = Cos(var1[2]);
  t2278 = Sin(var1[5]);
  t2299 = -1.*t2010*t2278;
  t2378 = t1426 + t2299;
  t2599 = t2010*t609;
  t2800 = -1.*t1204*t2278;
  t2860 = t2599 + t2800;
  t2891 = t609*t1204;
  t3095 = t2010*t2278;
  t3105 = t2891 + t3095;
  t4462 = -1.*t609;
  t4476 = 1. + t4462;
  t4513 = -0.4999*t4476;
  t4526 = -0.6493*t609;
  t4709 = t4513 + t4526;
  t2544 = -0.25592966999999994*var2[5]*t2378;
  t2874 = 6.8522*t2378*t2860;
  t3195 = 6.8522*t3105*t2860;
  t3234 = t2874 + t3195;
  t3504 = 0.5*var2[0]*t3234;
  t3872 = Power(t2378,2);
  t3897 = 3.4261*t3872;
  t3900 = 3.4261*t2378*t3105;
  t3942 = Power(t2860,2);
  t3986 = 3.4261*t3942;
  t3987 = -1.*t2010*t609;
  t4016 = t1204*t2278;
  t4042 = t3987 + t4016;
  t4202 = 3.4261*t2860*t4042;
  t4210 = t3897 + t3900 + t3986 + t4202;
  t4211 = 0.5*var2[1]*t4210;
  t4765 = t4709*t609;
  t4711 = t4709*t2278;
  t4741 = 0.14939999999999998*t609*t2278;
  t4746 = t4711 + t4741;
  t4764 = 3.4261*t4746*t2860;
  t4769 = Power(t2278,2);
  t4795 = -0.14939999999999998*t4769;
  t4828 = t4765 + t4795;
  t4868 = 3.4261*t2378*t4828;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(t2544 + t3504 + t4211 + 0.5*(t4764 + t4868)*var2[2]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[0]*(t2544 + t3504 + t4211 + 0.5*(t4764 + t4868 + 3.4261*t2860*(-1.*t2278*t4709 - 0.14939999999999998*t2278*t609) + 3.4261*t3105*(t4765 + 0.14939999999999998*Power(t609,2)))*var2[2]);
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

#include "Ce3_vec_L4_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L4_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:02 GMT-08:00
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
  double t677;
  double t997;
  double t1509;
  double t1893;
  double t2190;
  double t2277;
  double t2366;
  double t3454;
  double t3481;
  double t3620;
  double t2451;
  double t2821;
  double t3033;
  double t3071;
  double t3233;
  double t3423;
  double t3628;
  double t3785;
  double t3922;
  double t3963;
  double t4059;
  double t4145;
  double t4519;
  double t4681;
  double t5090;
  double t5418;
  double t5788;
  double t5894;
  double t5909;
  double t5931;
  double t5953;
  double t5996;
  double t6063;
  double t6107;
  double t6204;
  double t6305;
  double t6330;
  double t6386;
  double t6413;
  double t6423;
  t677 = Cos(var1[5]);
  t997 = Sin(var1[2]);
  t1509 = -1.*t677*t997;
  t1893 = Cos(var1[2]);
  t2190 = Sin(var1[5]);
  t2277 = -1.*t1893*t2190;
  t2366 = t1509 + t2277;
  t3454 = t1893*t677;
  t3481 = -1.*t997*t2190;
  t3620 = t3454 + t3481;
  t2451 = Power(t2366,2);
  t2821 = 3.4261*t2451;
  t3033 = t677*t997;
  t3071 = t1893*t2190;
  t3233 = t3033 + t3071;
  t3423 = 3.4261*t2366*t3233;
  t3628 = Power(t3620,2);
  t3785 = 3.4261*t3628;
  t3922 = -1.*t1893*t677;
  t3963 = t997*t2190;
  t4059 = t3922 + t3963;
  t4145 = 3.4261*t3620*t4059;
  t4519 = t2821 + t3423 + t3785 + t4145;
  t4681 = 6.8522*t2366*t3620;
  t5090 = 6.8522*t2366*t4059;
  t5418 = t4681 + t5090;
  t5788 = -1.*t677;
  t5894 = 1. + t5788;
  t5909 = -0.4999*t5894;
  t5931 = -0.6493*t677;
  t5953 = t5909 + t5931;
  t5996 = t5953*t2190;
  t6063 = 0.14939999999999998*t677*t2190;
  t6107 = t5996 + t6063;
  t6204 = 3.4261*t2366*t6107;
  t6305 = t5953*t677;
  t6330 = Power(t2190,2);
  t6386 = -0.14939999999999998*t6330;
  t6413 = t6305 + t6386;
  t6423 = 3.4261*t4059*t6413;
  p_output1[0]=var2[1]*(-0.5*t4519*var2[2] - 0.5*t4519*var2[5]);
  p_output1[1]=var2[1]*(-0.5*t5418*var2[2] - 0.5*t5418*var2[5]);
  p_output1[2]=var2[1]*(-0.5*(t6204 + t6423)*var2[2] - 0.5*(t6204 + t6423 + 3.4261*t2366*(-1.*t2190*t5953 - 0.14939999999999998*t2190*t677) + 3.4261*t3620*(t6305 + 0.14939999999999998*Power(t677,2)))*var2[5]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[1]*(0.25592966999999994*t4059*var2[2] + 0.25592966999999994*t4059*var2[5]);
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

#include "Ce1_vec_L4_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L4_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

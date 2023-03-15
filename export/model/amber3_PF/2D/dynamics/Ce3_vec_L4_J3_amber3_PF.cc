/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:11 GMT-08:00
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
  double t53;
  double t2874;
  double t3872;
  double t3105;
  double t1048;
  double t1461;
  double t2378;
  double t2538;
  double t2813;
  double t3985;
  double t3986;
  double t3992;
  double t2891;
  double t2993;
  double t3095;
  double t4016;
  double t4042;
  double t4202;
  double t4513;
  double t5052;
  double t5072;
  double t5089;
  double t3152;
  double t3897;
  double t3900;
  double t3942;
  double t4765;
  double t5108;
  double t5164;
  double t5165;
  double t4832;
  double t4886;
  double t4926;
  double t4931;
  double t4948;
  t53 = Cos(var1[5]);
  t2874 = Sin(var1[5]);
  t3872 = Sin(var1[2]);
  t3105 = Cos(var1[2]);
  t1048 = -1.*t53;
  t1461 = 1. + t1048;
  t2378 = -0.4999*t1461;
  t2538 = -0.6493*t53;
  t2813 = t2378 + t2538;
  t3985 = -1.*t53*t3872;
  t3986 = -1.*t3105*t2874;
  t3992 = t3985 + t3986;
  t2891 = t2813*t2874;
  t2993 = 0.14939999999999998*t53*t2874;
  t3095 = t2891 + t2993;
  t4016 = t2813*t53;
  t4042 = Power(t2874,2);
  t4202 = -0.14939999999999998*t4042;
  t4513 = t4016 + t4202;
  t5052 = -1.*t2813*t2874;
  t5072 = -0.14939999999999998*t53*t2874;
  t5089 = t5052 + t5072;
  t3152 = t3105*t53;
  t3897 = -1.*t3872*t2874;
  t3900 = t3152 + t3897;
  t3942 = 3.4261*t3095*t3900;
  t4765 = 3.4261*t3992*t4513;
  t5108 = Power(t53,2);
  t5164 = 0.14939999999999998*t5108;
  t5165 = t4016 + t5164;
  t4832 = 3.4261*t3992*t3095;
  t4886 = -1.*t3105*t53;
  t4926 = t3872*t2874;
  t4931 = t4886 + t4926;
  t4948 = 3.4261*t4931*t4513;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(t3942 + t4765)*var2[0] + 0.5*(t4832 + t4948)*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[2]*(0.5*(t3942 + t4765 + 3.4261*t3900*t5089 + 3.4261*t5165*(t2874*t3105 + t3872*t53))*var2[0] + 0.5*(t4832 + t4948 + 3.4261*t3992*t5089 + 3.4261*t3900*t5165)*var2[1] + 0.5*(6.8522*t4513*t5089 + 6.8522*t3095*t5165)*var2[2] - 0.25592966999999994*t5089*var2[5]);
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

#include "Ce3_vec_L4_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L4_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

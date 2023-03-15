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
  double t1267;
  double t3233;
  double t3628;
  double t3542;
  double t2366;
  double t2451;
  double t2821;
  double t3033;
  double t3071;
  double t4605;
  double t3620;
  double t3785;
  double t3963;
  double t3243;
  double t3423;
  double t3454;
  double t4059;
  double t4145;
  double t4342;
  double t4592;
  double t4630;
  double t4649;
  double t4670;
  double t4681;
  double t5909;
  double t5931;
  double t5996;
  double t6413;
  double t5424;
  double t5485;
  double t5639;
  double t6476;
  double t6501;
  double t6504;
  double t6588;
  t1267 = Cos(var1[5]);
  t3233 = Sin(var1[5]);
  t3628 = Sin(var1[2]);
  t3542 = Cos(var1[2]);
  t2366 = -1.*t1267;
  t2451 = 1. + t2366;
  t2821 = -0.4999*t2451;
  t3033 = -0.6493*t1267;
  t3071 = t2821 + t3033;
  t4605 = t3071*t1267;
  t3620 = t3542*t1267;
  t3785 = -1.*t3628*t3233;
  t3963 = t3620 + t3785;
  t3243 = t3071*t3233;
  t3423 = 0.14939999999999998*t1267*t3233;
  t3454 = t3243 + t3423;
  t4059 = 3.4261*t3454*t3963;
  t4145 = -1.*t1267*t3628;
  t4342 = -1.*t3542*t3233;
  t4592 = t4145 + t4342;
  t4630 = Power(t3233,2);
  t4649 = -0.14939999999999998*t4630;
  t4670 = t4605 + t4649;
  t4681 = 3.4261*t4592*t4670;
  t5909 = -1.*t3071*t3233;
  t5931 = -0.14939999999999998*t1267*t3233;
  t5996 = t5909 + t5931;
  t6413 = 3.4261*t4592*t3454;
  t5424 = Power(t1267,2);
  t5485 = 0.14939999999999998*t5424;
  t5639 = t4605 + t5485;
  t6476 = -1.*t3542*t1267;
  t6501 = t3628*t3233;
  t6504 = t6476 + t6501;
  t6588 = 3.4261*t6504*t4670;
  p_output1[0]=var2[2]*(-0.5*(t4059 + t4681)*var2[2] - 0.5*(t4059 + t4681 + 3.4261*(t3233*t3542 + t1267*t3628)*t5639 + 3.4261*t3963*t5996)*var2[5]);
  p_output1[1]=var2[2]*(-0.5*(t6413 + t6588)*var2[2] - 0.5*(3.4261*t3963*t5639 + 3.4261*t4592*t5996 + t6413 + t6588)*var2[5]);
  p_output1[2]=-0.5*(6.8522*t3454*t5639 + 6.8522*t4670*t5996)*var2[2]*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0.25592966999999994*t5996*var2[2]*var2[5];
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

#include "Ce1_vec_L4_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L4_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

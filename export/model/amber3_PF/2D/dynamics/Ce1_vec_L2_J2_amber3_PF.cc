/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:50 GMT-08:00
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
  double t874;
  double t1038;
  double t1041;
  double t1580;
  double t1765;
  double t2200;
  double t2218;
  double t2561;
  double t2742;
  double t2762;
  double t2265;
  double t2297;
  double t2318;
  double t2401;
  double t2413;
  double t2510;
  double t3054;
  double t3199;
  double t3260;
  double t3299;
  double t3530;
  double t3701;
  double t3832;
  double t4933;
  double t4975;
  double t4980;
  double t5936;
  double t6082;
  double t6288;
  double t6328;
  double t6567;
  double t6630;
  double t6663;
  double t6665;
  double t6807;
  double t6858;
  double t6992;
  double t7133;
  double t7137;
  double t7254;
  t874 = Cos(var1[3]);
  t1038 = Sin(var1[2]);
  t1041 = -1.*t874*t1038;
  t1580 = Cos(var1[2]);
  t1765 = Sin(var1[3]);
  t2200 = -1.*t1580*t1765;
  t2218 = t1041 + t2200;
  t2561 = t1580*t874;
  t2742 = -1.*t1038*t1765;
  t2762 = t2561 + t2742;
  t2265 = Power(t2218,2);
  t2297 = 3.4261*t2265;
  t2318 = t874*t1038;
  t2401 = t1580*t1765;
  t2413 = t2318 + t2401;
  t2510 = 3.4261*t2218*t2413;
  t3054 = Power(t2762,2);
  t3199 = 3.4261*t3054;
  t3260 = -1.*t1580*t874;
  t3299 = t1038*t1765;
  t3530 = t3260 + t3299;
  t3701 = 3.4261*t2762*t3530;
  t3832 = t2297 + t2510 + t3199 + t3701;
  t4933 = 6.8522*t2218*t2762;
  t4975 = 6.8522*t2218*t3530;
  t4980 = t4933 + t4975;
  t5936 = -1.*t874;
  t6082 = 1. + t5936;
  t6288 = -0.4999*t6082;
  t6328 = -0.6493*t874;
  t6567 = t6288 + t6328;
  t6630 = t6567*t1765;
  t6663 = 0.14939999999999998*t874*t1765;
  t6665 = t6630 + t6663;
  t6807 = 3.4261*t2218*t6665;
  t6858 = t6567*t874;
  t6992 = Power(t1765,2);
  t7133 = -0.14939999999999998*t6992;
  t7137 = t6858 + t7133;
  t7254 = 3.4261*t3530*t7137;
  p_output1[0]=var2[1]*(-0.5*t3832*var2[2] - 0.5*t3832*var2[3]);
  p_output1[1]=var2[1]*(-0.5*t4980*var2[2] - 0.5*t4980*var2[3]);
  p_output1[2]=var2[1]*(-0.5*(t6807 + t7254)*var2[2] - 0.5*(t6807 + t7254 + 3.4261*t2218*(-1.*t1765*t6567 - 0.14939999999999998*t1765*t874) + 3.4261*t2762*(t6858 + 0.14939999999999998*Power(t874,2)))*var2[3]);
  p_output1[3]=var2[1]*(0.25592966999999994*t3530*var2[2] + 0.25592966999999994*t3530*var2[3]);
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

#include "Ce1_vec_L2_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L2_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

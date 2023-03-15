/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:54 GMT-08:00
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
  double t1852;
  double t699;
  double t833;
  double t2101;
  double t41;
  double t1457;
  double t2674;
  double t2888;
  double t2949;
  double t3040;
  double t3715;
  double t3808;
  double t3833;
  double t3847;
  double t3850;
  double t3117;
  double t3134;
  double t3166;
  double t4082;
  double t4317;
  double t4346;
  double t4553;
  double t4575;
  double t4650;
  double t4747;
  double t4810;
  double t5392;
  double t5407;
  double t4538;
  double t4875;
  double t4909;
  double t4912;
  double t4918;
  double t5091;
  double t5173;
  double t5322;
  double t5330;
  double t5433;
  double t5437;
  double t5441;
  double t5546;
  double t5550;
  t1852 = Cos(var1[6]);
  t699 = Cos(var1[7]);
  t833 = Sin(var1[6]);
  t2101 = Sin(var1[7]);
  t41 = Cos(var1[2]);
  t1457 = -1.*t699*t833;
  t2674 = -1.*t1852*t2101;
  t2888 = t1457 + t2674;
  t2949 = t41*t2888;
  t3040 = Sin(var1[2]);
  t3715 = -1.*t1852*t699;
  t3808 = t833*t2101;
  t3833 = t3715 + t3808;
  t3847 = t3040*t3833;
  t3850 = t2949 + t3847;
  t3117 = t1852*t699;
  t3134 = -1.*t833*t2101;
  t3166 = t3117 + t3134;
  t4082 = -1.*t3040*t2888;
  t4317 = t41*t3833;
  t4346 = t4082 + t4317;
  t4553 = -1.*t699;
  t4575 = 1. + t4553;
  t4650 = -0.9063*t4575;
  t4747 = -1.0567*t699;
  t4810 = t4650 + t4747;
  t5392 = t1852*t4810;
  t5407 = 0.15039999999999998*t833*t2101;
  t4538 = 0.4999*t833;
  t4875 = t4810*t833;
  t4909 = -0.15039999999999998*t1852*t2101;
  t4912 = t4538 + t4875 + t4909;
  t4918 = t4912*t3166;
  t5091 = 0.15039999999999998*t1852*t2101;
  t5173 = -1.*t1852;
  t5322 = 1. + t5173;
  t5330 = -0.4999*t5322;
  t5433 = t5330 + t5392 + t5407;
  t5437 = t2888*t5433;
  t5441 = t699*t833;
  t5546 = t1852*t2101;
  t5550 = t5441 + t5546;
  p_output1[0]=var2[7]*(0.26996047999999995*(t2949 - 1.*t3040*t3166)*var2[2] + 0.26996047999999995*t3850*var2[6] + 0.26996047999999995*t3850*var2[7]);
  p_output1[1]=var2[7]*(0.26996047999999995*(t4082 - 1.*t3166*t41)*var2[2] + 0.26996047999999995*t4346*var2[6] + 0.26996047999999995*t4346*var2[7]);
  p_output1[2]=var2[7]*(0.26996047999999995*(t4918 + t5437 + (0.4999*t1852 + t5392 + t5407)*t5550 + t3166*(t5091 - 0.4999*t833 - 1.*t4810*t833))*var2[6] + 0.26996047999999995*(t4918 + t5437 + t5550*(t5407 - 0.15039999999999998*t1852*t699) + t3166*(t5091 + 0.15039999999999998*t699*t833))*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.26996047999999995*(-0.4999*t2101 - 1.*t2101*t4810 - 0.15039999999999998*t2101*t699)*Power(var2[7],2);
  p_output1[7]=0;
  p_output1[8]=0;
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec_L6_J8_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L6_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:25 GMT-08:00
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
  double t1995;
  double t2386;
  double t2873;
  double t2514;
  double t2004;
  double t2150;
  double t2207;
  double t2250;
  double t2291;
  double t3617;
  double t2819;
  double t2972;
  double t3005;
  double t2417;
  double t2432;
  double t2493;
  double t3025;
  double t3044;
  double t3182;
  double t3312;
  double t3692;
  double t3694;
  double t3773;
  double t3827;
  double t5306;
  double t5460;
  double t5630;
  double t6599;
  double t4131;
  double t4171;
  double t4647;
  double t7644;
  double t7719;
  double t7745;
  double t7749;
  t1995 = Cos(var1[3]);
  t2386 = Sin(var1[3]);
  t2873 = Sin(var1[2]);
  t2514 = Cos(var1[2]);
  t2004 = -1.*t1995;
  t2150 = 1. + t2004;
  t2207 = -0.4999*t2150;
  t2250 = -0.6493*t1995;
  t2291 = t2207 + t2250;
  t3617 = t2291*t1995;
  t2819 = t2514*t1995;
  t2972 = -1.*t2873*t2386;
  t3005 = t2819 + t2972;
  t2417 = t2291*t2386;
  t2432 = 0.14939999999999998*t1995*t2386;
  t2493 = t2417 + t2432;
  t3025 = 3.4261*t2493*t3005;
  t3044 = -1.*t1995*t2873;
  t3182 = -1.*t2514*t2386;
  t3312 = t3044 + t3182;
  t3692 = Power(t2386,2);
  t3694 = -0.14939999999999998*t3692;
  t3773 = t3617 + t3694;
  t3827 = 3.4261*t3312*t3773;
  t5306 = -1.*t2291*t2386;
  t5460 = -0.14939999999999998*t1995*t2386;
  t5630 = t5306 + t5460;
  t6599 = 3.4261*t3312*t2493;
  t4131 = Power(t1995,2);
  t4171 = 0.14939999999999998*t4131;
  t4647 = t3617 + t4171;
  t7644 = -1.*t2514*t1995;
  t7719 = t2873*t2386;
  t7745 = t7644 + t7719;
  t7749 = 3.4261*t7745*t3773;
  p_output1[0]=var2[2]*(-0.5*(t3025 + t3827)*var2[2] - 0.5*(t3025 + t3827 + 3.4261*(t2386*t2514 + t1995*t2873)*t4647 + 3.4261*t3005*t5630)*var2[3]);
  p_output1[1]=var2[2]*(-0.5*(t6599 + t7749)*var2[2] - 0.5*(3.4261*t3005*t4647 + 3.4261*t3312*t5630 + t6599 + t7749)*var2[3]);
  p_output1[2]=-0.5*(6.8522*t2493*t4647 + 6.8522*t3773*t5630)*var2[2]*var2[3];
  p_output1[3]=0.25592966999999994*t5630*var2[2]*var2[3];
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "Ce1_vec_L2_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L2_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

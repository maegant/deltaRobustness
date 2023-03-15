/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:34 GMT-08:00
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
  double t1459;
  double t541;
  double t570;
  double t1926;
  double t504;
  double t1383;
  double t2065;
  double t2771;
  double t2772;
  double t2783;
  double t2971;
  double t2973;
  double t3004;
  double t3020;
  double t3058;
  double t3218;
  double t3224;
  double t3424;
  double t3484;
  double t3636;
  double t4079;
  double t3992;
  double t4012;
  double t4045;
  double t4054;
  double t4118;
  double t4251;
  double t4233;
  double t4286;
  double t4194;
  double t4217;
  double t4778;
  double t4804;
  double t4883;
  double t4885;
  double t4888;
  double t4904;
  double t4907;
  double t4923;
  double t4977;
  double t4981;
  double t3888;
  double t3906;
  double t3921;
  double t3933;
  double t3214;
  double t3676;
  double t3700;
  double t3708;
  double t3709;
  double t5341;
  double t5378;
  double t5397;
  double t5423;
  double t5541;
  double t4334;
  double t4375;
  double t4646;
  double t4661;
  double t4695;
  double t4887;
  double t4986;
  double t5032;
  double t5096;
  double t5110;
  double t5127;
  double t6112;
  double t6154;
  double t6169;
  double t6188;
  double t6221;
  double t6238;
  double t5625;
  double t5635;
  double t5653;
  double t5875;
  double t5910;
  double t5925;
  double t5949;
  double t5950;
  double t5954;
  double t5996;
  double t6011;
  double t6017;
  double t6021;
  double t6036;
  double t6052;
  double t6067;
  double t6081;
  double t6218;
  double t6273;
  double t6286;
  double t6416;
  double t6417;
  double t6428;
  double t6456;
  double t6304;
  t1459 = Cos(var1[6]);
  t541 = Cos(var1[7]);
  t570 = Sin(var1[6]);
  t1926 = Sin(var1[7]);
  t504 = Sin(var1[2]);
  t1383 = -1.*t541*t570;
  t2065 = -1.*t1459*t1926;
  t2771 = t1383 + t2065;
  t2772 = -1.*t504*t2771;
  t2783 = Cos(var1[2]);
  t2971 = t1459*t541;
  t2973 = -1.*t570*t1926;
  t3004 = t2971 + t2973;
  t3020 = -1.*t2783*t3004;
  t3058 = t2772 + t3020;
  t3218 = -1.*t541;
  t3224 = 1. + t3218;
  t3424 = -0.9063*t3224;
  t3484 = -1.0567*t541;
  t3636 = t3424 + t3484;
  t4079 = -1.*t504*t3004;
  t3992 = t541*t570;
  t4012 = t1459*t1926;
  t4045 = t3992 + t4012;
  t4054 = -1.*t2783*t4045;
  t4118 = t4054 + t4079;
  t4251 = t2783*t3004;
  t4233 = -1.*t504*t4045;
  t4286 = t4233 + t4251;
  t4194 = t2783*t2771;
  t4217 = t4194 + t4079;
  t4778 = 0.4999*t570;
  t4804 = t3636*t570;
  t4883 = -0.15039999999999998*t1459*t1926;
  t4885 = t4778 + t4804 + t4883;
  t4888 = -1.*t1459;
  t4904 = 1. + t4888;
  t4907 = -0.4999*t4904;
  t4923 = t1459*t3636;
  t4977 = 0.15039999999999998*t570*t1926;
  t4981 = t4907 + t4923 + t4977;
  t3888 = 0.4999*t1926;
  t3906 = t3636*t1926;
  t3921 = 0.15039999999999998*t541*t1926;
  t3933 = t3888 + t3906 + t3921;
  t3214 = 0.4999*t541;
  t3676 = t3636*t541;
  t3700 = Power(t1926,2);
  t3708 = -0.15039999999999998*t3700;
  t3709 = t3214 + t3676 + t3708;
  t5341 = -1.*t1459*t541;
  t5378 = t570*t1926;
  t5397 = t5341 + t5378;
  t5423 = t2783*t5397;
  t5541 = t2772 + t5423;
  t4334 = t504*t2771;
  t4375 = t4334 + t4251;
  t4646 = t2783*t4045;
  t4661 = t504*t3004;
  t4695 = t4646 + t4661;
  t4887 = -1.*t4885*t3004;
  t4986 = -1.*t2771*t4981;
  t5032 = t4887 + t4986;
  t5096 = t4885*t4045;
  t5110 = t3004*t4981;
  t5127 = t5096 + t5110;
  t6112 = -0.4999*t570;
  t6154 = -1.*t3636*t570;
  t6169 = 0.15039999999999998*t1459*t1926;
  t6188 = t6112 + t6154 + t6169;
  t6221 = 0.4999*t1459;
  t6238 = t6221 + t4923 + t4977;
  t5625 = -0.26996047999999995*var2[7]*t5541;
  t5635 = 3.5899*t3933*t4217;
  t5653 = 3.5899*t3709*t5541;
  t5875 = 7.1798*t4286*t4217;
  t5910 = 7.1798*t4217*t5541;
  t5925 = t5875 + t5910;
  t5949 = 0.5*var2[1]*t5925;
  t5950 = 3.5899*t4375*t4286;
  t5954 = 3.5899*t4217*t4695;
  t5996 = 3.5899*t4375*t5541;
  t6011 = t504*t5397;
  t6017 = t4194 + t6011;
  t6021 = 3.5899*t4217*t6017;
  t6036 = t5950 + t5954 + t5996 + t6021;
  t6052 = 0.5*var2[0]*t6036;
  t6067 = 3.5899*t4217*t5032;
  t6081 = t4885*t3004;
  t6218 = t2771*t4981;
  t6273 = 3.5899*t5127*t5541;
  t6286 = -1.*t2771*t4885;
  t6416 = 0.15039999999999998*t541*t570;
  t6417 = t6416 + t6169;
  t6428 = -0.15039999999999998*t1459*t541;
  t6456 = t6428 + t4977;
  t6304 = -1.*t4981*t5397;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(0.5*(3.5899*Power(t4217,2) + 3.5899*Power(t4286,2) + 3.5899*t3058*t4375 + 3.5899*t4118*t4695)*var2[0] + 0.5*(7.1798*t3058*t4217 + 7.1798*t4118*t4286)*var2[1] + 0.5*(3.5899*t4118*t5032 + 3.5899*t3058*t5127)*var2[2] + 0.5*(3.5899*t3058*t3709 + 3.5899*t3933*t4118)*var2[6] - 0.26996047999999995*t3058*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[1]*(t5625 + t5949 + t6052 + 0.5*(t6067 + 3.5899*t4217*(t6081 + t3004*t6188 + t6218 + t4045*t6238) + t6273 + 3.5899*t4286*(-1.*t2771*t6188 - 1.*t3004*t6238 + t6286 + t6304))*var2[2] + 0.5*(t5635 + t5653)*var2[6]);
  p_output1[7]=var2[1]*(t5625 + t5949 + t6052 + 0.5*(t6067 + t6273 + 3.5899*t4286*(t6286 + t6304 - 1.*t2771*t6417 - 1.*t3004*t6456) + 3.5899*t4217*(t6081 + t6218 + t3004*t6417 + t4045*t6456))*var2[2] + 0.5*(3.5899*t4217*(-0.4999*t1926 - 1.*t1926*t3636 - 0.15039999999999998*t1926*t541) + 3.5899*t4286*(t3214 + t3676 + 0.15039999999999998*Power(t541,2)) + t5635 + t5653)*var2[6]);
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

#include "Ce3_vec_L6_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L6_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

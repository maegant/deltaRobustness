/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:35 GMT-08:00
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
  double t1229;
  double t318;
  double t328;
  double t1890;
  double t2971;
  double t3058;
  double t3213;
  double t3676;
  double t3700;
  double t3708;
  double t3709;
  double t3726;
  double t2552;
  double t3921;
  double t3933;
  double t3992;
  double t138;
  double t3484;
  double t3783;
  double t3819;
  double t3888;
  double t652;
  double t2476;
  double t2496;
  double t4012;
  double t4039;
  double t4087;
  double t4091;
  double t4118;
  double t4128;
  double t3906;
  double t4168;
  double t4170;
  double t3214;
  double t4286;
  double t4297;
  double t4298;
  double t4695;
  double t4697;
  double t4698;
  double t4715;
  double t4778;
  double t4804;
  double t4883;
  double t4907;
  double t4923;
  double t4977;
  double t5032;
  double t4448;
  double t4449;
  double t4217;
  double t5494;
  double t5506;
  double t5541;
  double t4345;
  double t4375;
  double t4378;
  double t5321;
  double t5378;
  double t5423;
  double t5625;
  double t5632;
  double t6067;
  double t6081;
  double t5096;
  double t5110;
  double t5127;
  double t5177;
  double t5178;
  double t6348;
  double t6351;
  double t6352;
  double t6357;
  double t6360;
  double t6370;
  double t6375;
  double t5254;
  double t5270;
  double t5300;
  double t5313;
  double t5875;
  double t5950;
  double t5954;
  double t5996;
  double t6551;
  double t6584;
  double t6625;
  double t6112;
  double t6200;
  double t6218;
  double t6221;
  double t6242;
  double t6260;
  double t6269;
  t1229 = Cos(var1[6]);
  t318 = Cos(var1[7]);
  t328 = Sin(var1[6]);
  t1890 = Sin(var1[7]);
  t2971 = t1229*t318;
  t3058 = -1.*t328*t1890;
  t3213 = t2971 + t3058;
  t3676 = -1.*t318;
  t3700 = 1. + t3676;
  t3708 = -0.9063*t3700;
  t3709 = -1.0567*t318;
  t3726 = t3708 + t3709;
  t2552 = Sin(var1[2]);
  t3921 = -1.*t318*t328;
  t3933 = -1.*t1229*t1890;
  t3992 = t3921 + t3933;
  t138 = Cos(var1[2]);
  t3484 = 0.4999*t328;
  t3783 = t3726*t328;
  t3819 = -0.15039999999999998*t1229*t1890;
  t3888 = t3484 + t3783 + t3819;
  t652 = t318*t328;
  t2476 = t1229*t1890;
  t2496 = t652 + t2476;
  t4012 = -1.*t1229;
  t4039 = 1. + t4012;
  t4087 = -0.4999*t4039;
  t4091 = t1229*t3726;
  t4118 = 0.15039999999999998*t328*t1890;
  t4128 = t4087 + t4091 + t4118;
  t3906 = -1.*t3888*t3213;
  t4168 = -1.*t3992*t4128;
  t4170 = t3906 + t4168;
  t3214 = -1.*t2552*t3213;
  t4286 = t3888*t2496;
  t4297 = t3213*t4128;
  t4298 = t4286 + t4297;
  t4695 = t3888*t3213;
  t4697 = -0.4999*t328;
  t4698 = -1.*t3726*t328;
  t4715 = 0.15039999999999998*t1229*t1890;
  t4778 = t4697 + t4698 + t4715;
  t4804 = t4778*t3213;
  t4883 = t3992*t4128;
  t4907 = 0.4999*t1229;
  t4923 = t4907 + t4091 + t4118;
  t4977 = t2496*t4923;
  t5032 = t4695 + t4804 + t4883 + t4977;
  t4448 = t138*t3992;
  t4449 = t4448 + t3214;
  t4217 = -1.*t2552*t3992;
  t5494 = -1.*t1229*t318;
  t5506 = t328*t1890;
  t5541 = t5494 + t5506;
  t4345 = -1.*t2552*t2496;
  t4375 = t138*t3213;
  t4378 = t4345 + t4375;
  t5321 = -1.*t3992*t3888;
  t5378 = -1.*t3992*t4778;
  t5423 = -1.*t3213*t4923;
  t5625 = -1.*t4128*t5541;
  t5632 = t5321 + t5378 + t5423 + t5625;
  t6067 = t2552*t3992;
  t6081 = t6067 + t4375;
  t5096 = 0.4999*t318;
  t5110 = t3726*t318;
  t5127 = Power(t1890,2);
  t5177 = -0.15039999999999998*t5127;
  t5178 = t5096 + t5110 + t5177;
  t6348 = 0.15039999999999998*t318*t328;
  t6351 = t6348 + t4715;
  t6352 = t6351*t3213;
  t6357 = -0.15039999999999998*t1229*t318;
  t6360 = t6357 + t4118;
  t6370 = t2496*t6360;
  t6375 = t4695 + t6352 + t4883 + t6370;
  t5254 = 0.4999*t1890;
  t5270 = t3726*t1890;
  t5300 = 0.15039999999999998*t318*t1890;
  t5313 = t5254 + t5270 + t5300;
  t5875 = 3.5899*t4449*t4170;
  t5950 = t138*t5541;
  t5954 = t4217 + t5950;
  t5996 = 3.5899*t4298*t5954;
  t6551 = -1.*t3992*t6351;
  t6584 = -1.*t3213*t6360;
  t6625 = t5321 + t6551 + t6584 + t5625;
  t6112 = 3.5899*t6081*t4170;
  t6200 = t2552*t5541;
  t6218 = t4448 + t6200;
  t6221 = 3.5899*t4298*t6218;
  t6242 = t138*t2496;
  t6260 = t2552*t3213;
  t6269 = t6242 + t6260;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(3.5899*t4170*t4378 + 3.5899*t4298*t4449)*var2[0] + 0.5*(3.5899*(-1.*t138*t2496 + t3214)*t4170 + 3.5899*(-1.*t138*t3213 + t4217)*t4298)*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[2]*(0.5*(3.5899*t5032*t6081 + t6112 + t6221 + 3.5899*t5632*t6269)*var2[0] + 0.5*(3.5899*t4449*t5032 + 3.5899*t4378*t5632 + t5875 + t5996)*var2[1] + 0.5*(7.1798*t4298*t5032 + 7.1798*t4170*t5632)*var2[2] + 0.5*(3.5899*t5032*t5178 + 3.5899*t5313*t5632)*var2[6] - 0.26996047999999995*t5032*var2[7]);
  p_output1[7]=var2[2]*(0.5*(t6112 + t6221 + 3.5899*t6081*t6375 + 3.5899*t6269*t6625)*var2[0] + 0.5*(t5875 + t5996 + 3.5899*t4449*t6375 + 3.5899*t4378*t6625)*var2[1] + 0.5*(7.1798*t4298*t6375 + 7.1798*t4170*t6625)*var2[2] + 0.5*(3.5899*(-0.4999*t1890 - 0.15039999999999998*t1890*t318 - 1.*t1890*t3726)*t4298 + 3.5899*t4170*(0.15039999999999998*Power(t318,2) + t5096 + t5110) + 3.5899*t5178*t6375 + 3.5899*t5313*t6625)*var2[6] - 0.26996047999999995*t6375*var2[7]);
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

#include "Ce3_vec_L6_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L6_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

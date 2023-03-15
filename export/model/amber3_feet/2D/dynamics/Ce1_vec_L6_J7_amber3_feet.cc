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
  double t811;
  double t38;
  double t3226;
  double t3115;
  double t875;
  double t878;
  double t1852;
  double t2101;
  double t2102;
  double t3786;
  double t2987;
  double t3808;
  double t3831;
  double t3846;
  double t41;
  double t2674;
  double t2888;
  double t2949;
  double t4163;
  double t4218;
  double t4309;
  double t3847;
  double t3985;
  double t4023;
  double t4082;
  double t4117;
  double t4121;
  double t4346;
  double t4553;
  double t4575;
  double t4577;
  double t3166;
  double t3715;
  double t3723;
  double t4592;
  double t4747;
  double t4794;
  double t4810;
  double t4875;
  double t4896;
  double t4362;
  double t4453;
  double t5883;
  double t5107;
  double t5164;
  double t5173;
  double t3744;
  double t3862;
  double t4918;
  double t4948;
  double t5055;
  double t5083;
  double t6949;
  double t6963;
  double t6964;
  double t7089;
  double t8135;
  double t8136;
  double t7964;
  double t7999;
  double t8012;
  double t8032;
  double t8054;
  double t8071;
  double t8076;
  double t8081;
  double t8147;
  double t8151;
  double t8103;
  double t8107;
  double t8127;
  double t8138;
  double t8045;
  double t8139;
  double t8159;
  double t8201;
  double t8202;
  double t8204;
  double t8205;
  double t8164;
  t811 = Cos(var1[7]);
  t38 = Sin(var1[7]);
  t3226 = Cos(var1[6]);
  t3115 = Sin(var1[6]);
  t875 = -1.*t811;
  t878 = 1. + t875;
  t1852 = -0.9063*t878;
  t2101 = -1.0567*t811;
  t2102 = t1852 + t2101;
  t3786 = Cos(var1[2]);
  t2987 = Sin(var1[2]);
  t3808 = t3226*t811;
  t3831 = -1.*t3115*t38;
  t3846 = t3808 + t3831;
  t41 = 0.4999*t38;
  t2674 = t2102*t38;
  t2888 = 0.15039999999999998*t811*t38;
  t2949 = t41 + t2674 + t2888;
  t4163 = -1.*t811*t3115;
  t4218 = -1.*t3226*t38;
  t4309 = t4163 + t4218;
  t3847 = t3786*t3846;
  t3985 = 0.4999*t811;
  t4023 = t2102*t811;
  t4082 = Power(t38,2);
  t4117 = -0.15039999999999998*t4082;
  t4121 = t3985 + t4023 + t4117;
  t4346 = t3786*t4309;
  t4553 = t2987*t4309;
  t4575 = t4553 + t3847;
  t4577 = 3.5899*t2949*t4575;
  t3166 = t811*t3115;
  t3715 = t3226*t38;
  t3723 = t3166 + t3715;
  t4592 = -1.*t3226*t811;
  t4747 = t3115*t38;
  t4794 = t4592 + t4747;
  t4810 = t2987*t4794;
  t4875 = t4346 + t4810;
  t4896 = 3.5899*t4121*t4875;
  t4362 = -1.*t2987*t3846;
  t4453 = t4346 + t4362;
  t5883 = -1.*t2987*t4309;
  t5107 = Power(t811,2);
  t5164 = 0.15039999999999998*t5107;
  t5173 = t3985 + t4023 + t5164;
  t3744 = -1.*t2987*t3723;
  t3862 = t3744 + t3847;
  t4918 = -0.4999*t38;
  t4948 = -1.*t2102*t38;
  t5055 = -0.15039999999999998*t811*t38;
  t5083 = t4918 + t4948 + t5055;
  t6949 = 3.5899*t2949*t4453;
  t6963 = t3786*t4794;
  t6964 = t5883 + t6963;
  t7089 = 3.5899*t4121*t6964;
  t8135 = t3226*t2102;
  t8136 = 0.15039999999999998*t3115*t38;
  t7964 = 0.4999*t3115;
  t7999 = t2102*t3115;
  t8012 = -0.15039999999999998*t3226*t38;
  t8032 = t7964 + t7999 + t8012;
  t8054 = -0.4999*t3115;
  t8071 = -1.*t2102*t3115;
  t8076 = 0.15039999999999998*t3226*t38;
  t8081 = t8054 + t8071 + t8076;
  t8147 = 0.4999*t3226;
  t8151 = t8147 + t8135 + t8136;
  t8103 = -1.*t3226;
  t8107 = 1. + t8103;
  t8127 = -0.4999*t8107;
  t8138 = t8127 + t8135 + t8136;
  t8045 = t8032*t3846;
  t8139 = t4309*t8138;
  t8159 = -1.*t4309*t8032;
  t8201 = 0.15039999999999998*t811*t3115;
  t8202 = t8201 + t8076;
  t8204 = -0.15039999999999998*t3226*t811;
  t8205 = t8204 + t8136;
  t8164 = -1.*t8138*t4794;
  p_output1[0]=var2[6]*(-0.5*(3.5899*t2949*t3862 + 3.5899*t4121*t4453)*var2[2] - 0.5*(t4577 + t4896)*var2[6] - 0.5*(t4577 + t4896 + 3.5899*t4575*t5083 + 3.5899*(t3723*t3786 + t2987*t3846)*t5173)*var2[7]);
  p_output1[1]=var2[6]*(-0.5*(3.5899*t2949*(-1.*t3723*t3786 + t4362) + 3.5899*t4121*(-1.*t3786*t3846 + t5883))*var2[2] - 0.5*(t6949 + t7089)*var2[6] - 0.5*(3.5899*t4453*t5083 + 3.5899*t3862*t5173 + t6949 + t7089)*var2[7]);
  p_output1[2]=var2[6]*(-0.5*(3.5899*t4121*(t8045 + t3846*t8081 + t8139 + t3723*t8151) + 3.5899*t2949*(-1.*t4309*t8081 - 1.*t3846*t8151 + t8159 + t8164))*var2[6] - 0.5*(3.5899*t5083*(t3723*t8032 + t3846*t8138) + 3.5899*t5173*(-1.*t3846*t8032 - 1.*t4309*t8138) + 3.5899*t4121*(t8045 + t8139 + t3846*t8202 + t3723*t8205) + 3.5899*t2949*(t8159 + t8164 - 1.*t4309*t8202 - 1.*t3846*t8205))*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=-0.5*(7.1798*t4121*t5083 + 7.1798*t2949*t5173)*var2[6]*var2[7];
  p_output1[7]=0.26996047999999995*t5083*var2[6]*var2[7];
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

#include "Ce1_vec_L6_J7_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L6_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

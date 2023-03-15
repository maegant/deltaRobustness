/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:51 GMT-08:00
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
  double t832;
  double t103;
  double t783;
  double t871;
  double t1852;
  double t1872;
  double t1931;
  double t2784;
  double t2785;
  double t2888;
  double t2949;
  double t2960;
  double t1848;
  double t3392;
  double t3634;
  double t3638;
  double t102;
  double t2674;
  double t2987;
  double t3166;
  double t3288;
  double t811;
  double t878;
  double t1160;
  double t3663;
  double t3714;
  double t3723;
  double t3786;
  double t3924;
  double t3941;
  double t2101;
  double t3391;
  double t3944;
  double t3985;
  double t4466;
  double t4553;
  double t4121;
  double t4163;
  double t4346;
  double t4082;
  double t4592;
  double t4716;
  double t4747;
  double t4790;
  double t4896;
  double t4903;
  double t4930;
  double t4948;
  double t5006;
  double t4575;
  double t4577;
  double t4875;
  double t5055;
  double t5083;
  double t5091;
  double t5107;
  double t5164;
  double t5173;
  double t5223;
  double t5441;
  double t5512;
  double t5657;
  double t5765;
  double t5245;
  double t4098;
  double t4117;
  double t4794;
  double t4909;
  double t4912;
  double t7382;
  double t1840;
  double t2102;
  double t5224;
  double t5226;
  double t5322;
  double t7964;
  double t5546;
  double t5883;
  double t5890;
  double t8012;
  double t8032;
  double t8045;
  double t5970;
  double t5999;
  double t6339;
  double t8163;
  double t8164;
  double t8169;
  double t8171;
  double t8173;
  double t8187;
  double t8188;
  double t8189;
  double t8190;
  t832 = Cos(var1[6]);
  t103 = Cos(var1[7]);
  t783 = Sin(var1[6]);
  t871 = Sin(var1[7]);
  t1852 = t832*t103;
  t1872 = -1.*t783*t871;
  t1931 = t1852 + t1872;
  t2784 = -1.*t103;
  t2785 = 1. + t2784;
  t2888 = -0.9063*t2785;
  t2949 = -1.0567*t103;
  t2960 = t2888 + t2949;
  t1848 = Cos(var1[2]);
  t3392 = -1.*t103*t783;
  t3634 = -1.*t832*t871;
  t3638 = t3392 + t3634;
  t102 = Sin(var1[2]);
  t2674 = 0.4999*t783;
  t2987 = t2960*t783;
  t3166 = -0.15039999999999998*t832*t871;
  t3288 = t2674 + t2987 + t3166;
  t811 = t103*t783;
  t878 = t832*t871;
  t1160 = t811 + t878;
  t3663 = -1.*t832;
  t3714 = 1. + t3663;
  t3723 = -0.4999*t3714;
  t3786 = t832*t2960;
  t3924 = 0.15039999999999998*t783*t871;
  t3941 = t3723 + t3786 + t3924;
  t2101 = t1848*t1931;
  t3391 = -1.*t3288*t1931;
  t3944 = -1.*t3638*t3941;
  t3985 = t3391 + t3944;
  t4466 = t102*t3638;
  t4553 = t4466 + t2101;
  t4121 = t3288*t1160;
  t4163 = t1931*t3941;
  t4346 = t4121 + t4163;
  t4082 = t1848*t3638;
  t4592 = -0.4999*t783;
  t4716 = -1.*t2960*t783;
  t4747 = 0.15039999999999998*t832*t871;
  t4790 = t4592 + t4716 + t4747;
  t4896 = 0.4999*t832;
  t4903 = t4896 + t3786 + t3924;
  t4930 = -1.*t832*t103;
  t4948 = t783*t871;
  t5006 = t4930 + t4948;
  t4575 = 3.5899*t4553*t3985;
  t4577 = t3288*t1931;
  t4875 = t3638*t3941;
  t5055 = t102*t5006;
  t5083 = t4082 + t5055;
  t5091 = 3.5899*t4346*t5083;
  t5107 = t1848*t1160;
  t5164 = t102*t1931;
  t5173 = t5107 + t5164;
  t5223 = -1.*t3638*t3288;
  t5441 = 0.15039999999999998*t103*t783;
  t5512 = t5441 + t4747;
  t5657 = -0.15039999999999998*t832*t103;
  t5765 = t5657 + t3924;
  t5245 = -1.*t3941*t5006;
  t4098 = -1.*t102*t1931;
  t4117 = t4082 + t4098;
  t4794 = t4790*t1931;
  t4909 = t1160*t4903;
  t4912 = t4577 + t4794 + t4875 + t4909;
  t7382 = -1.*t102*t3638;
  t1840 = -1.*t102*t1160;
  t2102 = t1840 + t2101;
  t5224 = -1.*t3638*t4790;
  t5226 = -1.*t1931*t4903;
  t5322 = t5223 + t5224 + t5226 + t5245;
  t7964 = 3.5899*t4117*t3985;
  t5546 = t5512*t1931;
  t5883 = t1160*t5765;
  t5890 = t4577 + t5546 + t4875 + t5883;
  t8012 = t1848*t5006;
  t8032 = t7382 + t8012;
  t8045 = 3.5899*t4346*t8032;
  t5970 = -1.*t3638*t5512;
  t5999 = -1.*t1931*t5765;
  t6339 = t5223 + t5970 + t5999 + t5245;
  t8163 = 0.4999*t103;
  t8164 = t2960*t103;
  t8169 = Power(t871,2);
  t8171 = -0.15039999999999998*t8169;
  t8173 = t8163 + t8164 + t8171;
  t8187 = 0.4999*t871;
  t8188 = t2960*t871;
  t8189 = 0.15039999999999998*t103*t871;
  t8190 = t8187 + t8188 + t8189;
  p_output1[0]=var2[2]*(-0.5*(3.5899*t2102*t3985 + 3.5899*t4117*t4346)*var2[2] - 0.5*(t4575 + 3.5899*t4553*t4912 + t5091 + 3.5899*t5173*t5322)*var2[6] - 0.5*(t4575 + t5091 + 3.5899*t4553*t5890 + 3.5899*t5173*t6339)*var2[7]);
  p_output1[1]=var2[2]*(-0.5*(3.5899*t3985*(-1.*t1160*t1848 + t4098) + 3.5899*t4346*(-1.*t1848*t1931 + t7382))*var2[2] - 0.5*(3.5899*t4117*t4912 + 3.5899*t2102*t5322 + t7964 + t8045)*var2[6] - 0.5*(3.5899*t4117*t5890 + 3.5899*t2102*t6339 + t7964 + t8045)*var2[7]);
  p_output1[2]=var2[2]*(-0.5*(7.1798*t4346*t4912 + 7.1798*t3985*t5322)*var2[6] - 0.5*(7.1798*t4346*t5890 + 7.1798*t3985*t6339)*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[2]*(-0.5*(3.5899*t4912*t8173 + 3.5899*t5322*t8190)*var2[6] - 0.5*(3.5899*t3985*(0.15039999999999998*Power(t103,2) + t8163 + t8164) + 3.5899*t5890*t8173 + 3.5899*t6339*t8190 + 3.5899*t4346*(-0.4999*t871 - 0.15039999999999998*t103*t871 - 1.*t2960*t871))*var2[7]);
  p_output1[7]=var2[2]*(0.26996047999999995*t4912*var2[6] + 0.26996047999999995*t5890*var2[7]);
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

#include "Ce1_vec_L6_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L6_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

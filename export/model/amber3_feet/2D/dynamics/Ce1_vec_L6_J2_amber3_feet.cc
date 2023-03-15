/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:50 GMT-08:00
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
  double t1853;
  double t1352;
  double t1547;
  double t1854;
  double t1339;
  double t1586;
  double t2418;
  double t2427;
  double t2559;
  double t2674;
  double t2678;
  double t2687;
  double t2960;
  double t3391;
  double t3392;
  double t3495;
  double t3857;
  double t2949;
  double t2987;
  double t3629;
  double t3634;
  double t3786;
  double t3944;
  double t4362;
  double t4453;
  double t4465;
  double t2428;
  double t4873;
  double t4875;
  double t4901;
  double t4716;
  double t4794;
  double t4903;
  double t4909;
  double t4912;
  double t4918;
  double t4930;
  double t4948;
  double t4957;
  double t2832;
  double t2888;
  double t4169;
  double t4346;
  double t5224;
  double t5226;
  double t5232;
  double t5446;
  double t5493;
  double t5512;
  double t5546;
  double t5588;
  double t5441;
  double t5883;
  double t5907;
  double t5916;
  double t6328;
  double t6335;
  double t6339;
  double t6464;
  double t6531;
  double t6561;
  double t6110;
  double t6638;
  double t6949;
  double t6964;
  double t7089;
  double t7277;
  double t7964;
  double t7971;
  double t8012;
  double t8015;
  double t8054;
  double t8068;
  double t7947;
  double t7958;
  double t8045;
  double t8082;
  double t8101;
  double t8139;
  double t8146;
  double t8151;
  double t8152;
  double t8118;
  double t8197;
  double t8200;
  double t8201;
  double t8202;
  double t8187;
  double t8188;
  double t8189;
  double t8190;
  double t8195;
  double t8207;
  double t8209;
  t1853 = Cos(var1[6]);
  t1352 = Cos(var1[7]);
  t1547 = Sin(var1[6]);
  t1854 = Sin(var1[7]);
  t1339 = Sin(var1[2]);
  t1586 = -1.*t1352*t1547;
  t2418 = -1.*t1853*t1854;
  t2427 = t1586 + t2418;
  t2559 = Cos(var1[2]);
  t2674 = t1853*t1352;
  t2678 = -1.*t1547*t1854;
  t2687 = t2674 + t2678;
  t2960 = t2559*t2687;
  t3391 = t1352*t1547;
  t3392 = t1853*t1854;
  t3495 = t3391 + t3392;
  t3857 = -1.*t1339*t2687;
  t2949 = t1339*t2427;
  t2987 = t2949 + t2960;
  t3629 = -1.*t1339*t3495;
  t3634 = t3629 + t2960;
  t3786 = t2559*t2427;
  t3944 = t3786 + t3857;
  t4362 = t2559*t3495;
  t4453 = t1339*t2687;
  t4465 = t4362 + t4453;
  t2428 = -1.*t1339*t2427;
  t4873 = -1.*t1853*t1352;
  t4875 = t1547*t1854;
  t4901 = t4873 + t4875;
  t4716 = 3.5899*t2987*t3634;
  t4794 = 3.5899*t3944*t4465;
  t4903 = t2559*t4901;
  t4909 = t2428 + t4903;
  t4912 = 3.5899*t2987*t4909;
  t4918 = t1339*t4901;
  t4930 = t3786 + t4918;
  t4948 = 3.5899*t3944*t4930;
  t4957 = t4716 + t4794 + t4912 + t4948;
  t2832 = -1.*t2559*t2687;
  t2888 = t2428 + t2832;
  t4169 = -1.*t2559*t3495;
  t4346 = t4169 + t3857;
  t5224 = 7.1798*t3634*t3944;
  t5226 = 7.1798*t3944*t4909;
  t5232 = t5224 + t5226;
  t5446 = -1.*t1352;
  t5493 = 1. + t5446;
  t5512 = -0.9063*t5493;
  t5546 = -1.0567*t1352;
  t5588 = t5512 + t5546;
  t5441 = 0.4999*t1547;
  t5883 = t5588*t1547;
  t5907 = -0.15039999999999998*t1853*t1854;
  t5916 = t5441 + t5883 + t5907;
  t6328 = -1.*t1853;
  t6335 = 1. + t6328;
  t6339 = -0.4999*t6335;
  t6464 = t1853*t5588;
  t6531 = 0.15039999999999998*t1547*t1854;
  t6561 = t6339 + t6464 + t6531;
  t6110 = -1.*t5916*t2687;
  t6638 = -1.*t2427*t6561;
  t6949 = t6110 + t6638;
  t6964 = t5916*t3495;
  t7089 = t2687*t6561;
  t7277 = t6964 + t7089;
  t7964 = -0.4999*t1547;
  t7971 = -1.*t5588*t1547;
  t8012 = 0.15039999999999998*t1853*t1854;
  t8015 = t7964 + t7971 + t8012;
  t8054 = 0.4999*t1853;
  t8068 = t8054 + t6464 + t6531;
  t7947 = 3.5899*t3944*t6949;
  t7958 = t5916*t2687;
  t8045 = t2427*t6561;
  t8082 = 3.5899*t7277*t4909;
  t8101 = -1.*t2427*t5916;
  t8139 = 0.15039999999999998*t1352*t1547;
  t8146 = t8139 + t8012;
  t8151 = -0.15039999999999998*t1853*t1352;
  t8152 = t8151 + t6531;
  t8118 = -1.*t6561*t4901;
  t8197 = 0.4999*t1854;
  t8200 = t5588*t1854;
  t8201 = 0.15039999999999998*t1352*t1854;
  t8202 = t8197 + t8200 + t8201;
  t8187 = 0.4999*t1352;
  t8188 = t5588*t1352;
  t8189 = Power(t1854,2);
  t8190 = -0.15039999999999998*t8189;
  t8195 = t8187 + t8188 + t8190;
  t8207 = 3.5899*t8202*t3944;
  t8209 = 3.5899*t8195*t4909;
  p_output1[0]=var2[1]*(-0.5*(3.5899*t2888*t2987 + 3.5899*Power(t3634,2) + 3.5899*Power(t3944,2) + 3.5899*t4346*t4465)*var2[2] - 0.5*t4957*var2[6] - 0.5*t4957*var2[7]);
  p_output1[1]=var2[1]*(-0.5*(7.1798*t2888*t3944 + 7.1798*t3634*t4346)*var2[2] - 0.5*t5232*var2[6] - 0.5*t5232*var2[7]);
  p_output1[2]=var2[1]*(-0.5*(3.5899*t4346*t6949 + 3.5899*t2888*t7277)*var2[2] - 0.5*(t7947 + 3.5899*t3944*(t7958 + t2687*t8015 + t8045 + t3495*t8068) + t8082 + 3.5899*t3634*(-1.*t2427*t8015 - 1.*t2687*t8068 + t8101 + t8118))*var2[6] - 0.5*(t7947 + t8082 + 3.5899*t3634*(t8101 + t8118 - 1.*t2427*t8146 - 1.*t2687*t8152) + 3.5899*t3944*(t7958 + t8045 + t2687*t8146 + t3495*t8152))*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[1]*(-0.5*(3.5899*t2888*t8195 + 3.5899*t4346*t8202)*var2[2] - 0.5*(t8207 + t8209)*var2[6] - 0.5*(3.5899*t3944*(-0.4999*t1854 - 0.15039999999999998*t1352*t1854 - 1.*t1854*t5588) + 3.5899*t3634*(0.15039999999999998*Power(t1352,2) + t8187 + t8188) + t8207 + t8209)*var2[7]);
  p_output1[7]=var2[1]*(0.26996047999999995*t2888*var2[2] + 0.26996047999999995*t4909*var2[6] + 0.26996047999999995*t4909*var2[7]);
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

#include "Ce1_vec_L6_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L6_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

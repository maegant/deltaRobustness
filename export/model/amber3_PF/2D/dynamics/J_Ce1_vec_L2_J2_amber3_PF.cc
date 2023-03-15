/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:53 GMT-08:00
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
  double t320;
  double t46;
  double t171;
  double t334;
  double t616;
  double t640;
  double t790;
  double t224;
  double t418;
  double t560;
  double t915;
  double t986;
  double t1018;
  double t1321;
  double t1440;
  double t1448;
  double t833;
  double t1083;
  double t1482;
  double t1495;
  double t1606;
  double t1831;
  double t1861;
  double t1885;
  double t1898;
  double t2098;
  double t2137;
  double t2236;
  double t2298;
  double t2328;
  double t2395;
  double t2411;
  double t2529;
  double t2545;
  double t2695;
  double t2782;
  double t2950;
  double t3023;
  double t3058;
  double t3060;
  double t3072;
  double t3097;
  double t3125;
  double t3174;
  double t3184;
  double t3210;
  double t3513;
  double t3529;
  double t3538;
  double t3564;
  double t3568;
  double t3643;
  double t3783;
  double t3663;
  double t3667;
  double t3757;
  double t3770;
  double t3849;
  double t3874;
  double t3887;
  double t3972;
  double t4049;
  double t4109;
  double t4198;
  double t4224;
  double t4286;
  double t4534;
  double t4130;
  double t4197;
  double t4783;
  double t4864;
  double t5249;
  double t5264;
  double t5315;
  double t5330;
  double t5442;
  double t5502;
  double t5859;
  double t5917;
  double t5949;
  double t5977;
  double t6057;
  t320 = Cos(var1[2]);
  t46 = Cos(var1[3]);
  t171 = Sin(var1[2]);
  t334 = Sin(var1[3]);
  t616 = t320*t46;
  t640 = -1.*t171*t334;
  t790 = t616 + t640;
  t224 = -1.*t46*t171;
  t418 = -1.*t320*t334;
  t560 = t224 + t418;
  t915 = t46*t171;
  t986 = t320*t334;
  t1018 = t915 + t986;
  t1321 = -1.*t320*t46;
  t1440 = t171*t334;
  t1448 = t1321 + t1440;
  t833 = 10.2783*t560*t790;
  t1083 = 3.4261*t1018*t790;
  t1482 = 10.2783*t560*t1448;
  t1495 = 3.4261*t1018*t1448;
  t1606 = t833 + t1083 + t1482 + t1495;
  t1831 = -0.5*var2[2]*t1606;
  t1861 = -0.5*var2[3]*t1606;
  t1885 = t1831 + t1861;
  t1898 = var2[1]*t1885;
  t2098 = Power(t560,2);
  t2137 = 3.4261*t2098;
  t2236 = 3.4261*t560*t1018;
  t2298 = Power(t790,2);
  t2328 = 3.4261*t2298;
  t2395 = 3.4261*t790*t1448;
  t2411 = t2137 + t2236 + t2328 + t2395;
  t2529 = -0.5*var2[1]*t2411;
  t2545 = 6.8522*t2098;
  t2695 = 6.8522*t560*t1018;
  t2782 = 6.8522*t790*t1448;
  t2950 = Power(t1448,2);
  t3023 = 6.8522*t2950;
  t3058 = t2545 + t2695 + t2782 + t3023;
  t3060 = -0.5*var2[2]*t3058;
  t3072 = -0.5*var2[3]*t3058;
  t3097 = t3060 + t3072;
  t3125 = var2[1]*t3097;
  t3174 = 6.8522*t560*t790;
  t3184 = 6.8522*t560*t1448;
  t3210 = t3174 + t3184;
  t3513 = -0.5*var2[1]*t3210;
  t3529 = -1.*t46;
  t3538 = 1. + t3529;
  t3564 = -0.4999*t3538;
  t3568 = -0.6493*t46;
  t3643 = t3564 + t3568;
  t3783 = t3643*t46;
  t3663 = t3643*t334;
  t3667 = 0.14939999999999998*t46*t334;
  t3757 = t3663 + t3667;
  t3770 = 3.4261*t3757*t1448;
  t3849 = Power(t334,2);
  t3874 = -0.14939999999999998*t3849;
  t3887 = t3783 + t3874;
  t3972 = 3.4261*t1018*t3887;
  t4049 = Power(t46,2);
  t4109 = 0.14939999999999998*t4049;
  t4198 = -1.*t3643*t334;
  t4224 = -0.14939999999999998*t46*t334;
  t4286 = t4198 + t4224;
  t4534 = 3.4261*t4286*t1448;
  t4130 = t3783 + t4109;
  t4197 = 3.4261*t4130*t560;
  t4783 = 0. + t3783 + t4109;
  t4864 = 3.4261*t4783*t560;
  t5249 = 3.4261*t560*t3757;
  t5264 = 3.4261*t1448*t3887;
  t5315 = t5249 + t5264;
  t5330 = 3.4261*t560*t4286;
  t5442 = 3.4261*t4130*t790;
  t5502 = t5330 + t5249 + t5442 + t5264;
  t5859 = 0.25592966999999994*var2[2]*t1018;
  t5917 = 0.25592966999999994*var2[3]*t1018;
  t5949 = t5859 + t5917;
  t5977 = var2[1]*t5949;
  t6057 = 0.25592966999999994*var2[1]*t1448;
  p_output1[0]=t1898;
  p_output1[1]=t1898;
  p_output1[2]=-0.5*t2411*var2[2] - 0.5*t2411*var2[3];
  p_output1[3]=t2529;
  p_output1[4]=t2529;
  p_output1[5]=t3125;
  p_output1[6]=t3125;
  p_output1[7]=-0.5*t3210*var2[2] - 0.5*t3210*var2[3];
  p_output1[8]=t3513;
  p_output1[9]=t3513;
  p_output1[10]=var2[1]*(-0.5*(t3770 + t3972)*var2[2] - 0.5*(t3770 + t3972 + t4197 + t4534)*var2[3]);
  p_output1[11]=var2[1]*(-0.5*(t3770 + t3972 + t4534 + t4864)*var2[2] - 0.5*(t3770 + t3972 + t4197 + 6.8522*t1448*t4286 + t4864 + 3.4261*(0. - 0.14939999999999998*t4049 - 1.*t3643*t46)*t560 + 3.4261*t4286*t790)*var2[3]);
  p_output1[12]=-0.5*t5315*var2[2] - 0.5*t5502*var2[3];
  p_output1[13]=-0.5*t5315*var2[1];
  p_output1[14]=-0.5*t5502*var2[1];
  p_output1[15]=t5977;
  p_output1[16]=t5977;
  p_output1[17]=0.25592966999999994*t1448*var2[2] + 0.25592966999999994*t1448*var2[3];
  p_output1[18]=t6057;
  p_output1[19]=t6057;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L2_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L2_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

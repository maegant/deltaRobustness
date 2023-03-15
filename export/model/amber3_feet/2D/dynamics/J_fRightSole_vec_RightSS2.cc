/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:57 GMT-08:00
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
  double t675;
  double t491;
  double t503;
  double t778;
  double t864;
  double t560;
  double t808;
  double t844;
  double t284;
  double t865;
  double t869;
  double t972;
  double t1141;
  double t1017;
  double t219;
  double t1344;
  double t1357;
  double t1393;
  double t1176;
  double t1179;
  double t1236;
  double t1245;
  double t1412;
  double t1420;
  double t1431;
  double t863;
  double t1021;
  double t1635;
  double t2004;
  double t2019;
  double t2040;
  double t1937;
  double t1969;
  double t1992;
  double t1996;
  double t2051;
  double t2058;
  double t2059;
  double t2060;
  double t2064;
  double t2092;
  double t2110;
  double t2111;
  double t2171;
  double t1454;
  double t1466;
  double t1480;
  double t1639;
  double t1692;
  double t2304;
  double t2380;
  double t1812;
  double t1828;
  double t1088;
  double t1252;
  double t2616;
  double t2629;
  double t2644;
  double t2655;
  double t2720;
  double t2742;
  double t1497;
  double t1540;
  double t2887;
  double t2894;
  double t2895;
  double t2898;
  double t2912;
  double t2929;
  double t2826;
  double t2827;
  double t2832;
  double t2869;
  double t2950;
  double t2959;
  double t2960;
  double t3018;
  double t3047;
  double t3063;
  double t3088;
  double t3103;
  double t3266;
  double t3276;
  double t3278;
  double t3282;
  double t3365;
  double t3378;
  double t3401;
  double t3411;
  double t2757;
  double t2778;
  double t2811;
  double t3124;
  double t3201;
  double t3222;
  double t3573;
  double t3584;
  double t3636;
  double t3638;
  double t3639;
  double t3645;
  double t3729;
  double t3739;
  double t3741;
  double t3626;
  double t3666;
  double t3701;
  double t3571;
  double t3728;
  double t3958;
  double t3985;
  double t4013;
  double t4023;
  double t4037;
  double t4050;
  double t4075;
  double t4078;
  double t4046;
  double t4086;
  double t4139;
  double t4165;
  double t4167;
  double t4183;
  double t3865;
  double t3873;
  double t4414;
  double t4424;
  double t4446;
  double t4564;
  double t4569;
  double t4585;
  double t4828;
  double t4840;
  double t4926;
  t675 = Cos(var1[7]);
  t491 = Cos(var1[8]);
  t503 = Sin(var1[7]);
  t778 = Sin(var1[8]);
  t864 = Cos(var1[6]);
  t560 = -1.*t491*t503;
  t808 = -1.*t675*t778;
  t844 = t560 + t808;
  t284 = Sin(var1[6]);
  t865 = t675*t491;
  t869 = -1.*t503*t778;
  t972 = t865 + t869;
  t1141 = Cos(var1[2]);
  t1017 = t864*t972;
  t219 = Sin(var1[2]);
  t1344 = t491*t503;
  t1357 = t675*t778;
  t1393 = t1344 + t1357;
  t1176 = t864*t844;
  t1179 = -1.*t284*t972;
  t1236 = t1176 + t1179;
  t1245 = t1141*t1236;
  t1412 = -1.*t284*t1393;
  t1420 = t1412 + t1017;
  t1431 = t1141*t1420;
  t863 = t284*t844;
  t1021 = t863 + t1017;
  t1635 = -1.*t284*t844;
  t2004 = -1.*t675*t491;
  t2019 = t503*t778;
  t2040 = t2004 + t2019;
  t1937 = t1141*t1021;
  t1969 = t219*t1236;
  t1992 = t1937 + t1969;
  t1996 = var2[1]*t1992;
  t2051 = t864*t2040;
  t2058 = t1635 + t2051;
  t2059 = t219*t2058;
  t2060 = t284*t2040;
  t2064 = t1176 + t2060;
  t2092 = t1141*t2064;
  t2110 = t2059 + t2092;
  t2111 = var2[0]*t2110;
  t2171 = t1996 + t2111;
  t1454 = t864*t1393;
  t1466 = t284*t972;
  t1480 = t1454 + t1466;
  t1639 = -1.*t864*t972;
  t1692 = t1635 + t1639;
  t2304 = -1.*t219*t1236;
  t2380 = -1.*t219*t1420;
  t1812 = -1.*t864*t1393;
  t1828 = t1812 + t1179;
  t1088 = -1.*t219*t1021;
  t1252 = t1088 + t1245;
  t2616 = var2[1]*t1252;
  t2629 = t1141*t2058;
  t2644 = -1.*t219*t2064;
  t2655 = t2629 + t2644;
  t2720 = var2[0]*t2655;
  t2742 = t2616 + t2720;
  t1497 = -1.*t219*t1480;
  t1540 = t1431 + t1497;
  t2887 = -1.*t491;
  t2894 = 1. + t2887;
  t2895 = -1.3127*t2894;
  t2898 = -1.3127*t491;
  t2912 = -0.06*t778;
  t2929 = t2895 + t2898 + t2912;
  t2826 = -1.*t675;
  t2827 = 1. + t2826;
  t2832 = -0.9063*t2827;
  t2869 = -0.06*t491*t503;
  t2950 = t675*t2929;
  t2959 = t2832 + t2869 + t2950;
  t2960 = t864*t2959;
  t3018 = 0.06*t675*t491;
  t3047 = 0.9063*t503;
  t3063 = t503*t2929;
  t3088 = t3018 + t3047 + t3063;
  t3103 = -1.*t284*t3088;
  t3266 = -0.4999*t284;
  t3276 = -1.*t284*t2959;
  t3278 = -1.*t864*t3088;
  t3282 = t3266 + t3276 + t3278;
  t3365 = 0.4999*t284;
  t3378 = t284*t2959;
  t3401 = t864*t3088;
  t3411 = t3365 + t3378 + t3401;
  t2757 = -1.*t864;
  t2778 = 1. + t2757;
  t2811 = -0.4999*t2778;
  t3124 = t2811 + t2960 + t3103;
  t3201 = 0.4999*t864;
  t3222 = t3201 + t2960 + t3103;
  t3573 = 0.9063*t675;
  t3584 = t3573 + t2869 + t2950;
  t3636 = -0.06*t675*t491;
  t3638 = -0.9063*t503;
  t3639 = -1.*t503*t2929;
  t3645 = t3636 + t3638 + t3639;
  t3729 = t864*t3584;
  t3739 = t284*t3645;
  t3741 = t3729 + t3739;
  t3626 = -1.*t284*t3584;
  t3666 = t864*t3645;
  t3701 = t3626 + t3666;
  t3571 = t3411*t1021;
  t3728 = t3124*t1236;
  t3958 = -0.06*t491;
  t3985 = 0. + t3958;
  t4013 = t3985*t503;
  t4023 = -0.06*t675*t778;
  t4037 = t4013 + t4023;
  t4050 = t675*t3985;
  t4075 = 0.06*t503*t778;
  t4078 = t4050 + t4075;
  t4046 = -1.*t284*t4037;
  t4086 = t864*t4078;
  t4139 = t4046 + t4086;
  t4165 = t864*t4037;
  t4167 = t284*t4078;
  t4183 = t4165 + t4167;
  t3865 = -1.*t3124*t2058;
  t3873 = -1.*t3411*t2064;
  t4414 = 0.4999*t844;
  t4424 = t2959*t844;
  t4446 = t3088*t972;
  t4564 = -1.*t3088*t844;
  t4569 = 0.4999*t972;
  t4585 = -1.*t2959*t2040;
  t4828 = 0.9063*t491;
  t4840 = t491*t2929;
  t4926 = Power(t491,2);
  p_output1[0]=t1252*var2[0] + t1540*var2[1];
  p_output1[1]=(t1245 + t1692*t219)*var2[0] + (t1431 + t1828*t219)*var2[1];
  p_output1[2]=t2171;
  p_output1[3]=t2171;
  p_output1[4]=t1992;
  p_output1[5]=t1141*t1480 + t1420*t219;
  p_output1[6]=(-1.*t1021*t1141 + t2304)*var2[0] + (-1.*t1141*t1480 + t2380)*var2[1];
  p_output1[7]=(t1141*t1692 + t2304)*var2[0] + (t1141*t1828 + t2380)*var2[1];
  p_output1[8]=t2742;
  p_output1[9]=t2742;
  p_output1[10]=t1252;
  p_output1[11]=t1540;
  p_output1[12]=(t1828*t3124 + t1480*t3222 + t1420*t3282 + t1420*t3411)*var2[0] + (-1.*t1692*t3124 - 1.*t1021*t3222 - 1.*t1236*t3282 - 1.*t1236*t3411)*var2[1];
  p_output1[13]=(t3571 + t1420*t3701 + t3728 + t1480*t3741)*var2[0] + (-1.*t1236*t3701 - 1.*t1021*t3741 + t3865 + t3873)*var2[1];
  p_output1[14]=(t3571 + t3728 + t1420*t4139 + t1480*t4183)*var2[0] + (t3865 + t3873 - 1.*t1236*t4139 - 1.*t1021*t4183)*var2[1];
  p_output1[15]=t1420*t3124 + t1480*t3411;
  p_output1[16]=-1.*t1236*t3124 - 1.*t1021*t3411;
  p_output1[17]=1.;
  p_output1[18]=(t1393*t3584 + t4414 + t4424 + t4446 + t3645*t972)*var2[0] + (t4564 + t4569 + t4585 - 1.*t3645*t844 - 1.*t3584*t972)*var2[1];
  p_output1[19]=(t1393*t4037 + t4414 + t4424 + t4446 + t4078*t972)*var2[0] + (t4564 + t4569 + t4585 - 1.*t4078*t844 - 1.*t4037*t972)*var2[1];
  p_output1[20]=t1393*t3088 + t4569 + t2959*t972;
  p_output1[21]=0.4999*t1393 - 1.*t2959*t844 - 1.*t3088*t972;
  p_output1[22]=1.;
  p_output1[23]=(t3985*t491 + 0.06*t4926 - 0.9063*t778 - 1.*t2929*t778 - 0.06*Power(t778,2))*var2[0] + (t4828 + t4840 + t3985*t778 + 0.12*t491*t778)*var2[1];
  p_output1[24]=t4828 + t4840 + 0.06*t491*t778;
  p_output1[25]=-0.06*t4926 + 0.9063*t778 + t2929*t778;
  p_output1[26]=1.;
  p_output1[27]=-0.06;
  p_output1[28]=1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 29, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightSole_vec_RightSS2.hh"

namespace RightSS2
{

void J_fRightSole_vec_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

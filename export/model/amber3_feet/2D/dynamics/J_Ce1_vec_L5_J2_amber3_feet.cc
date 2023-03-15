/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:01 GMT-08:00
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
  double t435;
  double t274;
  double t306;
  double t510;
  double t536;
  double t566;
  double t575;
  double t431;
  double t511;
  double t512;
  double t681;
  double t682;
  double t686;
  double t735;
  double t802;
  double t809;
  double t634;
  double t715;
  double t889;
  double t927;
  double t949;
  double t966;
  double t1018;
  double t1031;
  double t1039;
  double t1055;
  double t1060;
  double t1102;
  double t1123;
  double t1149;
  double t1218;
  double t1235;
  double t1322;
  double t1340;
  double t1349;
  double t1351;
  double t1441;
  double t1456;
  double t1466;
  double t1509;
  double t1524;
  double t1544;
  double t1552;
  double t1566;
  double t1567;
  double t1597;
  double t1622;
  double t1629;
  double t1633;
  double t1666;
  double t1687;
  double t1768;
  double t1833;
  double t1770;
  double t1789;
  double t1809;
  double t1812;
  double t1895;
  double t1903;
  double t1934;
  double t1969;
  double t2003;
  double t2013;
  double t2022;
  double t2026;
  double t2027;
  double t2051;
  double t2018;
  double t2019;
  double t2147;
  double t2155;
  double t2295;
  double t2300;
  double t2317;
  double t2382;
  double t2384;
  double t2393;
  double t2509;
  double t2530;
  double t2535;
  double t2537;
  double t2566;
  t435 = Cos(var1[2]);
  t274 = Cos(var1[6]);
  t306 = Sin(var1[2]);
  t510 = Sin(var1[6]);
  t536 = t435*t274;
  t566 = -1.*t306*t510;
  t575 = t536 + t566;
  t431 = -1.*t274*t306;
  t511 = -1.*t435*t510;
  t512 = t431 + t511;
  t681 = t274*t306;
  t682 = t435*t510;
  t686 = t681 + t682;
  t735 = -1.*t435*t274;
  t802 = t306*t510;
  t809 = t735 + t802;
  t634 = 10.2783*t512*t575;
  t715 = 3.4261*t686*t575;
  t889 = 10.2783*t512*t809;
  t927 = 3.4261*t686*t809;
  t949 = t634 + t715 + t889 + t927;
  t966 = -0.5*var2[2]*t949;
  t1018 = -0.5*var2[6]*t949;
  t1031 = t966 + t1018;
  t1039 = var2[1]*t1031;
  t1055 = Power(t512,2);
  t1060 = 3.4261*t1055;
  t1102 = 3.4261*t512*t686;
  t1123 = Power(t575,2);
  t1149 = 3.4261*t1123;
  t1218 = 3.4261*t575*t809;
  t1235 = t1060 + t1102 + t1149 + t1218;
  t1322 = -0.5*var2[1]*t1235;
  t1340 = 6.8522*t1055;
  t1349 = 6.8522*t512*t686;
  t1351 = 6.8522*t575*t809;
  t1441 = Power(t809,2);
  t1456 = 6.8522*t1441;
  t1466 = t1340 + t1349 + t1351 + t1456;
  t1509 = -0.5*var2[2]*t1466;
  t1524 = -0.5*var2[6]*t1466;
  t1544 = t1509 + t1524;
  t1552 = var2[1]*t1544;
  t1566 = 6.8522*t512*t575;
  t1567 = 6.8522*t512*t809;
  t1597 = t1566 + t1567;
  t1622 = -0.5*var2[1]*t1597;
  t1629 = -1.*t274;
  t1633 = 1. + t1629;
  t1666 = -0.4999*t1633;
  t1687 = -0.6493*t274;
  t1768 = t1666 + t1687;
  t1833 = t1768*t274;
  t1770 = t1768*t510;
  t1789 = 0.14939999999999998*t274*t510;
  t1809 = t1770 + t1789;
  t1812 = 3.4261*t1809*t809;
  t1895 = Power(t510,2);
  t1903 = -0.14939999999999998*t1895;
  t1934 = t1833 + t1903;
  t1969 = 3.4261*t686*t1934;
  t2003 = Power(t274,2);
  t2013 = 0.14939999999999998*t2003;
  t2022 = -1.*t1768*t510;
  t2026 = -0.14939999999999998*t274*t510;
  t2027 = t2022 + t2026;
  t2051 = 3.4261*t2027*t809;
  t2018 = t1833 + t2013;
  t2019 = 3.4261*t2018*t512;
  t2147 = 0. + t1833 + t2013;
  t2155 = 3.4261*t2147*t512;
  t2295 = 3.4261*t512*t1809;
  t2300 = 3.4261*t809*t1934;
  t2317 = t2295 + t2300;
  t2382 = 3.4261*t512*t2027;
  t2384 = 3.4261*t2018*t575;
  t2393 = t2382 + t2295 + t2384 + t2300;
  t2509 = 0.25592966999999994*var2[2]*t686;
  t2530 = 0.25592966999999994*var2[6]*t686;
  t2535 = t2509 + t2530;
  t2537 = var2[1]*t2535;
  t2566 = 0.25592966999999994*var2[1]*t809;
  p_output1[0]=t1039;
  p_output1[1]=t1039;
  p_output1[2]=-0.5*t1235*var2[2] - 0.5*t1235*var2[6];
  p_output1[3]=t1322;
  p_output1[4]=t1322;
  p_output1[5]=t1552;
  p_output1[6]=t1552;
  p_output1[7]=-0.5*t1597*var2[2] - 0.5*t1597*var2[6];
  p_output1[8]=t1622;
  p_output1[9]=t1622;
  p_output1[10]=var2[1]*(-0.5*(t1812 + t1969)*var2[2] - 0.5*(t1812 + t1969 + t2019 + t2051)*var2[6]);
  p_output1[11]=var2[1]*(-0.5*(t1812 + t1969 + t2051 + t2155)*var2[2] - 0.5*(t1812 + t1969 + t2019 + t2155 + 3.4261*(0. - 0.14939999999999998*t2003 - 1.*t1768*t274)*t512 + 3.4261*t2027*t575 + 6.8522*t2027*t809)*var2[6]);
  p_output1[12]=-0.5*t2317*var2[2] - 0.5*t2393*var2[6];
  p_output1[13]=-0.5*t2317*var2[1];
  p_output1[14]=-0.5*t2393*var2[1];
  p_output1[15]=t2537;
  p_output1[16]=t2537;
  p_output1[17]=0.25592966999999994*t809*var2[2] + 0.25592966999999994*t809*var2[6];
  p_output1[18]=t2566;
  p_output1[19]=t2566;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L5_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L5_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

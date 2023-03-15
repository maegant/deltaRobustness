/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:35 GMT-08:00
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
  double t632;
  double t670;
  double t459;
  double t861;
  double t1263;
  double t1350;
  double t1383;
  double t1171;
  double t1174;
  double t1180;
  double t642;
  double t922;
  double t1141;
  double t1400;
  double t1453;
  double t1458;
  double t2004;
  double t2014;
  double t2018;
  double t2032;
  double t2038;
  double t1170;
  double t1384;
  double t1558;
  double t1571;
  double t1582;
  double t1626;
  double t1678;
  double t1783;
  double t1874;
  double t1883;
  double t1928;
  double t1946;
  double t1949;
  double t1956;
  double t1984;
  double t2097;
  double t2114;
  double t2149;
  double t2170;
  double t2248;
  double t2250;
  double t2261;
  double t2266;
  double t2283;
  double t2796;
  double t2843;
  double t2844;
  double t2846;
  double t2851;
  double t2937;
  double t2940;
  double t2998;
  double t2455;
  double t2457;
  double t2468;
  double t2476;
  double t2482;
  double t2522;
  double t3222;
  double t3277;
  double t2524;
  double t2574;
  double t2653;
  double t2668;
  double t2700;
  double t2720;
  double t2776;
  double t2923;
  double t3049;
  double t3679;
  double t3698;
  double t3729;
  double t3194;
  t632 = Cos(var1[5]);
  t670 = Sin(var1[2]);
  t459 = Cos(var1[2]);
  t861 = Sin(var1[5]);
  t1263 = t459*t632;
  t1350 = -1.*t670*t861;
  t1383 = t1263 + t1350;
  t1171 = -1.*t632*t670;
  t1174 = -1.*t459*t861;
  t1180 = t1171 + t1174;
  t642 = -1.*t459*t632;
  t922 = t670*t861;
  t1141 = t642 + t922;
  t1400 = t632*t670;
  t1453 = t459*t861;
  t1458 = t1400 + t1453;
  t2004 = -1.*t632;
  t2014 = 1. + t2004;
  t2018 = -0.4999*t2014;
  t2032 = -0.6493*t632;
  t2038 = t2018 + t2032;
  t1170 = -0.25592966999999994*var2[5]*t1141;
  t1384 = 10.2783*t1180*t1383;
  t1558 = 3.4261*t1458*t1383;
  t1571 = 10.2783*t1180*t1141;
  t1582 = 3.4261*t1458*t1141;
  t1626 = t1384 + t1558 + t1571 + t1582;
  t1678 = 0.5*var2[1]*t1626;
  t1783 = Power(t1180,2);
  t1874 = 6.8522*t1783;
  t1883 = 6.8522*t1180*t1458;
  t1928 = Power(t1383,2);
  t1946 = 6.8522*t1928;
  t1949 = 6.8522*t1383*t1141;
  t1956 = t1874 + t1883 + t1946 + t1949;
  t1984 = 0.5*var2[0]*t1956;
  t2097 = t2038*t861;
  t2114 = 0.14939999999999998*t632*t861;
  t2149 = t2097 + t2114;
  t2170 = 3.4261*t1180*t2149;
  t2248 = t2038*t632;
  t2250 = Power(t861,2);
  t2261 = -0.14939999999999998*t2250;
  t2266 = t2248 + t2261;
  t2283 = 3.4261*t1141*t2266;
  t2796 = 3.4261*t1783;
  t2843 = 3.4261*t1180*t1458;
  t2844 = 3.4261*t1928;
  t2846 = 3.4261*t1383*t1141;
  t2851 = t2796 + t2843 + t2844 + t2846;
  t2937 = 3.4261*t2149*t1383;
  t2940 = 3.4261*t1180*t2266;
  t2998 = t2937 + t2940;
  t2455 = -1.*t2038*t861;
  t2457 = -0.14939999999999998*t632*t861;
  t2468 = t2455 + t2457;
  t2476 = 3.4261*t1180*t2468;
  t2482 = Power(t632,2);
  t2522 = 0.14939999999999998*t2482;
  t3222 = t2248 + t2522;
  t3277 = 3.4261*t3222*t1383;
  t2524 = 0. + t2248 + t2522;
  t2574 = 3.4261*t2524*t1383;
  t2653 = -0.25592966999999994*var2[5]*t1180;
  t2668 = 6.8522*t1180*t1383;
  t2700 = 6.8522*t1458*t1383;
  t2720 = t2668 + t2700;
  t2776 = var2[0]*t2720;
  t2923 = 0.5*var2[1]*t2851;
  t3049 = 0.5*var2[0]*t2851;
  t3679 = 3.4261*t3222*t1458;
  t3698 = 3.4261*t2468*t1383;
  t3729 = t3679 + t3698 + t2937 + t2940;
  t3194 = -0.25592966999999994*var2[0]*t1180;
  p_output1[0]=var2[0]*(t1170 + t1678 + t1984 + 0.5*(t2170 + t2283)*var2[2]);
  p_output1[1]=var2[0]*(t1170 + t1678 + t1984 + 0.5*(t2170 + t2283 + t2476 + t2574)*var2[2]);
  p_output1[2]=t2653 + t2776 + t2923 + 0.5*t2998*var2[2];
  p_output1[3]=t3049;
  p_output1[4]=0.5*t2998*var2[0];
  p_output1[5]=t3194;
  p_output1[6]=var2[0]*(t1170 + t1678 + t1984 + 0.5*(t2170 + t2283 + t2476 + t3277)*var2[2]);
  p_output1[7]=var2[0]*(t1170 + t1678 + t1984 + 0.5*(t2170 + t2283 + 6.8522*t1180*t2468 + 3.4261*t1458*t2468 + t2574 + t3277 + 3.4261*t1383*(0. - 0.14939999999999998*t2482 - 1.*t2038*t632))*var2[2]);
  p_output1[8]=t2653 + t2776 + t2923 + 0.5*t3729*var2[2];
  p_output1[9]=t3049;
  p_output1[10]=0.5*t3729*var2[0];
  p_output1[11]=t3194;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L4_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L4_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

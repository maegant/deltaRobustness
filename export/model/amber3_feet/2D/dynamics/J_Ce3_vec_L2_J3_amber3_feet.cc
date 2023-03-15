/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:08 GMT-08:00
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
  double t192;
  double t531;
  double t752;
  double t708;
  double t313;
  double t458;
  double t465;
  double t479;
  double t480;
  double t636;
  double t649;
  double t698;
  double t743;
  double t769;
  double t788;
  double t971;
  double t985;
  double t991;
  double t997;
  double t1107;
  double t1135;
  double t1173;
  double t861;
  double t916;
  double t954;
  double t968;
  double t1044;
  double t1494;
  double t1521;
  double t1551;
  double t1212;
  double t1348;
  double t1354;
  double t1428;
  double t1214;
  double t1612;
  double t1614;
  double t1657;
  double t1243;
  double t1734;
  double t1767;
  double t1798;
  double t1571;
  double t1596;
  double t1846;
  double t1896;
  double t1898;
  double t1970;
  double t1847;
  double t1458;
  double t1875;
  double t1674;
  double t2102;
  double t1886;
  double t2175;
  double t2180;
  t192 = Cos(var1[3]);
  t531 = Sin(var1[3]);
  t752 = Sin(var1[2]);
  t708 = Cos(var1[2]);
  t313 = -1.*t192;
  t458 = 1. + t313;
  t465 = -0.4999*t458;
  t479 = -0.6493*t192;
  t480 = t465 + t479;
  t636 = t480*t531;
  t649 = 0.14939999999999998*t192*t531;
  t698 = t636 + t649;
  t743 = -1.*t708*t192;
  t769 = t752*t531;
  t788 = t743 + t769;
  t971 = t480*t192;
  t985 = Power(t531,2);
  t991 = -0.14939999999999998*t985;
  t997 = t971 + t991;
  t1107 = -1.*t192*t752;
  t1135 = -1.*t708*t531;
  t1173 = t1107 + t1135;
  t861 = 3.4261*t698*t788;
  t916 = t192*t752;
  t954 = t708*t531;
  t968 = t916 + t954;
  t1044 = 3.4261*t968*t997;
  t1494 = -1.*t480*t531;
  t1521 = -0.14939999999999998*t192*t531;
  t1551 = t1494 + t1521;
  t1212 = 3.4261*t1173*t698;
  t1348 = Power(t192,2);
  t1354 = 0.14939999999999998*t1348;
  t1428 = 0. + t971 + t1354;
  t1214 = 3.4261*t788*t997;
  t1612 = t708*t192;
  t1614 = -1.*t752*t531;
  t1657 = t1612 + t1614;
  t1243 = t1212 + t1214;
  t1734 = 3.4261*t698*t1657;
  t1767 = 3.4261*t1173*t997;
  t1798 = t1734 + t1767;
  t1571 = 3.4261*t1551*t788;
  t1596 = 3.4261*t1173*t1551;
  t1846 = t971 + t1354;
  t1896 = -1.*t480*t192;
  t1898 = -0.14939999999999998*t1348;
  t1970 = 0. + t1896 + t1898;
  t1847 = 3.4261*t1846*t1173;
  t1458 = 3.4261*t1428*t1173;
  t1875 = 3.4261*t1846*t1657;
  t1674 = 3.4261*t1428*t1657;
  t2102 = 3.4261*t1551*t1657;
  t1886 = t1596 + t1212 + t1875 + t1214;
  t2175 = 3.4261*t1846*t968;
  t2180 = t2175 + t2102 + t1734 + t1767;
  p_output1[0]=(0.5*t1243*var2[0] + 0.5*(t1044 + t861)*var2[1])*var2[2];
  p_output1[1]=(0.5*(t1212 + t1214 + t1596 + t1674)*var2[0] + 0.5*(t1044 + t1458 + t1571 + t861)*var2[1])*var2[2];
  p_output1[2]=0.5*t1798*var2[2];
  p_output1[3]=0.5*t1243*var2[2];
  p_output1[4]=0.5*t1798*var2[0] + 0.5*t1243*var2[1];
  p_output1[5]=(0.5*t1886*var2[0] + 0.5*(t1044 + t1571 + t1847 + t861)*var2[1])*var2[2];
  p_output1[6]=var2[2]*(0.5*(t1212 + t1214 + 6.8522*t1173*t1551 + t1674 + t1875 + 3.4261*t1657*t1970 + 3.4261*t1551*t968)*var2[0] + 0.5*(t1044 + t1458 + t1847 + 3.4261*t1173*t1970 + t2102 + 6.8522*t1551*t788 + t861)*var2[1] + 0.5*(6.8522*Power(t1551,2) + 6.8522*t1428*t1846 + 6.8522*t1551*t698 + 6.8522*t1970*t997)*var2[2] - 0.25592966999999994*t1970*var2[3]);
  p_output1[7]=0.5*t2180*var2[2];
  p_output1[8]=0.5*t1886*var2[2];
  p_output1[9]=0.5*t2180*var2[0] + 0.5*t1886*var2[1] + (6.8522*t1846*t698 + 6.8522*t1551*t997)*var2[2] - 0.25592966999999994*t1551*var2[3];
  p_output1[10]=-0.25592966999999994*t1551*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L2_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L2_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

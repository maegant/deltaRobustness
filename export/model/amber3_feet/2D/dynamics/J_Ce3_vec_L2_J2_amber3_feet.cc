/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:07 GMT-08:00
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
  double t165;
  double t300;
  double t397;
  double t446;
  double t313;
  double t458;
  double t465;
  double t636;
  double t637;
  double t649;
  double t470;
  double t498;
  double t531;
  double t723;
  double t743;
  double t752;
  double t1024;
  double t1036;
  double t1044;
  double t1074;
  double t1082;
  double t469;
  double t698;
  double t708;
  double t769;
  double t788;
  double t918;
  double t928;
  double t954;
  double t968;
  double t971;
  double t985;
  double t991;
  double t997;
  double t1005;
  double t1023;
  double t1173;
  double t1104;
  double t1107;
  double t1135;
  double t1160;
  double t1212;
  double t1214;
  double t1243;
  double t1274;
  double t1612;
  double t1614;
  double t1657;
  double t1674;
  double t1675;
  double t1682;
  double t1734;
  double t1767;
  double t1780;
  double t1428;
  double t1458;
  double t1505;
  double t1521;
  double t1551;
  double t1557;
  double t1835;
  double t1838;
  double t1494;
  double t1496;
  double t1689;
  double t1696;
  double t1702;
  double t1712;
  double t1713;
  double t1714;
  double t1717;
  double t2010;
  double t2017;
  double t2020;
  double t1831;
  t165 = Cos(var1[3]);
  t300 = Sin(var1[2]);
  t397 = Cos(var1[2]);
  t446 = Sin(var1[3]);
  t313 = t165*t300;
  t458 = t397*t446;
  t465 = t313 + t458;
  t636 = t397*t165;
  t637 = -1.*t300*t446;
  t649 = t636 + t637;
  t470 = -1.*t165*t300;
  t498 = -1.*t397*t446;
  t531 = t470 + t498;
  t723 = -1.*t397*t165;
  t743 = t300*t446;
  t752 = t723 + t743;
  t1024 = -1.*t165;
  t1036 = 1. + t1024;
  t1044 = -0.4999*t1036;
  t1074 = -0.6493*t165;
  t1082 = t1044 + t1074;
  t469 = -0.25592966999999994*var2[3]*t465;
  t698 = 10.2783*t531*t649;
  t708 = 3.4261*t465*t649;
  t769 = 10.2783*t531*t752;
  t788 = 3.4261*t465*t752;
  t918 = t698 + t708 + t769 + t788;
  t928 = 0.5*var2[0]*t918;
  t954 = Power(t531,2);
  t968 = 6.8522*t954;
  t971 = 6.8522*t531*t465;
  t985 = 6.8522*t649*t752;
  t991 = Power(t752,2);
  t997 = 6.8522*t991;
  t1005 = t968 + t971 + t985 + t997;
  t1023 = 0.5*var2[1]*t1005;
  t1173 = t1082*t165;
  t1104 = t1082*t446;
  t1107 = 0.14939999999999998*t165*t446;
  t1135 = t1104 + t1107;
  t1160 = 3.4261*t1135*t752;
  t1212 = Power(t446,2);
  t1214 = -0.14939999999999998*t1212;
  t1243 = t1173 + t1214;
  t1274 = 3.4261*t465*t1243;
  t1612 = 3.4261*t954;
  t1614 = 3.4261*t531*t465;
  t1657 = Power(t649,2);
  t1674 = 3.4261*t1657;
  t1675 = 3.4261*t649*t752;
  t1682 = t1612 + t1614 + t1674 + t1675;
  t1734 = 3.4261*t531*t1135;
  t1767 = 3.4261*t752*t1243;
  t1780 = t1734 + t1767;
  t1428 = Power(t165,2);
  t1458 = 0.14939999999999998*t1428;
  t1505 = -1.*t1082*t446;
  t1521 = -0.14939999999999998*t165*t446;
  t1551 = t1505 + t1521;
  t1557 = 3.4261*t1551*t752;
  t1835 = t1173 + t1458;
  t1838 = 3.4261*t1835*t531;
  t1494 = 0. + t1173 + t1458;
  t1496 = 3.4261*t1494*t531;
  t1689 = 0.5*var2[1]*t1682;
  t1696 = -0.25592966999999994*var2[3]*t752;
  t1702 = 6.8522*t531*t649;
  t1712 = 6.8522*t531*t752;
  t1713 = t1702 + t1712;
  t1714 = var2[1]*t1713;
  t1717 = 0.5*var2[0]*t1682;
  t2010 = 3.4261*t531*t1551;
  t2017 = 3.4261*t1835*t649;
  t2020 = t2010 + t1734 + t2017 + t1767;
  t1831 = -0.25592966999999994*var2[1]*t752;
  p_output1[0]=var2[1]*(t1023 + t469 + t928 + 0.5*(t1160 + t1274)*var2[2]);
  p_output1[1]=var2[1]*(t1023 + t469 + t928 + 0.5*(t1160 + t1274 + t1496 + t1557)*var2[2]);
  p_output1[2]=t1689;
  p_output1[3]=t1696 + t1714 + t1717 + 0.5*t1780*var2[2];
  p_output1[4]=0.5*t1780*var2[1];
  p_output1[5]=t1831;
  p_output1[6]=var2[1]*(t1023 + t469 + t928 + 0.5*(t1160 + t1274 + t1557 + t1838)*var2[2]);
  p_output1[7]=var2[1]*(t1023 + t469 + t928 + 0.5*(t1160 + t1274 + t1496 + t1838 + 3.4261*(0. - 0.14939999999999998*t1428 - 1.*t1082*t165)*t531 + 3.4261*t1551*t649 + 6.8522*t1551*t752)*var2[2]);
  p_output1[8]=t1689;
  p_output1[9]=t1696 + t1714 + t1717 + 0.5*t2020*var2[2];
  p_output1[10]=0.5*t2020*var2[1];
  p_output1[11]=t1831;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L2_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L2_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

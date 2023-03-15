/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:05 GMT-08:00
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
  double t57;
  double t158;
  double t17;
  double t206;
  double t446;
  double t457;
  double t465;
  double t379;
  double t395;
  double t397;
  double t87;
  double t300;
  double t313;
  double t470;
  double t498;
  double t531;
  double t848;
  double t875;
  double t918;
  double t928;
  double t932;
  double t355;
  double t469;
  double t636;
  double t637;
  double t649;
  double t650;
  double t680;
  double t698;
  double t723;
  double t743;
  double t752;
  double t769;
  double t788;
  double t818;
  double t847;
  double t954;
  double t968;
  double t971;
  double t980;
  double t985;
  double t991;
  double t997;
  double t1005;
  double t1019;
  double t1346;
  double t1354;
  double t1428;
  double t1458;
  double t1482;
  double t1494;
  double t1496;
  double t1501;
  double t1049;
  double t1074;
  double t1082;
  double t1091;
  double t1104;
  double t1107;
  double t1571;
  double t1585;
  double t1135;
  double t1147;
  double t1250;
  double t1274;
  double t1283;
  double t1318;
  double t1339;
  double t1484;
  double t1534;
  double t1714;
  double t1717;
  double t1730;
  double t1557;
  t57 = Cos(var1[3]);
  t158 = Sin(var1[2]);
  t17 = Cos(var1[2]);
  t206 = Sin(var1[3]);
  t446 = t17*t57;
  t457 = -1.*t158*t206;
  t465 = t446 + t457;
  t379 = -1.*t57*t158;
  t395 = -1.*t17*t206;
  t397 = t379 + t395;
  t87 = -1.*t17*t57;
  t300 = t158*t206;
  t313 = t87 + t300;
  t470 = t57*t158;
  t498 = t17*t206;
  t531 = t470 + t498;
  t848 = -1.*t57;
  t875 = 1. + t848;
  t918 = -0.4999*t875;
  t928 = -0.6493*t57;
  t932 = t918 + t928;
  t355 = -0.25592966999999994*var2[3]*t313;
  t469 = 10.2783*t397*t465;
  t636 = 3.4261*t531*t465;
  t637 = 10.2783*t397*t313;
  t649 = 3.4261*t531*t313;
  t650 = t469 + t636 + t637 + t649;
  t680 = 0.5*var2[1]*t650;
  t698 = Power(t397,2);
  t723 = 6.8522*t698;
  t743 = 6.8522*t397*t531;
  t752 = Power(t465,2);
  t769 = 6.8522*t752;
  t788 = 6.8522*t465*t313;
  t818 = t723 + t743 + t769 + t788;
  t847 = 0.5*var2[0]*t818;
  t954 = t932*t206;
  t968 = 0.14939999999999998*t57*t206;
  t971 = t954 + t968;
  t980 = 3.4261*t397*t971;
  t985 = t932*t57;
  t991 = Power(t206,2);
  t997 = -0.14939999999999998*t991;
  t1005 = t985 + t997;
  t1019 = 3.4261*t313*t1005;
  t1346 = 3.4261*t698;
  t1354 = 3.4261*t397*t531;
  t1428 = 3.4261*t752;
  t1458 = 3.4261*t465*t313;
  t1482 = t1346 + t1354 + t1428 + t1458;
  t1494 = 3.4261*t971*t465;
  t1496 = 3.4261*t397*t1005;
  t1501 = t1494 + t1496;
  t1049 = -1.*t932*t206;
  t1074 = -0.14939999999999998*t57*t206;
  t1082 = t1049 + t1074;
  t1091 = 3.4261*t397*t1082;
  t1104 = Power(t57,2);
  t1107 = 0.14939999999999998*t1104;
  t1571 = t985 + t1107;
  t1585 = 3.4261*t1571*t465;
  t1135 = 0. + t985 + t1107;
  t1147 = 3.4261*t1135*t465;
  t1250 = -0.25592966999999994*var2[3]*t397;
  t1274 = 6.8522*t397*t465;
  t1283 = 6.8522*t531*t465;
  t1318 = t1274 + t1283;
  t1339 = var2[0]*t1318;
  t1484 = 0.5*var2[1]*t1482;
  t1534 = 0.5*var2[0]*t1482;
  t1714 = 3.4261*t1571*t531;
  t1717 = 3.4261*t1082*t465;
  t1730 = t1714 + t1717 + t1494 + t1496;
  t1557 = -0.25592966999999994*var2[0]*t397;
  p_output1[0]=var2[0]*(t355 + t680 + t847 + 0.5*(t1019 + t980)*var2[2]);
  p_output1[1]=var2[0]*(t355 + t680 + t847 + 0.5*(t1019 + t1091 + t1147 + t980)*var2[2]);
  p_output1[2]=t1250 + t1339 + t1484 + 0.5*t1501*var2[2];
  p_output1[3]=t1534;
  p_output1[4]=0.5*t1501*var2[0];
  p_output1[5]=t1557;
  p_output1[6]=var2[0]*(t355 + t680 + t847 + 0.5*(t1019 + t1091 + t1585 + t980)*var2[2]);
  p_output1[7]=var2[0]*(t355 + t680 + t847 + 0.5*(t1019 + t1147 + t1585 + 6.8522*t1082*t397 + 3.4261*t1082*t531 + 3.4261*t465*(0. - 0.14939999999999998*t1104 - 1.*t57*t932) + t980)*var2[2]);
  p_output1[8]=t1250 + t1339 + t1484 + 0.5*t1730*var2[2];
  p_output1[9]=t1534;
  p_output1[10]=0.5*t1730*var2[0];
  p_output1[11]=t1557;
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

#include "J_Ce3_vec_L2_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L2_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:12 GMT-08:00
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
  double t310;
  double t332;
  double t268;
  double t378;
  double t625;
  double t692;
  double t717;
  double t473;
  double t590;
  double t620;
  double t330;
  double t420;
  double t425;
  double t736;
  double t760;
  double t761;
  double t1158;
  double t1168;
  double t1169;
  double t1178;
  double t1206;
  double t471;
  double t719;
  double t797;
  double t825;
  double t826;
  double t828;
  double t865;
  double t877;
  double t883;
  double t884;
  double t902;
  double t1029;
  double t1114;
  double t1118;
  double t1145;
  double t1228;
  double t1293;
  double t1294;
  double t1313;
  double t1359;
  double t1381;
  double t1382;
  double t1384;
  double t1424;
  double t1753;
  double t1762;
  double t1763;
  double t1781;
  double t1782;
  double t1783;
  double t1801;
  double t1804;
  double t1953;
  double t1954;
  double t1981;
  double t1988;
  double t2006;
  double t2032;
  double t1660;
  double t1669;
  double t1677;
  double t1603;
  double t1611;
  double t1637;
  double t2043;
  double t2056;
  double t1808;
  double t2148;
  double t2168;
  double t1465;
  double t2070;
  double t2096;
  double t2098;
  double t2101;
  double t1640;
  double t1679;
  double t1691;
  double t1869;
  double t1875;
  double t1908;
  double t1502;
  double t2460;
  double t2465;
  double t2491;
  double t2498;
  double t1947;
  double t2224;
  t310 = Cos(var1[3]);
  t332 = Sin(var1[2]);
  t268 = Cos(var1[2]);
  t378 = Sin(var1[3]);
  t625 = t268*t310;
  t692 = -1.*t332*t378;
  t717 = t625 + t692;
  t473 = -1.*t310*t332;
  t590 = -1.*t268*t378;
  t620 = t473 + t590;
  t330 = -1.*t268*t310;
  t420 = t332*t378;
  t425 = t330 + t420;
  t736 = t310*t332;
  t760 = t268*t378;
  t761 = t736 + t760;
  t1158 = -1.*t310;
  t1168 = 1. + t1158;
  t1169 = -0.4999*t1168;
  t1178 = -0.6493*t310;
  t1206 = t1169 + t1178;
  t471 = 0.25592966999999994*var2[3]*t425;
  t719 = 10.2783*t620*t717;
  t797 = 3.4261*t761*t717;
  t825 = 10.2783*t620*t425;
  t826 = 3.4261*t761*t425;
  t828 = t719 + t797 + t825 + t826;
  t865 = -0.5*var2[1]*t828;
  t877 = Power(t620,2);
  t883 = 6.8522*t877;
  t884 = 6.8522*t620*t761;
  t902 = Power(t717,2);
  t1029 = 6.8522*t902;
  t1114 = 6.8522*t717*t425;
  t1118 = t883 + t884 + t1029 + t1114;
  t1145 = -0.5*var2[0]*t1118;
  t1228 = t1206*t378;
  t1293 = 0.14939999999999998*t310*t378;
  t1294 = t1228 + t1293;
  t1313 = 3.4261*t620*t1294;
  t1359 = t1206*t310;
  t1381 = Power(t378,2);
  t1382 = -0.14939999999999998*t1381;
  t1384 = t1359 + t1382;
  t1424 = 3.4261*t425*t1384;
  t1753 = 6.8522*t620*t717;
  t1762 = 6.8522*t761*t717;
  t1763 = t1753 + t1762;
  t1781 = 3.4261*t877;
  t1782 = 3.4261*t620*t761;
  t1783 = 3.4261*t902;
  t1801 = 3.4261*t717*t425;
  t1804 = t1781 + t1782 + t1783 + t1801;
  t1953 = 0.25592966999999994*var2[3]*t761;
  t1954 = -0.5*var2[0]*t828;
  t1981 = Power(t425,2);
  t1988 = 6.8522*t1981;
  t2006 = t883 + t884 + t1114 + t1988;
  t2032 = -0.5*var2[1]*t2006;
  t1660 = Power(t310,2);
  t1669 = 0.14939999999999998*t1660;
  t1677 = 0. + t1359 + t1669;
  t1603 = -1.*t1206*t378;
  t1611 = -0.14939999999999998*t310*t378;
  t1637 = t1603 + t1611;
  t2043 = 3.4261*t1294*t425;
  t2056 = 3.4261*t761*t1384;
  t1808 = -0.5*var2[2]*t1804;
  t2148 = 6.8522*t620*t425;
  t2168 = t1753 + t2148;
  t1465 = t1313 + t1424;
  t2070 = t2043 + t2056;
  t2096 = 3.4261*t1677*t620;
  t2098 = 3.4261*t1637*t425;
  t2101 = t2096 + t2098 + t2043 + t2056;
  t1640 = 3.4261*t620*t1637;
  t1679 = 3.4261*t1677*t717;
  t1691 = t1640 + t1313 + t1679 + t1424;
  t1869 = 3.4261*t1294*t717;
  t1875 = 3.4261*t620*t1384;
  t1908 = t1869 + t1875;
  t1502 = -0.5*var2[2]*t1465;
  t2460 = 0.25592966999999994*var2[1]*t761;
  t2465 = 0.25592966999999994*var2[0]*t425;
  t2491 = t2460 + t2465;
  t2498 = var2[2]*t2491;
  t1947 = 0.25592966999999994*var2[2]*t620;
  t2224 = 0.25592966999999994*var2[2]*t425;
  p_output1[0]=(t1145 + t1502 + t471 + t865)*var2[2];
  p_output1[1]=var2[2]*(t1145 + t471 + t865 - 0.5*t1691*var2[2]);
  p_output1[2]=-0.5*t1763*var2[2];
  p_output1[3]=t1808;
  p_output1[4]=-0.5*t1763*var2[0] - 0.5*t1804*var2[1] - 1.*t1908*var2[2] + 0.25592966999999994*t620*var2[3];
  p_output1[5]=t1947;
  p_output1[6]=var2[2]*(t1953 + t1954 + t2032 - 0.5*t2070*var2[2]);
  p_output1[7]=var2[2]*(t1953 + t1954 + t2032 - 0.5*t2101*var2[2]);
  p_output1[8]=t1808;
  p_output1[9]=-0.5*t2168*var2[2];
  p_output1[10]=t471 - 0.5*t1804*var2[0] - 0.5*t2168*var2[1] - 1.*t1465*var2[2];
  p_output1[11]=t2224;
  p_output1[12]=(-0.5*t1465*var2[0] - 0.5*t2070*var2[1])*var2[2];
  p_output1[13]=(-0.5*t1691*var2[0] - 0.5*t2101*var2[1])*var2[2];
  p_output1[14]=-0.5*t1908*var2[2];
  p_output1[15]=t1502;
  p_output1[16]=-0.5*t1908*var2[0] - 0.5*t1465*var2[1];
  p_output1[17]=t2498;
  p_output1[18]=t2498;
  p_output1[19]=t1947;
  p_output1[20]=t2224;
  p_output1[21]=0.25592966999999994*t620*var2[0] + 0.25592966999999994*t425*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L2_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L2_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

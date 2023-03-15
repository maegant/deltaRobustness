/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:13 GMT-08:00
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
  double t425;
  double t625;
  double t420;
  double t717;
  double t813;
  double t825;
  double t826;
  double t761;
  double t776;
  double t797;
  double t620;
  double t719;
  double t736;
  double t883;
  double t884;
  double t902;
  double t1382;
  double t1384;
  double t1424;
  double t1550;
  double t1573;
  double t1692;
  double t760;
  double t877;
  double t1029;
  double t1058;
  double t1114;
  double t1169;
  double t1178;
  double t1179;
  double t1228;
  double t1259;
  double t1293;
  double t1294;
  double t1313;
  double t1359;
  double t1381;
  double t1588;
  double t1611;
  double t1637;
  double t1660;
  double t1669;
  double t1677;
  double t1679;
  double t1720;
  double t1745;
  double t1753;
  double t1762;
  double t1776;
  double t1781;
  double t1782;
  double t1783;
  double t2080;
  double t2081;
  double t2096;
  double t2122;
  double t2137;
  double t2140;
  double t2148;
  double t2196;
  double t2210;
  double t2212;
  double t2222;
  double t2224;
  double t2229;
  double t2366;
  double t2368;
  double t2370;
  double t2376;
  double t2409;
  double t2410;
  double t1875;
  double t1942;
  double t1946;
  double t2460;
  double t1974;
  double t2491;
  double t2498;
  double t2207;
  double t1640;
  double t1801;
  double t2577;
  double t2616;
  double t1815;
  double t2465;
  double t2505;
  double t2539;
  double t2545;
  double t2550;
  double t2558;
  double t1855;
  double t1869;
  double t1947;
  double t1981;
  double t1988;
  double t2233;
  double t2650;
  double t3016;
  double t3065;
  double t3070;
  double t3194;
  double t3195;
  t425 = Cos(var1[3]);
  t625 = Sin(var1[2]);
  t420 = Cos(var1[2]);
  t717 = Sin(var1[3]);
  t813 = t420*t425;
  t825 = -1.*t625*t717;
  t826 = t813 + t825;
  t761 = -1.*t425*t625;
  t776 = -1.*t420*t717;
  t797 = t761 + t776;
  t620 = -1.*t420*t425;
  t719 = t625*t717;
  t736 = t620 + t719;
  t883 = t425*t625;
  t884 = t420*t717;
  t902 = t883 + t884;
  t1382 = -1.*t425;
  t1384 = 1. + t1382;
  t1424 = -0.4999*t1384;
  t1550 = -0.6493*t425;
  t1573 = t1424 + t1550;
  t1692 = t1573*t425;
  t760 = 0.25592966999999994*var2[3]*t736;
  t877 = 10.2783*t797*t826;
  t1029 = 3.4261*t902*t826;
  t1058 = 10.2783*t797*t736;
  t1114 = 3.4261*t902*t736;
  t1169 = t877 + t1029 + t1058 + t1114;
  t1178 = -0.5*var2[1]*t1169;
  t1179 = Power(t797,2);
  t1228 = 6.8522*t1179;
  t1259 = 6.8522*t797*t902;
  t1293 = Power(t826,2);
  t1294 = 6.8522*t1293;
  t1313 = 6.8522*t826*t736;
  t1359 = t1228 + t1259 + t1294 + t1313;
  t1381 = -0.5*var2[0]*t1359;
  t1588 = -1.*t1573*t717;
  t1611 = -0.14939999999999998*t425*t717;
  t1637 = t1588 + t1611;
  t1660 = t1573*t717;
  t1669 = 0.14939999999999998*t425*t717;
  t1677 = t1660 + t1669;
  t1679 = 3.4261*t797*t1677;
  t1720 = Power(t425,2);
  t1745 = 0.14939999999999998*t1720;
  t1753 = t1692 + t1745;
  t1762 = 3.4261*t1753*t826;
  t1776 = Power(t717,2);
  t1781 = -0.14939999999999998*t1776;
  t1782 = t1692 + t1781;
  t1783 = 3.4261*t736*t1782;
  t2080 = 6.8522*t797*t826;
  t2081 = 6.8522*t902*t826;
  t2096 = t2080 + t2081;
  t2122 = 3.4261*t1179;
  t2137 = 3.4261*t797*t902;
  t2140 = 3.4261*t1293;
  t2148 = 3.4261*t826*t736;
  t2196 = t2122 + t2137 + t2140 + t2148;
  t2210 = 3.4261*t1753*t902;
  t2212 = 3.4261*t1637*t826;
  t2222 = 3.4261*t1677*t826;
  t2224 = 3.4261*t797*t1782;
  t2229 = t2210 + t2212 + t2222 + t2224;
  t2366 = 0.25592966999999994*var2[3]*t902;
  t2368 = -0.5*var2[0]*t1169;
  t2370 = Power(t736,2);
  t2376 = 6.8522*t2370;
  t2409 = t1228 + t1259 + t1313 + t2376;
  t2410 = -0.5*var2[1]*t2409;
  t1875 = -1.*t1573*t425;
  t1942 = -0.14939999999999998*t1720;
  t1946 = 0. + t1875 + t1942;
  t2460 = 3.4261*t1753*t797;
  t1974 = 0. + t1692 + t1745;
  t2491 = 3.4261*t1677*t736;
  t2498 = 3.4261*t902*t1782;
  t2207 = -0.5*var2[3]*t2196;
  t1640 = 3.4261*t797*t1637;
  t1801 = t1640 + t1679 + t1762 + t1783;
  t2577 = 6.8522*t797*t736;
  t2616 = t2080 + t2577;
  t1815 = -0.5*var2[2]*t1801;
  t2465 = 3.4261*t1637*t736;
  t2505 = t2460 + t2465 + t2491 + t2498;
  t2539 = 3.4261*t1946*t797;
  t2545 = 3.4261*t1974*t797;
  t2550 = 6.8522*t1637*t736;
  t2558 = t2539 + t2460 + t2545 + t2212 + t2550 + t2491 + t2498;
  t1855 = 6.8522*t797*t1637;
  t1869 = 3.4261*t902*t1637;
  t1947 = 3.4261*t1946*t826;
  t1981 = 3.4261*t1974*t826;
  t1988 = t1855 + t1869 + t1679 + t1947 + t1762 + t1981 + t1783;
  t2233 = -0.5*var2[3]*t2229;
  t2650 = -0.5*var2[3]*t1801;
  t3016 = 6.8522*t1753*t1677;
  t3065 = 6.8522*t1637*t1782;
  t3070 = t3016 + t3065;
  t3194 = 0.25592966999999994*var2[1]*t902;
  t3195 = 0.25592966999999994*var2[0]*t736;
  p_output1[0]=(t1178 + t1381 + t1815 + t760)*var2[3];
  p_output1[1]=(t1178 + t1381 + t760 - 0.5*t1988*var2[2])*var2[3];
  p_output1[2]=-0.5*t2096*var2[3];
  p_output1[3]=t2207;
  p_output1[4]=t2233;
  p_output1[5]=-0.5*t2096*var2[0] - 0.5*t2196*var2[1] - 0.5*t2229*var2[2] + 0.5118593399999999*t797*var2[3];
  p_output1[6]=(t2366 + t2368 + t2410 - 0.5*t2505*var2[2])*var2[3];
  p_output1[7]=(t2366 + t2368 + t2410 - 0.5*t2558*var2[2])*var2[3];
  p_output1[8]=t2207;
  p_output1[9]=-0.5*t2616*var2[3];
  p_output1[10]=t2650;
  p_output1[11]=t1815 - 0.5*t2196*var2[0] - 0.5*t2616*var2[1] + 0.5118593399999999*t736*var2[3];
  p_output1[12]=(-0.5*t1801*var2[0] - 0.5*t2505*var2[1])*var2[3];
  p_output1[13]=var2[3]*(-0.5*t1988*var2[0] - 0.5*t2558*var2[1] - 0.5*(6.8522*Power(t1637,2) + 6.8522*t1637*t1677 + 6.8522*t1782*t1946 + 6.8522*t1753*t1974)*var2[2] + 0.25592966999999994*t1946*var2[3]);
  p_output1[14]=t2233;
  p_output1[15]=t2650;
  p_output1[16]=-0.5*t3070*var2[3];
  p_output1[17]=-0.5*t2229*var2[0] - 0.5*t1801*var2[1] - 0.5*t3070*var2[2] + 0.5118593399999999*t1637*var2[3];
  p_output1[18]=(t3194 + t3195)*var2[3];
  p_output1[19]=(t3194 + t3195 + 0.25592966999999994*t1946*var2[2])*var2[3];
  p_output1[20]=0.25592966999999994*t797*var2[3];
  p_output1[21]=t760;
  p_output1[22]=0.25592966999999994*t1637*var2[3];
  p_output1[23]=0.25592966999999994*t797*var2[0] + 0.25592966999999994*t736*var2[1] + 0.25592966999999994*t1637*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L2_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L2_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

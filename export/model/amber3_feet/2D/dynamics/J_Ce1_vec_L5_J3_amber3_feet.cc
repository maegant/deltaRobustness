/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:03 GMT-08:00
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
  double t402;
  double t536;
  double t512;
  double t415;
  double t681;
  double t682;
  double t686;
  double t715;
  double t720;
  double t446;
  double t575;
  double t634;
  double t802;
  double t809;
  double t889;
  double t927;
  double t1055;
  double t957;
  double t1031;
  double t1039;
  double t1060;
  double t1102;
  double t1123;
  double t1149;
  double t1274;
  double t1278;
  double t1340;
  double t1349;
  double t1351;
  double t1441;
  double t1544;
  double t1552;
  double t1566;
  double t1456;
  double t1567;
  double t1687;
  double t1770;
  double t1895;
  double t1903;
  double t1934;
  double t2120;
  double t2146;
  double t2192;
  double t2216;
  double t2226;
  double t2253;
  double t2280;
  double t2295;
  double t1977;
  double t2003;
  double t2013;
  double t2283;
  double t2400;
  double t1218;
  double t1602;
  double t1606;
  double t2644;
  double t2651;
  double t2661;
  t402 = Cos(var1[6]);
  t536 = Sin(var1[6]);
  t512 = Cos(var1[2]);
  t415 = Sin(var1[2]);
  t681 = -1.*t402;
  t682 = 1. + t681;
  t686 = -0.4999*t682;
  t715 = -0.6493*t402;
  t720 = t686 + t715;
  t446 = -1.*t402*t415;
  t575 = -1.*t512*t536;
  t634 = t446 + t575;
  t802 = t720*t536;
  t809 = 0.14939999999999998*t402*t536;
  t889 = t802 + t809;
  t927 = 3.4261*t634*t889;
  t1055 = t720*t402;
  t957 = -1.*t512*t402;
  t1031 = t415*t536;
  t1039 = t957 + t1031;
  t1060 = Power(t536,2);
  t1102 = -0.14939999999999998*t1060;
  t1123 = t1055 + t1102;
  t1149 = 3.4261*t1039*t1123;
  t1274 = -1.*t720*t536;
  t1278 = -0.14939999999999998*t402*t536;
  t1340 = t1274 + t1278;
  t1349 = 3.4261*t634*t1340;
  t1351 = Power(t402,2);
  t1441 = 0.14939999999999998*t1351;
  t1544 = t512*t402;
  t1552 = -1.*t415*t536;
  t1566 = t1544 + t1552;
  t1456 = t1055 + t1441;
  t1567 = 3.4261*t1456*t1566;
  t1687 = 0. + t1055 + t1441;
  t1770 = 3.4261*t1687*t1566;
  t1895 = t402*t415;
  t1903 = t512*t536;
  t1934 = t1895 + t1903;
  t2120 = 3.4261*t889*t1566;
  t2146 = 3.4261*t634*t1123;
  t2192 = 3.4261*t1456*t1934;
  t2216 = 3.4261*t1340*t1566;
  t2226 = t2192 + t2216 + t2120 + t2146;
  t2253 = 3.4261*t889*t1039;
  t2280 = 3.4261*t1934*t1123;
  t2295 = 3.4261*t1340*t1039;
  t1977 = -1.*t720*t402;
  t2003 = -0.14939999999999998*t1351;
  t2013 = 0. + t1977 + t2003;
  t2283 = 3.4261*t1456*t634;
  t2400 = 3.4261*t1687*t634;
  t1218 = t927 + t1149;
  t1602 = t1349 + t927 + t1567 + t1149;
  t1606 = -0.5*var2[6]*t1602;
  t2644 = 6.8522*t1456*t889;
  t2651 = 6.8522*t1340*t1123;
  t2661 = t2644 + t2651;
  p_output1[0]=var2[2]*(t1606 - 0.5*t1218*var2[2]);
  p_output1[1]=var2[2]*(-0.5*(t1149 + t1349 + t1770 + t927)*var2[2] - 0.5*(t1149 + t1567 + t1770 + 3.4261*t1340*t1934 + 3.4261*t1566*t2013 + 6.8522*t1340*t634 + t927)*var2[6]);
  p_output1[2]=-1.*(t2120 + t2146)*var2[2] - 0.5*t2226*var2[6];
  p_output1[3]=-0.5*t2226*var2[2];
  p_output1[4]=var2[2]*(-0.5*(t2253 + t2280)*var2[2] - 0.5*(t2253 + t2280 + t2283 + t2295)*var2[6]);
  p_output1[5]=var2[2]*(-0.5*(t2253 + t2280 + t2295 + t2400)*var2[2] - 0.5*(6.8522*t1039*t1340 + t2216 + t2253 + t2280 + t2283 + t2400 + 3.4261*t2013*t634)*var2[6]);
  p_output1[6]=t1606 - 1.*t1218*var2[2];
  p_output1[7]=-0.5*t1602*var2[2];
  p_output1[8]=-0.5*(6.8522*Power(t1340,2) + 6.8522*t1456*t1687 + 6.8522*t1123*t2013 + 6.8522*t1340*t889)*var2[2]*var2[6];
  p_output1[9]=-0.5*t2661*var2[6];
  p_output1[10]=-0.5*t2661*var2[2];
  p_output1[11]=0.25592966999999994*t2013*var2[2]*var2[6];
  p_output1[12]=0.25592966999999994*t1340*var2[6];
  p_output1[13]=0.25592966999999994*t1340*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L5_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L5_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

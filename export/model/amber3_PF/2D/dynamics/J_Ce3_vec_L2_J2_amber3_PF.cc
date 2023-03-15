/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:13 GMT-08:00
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
  double t314;
  double t315;
  double t442;
  double t531;
  double t437;
  double t540;
  double t541;
  double t813;
  double t819;
  double t851;
  double t641;
  double t657;
  double t717;
  double t929;
  double t946;
  double t961;
  double t1513;
  double t1528;
  double t1598;
  double t1621;
  double t1625;
  double t625;
  double t907;
  double t908;
  double t1181;
  double t1225;
  double t1230;
  double t1260;
  double t1313;
  double t1320;
  double t1417;
  double t1460;
  double t1465;
  double t1488;
  double t1490;
  double t1501;
  double t1697;
  double t1658;
  double t1673;
  double t1686;
  double t1695;
  double t1710;
  double t1715;
  double t1771;
  double t1813;
  double t2181;
  double t2211;
  double t2234;
  double t2261;
  double t2283;
  double t2321;
  double t2432;
  double t2456;
  double t2473;
  double t1880;
  double t1926;
  double t1989;
  double t2000;
  double t2027;
  double t2028;
  double t2606;
  double t2620;
  double t1928;
  double t1963;
  double t2322;
  double t2323;
  double t2355;
  double t2360;
  double t2399;
  double t2402;
  double t2405;
  double t2881;
  double t2973;
  double t2976;
  double t2580;
  t314 = Cos(var1[3]);
  t315 = Sin(var1[2]);
  t442 = Cos(var1[2]);
  t531 = Sin(var1[3]);
  t437 = t314*t315;
  t540 = t442*t531;
  t541 = t437 + t540;
  t813 = t442*t314;
  t819 = -1.*t315*t531;
  t851 = t813 + t819;
  t641 = -1.*t314*t315;
  t657 = -1.*t442*t531;
  t717 = t641 + t657;
  t929 = -1.*t442*t314;
  t946 = t315*t531;
  t961 = t929 + t946;
  t1513 = -1.*t314;
  t1528 = 1. + t1513;
  t1598 = -0.4999*t1528;
  t1621 = -0.6493*t314;
  t1625 = t1598 + t1621;
  t625 = -0.25592966999999994*var2[3]*t541;
  t907 = 10.2783*t717*t851;
  t908 = 3.4261*t541*t851;
  t1181 = 10.2783*t717*t961;
  t1225 = 3.4261*t541*t961;
  t1230 = t907 + t908 + t1181 + t1225;
  t1260 = 0.5*var2[0]*t1230;
  t1313 = Power(t717,2);
  t1320 = 6.8522*t1313;
  t1417 = 6.8522*t717*t541;
  t1460 = 6.8522*t851*t961;
  t1465 = Power(t961,2);
  t1488 = 6.8522*t1465;
  t1490 = t1320 + t1417 + t1460 + t1488;
  t1501 = 0.5*var2[1]*t1490;
  t1697 = t1625*t314;
  t1658 = t1625*t531;
  t1673 = 0.14939999999999998*t314*t531;
  t1686 = t1658 + t1673;
  t1695 = 3.4261*t1686*t961;
  t1710 = Power(t531,2);
  t1715 = -0.14939999999999998*t1710;
  t1771 = t1697 + t1715;
  t1813 = 3.4261*t541*t1771;
  t2181 = 3.4261*t1313;
  t2211 = 3.4261*t717*t541;
  t2234 = Power(t851,2);
  t2261 = 3.4261*t2234;
  t2283 = 3.4261*t851*t961;
  t2321 = t2181 + t2211 + t2261 + t2283;
  t2432 = 3.4261*t717*t1686;
  t2456 = 3.4261*t961*t1771;
  t2473 = t2432 + t2456;
  t1880 = Power(t314,2);
  t1926 = 0.14939999999999998*t1880;
  t1989 = -1.*t1625*t531;
  t2000 = -0.14939999999999998*t314*t531;
  t2027 = t1989 + t2000;
  t2028 = 3.4261*t2027*t961;
  t2606 = t1697 + t1926;
  t2620 = 3.4261*t2606*t717;
  t1928 = 0. + t1697 + t1926;
  t1963 = 3.4261*t1928*t717;
  t2322 = 0.5*var2[1]*t2321;
  t2323 = -0.25592966999999994*var2[3]*t961;
  t2355 = 6.8522*t717*t851;
  t2360 = 6.8522*t717*t961;
  t2399 = t2355 + t2360;
  t2402 = var2[1]*t2399;
  t2405 = 0.5*var2[0]*t2321;
  t2881 = 3.4261*t717*t2027;
  t2973 = 3.4261*t2606*t851;
  t2976 = t2881 + t2432 + t2973 + t2456;
  t2580 = -0.25592966999999994*var2[1]*t961;
  p_output1[0]=var2[1]*(t1260 + t1501 + t625 + 0.5*(t1695 + t1813)*var2[2]);
  p_output1[1]=var2[1]*(t1260 + t1501 + t625 + 0.5*(t1695 + t1813 + t1963 + t2028)*var2[2]);
  p_output1[2]=t2322;
  p_output1[3]=t2323 + t2402 + t2405 + 0.5*t2473*var2[2];
  p_output1[4]=0.5*t2473*var2[1];
  p_output1[5]=t2580;
  p_output1[6]=var2[1]*(t1260 + t1501 + t625 + 0.5*(t1695 + t1813 + t2028 + t2620)*var2[2]);
  p_output1[7]=var2[1]*(t1260 + t1501 + t625 + 0.5*(t1695 + t1813 + t1963 + t2620 + 3.4261*(0. - 0.14939999999999998*t1880 - 1.*t1625*t314)*t717 + 3.4261*t2027*t851 + 6.8522*t2027*t961)*var2[2]);
  p_output1[8]=t2322;
  p_output1[9]=t2323 + t2402 + t2405 + 0.5*t2976*var2[2];
  p_output1[10]=0.5*t2976*var2[1];
  p_output1[11]=t2580;
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

#include "J_Ce3_vec_L2_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L2_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

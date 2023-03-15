/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:00 GMT-08:00
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
  double t76;
  double t86;
  double t93;
  double t139;
  double t149;
  double t160;
  double t274;
  double t566;
  double t620;
  double t634;
  double t306;
  double t431;
  double t435;
  double t511;
  double t512;
  double t536;
  double t681;
  double t682;
  double t708;
  double t715;
  double t735;
  double t809;
  double t872;
  double t876;
  double t880;
  double t889;
  double t927;
  double t949;
  double t966;
  double t984;
  double t1054;
  double t1055;
  double t1060;
  double t1102;
  double t1149;
  double t1176;
  double t1187;
  double t1210;
  double t1218;
  double t1235;
  double t1273;
  double t1274;
  double t1278;
  double t1322;
  double t1325;
  double t1365;
  double t1400;
  double t1407;
  double t1441;
  double t1456;
  double t1463;
  double t1466;
  double t1509;
  double t1524;
  double t1539;
  double t1544;
  double t1552;
  double t1566;
  double t1567;
  double t1583;
  double t1604;
  double t1606;
  double t1609;
  double t1616;
  double t1622;
  double t1629;
  double t1633;
  double t1643;
  double t1789;
  double t1805;
  double t2026;
  double t2027;
  double t2034;
  double t2070;
  double t2083;
  double t2107;
  double t2183;
  double t2192;
  double t2216;
  double t2226;
  double t2253;
  t76 = Cos(var1[6]);
  t86 = Sin(var1[2]);
  t93 = -1.*t76*t86;
  t139 = Cos(var1[2]);
  t149 = Sin(var1[6]);
  t160 = -1.*t139*t149;
  t274 = t93 + t160;
  t566 = t139*t76;
  t620 = -1.*t86*t149;
  t634 = t566 + t620;
  t306 = Power(t274,2);
  t431 = 6.8522*t306;
  t435 = t76*t86;
  t511 = t139*t149;
  t512 = t435 + t511;
  t536 = 6.8522*t274*t512;
  t681 = Power(t634,2);
  t682 = 6.8522*t681;
  t708 = -1.*t139*t76;
  t715 = t86*t149;
  t735 = t708 + t715;
  t809 = 6.8522*t634*t735;
  t872 = t431 + t536 + t682 + t809;
  t876 = -0.5*var2[2]*t872;
  t880 = -0.5*var2[6]*t872;
  t889 = t876 + t880;
  t927 = var2[0]*t889;
  t949 = 6.8522*t274*t634;
  t966 = 6.8522*t512*t634;
  t984 = t949 + t966;
  t1054 = -0.5*var2[0]*t984;
  t1055 = 10.2783*t274*t634;
  t1060 = 3.4261*t512*t634;
  t1102 = 10.2783*t274*t735;
  t1149 = 3.4261*t512*t735;
  t1176 = t1055 + t1060 + t1102 + t1149;
  t1187 = -0.5*var2[2]*t1176;
  t1210 = -0.5*var2[6]*t1176;
  t1218 = t1187 + t1210;
  t1235 = var2[0]*t1218;
  t1273 = 3.4261*t306;
  t1274 = 3.4261*t274*t512;
  t1278 = 3.4261*t681;
  t1322 = 3.4261*t634*t735;
  t1325 = t1273 + t1274 + t1278 + t1322;
  t1365 = -0.5*var2[0]*t1325;
  t1400 = -1.*t76;
  t1407 = 1. + t1400;
  t1441 = -0.4999*t1407;
  t1456 = -0.6493*t76;
  t1463 = t1441 + t1456;
  t1466 = t1463*t149;
  t1509 = 0.14939999999999998*t76*t149;
  t1524 = t1466 + t1509;
  t1539 = 3.4261*t274*t1524;
  t1544 = t1463*t76;
  t1552 = Power(t149,2);
  t1566 = -0.14939999999999998*t1552;
  t1567 = t1544 + t1566;
  t1583 = 3.4261*t735*t1567;
  t1604 = -1.*t1463*t149;
  t1606 = -0.14939999999999998*t76*t149;
  t1609 = t1604 + t1606;
  t1616 = 3.4261*t274*t1609;
  t1622 = Power(t76,2);
  t1629 = 0.14939999999999998*t1622;
  t1633 = t1544 + t1629;
  t1643 = 3.4261*t1633*t634;
  t1789 = 0. + t1544 + t1629;
  t1805 = 3.4261*t1789*t634;
  t2026 = 3.4261*t1524*t634;
  t2027 = 3.4261*t274*t1567;
  t2034 = t2026 + t2027;
  t2070 = 3.4261*t1633*t512;
  t2083 = 3.4261*t1609*t634;
  t2107 = t2070 + t2083 + t2026 + t2027;
  t2183 = 0.25592966999999994*var2[2]*t735;
  t2192 = 0.25592966999999994*var2[6]*t735;
  t2216 = t2183 + t2192;
  t2226 = var2[0]*t2216;
  t2253 = 0.25592966999999994*var2[0]*t274;
  p_output1[0]=t927;
  p_output1[1]=t927;
  p_output1[2]=-0.5*t984*var2[2] - 0.5*t984*var2[6];
  p_output1[3]=t1054;
  p_output1[4]=t1054;
  p_output1[5]=t1235;
  p_output1[6]=t1235;
  p_output1[7]=-0.5*t1325*var2[2] - 0.5*t1325*var2[6];
  p_output1[8]=t1365;
  p_output1[9]=t1365;
  p_output1[10]=var2[0]*(-0.5*(t1539 + t1583)*var2[2] - 0.5*(t1539 + t1583 + t1616 + t1643)*var2[6]);
  p_output1[11]=var2[0]*(-0.5*(t1539 + t1583 + t1616 + t1805)*var2[2] - 0.5*(t1539 + t1583 + t1643 + t1805 + 6.8522*t1609*t274 + 3.4261*t1609*t512 + 3.4261*t634*(0. - 0.14939999999999998*t1622 - 1.*t1463*t76))*var2[6]);
  p_output1[12]=-0.5*t2034*var2[2] - 0.5*t2107*var2[6];
  p_output1[13]=-0.5*t2034*var2[0];
  p_output1[14]=-0.5*t2107*var2[0];
  p_output1[15]=t2226;
  p_output1[16]=t2226;
  p_output1[17]=0.25592966999999994*t274*var2[2] + 0.25592966999999994*t274*var2[6];
  p_output1[18]=t2253;
  p_output1[19]=t2253;
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

#include "J_Ce1_vec_L5_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L5_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

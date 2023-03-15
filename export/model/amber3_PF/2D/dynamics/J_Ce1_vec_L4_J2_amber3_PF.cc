/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:16 GMT-08:00
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
  double t1351;
  double t154;
  double t271;
  double t1428;
  double t1557;
  double t1566;
  double t1578;
  double t806;
  double t1489;
  double t1505;
  double t1648;
  double t1665;
  double t1718;
  double t1754;
  double t1787;
  double t1791;
  double t1622;
  double t1746;
  double t1792;
  double t1881;
  double t1882;
  double t1885;
  double t2205;
  double t2208;
  double t2220;
  double t2237;
  double t2300;
  double t2307;
  double t2388;
  double t2409;
  double t2419;
  double t2453;
  double t2584;
  double t2605;
  double t2634;
  double t2645;
  double t2670;
  double t2681;
  double t2702;
  double t2789;
  double t2835;
  double t2873;
  double t2875;
  double t2907;
  double t3044;
  double t3055;
  double t3119;
  double t3134;
  double t3190;
  double t3200;
  double t3371;
  double t3394;
  double t3590;
  double t3519;
  double t3528;
  double t3539;
  double t3572;
  double t3598;
  double t3624;
  double t3635;
  double t3652;
  double t3718;
  double t3742;
  double t3783;
  double t3786;
  double t3830;
  double t3849;
  double t3750;
  double t3764;
  double t3988;
  double t4002;
  double t4273;
  double t4284;
  double t4354;
  double t4388;
  double t4397;
  double t4402;
  double t4454;
  double t4502;
  double t4540;
  double t4542;
  double t4623;
  t1351 = Cos(var1[2]);
  t154 = Cos(var1[5]);
  t271 = Sin(var1[2]);
  t1428 = Sin(var1[5]);
  t1557 = t1351*t154;
  t1566 = -1.*t271*t1428;
  t1578 = t1557 + t1566;
  t806 = -1.*t154*t271;
  t1489 = -1.*t1351*t1428;
  t1505 = t806 + t1489;
  t1648 = t154*t271;
  t1665 = t1351*t1428;
  t1718 = t1648 + t1665;
  t1754 = -1.*t1351*t154;
  t1787 = t271*t1428;
  t1791 = t1754 + t1787;
  t1622 = 10.2783*t1505*t1578;
  t1746 = 3.4261*t1718*t1578;
  t1792 = 10.2783*t1505*t1791;
  t1881 = 3.4261*t1718*t1791;
  t1882 = t1622 + t1746 + t1792 + t1881;
  t1885 = -0.5*var2[2]*t1882;
  t2205 = -0.5*var2[5]*t1882;
  t2208 = t1885 + t2205;
  t2220 = var2[1]*t2208;
  t2237 = Power(t1505,2);
  t2300 = 3.4261*t2237;
  t2307 = 3.4261*t1505*t1718;
  t2388 = Power(t1578,2);
  t2409 = 3.4261*t2388;
  t2419 = 3.4261*t1578*t1791;
  t2453 = t2300 + t2307 + t2409 + t2419;
  t2584 = -0.5*var2[1]*t2453;
  t2605 = 6.8522*t2237;
  t2634 = 6.8522*t1505*t1718;
  t2645 = 6.8522*t1578*t1791;
  t2670 = Power(t1791,2);
  t2681 = 6.8522*t2670;
  t2702 = t2605 + t2634 + t2645 + t2681;
  t2789 = -0.5*var2[2]*t2702;
  t2835 = -0.5*var2[5]*t2702;
  t2873 = t2789 + t2835;
  t2875 = var2[1]*t2873;
  t2907 = 6.8522*t1505*t1578;
  t3044 = 6.8522*t1505*t1791;
  t3055 = t2907 + t3044;
  t3119 = -0.5*var2[1]*t3055;
  t3134 = -1.*t154;
  t3190 = 1. + t3134;
  t3200 = -0.4999*t3190;
  t3371 = -0.6493*t154;
  t3394 = t3200 + t3371;
  t3590 = t3394*t154;
  t3519 = t3394*t1428;
  t3528 = 0.14939999999999998*t154*t1428;
  t3539 = t3519 + t3528;
  t3572 = 3.4261*t3539*t1791;
  t3598 = Power(t1428,2);
  t3624 = -0.14939999999999998*t3598;
  t3635 = t3590 + t3624;
  t3652 = 3.4261*t1718*t3635;
  t3718 = Power(t154,2);
  t3742 = 0.14939999999999998*t3718;
  t3783 = -1.*t3394*t1428;
  t3786 = -0.14939999999999998*t154*t1428;
  t3830 = t3783 + t3786;
  t3849 = 3.4261*t3830*t1791;
  t3750 = t3590 + t3742;
  t3764 = 3.4261*t3750*t1505;
  t3988 = 0. + t3590 + t3742;
  t4002 = 3.4261*t3988*t1505;
  t4273 = 3.4261*t1505*t3539;
  t4284 = 3.4261*t1791*t3635;
  t4354 = t4273 + t4284;
  t4388 = 3.4261*t1505*t3830;
  t4397 = 3.4261*t3750*t1578;
  t4402 = t4388 + t4273 + t4397 + t4284;
  t4454 = 0.25592966999999994*var2[2]*t1718;
  t4502 = 0.25592966999999994*var2[5]*t1718;
  t4540 = t4454 + t4502;
  t4542 = var2[1]*t4540;
  t4623 = 0.25592966999999994*var2[1]*t1791;
  p_output1[0]=t2220;
  p_output1[1]=t2220;
  p_output1[2]=-0.5*t2453*var2[2] - 0.5*t2453*var2[5];
  p_output1[3]=t2584;
  p_output1[4]=t2584;
  p_output1[5]=t2875;
  p_output1[6]=t2875;
  p_output1[7]=-0.5*t3055*var2[2] - 0.5*t3055*var2[5];
  p_output1[8]=t3119;
  p_output1[9]=t3119;
  p_output1[10]=var2[1]*(-0.5*(t3572 + t3652)*var2[2] - 0.5*(t3572 + t3652 + t3764 + t3849)*var2[5]);
  p_output1[11]=var2[1]*(-0.5*(t3572 + t3652 + t3849 + t4002)*var2[2] - 0.5*(t3572 + t3652 + 3.4261*t1505*(0. - 1.*t154*t3394 - 0.14939999999999998*t3718) + t3764 + 3.4261*t1578*t3830 + 6.8522*t1791*t3830 + t4002)*var2[5]);
  p_output1[12]=-0.5*t4354*var2[2] - 0.5*t4402*var2[5];
  p_output1[13]=-0.5*t4354*var2[1];
  p_output1[14]=-0.5*t4402*var2[1];
  p_output1[15]=t4542;
  p_output1[16]=t4542;
  p_output1[17]=0.25592966999999994*t1791*var2[2] + 0.25592966999999994*t1791*var2[5];
  p_output1[18]=t4623;
  p_output1[19]=t4623;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L4_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L4_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

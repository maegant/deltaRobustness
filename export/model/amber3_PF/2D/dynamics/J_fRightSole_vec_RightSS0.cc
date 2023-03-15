/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 09:34:45 GMT-08:00
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
  double t117;
  double t400;
  double t706;
  double t738;
  double t1237;
  double t1640;
  double t1673;
  double t1717;
  double t1741;
  double t1865;
  double t1869;
  double t1937;
  double t530;
  double t639;
  double t1440;
  double t1455;
  double t2401;
  double t2453;
  double t2499;
  double t811;
  double t1733;
  double t2026;
  double t2037;
  double t2057;
  double t2079;
  double t2128;
  double t2344;
  double t2502;
  double t2545;
  double t2565;
  double t2636;
  double t2642;
  double t2727;
  double t3719;
  double t3732;
  double t3766;
  double t2343;
  double t2979;
  double t3004;
  double t3063;
  double t3135;
  double t3138;
  double t3174;
  double t3272;
  double t3278;
  double t3356;
  double t3403;
  double t3418;
  double t3462;
  double t3465;
  double t3599;
  double t3681;
  double t3844;
  double t3849;
  double t3856;
  double t3874;
  double t3877;
  double t3881;
  double t3907;
  double t3952;
  double t3987;
  double t4001;
  double t4011;
  double t4082;
  double t4117;
  double t4130;
  t117 = Cos(var1[2]);
  t400 = Cos(var1[5]);
  t706 = Sin(var1[2]);
  t738 = Sin(var1[5]);
  t1237 = Cos(var1[6]);
  t1640 = -1.*t117*t400;
  t1673 = t706*t738;
  t1717 = t1640 + t1673;
  t1741 = t400*t706;
  t1865 = t117*t738;
  t1869 = t1741 + t1865;
  t1937 = Sin(var1[6]);
  t530 = -1.*t400;
  t639 = 1. + t530;
  t1440 = -1.*t1237;
  t1455 = 1. + t1440;
  t2401 = -1.*t400*t706;
  t2453 = -1.*t117*t738;
  t2499 = t2401 + t2453;
  t811 = 0.4999*t706*t738;
  t1733 = -0.9063*t1455*t1717;
  t2026 = 0.9063*t1869*t1937;
  t2037 = t1237*t1717;
  t2057 = t1869*t1937;
  t2079 = t2037 + t2057;
  t2128 = -1.373025*t2079;
  t2344 = -0.4999*t117*t738;
  t2502 = -0.9063*t1455*t2499;
  t2545 = 0.9063*t1717*t1937;
  t2565 = t1237*t2499;
  t2636 = t1717*t1937;
  t2642 = t2565 + t2636;
  t2727 = -1.373025*t2642;
  t3719 = t117*t400;
  t3732 = -1.*t706*t738;
  t3766 = t3719 + t3732;
  t2343 = 0.4999*t639*t706;
  t2979 = -0.4999*t117*t400;
  t3004 = t2979 + t811 + t1733 + t2026 + t2128;
  t3063 = var2[1]*t3004;
  t3135 = -0.4999*t400*t706;
  t3138 = t3135 + t2344 + t2502 + t2545 + t2727;
  t3174 = var2[0]*t3138;
  t3272 = t3063 + t3174;
  t3278 = 0.9063*t1237*t1717;
  t3356 = -0.9063*t2499*t1937;
  t3403 = -1.*t2499*t1937;
  t3418 = t2037 + t3403;
  t3462 = -1.373025*t3418;
  t3465 = t3278 + t3356 + t3462;
  t3599 = var2[1]*t3465;
  t3681 = 0.9063*t1237*t2499;
  t3844 = -0.9063*t3766*t1937;
  t3849 = -1.*t3766*t1937;
  t3856 = t2565 + t3849;
  t3874 = -1.373025*t3856;
  t3877 = t3681 + t3844 + t3874;
  t3881 = var2[0]*t3877;
  t3907 = t3599 + t3881;
  t3952 = -0.4999*t706*t738;
  t3987 = -0.9063*t1455*t3766;
  t4001 = 0.9063*t2499*t1937;
  t4011 = t1237*t3766;
  t4082 = t2499*t1937;
  t4117 = t4011 + t4082;
  t4130 = -1.373025*t4117;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=(t2343 + t2344 + t2502 + t2545 + t2727)*var2[0] + (t1733 + t2026 + t2128 + 0.4999*t117*t639 + t811)*var2[1];
  p_output1[3]=t3272;
  p_output1[4]=t3907;
  p_output1[5]=0. + t3952 + t3987 + t4001 + t4130 - 0.4999*t117*t639;
  p_output1[6]=0. + t2343 + t2344 + t2502 + t2545 + t2727;
  p_output1[7]=t3272;
  p_output1[8]=t3272;
  p_output1[9]=t3907;
  p_output1[10]=0. + t3952 + t3987 + 0.4999*t117*t400 + t4001 + t4130;
  p_output1[11]=0. + t2344 + t2502 + t2545 + t2727 + t3135;
  p_output1[12]=t3907;
  p_output1[13]=t3907;
  p_output1[14]=(-0.9063*t1237*t1869 + t3844 - 1.373025*(-1.*t1237*t1869 + t3849))*var2[0] + (t3356 - 0.9063*t1237*t3766 - 1.373025*(t3403 - 1.*t1237*t3766))*var2[1];
  p_output1[15]=0. - 0.9063*t1869*t1937 + 0.9063*t1237*t3766 - 1.373025*(-1.*t1869*t1937 + t4011);
  p_output1[16]=0. + t3681 + t3844 + t3874;
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightSole_vec_RightSS0.hh"

namespace RightSS0
{

void J_fRightSole_vec_RightSS0_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

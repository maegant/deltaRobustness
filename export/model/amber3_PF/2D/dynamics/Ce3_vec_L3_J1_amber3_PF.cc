/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:04 GMT-08:00
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
  double t2293;
  double t1756;
  double t2144;
  double t2311;
  double t3170;
  double t407;
  double t3234;
  double t3267;
  double t3300;
  double t3649;
  double t3880;
  double t3900;
  double t3941;
  double t4003;
  double t2154;
  double t2718;
  double t2982;
  double t3056;
  double t3378;
  double t3447;
  double t4709;
  double t4210;
  double t4513;
  double t4547;
  double t4700;
  double t4711;
  double t4989;
  double t4998;
  double t5023;
  double t5045;
  double t5072;
  double t5880;
  double t5886;
  double t5887;
  double t5976;
  double t6098;
  double t6341;
  double t6344;
  double t6345;
  double t6401;
  double t6403;
  double t3637;
  double t4190;
  double t4202;
  double t4208;
  double t4769;
  double t4794;
  double t4827;
  double t4829;
  double t4928;
  double t6923;
  double t6949;
  double t7035;
  double t7136;
  double t7140;
  double t5172;
  double t5985;
  double t6465;
  double t6579;
  double t6774;
  double t6832;
  double t6835;
  double t7533;
  double t7620;
  double t7626;
  double t7655;
  double t7993;
  double t8005;
  double t7162;
  double t7196;
  double t7199;
  double t7251;
  double t7301;
  double t7389;
  double t7390;
  double t7395;
  double t7405;
  double t7438;
  double t7447;
  double t7481;
  double t7493;
  double t7509;
  double t7511;
  double t7514;
  double t7523;
  double t7981;
  double t8039;
  double t8040;
  double t8089;
  double t8090;
  double t8093;
  double t8094;
  double t8056;
  t2293 = Cos(var1[3]);
  t1756 = Cos(var1[4]);
  t2144 = Sin(var1[3]);
  t2311 = Sin(var1[4]);
  t3170 = Sin(var1[2]);
  t407 = Cos(var1[2]);
  t3234 = t2293*t1756;
  t3267 = -1.*t2144*t2311;
  t3300 = t3234 + t3267;
  t3649 = -1.*t1756;
  t3880 = 1. + t3649;
  t3900 = -0.9063*t3880;
  t3941 = -1.078185*t1756;
  t4003 = t3900 + t3941;
  t2154 = -1.*t1756*t2144;
  t2718 = -1.*t2293*t2311;
  t2982 = t2154 + t2718;
  t3056 = t407*t2982;
  t3378 = -1.*t3170*t3300;
  t3447 = t3056 + t3378;
  t4709 = t407*t3300;
  t4210 = t1756*t2144;
  t4513 = t2293*t2311;
  t4547 = t4210 + t4513;
  t4700 = -1.*t3170*t4547;
  t4711 = t4700 + t4709;
  t4989 = t3170*t2982;
  t4998 = t4989 + t4709;
  t5023 = t407*t4547;
  t5045 = t3170*t3300;
  t5072 = t5023 + t5045;
  t5880 = 0.4999*t2144;
  t5886 = t4003*t2144;
  t5887 = -0.17188499999999995*t2293*t2311;
  t5976 = t5880 + t5886 + t5887;
  t6098 = -1.*t2293;
  t6341 = 1. + t6098;
  t6344 = -0.4999*t6341;
  t6345 = t2293*t4003;
  t6401 = 0.17188499999999995*t2144*t2311;
  t6403 = t6344 + t6345 + t6401;
  t3637 = 0.4999*t2311;
  t4190 = t4003*t2311;
  t4202 = 0.17188499999999995*t1756*t2311;
  t4208 = t3637 + t4190 + t4202;
  t4769 = 0.4999*t1756;
  t4794 = t4003*t1756;
  t4827 = Power(t2311,2);
  t4829 = -0.17188499999999995*t4827;
  t4928 = t4769 + t4794 + t4829;
  t6923 = -1.*t2293*t1756;
  t6949 = t2144*t2311;
  t7035 = t6923 + t6949;
  t7136 = t3170*t7035;
  t7140 = t3056 + t7136;
  t5172 = -1.*t3170*t2982;
  t5985 = -1.*t5976*t3300;
  t6465 = -1.*t2982*t6403;
  t6579 = t5985 + t6465;
  t6774 = t5976*t4547;
  t6832 = t3300*t6403;
  t6835 = t6774 + t6832;
  t7533 = -0.4999*t2144;
  t7620 = -1.*t4003*t2144;
  t7626 = 0.17188499999999995*t2293*t2311;
  t7655 = t7533 + t7620 + t7626;
  t7993 = 0.4999*t2293;
  t8005 = t7993 + t6345 + t6401;
  t7162 = -0.07323676079999998*var2[4]*t7140;
  t7196 = 0.85216*t4208*t4998;
  t7199 = 0.85216*t4928*t7140;
  t7251 = 1.70432*t4998*t5072;
  t7301 = 1.70432*t4998*t7140;
  t7389 = t7251 + t7301;
  t7390 = 0.5*var2[0]*t7389;
  t7395 = 0.85216*t4998*t4711;
  t7405 = 0.85216*t3447*t5072;
  t7438 = t407*t7035;
  t7447 = t5172 + t7438;
  t7481 = 0.85216*t4998*t7447;
  t7493 = 0.85216*t3447*t7140;
  t7509 = t7395 + t7405 + t7481 + t7493;
  t7511 = 0.5*var2[1]*t7509;
  t7514 = 0.85216*t4998*t6579;
  t7523 = t5976*t3300;
  t7981 = t2982*t6403;
  t8039 = 0.85216*t6835*t7140;
  t8040 = -1.*t2982*t5976;
  t8089 = 0.17188499999999995*t1756*t2144;
  t8090 = t8089 + t7626;
  t8093 = -0.17188499999999995*t2293*t1756;
  t8094 = t8093 + t6401;
  t8056 = -1.*t6403*t7035;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(0.5*(1.70432*t3447*t4998 + 1.70432*t4711*t5072)*var2[0] + 0.5*(0.85216*Power(t3447,2) + 0.85216*Power(t4711,2) + 0.85216*(t3378 - 1.*t407*t4547)*t5072 + 0.85216*t4998*(-1.*t3300*t407 + t5172))*var2[1] + 0.5*(0.85216*t4711*t6579 + 0.85216*t3447*t6835)*var2[2] + 0.5*(0.85216*t4208*t4711 + 0.85216*t3447*t4928)*var2[3] - 0.07323676079999998*t3447*var2[4]);
  p_output1[3]=var2[0]*(t7162 + t7390 + t7511 + 0.5*(t7514 + 0.85216*t4998*(t7523 + t3300*t7655 + t7981 + t4547*t8005) + t8039 + 0.85216*t5072*(-1.*t2982*t7655 - 1.*t3300*t8005 + t8040 + t8056))*var2[2] + 0.5*(t7196 + t7199)*var2[3]);
  p_output1[4]=var2[0]*(t7162 + t7390 + t7511 + 0.5*(t7514 + t8039 + 0.85216*t5072*(t8040 + t8056 - 1.*t2982*t8090 - 1.*t3300*t8094) + 0.85216*t4998*(t7523 + t7981 + t3300*t8090 + t4547*t8094))*var2[2] + 0.5*(0.85216*(-0.4999*t2311 - 0.17188499999999995*t1756*t2311 - 1.*t2311*t4003)*t4998 + 0.85216*(0.17188499999999995*Power(t1756,2) + t4769 + t4794)*t5072 + t7196 + t7199)*var2[3]);
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec_L3_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L3_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

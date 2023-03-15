/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:24 GMT-08:00
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
  double t498;
  double t567;
  double t1054;
  double t1119;
  double t1393;
  double t1699;
  double t1995;
  double t2417;
  double t2426;
  double t2432;
  double t2004;
  double t2150;
  double t2207;
  double t2250;
  double t2291;
  double t2386;
  double t2493;
  double t2514;
  double t2658;
  double t3005;
  double t3025;
  double t3044;
  double t3148;
  double t3827;
  double t3851;
  double t4532;
  double t5307;
  double t5374;
  double t5460;
  double t5630;
  double t5680;
  double t5740;
  double t5838;
  double t5949;
  double t5990;
  double t6206;
  double t6562;
  double t6599;
  double t7644;
  double t7680;
  t498 = Cos(var1[3]);
  t567 = Sin(var1[2]);
  t1054 = -1.*t498*t567;
  t1119 = Cos(var1[2]);
  t1393 = Sin(var1[3]);
  t1699 = -1.*t1119*t1393;
  t1995 = t1054 + t1699;
  t2417 = t1119*t498;
  t2426 = -1.*t567*t1393;
  t2432 = t2417 + t2426;
  t2004 = Power(t1995,2);
  t2150 = 3.4261*t2004;
  t2207 = t498*t567;
  t2250 = t1119*t1393;
  t2291 = t2207 + t2250;
  t2386 = 3.4261*t1995*t2291;
  t2493 = Power(t2432,2);
  t2514 = 3.4261*t2493;
  t2658 = -1.*t1119*t498;
  t3005 = t567*t1393;
  t3025 = t2658 + t3005;
  t3044 = 3.4261*t2432*t3025;
  t3148 = t2150 + t2386 + t2514 + t3044;
  t3827 = 6.8522*t1995*t2432;
  t3851 = 6.8522*t1995*t3025;
  t4532 = t3827 + t3851;
  t5307 = -1.*t498;
  t5374 = 1. + t5307;
  t5460 = -0.4999*t5374;
  t5630 = -0.6493*t498;
  t5680 = t5460 + t5630;
  t5740 = t5680*t1393;
  t5838 = 0.14939999999999998*t498*t1393;
  t5949 = t5740 + t5838;
  t5990 = 3.4261*t1995*t5949;
  t6206 = t5680*t498;
  t6562 = Power(t1393,2);
  t6599 = -0.14939999999999998*t6562;
  t7644 = t6206 + t6599;
  t7680 = 3.4261*t3025*t7644;
  p_output1[0]=var2[1]*(-0.5*t3148*var2[2] - 0.5*t3148*var2[3]);
  p_output1[1]=var2[1]*(-0.5*t4532*var2[2] - 0.5*t4532*var2[3]);
  p_output1[2]=var2[1]*(-0.5*(t5990 + t7680)*var2[2] - 0.5*(3.4261*t1995*(-0.14939999999999998*t1393*t498 - 1.*t1393*t5680) + t5990 + 3.4261*t2432*(0.14939999999999998*Power(t498,2) + t6206) + t7680)*var2[3]);
  p_output1[3]=var2[1]*(0.25592966999999994*t3025*var2[2] + 0.25592966999999994*t3025*var2[3]);
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec_L2_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L2_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

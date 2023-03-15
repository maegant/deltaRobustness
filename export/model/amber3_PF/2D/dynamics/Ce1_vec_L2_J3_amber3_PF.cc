/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:51 GMT-08:00
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
  double t111;
  double t1200;
  double t2401;
  double t2297;
  double t386;
  double t910;
  double t982;
  double t1104;
  double t1112;
  double t3199;
  double t2318;
  double t2413;
  double t2510;
  double t1281;
  double t2218;
  double t2265;
  double t2561;
  double t2751;
  double t2762;
  double t3054;
  double t3299;
  double t3510;
  double t3530;
  double t3648;
  double t5184;
  double t5395;
  double t5479;
  double t6630;
  double t4078;
  double t4091;
  double t4514;
  double t6663;
  double t6665;
  double t6855;
  double t6858;
  t111 = Cos(var1[3]);
  t1200 = Sin(var1[3]);
  t2401 = Sin(var1[2]);
  t2297 = Cos(var1[2]);
  t386 = -1.*t111;
  t910 = 1. + t386;
  t982 = -0.4999*t910;
  t1104 = -0.6493*t111;
  t1112 = t982 + t1104;
  t3199 = t1112*t111;
  t2318 = t2297*t111;
  t2413 = -1.*t2401*t1200;
  t2510 = t2318 + t2413;
  t1281 = t1112*t1200;
  t2218 = 0.14939999999999998*t111*t1200;
  t2265 = t1281 + t2218;
  t2561 = 3.4261*t2265*t2510;
  t2751 = -1.*t111*t2401;
  t2762 = -1.*t2297*t1200;
  t3054 = t2751 + t2762;
  t3299 = Power(t1200,2);
  t3510 = -0.14939999999999998*t3299;
  t3530 = t3199 + t3510;
  t3648 = 3.4261*t3054*t3530;
  t5184 = -1.*t1112*t1200;
  t5395 = -0.14939999999999998*t111*t1200;
  t5479 = t5184 + t5395;
  t6630 = 3.4261*t3054*t2265;
  t4078 = Power(t111,2);
  t4091 = 0.14939999999999998*t4078;
  t4514 = t3199 + t4091;
  t6663 = -1.*t2297*t111;
  t6665 = t2401*t1200;
  t6855 = t6663 + t6665;
  t6858 = 3.4261*t6855*t3530;
  p_output1[0]=var2[2]*(-0.5*(t2561 + t3648)*var2[2] - 0.5*(t2561 + t3648 + 3.4261*(t1200*t2297 + t111*t2401)*t4514 + 3.4261*t2510*t5479)*var2[3]);
  p_output1[1]=var2[2]*(-0.5*(t6630 + t6858)*var2[2] - 0.5*(3.4261*t2510*t4514 + 3.4261*t3054*t5479 + t6630 + t6858)*var2[3]);
  p_output1[2]=-0.5*(6.8522*t2265*t4514 + 6.8522*t3530*t5479)*var2[2]*var2[3];
  p_output1[3]=0.25592966999999994*t5479*var2[2]*var2[3];
  p_output1[4]=0;
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

#include "Ce1_vec_L2_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L2_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

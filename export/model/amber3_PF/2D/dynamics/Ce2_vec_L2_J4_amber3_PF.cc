/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:26 GMT-08:00
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
  double t299;
  double t2572;
  double t2725;
  double t2809;
  double t3338;
  double t3406;
  double t3482;
  double t3684;
  double t3731;
  double t3930;
  double t4025;
  double t4086;
  double t4207;
  double t6229;
  double t6313;
  double t6341;
  double t6378;
  double t6420;
  double t6453;
  double t5723;
  double t5865;
  double t5890;
  double t4015;
  double t5090;
  double t5179;
  double t5213;
  double t5345;
  double t5710;
  double t6063;
  double t6115;
  double t6759;
  double t6762;
  double t6774;
  double t6841;
  double t6880;
  double t6949;
  double t6696;
  double t6726;
  double t6746;
  double t7116;
  double t7137;
  double t7199;
  double t6747;
  double t6837;
  double t7085;
  double t7279;
  double t7366;
  double t7565;
  double t7575;
  double t7595;
  double t7686;
  double t7771;
  t299 = Cos(var1[3]);
  t2572 = Sin(var1[2]);
  t2725 = -1.*t299*t2572;
  t2809 = Cos(var1[2]);
  t3338 = Sin(var1[3]);
  t3406 = -1.*t2809*t3338;
  t3482 = t2725 + t3406;
  t3684 = t2809*t299;
  t3731 = -1.*t2572*t3338;
  t3930 = t3684 + t3731;
  t4025 = t299*t2572;
  t4086 = t2809*t3338;
  t4207 = t4025 + t4086;
  t6229 = -1.*t299;
  t6313 = 1. + t6229;
  t6341 = -0.4999*t6313;
  t6378 = -0.6493*t299;
  t6420 = t6341 + t6378;
  t6453 = t6420*t299;
  t5723 = -1.*t2809*t299;
  t5865 = t2572*t3338;
  t5890 = t5723 + t5865;
  t4015 = 6.8522*t3482*t3930;
  t5090 = Power(t3482,2);
  t5179 = 3.4261*t5090;
  t5213 = 3.4261*t3482*t4207;
  t5345 = Power(t3930,2);
  t5710 = 3.4261*t5345;
  t6063 = 3.4261*t3930*t5890;
  t6115 = t5179 + t5213 + t5710 + t6063;
  t6759 = -1.*t6420*t3338;
  t6762 = -0.14939999999999998*t299*t3338;
  t6774 = t6759 + t6762;
  t6841 = t6420*t3338;
  t6880 = 0.14939999999999998*t299*t3338;
  t6949 = t6841 + t6880;
  t6696 = Power(t299,2);
  t6726 = 0.14939999999999998*t6696;
  t6746 = t6453 + t6726;
  t7116 = Power(t3338,2);
  t7137 = -0.14939999999999998*t7116;
  t7199 = t6453 + t7137;
  t6747 = 3.4261*t6746*t4207;
  t6837 = 3.4261*t6774*t3930;
  t7085 = 3.4261*t6949*t3930;
  t7279 = 3.4261*t3482*t7199;
  t7366 = t6747 + t6837 + t7085 + t7279;
  t7565 = 3.4261*t3482*t6774;
  t7575 = 3.4261*t3482*t6949;
  t7595 = 3.4261*t6746*t3930;
  t7686 = 3.4261*t5890*t7199;
  t7771 = t7565 + t7575 + t7595 + t7686;
  p_output1[0]=var2[3]*(-0.5*(t4015 + 6.8522*t3930*t4207)*var2[0] - 0.5*t6115*var2[1] - 0.5*t7366*var2[2] + 0.25592966999999994*t3482*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t6115*var2[0] - 0.5*(t4015 + 6.8522*t3482*t5890)*var2[1] - 0.5*t7771*var2[2] + 0.25592966999999994*t5890*var2[3]);
  p_output1[2]=var2[3]*(-0.5*t7366*var2[0] - 0.5*t7771*var2[1] - 0.5*(6.8522*t6746*t6949 + 6.8522*t6774*t7199)*var2[2] + 0.25592966999999994*t6774*var2[3]);
  p_output1[3]=(0.25592966999999994*t3482*var2[0] + 0.25592966999999994*t5890*var2[1] + 0.25592966999999994*t6774*var2[2])*var2[3];
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

#include "Ce2_vec_L2_J4_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L2_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

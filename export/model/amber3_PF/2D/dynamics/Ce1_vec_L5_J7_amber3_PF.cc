/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:11 GMT-08:00
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
  double t1055;
  double t850;
  double t880;
  double t1156;
  double t693;
  double t965;
  double t1635;
  double t1666;
  double t1875;
  double t1947;
  double t3307;
  double t3338;
  double t3485;
  double t3684;
  double t3731;
  double t1971;
  double t1987;
  double t2179;
  double t4546;
  double t5090;
  double t5179;
  double t5681;
  double t5691;
  double t5710;
  double t5723;
  double t5827;
  double t6726;
  double t6746;
  double t5663;
  double t5865;
  double t6063;
  double t6115;
  double t6149;
  double t6341;
  double t6496;
  double t6557;
  double t6715;
  double t6747;
  double t6762;
  double t6774;
  double t6837;
  double t6841;
  t1055 = Cos(var1[5]);
  t850 = Cos(var1[6]);
  t880 = Sin(var1[5]);
  t1156 = Sin(var1[6]);
  t693 = Cos(var1[2]);
  t965 = -1.*t850*t880;
  t1635 = -1.*t1055*t1156;
  t1666 = t965 + t1635;
  t1875 = t693*t1666;
  t1947 = Sin(var1[2]);
  t3307 = -1.*t1055*t850;
  t3338 = t880*t1156;
  t3485 = t3307 + t3338;
  t3684 = t1947*t3485;
  t3731 = t1875 + t3684;
  t1971 = t1055*t850;
  t1987 = -1.*t880*t1156;
  t2179 = t1971 + t1987;
  t4546 = -1.*t1947*t1666;
  t5090 = t693*t3485;
  t5179 = t4546 + t5090;
  t5681 = -1.*t850;
  t5691 = 1. + t5681;
  t5710 = -0.9063*t5691;
  t5723 = -1.078185*t850;
  t5827 = t5710 + t5723;
  t6726 = t1055*t5827;
  t6746 = 0.17188499999999995*t880*t1156;
  t5663 = 0.4999*t880;
  t5865 = t5827*t880;
  t6063 = -0.17188499999999995*t1055*t1156;
  t6115 = t5663 + t5865 + t6063;
  t6149 = t6115*t2179;
  t6341 = 0.17188499999999995*t1055*t1156;
  t6496 = -1.*t1055;
  t6557 = 1. + t6496;
  t6715 = -0.4999*t6557;
  t6747 = t6715 + t6726 + t6746;
  t6762 = t1666*t6747;
  t6774 = t850*t880;
  t6837 = t1055*t1156;
  t6841 = t6774 + t6837;
  p_output1[0]=var2[6]*(0.07323676079999998*(t1875 - 1.*t1947*t2179)*var2[2] + 0.07323676079999998*t3731*var2[5] + 0.07323676079999998*t3731*var2[6]);
  p_output1[1]=var2[6]*(0.07323676079999998*(t4546 - 1.*t2179*t693)*var2[2] + 0.07323676079999998*t5179*var2[5] + 0.07323676079999998*t5179*var2[6]);
  p_output1[2]=var2[6]*(0.07323676079999998*(t6149 + t6762 + (0.4999*t1055 + t6726 + t6746)*t6841 + t2179*(t6341 - 0.4999*t880 - 1.*t5827*t880))*var2[5] + 0.07323676079999998*(t6149 + t6762 + t6841*(t6746 - 0.17188499999999995*t1055*t850) + t2179*(t6341 + 0.17188499999999995*t850*t880))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0.07323676079999998*(-0.4999*t1156 - 1.*t1156*t5827 - 0.17188499999999995*t1156*t850)*Power(var2[6],2);
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

#include "Ce1_vec_L5_J7_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L5_J7_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

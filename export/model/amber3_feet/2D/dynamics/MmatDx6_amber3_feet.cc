/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:15 GMT-08:00
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
  double t1291;
  double t481;
  double t489;
  double t1698;
  double t159;
  double t768;
  double t1703;
  double t1755;
  double t1825;
  double t1995;
  double t2061;
  double t2226;
  double t2354;
  double t2374;
  double t2658;
  double t3848;
  double t4126;
  double t4647;
  double t4732;
  double t4753;
  double t6018;
  double t6206;
  double t6504;
  double t6764;
  double t7644;
  double t7680;
  double t7784;
  double t7790;
  double t7791;
  double t7796;
  double t7798;
  double t7801;
  double t7802;
  double t7803;
  double t7805;
  double t7808;
  double t7719;
  double t7725;
  double t7745;
  double t5630;
  double t5680;
  double t5863;
  double t6000;
  double t7750;
  double t7757;
  double t3827;
  double t4789;
  double t5273;
  double t5275;
  double t5460;
  double t7749;
  double t7766;
  double t7770;
  double t7797;
  double t7809;
  double t7811;
  double t7813;
  double t7814;
  double t7815;
  double t7812;
  double t7816;
  double t7818;
  double t7848;
  double t7849;
  double t7850;
  double t7824;
  double t7827;
  double t7828;
  double t5611;
  double t7685;
  double t7703;
  double t7857;
  double t7859;
  double t7860;
  double t7875;
  double t7877;
  double t7854;
  double t7855;
  t1291 = Cos(var1[6]);
  t481 = Cos(var1[7]);
  t489 = Sin(var1[6]);
  t1698 = Sin(var1[7]);
  t159 = Sin(var1[2]);
  t768 = -1.*t481*t489;
  t1703 = -1.*t1291*t1698;
  t1755 = t768 + t1703;
  t1825 = t159*t1755;
  t1995 = Cos(var1[2]);
  t2061 = t1291*t481;
  t2226 = -1.*t489*t1698;
  t2354 = t2061 + t2226;
  t2374 = t1995*t2354;
  t2658 = t1825 + t2374;
  t3848 = -1.*t481;
  t4126 = 1. + t3848;
  t4647 = -0.9063*t4126;
  t4732 = -1.0567*t481;
  t4753 = t4647 + t4732;
  t6018 = t481*t489;
  t6206 = t1291*t1698;
  t6504 = t6018 + t6206;
  t6764 = t1995*t6504;
  t7644 = t159*t2354;
  t7680 = t6764 + t7644;
  t7784 = 0.4999*t489;
  t7790 = t4753*t489;
  t7791 = -0.15039999999999998*t1291*t1698;
  t7796 = t7784 + t7790 + t7791;
  t7798 = -1.*t1291;
  t7801 = 1. + t7798;
  t7802 = -0.4999*t7801;
  t7803 = t1291*t4753;
  t7805 = 0.15039999999999998*t489*t1698;
  t7808 = t7802 + t7803 + t7805;
  t7719 = t1995*t1755;
  t7725 = -1.*t159*t2354;
  t7745 = t7719 + t7725;
  t5630 = 0.4999*t1698;
  t5680 = t4753*t1698;
  t5863 = 0.15039999999999998*t481*t1698;
  t6000 = t5630 + t5680 + t5863;
  t7750 = -1.*t159*t6504;
  t7757 = t7750 + t2374;
  t3827 = 0.4999*t481;
  t4789 = t4753*t481;
  t5273 = Power(t1698,2);
  t5275 = -0.15039999999999998*t5273;
  t5460 = t3827 + t4789 + t5275;
  t7749 = 3.5899*t2658*t7745;
  t7766 = 3.5899*t7757*t7680;
  t7770 = t7749 + t7766;
  t7797 = -1.*t7796*t2354;
  t7809 = -1.*t1755*t7808;
  t7811 = t7797 + t7809;
  t7813 = t7796*t6504;
  t7814 = t2354*t7808;
  t7815 = t7813 + t7814;
  t7812 = 3.5899*t7680*t7811;
  t7816 = 3.5899*t2658*t7815;
  t7818 = t7812 + t7816;
  t7848 = 3.5899*t7757*t7811;
  t7849 = 3.5899*t7745*t7815;
  t7850 = t7848 + t7849;
  t7824 = 3.5899*t6000*t7757;
  t7827 = 3.5899*t5460*t7745;
  t7828 = t7824 + t7827;
  t5611 = 3.5899*t5460*t2658;
  t7685 = 3.5899*t6000*t7680;
  t7703 = t5611 + t7685;
  t7857 = 3.5899*t6000*t7811;
  t7859 = 3.5899*t5460*t7815;
  t7860 = 0.0378 + t7857 + t7859;
  t7875 = -0.5399209599999999*t5460;
  t7877 = 0.0378 + t7875;
  t7854 = -0.5399209599999999*t7815;
  t7855 = 0.0378 + t7854;
  p_output1[0]=-1.*(3.5899*Power(t2658,2) + 3.5899*Power(t7680,2))*var2[0] - 1.*t7770*var2[1] - 1.*t7818*var2[2] - 1.*t7703*var2[6] + 0.5399209599999999*t2658*var2[7];
  p_output1[1]=-1.*t7770*var2[0] - 1.*(3.5899*Power(t7745,2) + 3.5899*Power(t7757,2))*var2[1] - 1.*t7850*var2[2] - 1.*t7828*var2[6] + 0.5399209599999999*t7745*var2[7];
  p_output1[2]=-1.*t7818*var2[0] - 1.*t7850*var2[1] - 1.*(0.0378 + 3.5899*Power(t7811,2) + 3.5899*Power(t7815,2))*var2[2] - 1.*t7860*var2[6] - 1.*t7855*var2[7];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=-1.*t7703*var2[0] - 1.*t7828*var2[1] - 1.*t7860*var2[2] - 1.*(0.0378 + 3.5899*Power(t5460,2) + 3.5899*Power(t6000,2))*var2[6] - 1.*t7877*var2[7];
  p_output1[7]=0.5399209599999999*t2658*var2[0] + 0.5399209599999999*t7745*var2[1] - 1.*t7855*var2[2] - 1.*t7877*var2[6] - 0.11900411238399997*var2[7];
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

#include "MmatDx6_amber3_feet.hh"

namespace SymFunction
{

void MmatDx6_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:40 GMT-08:00
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
  double t1553;
  double t558;
  double t1050;
  double t1784;
  double t280;
  double t1101;
  double t1902;
  double t2192;
  double t2766;
  double t3299;
  double t3665;
  double t3854;
  double t4262;
  double t4278;
  double t4325;
  double t6093;
  double t6430;
  double t6445;
  double t6630;
  double t7454;
  double t7763;
  double t7780;
  double t7784;
  double t7795;
  double t7796;
  double t7802;
  double t7838;
  double t7839;
  double t7843;
  double t7844;
  double t7848;
  double t7855;
  double t7859;
  double t7860;
  double t7861;
  double t7862;
  double t7807;
  double t7810;
  double t7812;
  double t7729;
  double t7736;
  double t7744;
  double t7753;
  double t7816;
  double t7817;
  double t5479;
  double t7519;
  double t7631;
  double t7673;
  double t7681;
  double t7813;
  double t7818;
  double t7821;
  double t7847;
  double t7864;
  double t7866;
  double t7868;
  double t7872;
  double t7873;
  double t7867;
  double t7874;
  double t7877;
  double t7917;
  double t7923;
  double t7928;
  double t7886;
  double t7892;
  double t7893;
  double t7709;
  double t7803;
  double t7804;
  double t7937;
  double t7939;
  double t7940;
  double t7959;
  double t7962;
  double t7932;
  double t7934;
  t1553 = Cos(var1[3]);
  t558 = Cos(var1[4]);
  t1050 = Sin(var1[3]);
  t1784 = Sin(var1[4]);
  t280 = Sin(var1[2]);
  t1101 = -1.*t558*t1050;
  t1902 = -1.*t1553*t1784;
  t2192 = t1101 + t1902;
  t2766 = t280*t2192;
  t3299 = Cos(var1[2]);
  t3665 = t1553*t558;
  t3854 = -1.*t1050*t1784;
  t4262 = t3665 + t3854;
  t4278 = t3299*t4262;
  t4325 = t2766 + t4278;
  t6093 = -1.*t558;
  t6430 = 1. + t6093;
  t6445 = -0.9063*t6430;
  t6630 = -1.078185*t558;
  t7454 = t6445 + t6630;
  t7763 = t558*t1050;
  t7780 = t1553*t1784;
  t7784 = t7763 + t7780;
  t7795 = t3299*t7784;
  t7796 = t280*t4262;
  t7802 = t7795 + t7796;
  t7838 = 0.4999*t1050;
  t7839 = t7454*t1050;
  t7843 = -0.17188499999999995*t1553*t1784;
  t7844 = t7838 + t7839 + t7843;
  t7848 = -1.*t1553;
  t7855 = 1. + t7848;
  t7859 = -0.4999*t7855;
  t7860 = t1553*t7454;
  t7861 = 0.17188499999999995*t1050*t1784;
  t7862 = t7859 + t7860 + t7861;
  t7807 = t3299*t2192;
  t7810 = -1.*t280*t4262;
  t7812 = t7807 + t7810;
  t7729 = 0.4999*t1784;
  t7736 = t7454*t1784;
  t7744 = 0.17188499999999995*t558*t1784;
  t7753 = t7729 + t7736 + t7744;
  t7816 = -1.*t280*t7784;
  t7817 = t7816 + t4278;
  t5479 = 0.4999*t558;
  t7519 = t7454*t558;
  t7631 = Power(t1784,2);
  t7673 = -0.17188499999999995*t7631;
  t7681 = t5479 + t7519 + t7673;
  t7813 = 0.85216*t4325*t7812;
  t7818 = 0.85216*t7817*t7802;
  t7821 = t7813 + t7818;
  t7847 = -1.*t7844*t4262;
  t7864 = -1.*t2192*t7862;
  t7866 = t7847 + t7864;
  t7868 = t7844*t7784;
  t7872 = t4262*t7862;
  t7873 = t7868 + t7872;
  t7867 = 0.85216*t7802*t7866;
  t7874 = 0.85216*t4325*t7873;
  t7877 = t7867 + t7874;
  t7917 = 0.85216*t7817*t7866;
  t7923 = 0.85216*t7812*t7873;
  t7928 = t7917 + t7923;
  t7886 = 0.85216*t7753*t7817;
  t7892 = 0.85216*t7681*t7812;
  t7893 = t7886 + t7892;
  t7709 = 0.85216*t7681*t4325;
  t7803 = 0.85216*t7753*t7802;
  t7804 = t7709 + t7803;
  t7937 = 0.85216*t7753*t7866;
  t7939 = 0.85216*t7681*t7873;
  t7940 = 0.019286 + t7937 + t7939;
  t7959 = -0.14647352159999996*t7681;
  t7962 = 0.019286 + t7959;
  t7932 = -0.14647352159999996*t7873;
  t7934 = 0.019286 + t7932;
  p_output1[0]=-1.*(0.85216*Power(t4325,2) + 0.85216*Power(t7802,2))*var2[0] - 1.*t7821*var2[1] - 1.*t7877*var2[2] - 1.*t7804*var2[3] + 0.14647352159999996*t4325*var2[4];
  p_output1[1]=-1.*t7821*var2[0] - 1.*(0.85216*Power(t7812,2) + 0.85216*Power(t7817,2))*var2[1] - 1.*t7928*var2[2] - 1.*t7893*var2[3] + 0.14647352159999996*t7812*var2[4];
  p_output1[2]=-1.*t7877*var2[0] - 1.*t7928*var2[1] - 1.*(0.019286 + 0.85216*Power(t7866,2) + 0.85216*Power(t7873,2))*var2[2] - 1.*t7940*var2[3] - 1.*t7934*var2[4];
  p_output1[3]=-1.*t7804*var2[0] - 1.*t7893*var2[1] - 1.*t7940*var2[2] - 1.*(0.019286 + 0.85216*Power(t7681,2) + 0.85216*Power(t7753,2))*var2[3] - 1.*t7962*var2[4];
  p_output1[4]=0.14647352159999996*t4325*var2[0] + 0.14647352159999996*t7812*var2[1] - 1.*t7934*var2[2] - 1.*t7962*var2[3] - 0.04446260126021599*var2[4];
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

#include "MmatDx3_amber3_PF.hh"

namespace SymFunction
{

void MmatDx3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

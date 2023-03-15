/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:42 GMT-08:00
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
  double t2500;
  double t1305;
  double t1853;
  double t2714;
  double t1078;
  double t2350;
  double t2722;
  double t3030;
  double t3054;
  double t3199;
  double t3299;
  double t3404;
  double t3665;
  double t3949;
  double t4078;
  double t4278;
  double t4325;
  double t4975;
  double t5159;
  double t5395;
  double t6679;
  double t6858;
  double t7129;
  double t7137;
  double t7254;
  double t7394;
  double t7813;
  double t7818;
  double t7824;
  double t7825;
  double t7829;
  double t7830;
  double t7831;
  double t7835;
  double t7838;
  double t7839;
  double t7631;
  double t7673;
  double t7681;
  double t6067;
  double t6288;
  double t6328;
  double t6630;
  double t7736;
  double t7744;
  double t4151;
  double t5479;
  double t5612;
  double t5907;
  double t5909;
  double t7729;
  double t7753;
  double t7763;
  double t7826;
  double t7843;
  double t7859;
  double t7861;
  double t7866;
  double t7867;
  double t7860;
  double t7868;
  double t7872;
  double t7913;
  double t7917;
  double t7923;
  double t7883;
  double t7885;
  double t7886;
  double t5936;
  double t7410;
  double t7454;
  double t7939;
  double t7941;
  double t7942;
  double t7968;
  double t7970;
  double t7932;
  double t7935;
  t2500 = Cos(var1[5]);
  t1305 = Cos(var1[6]);
  t1853 = Sin(var1[5]);
  t2714 = Sin(var1[6]);
  t1078 = Sin(var1[2]);
  t2350 = -1.*t1305*t1853;
  t2722 = -1.*t2500*t2714;
  t3030 = t2350 + t2722;
  t3054 = t1078*t3030;
  t3199 = Cos(var1[2]);
  t3299 = t2500*t1305;
  t3404 = -1.*t1853*t2714;
  t3665 = t3299 + t3404;
  t3949 = t3199*t3665;
  t4078 = t3054 + t3949;
  t4278 = -1.*t1305;
  t4325 = 1. + t4278;
  t4975 = -0.9063*t4325;
  t5159 = -1.078185*t1305;
  t5395 = t4975 + t5159;
  t6679 = t1305*t1853;
  t6858 = t2500*t2714;
  t7129 = t6679 + t6858;
  t7137 = t3199*t7129;
  t7254 = t1078*t3665;
  t7394 = t7137 + t7254;
  t7813 = 0.4999*t1853;
  t7818 = t5395*t1853;
  t7824 = -0.17188499999999995*t2500*t2714;
  t7825 = t7813 + t7818 + t7824;
  t7829 = -1.*t2500;
  t7830 = 1. + t7829;
  t7831 = -0.4999*t7830;
  t7835 = t2500*t5395;
  t7838 = 0.17188499999999995*t1853*t2714;
  t7839 = t7831 + t7835 + t7838;
  t7631 = t3199*t3030;
  t7673 = -1.*t1078*t3665;
  t7681 = t7631 + t7673;
  t6067 = 0.4999*t2714;
  t6288 = t5395*t2714;
  t6328 = 0.17188499999999995*t1305*t2714;
  t6630 = t6067 + t6288 + t6328;
  t7736 = -1.*t1078*t7129;
  t7744 = t7736 + t3949;
  t4151 = 0.4999*t1305;
  t5479 = t5395*t1305;
  t5612 = Power(t2714,2);
  t5907 = -0.17188499999999995*t5612;
  t5909 = t4151 + t5479 + t5907;
  t7729 = 0.85216*t4078*t7681;
  t7753 = 0.85216*t7744*t7394;
  t7763 = t7729 + t7753;
  t7826 = -1.*t7825*t3665;
  t7843 = -1.*t3030*t7839;
  t7859 = t7826 + t7843;
  t7861 = t7825*t7129;
  t7866 = t3665*t7839;
  t7867 = t7861 + t7866;
  t7860 = 0.85216*t7394*t7859;
  t7868 = 0.85216*t4078*t7867;
  t7872 = t7860 + t7868;
  t7913 = 0.85216*t7744*t7859;
  t7917 = 0.85216*t7681*t7867;
  t7923 = t7913 + t7917;
  t7883 = 0.85216*t6630*t7744;
  t7885 = 0.85216*t5909*t7681;
  t7886 = t7883 + t7885;
  t5936 = 0.85216*t5909*t4078;
  t7410 = 0.85216*t6630*t7394;
  t7454 = t5936 + t7410;
  t7939 = 0.85216*t6630*t7859;
  t7941 = 0.85216*t5909*t7867;
  t7942 = 0.019286 + t7939 + t7941;
  t7968 = -0.14647352159999996*t5909;
  t7970 = 0.019286 + t7968;
  t7932 = -0.14647352159999996*t7867;
  t7935 = 0.019286 + t7932;
  p_output1[0]=-1.*(0.85216*Power(t4078,2) + 0.85216*Power(t7394,2))*var2[0] - 1.*t7763*var2[1] - 1.*t7872*var2[2] - 1.*t7454*var2[5] + 0.14647352159999996*t4078*var2[6];
  p_output1[1]=-1.*t7763*var2[0] - 1.*(0.85216*Power(t7681,2) + 0.85216*Power(t7744,2))*var2[1] - 1.*t7923*var2[2] - 1.*t7886*var2[5] + 0.14647352159999996*t7681*var2[6];
  p_output1[2]=-1.*t7872*var2[0] - 1.*t7923*var2[1] - 1.*(0.019286 + 0.85216*Power(t7859,2) + 0.85216*Power(t7867,2))*var2[2] - 1.*t7942*var2[5] - 1.*t7935*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-1.*t7454*var2[0] - 1.*t7886*var2[1] - 1.*t7942*var2[2] - 1.*(0.019286 + 0.85216*Power(t5909,2) + 0.85216*Power(t6630,2))*var2[5] - 1.*t7970*var2[6];
  p_output1[6]=0.14647352159999996*t4078*var2[0] + 0.14647352159999996*t7681*var2[1] - 1.*t7935*var2[2] - 1.*t7970*var2[5] - 0.04446260126021599*var2[6];
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

#include "MmatDx5_amber3_PF.hh"

namespace SymFunction
{

void MmatDx5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

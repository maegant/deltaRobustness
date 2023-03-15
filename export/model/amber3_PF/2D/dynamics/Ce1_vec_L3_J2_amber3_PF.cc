/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:56 GMT-08:00
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
  double t1687;
  double t524;
  double t758;
  double t1795;
  double t467;
  double t1667;
  double t1808;
  double t2462;
  double t2477;
  double t2521;
  double t2564;
  double t2754;
  double t3299;
  double t3701;
  double t3871;
  double t3949;
  double t4264;
  double t3094;
  double t3416;
  double t4033;
  double t4059;
  double t4233;
  double t4514;
  double t5074;
  double t5395;
  double t5416;
  double t2469;
  double t6288;
  double t6305;
  double t6328;
  double t5909;
  double t6051;
  double t6588;
  double t6589;
  double t6750;
  double t6764;
  double t6978;
  double t6992;
  double t7069;
  double t3008;
  double t3033;
  double t4816;
  double t4933;
  double t7540;
  double t7631;
  double t7681;
  double t7796;
  double t7802;
  double t7803;
  double t7807;
  double t7812;
  double t7795;
  double t7813;
  double t7818;
  double t7824;
  double t7838;
  double t7859;
  double t7860;
  double t7861;
  double t7866;
  double t7873;
  double t7831;
  double t7874;
  double t7883;
  double t7905;
  double t7907;
  double t7908;
  double t7939;
  double t7941;
  double t7944;
  double t7946;
  double t7951;
  double t7953;
  double t7932;
  double t7937;
  double t7948;
  double t7973;
  double t7974;
  double t7990;
  double t7992;
  double t7995;
  double t7996;
  double t7979;
  double t8022;
  double t8023;
  double t8024;
  double t8025;
  double t8011;
  double t8012;
  double t8013;
  double t8017;
  double t8020;
  double t8032;
  double t8036;
  t1687 = Cos(var1[3]);
  t524 = Cos(var1[4]);
  t758 = Sin(var1[3]);
  t1795 = Sin(var1[4]);
  t467 = Sin(var1[2]);
  t1667 = -1.*t524*t758;
  t1808 = -1.*t1687*t1795;
  t2462 = t1667 + t1808;
  t2477 = Cos(var1[2]);
  t2521 = t1687*t524;
  t2564 = -1.*t758*t1795;
  t2754 = t2521 + t2564;
  t3299 = t2477*t2754;
  t3701 = t524*t758;
  t3871 = t1687*t1795;
  t3949 = t3701 + t3871;
  t4264 = -1.*t467*t2754;
  t3094 = t467*t2462;
  t3416 = t3094 + t3299;
  t4033 = -1.*t467*t3949;
  t4059 = t4033 + t3299;
  t4233 = t2477*t2462;
  t4514 = t4233 + t4264;
  t5074 = t2477*t3949;
  t5395 = t467*t2754;
  t5416 = t5074 + t5395;
  t2469 = -1.*t467*t2462;
  t6288 = -1.*t1687*t524;
  t6305 = t758*t1795;
  t6328 = t6288 + t6305;
  t5909 = 0.85216*t3416*t4059;
  t6051 = 0.85216*t4514*t5416;
  t6588 = t2477*t6328;
  t6589 = t2469 + t6588;
  t6750 = 0.85216*t3416*t6589;
  t6764 = t467*t6328;
  t6978 = t4233 + t6764;
  t6992 = 0.85216*t4514*t6978;
  t7069 = t5909 + t6051 + t6750 + t6992;
  t3008 = -1.*t2477*t2754;
  t3033 = t2469 + t3008;
  t4816 = -1.*t2477*t3949;
  t4933 = t4816 + t4264;
  t7540 = 1.70432*t4059*t4514;
  t7631 = 1.70432*t4514*t6589;
  t7681 = t7540 + t7631;
  t7796 = -1.*t524;
  t7802 = 1. + t7796;
  t7803 = -0.9063*t7802;
  t7807 = -1.078185*t524;
  t7812 = t7803 + t7807;
  t7795 = 0.4999*t758;
  t7813 = t7812*t758;
  t7818 = -0.17188499999999995*t1687*t1795;
  t7824 = t7795 + t7813 + t7818;
  t7838 = -1.*t1687;
  t7859 = 1. + t7838;
  t7860 = -0.4999*t7859;
  t7861 = t1687*t7812;
  t7866 = 0.17188499999999995*t758*t1795;
  t7873 = t7860 + t7861 + t7866;
  t7831 = -1.*t7824*t2754;
  t7874 = -1.*t2462*t7873;
  t7883 = t7831 + t7874;
  t7905 = t7824*t3949;
  t7907 = t2754*t7873;
  t7908 = t7905 + t7907;
  t7939 = -0.4999*t758;
  t7941 = -1.*t7812*t758;
  t7944 = 0.17188499999999995*t1687*t1795;
  t7946 = t7939 + t7941 + t7944;
  t7951 = 0.4999*t1687;
  t7953 = t7951 + t7861 + t7866;
  t7932 = 0.85216*t4514*t7883;
  t7937 = t7824*t2754;
  t7948 = t2462*t7873;
  t7973 = 0.85216*t7908*t6589;
  t7974 = -1.*t2462*t7824;
  t7990 = 0.17188499999999995*t524*t758;
  t7992 = t7990 + t7944;
  t7995 = -0.17188499999999995*t1687*t524;
  t7996 = t7995 + t7866;
  t7979 = -1.*t7873*t6328;
  t8022 = 0.4999*t1795;
  t8023 = t7812*t1795;
  t8024 = 0.17188499999999995*t524*t1795;
  t8025 = t8022 + t8023 + t8024;
  t8011 = 0.4999*t524;
  t8012 = t7812*t524;
  t8013 = Power(t1795,2);
  t8017 = -0.17188499999999995*t8013;
  t8020 = t8011 + t8012 + t8017;
  t8032 = 0.85216*t8025*t4514;
  t8036 = 0.85216*t8020*t6589;
  p_output1[0]=var2[1]*(-0.5*(0.85216*t3033*t3416 + 0.85216*Power(t4059,2) + 0.85216*Power(t4514,2) + 0.85216*t4933*t5416)*var2[2] - 0.5*t7069*var2[3] - 0.5*t7069*var2[4]);
  p_output1[1]=var2[1]*(-0.5*(1.70432*t3033*t4514 + 1.70432*t4059*t4933)*var2[2] - 0.5*t7681*var2[3] - 0.5*t7681*var2[4]);
  p_output1[2]=var2[1]*(-0.5*(0.85216*t4933*t7883 + 0.85216*t3033*t7908)*var2[2] - 0.5*(t7932 + 0.85216*t4514*(t7937 + t2754*t7946 + t7948 + t3949*t7953) + t7973 + 0.85216*t4059*(-1.*t2462*t7946 - 1.*t2754*t7953 + t7974 + t7979))*var2[3] - 0.5*(t7932 + t7973 + 0.85216*t4059*(t7974 + t7979 - 1.*t2462*t7992 - 1.*t2754*t7996) + 0.85216*t4514*(t7937 + t7948 + t2754*t7992 + t3949*t7996))*var2[4]);
  p_output1[3]=var2[1]*(-0.5*(0.85216*t3033*t8020 + 0.85216*t4933*t8025)*var2[2] - 0.5*(t8032 + t8036)*var2[3] - 0.5*(0.85216*t4514*(-0.4999*t1795 - 0.17188499999999995*t1795*t524 - 1.*t1795*t7812) + 0.85216*t4059*(0.17188499999999995*Power(t524,2) + t8011 + t8012) + t8032 + t8036)*var2[4]);
  p_output1[4]=var2[1]*(0.07323676079999998*t3033*var2[2] + 0.07323676079999998*t6589*var2[3] + 0.07323676079999998*t6589*var2[4]);
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

#include "Ce1_vec_L3_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L3_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

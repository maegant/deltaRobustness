/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:02 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1570;
  double t1702;
  double t1111;
  double t1736;
  double t1583;
  double t2054;
  double t2222;
  double t3078;
  double t3138;
  double t3208;
  double t3803;
  double t3842;
  double t3857;
  double t3866;
  double t3906;
  double t928;
  double t1082;
  double t2678;
  double t2960;
  double t3012;
  double t3395;
  double t3607;
  double t3046;
  double t3295;
  double t3328;
  double t2490;
  double t2669;
  double t3697;
  double t3713;
  double t3754;
  double t3801;
  double t3912;
  double t3921;
  double t3927;
  double t3956;
  double t3968;
  double t3970;
  double t3975;
  double t4220;
  double t4221;
  double t4223;
  double t3942;
  double t3999;
  double t4017;
  double t4296;
  double t4315;
  t1570 = Cos(var2[3]);
  t1702 = Sin(var2[2]);
  t1111 = Cos(var2[2]);
  t1736 = Sin(var2[3]);
  t1583 = t1111*t1570;
  t2054 = -1.*t1702*t1736;
  t2222 = t1583 + t2054;
  t3078 = t1570*t1702;
  t3138 = t1111*t1736;
  t3208 = t3078 + t3138;
  t3803 = -1.*t1570;
  t3842 = 1. + t3803;
  t3857 = -0.4999*t3842;
  t3866 = -0.6493*t1570;
  t3906 = t3857 + t3866;
  t928 = -1.*var1[5];
  t1082 = var3[3] + t928;
  t2678 = -1.*t1570*t1702;
  t2960 = -1.*t1111*t1736;
  t3012 = t2678 + t2960;
  t3395 = -1.*var1[0];
  t3607 = var3[0] + t3395;
  t3046 = 3.4261*t3012*t2222;
  t3295 = 3.4261*t3208*t2222;
  t3328 = t3046 + t3295;
  t2490 = -1.*var1[1];
  t2669 = var3[1] + t2490;
  t3697 = Power(t2222,2);
  t3713 = 3.4261*t3697;
  t3754 = -1.*var1[2];
  t3801 = var3[2] + t3754;
  t3912 = t3906*t1736;
  t3921 = 0.14939999999999998*t1570*t1736;
  t3927 = t3912 + t3921;
  t3956 = t3906*t1570;
  t3968 = Power(t1736,2);
  t3970 = -0.14939999999999998*t3968;
  t3975 = t3956 + t3970;
  t4220 = 3.4261*t3927*t2222;
  t4221 = 3.4261*t3012*t3975;
  t4223 = t4220 + t4221;
  t3942 = 3.4261*t3208*t3927;
  t3999 = 3.4261*t2222*t3975;
  t4017 = t3942 + t3999;
  t4296 = -0.5118593399999999*t3975;
  t4315 = 0.0389 + t4296;
  p_output1[0]=-0.5118593399999999*t1082*t2222 + t2669*t3328 + t3607*(3.4261*Power(t3208,2) + t3713) + t3801*t4017;
  p_output1[1]=-0.5118593399999999*t1082*t3012 + t3328*t3607 + t2669*(3.4261*Power(t3012,2) + t3713) + t3801*t4223;
  p_output1[2]=t3801*(0.0389 + 3.4261*Power(t3927,2) + 3.4261*Power(t3975,2)) + t3607*t4017 + t2669*t4223 + t1082*t4315;
  p_output1[3]=0.11537178539599996*t1082 - 0.5118593399999999*t2669*t3012 - 0.5118593399999999*t2222*t3607 + t3801*t4315;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap2_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap2_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

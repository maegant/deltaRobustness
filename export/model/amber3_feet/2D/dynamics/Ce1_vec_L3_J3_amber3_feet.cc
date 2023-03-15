/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:31 GMT-08:00
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
  double t758;
  double t397;
  double t703;
  double t926;
  double t2041;
  double t2071;
  double t2116;
  double t2540;
  double t2561;
  double t2579;
  double t2594;
  double t2629;
  double t2000;
  double t3773;
  double t4130;
  double t4131;
  double t117;
  double t2465;
  double t2773;
  double t2787;
  double t3291;
  double t735;
  double t1227;
  double t1405;
  double t4171;
  double t4208;
  double t4228;
  double t4396;
  double t4412;
  double t4420;
  double t2342;
  double t3692;
  double t4752;
  double t4753;
  double t6069;
  double t6562;
  double t5630;
  double t5740;
  double t5838;
  double t5407;
  double t7766;
  double t7775;
  double t7777;
  double t7779;
  double t7802;
  double t7803;
  double t7816;
  double t7820;
  double t7822;
  double t6632;
  double t7011;
  double t7783;
  double t7824;
  double t7831;
  double t7835;
  double t7841;
  double t7842;
  double t7846;
  double t7847;
  double t7901;
  double t7902;
  double t7906;
  double t7907;
  double t7861;
  double t5491;
  double t5493;
  double t7782;
  double t7812;
  double t7813;
  double t7936;
  double t1754;
  double t2440;
  double t7854;
  double t7856;
  double t7863;
  double t7949;
  double t7905;
  double t7908;
  double t7909;
  double t7952;
  double t7954;
  double t7958;
  double t7911;
  double t7913;
  double t7916;
  double t7985;
  double t7986;
  double t7987;
  double t7990;
  double t7991;
  double t7993;
  double t7994;
  double t7995;
  double t7996;
  t758 = Cos(var1[3]);
  t397 = Cos(var1[4]);
  t703 = Sin(var1[3]);
  t926 = Sin(var1[4]);
  t2041 = t758*t397;
  t2071 = -1.*t703*t926;
  t2116 = t2041 + t2071;
  t2540 = -1.*t397;
  t2561 = 1. + t2540;
  t2579 = -0.9063*t2561;
  t2594 = -1.0567*t397;
  t2629 = t2579 + t2594;
  t2000 = Cos(var1[2]);
  t3773 = -1.*t397*t703;
  t4130 = -1.*t758*t926;
  t4131 = t3773 + t4130;
  t117 = Sin(var1[2]);
  t2465 = 0.4999*t703;
  t2773 = t2629*t703;
  t2787 = -0.15039999999999998*t758*t926;
  t3291 = t2465 + t2773 + t2787;
  t735 = t397*t703;
  t1227 = t758*t926;
  t1405 = t735 + t1227;
  t4171 = -1.*t758;
  t4208 = 1. + t4171;
  t4228 = -0.4999*t4208;
  t4396 = t758*t2629;
  t4412 = 0.15039999999999998*t703*t926;
  t4420 = t4228 + t4396 + t4412;
  t2342 = t2000*t2116;
  t3692 = -1.*t3291*t2116;
  t4752 = -1.*t4131*t4420;
  t4753 = t3692 + t4752;
  t6069 = t117*t4131;
  t6562 = t6069 + t2342;
  t5630 = t3291*t1405;
  t5740 = t2116*t4420;
  t5838 = t5630 + t5740;
  t5407 = t2000*t4131;
  t7766 = -0.4999*t703;
  t7775 = -1.*t2629*t703;
  t7777 = 0.15039999999999998*t758*t926;
  t7779 = t7766 + t7775 + t7777;
  t7802 = 0.4999*t758;
  t7803 = t7802 + t4396 + t4412;
  t7816 = -1.*t758*t397;
  t7820 = t703*t926;
  t7822 = t7816 + t7820;
  t6632 = 3.5899*t6562*t4753;
  t7011 = t3291*t2116;
  t7783 = t4131*t4420;
  t7824 = t117*t7822;
  t7831 = t5407 + t7824;
  t7835 = 3.5899*t5838*t7831;
  t7841 = t2000*t1405;
  t7842 = t117*t2116;
  t7846 = t7841 + t7842;
  t7847 = -1.*t4131*t3291;
  t7901 = 0.15039999999999998*t397*t703;
  t7902 = t7901 + t7777;
  t7906 = -0.15039999999999998*t758*t397;
  t7907 = t7906 + t4412;
  t7861 = -1.*t4420*t7822;
  t5491 = -1.*t117*t2116;
  t5493 = t5407 + t5491;
  t7782 = t7779*t2116;
  t7812 = t1405*t7803;
  t7813 = t7011 + t7782 + t7783 + t7812;
  t7936 = -1.*t117*t4131;
  t1754 = -1.*t117*t1405;
  t2440 = t1754 + t2342;
  t7854 = -1.*t4131*t7779;
  t7856 = -1.*t2116*t7803;
  t7863 = t7847 + t7854 + t7856 + t7861;
  t7949 = 3.5899*t5493*t4753;
  t7905 = t7902*t2116;
  t7908 = t1405*t7907;
  t7909 = t7011 + t7905 + t7783 + t7908;
  t7952 = t2000*t7822;
  t7954 = t7936 + t7952;
  t7958 = 3.5899*t5838*t7954;
  t7911 = -1.*t4131*t7902;
  t7913 = -1.*t2116*t7907;
  t7916 = t7847 + t7911 + t7913 + t7861;
  t7985 = 0.4999*t397;
  t7986 = t2629*t397;
  t7987 = Power(t926,2);
  t7990 = -0.15039999999999998*t7987;
  t7991 = t7985 + t7986 + t7990;
  t7993 = 0.4999*t926;
  t7994 = t2629*t926;
  t7995 = 0.15039999999999998*t397*t926;
  t7996 = t7993 + t7994 + t7995;
  p_output1[0]=var2[2]*(-0.5*(3.5899*t2440*t4753 + 3.5899*t5493*t5838)*var2[2] - 0.5*(t6632 + 3.5899*t6562*t7813 + t7835 + 3.5899*t7846*t7863)*var2[3] - 0.5*(t6632 + t7835 + 3.5899*t6562*t7909 + 3.5899*t7846*t7916)*var2[4]);
  p_output1[1]=var2[2]*(-0.5*(3.5899*t4753*(-1.*t1405*t2000 + t5491) + 3.5899*t5838*(-1.*t2000*t2116 + t7936))*var2[2] - 0.5*(3.5899*t5493*t7813 + 3.5899*t2440*t7863 + t7949 + t7958)*var2[3] - 0.5*(3.5899*t5493*t7909 + 3.5899*t2440*t7916 + t7949 + t7958)*var2[4]);
  p_output1[2]=var2[2]*(-0.5*(7.1798*t5838*t7813 + 7.1798*t4753*t7863)*var2[3] - 0.5*(7.1798*t5838*t7909 + 7.1798*t4753*t7916)*var2[4]);
  p_output1[3]=var2[2]*(-0.5*(3.5899*t7813*t7991 + 3.5899*t7863*t7996)*var2[3] - 0.5*(3.5899*t4753*(0.15039999999999998*Power(t397,2) + t7985 + t7986) + 3.5899*t7909*t7991 + 3.5899*t7916*t7996 + 3.5899*t5838*(-0.4999*t926 - 1.*t2629*t926 - 0.15039999999999998*t397*t926))*var2[4]);
  p_output1[4]=var2[2]*(0.26996047999999995*t7813*var2[3] + 0.26996047999999995*t7909*var2[4]);
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

#include "Ce1_vec_L3_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L3_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

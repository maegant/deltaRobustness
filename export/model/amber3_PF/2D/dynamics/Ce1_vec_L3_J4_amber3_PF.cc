/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:57 GMT-08:00
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
  double t1401;
  double t1040;
  double t2867;
  double t2654;
  double t1404;
  double t1618;
  double t1752;
  double t1794;
  double t1804;
  double t3460;
  double t2570;
  double t3785;
  double t3871;
  double t4035;
  double t1388;
  double t2072;
  double t2366;
  double t2451;
  double t4744;
  double t4938;
  double t4954;
  double t4057;
  double t4574;
  double t4605;
  double t4649;
  double t4670;
  double t4725;
  double t5074;
  double t5479;
  double t5485;
  double t5548;
  double t2755;
  double t3033;
  double t3094;
  double t5577;
  double t5639;
  double t5702;
  double t5739;
  double t5788;
  double t5876;
  double t5239;
  double t5277;
  double t7029;
  double t6204;
  double t6305;
  double t6386;
  double t3416;
  double t4059;
  double t5931;
  double t5946;
  double t6051;
  double t6063;
  double t7519;
  double t7686;
  double t7695;
  double t7729;
  double t7959;
  double t7967;
  double t7866;
  double t7905;
  double t7907;
  double t7908;
  double t7929;
  double t7931;
  double t7932;
  double t7937;
  double t7975;
  double t7978;
  double t7947;
  double t7948;
  double t7951;
  double t7971;
  double t7917;
  double t7973;
  double t7986;
  double t8012;
  double t8013;
  double t8020;
  double t8021;
  double t7995;
  t1401 = Cos(var1[4]);
  t1040 = Sin(var1[4]);
  t2867 = Cos(var1[3]);
  t2654 = Sin(var1[3]);
  t1404 = -1.*t1401;
  t1618 = 1. + t1404;
  t1752 = -0.9063*t1618;
  t1794 = -1.078185*t1401;
  t1804 = t1752 + t1794;
  t3460 = Cos(var1[2]);
  t2570 = Sin(var1[2]);
  t3785 = t2867*t1401;
  t3871 = -1.*t2654*t1040;
  t4035 = t3785 + t3871;
  t1388 = 0.4999*t1040;
  t2072 = t1804*t1040;
  t2366 = 0.17188499999999995*t1401*t1040;
  t2451 = t1388 + t2072 + t2366;
  t4744 = -1.*t1401*t2654;
  t4938 = -1.*t2867*t1040;
  t4954 = t4744 + t4938;
  t4057 = t3460*t4035;
  t4574 = 0.4999*t1401;
  t4605 = t1804*t1401;
  t4649 = Power(t1040,2);
  t4670 = -0.17188499999999995*t4649;
  t4725 = t4574 + t4605 + t4670;
  t5074 = t3460*t4954;
  t5479 = t2570*t4954;
  t5485 = t5479 + t4057;
  t5548 = 0.85216*t2451*t5485;
  t2755 = t1401*t2654;
  t3033 = t2867*t1040;
  t3094 = t2755 + t3033;
  t5577 = -1.*t2867*t1401;
  t5639 = t2654*t1040;
  t5702 = t5577 + t5639;
  t5739 = t2570*t5702;
  t5788 = t5074 + t5739;
  t5876 = 0.85216*t4725*t5788;
  t5239 = -1.*t2570*t4035;
  t5277 = t5074 + t5239;
  t7029 = -1.*t2570*t4954;
  t6204 = Power(t1401,2);
  t6305 = 0.17188499999999995*t6204;
  t6386 = t4574 + t4605 + t6305;
  t3416 = -1.*t2570*t3094;
  t4059 = t3416 + t4057;
  t5931 = -0.4999*t1040;
  t5946 = -1.*t1804*t1040;
  t6051 = -0.17188499999999995*t1401*t1040;
  t6063 = t5931 + t5946 + t6051;
  t7519 = 0.85216*t2451*t5277;
  t7686 = t3460*t5702;
  t7695 = t7029 + t7686;
  t7729 = 0.85216*t4725*t7695;
  t7959 = t2867*t1804;
  t7967 = 0.17188499999999995*t2654*t1040;
  t7866 = 0.4999*t2654;
  t7905 = t1804*t2654;
  t7907 = -0.17188499999999995*t2867*t1040;
  t7908 = t7866 + t7905 + t7907;
  t7929 = -0.4999*t2654;
  t7931 = -1.*t1804*t2654;
  t7932 = 0.17188499999999995*t2867*t1040;
  t7937 = t7929 + t7931 + t7932;
  t7975 = 0.4999*t2867;
  t7978 = t7975 + t7959 + t7967;
  t7947 = -1.*t2867;
  t7948 = 1. + t7947;
  t7951 = -0.4999*t7948;
  t7971 = t7951 + t7959 + t7967;
  t7917 = t7908*t4035;
  t7973 = t4954*t7971;
  t7986 = -1.*t4954*t7908;
  t8012 = 0.17188499999999995*t1401*t2654;
  t8013 = t8012 + t7932;
  t8020 = -0.17188499999999995*t2867*t1401;
  t8021 = t8020 + t7967;
  t7995 = -1.*t7971*t5702;
  p_output1[0]=var2[3]*(-0.5*(0.85216*t2451*t4059 + 0.85216*t4725*t5277)*var2[2] - 0.5*(t5548 + t5876)*var2[3] - 0.5*(t5548 + t5876 + 0.85216*t5485*t6063 + 0.85216*(t3094*t3460 + t2570*t4035)*t6386)*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(0.85216*t2451*(-1.*t3094*t3460 + t5239) + 0.85216*t4725*(-1.*t3460*t4035 + t7029))*var2[2] - 0.5*(t7519 + t7729)*var2[3] - 0.5*(0.85216*t5277*t6063 + 0.85216*t4059*t6386 + t7519 + t7729)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(0.85216*t4725*(t7917 + t4035*t7937 + t7973 + t3094*t7978) + 0.85216*t2451*(-1.*t4954*t7937 - 1.*t4035*t7978 + t7986 + t7995))*var2[3] - 0.5*(0.85216*t6063*(t3094*t7908 + t4035*t7971) + 0.85216*t6386*(-1.*t4035*t7908 - 1.*t4954*t7971) + 0.85216*t4725*(t7917 + t7973 + t4035*t8013 + t3094*t8021) + 0.85216*t2451*(t7986 + t7995 - 1.*t4954*t8013 - 1.*t4035*t8021))*var2[4]);
  p_output1[3]=-0.5*(1.70432*t4725*t6063 + 1.70432*t2451*t6386)*var2[3]*var2[4];
  p_output1[4]=0.07323676079999998*t6063*var2[3]*var2[4];
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

#include "Ce1_vec_L3_J4_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L3_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

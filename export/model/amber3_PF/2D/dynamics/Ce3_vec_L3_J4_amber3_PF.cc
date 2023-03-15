/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:06 GMT-08:00
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
  double t156;
  double t101;
  double t2135;
  double t1941;
  double t406;
  double t697;
  double t776;
  double t941;
  double t1029;
  double t2815;
  double t1691;
  double t2860;
  double t3004;
  double t3056;
  double t3897;
  double t3900;
  double t3942;
  double t3987;
  double t4042;
  double t4045;
  double t4185;
  double t4190;
  double t143;
  double t1100;
  double t1215;
  double t1265;
  double t2010;
  double t2278;
  double t2491;
  double t4208;
  double t4202;
  double t4210;
  double t4620;
  double t3234;
  double t4827;
  double t4828;
  double t4903;
  double t5332;
  double t5422;
  double t5052;
  double t5072;
  double t5089;
  double t5090;
  double t5108;
  double t5117;
  double t5165;
  double t5170;
  double t5611;
  double t5670;
  double t5186;
  double t5219;
  double t5242;
  double t5430;
  double t6401;
  double t6484;
  double t6510;
  double t6529;
  double t6613;
  double t6614;
  double t6660;
  double t2734;
  double t3504;
  double t4811;
  double t4908;
  double t4926;
  double t4928;
  double t4948;
  double t4951;
  double t4966;
  double t4985;
  double t4989;
  double t4996;
  double t5107;
  double t5580;
  double t5831;
  double t7916;
  double t7919;
  double t7930;
  double t7938;
  double t5886;
  t156 = Cos(var1[4]);
  t101 = Sin(var1[4]);
  t2135 = Cos(var1[3]);
  t1941 = Sin(var1[3]);
  t406 = -1.*t156;
  t697 = 1. + t406;
  t776 = -0.9063*t697;
  t941 = -1.078185*t156;
  t1029 = t776 + t941;
  t2815 = Cos(var1[2]);
  t1691 = Sin(var1[2]);
  t2860 = t2135*t156;
  t3004 = -1.*t1941*t101;
  t3056 = t2860 + t3004;
  t3897 = 0.4999*t156;
  t3900 = t1029*t156;
  t3942 = Power(t101,2);
  t3987 = -0.17188499999999995*t3942;
  t4042 = t3897 + t3900 + t3987;
  t4045 = -1.*t156*t1941;
  t4185 = -1.*t2135*t101;
  t4190 = t4045 + t4185;
  t143 = 0.4999*t101;
  t1100 = t1029*t101;
  t1215 = 0.17188499999999995*t156*t101;
  t1265 = t143 + t1100 + t1215;
  t2010 = t156*t1941;
  t2278 = t2135*t101;
  t2491 = t2010 + t2278;
  t4208 = -1.*t1691*t3056;
  t4202 = t2815*t4190;
  t4210 = t4202 + t4208;
  t4620 = -1.*t1691*t4190;
  t3234 = t2815*t3056;
  t4827 = -1.*t2135*t156;
  t4828 = t1941*t101;
  t4903 = t4827 + t4828;
  t5332 = t2135*t1029;
  t5422 = 0.17188499999999995*t1941*t101;
  t5052 = 0.4999*t1941;
  t5072 = t1029*t1941;
  t5089 = -0.17188499999999995*t2135*t101;
  t5090 = t5052 + t5072 + t5089;
  t5108 = -0.4999*t1941;
  t5117 = -1.*t1029*t1941;
  t5165 = 0.17188499999999995*t2135*t101;
  t5170 = t5108 + t5117 + t5165;
  t5611 = 0.4999*t2135;
  t5670 = t5611 + t5332 + t5422;
  t5186 = -1.*t2135;
  t5219 = 1. + t5186;
  t5242 = -0.4999*t5219;
  t5430 = t5242 + t5332 + t5422;
  t6401 = -0.4999*t101;
  t6484 = -1.*t1029*t101;
  t6510 = -0.17188499999999995*t156*t101;
  t6529 = t6401 + t6484 + t6510;
  t6613 = Power(t156,2);
  t6614 = 0.17188499999999995*t6613;
  t6660 = t3897 + t3900 + t6614;
  t2734 = -1.*t1691*t2491;
  t3504 = t2734 + t3234;
  t4811 = 0.85216*t1265*t4210;
  t4908 = t2815*t4903;
  t4926 = t4620 + t4908;
  t4928 = 0.85216*t4042*t4926;
  t4948 = t1691*t4190;
  t4951 = t4948 + t3234;
  t4966 = 0.85216*t1265*t4951;
  t4985 = t1691*t4903;
  t4989 = t4202 + t4985;
  t4996 = 0.85216*t4042*t4989;
  t5107 = t5090*t3056;
  t5580 = t4190*t5430;
  t5831 = -1.*t4190*t5090;
  t7916 = 0.17188499999999995*t156*t1941;
  t7919 = t7916 + t5165;
  t7930 = -0.17188499999999995*t2135*t156;
  t7938 = t7930 + t5422;
  t5886 = -1.*t5430*t4903;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(0.85216*t1265*t3504 + 0.85216*t4042*t4210)*var2[0] + 0.5*(0.85216*t1265*(-1.*t2491*t2815 + t4208) + 0.85216*t4042*(-1.*t2815*t3056 + t4620))*var2[1])*var2[3];
  p_output1[3]=(0.5*(t4966 + t4996)*var2[0] + 0.5*(t4811 + t4928)*var2[1] + 0.5*(0.85216*t4042*(t5107 + t3056*t5170 + t5580 + t2491*t5670) + 0.85216*t1265*(-1.*t4190*t5170 - 1.*t3056*t5670 + t5831 + t5886))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(0.5*(t4966 + t4996 + 0.85216*t4951*t6529 + 0.85216*(t2491*t2815 + t1691*t3056)*t6660)*var2[0] + 0.5*(t4811 + t4928 + 0.85216*t4210*t6529 + 0.85216*t3504*t6660)*var2[1] + 0.5*(0.85216*(t2491*t5090 + t3056*t5430)*t6529 + 0.85216*(-1.*t3056*t5090 - 1.*t4190*t5430)*t6660 + 0.85216*t4042*(t5107 + t5580 + t3056*t7919 + t2491*t7938) + 0.85216*t1265*(t5831 + t5886 - 1.*t4190*t7919 - 1.*t3056*t7938))*var2[2] + 0.5*(1.70432*t4042*t6529 + 1.70432*t1265*t6660)*var2[3] - 0.07323676079999998*t6529*var2[4]);
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

#include "Ce3_vec_L3_J4_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L3_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

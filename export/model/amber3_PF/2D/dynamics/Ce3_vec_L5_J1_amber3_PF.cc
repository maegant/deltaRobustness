/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:15 GMT-08:00
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
  double t2993;
  double t2642;
  double t2983;
  double t3095;
  double t3992;
  double t2538;
  double t4016;
  double t4042;
  double t4128;
  double t4828;
  double t4851;
  double t4926;
  double t4931;
  double t4951;
  double t2991;
  double t3152;
  double t3613;
  double t3900;
  double t4202;
  double t4513;
  double t5164;
  double t5072;
  double t5089;
  double t5107;
  double t5108;
  double t5165;
  double t5580;
  double t5601;
  double t5618;
  double t5660;
  double t5679;
  double t6529;
  double t6551;
  double t6563;
  double t6579;
  double t6614;
  double t6660;
  double t6733;
  double t6769;
  double t6774;
  double t6789;
  double t4769;
  double t4989;
  double t4998;
  double t5029;
  double t5179;
  double t5242;
  double t5332;
  double t5373;
  double t5422;
  double t7124;
  double t7162;
  double t7205;
  double t7206;
  double t7212;
  double t5861;
  double t6613;
  double t6832;
  double t6841;
  double t6852;
  double t6853;
  double t6863;
  double t7925;
  double t7930;
  double t7981;
  double t7993;
  double t8039;
  double t8042;
  double t7216;
  double t7228;
  double t7243;
  double t7405;
  double t7438;
  double t7447;
  double t7481;
  double t7493;
  double t7514;
  double t7569;
  double t7624;
  double t7625;
  double t7652;
  double t7664;
  double t7794;
  double t7836;
  double t7916;
  double t8008;
  double t8063;
  double t8065;
  double t8105;
  double t8106;
  double t8108;
  double t8109;
  double t8075;
  t2993 = Cos(var1[5]);
  t2642 = Cos(var1[6]);
  t2983 = Sin(var1[5]);
  t3095 = Sin(var1[6]);
  t3992 = Sin(var1[2]);
  t2538 = Cos(var1[2]);
  t4016 = t2993*t2642;
  t4042 = -1.*t2983*t3095;
  t4128 = t4016 + t4042;
  t4828 = -1.*t2642;
  t4851 = 1. + t4828;
  t4926 = -0.9063*t4851;
  t4931 = -1.078185*t2642;
  t4951 = t4926 + t4931;
  t2991 = -1.*t2642*t2983;
  t3152 = -1.*t2993*t3095;
  t3613 = t2991 + t3152;
  t3900 = t2538*t3613;
  t4202 = -1.*t3992*t4128;
  t4513 = t3900 + t4202;
  t5164 = t2538*t4128;
  t5072 = t2642*t2983;
  t5089 = t2993*t3095;
  t5107 = t5072 + t5089;
  t5108 = -1.*t3992*t5107;
  t5165 = t5108 + t5164;
  t5580 = t3992*t3613;
  t5601 = t5580 + t5164;
  t5618 = t2538*t5107;
  t5660 = t3992*t4128;
  t5679 = t5618 + t5660;
  t6529 = 0.4999*t2983;
  t6551 = t4951*t2983;
  t6563 = -0.17188499999999995*t2993*t3095;
  t6579 = t6529 + t6551 + t6563;
  t6614 = -1.*t2993;
  t6660 = 1. + t6614;
  t6733 = -0.4999*t6660;
  t6769 = t2993*t4951;
  t6774 = 0.17188499999999995*t2983*t3095;
  t6789 = t6733 + t6769 + t6774;
  t4769 = 0.4999*t3095;
  t4989 = t4951*t3095;
  t4998 = 0.17188499999999995*t2642*t3095;
  t5029 = t4769 + t4989 + t4998;
  t5179 = 0.4999*t2642;
  t5242 = t4951*t2642;
  t5332 = Power(t3095,2);
  t5373 = -0.17188499999999995*t5332;
  t5422 = t5179 + t5242 + t5373;
  t7124 = -1.*t2993*t2642;
  t7162 = t2983*t3095;
  t7205 = t7124 + t7162;
  t7206 = t3992*t7205;
  t7212 = t3900 + t7206;
  t5861 = -1.*t3992*t3613;
  t6613 = -1.*t6579*t4128;
  t6832 = -1.*t3613*t6789;
  t6841 = t6613 + t6832;
  t6852 = t6579*t5107;
  t6853 = t4128*t6789;
  t6863 = t6852 + t6853;
  t7925 = -0.4999*t2983;
  t7930 = -1.*t4951*t2983;
  t7981 = 0.17188499999999995*t2993*t3095;
  t7993 = t7925 + t7930 + t7981;
  t8039 = 0.4999*t2993;
  t8042 = t8039 + t6769 + t6774;
  t7216 = -0.07323676079999998*var2[6]*t7212;
  t7228 = 0.85216*t5029*t5601;
  t7243 = 0.85216*t5422*t7212;
  t7405 = 1.70432*t5601*t5679;
  t7438 = 1.70432*t5601*t7212;
  t7447 = t7405 + t7438;
  t7481 = 0.5*var2[0]*t7447;
  t7493 = 0.85216*t5601*t5165;
  t7514 = 0.85216*t4513*t5679;
  t7569 = t2538*t7205;
  t7624 = t5861 + t7569;
  t7625 = 0.85216*t5601*t7624;
  t7652 = 0.85216*t4513*t7212;
  t7664 = t7493 + t7514 + t7625 + t7652;
  t7794 = 0.5*var2[1]*t7664;
  t7836 = 0.85216*t5601*t6841;
  t7916 = t6579*t4128;
  t8008 = t3613*t6789;
  t8063 = 0.85216*t6863*t7212;
  t8065 = -1.*t3613*t6579;
  t8105 = 0.17188499999999995*t2642*t2983;
  t8106 = t8105 + t7981;
  t8108 = -0.17188499999999995*t2993*t2642;
  t8109 = t8108 + t6774;
  t8075 = -1.*t6789*t7205;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(0.5*(1.70432*t4513*t5601 + 1.70432*t5165*t5679)*var2[0] + 0.5*(0.85216*Power(t4513,2) + 0.85216*Power(t5165,2) + 0.85216*(t4202 - 1.*t2538*t5107)*t5679 + 0.85216*t5601*(-1.*t2538*t4128 + t5861))*var2[1] + 0.5*(0.85216*t5165*t6841 + 0.85216*t4513*t6863)*var2[2] + 0.5*(0.85216*t5029*t5165 + 0.85216*t4513*t5422)*var2[5] - 0.07323676079999998*t4513*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[0]*(t7216 + t7481 + t7794 + 0.5*(t7836 + 0.85216*t5601*(t7916 + t4128*t7993 + t8008 + t5107*t8042) + t8063 + 0.85216*t5679*(-1.*t3613*t7993 - 1.*t4128*t8042 + t8065 + t8075))*var2[2] + 0.5*(t7228 + t7243)*var2[5]);
  p_output1[6]=var2[0]*(t7216 + t7481 + t7794 + 0.5*(t7836 + t8063 + 0.85216*t5679*(t8065 + t8075 - 1.*t3613*t8106 - 1.*t4128*t8109) + 0.85216*t5601*(t7916 + t8008 + t4128*t8106 + t5107*t8109))*var2[2] + 0.5*(0.85216*(-0.4999*t3095 - 0.17188499999999995*t2642*t3095 - 1.*t3095*t4951)*t5601 + 0.85216*(0.17188499999999995*Power(t2642,2) + t5179 + t5242)*t5679 + t7228 + t7243)*var2[5]);
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

#include "Ce3_vec_L5_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L5_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

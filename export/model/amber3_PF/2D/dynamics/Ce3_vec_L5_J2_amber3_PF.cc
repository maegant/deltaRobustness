/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:16 GMT-08:00
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
  double t1775;
  double t1049;
  double t1385;
  double t2082;
  double t250;
  double t1573;
  double t2429;
  double t2536;
  double t3049;
  double t3413;
  double t3546;
  double t3900;
  double t4016;
  double t4230;
  double t4309;
  double t4530;
  double t4557;
  double t4566;
  double t4769;
  double t4926;
  double t5332;
  double t5171;
  double t5177;
  double t5179;
  double t5242;
  double t5373;
  double t5611;
  double t5608;
  double t5618;
  double t5576;
  double t5580;
  double t6327;
  double t6329;
  double t6344;
  double t6345;
  double t6446;
  double t6508;
  double t6510;
  double t6529;
  double t6551;
  double t6563;
  double t5072;
  double t5089;
  double t5164;
  double t5165;
  double t4513;
  double t4931;
  double t4989;
  double t4998;
  double t5029;
  double t6949;
  double t6991;
  double t7014;
  double t7017;
  double t7019;
  double t5797;
  double t5853;
  double t6112;
  double t6136;
  double t6174;
  double t6401;
  double t6733;
  double t6769;
  double t6777;
  double t6841;
  double t6848;
  double t7916;
  double t7925;
  double t7981;
  double t8006;
  double t8060;
  double t8061;
  double t7108;
  double t7162;
  double t7206;
  double t7251;
  double t7329;
  double t7361;
  double t7405;
  double t7438;
  double t7493;
  double t7514;
  double t7569;
  double t7604;
  double t7624;
  double t7625;
  double t7639;
  double t7652;
  double t7836;
  double t8039;
  double t8067;
  double t8078;
  double t8112;
  double t8114;
  double t8117;
  double t8119;
  double t8081;
  t1775 = Cos(var1[5]);
  t1049 = Cos(var1[6]);
  t1385 = Sin(var1[5]);
  t2082 = Sin(var1[6]);
  t250 = Sin(var1[2]);
  t1573 = -1.*t1049*t1385;
  t2429 = -1.*t1775*t2082;
  t2536 = t1573 + t2429;
  t3049 = -1.*t250*t2536;
  t3413 = Cos(var1[2]);
  t3546 = t1775*t1049;
  t3900 = -1.*t1385*t2082;
  t4016 = t3546 + t3900;
  t4230 = -1.*t3413*t4016;
  t4309 = t3049 + t4230;
  t4530 = -1.*t1049;
  t4557 = 1. + t4530;
  t4566 = -0.9063*t4557;
  t4769 = -1.078185*t1049;
  t4926 = t4566 + t4769;
  t5332 = -1.*t250*t4016;
  t5171 = t1049*t1385;
  t5177 = t1775*t2082;
  t5179 = t5171 + t5177;
  t5242 = -1.*t3413*t5179;
  t5373 = t5242 + t5332;
  t5611 = t3413*t4016;
  t5608 = -1.*t250*t5179;
  t5618 = t5608 + t5611;
  t5576 = t3413*t2536;
  t5580 = t5576 + t5332;
  t6327 = 0.4999*t1385;
  t6329 = t4926*t1385;
  t6344 = -0.17188499999999995*t1775*t2082;
  t6345 = t6327 + t6329 + t6344;
  t6446 = -1.*t1775;
  t6508 = 1. + t6446;
  t6510 = -0.4999*t6508;
  t6529 = t1775*t4926;
  t6551 = 0.17188499999999995*t1385*t2082;
  t6563 = t6510 + t6529 + t6551;
  t5072 = 0.4999*t2082;
  t5089 = t4926*t2082;
  t5164 = 0.17188499999999995*t1049*t2082;
  t5165 = t5072 + t5089 + t5164;
  t4513 = 0.4999*t1049;
  t4931 = t4926*t1049;
  t4989 = Power(t2082,2);
  t4998 = -0.17188499999999995*t4989;
  t5029 = t4513 + t4931 + t4998;
  t6949 = -1.*t1775*t1049;
  t6991 = t1385*t2082;
  t7014 = t6949 + t6991;
  t7017 = t3413*t7014;
  t7019 = t3049 + t7017;
  t5797 = t250*t2536;
  t5853 = t5797 + t5611;
  t6112 = t3413*t5179;
  t6136 = t250*t4016;
  t6174 = t6112 + t6136;
  t6401 = -1.*t6345*t4016;
  t6733 = -1.*t2536*t6563;
  t6769 = t6401 + t6733;
  t6777 = t6345*t5179;
  t6841 = t4016*t6563;
  t6848 = t6777 + t6841;
  t7916 = -0.4999*t1385;
  t7925 = -1.*t4926*t1385;
  t7981 = 0.17188499999999995*t1775*t2082;
  t8006 = t7916 + t7925 + t7981;
  t8060 = 0.4999*t1775;
  t8061 = t8060 + t6529 + t6551;
  t7108 = -0.07323676079999998*var2[6]*t7019;
  t7162 = 0.85216*t5165*t5580;
  t7206 = 0.85216*t5029*t7019;
  t7251 = 1.70432*t5618*t5580;
  t7329 = 1.70432*t5580*t7019;
  t7361 = t7251 + t7329;
  t7405 = 0.5*var2[1]*t7361;
  t7438 = 0.85216*t5853*t5618;
  t7493 = 0.85216*t5580*t6174;
  t7514 = 0.85216*t5853*t7019;
  t7569 = t250*t7014;
  t7604 = t5576 + t7569;
  t7624 = 0.85216*t5580*t7604;
  t7625 = t7438 + t7493 + t7514 + t7624;
  t7639 = 0.5*var2[0]*t7625;
  t7652 = 0.85216*t5580*t6769;
  t7836 = t6345*t4016;
  t8039 = t2536*t6563;
  t8067 = 0.85216*t6848*t7019;
  t8078 = -1.*t2536*t6345;
  t8112 = 0.17188499999999995*t1049*t1385;
  t8114 = t8112 + t7981;
  t8117 = -0.17188499999999995*t1775*t1049;
  t8119 = t8117 + t6551;
  t8081 = -1.*t6563*t7014;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(0.5*(0.85216*Power(t5580,2) + 0.85216*Power(t5618,2) + 0.85216*t4309*t5853 + 0.85216*t5373*t6174)*var2[0] + 0.5*(1.70432*t4309*t5580 + 1.70432*t5373*t5618)*var2[1] + 0.5*(0.85216*t5373*t6769 + 0.85216*t4309*t6848)*var2[2] + 0.5*(0.85216*t4309*t5029 + 0.85216*t5165*t5373)*var2[5] - 0.07323676079999998*t4309*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[1]*(t7108 + t7405 + t7639 + 0.5*(t7652 + 0.85216*t5580*(t7836 + t4016*t8006 + t8039 + t5179*t8061) + t8067 + 0.85216*t5618*(-1.*t2536*t8006 - 1.*t4016*t8061 + t8078 + t8081))*var2[2] + 0.5*(t7162 + t7206)*var2[5]);
  p_output1[6]=var2[1]*(t7108 + t7405 + t7639 + 0.5*(t7652 + t8067 + 0.85216*t5618*(t8078 + t8081 - 1.*t2536*t8114 - 1.*t4016*t8119) + 0.85216*t5580*(t7836 + t8039 + t4016*t8114 + t5179*t8119))*var2[2] + 0.5*(0.85216*(-0.4999*t2082 - 0.17188499999999995*t1049*t2082 - 1.*t2082*t4926)*t5580 + 0.85216*(0.17188499999999995*Power(t1049,2) + t4513 + t4931)*t5618 + t7162 + t7206)*var2[5]);
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

#include "Ce3_vec_L5_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L5_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

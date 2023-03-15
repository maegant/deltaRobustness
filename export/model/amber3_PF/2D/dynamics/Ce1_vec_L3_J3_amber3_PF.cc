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
  double t1432;
  double t341;
  double t1315;
  double t1476;
  double t2366;
  double t2430;
  double t2521;
  double t3299;
  double t3320;
  double t3416;
  double t3460;
  double t3701;
  double t2195;
  double t4165;
  double t4216;
  double t4233;
  double t185;
  double t3094;
  double t3871;
  double t4059;
  double t4078;
  double t1401;
  double t1804;
  double t1973;
  double t4410;
  double t4514;
  double t4519;
  double t4649;
  double t4670;
  double t4788;
  double t2755;
  double t4084;
  double t4933;
  double t5074;
  double t6051;
  double t6305;
  double t5485;
  double t5548;
  double t5577;
  double t5395;
  double t6504;
  double t6521;
  double t6588;
  double t6589;
  double t6978;
  double t6992;
  double t7169;
  double t7182;
  double t7193;
  double t6423;
  double t6476;
  double t6764;
  double t7299;
  double t7394;
  double t7410;
  double t7446;
  double t7480;
  double t7519;
  double t7540;
  double t7795;
  double t7803;
  double t7813;
  double t7818;
  double t7631;
  double t5416;
  double t5479;
  double t6750;
  double t7029;
  double t7085;
  double t7944;
  double t2146;
  double t3033;
  double t7605;
  double t7607;
  double t7729;
  double t7971;
  double t7807;
  double t7860;
  double t7861;
  double t7975;
  double t7978;
  double t7983;
  double t7883;
  double t7885;
  double t7905;
  double t8013;
  double t8017;
  double t8020;
  double t8021;
  double t8022;
  double t8024;
  double t8025;
  double t8027;
  double t8030;
  t1432 = Cos(var1[3]);
  t341 = Cos(var1[4]);
  t1315 = Sin(var1[3]);
  t1476 = Sin(var1[4]);
  t2366 = t1432*t341;
  t2430 = -1.*t1315*t1476;
  t2521 = t2366 + t2430;
  t3299 = -1.*t341;
  t3320 = 1. + t3299;
  t3416 = -0.9063*t3320;
  t3460 = -1.078185*t341;
  t3701 = t3416 + t3460;
  t2195 = Cos(var1[2]);
  t4165 = -1.*t341*t1315;
  t4216 = -1.*t1432*t1476;
  t4233 = t4165 + t4216;
  t185 = Sin(var1[2]);
  t3094 = 0.4999*t1315;
  t3871 = t3701*t1315;
  t4059 = -0.17188499999999995*t1432*t1476;
  t4078 = t3094 + t3871 + t4059;
  t1401 = t341*t1315;
  t1804 = t1432*t1476;
  t1973 = t1401 + t1804;
  t4410 = -1.*t1432;
  t4514 = 1. + t4410;
  t4519 = -0.4999*t4514;
  t4649 = t1432*t3701;
  t4670 = 0.17188499999999995*t1315*t1476;
  t4788 = t4519 + t4649 + t4670;
  t2755 = t2195*t2521;
  t4084 = -1.*t4078*t2521;
  t4933 = -1.*t4233*t4788;
  t5074 = t4084 + t4933;
  t6051 = t185*t4233;
  t6305 = t6051 + t2755;
  t5485 = t4078*t1973;
  t5548 = t2521*t4788;
  t5577 = t5485 + t5548;
  t5395 = t2195*t4233;
  t6504 = -0.4999*t1315;
  t6521 = -1.*t3701*t1315;
  t6588 = 0.17188499999999995*t1432*t1476;
  t6589 = t6504 + t6521 + t6588;
  t6978 = 0.4999*t1432;
  t6992 = t6978 + t4649 + t4670;
  t7169 = -1.*t1432*t341;
  t7182 = t1315*t1476;
  t7193 = t7169 + t7182;
  t6423 = 0.85216*t6305*t5074;
  t6476 = t4078*t2521;
  t6764 = t4233*t4788;
  t7299 = t185*t7193;
  t7394 = t5395 + t7299;
  t7410 = 0.85216*t5577*t7394;
  t7446 = t2195*t1973;
  t7480 = t185*t2521;
  t7519 = t7446 + t7480;
  t7540 = -1.*t4233*t4078;
  t7795 = 0.17188499999999995*t341*t1315;
  t7803 = t7795 + t6588;
  t7813 = -0.17188499999999995*t1432*t341;
  t7818 = t7813 + t4670;
  t7631 = -1.*t4788*t7193;
  t5416 = -1.*t185*t2521;
  t5479 = t5395 + t5416;
  t6750 = t6589*t2521;
  t7029 = t1973*t6992;
  t7085 = t6476 + t6750 + t6764 + t7029;
  t7944 = -1.*t185*t4233;
  t2146 = -1.*t185*t1973;
  t3033 = t2146 + t2755;
  t7605 = -1.*t4233*t6589;
  t7607 = -1.*t2521*t6992;
  t7729 = t7540 + t7605 + t7607 + t7631;
  t7971 = 0.85216*t5479*t5074;
  t7807 = t7803*t2521;
  t7860 = t1973*t7818;
  t7861 = t6476 + t7807 + t6764 + t7860;
  t7975 = t2195*t7193;
  t7978 = t7944 + t7975;
  t7983 = 0.85216*t5577*t7978;
  t7883 = -1.*t4233*t7803;
  t7885 = -1.*t2521*t7818;
  t7905 = t7540 + t7883 + t7885 + t7631;
  t8013 = 0.4999*t341;
  t8017 = t3701*t341;
  t8020 = Power(t1476,2);
  t8021 = -0.17188499999999995*t8020;
  t8022 = t8013 + t8017 + t8021;
  t8024 = 0.4999*t1476;
  t8025 = t3701*t1476;
  t8027 = 0.17188499999999995*t341*t1476;
  t8030 = t8024 + t8025 + t8027;
  p_output1[0]=var2[2]*(-0.5*(0.85216*t3033*t5074 + 0.85216*t5479*t5577)*var2[2] - 0.5*(t6423 + 0.85216*t6305*t7085 + t7410 + 0.85216*t7519*t7729)*var2[3] - 0.5*(t6423 + t7410 + 0.85216*t6305*t7861 + 0.85216*t7519*t7905)*var2[4]);
  p_output1[1]=var2[2]*(-0.5*(0.85216*t5074*(-1.*t1973*t2195 + t5416) + 0.85216*t5577*(-1.*t2195*t2521 + t7944))*var2[2] - 0.5*(0.85216*t5479*t7085 + 0.85216*t3033*t7729 + t7971 + t7983)*var2[3] - 0.5*(0.85216*t5479*t7861 + 0.85216*t3033*t7905 + t7971 + t7983)*var2[4]);
  p_output1[2]=var2[2]*(-0.5*(1.70432*t5577*t7085 + 1.70432*t5074*t7729)*var2[3] - 0.5*(1.70432*t5577*t7861 + 1.70432*t5074*t7905)*var2[4]);
  p_output1[3]=var2[2]*(-0.5*(0.85216*t7085*t8022 + 0.85216*t7729*t8030)*var2[3] - 0.5*(0.85216*(-0.4999*t1476 - 0.17188499999999995*t1476*t341 - 1.*t1476*t3701)*t5577 + 0.85216*t5074*(0.17188499999999995*Power(t341,2) + t8013 + t8017) + 0.85216*t7861*t8022 + 0.85216*t7905*t8030)*var2[4]);
  p_output1[4]=var2[2]*(0.07323676079999998*t7085*var2[3] + 0.07323676079999998*t7861*var2[4]);
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

#include "Ce1_vec_L3_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L3_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

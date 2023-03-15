/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:24:56 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t477;
  double t394;
  double t421;
  double t507;
  double t868;
  double t291;
  double t934;
  double t981;
  double t987;
  double t466;
  double t564;
  double t754;
  double t757;
  double t1037;
  double t1510;
  double t1716;
  double t1783;
  double t1852;
  double t2062;
  double t2072;
  double t2121;
  double t2804;
  double t2806;
  double t2845;
  double t2941;
  double t2945;
  double t2651;
  double t2988;
  double t3066;
  double t3167;
  double t3318;
  double t3414;
  double t3490;
  double t3547;
  double t3565;
  double t3593;
  double t2308;
  double t2314;
  double t2319;
  double t2498;
  double t2537;
  double t2569;
  double t2575;
  double t2626;
  double t3291;
  double t3597;
  double t3654;
  double t3670;
  double t3697;
  double t3814;
  double t4060;
  double t4079;
  double t4085;
  double t4093;
  double t3914;
  double t3917;
  double t3928;
  double t3944;
  double t3974;
  double t3659;
  double t3833;
  double t3867;
  double t4309;
  double t4409;
  double t4420;
  double t4012;
  double t4100;
  double t4124;
  double t4588;
  double t4617;
  double t4618;
  double t5230;
  double t5262;
  double t5294;
  double t4135;
  double t4710;
  double t5327;
  double t5366;
  double t5477;
  double t5495;
  t477 = Cos(var1[3]);
  t394 = Cos(var1[4]);
  t421 = Sin(var1[3]);
  t507 = Sin(var1[4]);
  t868 = Cos(var1[2]);
  t291 = Sin(var1[2]);
  t934 = t477*t394;
  t981 = -1.*t421*t507;
  t987 = t934 + t981;
  t466 = -1.*t394*t421;
  t564 = -1.*t477*t507;
  t754 = t466 + t564;
  t757 = t291*t754;
  t1037 = t868*t987;
  t1510 = t757 + t1037;
  t1716 = t394*t421;
  t1783 = t477*t507;
  t1852 = t1716 + t1783;
  t2062 = t868*t1852;
  t2072 = t291*t987;
  t2121 = t2062 + t2072;
  t2804 = -1.*t394;
  t2806 = 1. + t2804;
  t2845 = -0.9063*t2806;
  t2941 = -1.078185*t394;
  t2945 = t2845 + t2941;
  t2651 = 0.4999*t421;
  t2988 = t2945*t421;
  t3066 = -0.17188499999999995*t477*t507;
  t3167 = t2651 + t2988 + t3066;
  t3318 = -1.*t477;
  t3414 = 1. + t3318;
  t3490 = -0.4999*t3414;
  t3547 = t477*t2945;
  t3565 = 0.17188499999999995*t421*t507;
  t3593 = t3490 + t3547 + t3565;
  t2308 = t868*t754;
  t2314 = -1.*t291*t987;
  t2319 = t2308 + t2314;
  t2498 = 0.85216*t1510*t2319;
  t2537 = -1.*t291*t1852;
  t2569 = t2537 + t1037;
  t2575 = 0.85216*t2569*t2121;
  t2626 = t2498 + t2575;
  t3291 = -1.*t3167*t987;
  t3597 = -1.*t754*t3593;
  t3654 = t3291 + t3597;
  t3670 = t3167*t1852;
  t3697 = t987*t3593;
  t3814 = t3670 + t3697;
  t4060 = 0.4999*t507;
  t4079 = t2945*t507;
  t4085 = 0.17188499999999995*t394*t507;
  t4093 = t4060 + t4079 + t4085;
  t3914 = 0.4999*t394;
  t3917 = t2945*t394;
  t3928 = Power(t507,2);
  t3944 = -0.17188499999999995*t3928;
  t3974 = t3914 + t3917 + t3944;
  t3659 = 0.85216*t2121*t3654;
  t3833 = 0.85216*t1510*t3814;
  t3867 = t3659 + t3833;
  t4309 = 0.85216*t2569*t3654;
  t4409 = 0.85216*t2319*t3814;
  t4420 = t4309 + t4409;
  t4012 = 0.85216*t3974*t1510;
  t4100 = 0.85216*t4093*t2121;
  t4124 = t4012 + t4100;
  t4588 = 0.85216*t4093*t2569;
  t4617 = 0.85216*t3974*t2319;
  t4618 = t4588 + t4617;
  t5230 = 0.85216*t4093*t3654;
  t5262 = 0.85216*t3974*t3814;
  t5294 = 0.019286 + t5230 + t5262;
  t4135 = -0.14647352159999996*t1510;
  t4710 = -0.14647352159999996*t2319;
  t5327 = -0.14647352159999996*t3814;
  t5366 = 0.019286 + t5327;
  t5477 = -0.14647352159999996*t3974;
  t5495 = 0.019286 + t5477;
  p_output1[0]=0.85216*Power(t1510,2) + 0.85216*Power(t2121,2);
  p_output1[1]=t2626;
  p_output1[2]=t3867;
  p_output1[3]=t4124;
  p_output1[4]=t4135;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=t2626;
  p_output1[8]=0.85216*Power(t2319,2) + 0.85216*Power(t2569,2);
  p_output1[9]=t4420;
  p_output1[10]=t4618;
  p_output1[11]=t4710;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=t3867;
  p_output1[15]=t4420;
  p_output1[16]=0.019286 + 0.85216*Power(t3654,2) + 0.85216*Power(t3814,2);
  p_output1[17]=t5294;
  p_output1[18]=t5366;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=t4124;
  p_output1[22]=t4618;
  p_output1[23]=t5294;
  p_output1[24]=0.019286 + 0.85216*Power(t3974,2) + 0.85216*Power(t4093,2);
  p_output1[25]=t5495;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t4135;
  p_output1[29]=t4710;
  p_output1[30]=t5366;
  p_output1[31]=t5495;
  p_output1[32]=0.04446260126021599;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat3_amber3_PF.hh"

namespace SymFunction
{

void Mmat3_amber3_PF_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:24:58 GMT-08:00
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
  double t1352;
  double t655;
  double t934;
  double t1510;
  double t1783;
  double t351;
  double t2040;
  double t2062;
  double t2141;
  double t1037;
  double t1518;
  double t1716;
  double t1742;
  double t2181;
  double t2235;
  double t2569;
  double t2575;
  double t2626;
  double t2651;
  double t2778;
  double t2838;
  double t3669;
  double t3670;
  double t3697;
  double t3814;
  double t3833;
  double t3659;
  double t3867;
  double t3914;
  double t3917;
  double t3944;
  double t3974;
  double t4012;
  double t4027;
  double t4032;
  double t4060;
  double t2988;
  double t3066;
  double t3130;
  double t3135;
  double t3490;
  double t3547;
  double t3565;
  double t3654;
  double t3928;
  double t4079;
  double t4085;
  double t4100;
  double t4124;
  double t4135;
  double t4449;
  double t4588;
  double t4617;
  double t4618;
  double t4191;
  double t4210;
  double t4238;
  double t4309;
  double t4409;
  double t4093;
  double t4137;
  double t4150;
  double t5294;
  double t5327;
  double t5366;
  double t4420;
  double t4710;
  double t4750;
  double t5404;
  double t5421;
  double t5450;
  double t5516;
  double t5541;
  double t5604;
  double t4886;
  double t5452;
  double t5642;
  double t5661;
  double t6036;
  double t6176;
  t1352 = Cos(var1[5]);
  t655 = Cos(var1[6]);
  t934 = Sin(var1[5]);
  t1510 = Sin(var1[6]);
  t1783 = Cos(var1[2]);
  t351 = Sin(var1[2]);
  t2040 = t1352*t655;
  t2062 = -1.*t934*t1510;
  t2141 = t2040 + t2062;
  t1037 = -1.*t655*t934;
  t1518 = -1.*t1352*t1510;
  t1716 = t1037 + t1518;
  t1742 = t351*t1716;
  t2181 = t1783*t2141;
  t2235 = t1742 + t2181;
  t2569 = t655*t934;
  t2575 = t1352*t1510;
  t2626 = t2569 + t2575;
  t2651 = t1783*t2626;
  t2778 = t351*t2141;
  t2838 = t2651 + t2778;
  t3669 = -1.*t655;
  t3670 = 1. + t3669;
  t3697 = -0.9063*t3670;
  t3814 = -1.078185*t655;
  t3833 = t3697 + t3814;
  t3659 = 0.4999*t934;
  t3867 = t3833*t934;
  t3914 = -0.17188499999999995*t1352*t1510;
  t3917 = t3659 + t3867 + t3914;
  t3944 = -1.*t1352;
  t3974 = 1. + t3944;
  t4012 = -0.4999*t3974;
  t4027 = t1352*t3833;
  t4032 = 0.17188499999999995*t934*t1510;
  t4060 = t4012 + t4027 + t4032;
  t2988 = t1783*t1716;
  t3066 = -1.*t351*t2141;
  t3130 = t2988 + t3066;
  t3135 = 0.85216*t2235*t3130;
  t3490 = -1.*t351*t2626;
  t3547 = t3490 + t2181;
  t3565 = 0.85216*t3547*t2838;
  t3654 = t3135 + t3565;
  t3928 = -1.*t3917*t2141;
  t4079 = -1.*t1716*t4060;
  t4085 = t3928 + t4079;
  t4100 = t3917*t2626;
  t4124 = t2141*t4060;
  t4135 = t4100 + t4124;
  t4449 = 0.4999*t1510;
  t4588 = t3833*t1510;
  t4617 = 0.17188499999999995*t655*t1510;
  t4618 = t4449 + t4588 + t4617;
  t4191 = 0.4999*t655;
  t4210 = t3833*t655;
  t4238 = Power(t1510,2);
  t4309 = -0.17188499999999995*t4238;
  t4409 = t4191 + t4210 + t4309;
  t4093 = 0.85216*t2838*t4085;
  t4137 = 0.85216*t2235*t4135;
  t4150 = t4093 + t4137;
  t5294 = 0.85216*t3547*t4085;
  t5327 = 0.85216*t3130*t4135;
  t5366 = t5294 + t5327;
  t4420 = 0.85216*t4409*t2235;
  t4710 = 0.85216*t4618*t2838;
  t4750 = t4420 + t4710;
  t5404 = 0.85216*t4618*t3547;
  t5421 = 0.85216*t4409*t3130;
  t5450 = t5404 + t5421;
  t5516 = 0.85216*t4618*t4085;
  t5541 = 0.85216*t4409*t4135;
  t5604 = 0.019286 + t5516 + t5541;
  t4886 = -0.14647352159999996*t2235;
  t5452 = -0.14647352159999996*t3130;
  t5642 = -0.14647352159999996*t4135;
  t5661 = 0.019286 + t5642;
  t6036 = -0.14647352159999996*t4409;
  t6176 = 0.019286 + t6036;
  p_output1[0]=0.85216*Power(t2235,2) + 0.85216*Power(t2838,2);
  p_output1[1]=t3654;
  p_output1[2]=t4150;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t4750;
  p_output1[6]=t4886;
  p_output1[7]=t3654;
  p_output1[8]=0.85216*Power(t3130,2) + 0.85216*Power(t3547,2);
  p_output1[9]=t5366;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5450;
  p_output1[13]=t5452;
  p_output1[14]=t4150;
  p_output1[15]=t5366;
  p_output1[16]=0.019286 + 0.85216*Power(t4085,2) + 0.85216*Power(t4135,2);
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t5604;
  p_output1[20]=t5661;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t4750;
  p_output1[36]=t5450;
  p_output1[37]=t5604;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.019286 + 0.85216*Power(t4409,2) + 0.85216*Power(t4618,2);
  p_output1[41]=t6176;
  p_output1[42]=t4886;
  p_output1[43]=t5452;
  p_output1[44]=t5661;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t6176;
  p_output1[48]=0.04446260126021599;
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

#include "Mmat5_amber3_PF.hh"

namespace SymFunction
{

void Mmat5_amber3_PF_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

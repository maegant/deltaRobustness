/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:24:57 GMT-08:00
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
  double t757;
  double t212;
  double t542;
  double t868;
  double t1518;
  double t1605;
  double t1716;
  double t655;
  double t934;
  double t1037;
  double t2319;
  double t2498;
  double t2569;
  double t2575;
  double t2626;
  double t2072;
  double t2121;
  double t2141;
  double t2181;
  double t2235;
  double t2308;
  double t1783;
  double t2040;
  double t2651;
  double t2845;
  double t2941;
  double t2988;
  double t3066;
  double t3135;
  double t3490;
  double t2945;
  double t3547;
  double t3565;
  double t3697;
  double t3814;
  double t3833;
  double t3654;
  double t3867;
  double t4012;
  double t4027;
  t757 = Cos(var1[2]);
  t212 = Cos(var1[5]);
  t542 = Sin(var1[2]);
  t868 = Sin(var1[5]);
  t1518 = t757*t212;
  t1605 = -1.*t542*t868;
  t1716 = t1518 + t1605;
  t655 = t212*t542;
  t934 = t757*t868;
  t1037 = t655 + t934;
  t2319 = -1.*t212;
  t2498 = 1. + t2319;
  t2569 = -0.4999*t2498;
  t2575 = -0.6493*t212;
  t2626 = t2569 + t2575;
  t2072 = -1.*t212*t542;
  t2121 = -1.*t757*t868;
  t2141 = t2072 + t2121;
  t2181 = 3.4261*t2141*t1716;
  t2235 = 3.4261*t1037*t1716;
  t2308 = t2181 + t2235;
  t1783 = Power(t1716,2);
  t2040 = 3.4261*t1783;
  t2651 = t2626*t868;
  t2845 = 0.14939999999999998*t212*t868;
  t2941 = t2651 + t2845;
  t2988 = t2626*t212;
  t3066 = Power(t868,2);
  t3135 = -0.14939999999999998*t3066;
  t3490 = t2988 + t3135;
  t2945 = 3.4261*t1037*t2941;
  t3547 = 3.4261*t1716*t3490;
  t3565 = t2945 + t3547;
  t3697 = 3.4261*t2941*t1716;
  t3814 = 3.4261*t2141*t3490;
  t3833 = t3697 + t3814;
  t3654 = -0.5118593399999999*t1716;
  t3867 = -0.5118593399999999*t2141;
  t4012 = -0.5118593399999999*t3490;
  t4027 = 0.0389 + t4012;
  p_output1[0]=3.4261*Power(t1037,2) + t2040;
  p_output1[1]=t2308;
  p_output1[2]=t3565;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t3654;
  p_output1[6]=0;
  p_output1[7]=t2308;
  p_output1[8]=t2040 + 3.4261*Power(t2141,2);
  p_output1[9]=t3833;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3867;
  p_output1[13]=0;
  p_output1[14]=t3565;
  p_output1[15]=t3833;
  p_output1[16]=0.0389 + 3.4261*Power(t2941,2) + 3.4261*Power(t3490,2);
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t4027;
  p_output1[20]=0;
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
  p_output1[35]=t3654;
  p_output1[36]=t3867;
  p_output1[37]=t4027;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.11537178539599996;
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

#include "Mmat4_amber3_PF.hh"

namespace SymFunction
{

void Mmat4_amber3_PF_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

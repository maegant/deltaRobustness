/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:12:12 GMT-08:00
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
  double t6;
  double t3;
  double t4;
  double t7;
  double t12;
  double t13;
  double t14;
  double t5;
  double t8;
  double t9;
  double t24;
  double t25;
  double t26;
  double t27;
  double t28;
  double t18;
  double t19;
  double t20;
  double t21;
  double t22;
  double t23;
  double t15;
  double t16;
  double t29;
  double t30;
  double t31;
  double t33;
  double t34;
  double t35;
  double t36;
  double t32;
  double t37;
  double t38;
  double t43;
  double t44;
  double t45;
  double t39;
  double t46;
  double t52;
  double t53;
  t6 = Cos(var1[2]);
  t3 = Cos(var1[3]);
  t4 = Sin(var1[2]);
  t7 = Sin(var1[3]);
  t12 = t6*t3;
  t13 = -1.*t4*t7;
  t14 = t12 + t13;
  t5 = t3*t4;
  t8 = t6*t7;
  t9 = t5 + t8;
  t24 = -1.*t3;
  t25 = 1. + t24;
  t26 = -0.4999*t25;
  t27 = -0.6493*t3;
  t28 = t26 + t27;
  t18 = -1.*t3*t4;
  t19 = -1.*t6*t7;
  t20 = t18 + t19;
  t21 = 3.4261*t20*t14;
  t22 = 3.4261*t9*t14;
  t23 = t21 + t22;
  t15 = Power(t14,2);
  t16 = 3.4261*t15;
  t29 = t28*t7;
  t30 = 0.14939999999999998*t3*t7;
  t31 = t29 + t30;
  t33 = t28*t3;
  t34 = Power(t7,2);
  t35 = -0.14939999999999998*t34;
  t36 = t33 + t35;
  t32 = 3.4261*t9*t31;
  t37 = 3.4261*t14*t36;
  t38 = t32 + t37;
  t43 = 3.4261*t31*t14;
  t44 = 3.4261*t20*t36;
  t45 = t43 + t44;
  t39 = -0.5118593399999999*t14;
  t46 = -0.5118593399999999*t20;
  t52 = -0.5118593399999999*t36;
  t53 = 0.0389 + t52;
  p_output1[0]=t16 + 3.4261*Power(t9,2);
  p_output1[1]=t23;
  p_output1[2]=t38;
  p_output1[3]=t39;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t23;
  p_output1[10]=t16 + 3.4261*Power(t20,2);
  p_output1[11]=t45;
  p_output1[12]=t46;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t38;
  p_output1[19]=t45;
  p_output1[20]=0.0389 + 3.4261*Power(t31,2) + 3.4261*Power(t36,2);
  p_output1[21]=t53;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t39;
  p_output1[28]=t46;
  p_output1[29]=t53;
  p_output1[30]=0.11537178539599996;
  p_output1[31]=0;
  p_output1[32]=0;
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
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat2_amber3_feet.hh"

namespace SymFunction
{

void Mmat2_amber3_feet_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:35 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t469;
  double t472;
  double t594;
  double t660;
  double t689;
  double t690;
  double t703;
  double t1221;
  double t1226;
  double t1431;
  double t1980;
  double t1996;
  double t2377;
  double t2663;
  double t2737;
  double t3304;
  double t3308;
  double t3776;
  double t3855;
  double t1633;
  double t1713;
  double t2053;
  double t2109;
  double t3011;
  double t3201;
  double t3345;
  double t3418;
  double t3870;
  double t3877;
  double t3879;
  double t4171;
  double t4291;
  double t4366;
  double t4375;
  double t4634;
  double t4669;
  double t4670;
  double t4676;
  double t4685;
  double t4687;
  double t4691;
  double t4707;
  double t4708;
  double t4733;
  double t4085;
  double t4121;
  double t4134;
  double t4139;
  double t4141;
  double t4143;
  double t4183;
  double t5175;
  double t5195;
  double t5197;
  double t5207;
  double t5221;
  double t5222;
  double t5226;
  double t5246;
  double t5248;
  double t5256;
  double t5257;
  double t5619;
  double t5620;
  double t5628;
  double t5633;
  double t5634;
  double t5636;
  double t5647;
  double t5648;
  double t5687;
  double t5717;
  double t5734;
  t469 = -1.*var3[1];
  t472 = var3[0] + t469;
  t594 = 1/t472;
  t660 = 0.8731249999999999*var1[2];
  t689 = 0.8731249999999999*var1[5];
  t690 = 0.46672499999999995*var1[6];
  t703 = t469 + t660 + t689 + t690;
  t1221 = -1.*t594*t703;
  t1226 = 1. + t1221;
  t1431 = Power(t1226,4);
  t1980 = Power(t472,-2);
  t1996 = Power(t1226,3);
  t2377 = Power(t472,-3);
  t2663 = Power(t1226,2);
  t2737 = Power(t703,2);
  t3304 = Power(t472,-4);
  t3308 = Power(t703,3);
  t3776 = Power(t472,-5);
  t3855 = Power(t703,4);
  t1633 = 4.365625*var2[0]*t594*t1431;
  t1713 = -4.365625*var2[4]*t594*t1431;
  t2053 = 17.4625*var2[4]*t1980*t1996*t703;
  t2109 = -17.4625*var2[8]*t1980*t1996*t703;
  t3011 = 26.193749999999998*var2[8]*t2377*t2663*t2737;
  t3201 = -26.193749999999998*var2[12]*t2377*t2663*t2737;
  t3345 = 17.4625*var2[12]*t3304*t1226*t3308;
  t3418 = -17.4625*var2[16]*t3304*t1226*t3308;
  t3870 = 4.365625*var2[16]*t3776*t3855;
  t3877 = -4.365625*var2[20]*t3776*t3855;
  t3879 = t1633 + t1713 + t2053 + t2109 + t3011 + t3201 + t3345 + t3418 + t3870 + t3877;
  t4171 = Power(t703,5);
  t4291 = Power(t472,-6);
  t4366 = -1.*t1980*t703;
  t4375 = t594 + t4366;
  t4634 = 4.365625*var2[1]*t594*t1431;
  t4669 = -4.365625*var2[5]*t594*t1431;
  t4670 = 17.4625*var2[5]*t1980*t1996*t703;
  t4676 = -17.4625*var2[9]*t1980*t1996*t703;
  t4685 = 26.193749999999998*var2[9]*t2377*t2663*t2737;
  t4687 = -26.193749999999998*var2[13]*t2377*t2663*t2737;
  t4691 = 17.4625*var2[13]*t3304*t1226*t3308;
  t4707 = -17.4625*var2[17]*t3304*t1226*t3308;
  t4708 = 4.365625*var2[17]*t3776*t3855;
  t4733 = -4.365625*var2[21]*t3776*t3855;
  t4085 = Power(t1226,5);
  t4121 = -1.*t4085;
  t4134 = -5.*t594*t1431*t703;
  t4139 = -10.*t1980*t1996*t2737;
  t4141 = -10.*t2377*t2663*t3308;
  t4143 = -5.*t3304*t1226*t3855;
  t4183 = -1.*t3776*t4171;
  t5175 = 4.365625*var2[2]*t594*t1431;
  t5195 = -4.365625*var2[6]*t594*t1431;
  t5197 = 17.4625*var2[6]*t1980*t1996*t703;
  t5207 = -17.4625*var2[10]*t1980*t1996*t703;
  t5221 = 26.193749999999998*var2[10]*t2377*t2663*t2737;
  t5222 = -26.193749999999998*var2[14]*t2377*t2663*t2737;
  t5226 = 17.4625*var2[14]*t3304*t1226*t3308;
  t5246 = -17.4625*var2[18]*t3304*t1226*t3308;
  t5248 = 4.365625*var2[18]*t3776*t3855;
  t5256 = -4.365625*var2[22]*t3776*t3855;
  t5257 = t5175 + t5195 + t5197 + t5207 + t5221 + t5222 + t5226 + t5246 + t5248 + t5256;
  t5619 = 4.365625*var2[3]*t594*t1431;
  t5620 = -4.365625*var2[7]*t594*t1431;
  t5628 = 17.4625*var2[7]*t1980*t1996*t703;
  t5633 = -17.4625*var2[11]*t1980*t1996*t703;
  t5634 = 26.193749999999998*var2[11]*t2377*t2663*t2737;
  t5636 = -26.193749999999998*var2[15]*t2377*t2663*t2737;
  t5647 = 17.4625*var2[15]*t3304*t1226*t3308;
  t5648 = -17.4625*var2[19]*t3304*t1226*t3308;
  t5687 = 4.365625*var2[19]*t3776*t3855;
  t5717 = -4.365625*var2[23]*t3776*t3855;
  t5734 = t5619 + t5620 + t5628 + t5633 + t5634 + t5636 + t5647 + t5648 + t5687 + t5717;
  p_output1[0]=t3879;
  p_output1[1]=t3879;
  p_output1[2]=1. + 2.3336249999999996*t1431*t594*var2[0] - 2.3336249999999996*t1431*t594*var2[4] + 9.334499999999998*t1980*t1996*t703*var2[4] + 14.00175*t2377*t2663*t2737*var2[8] - 9.334499999999998*t1980*t1996*t703*var2[8] - 14.00175*t2377*t2663*t2737*var2[12] + 9.334499999999998*t1226*t3304*t3308*var2[12] - 9.334499999999998*t1226*t3304*t3308*var2[16] + 2.3336249999999996*t3776*t3855*var2[16] - 2.3336249999999996*t3776*t3855*var2[20];
  p_output1[3]=t4121;
  p_output1[4]=t4134;
  p_output1[5]=t4139;
  p_output1[6]=t4141;
  p_output1[7]=t4143;
  p_output1[8]=t4183;
  p_output1[9]=-5.*t1431*t1980*t703*var2[0] - 20.*t1996*t2377*t2737*var2[4] + 5.*t1431*t1980*t703*var2[4] + 20.*t1996*t2377*t2737*var2[8] - 30.*t2663*t3304*t3308*var2[8] + 30.*t2663*t3304*t3308*var2[12] - 20.*t1226*t3776*t3855*var2[12] + 20.*t1226*t3776*t3855*var2[16] - 5.*t4171*t4291*var2[16] + 5.*t4171*t4291*var2[20];
  p_output1[10]=-5.*t1431*t4375*var2[0] + 5.*t1431*t594*var2[4] - 5.*t1431*t1980*t703*var2[4] - 20.*t1996*t4375*t594*t703*var2[4] - 20.*t1996*t2377*t2737*var2[8] - 30.*t1980*t2663*t2737*t4375*var2[8] + 20.*t1980*t1996*t703*var2[8] + 30.*t2377*t2663*t2737*var2[12] - 30.*t2663*t3304*t3308*var2[12] - 20.*t1226*t2377*t3308*t4375*var2[12] + 20.*t1226*t3304*t3308*var2[16] - 20.*t1226*t3776*t3855*var2[16] - 5.*t3304*t3855*t4375*var2[16] + 5.*t3776*t3855*var2[20] - 5.*t4171*t4291*var2[20];
  p_output1[11]=t4634 + t4669 + t4670 + t4676 + t4685 + t4687 + t4691 + t4707 + t4708 + t4733;
  p_output1[12]=1. + t4634 + t4669 + t4670 + t4676 + t4685 + t4687 + t4691 + t4707 + t4708 + t4733;
  p_output1[13]=2.3336249999999996*t1431*t594*var2[1] - 2.3336249999999996*t1431*t594*var2[5] + 9.334499999999998*t1980*t1996*t703*var2[5] + 14.00175*t2377*t2663*t2737*var2[9] - 9.334499999999998*t1980*t1996*t703*var2[9] - 14.00175*t2377*t2663*t2737*var2[13] + 9.334499999999998*t1226*t3304*t3308*var2[13] - 9.334499999999998*t1226*t3304*t3308*var2[17] + 2.3336249999999996*t3776*t3855*var2[17] - 2.3336249999999996*t3776*t3855*var2[21];
  p_output1[14]=t4121;
  p_output1[15]=t4134;
  p_output1[16]=t4139;
  p_output1[17]=t4141;
  p_output1[18]=t4143;
  p_output1[19]=t4183;
  p_output1[20]=-5.*t1431*t1980*t703*var2[1] - 20.*t1996*t2377*t2737*var2[5] + 5.*t1431*t1980*t703*var2[5] + 20.*t1996*t2377*t2737*var2[9] - 30.*t2663*t3304*t3308*var2[9] + 30.*t2663*t3304*t3308*var2[13] - 20.*t1226*t3776*t3855*var2[13] + 20.*t1226*t3776*t3855*var2[17] - 5.*t4171*t4291*var2[17] + 5.*t4171*t4291*var2[21];
  p_output1[21]=-5.*t1431*t4375*var2[1] + 5.*t1431*t594*var2[5] - 5.*t1431*t1980*t703*var2[5] - 20.*t1996*t4375*t594*t703*var2[5] - 20.*t1996*t2377*t2737*var2[9] - 30.*t1980*t2663*t2737*t4375*var2[9] + 20.*t1980*t1996*t703*var2[9] + 30.*t2377*t2663*t2737*var2[13] - 30.*t2663*t3304*t3308*var2[13] - 20.*t1226*t2377*t3308*t4375*var2[13] + 20.*t1226*t3304*t3308*var2[17] - 20.*t1226*t3776*t3855*var2[17] - 5.*t3304*t3855*t4375*var2[17] + 5.*t3776*t3855*var2[21] - 5.*t4171*t4291*var2[21];
  p_output1[22]=t5257;
  p_output1[23]=1.;
  p_output1[24]=t5257;
  p_output1[25]=2.3336249999999996*t1431*t594*var2[2] - 2.3336249999999996*t1431*t594*var2[6] + 9.334499999999998*t1980*t1996*t703*var2[6] + 14.00175*t2377*t2663*t2737*var2[10] - 9.334499999999998*t1980*t1996*t703*var2[10] - 14.00175*t2377*t2663*t2737*var2[14] + 9.334499999999998*t1226*t3304*t3308*var2[14] - 9.334499999999998*t1226*t3304*t3308*var2[18] + 2.3336249999999996*t3776*t3855*var2[18] - 2.3336249999999996*t3776*t3855*var2[22];
  p_output1[26]=t4121;
  p_output1[27]=t4134;
  p_output1[28]=t4139;
  p_output1[29]=t4141;
  p_output1[30]=t4143;
  p_output1[31]=t4183;
  p_output1[32]=-5.*t1431*t1980*t703*var2[2] - 20.*t1996*t2377*t2737*var2[6] + 5.*t1431*t1980*t703*var2[6] + 20.*t1996*t2377*t2737*var2[10] - 30.*t2663*t3304*t3308*var2[10] + 30.*t2663*t3304*t3308*var2[14] - 20.*t1226*t3776*t3855*var2[14] + 20.*t1226*t3776*t3855*var2[18] - 5.*t4171*t4291*var2[18] + 5.*t4171*t4291*var2[22];
  p_output1[33]=-5.*t1431*t4375*var2[2] + 5.*t1431*t594*var2[6] - 5.*t1431*t1980*t703*var2[6] - 20.*t1996*t4375*t594*t703*var2[6] - 20.*t1996*t2377*t2737*var2[10] - 30.*t1980*t2663*t2737*t4375*var2[10] + 20.*t1980*t1996*t703*var2[10] + 30.*t2377*t2663*t2737*var2[14] - 30.*t2663*t3304*t3308*var2[14] - 20.*t1226*t2377*t3308*t4375*var2[14] + 20.*t1226*t3304*t3308*var2[18] - 20.*t1226*t3776*t3855*var2[18] - 5.*t3304*t3855*t4375*var2[18] + 5.*t3776*t3855*var2[22] - 5.*t4171*t4291*var2[22];
  p_output1[34]=t5734;
  p_output1[35]=1.;
  p_output1[36]=t5734;
  p_output1[37]=2.3336249999999996*t1431*t594*var2[3] - 2.3336249999999996*t1431*t594*var2[7] + 9.334499999999998*t1980*t1996*t703*var2[7] + 14.00175*t2377*t2663*t2737*var2[11] - 9.334499999999998*t1980*t1996*t703*var2[11] - 14.00175*t2377*t2663*t2737*var2[15] + 9.334499999999998*t1226*t3304*t3308*var2[15] - 9.334499999999998*t1226*t3304*t3308*var2[19] + 2.3336249999999996*t3776*t3855*var2[19] - 2.3336249999999996*t3776*t3855*var2[23];
  p_output1[38]=t4121;
  p_output1[39]=t4134;
  p_output1[40]=t4139;
  p_output1[41]=t4141;
  p_output1[42]=t4143;
  p_output1[43]=t4183;
  p_output1[44]=-5.*t1431*t1980*t703*var2[3] - 20.*t1996*t2377*t2737*var2[7] + 5.*t1431*t1980*t703*var2[7] + 20.*t1996*t2377*t2737*var2[11] - 30.*t2663*t3304*t3308*var2[11] + 30.*t2663*t3304*t3308*var2[15] - 20.*t1226*t3776*t3855*var2[15] + 20.*t1226*t3776*t3855*var2[19] - 5.*t4171*t4291*var2[19] + 5.*t4171*t4291*var2[23];
  p_output1[45]=-5.*t1431*t4375*var2[3] + 5.*t1431*t594*var2[7] - 5.*t1431*t1980*t703*var2[7] - 20.*t1996*t4375*t594*t703*var2[7] - 20.*t1996*t2377*t2737*var2[11] - 30.*t1980*t2663*t2737*t4375*var2[11] + 20.*t1980*t1996*t703*var2[11] + 30.*t2377*t2663*t2737*var2[15] - 30.*t2663*t3304*t3308*var2[15] - 20.*t1226*t2377*t3308*t4375*var2[15] + 20.*t1226*t3304*t3308*var2[19] - 20.*t1226*t3776*t3855*var2[19] - 5.*t3304*t3855*t4375*var2[19] + 5.*t3776*t3855*var2[23] - 5.*t4171*t4291*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 46, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_y_position_RightSS.hh"

namespace RightSS
{

void J_y_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE

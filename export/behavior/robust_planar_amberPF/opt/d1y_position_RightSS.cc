/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:37 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t214;
  double t270;
  double t472;
  double t660;
  double t689;
  double t690;
  double t709;
  double t820;
  double t873;
  double t903;
  double t1146;
  double t1148;
  double t1179;
  double t1551;
  double t1594;
  double t1713;
  double t1797;
  double t2109;
  double t2241;
  double t3059;
  double t3096;
  double t3109;
  double t3112;
  double t3143;
  double t3154;
  double t3168;
  double t3201;
  double t3262;
  double t3345;
  double t3418;
  double t4116;
  double t4184;
  double t4187;
  double t4191;
  double t4196;
  double t4200;
  double t4220;
  double t4221;
  double t4223;
  double t4228;
  double t4309;
  double t4568;
  double t4575;
  double t4617;
  double t4628;
  double t4632;
  double t4633;
  double t4738;
  double t4742;
  double t4746;
  double t4750;
  double t4753;
  double t4936;
  double t4949;
  double t4999;
  double t5000;
  double t5013;
  double t5021;
  double t5025;
  double t5026;
  double t5042;
  double t5043;
  double t5053;
  t214 = -1.*var4[1];
  t270 = var4[0] + t214;
  t472 = 1/t270;
  t660 = 0.8731249999999999*var1[2];
  t689 = 0.8731249999999999*var1[5];
  t690 = 0.46672499999999995*var1[6];
  t709 = t214 + t660 + t689 + t690;
  t820 = -1.*t472*t709;
  t873 = 1. + t820;
  t903 = Power(t873,4);
  t1146 = Power(t270,-2);
  t1148 = Power(t873,3);
  t1179 = Power(t270,-3);
  t1551 = Power(t873,2);
  t1594 = Power(t709,2);
  t1713 = Power(t270,-4);
  t1797 = Power(t709,3);
  t2109 = Power(t270,-5);
  t2241 = Power(t709,4);
  t3059 = -4.365625*var3[0]*t472*t903;
  t3096 = 4.365625*var3[4]*t472*t903;
  t3109 = -17.4625*var3[4]*t1146*t1148*t709;
  t3112 = 17.4625*var3[8]*t1146*t1148*t709;
  t3143 = -26.193749999999998*var3[8]*t1179*t1551*t1594;
  t3154 = 26.193749999999998*var3[12]*t1179*t1551*t1594;
  t3168 = -17.4625*var3[12]*t1713*t873*t1797;
  t3201 = 17.4625*var3[16]*t1713*t873*t1797;
  t3262 = -4.365625*var3[16]*t2109*t2241;
  t3345 = 4.365625*var3[20]*t2109*t2241;
  t3418 = t3059 + t3096 + t3109 + t3112 + t3143 + t3154 + t3168 + t3201 + t3262 + t3345;
  t4116 = -4.365625*var3[1]*t472*t903;
  t4184 = 4.365625*var3[5]*t472*t903;
  t4187 = -17.4625*var3[5]*t1146*t1148*t709;
  t4191 = 17.4625*var3[9]*t1146*t1148*t709;
  t4196 = -26.193749999999998*var3[9]*t1179*t1551*t1594;
  t4200 = 26.193749999999998*var3[13]*t1179*t1551*t1594;
  t4220 = -17.4625*var3[13]*t1713*t873*t1797;
  t4221 = 17.4625*var3[17]*t1713*t873*t1797;
  t4223 = -4.365625*var3[17]*t2109*t2241;
  t4228 = 4.365625*var3[21]*t2109*t2241;
  t4309 = t4116 + t4184 + t4187 + t4191 + t4196 + t4200 + t4220 + t4221 + t4223 + t4228;
  t4568 = -4.365625*var3[2]*t472*t903;
  t4575 = 4.365625*var3[6]*t472*t903;
  t4617 = -17.4625*var3[6]*t1146*t1148*t709;
  t4628 = 17.4625*var3[10]*t1146*t1148*t709;
  t4632 = -26.193749999999998*var3[10]*t1179*t1551*t1594;
  t4633 = 26.193749999999998*var3[14]*t1179*t1551*t1594;
  t4738 = -17.4625*var3[14]*t1713*t873*t1797;
  t4742 = 17.4625*var3[18]*t1713*t873*t1797;
  t4746 = -4.365625*var3[18]*t2109*t2241;
  t4750 = 4.365625*var3[22]*t2109*t2241;
  t4753 = t4568 + t4575 + t4617 + t4628 + t4632 + t4633 + t4738 + t4742 + t4746 + t4750;
  t4936 = -4.365625*var3[3]*t472*t903;
  t4949 = 4.365625*var3[7]*t472*t903;
  t4999 = -17.4625*var3[7]*t1146*t1148*t709;
  t5000 = 17.4625*var3[11]*t1146*t1148*t709;
  t5013 = -26.193749999999998*var3[11]*t1179*t1551*t1594;
  t5021 = 26.193749999999998*var3[15]*t1179*t1551*t1594;
  t5025 = -17.4625*var3[15]*t1713*t873*t1797;
  t5026 = 17.4625*var3[19]*t1713*t873*t1797;
  t5042 = -4.365625*var3[19]*t2109*t2241;
  t5043 = 4.365625*var3[23]*t2109*t2241;
  t5053 = t4936 + t4949 + t4999 + t5000 + t5013 + t5021 + t5025 + t5026 + t5042 + t5043;
  p_output1[0]=-1.*t3418*var2[2] - 1.*t3418*var2[5] + var2[6] - 1.*var2[6]*(-2.3336249999999996*t472*t903*var3[0] - 9.334499999999998*t1146*t1148*t709*var3[4] + 2.3336249999999996*t472*t903*var3[4] - 14.00175*t1179*t1551*t1594*var3[8] + 9.334499999999998*t1146*t1148*t709*var3[8] + 14.00175*t1179*t1551*t1594*var3[12] - 9.334499999999998*t1713*t1797*t873*var3[12] - 2.3336249999999996*t2109*t2241*var3[16] + 9.334499999999998*t1713*t1797*t873*var3[16] + 2.3336249999999996*t2109*t2241*var3[20]);
  p_output1[1]=-1.*t4309*var2[2] + var2[5] - 1.*t4309*var2[5] - 1.*var2[6]*(-2.3336249999999996*t472*t903*var3[1] - 9.334499999999998*t1146*t1148*t709*var3[5] + 2.3336249999999996*t472*t903*var3[5] - 14.00175*t1179*t1551*t1594*var3[9] + 9.334499999999998*t1146*t1148*t709*var3[9] + 14.00175*t1179*t1551*t1594*var3[13] - 9.334499999999998*t1713*t1797*t873*var3[13] - 2.3336249999999996*t2109*t2241*var3[17] + 9.334499999999998*t1713*t1797*t873*var3[17] + 2.3336249999999996*t2109*t2241*var3[21]);
  p_output1[2]=-1.*t4753*var2[2] + var2[3] - 1.*t4753*var2[5] - 1.*var2[6]*(-2.3336249999999996*t472*t903*var3[2] - 9.334499999999998*t1146*t1148*t709*var3[6] + 2.3336249999999996*t472*t903*var3[6] - 14.00175*t1179*t1551*t1594*var3[10] + 9.334499999999998*t1146*t1148*t709*var3[10] + 14.00175*t1179*t1551*t1594*var3[14] - 9.334499999999998*t1713*t1797*t873*var3[14] - 2.3336249999999996*t2109*t2241*var3[18] + 9.334499999999998*t1713*t1797*t873*var3[18] + 2.3336249999999996*t2109*t2241*var3[22]);
  p_output1[3]=-1.*t5053*var2[2] + var2[4] - 1.*t5053*var2[5] - 1.*var2[6]*(-2.3336249999999996*t472*t903*var3[3] - 9.334499999999998*t1146*t1148*t709*var3[7] + 2.3336249999999996*t472*t903*var3[7] - 14.00175*t1179*t1551*t1594*var3[11] + 9.334499999999998*t1146*t1148*t709*var3[11] + 14.00175*t1179*t1551*t1594*var3[15] - 9.334499999999998*t1713*t1797*t873*var3[15] - 2.3336249999999996*t2109*t2241*var3[19] + 9.334499999999998*t1713*t1797*t873*var3[19] + 2.3336249999999996*t2109*t2241*var3[23]);
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "d1y_position_RightSS.hh"

namespace RightSS
{

void d1y_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

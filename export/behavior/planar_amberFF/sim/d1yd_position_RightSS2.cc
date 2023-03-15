/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:01 GMT-08:00
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
  double t175;
  double t359;
  double t379;
  double t905;
  double t932;
  double t953;
  double t1044;
  double t1049;
  double t1312;
  double t1753;
  double t2719;
  double t2955;
  double t3036;
  double t3185;
  double t3204;
  double t3578;
  double t3579;
  double t3673;
  double t3677;
  double t3990;
  double t4013;
  double t4123;
  double t4138;
  double t4469;
  double t5134;
  double t5238;
  double t5293;
  double t5297;
  double t5375;
  double t5379;
  double t7481;
  double t7510;
  double t7521;
  double t7542;
  double t7550;
  double t7566;
  double t7574;
  double t7575;
  double t7579;
  double t7588;
  double t7591;
  double t7645;
  double t7647;
  double t7649;
  double t7650;
  double t7651;
  double t7654;
  double t7655;
  double t7658;
  double t7661;
  double t7662;
  double t7664;
  double t7698;
  double t7699;
  double t7701;
  double t7702;
  double t7703;
  double t7705;
  double t7709;
  double t7711;
  double t7712;
  double t7714;
  double t7715;
  double t7739;
  double t7740;
  double t7741;
  double t7742;
  double t7743;
  double t7744;
  double t7745;
  double t7746;
  double t7747;
  double t7748;
  double t7749;
  t175 = -1.*var4[1];
  t359 = var4[0] + t175;
  t379 = 1/t359;
  t905 = 0.8128*var1[2];
  t932 = 0.8128*var1[6];
  t953 = 0.4064*var1[7];
  t1044 = 0. + t175 + t905 + t932 + t953;
  t1049 = -1.*t379*t1044;
  t1312 = 1. + t1049;
  t1753 = Power(t1312,4);
  t2719 = Power(t359,-2);
  t2955 = Power(t1312,3);
  t3036 = Power(t359,-3);
  t3185 = Power(t1312,2);
  t3204 = Power(t1044,2);
  t3578 = Power(t359,-4);
  t3579 = Power(t1044,3);
  t3673 = Power(t359,-5);
  t3677 = Power(t1044,4);
  t3990 = -4.064*var3[0]*t379*t1753;
  t4013 = 4.064*var3[5]*t379*t1753;
  t4123 = -16.256*var3[5]*t2719*t2955*t1044;
  t4138 = 16.256*var3[10]*t2719*t2955*t1044;
  t4469 = -24.383999999999997*var3[10]*t3036*t3185*t3204;
  t5134 = 24.383999999999997*var3[15]*t3036*t3185*t3204;
  t5238 = -16.256*var3[15]*t3578*t1312*t3579;
  t5293 = 16.256*var3[20]*t3578*t1312*t3579;
  t5297 = -4.064*var3[20]*t3673*t3677;
  t5375 = 4.064*var3[25]*t3673*t3677;
  t5379 = t3990 + t4013 + t4123 + t4138 + t4469 + t5134 + t5238 + t5293 + t5297 + t5375;
  t7481 = -4.064*var3[1]*t379*t1753;
  t7510 = 4.064*var3[6]*t379*t1753;
  t7521 = -16.256*var3[6]*t2719*t2955*t1044;
  t7542 = 16.256*var3[11]*t2719*t2955*t1044;
  t7550 = -24.383999999999997*var3[11]*t3036*t3185*t3204;
  t7566 = 24.383999999999997*var3[16]*t3036*t3185*t3204;
  t7574 = -16.256*var3[16]*t3578*t1312*t3579;
  t7575 = 16.256*var3[21]*t3578*t1312*t3579;
  t7579 = -4.064*var3[21]*t3673*t3677;
  t7588 = 4.064*var3[26]*t3673*t3677;
  t7591 = t7481 + t7510 + t7521 + t7542 + t7550 + t7566 + t7574 + t7575 + t7579 + t7588;
  t7645 = -4.064*var3[2]*t379*t1753;
  t7647 = 4.064*var3[7]*t379*t1753;
  t7649 = -16.256*var3[7]*t2719*t2955*t1044;
  t7650 = 16.256*var3[12]*t2719*t2955*t1044;
  t7651 = -24.383999999999997*var3[12]*t3036*t3185*t3204;
  t7654 = 24.383999999999997*var3[17]*t3036*t3185*t3204;
  t7655 = -16.256*var3[17]*t3578*t1312*t3579;
  t7658 = 16.256*var3[22]*t3578*t1312*t3579;
  t7661 = -4.064*var3[22]*t3673*t3677;
  t7662 = 4.064*var3[27]*t3673*t3677;
  t7664 = t7645 + t7647 + t7649 + t7650 + t7651 + t7654 + t7655 + t7658 + t7661 + t7662;
  t7698 = -4.064*var3[3]*t379*t1753;
  t7699 = 4.064*var3[8]*t379*t1753;
  t7701 = -16.256*var3[8]*t2719*t2955*t1044;
  t7702 = 16.256*var3[13]*t2719*t2955*t1044;
  t7703 = -24.383999999999997*var3[13]*t3036*t3185*t3204;
  t7705 = 24.383999999999997*var3[18]*t3036*t3185*t3204;
  t7709 = -16.256*var3[18]*t3578*t1312*t3579;
  t7711 = 16.256*var3[23]*t3578*t1312*t3579;
  t7712 = -4.064*var3[23]*t3673*t3677;
  t7714 = 4.064*var3[28]*t3673*t3677;
  t7715 = t7698 + t7699 + t7701 + t7702 + t7703 + t7705 + t7709 + t7711 + t7712 + t7714;
  t7739 = -4.064*var3[4]*t379*t1753;
  t7740 = 4.064*var3[9]*t379*t1753;
  t7741 = -16.256*var3[9]*t2719*t2955*t1044;
  t7742 = 16.256*var3[14]*t2719*t2955*t1044;
  t7743 = -24.383999999999997*var3[14]*t3036*t3185*t3204;
  t7744 = 24.383999999999997*var3[19]*t3036*t3185*t3204;
  t7745 = -16.256*var3[19]*t3578*t1312*t3579;
  t7746 = 16.256*var3[24]*t3578*t1312*t3579;
  t7747 = -4.064*var3[24]*t3673*t3677;
  t7748 = 4.064*var3[29]*t3673*t3677;
  t7749 = t7739 + t7740 + t7741 + t7742 + t7743 + t7744 + t7745 + t7746 + t7747 + t7748;
  p_output1[0]=t5379*var2[2] + t5379*var2[6] + var2[7]*(-2.032*t1753*t379*var3[0] - 8.128*t1044*t2719*t2955*var3[5] + 2.032*t1753*t379*var3[5] + 8.128*t1044*t2719*t2955*var3[10] - 12.191999999999998*t3036*t3185*t3204*var3[10] + 12.191999999999998*t3036*t3185*t3204*var3[15] - 8.128*t1312*t3578*t3579*var3[15] + 8.128*t1312*t3578*t3579*var3[20] - 2.032*t3673*t3677*var3[20] + 2.032*t3673*t3677*var3[25]);
  p_output1[1]=t7591*var2[2] + t7591*var2[6] + var2[7]*(-2.032*t1753*t379*var3[1] - 8.128*t1044*t2719*t2955*var3[6] + 2.032*t1753*t379*var3[6] + 8.128*t1044*t2719*t2955*var3[11] - 12.191999999999998*t3036*t3185*t3204*var3[11] + 12.191999999999998*t3036*t3185*t3204*var3[16] - 8.128*t1312*t3578*t3579*var3[16] + 8.128*t1312*t3578*t3579*var3[21] - 2.032*t3673*t3677*var3[21] + 2.032*t3673*t3677*var3[26]);
  p_output1[2]=t7664*var2[2] + t7664*var2[6] + var2[7]*(-2.032*t1753*t379*var3[2] - 8.128*t1044*t2719*t2955*var3[7] + 2.032*t1753*t379*var3[7] + 8.128*t1044*t2719*t2955*var3[12] - 12.191999999999998*t3036*t3185*t3204*var3[12] + 12.191999999999998*t3036*t3185*t3204*var3[17] - 8.128*t1312*t3578*t3579*var3[17] + 8.128*t1312*t3578*t3579*var3[22] - 2.032*t3673*t3677*var3[22] + 2.032*t3673*t3677*var3[27]);
  p_output1[3]=t7715*var2[2] + t7715*var2[6] + var2[7]*(-2.032*t1753*t379*var3[3] - 8.128*t1044*t2719*t2955*var3[8] + 2.032*t1753*t379*var3[8] + 8.128*t1044*t2719*t2955*var3[13] - 12.191999999999998*t3036*t3185*t3204*var3[13] + 12.191999999999998*t3036*t3185*t3204*var3[18] - 8.128*t1312*t3578*t3579*var3[18] + 8.128*t1312*t3578*t3579*var3[23] - 2.032*t3673*t3677*var3[23] + 2.032*t3673*t3677*var3[28]);
  p_output1[4]=t7749*var2[2] + t7749*var2[6] + var2[7]*(-2.032*t1753*t379*var3[4] - 8.128*t1044*t2719*t2955*var3[9] + 2.032*t1753*t379*var3[9] + 8.128*t1044*t2719*t2955*var3[14] - 12.191999999999998*t3036*t3185*t3204*var3[14] + 12.191999999999998*t3036*t3185*t3204*var3[19] - 8.128*t1312*t3578*t3579*var3[19] + 8.128*t1312*t3578*t3579*var3[24] - 2.032*t3673*t3677*var3[24] + 2.032*t3673*t3677*var3[29]);
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "d1yd_position_RightSS2.hh"

namespace SymFunction
{

void d1yd_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

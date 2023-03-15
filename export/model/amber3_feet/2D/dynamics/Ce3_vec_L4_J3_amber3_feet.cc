/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:22 GMT-08:00
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
  double t11;
  double t118;
  double t991;
  double t1042;
  double t1143;
  double t1144;
  double t1378;
  double t1590;
  double t1591;
  double t1654;
  double t1670;
  double t1907;
  double t195;
  double t349;
  double t469;
  double t1061;
  double t1822;
  double t1899;
  double t2143;
  double t2144;
  double t2266;
  double t2328;
  double t2693;
  double t2721;
  double t2763;
  double t2903;
  double t3078;
  double t3179;
  double t3233;
  double t3906;
  double t3998;
  double t4002;
  double t4266;
  double t2835;
  double t3297;
  double t3903;
  double t3722;
  double t3750;
  double t3795;
  double t3400;
  double t3422;
  double t3425;
  double t3452;
  double t3468;
  double t3660;
  double t4084;
  double t4108;
  double t56;
  double t1906;
  double t2531;
  double t2568;
  double t4422;
  double t4444;
  double t4476;
  double t3310;
  double t3875;
  double t3877;
  double t4687;
  double t4715;
  double t4734;
  double t5062;
  double t5063;
  double t5064;
  double t5070;
  double t5127;
  double t5183;
  double t5191;
  double t5197;
  double t5205;
  double t5206;
  double t5211;
  double t5266;
  double t5278;
  double t5300;
  double t5816;
  double t5876;
  double t5945;
  double t5948;
  double t5950;
  double t5967;
  double t5980;
  double t4813;
  double t4251;
  double t4526;
  double t4579;
  double t4908;
  double t4629;
  double t4646;
  double t4649;
  double t8001;
  double t8165;
  double t8361;
  double t8365;
  double t8386;
  double t8398;
  double t8451;
  double t8452;
  double t8453;
  double t5471;
  double t5488;
  double t5568;
  double t5736;
  double t8443;
  double t8444;
  double t8445;
  double t8350;
  double t8422;
  double t8428;
  double t5311;
  double t5341;
  double t5348;
  double t5361;
  double t5386;
  double t8436;
  double t8448;
  double t8454;
  double t8455;
  double t8456;
  double t8457;
  double t8460;
  double t8461;
  double t8467;
  double t6243;
  double t6227;
  double t6257;
  double t6303;
  double t8476;
  double t8477;
  double t8482;
  double t8484;
  double t8485;
  double t6082;
  double t6112;
  double t6191;
  double t6218;
  double t7406;
  double t7412;
  double t7444;
  double t7121;
  double t7138;
  double t7140;
  double t8574;
  double t8575;
  double t8577;
  double t8578;
  double t8576;
  double t8579;
  double t8580;
  double t8582;
  double t8583;
  double t8584;
  double t8581;
  double t8587;
  double t8591;
  double t8492;
  double t8503;
  double t8509;
  double t8511;
  double t8519;
  double t8603;
  double t8605;
  double t8608;
  double t8535;
  double t8541;
  double t8542;
  double t8545;
  double t8549;
  double t8556;
  double t8559;
  double t8560;
  double t8561;
  double t8562;
  t11 = Sin(var1[3]);
  t118 = Cos(var1[4]);
  t991 = Cos(var1[5]);
  t1042 = Sin(var1[4]);
  t1143 = -1.*t991;
  t1144 = 1. + t1143;
  t1378 = -1.3127*t1144;
  t1590 = -1.3127*t991;
  t1591 = Sin(var1[5]);
  t1654 = -0.06*t1591;
  t1670 = t1378 + t1590 + t1654;
  t1907 = Cos(var1[3]);
  t195 = -1.*t118;
  t349 = 1. + t195;
  t469 = -0.9063*t349;
  t1061 = -0.06*t991*t1042;
  t1822 = t118*t1670;
  t1899 = t469 + t1061 + t1822;
  t2143 = 0.06*t118*t991;
  t2144 = 0.9063*t1042;
  t2266 = t1042*t1670;
  t2328 = t2143 + t2144 + t2266;
  t2693 = -1.*t991*t1042;
  t2721 = -1.*t118*t1591;
  t2763 = t2693 + t2721;
  t2903 = t118*t991;
  t3078 = -1.*t1042*t1591;
  t3179 = t2903 + t3078;
  t3233 = t1907*t3179;
  t3906 = t991*t1042;
  t3998 = t118*t1591;
  t4002 = t3906 + t3998;
  t4266 = Sin(var1[2]);
  t2835 = t11*t2763;
  t3297 = t2835 + t3233;
  t3903 = Cos(var1[2]);
  t3722 = t1907*t2763;
  t3750 = -1.*t11*t3179;
  t3795 = t3722 + t3750;
  t3400 = -1.*t1907;
  t3422 = 1. + t3400;
  t3425 = -0.4999*t3422;
  t3452 = t1907*t1899;
  t3468 = -1.*t11*t2328;
  t3660 = t3425 + t3452 + t3468;
  t4084 = -1.*t11*t4002;
  t4108 = t4084 + t3233;
  t56 = 0.4999*t11;
  t1906 = t11*t1899;
  t2531 = t1907*t2328;
  t2568 = t56 + t1906 + t2531;
  t4422 = t1907*t4002;
  t4444 = t11*t3179;
  t4476 = t4422 + t4444;
  t3310 = -1.*t2568*t3297;
  t3875 = -1.*t3660*t3795;
  t3877 = t3310 + t3875;
  t4687 = t3660*t4108;
  t4715 = t2568*t4476;
  t4734 = t4687 + t4715;
  t5062 = -1.*t11*t2763;
  t5063 = -1.*t1907*t3179;
  t5064 = t5062 + t5063;
  t5070 = -1.*t3660*t5064;
  t5127 = 0.4999*t1907;
  t5183 = t5127 + t3452 + t3468;
  t5191 = -1.*t5183*t3297;
  t5197 = -0.4999*t11;
  t5205 = -1.*t11*t1899;
  t5206 = -1.*t1907*t2328;
  t5211 = t5197 + t5205 + t5206;
  t5266 = -1.*t5211*t3795;
  t5278 = -1.*t2568*t3795;
  t5300 = t5070 + t5191 + t5266 + t5278;
  t5816 = t5211*t4108;
  t5876 = t2568*t4108;
  t5945 = -1.*t1907*t4002;
  t5948 = t5945 + t3750;
  t5950 = t3660*t5948;
  t5967 = t5183*t4476;
  t5980 = t5816 + t5876 + t5950 + t5967;
  t4813 = -1.*t4266*t4108;
  t4251 = t3903*t4108;
  t4526 = -1.*t4266*t4476;
  t4579 = t4251 + t4526;
  t4908 = -1.*t4266*t3795;
  t4629 = -1.*t4266*t3297;
  t4646 = t3903*t3795;
  t4649 = t4629 + t4646;
  t8001 = 0.9063*t118;
  t8165 = t8001 + t1061 + t1822;
  t8361 = -0.06*t118*t991;
  t8365 = -0.9063*t1042;
  t8386 = -1.*t1042*t1670;
  t8398 = t8361 + t8365 + t8386;
  t8451 = -1.*t118*t991;
  t8452 = t1042*t1591;
  t8453 = t8451 + t8452;
  t5471 = 0.9063*t991;
  t5488 = t991*t1670;
  t5568 = 0.06*t991*t1591;
  t5736 = t5471 + t5488 + t5568;
  t8443 = -1.*t11*t8165;
  t8444 = t1907*t8398;
  t8445 = t8443 + t8444;
  t8350 = t1907*t8165;
  t8422 = t11*t8398;
  t8428 = t8350 + t8422;
  t5311 = Power(t991,2);
  t5341 = -0.06*t5311;
  t5348 = 0.9063*t1591;
  t5361 = t1670*t1591;
  t5386 = t5341 + t5348 + t5361;
  t8436 = -1.*t8428*t3297;
  t8448 = -1.*t8445*t3795;
  t8454 = t1907*t8453;
  t8455 = t5062 + t8454;
  t8456 = -1.*t3660*t8455;
  t8457 = t11*t8453;
  t8460 = t3722 + t8457;
  t8461 = -1.*t2568*t8460;
  t8467 = t8436 + t8448 + t8456 + t8461;
  t6243 = 0.4999*t3179;
  t6227 = t2328*t4002;
  t6257 = t1899*t3179;
  t6303 = t6227 + t6243 + t6257;
  t8476 = t2568*t3297;
  t8477 = t8445*t4108;
  t8482 = t3660*t3795;
  t8484 = t8428*t4476;
  t8485 = t8476 + t8477 + t8482 + t8484;
  t6082 = -1.*t1899*t2763;
  t6112 = 0.4999*t4002;
  t6191 = -1.*t2328*t3179;
  t6218 = t6082 + t6112 + t6191;
  t7406 = t3903*t3297;
  t7412 = t4266*t3795;
  t7444 = t7406 + t7412;
  t7121 = t4266*t4108;
  t7138 = t3903*t4476;
  t7140 = t7121 + t7138;
  t8574 = -0.06*t118*t1591;
  t8575 = t1061 + t8574;
  t8577 = 0.06*t1042*t1591;
  t8578 = t8361 + t8577;
  t8576 = -1.*t11*t8575;
  t8579 = t1907*t8578;
  t8580 = t8576 + t8579;
  t8582 = t1907*t8575;
  t8583 = t11*t8578;
  t8584 = t8582 + t8583;
  t8581 = -1.*t3795*t8580;
  t8587 = -1.*t3297*t8584;
  t8591 = t8581 + t8587 + t8456 + t8461;
  t8492 = -1.*t2328*t2763;
  t8503 = -1.*t1899*t8453;
  t8509 = 0.4999*t2763;
  t8511 = t1899*t2763;
  t8519 = t2328*t3179;
  t8603 = t4108*t8580;
  t8605 = t4476*t8584;
  t8608 = t8476 + t8482 + t8603 + t8605;
  t8535 = 1.142857*t7444*t3877;
  t8541 = t4266*t8455;
  t8542 = t3903*t8460;
  t8545 = t8541 + t8542;
  t8549 = 1.142857*t4734*t8545;
  t8556 = 1.142857*t4649*t3877;
  t8559 = t3903*t8455;
  t8560 = -1.*t4266*t8460;
  t8561 = t8559 + t8560;
  t8562 = 1.142857*t4734*t8561;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(1.142857*t3877*t4579 + 1.142857*t4649*t4734)*var2[0] + 0.5*(1.142857*t3877*(-1.*t3903*t4476 + t4813) + 1.142857*t4734*(-1.*t3297*t3903 + t4908))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(0.5*(1.142857*t4734*(t4646 + t4266*t5064) + 1.142857*t3877*(t4251 + t4266*t5948) + 1.142857*t5300*t7140 + 1.142857*t5980*t7444)*var2[0] + 0.5*(1.142857*t4734*(t4908 + t3903*t5064) + 1.142857*t4579*t5300 + 1.142857*t3877*(t4813 + t3903*t5948) + 1.142857*t4649*t5980)*var2[1] + 0.5*(2.285714*t3877*t5300 + 2.285714*t4734*t5980)*var2[2] + 0.5*(1.142857*t5300*t6218 + 1.142857*t5980*t6303)*var2[3] + 0.5*(1.142857*t5300*t5386 + 1.142857*t5736*t5980)*var2[4] - 0.03428571*t5300*var2[5]);
  p_output1[4]=var2[2]*(0.5*(1.142857*t7140*t8467 + 1.142857*t7444*t8485 + t8535 + t8549)*var2[0] + 0.5*(1.142857*t4579*t8467 + 1.142857*t4649*t8485 + t8556 + t8562)*var2[1] + 0.5*(2.285714*t3877*t8467 + 2.285714*t4734*t8485)*var2[2] + 0.5*(1.142857*t6218*t8467 + 1.142857*t6303*t8485 + 1.142857*t3877*(t6243 - 1.*t3179*t8165 - 1.*t2763*t8398 + t8492 + t8503) + 1.142857*t4734*(t4002*t8165 + t3179*t8398 + t8509 + t8511 + t8519))*var2[3] + 0.5*(1.142857*t5386*t8467 + 1.142857*t5736*t8485)*var2[4] - 0.03428571*t8467*var2[5]);
  p_output1[5]=var2[2]*(0.5*(t8535 + t8549 + 1.142857*t7140*t8591 + 1.142857*t7444*t8608)*var2[0] + 0.5*(t8556 + t8562 + 1.142857*t4579*t8591 + 1.142857*t4649*t8608)*var2[1] + 0.5*(2.285714*t3877*t8591 + 2.285714*t4734*t8608)*var2[2] + 0.5*(1.142857*t3877*(t6243 + t8492 + t8503 - 1.*t3179*t8575 - 1.*t2763*t8578) + 1.142857*t4734*(t8509 + t8511 + t8519 + t4002*t8575 + t3179*t8578) + 1.142857*t6218*t8591 + 1.142857*t6303*t8608)*var2[3] + 0.5*(1.142857*(0. - 0.9063*t1591 - 0.06*Power(t1591,2) - 1.*t1591*t1670)*t4734 + 1.142857*t3877*t5736 + 1.142857*t5386*t8591 + 1.142857*t5736*t8608)*var2[4] - 0.03428571*t8591*var2[5]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec_L4_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L4_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

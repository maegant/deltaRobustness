/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:37 GMT-08:00
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
  double t2089;
  double t1001;
  double t1778;
  double t2108;
  double t2810;
  double t1869;
  double t2631;
  double t2636;
  double t392;
  double t2923;
  double t2975;
  double t2976;
  double t3390;
  double t2647;
  double t3141;
  double t3155;
  double t264;
  double t3501;
  double t3505;
  double t3568;
  double t4467;
  double t4599;
  double t4919;
  double t5271;
  double t5274;
  double t5461;
  double t5562;
  double t5605;
  double t3674;
  double t7285;
  double t7287;
  double t7291;
  double t3964;
  double t7332;
  double t7336;
  double t7338;
  double t7342;
  double t7350;
  double t7354;
  double t7318;
  double t7320;
  double t7323;
  double t7330;
  double t7355;
  double t7368;
  double t7381;
  double t7389;
  double t7393;
  double t7394;
  double t7431;
  double t7432;
  double t7426;
  double t7427;
  double t7428;
  double t7434;
  double t7457;
  double t7459;
  double t7317;
  double t7370;
  double t7409;
  double t7410;
  double t7415;
  double t7418;
  double t7420;
  double t7421;
  double t5389;
  double t7439;
  double t7453;
  double t6078;
  double t7521;
  double t7526;
  double t7531;
  double t7532;
  double t7536;
  double t7538;
  double t7578;
  double t7579;
  double t7582;
  double t7583;
  double t7585;
  double t7588;
  double t7590;
  double t3386;
  double t3770;
  double t7561;
  double t7566;
  double t7573;
  double t7551;
  double t7554;
  double t7555;
  double t7516;
  double t7517;
  double t7636;
  double t7637;
  double t7542;
  double t7550;
  double t7560;
  double t7650;
  double t7651;
  double t7653;
  double t7655;
  double t7658;
  double t7659;
  double t7586;
  double t7591;
  double t7594;
  double t7595;
  double t7596;
  double t7599;
  double t7600;
  double t7601;
  double t7606;
  double t7607;
  double t7610;
  double t7615;
  double t7621;
  double t7622;
  double t7623;
  double t7624;
  double t7666;
  double t7667;
  double t7668;
  double t7671;
  double t7672;
  double t7675;
  double t7630;
  double t7631;
  t2089 = Cos(var1[7]);
  t1001 = Cos(var1[8]);
  t1778 = Sin(var1[7]);
  t2108 = Sin(var1[8]);
  t2810 = Cos(var1[6]);
  t1869 = -1.*t1001*t1778;
  t2631 = -1.*t2089*t2108;
  t2636 = t1869 + t2631;
  t392 = Sin(var1[6]);
  t2923 = t2089*t1001;
  t2975 = -1.*t1778*t2108;
  t2976 = t2923 + t2975;
  t3390 = Cos(var1[2]);
  t2647 = t392*t2636;
  t3141 = t2810*t2976;
  t3155 = t2647 + t3141;
  t264 = Sin(var1[2]);
  t3501 = t2810*t2636;
  t3505 = -1.*t392*t2976;
  t3568 = t3501 + t3505;
  t4467 = t1001*t1778;
  t4599 = t2089*t2108;
  t4919 = t4467 + t4599;
  t5271 = -1.*t392*t4919;
  t5274 = t5271 + t3141;
  t5461 = t2810*t4919;
  t5562 = t392*t2976;
  t5605 = t5461 + t5562;
  t3674 = t3390*t3568;
  t7285 = -1.*t392*t2636;
  t7287 = -1.*t2810*t2976;
  t7291 = t7285 + t7287;
  t3964 = -1.*t264*t3568;
  t7332 = -1.*t1001;
  t7336 = 1. + t7332;
  t7338 = -1.3127*t7336;
  t7342 = -1.3127*t1001;
  t7350 = -0.06*t2108;
  t7354 = t7338 + t7342 + t7350;
  t7318 = -1.*t2089;
  t7320 = 1. + t7318;
  t7323 = -0.9063*t7320;
  t7330 = -0.06*t1001*t1778;
  t7355 = t2089*t7354;
  t7368 = t7323 + t7330 + t7355;
  t7381 = 0.06*t2089*t1001;
  t7389 = 0.9063*t1778;
  t7393 = t1778*t7354;
  t7394 = t7381 + t7389 + t7393;
  t7431 = t2810*t7368;
  t7432 = -1.*t392*t7394;
  t7426 = -1.*t2810;
  t7427 = 1. + t7426;
  t7428 = -0.4999*t7427;
  t7434 = t7428 + t7431 + t7432;
  t7457 = 0.4999*t2810;
  t7459 = t7457 + t7431 + t7432;
  t7317 = -0.4999*t392;
  t7370 = -1.*t392*t7368;
  t7409 = -1.*t2810*t7394;
  t7410 = t7317 + t7370 + t7409;
  t7415 = 0.4999*t392;
  t7418 = t392*t7368;
  t7420 = t2810*t7394;
  t7421 = t7415 + t7418 + t7420;
  t5389 = -1.*t264*t5274;
  t7439 = -1.*t2810*t4919;
  t7453 = t7439 + t3505;
  t6078 = t3390*t5274;
  t7521 = 0.9063*t2089;
  t7526 = t7521 + t7330 + t7355;
  t7531 = -0.06*t2089*t1001;
  t7532 = -0.9063*t1778;
  t7536 = -1.*t1778*t7354;
  t7538 = t7531 + t7532 + t7536;
  t7578 = -1.*t2089*t1001;
  t7579 = t1778*t2108;
  t7582 = t7578 + t7579;
  t7583 = t2810*t7582;
  t7585 = t7285 + t7583;
  t7588 = t392*t7582;
  t7590 = t3501 + t7588;
  t3386 = -1.*t264*t3155;
  t3770 = t3386 + t3674;
  t7561 = t2810*t7526;
  t7566 = t392*t7538;
  t7573 = t7561 + t7566;
  t7551 = -1.*t392*t7526;
  t7554 = t2810*t7538;
  t7555 = t7551 + t7554;
  t7516 = 0.4999*t2636;
  t7517 = t7368*t2636;
  t7636 = -0.06*t1001;
  t7637 = 0. + t7636;
  t7542 = t7394*t2976;
  t7550 = t7421*t3155;
  t7560 = t7434*t3568;
  t7650 = t7637*t1778;
  t7651 = -0.06*t2089*t2108;
  t7653 = t7650 + t7651;
  t7655 = t2089*t7637;
  t7658 = 0.06*t1778*t2108;
  t7659 = t7655 + t7658;
  t7586 = t264*t7585;
  t7591 = t3390*t7590;
  t7594 = t7586 + t7591;
  t7595 = var2[0]*t7594;
  t7596 = t3390*t7585;
  t7599 = -1.*t264*t7590;
  t7600 = t7596 + t7599;
  t7601 = var2[1]*t7600;
  t7606 = -1.*t7394*t2636;
  t7607 = 0.4999*t2976;
  t7610 = -1.*t7368*t7582;
  t7615 = var2[1]*t3770;
  t7621 = t3390*t3155;
  t7622 = t264*t3568;
  t7623 = t7621 + t7622;
  t7624 = var2[0]*t7623;
  t7666 = -1.*t392*t7653;
  t7667 = t2810*t7659;
  t7668 = t7666 + t7667;
  t7671 = t2810*t7653;
  t7672 = t392*t7659;
  t7675 = t7671 + t7672;
  t7630 = -1.*t7434*t7585;
  t7631 = -1.*t7421*t7590;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3770*var2[0] + (-1.*t3155*t3390 + t3964)*var2[1];
  p_output1[7]=(-1.*t264*t5605 + t6078)*var2[0] + (t5389 - 1.*t3390*t5605)*var2[1];
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t3674 + t264*t7291)*var2[0] + (t3964 + t3390*t7291)*var2[1] + (t5274*t7410 + t5274*t7421 + t7434*t7453 + t5605*t7459)*var2[2];
  p_output1[19]=(t6078 + t264*t7453)*var2[0] + (t5389 + t3390*t7453)*var2[1] + (-1.*t3568*t7410 - 1.*t3568*t7421 - 1.*t7291*t7434 - 1.*t3155*t7459)*var2[2];
  p_output1[20]=0;
  p_output1[21]=t7595 + t7601 + (t7550 + t5274*t7555 + t7560 + t5605*t7573)*var2[2] + (t7516 + t7517 + t4919*t7526 + t2976*t7538 + t7542)*var2[6];
  p_output1[22]=t7615 + t7624 + (-1.*t3568*t7555 - 1.*t3155*t7573 + t7630 + t7631)*var2[2] + (-1.*t2976*t7526 - 1.*t2636*t7538 + t7606 + t7607 + t7610)*var2[6];
  p_output1[23]=0;
  p_output1[24]=t7595 + t7601 + (t7550 + t7560 + t5274*t7668 + t5605*t7675)*var2[2] + (t7516 + t7517 + t7542 + t4919*t7653 + t2976*t7659)*var2[6] + (0.06*Power(t1001,2) - 0.9063*t2108 - 0.06*Power(t2108,2) - 1.*t2108*t7354 + t1001*t7637)*var2[7];
  p_output1[25]=t7615 + t7624 + (t7630 + t7631 - 1.*t3568*t7668 - 1.*t3155*t7675)*var2[2] + (t7606 + t7607 + t7610 - 1.*t2976*t7653 - 1.*t2636*t7659)*var2[6] + (0.9063*t1001 + 0.12*t1001*t2108 + t1001*t7354 + t2108*t7637)*var2[7];
  p_output1[26]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightSole_RightSS1.hh"

namespace SymFunction
{

void dJh_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

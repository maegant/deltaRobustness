/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:23 GMT-08:00
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
  double t353;
  double t108;
  double t56;
  double t611;
  double t457;
  double t469;
  double t581;
  double t594;
  double t614;
  double t628;
  double t952;
  double t998;
  double t1048;
  double t2268;
  double t1957;
  double t2143;
  double t2144;
  double t1906;
  double t1080;
  double t1278;
  double t1378;
  double t1426;
  double t1437;
  double t1488;
  double t827;
  double t831;
  double t895;
  double t308;
  double t427;
  double t801;
  double t810;
  double t2675;
  double t2340;
  double t1822;
  double t936;
  double t1061;
  double t1590;
  double t1654;
  double t2266;
  double t2492;
  double t2684;
  double t2717;
  double t2827;
  double t3233;
  double t3425;
  double t3452;
  double t3512;
  double t3518;
  double t3722;
  double t3906;
  double t3992;
  double t3998;
  double t2835;
  double t3877;
  double t4738;
  double t4774;
  double t4775;
  double t4422;
  double t4579;
  double t4879;
  double t4883;
  double t5348;
  double t5361;
  double t5568;
  double t5575;
  double t5595;
  double t5736;
  double t5876;
  double t5948;
  double t5950;
  double t5967;
  double t5305;
  double t5311;
  double t5341;
  double t5386;
  double t5471;
  double t5488;
  double t6904;
  double t6931;
  double t6428;
  double t6435;
  double t6437;
  double t6533;
  double t6806;
  double t6890;
  double t6965;
  double t6989;
  double t7004;
  double t7056;
  double t7060;
  double t7097;
  double t7161;
  double t7299;
  double t7303;
  double t7312;
  double t7313;
  double t7342;
  double t8001;
  double t8350;
  double t8361;
  double t4421;
  double t4425;
  double t4589;
  double t4642;
  double t8467;
  double t8470;
  double t8477;
  double t8482;
  double t8534;
  double t8535;
  double t8536;
  double t8525;
  double t8529;
  double t8531;
  double t7121;
  double t7131;
  double t7138;
  double t7140;
  double t8574;
  double t8577;
  double t8582;
  double t8583;
  double t7412;
  double t7444;
  double t7502;
  double t7516;
  double t7558;
  double t8579;
  double t8591;
  double t8593;
  double t8605;
  double t8608;
  double t8609;
  double t8365;
  double t8444;
  double t8452;
  double t8454;
  double t8476;
  double t8484;
  double t8485;
  double t8486;
  double t8489;
  double t8505;
  double t8506;
  double t8508;
  double t8509;
  double t8518;
  double t8519;
  double t8520;
  double t8549;
  double t8550;
  double t8552;
  double t8524;
  double t8533;
  double t8629;
  double t8630;
  double t8631;
  double t8633;
  double t8634;
  double t8635;
  double t8559;
  double t8561;
  t353 = Sin(var1[4]);
  t108 = Cos(var1[5]);
  t56 = Cos(var1[4]);
  t611 = Sin(var1[5]);
  t457 = -1.*t108;
  t469 = 1. + t457;
  t581 = -1.3127*t469;
  t594 = -1.3127*t108;
  t614 = -0.06*t611;
  t628 = t581 + t594 + t614;
  t952 = t56*t108;
  t998 = -1.*t353*t611;
  t1048 = t952 + t998;
  t2268 = Cos(var1[3]);
  t1957 = -1.*t108*t353;
  t2143 = -1.*t56*t611;
  t2144 = t1957 + t2143;
  t1906 = Sin(var1[3]);
  t1080 = -1.*t56;
  t1278 = 1. + t1080;
  t1378 = -0.9063*t1278;
  t1426 = -0.06*t108*t353;
  t1437 = t56*t628;
  t1488 = t1378 + t1426 + t1437;
  t827 = t108*t353;
  t831 = t56*t611;
  t895 = t827 + t831;
  t308 = 0.06*t56*t108;
  t427 = 0.9063*t353;
  t801 = t353*t628;
  t810 = t308 + t427 + t801;
  t2675 = Sin(var1[2]);
  t2340 = t2268*t1048;
  t1822 = Cos(var1[2]);
  t936 = t810*t895;
  t1061 = 0.4999*t1048;
  t1590 = t1488*t1048;
  t1654 = t936 + t1061 + t1590;
  t2266 = t1906*t2144;
  t2492 = t2266 + t2340;
  t2684 = t2268*t2144;
  t2717 = -1.*t1906*t1048;
  t2827 = t2684 + t2717;
  t3233 = -1.*t1488*t2144;
  t3425 = 0.4999*t895;
  t3452 = -1.*t810*t1048;
  t3512 = t3233 + t3425 + t3452;
  t3518 = -1.*t1906*t895;
  t3722 = t3518 + t2340;
  t3906 = t2268*t895;
  t3992 = t1906*t1048;
  t3998 = t3906 + t3992;
  t2835 = -1.*t2675*t2827;
  t3877 = -1.*t2675*t3722;
  t4738 = -1.*t1906*t2144;
  t4774 = -1.*t2268*t1048;
  t4775 = t4738 + t4774;
  t4422 = t1822*t2827;
  t4579 = t1822*t3722;
  t4879 = -1.*t2268*t895;
  t4883 = t4879 + t2717;
  t5348 = t2268*t1488;
  t5361 = -1.*t1906*t810;
  t5568 = -0.4999*t1906;
  t5575 = -1.*t1906*t1488;
  t5595 = -1.*t2268*t810;
  t5736 = t5568 + t5575 + t5595;
  t5876 = 0.4999*t1906;
  t5948 = t1906*t1488;
  t5950 = t2268*t810;
  t5967 = t5876 + t5948 + t5950;
  t5305 = -1.*t2268;
  t5311 = 1. + t5305;
  t5341 = -0.4999*t5311;
  t5386 = t5341 + t5348 + t5361;
  t5471 = 0.4999*t2268;
  t5488 = t5471 + t5348 + t5361;
  t6904 = 0.9063*t56;
  t6931 = t6904 + t1426 + t1437;
  t6428 = -0.06*t56*t108;
  t6435 = -0.9063*t353;
  t6437 = -1.*t353*t628;
  t6533 = t6428 + t6435 + t6437;
  t6806 = -1.*t6533*t2144;
  t6890 = -1.*t810*t2144;
  t6965 = -1.*t6931*t1048;
  t6989 = -1.*t56*t108;
  t7004 = t353*t611;
  t7056 = t6989 + t7004;
  t7060 = -1.*t1488*t7056;
  t7097 = t6806 + t6890 + t1061 + t6965 + t7060;
  t7161 = 0.4999*t2144;
  t7299 = t1488*t2144;
  t7303 = t6931*t895;
  t7312 = t6533*t1048;
  t7313 = t810*t1048;
  t7342 = t7161 + t7299 + t7303 + t7312 + t7313;
  t8001 = t1822*t2492;
  t8350 = t2675*t2827;
  t8361 = t8001 + t8350;
  t4421 = -1.*t2675*t2492;
  t4425 = t4421 + t4422;
  t4589 = -1.*t2675*t3998;
  t4642 = t4579 + t4589;
  t8467 = t2268*t7056;
  t8470 = t4738 + t8467;
  t8477 = t1906*t7056;
  t8482 = t2684 + t8477;
  t8534 = t2268*t6931;
  t8535 = t1906*t6533;
  t8536 = t8534 + t8535;
  t8525 = -1.*t1906*t6931;
  t8529 = t2268*t6533;
  t8531 = t8525 + t8529;
  t7121 = 0.9063*t108;
  t7131 = t108*t628;
  t7138 = 0.06*t108*t611;
  t7140 = t7121 + t7131 + t7138;
  t8574 = -0.06*t56*t611;
  t8577 = t1426 + t8574;
  t8582 = 0.06*t353*t611;
  t8583 = t6428 + t8582;
  t7412 = Power(t108,2);
  t7444 = -0.06*t7412;
  t7502 = 0.9063*t611;
  t7516 = t628*t611;
  t7558 = t7444 + t7502 + t7516;
  t8579 = -1.*t8577*t1048;
  t8591 = -1.*t2144*t8583;
  t8593 = t6890 + t1061 + t8579 + t8591 + t7060;
  t8605 = t8577*t895;
  t8608 = t1048*t8583;
  t8609 = t7161 + t7299 + t8605 + t7313 + t8608;
  t8365 = 1.142857*t3512*t8361;
  t8444 = t2675*t3722;
  t8452 = t1822*t3998;
  t8454 = t8444 + t8452;
  t8476 = t2675*t8470;
  t8484 = t1822*t8482;
  t8485 = t8476 + t8484;
  t8486 = 1.142857*t1654*t8485;
  t8489 = 1.142857*t3512*t4425;
  t8505 = t1822*t8470;
  t8506 = -1.*t2675*t8482;
  t8508 = t8505 + t8506;
  t8509 = 1.142857*t1654*t8508;
  t8518 = -1.*t5967*t2492;
  t8519 = -1.*t5386*t2827;
  t8520 = t8518 + t8519;
  t8549 = t5386*t3722;
  t8550 = t5967*t3998;
  t8552 = t8549 + t8550;
  t8524 = t5967*t2492;
  t8533 = t5386*t2827;
  t8629 = -1.*t1906*t8577;
  t8630 = t2268*t8583;
  t8631 = t8629 + t8630;
  t8633 = t2268*t8577;
  t8634 = t1906*t8583;
  t8635 = t8633 + t8634;
  t8559 = -1.*t5386*t8470;
  t8561 = -1.*t5967*t8482;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(1.142857*t1654*t4425 + 1.142857*t3512*t4642)*var2[0] + 0.5*(1.142857*t1654*(-1.*t1822*t2492 + t2835) + 1.142857*t3512*(t3877 - 1.*t1822*t3998))*var2[1])*var2[3];
  p_output1[3]=(0.5*(1.142857*t1654*(t4422 + t2675*t4775) + 1.142857*t3512*(t4579 + t2675*t4883))*var2[0] + 0.5*(1.142857*t1654*(t2835 + t1822*t4775) + 1.142857*t3512*(t3877 + t1822*t4883))*var2[1] + 0.5*(1.142857*t3512*(-1.*t4775*t5386 - 1.*t2492*t5488 - 1.*t2827*t5736 - 1.*t2827*t5967) + 1.142857*t1654*(t4883*t5386 + t3998*t5488 + t3722*t5736 + t3722*t5967))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(0.5*(1.142857*t7342*t8361 + t8365 + 1.142857*t7097*t8454 + t8486)*var2[0] + 0.5*(1.142857*t4642*t7097 + 1.142857*t4425*t7342 + t8489 + t8509)*var2[1] + 0.5*(1.142857*t7097*t8520 + 1.142857*t1654*(t8524 + t3722*t8531 + t8533 + t3998*t8536) + 1.142857*t7342*t8552 + 1.142857*t3512*(-1.*t2827*t8531 - 1.*t2492*t8536 + t8559 + t8561))*var2[2] + 0.5*(2.285714*t3512*t7097 + 2.285714*t1654*t7342)*var2[3] + 0.5*(1.142857*t7140*t7342 + 1.142857*t7097*t7558)*var2[4] - 0.03428571*t7097*var2[5]);
  p_output1[5]=var2[3]*(0.5*(t8365 + t8486 + 1.142857*t8454*t8593 + 1.142857*t8361*t8609)*var2[0] + 0.5*(t8489 + t8509 + 1.142857*t4642*t8593 + 1.142857*t4425*t8609)*var2[1] + 0.5*(1.142857*t8520*t8593 + 1.142857*t8552*t8609 + 1.142857*t3512*(t8559 + t8561 - 1.*t2827*t8631 - 1.*t2492*t8635) + 1.142857*t1654*(t8524 + t8533 + t3722*t8631 + t3998*t8635))*var2[2] + 0.5*(2.285714*t3512*t8593 + 2.285714*t1654*t8609)*var2[3] + 0.5*(1.142857*t1654*(0. - 0.9063*t611 - 0.06*Power(t611,2) - 1.*t611*t628) + 1.142857*t3512*t7140 + 1.142857*t7558*t8593 + 1.142857*t7140*t8609)*var2[4] - 0.03428571*t8593*var2[5]);
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

#include "Ce3_vec_L4_J4_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L4_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

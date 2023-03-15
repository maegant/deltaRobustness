/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:20 GMT-08:00
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
  double t1596;
  double t1067;
  double t1142;
  double t1740;
  double t1898;
  double t1275;
  double t1757;
  double t1780;
  double t788;
  double t1899;
  double t2002;
  double t2011;
  double t2326;
  double t2038;
  double t787;
  double t4053;
  double t4076;
  double t4083;
  double t3081;
  double t3082;
  double t3297;
  double t3310;
  double t3722;
  double t3854;
  double t1781;
  double t2045;
  double t2266;
  double t2531;
  double t2568;
  double t2657;
  double t2689;
  double t2808;
  double t4084;
  double t4450;
  double t4548;
  double t4589;
  double t4605;
  double t4606;
  double t4611;
  double t4646;
  double t5025;
  double t5027;
  double t5032;
  double t5039;
  double t5042;
  double t5053;
  double t4935;
  double t4939;
  double t4956;
  double t4979;
  double t5305;
  double t5311;
  double t5341;
  double t5361;
  double t5440;
  double t5471;
  double t6826;
  double t6886;
  double t6890;
  double t6904;
  double t6933;
  double t6934;
  double t6437;
  double t6534;
  double t6665;
  double t6693;
  double t2838;
  double t3875;
  double t3998;
  double t4002;
  double t4672;
  double t4687;
  double t4689;
  double t4734;
  double t4738;
  double t7548;
  double t7947;
  double t7976;
  double t7989;
  double t5001;
  double t5019;
  double t5063;
  double t5064;
  double t8074;
  double t8331;
  double t8346;
  double t8350;
  double t8361;
  double t5079;
  double t5127;
  double t5200;
  double t5206;
  double t5969;
  double t6148;
  double t6721;
  double t7002;
  double t7004;
  double t7097;
  double t7138;
  double t7140;
  double t8470;
  double t8471;
  double t8472;
  double t8474;
  double t8467;
  double t8468;
  double t8494;
  double t8496;
  double t8497;
  double t8519;
  double t8520;
  double t8521;
  double t8522;
  double t8516;
  double t8517;
  double t8498;
  double t8501;
  double t8502;
  double t8503;
  double t8504;
  double t8505;
  double t8506;
  double t8556;
  double t8557;
  double t8558;
  double t8551;
  double t8552;
  double t8553;
  double t8492;
  double t8493;
  double t8507;
  double t8510;
  double t8511;
  double t8512;
  double t8524;
  double t8528;
  double t8584;
  double t8585;
  double t8587;
  double t8588;
  double t8530;
  double t8533;
  double t8536;
  double t8537;
  double t8538;
  double t8539;
  double t8540;
  double t8541;
  double t8542;
  double t8543;
  double t8544;
  double t8545;
  double t8546;
  double t8547;
  double t8548;
  double t8549;
  double t8550;
  double t8555;
  double t8562;
  double t8600;
  double t8601;
  double t8602;
  double t8604;
  double t8605;
  double t8606;
  double t8565;
  double t8566;
  t1596 = Cos(var1[4]);
  t1067 = Cos(var1[5]);
  t1142 = Sin(var1[4]);
  t1740 = Sin(var1[5]);
  t1898 = Cos(var1[3]);
  t1275 = t1067*t1142;
  t1757 = t1596*t1740;
  t1780 = t1275 + t1757;
  t788 = Sin(var1[3]);
  t1899 = t1596*t1067;
  t2002 = -1.*t1142*t1740;
  t2011 = t1899 + t2002;
  t2326 = Sin(var1[2]);
  t2038 = t1898*t2011;
  t787 = Cos(var1[2]);
  t4053 = -1.*t1067*t1142;
  t4076 = -1.*t1596*t1740;
  t4083 = t4053 + t4076;
  t3081 = -1.*t1067;
  t3082 = 1. + t3081;
  t3297 = -1.3127*t3082;
  t3310 = -1.3127*t1067;
  t3722 = -0.06*t1740;
  t3854 = t3297 + t3310 + t3722;
  t1781 = -1.*t788*t1780;
  t2045 = t1781 + t2038;
  t2266 = t787*t2045;
  t2531 = t1898*t1780;
  t2568 = t788*t2011;
  t2657 = t2531 + t2568;
  t2689 = -1.*t2326*t2657;
  t2808 = t2266 + t2689;
  t4084 = t788*t4083;
  t4450 = t4084 + t2038;
  t4548 = -1.*t2326*t4450;
  t4589 = t1898*t4083;
  t4605 = -1.*t788*t2011;
  t4606 = t4589 + t4605;
  t4611 = t787*t4606;
  t4646 = t4548 + t4611;
  t5025 = -1.*t1596;
  t5027 = 1. + t5025;
  t5032 = -0.9063*t5027;
  t5039 = -0.06*t1067*t1142;
  t5042 = t1596*t3854;
  t5053 = t5032 + t5039 + t5042;
  t4935 = 0.06*t1596*t1067;
  t4939 = 0.9063*t1142;
  t4956 = t1142*t3854;
  t4979 = t4935 + t4939 + t4956;
  t5305 = t787*t4450;
  t5311 = t2326*t4606;
  t5341 = t5305 + t5311;
  t5361 = t2326*t2045;
  t5440 = t787*t2657;
  t5471 = t5361 + t5440;
  t6826 = -1.*t1898;
  t6886 = 1. + t6826;
  t6890 = -0.4999*t6886;
  t6904 = t1898*t5053;
  t6933 = -1.*t788*t4979;
  t6934 = t6890 + t6904 + t6933;
  t6437 = 0.4999*t788;
  t6534 = t788*t5053;
  t6665 = t1898*t4979;
  t6693 = t6437 + t6534 + t6665;
  t2838 = 0.9063*t1067;
  t3875 = t1067*t3854;
  t3998 = 0.06*t1067*t1740;
  t4002 = t2838 + t3875 + t3998;
  t4672 = Power(t1067,2);
  t4687 = -0.06*t4672;
  t4689 = 0.9063*t1740;
  t4734 = t3854*t1740;
  t4738 = t4687 + t4689 + t4734;
  t7548 = -1.*t1898*t1780;
  t7947 = t7548 + t4605;
  t7976 = t2326*t7947;
  t7989 = t2266 + t7976;
  t5001 = t4979*t1780;
  t5019 = 0.4999*t2011;
  t5063 = t5053*t2011;
  t5064 = t5001 + t5019 + t5063;
  t8074 = -1.*t788*t4083;
  t8331 = -1.*t1898*t2011;
  t8346 = t8074 + t8331;
  t8350 = t2326*t8346;
  t8361 = t8350 + t4611;
  t5079 = -1.*t5053*t4083;
  t5127 = 0.4999*t1780;
  t5200 = -1.*t4979*t2011;
  t5206 = t5079 + t5127 + t5200;
  t5969 = -1.*t2326*t4606;
  t6148 = -1.*t2326*t2045;
  t6721 = -1.*t6693*t4450;
  t7002 = -1.*t6934*t4606;
  t7004 = t6721 + t7002;
  t7097 = t6934*t2045;
  t7138 = t6693*t2657;
  t7140 = t7097 + t7138;
  t8470 = -0.4999*t788;
  t8471 = -1.*t788*t5053;
  t8472 = -1.*t1898*t4979;
  t8474 = t8470 + t8471 + t8472;
  t8467 = 0.4999*t1898;
  t8468 = t8467 + t6904 + t6933;
  t8494 = -1.*t1596*t1067;
  t8496 = t1142*t1740;
  t8497 = t8494 + t8496;
  t8519 = -0.06*t1596*t1067;
  t8520 = -0.9063*t1142;
  t8521 = -1.*t1142*t3854;
  t8522 = t8519 + t8520 + t8521;
  t8516 = 0.9063*t1596;
  t8517 = t8516 + t5039 + t5042;
  t8498 = t1898*t8497;
  t8501 = t8074 + t8498;
  t8502 = t2326*t8501;
  t8503 = t788*t8497;
  t8504 = t4589 + t8503;
  t8505 = t787*t8504;
  t8506 = t8502 + t8505;
  t8556 = t1898*t8517;
  t8557 = t788*t8522;
  t8558 = t8556 + t8557;
  t8551 = -1.*t788*t8517;
  t8552 = t1898*t8522;
  t8553 = t8551 + t8552;
  t8492 = -0.03428571*var2[5]*t5341;
  t8493 = 1.142857*t4738*t5341;
  t8507 = 1.142857*t4002*t8506;
  t8510 = 1.142857*t5206*t5341;
  t8511 = 0.4999*t4083;
  t8512 = t5053*t4083;
  t8524 = t4979*t2011;
  t8528 = -1.*t4979*t4083;
  t8584 = -0.06*t1596*t1740;
  t8585 = t5039 + t8584;
  t8587 = 0.06*t1142*t1740;
  t8588 = t8519 + t8587;
  t8530 = -1.*t5053*t8497;
  t8533 = 1.142857*t5064*t8506;
  t8536 = 2.285714*t5341*t5471;
  t8537 = 2.285714*t5341*t8506;
  t8538 = t8536 + t8537;
  t8539 = 0.5*var2[0]*t8538;
  t8540 = 1.142857*t4646*t5471;
  t8541 = 1.142857*t5341*t2808;
  t8542 = 1.142857*t4646*t8506;
  t8543 = t787*t8501;
  t8544 = -1.*t2326*t8504;
  t8545 = t8543 + t8544;
  t8546 = 1.142857*t5341*t8545;
  t8547 = t8540 + t8541 + t8542 + t8546;
  t8548 = 0.5*var2[1]*t8547;
  t8549 = 1.142857*t5341*t7004;
  t8550 = t6693*t4450;
  t8555 = t6934*t4606;
  t8562 = 1.142857*t7140*t8506;
  t8600 = -1.*t788*t8585;
  t8601 = t1898*t8588;
  t8602 = t8600 + t8601;
  t8604 = t1898*t8585;
  t8605 = t788*t8588;
  t8606 = t8604 + t8605;
  t8565 = -1.*t6934*t8501;
  t8566 = -1.*t6693*t8504;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(0.5*(2.285714*t4646*t5341 + 2.285714*t2808*t5471)*var2[0] + 0.5*(1.142857*Power(t2808,2) + 1.142857*Power(t4646,2) + 1.142857*t5471*(t6148 - 1.*t2657*t787) + 1.142857*t5341*(t5969 - 1.*t4450*t787))*var2[1] + 0.5*(1.142857*t2808*t7004 + 1.142857*t4646*t7140)*var2[2] + 0.5*(1.142857*t4646*t5064 + 1.142857*t2808*t5206)*var2[3] + 0.5*(1.142857*t4002*t4646 + 1.142857*t2808*t4738)*var2[4] - 0.03428571*t2808*var2[5]);
  p_output1[3]=var2[0]*(0.5*(2.285714*t5471*t7989 + 2.285714*t5341*t8361)*var2[0] + 0.5*(1.142857*t5471*(t6148 + t787*t7947) + 1.142857*t2808*t7989 + 1.142857*t5341*(t5969 + t787*t8346) + 1.142857*t4646*t8361)*var2[1] + 0.5*(1.142857*t7004*t7989 + 1.142857*t7140*t8361 + 1.142857*t5341*(t2045*t6693 + t6934*t7947 + t2657*t8468 + t2045*t8474) + 1.142857*t5471*(-1.*t4606*t6693 - 1.*t6934*t8346 - 1.*t4450*t8468 - 1.*t4606*t8474))*var2[2] + 0.5*(1.142857*t5206*t7989 + 1.142857*t5064*t8361)*var2[3] + 0.5*(1.142857*t4738*t7989 + 1.142857*t4002*t8361)*var2[4] - 0.03428571*t7989*var2[5]);
  p_output1[4]=var2[0]*(t8492 + t8539 + t8548 + 0.5*(t8549 + 1.142857*t5341*(t8550 + t2045*t8553 + t8555 + t2657*t8558) + t8562 + 1.142857*t5471*(-1.*t4606*t8553 - 1.*t4450*t8558 + t8565 + t8566))*var2[2] + 0.5*(t8510 + 1.142857*t5341*(t8511 + t8512 + t1780*t8517 + t2011*t8522 + t8524) + 1.142857*t5471*(t5019 - 1.*t2011*t8517 - 1.*t4083*t8522 + t8528 + t8530) + t8533)*var2[3] + 0.5*(t8493 + t8507)*var2[4]);
  p_output1[5]=var2[0]*(t8492 + t8539 + t8548 + 0.5*(t8549 + t8562 + 1.142857*t5341*(t8550 + t8555 + t2045*t8602 + t2657*t8606) + 1.142857*t5471*(t8565 + t8566 - 1.*t4606*t8602 - 1.*t4450*t8606))*var2[2] + 0.5*(t8510 + t8533 + 1.142857*t5341*(t8511 + t8512 + t8524 + t1780*t8585 + t2011*t8588) + 1.142857*t5471*(t5019 + t8528 + t8530 - 1.*t2011*t8585 - 1.*t4083*t8588))*var2[3] + 0.5*(1.142857*(0. - 0.9063*t1740 - 0.06*Power(t1740,2) - 1.*t1740*t3854)*t5341 + 1.142857*t4002*t5471 + t8493 + t8507)*var2[4]);
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

#include "Ce3_vec_L4_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L4_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

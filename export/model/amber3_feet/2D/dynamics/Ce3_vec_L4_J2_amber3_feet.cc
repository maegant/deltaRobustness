/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:21 GMT-08:00
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
  double t470;
  double t206;
  double t235;
  double t989;
  double t1275;
  double t469;
  double t991;
  double t995;
  double t199;
  double t1378;
  double t1455;
  double t1546;
  double t1799;
  double t1590;
  double t165;
  double t2808;
  double t2821;
  double t2838;
  double t2311;
  double t2312;
  double t2328;
  double t2531;
  double t2568;
  double t2589;
  double t1069;
  double t1659;
  double t1757;
  double t1822;
  double t1899;
  double t1961;
  double t2038;
  double t2143;
  double t2903;
  double t2908;
  double t3063;
  double t3078;
  double t3122;
  double t3165;
  double t3256;
  double t3297;
  double t4442;
  double t4475;
  double t4476;
  double t4579;
  double t4589;
  double t4611;
  double t4002;
  double t4084;
  double t4108;
  double t4243;
  double t4823;
  double t4831;
  double t4851;
  double t4883;
  double t4935;
  double t4939;
  double t5658;
  double t5732;
  double t5736;
  double t5816;
  double t5851;
  double t5880;
  double t5361;
  double t5440;
  double t5471;
  double t5510;
  double t2266;
  double t2693;
  double t2721;
  double t2763;
  double t3400;
  double t3422;
  double t3425;
  double t3452;
  double t3468;
  double t6400;
  double t6428;
  double t6435;
  double t6437;
  double t4251;
  double t4390;
  double t4629;
  double t4646;
  double t6534;
  double t6583;
  double t6665;
  double t6890;
  double t6904;
  double t4672;
  double t4687;
  double t4689;
  double t4715;
  double t5063;
  double t5064;
  double t5070;
  double t5206;
  double t5211;
  double t5278;
  double t5558;
  double t5978;
  double t5998;
  double t6112;
  double t6191;
  double t6218;
  double t8398;
  double t8418;
  double t8419;
  double t8421;
  double t8365;
  double t8384;
  double t8464;
  double t8467;
  double t8469;
  double t8492;
  double t8496;
  double t8498;
  double t8502;
  double t8489;
  double t8490;
  double t8470;
  double t8475;
  double t8476;
  double t8477;
  double t8478;
  double t8481;
  double t8482;
  double t8552;
  double t8554;
  double t8555;
  double t8543;
  double t8545;
  double t8546;
  double t8461;
  double t8463;
  double t8483;
  double t8486;
  double t8487;
  double t8488;
  double t8505;
  double t8510;
  double t8584;
  double t8586;
  double t8591;
  double t8592;
  double t8512;
  double t8519;
  double t8524;
  double t8525;
  double t8526;
  double t8527;
  double t8529;
  double t8531;
  double t8532;
  double t8533;
  double t8534;
  double t8535;
  double t8536;
  double t8537;
  double t8540;
  double t8541;
  double t8542;
  double t8550;
  double t8560;
  double t8604;
  double t8605;
  double t8607;
  double t8609;
  double t8610;
  double t8611;
  double t8563;
  double t8564;
  t470 = Cos(var1[4]);
  t206 = Cos(var1[5]);
  t235 = Sin(var1[4]);
  t989 = Sin(var1[5]);
  t1275 = Cos(var1[3]);
  t469 = t206*t235;
  t991 = t470*t989;
  t995 = t469 + t991;
  t199 = Sin(var1[3]);
  t1378 = t470*t206;
  t1455 = -1.*t235*t989;
  t1546 = t1378 + t1455;
  t1799 = Cos(var1[2]);
  t1590 = t1275*t1546;
  t165 = Sin(var1[2]);
  t2808 = -1.*t206*t235;
  t2821 = -1.*t470*t989;
  t2838 = t2808 + t2821;
  t2311 = -1.*t206;
  t2312 = 1. + t2311;
  t2328 = -1.3127*t2312;
  t2531 = -1.3127*t206;
  t2568 = -0.06*t989;
  t2589 = t2328 + t2531 + t2568;
  t1069 = -1.*t199*t995;
  t1659 = t1069 + t1590;
  t1757 = -1.*t165*t1659;
  t1822 = t1275*t995;
  t1899 = t199*t1546;
  t1961 = t1822 + t1899;
  t2038 = -1.*t1799*t1961;
  t2143 = t1757 + t2038;
  t2903 = t199*t2838;
  t2908 = t2903 + t1590;
  t3063 = -1.*t1799*t2908;
  t3078 = t1275*t2838;
  t3122 = -1.*t199*t1546;
  t3165 = t3078 + t3122;
  t3256 = -1.*t165*t3165;
  t3297 = t3063 + t3256;
  t4442 = -1.*t470;
  t4475 = 1. + t4442;
  t4476 = -0.9063*t4475;
  t4579 = -0.06*t206*t235;
  t4589 = t470*t2589;
  t4611 = t4476 + t4579 + t4589;
  t4002 = 0.06*t470*t206;
  t4084 = 0.9063*t235;
  t4108 = t235*t2589;
  t4243 = t4002 + t4084 + t4108;
  t4823 = -1.*t165*t2908;
  t4831 = t1799*t3165;
  t4851 = t4823 + t4831;
  t4883 = t1799*t1659;
  t4935 = -1.*t165*t1961;
  t4939 = t4883 + t4935;
  t5658 = -1.*t1275;
  t5732 = 1. + t5658;
  t5736 = -0.4999*t5732;
  t5816 = t1275*t4611;
  t5851 = -1.*t199*t4243;
  t5880 = t5736 + t5816 + t5851;
  t5361 = 0.4999*t199;
  t5440 = t199*t4611;
  t5471 = t1275*t4243;
  t5510 = t5361 + t5440 + t5471;
  t2266 = 0.9063*t206;
  t2693 = t206*t2589;
  t2721 = 0.06*t206*t989;
  t2763 = t2266 + t2693 + t2721;
  t3400 = Power(t206,2);
  t3422 = -0.06*t3400;
  t3425 = 0.9063*t989;
  t3452 = t2589*t989;
  t3468 = t3422 + t3425 + t3452;
  t6400 = -1.*t1275*t995;
  t6428 = t6400 + t3122;
  t6435 = t1799*t6428;
  t6437 = t1757 + t6435;
  t4251 = t4243*t995;
  t4390 = 0.4999*t1546;
  t4629 = t4611*t1546;
  t4646 = t4251 + t4390 + t4629;
  t6534 = -1.*t199*t2838;
  t6583 = -1.*t1275*t1546;
  t6665 = t6534 + t6583;
  t6890 = t1799*t6665;
  t6904 = t6890 + t3256;
  t4672 = -1.*t4611*t2838;
  t4687 = 0.4999*t995;
  t4689 = -1.*t4243*t1546;
  t4715 = t4672 + t4687 + t4689;
  t5063 = t1799*t2908;
  t5064 = t165*t3165;
  t5070 = t5063 + t5064;
  t5206 = t165*t1659;
  t5211 = t1799*t1961;
  t5278 = t5206 + t5211;
  t5558 = -1.*t5510*t2908;
  t5978 = -1.*t5880*t3165;
  t5998 = t5558 + t5978;
  t6112 = t5880*t1659;
  t6191 = t5510*t1961;
  t6218 = t6112 + t6191;
  t8398 = -0.4999*t199;
  t8418 = -1.*t199*t4611;
  t8419 = -1.*t1275*t4243;
  t8421 = t8398 + t8418 + t8419;
  t8365 = 0.4999*t1275;
  t8384 = t8365 + t5816 + t5851;
  t8464 = -1.*t470*t206;
  t8467 = t235*t989;
  t8469 = t8464 + t8467;
  t8492 = -0.06*t470*t206;
  t8496 = -0.9063*t235;
  t8498 = -1.*t235*t2589;
  t8502 = t8492 + t8496 + t8498;
  t8489 = 0.9063*t470;
  t8490 = t8489 + t4579 + t4589;
  t8470 = t1275*t8469;
  t8475 = t6534 + t8470;
  t8476 = t1799*t8475;
  t8477 = t199*t8469;
  t8478 = t3078 + t8477;
  t8481 = -1.*t165*t8478;
  t8482 = t8476 + t8481;
  t8552 = t1275*t8490;
  t8554 = t199*t8502;
  t8555 = t8552 + t8554;
  t8543 = -1.*t199*t8490;
  t8545 = t1275*t8502;
  t8546 = t8543 + t8545;
  t8461 = -0.03428571*var2[5]*t4851;
  t8463 = 1.142857*t3468*t4851;
  t8483 = 1.142857*t2763*t8482;
  t8486 = 1.142857*t4715*t4851;
  t8487 = 0.4999*t2838;
  t8488 = t4611*t2838;
  t8505 = t4243*t1546;
  t8510 = -1.*t4243*t2838;
  t8584 = -0.06*t470*t989;
  t8586 = t4579 + t8584;
  t8591 = 0.06*t235*t989;
  t8592 = t8492 + t8591;
  t8512 = -1.*t4611*t8469;
  t8519 = 1.142857*t4646*t8482;
  t8524 = 2.285714*t4851*t4939;
  t8525 = 2.285714*t4851*t8482;
  t8526 = t8524 + t8525;
  t8527 = 0.5*var2[1]*t8526;
  t8529 = 1.142857*t4851*t5278;
  t8531 = 1.142857*t5070*t4939;
  t8532 = t165*t8475;
  t8533 = t1799*t8478;
  t8534 = t8532 + t8533;
  t8535 = 1.142857*t4851*t8534;
  t8536 = 1.142857*t5070*t8482;
  t8537 = t8529 + t8531 + t8535 + t8536;
  t8540 = 0.5*var2[0]*t8537;
  t8541 = 1.142857*t4851*t5998;
  t8542 = t5510*t2908;
  t8550 = t5880*t3165;
  t8560 = 1.142857*t6218*t8482;
  t8604 = -1.*t199*t8586;
  t8605 = t1275*t8592;
  t8607 = t8604 + t8605;
  t8609 = t1275*t8586;
  t8610 = t199*t8592;
  t8611 = t8609 + t8610;
  t8563 = -1.*t5880*t8475;
  t8564 = -1.*t5510*t8478;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(0.5*(1.142857*Power(t4851,2) + 1.142857*Power(t4939,2) + 1.142857*t3297*t5070 + 1.142857*t2143*t5278)*var2[0] + 0.5*(2.285714*t3297*t4851 + 2.285714*t2143*t4939)*var2[1] + 0.5*(1.142857*t2143*t5998 + 1.142857*t3297*t6218)*var2[2] + 0.5*(1.142857*t3297*t4646 + 1.142857*t2143*t4715)*var2[3] + 0.5*(1.142857*t2763*t3297 + 1.142857*t2143*t3468)*var2[4] - 0.03428571*t2143*var2[5]);
  p_output1[3]=var2[1]*(0.5*(1.142857*t4939*(t4883 + t165*t6428) + 1.142857*t5278*t6437 + 1.142857*t4851*(t4831 + t165*t6665) + 1.142857*t5070*t6904)*var2[0] + 0.5*(2.285714*t4939*t6437 + 2.285714*t4851*t6904)*var2[1] + 0.5*(1.142857*t5998*t6437 + 1.142857*t6218*t6904 + 1.142857*t4851*(t1659*t5510 + t5880*t6428 + t1961*t8384 + t1659*t8421) + 1.142857*t4939*(-1.*t3165*t5510 - 1.*t5880*t6665 - 1.*t2908*t8384 - 1.*t3165*t8421))*var2[2] + 0.5*(1.142857*t4715*t6437 + 1.142857*t4646*t6904)*var2[3] + 0.5*(1.142857*t3468*t6437 + 1.142857*t2763*t6904)*var2[4] - 0.03428571*t6437*var2[5]);
  p_output1[4]=var2[1]*(t8461 + t8527 + t8540 + 0.5*(t8541 + 1.142857*t4851*(t8542 + t1659*t8546 + t8550 + t1961*t8555) + t8560 + 1.142857*t4939*(-1.*t3165*t8546 - 1.*t2908*t8555 + t8563 + t8564))*var2[2] + 0.5*(t8486 + 1.142857*t4939*(t4390 - 1.*t1546*t8490 - 1.*t2838*t8502 + t8510 + t8512) + t8519 + 1.142857*t4851*(t8487 + t8488 + t1546*t8502 + t8505 + t8490*t995))*var2[3] + 0.5*(t8463 + t8483)*var2[4]);
  p_output1[5]=var2[1]*(t8461 + t8527 + t8540 + 0.5*(t8541 + t8560 + 1.142857*t4851*(t8542 + t8550 + t1659*t8607 + t1961*t8611) + 1.142857*t4939*(t8563 + t8564 - 1.*t3165*t8607 - 1.*t2908*t8611))*var2[2] + 0.5*(t8486 + t8519 + 1.142857*t4939*(t4390 + t8510 + t8512 - 1.*t1546*t8586 - 1.*t2838*t8592) + 1.142857*t4851*(t8487 + t8488 + t8505 + t1546*t8592 + t8586*t995))*var2[3] + 0.5*(1.142857*t2763*t4939 + t8463 + t8483 + 1.142857*t4851*(0. - 0.9063*t989 - 1.*t2589*t989 - 0.06*Power(t989,2)))*var2[4]);
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

#include "Ce3_vec_L4_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L4_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:40 GMT-08:00
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
  double t2525;
  double t2201;
  double t2242;
  double t2688;
  double t2879;
  double t2364;
  double t2697;
  double t2757;
  double t1965;
  double t2907;
  double t2999;
  double t3008;
  double t3496;
  double t3110;
  double t1951;
  double t4582;
  double t4593;
  double t4618;
  double t4298;
  double t4331;
  double t4344;
  double t4378;
  double t4422;
  double t4448;
  double t2758;
  double t3113;
  double t3164;
  double t3709;
  double t3783;
  double t3819;
  double t4075;
  double t4087;
  double t4646;
  double t4661;
  double t4695;
  double t4804;
  double t4907;
  double t4977;
  double t5030;
  double t5088;
  double t5632;
  double t5654;
  double t5749;
  double t5853;
  double t5875;
  double t5910;
  double t5313;
  double t5342;
  double t5372;
  double t5391;
  double t6221;
  double t6233;
  double t6242;
  double t6269;
  double t6273;
  double t6287;
  double t6493;
  double t6494;
  double t6506;
  double t6523;
  double t6625;
  double t6761;
  double t6416;
  double t6421;
  double t6428;
  double t6445;
  double t4118;
  double t4449;
  double t4525;
  double t4533;
  double t5109;
  double t5110;
  double t5127;
  double t5136;
  double t5146;
  double t7140;
  double t7169;
  double t7183;
  double t7205;
  double t5506;
  double t5627;
  double t5950;
  double t5954;
  double t7225;
  double t7227;
  double t7272;
  double t7301;
  double t7303;
  double t6017;
  double t6040;
  double t6047;
  double t6067;
  double t6348;
  double t6370;
  double t6461;
  double t6860;
  double t6876;
  double t6937;
  double t7009;
  double t7063;
  double t8088;
  double t8179;
  double t8180;
  double t8350;
  double t7960;
  double t7976;
  double t8529;
  double t8532;
  double t8533;
  double t8574;
  double t8582;
  double t8593;
  double t8594;
  double t8569;
  double t8570;
  double t8534;
  double t8535;
  double t8541;
  double t8542;
  double t8545;
  double t8549;
  double t8552;
  double t8641;
  double t8642;
  double t8643;
  double t8633;
  double t8634;
  double t8636;
  double t8516;
  double t8520;
  double t8554;
  double t8562;
  double t8567;
  double t8568;
  double t8596;
  double t8605;
  double t8668;
  double t8669;
  double t8671;
  double t8672;
  double t8609;
  double t8613;
  double t8616;
  double t8617;
  double t8618;
  double t8619;
  double t8620;
  double t8621;
  double t8622;
  double t8623;
  double t8624;
  double t8625;
  double t8626;
  double t8627;
  double t8628;
  double t8630;
  double t8632;
  double t8639;
  double t8648;
  double t8682;
  double t8683;
  double t8684;
  double t8686;
  double t8687;
  double t8688;
  double t8651;
  double t8652;
  t2525 = Cos(var1[7]);
  t2201 = Cos(var1[8]);
  t2242 = Sin(var1[7]);
  t2688 = Sin(var1[8]);
  t2879 = Cos(var1[6]);
  t2364 = t2201*t2242;
  t2697 = t2525*t2688;
  t2757 = t2364 + t2697;
  t1965 = Sin(var1[6]);
  t2907 = t2525*t2201;
  t2999 = -1.*t2242*t2688;
  t3008 = t2907 + t2999;
  t3496 = Sin(var1[2]);
  t3110 = t2879*t3008;
  t1951 = Cos(var1[2]);
  t4582 = -1.*t2201*t2242;
  t4593 = -1.*t2525*t2688;
  t4618 = t4582 + t4593;
  t4298 = -1.*t2201;
  t4331 = 1. + t4298;
  t4344 = -1.3127*t4331;
  t4378 = -1.3127*t2201;
  t4422 = -0.06*t2688;
  t4448 = t4344 + t4378 + t4422;
  t2758 = -1.*t1965*t2757;
  t3113 = t2758 + t3110;
  t3164 = t1951*t3113;
  t3709 = t2879*t2757;
  t3783 = t1965*t3008;
  t3819 = t3709 + t3783;
  t4075 = -1.*t3496*t3819;
  t4087 = t3164 + t4075;
  t4646 = t1965*t4618;
  t4661 = t4646 + t3110;
  t4695 = -1.*t3496*t4661;
  t4804 = t2879*t4618;
  t4907 = -1.*t1965*t3008;
  t4977 = t4804 + t4907;
  t5030 = t1951*t4977;
  t5088 = t4695 + t5030;
  t5632 = -1.*t2525;
  t5654 = 1. + t5632;
  t5749 = -0.9063*t5654;
  t5853 = -0.06*t2201*t2242;
  t5875 = t2525*t4448;
  t5910 = t5749 + t5853 + t5875;
  t5313 = 0.06*t2525*t2201;
  t5342 = 0.9063*t2242;
  t5372 = t2242*t4448;
  t5391 = t5313 + t5342 + t5372;
  t6221 = t1951*t4661;
  t6233 = t3496*t4977;
  t6242 = t6221 + t6233;
  t6269 = t3496*t3113;
  t6273 = t1951*t3819;
  t6287 = t6269 + t6273;
  t6493 = -1.*t2879;
  t6494 = 1. + t6493;
  t6506 = -0.4999*t6494;
  t6523 = t2879*t5910;
  t6625 = -1.*t1965*t5391;
  t6761 = t6506 + t6523 + t6625;
  t6416 = 0.4999*t1965;
  t6421 = t1965*t5910;
  t6428 = t2879*t5391;
  t6445 = t6416 + t6421 + t6428;
  t4118 = 0.9063*t2201;
  t4449 = t2201*t4448;
  t4525 = 0.06*t2201*t2688;
  t4533 = t4118 + t4449 + t4525;
  t5109 = Power(t2201,2);
  t5110 = -0.06*t5109;
  t5127 = 0.9063*t2688;
  t5136 = t4448*t2688;
  t5146 = t5110 + t5127 + t5136;
  t7140 = -1.*t2879*t2757;
  t7169 = t7140 + t4907;
  t7183 = t3496*t7169;
  t7205 = t3164 + t7183;
  t5506 = t5391*t2757;
  t5627 = 0.4999*t3008;
  t5950 = t5910*t3008;
  t5954 = t5506 + t5627 + t5950;
  t7225 = -1.*t1965*t4618;
  t7227 = -1.*t2879*t3008;
  t7272 = t7225 + t7227;
  t7301 = t3496*t7272;
  t7303 = t7301 + t5030;
  t6017 = -1.*t5910*t4618;
  t6040 = 0.4999*t2757;
  t6047 = -1.*t5391*t3008;
  t6067 = t6017 + t6040 + t6047;
  t6348 = -1.*t3496*t4977;
  t6370 = -1.*t3496*t3113;
  t6461 = -1.*t6445*t4661;
  t6860 = -1.*t6761*t4977;
  t6876 = t6461 + t6860;
  t6937 = t6761*t3113;
  t7009 = t6445*t3819;
  t7063 = t6937 + t7009;
  t8088 = -0.4999*t1965;
  t8179 = -1.*t1965*t5910;
  t8180 = -1.*t2879*t5391;
  t8350 = t8088 + t8179 + t8180;
  t7960 = 0.4999*t2879;
  t7976 = t7960 + t6523 + t6625;
  t8529 = -1.*t2525*t2201;
  t8532 = t2242*t2688;
  t8533 = t8529 + t8532;
  t8574 = -0.06*t2525*t2201;
  t8582 = -0.9063*t2242;
  t8593 = -1.*t2242*t4448;
  t8594 = t8574 + t8582 + t8593;
  t8569 = 0.9063*t2525;
  t8570 = t8569 + t5853 + t5875;
  t8534 = t2879*t8533;
  t8535 = t7225 + t8534;
  t8541 = t3496*t8535;
  t8542 = t1965*t8533;
  t8545 = t4804 + t8542;
  t8549 = t1951*t8545;
  t8552 = t8541 + t8549;
  t8641 = t2879*t8570;
  t8642 = t1965*t8594;
  t8643 = t8641 + t8642;
  t8633 = -1.*t1965*t8570;
  t8634 = t2879*t8594;
  t8636 = t8633 + t8634;
  t8516 = -0.03428571*var2[8]*t6242;
  t8520 = 1.142857*t5146*t6242;
  t8554 = 1.142857*t4533*t8552;
  t8562 = 1.142857*t6067*t6242;
  t8567 = 0.4999*t4618;
  t8568 = t5910*t4618;
  t8596 = t5391*t3008;
  t8605 = -1.*t5391*t4618;
  t8668 = -0.06*t2525*t2688;
  t8669 = t5853 + t8668;
  t8671 = 0.06*t2242*t2688;
  t8672 = t8574 + t8671;
  t8609 = -1.*t5910*t8533;
  t8613 = 1.142857*t5954*t8552;
  t8616 = 2.285714*t6242*t6287;
  t8617 = 2.285714*t6242*t8552;
  t8618 = t8616 + t8617;
  t8619 = 0.5*var2[0]*t8618;
  t8620 = 1.142857*t5088*t6287;
  t8621 = 1.142857*t6242*t4087;
  t8622 = 1.142857*t5088*t8552;
  t8623 = t1951*t8535;
  t8624 = -1.*t3496*t8545;
  t8625 = t8623 + t8624;
  t8626 = 1.142857*t6242*t8625;
  t8627 = t8620 + t8621 + t8622 + t8626;
  t8628 = 0.5*var2[1]*t8627;
  t8630 = 1.142857*t6242*t6876;
  t8632 = t6445*t4661;
  t8639 = t6761*t4977;
  t8648 = 1.142857*t7063*t8552;
  t8682 = -1.*t1965*t8669;
  t8683 = t2879*t8672;
  t8684 = t8682 + t8683;
  t8686 = t2879*t8669;
  t8687 = t1965*t8672;
  t8688 = t8686 + t8687;
  t8651 = -1.*t6761*t8535;
  t8652 = -1.*t6445*t8545;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(0.5*(2.285714*t5088*t6242 + 2.285714*t4087*t6287)*var2[0] + 0.5*(1.142857*Power(t4087,2) + 1.142857*Power(t5088,2) + 1.142857*t6242*(-1.*t1951*t4661 + t6348) + 1.142857*t6287*(-1.*t1951*t3819 + t6370))*var2[1] + 0.5*(1.142857*t4087*t6876 + 1.142857*t5088*t7063)*var2[2] + 0.5*(1.142857*t5088*t5954 + 1.142857*t4087*t6067)*var2[6] + 0.5*(1.142857*t4533*t5088 + 1.142857*t4087*t5146)*var2[7] - 0.03428571*t4087*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[0]*(0.5*(2.285714*t6287*t7205 + 2.285714*t6242*t7303)*var2[0] + 0.5*(1.142857*t6287*(t6370 + t1951*t7169) + 1.142857*t4087*t7205 + 1.142857*t6242*(t6348 + t1951*t7272) + 1.142857*t5088*t7303)*var2[1] + 0.5*(1.142857*t6876*t7205 + 1.142857*t7063*t7303 + 1.142857*t6242*(t3113*t6445 + t6761*t7169 + t3819*t7976 + t3113*t8350) + 1.142857*t6287*(-1.*t4977*t6445 - 1.*t6761*t7272 - 1.*t4661*t7976 - 1.*t4977*t8350))*var2[2] + 0.5*(1.142857*t6067*t7205 + 1.142857*t5954*t7303)*var2[6] + 0.5*(1.142857*t5146*t7205 + 1.142857*t4533*t7303)*var2[7] - 0.03428571*t7205*var2[8]);
  p_output1[7]=var2[0]*(t8516 + t8619 + t8628 + 0.5*(t8630 + 1.142857*t6242*(t8632 + t3113*t8636 + t8639 + t3819*t8643) + t8648 + 1.142857*t6287*(-1.*t4977*t8636 - 1.*t4661*t8643 + t8651 + t8652))*var2[2] + 0.5*(t8562 + 1.142857*t6242*(t8567 + t8568 + t2757*t8570 + t3008*t8594 + t8596) + 1.142857*t6287*(t5627 - 1.*t3008*t8570 - 1.*t4618*t8594 + t8605 + t8609) + t8613)*var2[6] + 0.5*(t8520 + t8554)*var2[7]);
  p_output1[8]=var2[0]*(t8516 + t8619 + t8628 + 0.5*(t8630 + t8648 + 1.142857*t6242*(t8632 + t8639 + t3113*t8684 + t3819*t8688) + 1.142857*t6287*(t8651 + t8652 - 1.*t4977*t8684 - 1.*t4661*t8688))*var2[2] + 0.5*(t8562 + t8613 + 1.142857*t6242*(t8567 + t8568 + t8596 + t2757*t8669 + t3008*t8672) + 1.142857*t6287*(t5627 + t8605 + t8609 - 1.*t3008*t8669 - 1.*t4618*t8672))*var2[6] + 0.5*(1.142857*(0. - 0.9063*t2688 - 0.06*Power(t2688,2) - 1.*t2688*t4448)*t6242 + 1.142857*t4533*t6287 + t8520 + t8554)*var2[7]);
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

#include "Ce3_vec_L7_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L7_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

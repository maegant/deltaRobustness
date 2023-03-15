/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:41 GMT-08:00
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
  double t367;
  double t49;
  double t87;
  double t465;
  double t1099;
  double t162;
  double t466;
  double t873;
  double t46;
  double t1101;
  double t1243;
  double t1257;
  double t1756;
  double t1271;
  double t43;
  double t3620;
  double t3623;
  double t3709;
  double t2364;
  double t2367;
  double t2424;
  double t2478;
  double t2480;
  double t2697;
  double t1095;
  double t1316;
  double t1496;
  double t1775;
  double t1851;
  double t1882;
  double t2096;
  double t2190;
  double t3736;
  double t3741;
  double t3783;
  double t3797;
  double t4087;
  double t4091;
  double t4115;
  double t4118;
  double t5096;
  double t5109;
  double t5110;
  double t5112;
  double t5127;
  double t5136;
  double t4646;
  double t4804;
  double t4833;
  double t5030;
  double t5749;
  double t5752;
  double t5853;
  double t5875;
  double t5877;
  double t5950;
  double t6352;
  double t6357;
  double t6375;
  double t6379;
  double t6384;
  double t6394;
  double t6337;
  double t6338;
  double t6340;
  double t6344;
  double t2324;
  double t2907;
  double t3110;
  double t3164;
  double t4188;
  double t4344;
  double t4378;
  double t4422;
  double t4449;
  double t6876;
  double t6904;
  double t6937;
  double t7009;
  double t5086;
  double t5088;
  double t5146;
  double t5187;
  double t7063;
  double t7067;
  double t7083;
  double t7115;
  double t7131;
  double t5300;
  double t5313;
  double t5342;
  double t5372;
  double t6150;
  double t6169;
  double t6200;
  double t6233;
  double t6242;
  double t6260;
  double t6345;
  double t6401;
  double t6403;
  double t6416;
  double t6421;
  double t6428;
  double t7634;
  double t7652;
  double t7657;
  double t7718;
  double t7589;
  double t7597;
  double t8489;
  double t8491;
  double t8496;
  double t8572;
  double t8574;
  double t8582;
  double t8595;
  double t8567;
  double t8568;
  double t8508;
  double t8509;
  double t8511;
  double t8516;
  double t8532;
  double t8534;
  double t8541;
  double t8655;
  double t8656;
  double t8657;
  double t8648;
  double t8649;
  double t8650;
  double t8486;
  double t8488;
  double t8542;
  double t8556;
  double t8557;
  double t8562;
  double t8598;
  double t8610;
  double t8685;
  double t8686;
  double t8689;
  double t8690;
  double t8613;
  double t8616;
  double t8621;
  double t8622;
  double t8623;
  double t8625;
  double t8626;
  double t8630;
  double t8632;
  double t8634;
  double t8637;
  double t8639;
  double t8641;
  double t8642;
  double t8645;
  double t8646;
  double t8647;
  double t8654;
  double t8661;
  double t8700;
  double t8701;
  double t8702;
  double t8704;
  double t8705;
  double t8706;
  double t8664;
  double t8665;
  t367 = Cos(var1[7]);
  t49 = Cos(var1[8]);
  t87 = Sin(var1[7]);
  t465 = Sin(var1[8]);
  t1099 = Cos(var1[6]);
  t162 = t49*t87;
  t466 = t367*t465;
  t873 = t162 + t466;
  t46 = Sin(var1[6]);
  t1101 = t367*t49;
  t1243 = -1.*t87*t465;
  t1257 = t1101 + t1243;
  t1756 = Cos(var1[2]);
  t1271 = t1099*t1257;
  t43 = Sin(var1[2]);
  t3620 = -1.*t49*t87;
  t3623 = -1.*t367*t465;
  t3709 = t3620 + t3623;
  t2364 = -1.*t49;
  t2367 = 1. + t2364;
  t2424 = -1.3127*t2367;
  t2478 = -1.3127*t49;
  t2480 = -0.06*t465;
  t2697 = t2424 + t2478 + t2480;
  t1095 = -1.*t46*t873;
  t1316 = t1095 + t1271;
  t1496 = -1.*t43*t1316;
  t1775 = t1099*t873;
  t1851 = t46*t1257;
  t1882 = t1775 + t1851;
  t2096 = -1.*t1756*t1882;
  t2190 = t1496 + t2096;
  t3736 = t46*t3709;
  t3741 = t3736 + t1271;
  t3783 = -1.*t1756*t3741;
  t3797 = t1099*t3709;
  t4087 = -1.*t46*t1257;
  t4091 = t3797 + t4087;
  t4115 = -1.*t43*t4091;
  t4118 = t3783 + t4115;
  t5096 = -1.*t367;
  t5109 = 1. + t5096;
  t5110 = -0.9063*t5109;
  t5112 = -0.06*t49*t87;
  t5127 = t367*t2697;
  t5136 = t5110 + t5112 + t5127;
  t4646 = 0.06*t367*t49;
  t4804 = 0.9063*t87;
  t4833 = t87*t2697;
  t5030 = t4646 + t4804 + t4833;
  t5749 = -1.*t43*t3741;
  t5752 = t1756*t4091;
  t5853 = t5749 + t5752;
  t5875 = t1756*t1316;
  t5877 = -1.*t43*t1882;
  t5950 = t5875 + t5877;
  t6352 = -1.*t1099;
  t6357 = 1. + t6352;
  t6375 = -0.4999*t6357;
  t6379 = t1099*t5136;
  t6384 = -1.*t46*t5030;
  t6394 = t6375 + t6379 + t6384;
  t6337 = 0.4999*t46;
  t6338 = t46*t5136;
  t6340 = t1099*t5030;
  t6344 = t6337 + t6338 + t6340;
  t2324 = 0.9063*t49;
  t2907 = t49*t2697;
  t3110 = 0.06*t49*t465;
  t3164 = t2324 + t2907 + t3110;
  t4188 = Power(t49,2);
  t4344 = -0.06*t4188;
  t4378 = 0.9063*t465;
  t4422 = t2697*t465;
  t4449 = t4344 + t4378 + t4422;
  t6876 = -1.*t1099*t873;
  t6904 = t6876 + t4087;
  t6937 = t1756*t6904;
  t7009 = t1496 + t6937;
  t5086 = t5030*t873;
  t5088 = 0.4999*t1257;
  t5146 = t5136*t1257;
  t5187 = t5086 + t5088 + t5146;
  t7063 = -1.*t46*t3709;
  t7067 = -1.*t1099*t1257;
  t7083 = t7063 + t7067;
  t7115 = t1756*t7083;
  t7131 = t7115 + t4115;
  t5300 = -1.*t5136*t3709;
  t5313 = 0.4999*t873;
  t5342 = -1.*t5030*t1257;
  t5372 = t5300 + t5313 + t5342;
  t6150 = t1756*t3741;
  t6169 = t43*t4091;
  t6200 = t6150 + t6169;
  t6233 = t43*t1316;
  t6242 = t1756*t1882;
  t6260 = t6233 + t6242;
  t6345 = -1.*t6344*t3741;
  t6401 = -1.*t6394*t4091;
  t6403 = t6345 + t6401;
  t6416 = t6394*t1316;
  t6421 = t6344*t1882;
  t6428 = t6416 + t6421;
  t7634 = -0.4999*t46;
  t7652 = -1.*t46*t5136;
  t7657 = -1.*t1099*t5030;
  t7718 = t7634 + t7652 + t7657;
  t7589 = 0.4999*t1099;
  t7597 = t7589 + t6379 + t6384;
  t8489 = -1.*t367*t49;
  t8491 = t87*t465;
  t8496 = t8489 + t8491;
  t8572 = -0.06*t367*t49;
  t8574 = -0.9063*t87;
  t8582 = -1.*t87*t2697;
  t8595 = t8572 + t8574 + t8582;
  t8567 = 0.9063*t367;
  t8568 = t8567 + t5112 + t5127;
  t8508 = t1099*t8496;
  t8509 = t7063 + t8508;
  t8511 = t1756*t8509;
  t8516 = t46*t8496;
  t8532 = t3797 + t8516;
  t8534 = -1.*t43*t8532;
  t8541 = t8511 + t8534;
  t8655 = t1099*t8568;
  t8656 = t46*t8595;
  t8657 = t8655 + t8656;
  t8648 = -1.*t46*t8568;
  t8649 = t1099*t8595;
  t8650 = t8648 + t8649;
  t8486 = -0.03428571*var2[8]*t5853;
  t8488 = 1.142857*t4449*t5853;
  t8542 = 1.142857*t3164*t8541;
  t8556 = 1.142857*t5372*t5853;
  t8557 = 0.4999*t3709;
  t8562 = t5136*t3709;
  t8598 = t5030*t1257;
  t8610 = -1.*t5030*t3709;
  t8685 = -0.06*t367*t465;
  t8686 = t5112 + t8685;
  t8689 = 0.06*t87*t465;
  t8690 = t8572 + t8689;
  t8613 = -1.*t5136*t8496;
  t8616 = 1.142857*t5187*t8541;
  t8621 = 2.285714*t5853*t5950;
  t8622 = 2.285714*t5853*t8541;
  t8623 = t8621 + t8622;
  t8625 = 0.5*var2[1]*t8623;
  t8626 = 1.142857*t5853*t6260;
  t8630 = 1.142857*t6200*t5950;
  t8632 = t43*t8509;
  t8634 = t1756*t8532;
  t8637 = t8632 + t8634;
  t8639 = 1.142857*t5853*t8637;
  t8641 = 1.142857*t6200*t8541;
  t8642 = t8626 + t8630 + t8639 + t8641;
  t8645 = 0.5*var2[0]*t8642;
  t8646 = 1.142857*t5853*t6403;
  t8647 = t6344*t3741;
  t8654 = t6394*t4091;
  t8661 = 1.142857*t6428*t8541;
  t8700 = -1.*t46*t8686;
  t8701 = t1099*t8690;
  t8702 = t8700 + t8701;
  t8704 = t1099*t8686;
  t8705 = t46*t8690;
  t8706 = t8704 + t8705;
  t8664 = -1.*t6394*t8509;
  t8665 = -1.*t6344*t8532;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(0.5*(1.142857*Power(t5853,2) + 1.142857*Power(t5950,2) + 1.142857*t4118*t6200 + 1.142857*t2190*t6260)*var2[0] + 0.5*(2.285714*t4118*t5853 + 2.285714*t2190*t5950)*var2[1] + 0.5*(1.142857*t2190*t6403 + 1.142857*t4118*t6428)*var2[2] + 0.5*(1.142857*t4118*t5187 + 1.142857*t2190*t5372)*var2[6] + 0.5*(1.142857*t3164*t4118 + 1.142857*t2190*t4449)*var2[7] - 0.03428571*t2190*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[1]*(0.5*(1.142857*t5950*(t5875 + t43*t6904) + 1.142857*t6260*t7009 + 1.142857*t5853*(t5752 + t43*t7083) + 1.142857*t6200*t7131)*var2[0] + 0.5*(2.285714*t5950*t7009 + 2.285714*t5853*t7131)*var2[1] + 0.5*(1.142857*t6403*t7009 + 1.142857*t6428*t7131 + 1.142857*t5853*(t1316*t6344 + t6394*t6904 + t1882*t7597 + t1316*t7718) + 1.142857*t5950*(-1.*t4091*t6344 - 1.*t6394*t7083 - 1.*t3741*t7597 - 1.*t4091*t7718))*var2[2] + 0.5*(1.142857*t5372*t7009 + 1.142857*t5187*t7131)*var2[6] + 0.5*(1.142857*t4449*t7009 + 1.142857*t3164*t7131)*var2[7] - 0.03428571*t7009*var2[8]);
  p_output1[7]=var2[1]*(t8486 + t8625 + t8645 + 0.5*(t8646 + 1.142857*t5853*(t8647 + t1316*t8650 + t8654 + t1882*t8657) + t8661 + 1.142857*t5950*(-1.*t4091*t8650 - 1.*t3741*t8657 + t8664 + t8665))*var2[2] + 0.5*(t8556 + 1.142857*t5950*(t5088 - 1.*t1257*t8568 - 1.*t3709*t8595 + t8610 + t8613) + t8616 + 1.142857*t5853*(t8557 + t8562 + t1257*t8595 + t8598 + t8568*t873))*var2[6] + 0.5*(t8488 + t8542)*var2[7]);
  p_output1[8]=var2[1]*(t8486 + t8625 + t8645 + 0.5*(t8646 + t8661 + 1.142857*t5853*(t8647 + t8654 + t1316*t8702 + t1882*t8706) + 1.142857*t5950*(t8664 + t8665 - 1.*t4091*t8702 - 1.*t3741*t8706))*var2[2] + 0.5*(t8556 + t8616 + 1.142857*t5950*(t5088 + t8610 + t8613 - 1.*t1257*t8686 - 1.*t3709*t8690) + 1.142857*t5853*(t8557 + t8562 + t8598 + t1257*t8690 + t8686*t873))*var2[6] + 0.5*(1.142857*(0. - 0.9063*t465 - 1.*t2697*t465 - 0.06*Power(t465,2))*t5853 + 1.142857*t3164*t5950 + t8488 + t8542)*var2[7]);
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

#include "Ce3_vec_L7_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L7_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

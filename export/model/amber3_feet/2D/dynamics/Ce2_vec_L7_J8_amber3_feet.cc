/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:53 GMT-08:00
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
  double t1522;
  double t537;
  double t778;
  double t2087;
  double t2332;
  double t1276;
  double t2131;
  double t2257;
  double t248;
  double t2532;
  double t2591;
  double t2607;
  double t116;
  double t2302;
  double t2614;
  double t2617;
  double t2618;
  double t2625;
  double t2649;
  double t2656;
  double t2661;
  double t2689;
  double t2848;
  double t2990;
  double t2991;
  double t2998;
  double t3021;
  double t3056;
  double t3281;
  double t3489;
  double t3490;
  double t3523;
  double t3937;
  double t3951;
  double t4101;
  double t4110;
  double t4129;
  double t4165;
  double t4205;
  double t4215;
  double t4216;
  double t4274;
  double t4315;
  double t4349;
  double t4495;
  double t4734;
  double t4738;
  double t4744;
  double t4765;
  double t4701;
  double t4714;
  double t4938;
  double t3417;
  double t3562;
  double t3575;
  double t3625;
  double t3661;
  double t3733;
  double t3834;
  double t3838;
  double t5052;
  double t5058;
  double t5070;
  double t5094;
  double t5104;
  double t5172;
  double t5300;
  double t5363;
  double t5976;
  double t5978;
  double t5998;
  double t6435;
  double t6437;
  double t6466;
  double t6470;
  double t6505;
  double t6527;
  double t6600;
  double t6665;
  double t6692;
  double t6712;
  double t7158;
  double t7208;
  double t7280;
  double t7048;
  double t7065;
  double t7094;
  double t2919;
  double t2930;
  double t2982;
  double t3299;
  double t3331;
  double t3351;
  double t3352;
  double t3354;
  double t3355;
  double t6257;
  double t6323;
  double t6326;
  double t4187;
  double t4220;
  double t4546;
  double t4605;
  double t4672;
  double t4689;
  double t4731;
  double t4769;
  double t4819;
  double t4820;
  double t4858;
  double t4862;
  double t4967;
  double t4997;
  double t5012;
  double t6128;
  double t6219;
  double t6220;
  double t5473;
  double t5511;
  double t5576;
  double t6043;
  double t6224;
  double t6227;
  double t6352;
  double t6365;
  double t6487;
  double t6758;
  double t6826;
  double t6957;
  double t7138;
  double t7140;
  double t7304;
  double t7406;
  double t7947;
  double t8073;
  double t8074;
  double t8147;
  double t8252;
  double t8275;
  double t8302;
  double t8313;
  double t6945;
  double t7499;
  double t8139;
  double t8331;
  double t8334;
  double t8422;
  double t8423;
  double t8425;
  double t8428;
  double t8429;
  double t4646;
  double t4851;
  double t5433;
  double t5587;
  double t5597;
  double t8386;
  double t8389;
  double t8406;
  double t8409;
  double t8411;
  double t8444;
  double t8445;
  double t8447;
  double t8448;
  double t8450;
  double t8463;
  double t8464;
  double t8466;
  double t3341;
  double t3839;
  double t3872;
  double t8365;
  double t8367;
  double t8381;
  double t8436;
  double t8441;
  double t8442;
  t1522 = Cos(var1[7]);
  t537 = Cos(var1[8]);
  t778 = Sin(var1[7]);
  t2087 = Sin(var1[8]);
  t2332 = Cos(var1[6]);
  t1276 = -1.*t537*t778;
  t2131 = -1.*t1522*t2087;
  t2257 = t1276 + t2131;
  t248 = Sin(var1[6]);
  t2532 = t1522*t537;
  t2591 = -1.*t778*t2087;
  t2607 = t2532 + t2591;
  t116 = Cos(var1[2]);
  t2302 = t248*t2257;
  t2614 = t2332*t2607;
  t2617 = t2302 + t2614;
  t2618 = t116*t2617;
  t2625 = Sin(var1[2]);
  t2649 = t2332*t2257;
  t2656 = -1.*t248*t2607;
  t2661 = t2649 + t2656;
  t2689 = t2625*t2661;
  t2848 = t2618 + t2689;
  t2990 = -1.*t537;
  t2991 = 1. + t2990;
  t2998 = -1.3127*t2991;
  t3021 = -1.3127*t537;
  t3056 = -0.06*t2087;
  t3281 = t2998 + t3021 + t3056;
  t3489 = -1.*t1522*t537;
  t3490 = t778*t2087;
  t3523 = t3489 + t3490;
  t3937 = -1.*t1522;
  t3951 = 1. + t3937;
  t4101 = -0.9063*t3951;
  t4110 = -0.06*t537*t778;
  t4129 = t1522*t3281;
  t4165 = t4101 + t4110 + t4129;
  t4205 = t537*t778;
  t4215 = t1522*t2087;
  t4216 = t4205 + t4215;
  t4274 = 0.06*t1522*t537;
  t4315 = 0.9063*t778;
  t4349 = t778*t3281;
  t4495 = t4274 + t4315 + t4349;
  t4734 = -0.06*t1522*t537;
  t4738 = -0.9063*t778;
  t4744 = -1.*t778*t3281;
  t4765 = t4734 + t4738 + t4744;
  t4701 = 0.9063*t1522;
  t4714 = t4701 + t4110 + t4129;
  t4938 = 0.4999*t2607;
  t3417 = -1.*t248*t2257;
  t3562 = t2332*t3523;
  t3575 = t3417 + t3562;
  t3625 = t2625*t3575;
  t3661 = t248*t3523;
  t3733 = t2649 + t3661;
  t3834 = t116*t3733;
  t3838 = t3625 + t3834;
  t5052 = -1.*t248*t4216;
  t5058 = t5052 + t2614;
  t5070 = t2625*t5058;
  t5094 = t2332*t4216;
  t5104 = t248*t2607;
  t5172 = t5094 + t5104;
  t5300 = t116*t5172;
  t5363 = t5070 + t5300;
  t5976 = -1.*t2625*t2617;
  t5978 = t116*t2661;
  t5998 = t5976 + t5978;
  t6435 = 0.4999*t248;
  t6437 = t248*t4165;
  t6466 = t2332*t4495;
  t6470 = t6435 + t6437 + t6466;
  t6505 = -1.*t2332;
  t6527 = 1. + t6505;
  t6600 = -0.4999*t6527;
  t6665 = t2332*t4165;
  t6692 = -1.*t248*t4495;
  t6712 = t6600 + t6665 + t6692;
  t7158 = t2332*t4714;
  t7208 = t248*t4765;
  t7280 = t7158 + t7208;
  t7048 = -1.*t248*t4714;
  t7065 = t2332*t4765;
  t7094 = t7048 + t7065;
  t2919 = Power(t537,2);
  t2930 = -0.06*t2919;
  t2982 = 0.9063*t2087;
  t3299 = t3281*t2087;
  t3331 = t2930 + t2982 + t3299;
  t3351 = 0.9063*t537;
  t3352 = t537*t3281;
  t3354 = 0.06*t537*t2087;
  t3355 = t3351 + t3352 + t3354;
  t6257 = t116*t3575;
  t6323 = -1.*t2625*t3733;
  t6326 = t6257 + t6323;
  t4187 = -1.*t4165*t2257;
  t4220 = 0.4999*t4216;
  t4546 = -1.*t4495*t2607;
  t4605 = t4187 + t4220 + t4546;
  t4672 = 0.4999*t2257;
  t4689 = t4165*t2257;
  t4731 = t4714*t4216;
  t4769 = t4765*t2607;
  t4819 = t4495*t2607;
  t4820 = t4672 + t4689 + t4731 + t4769 + t4819;
  t4858 = -1.*t4765*t2257;
  t4862 = -1.*t4495*t2257;
  t4967 = -1.*t4714*t2607;
  t4997 = -1.*t4165*t3523;
  t5012 = t4858 + t4862 + t4938 + t4967 + t4997;
  t6128 = t116*t5058;
  t6219 = -1.*t2625*t5172;
  t6220 = t6128 + t6219;
  t5473 = t4495*t4216;
  t5511 = t4165*t2607;
  t5576 = t5473 + t4938 + t5511;
  t6043 = 1.142857*t5998*t5363;
  t6224 = 1.142857*t2848*t6220;
  t6227 = 1.142857*t5998*t3838;
  t6352 = 1.142857*t2848*t6326;
  t6365 = t6043 + t6224 + t6227 + t6352;
  t6487 = -1.*t6470*t2617;
  t6758 = -1.*t6712*t2661;
  t6826 = t6487 + t6758;
  t6957 = t6470*t2617;
  t7138 = t7094*t5058;
  t7140 = t6712*t2661;
  t7304 = t7280*t5172;
  t7406 = t6957 + t7138 + t7140 + t7304;
  t7947 = t6712*t5058;
  t8073 = t6470*t5172;
  t8074 = t7947 + t8073;
  t8147 = -1.*t7280*t2617;
  t8252 = -1.*t7094*t2661;
  t8275 = -1.*t6712*t3575;
  t8302 = -1.*t6470*t3733;
  t8313 = t8147 + t8252 + t8275 + t8302;
  t6945 = 1.142857*t2848*t6826;
  t7499 = 1.142857*t2848*t7406;
  t8139 = 1.142857*t8074*t3838;
  t8331 = 1.142857*t5363*t8313;
  t8334 = t6945 + t7499 + t8139 + t8331;
  t8422 = 1.142857*t5998*t6826;
  t8423 = 1.142857*t5998*t7406;
  t8425 = 1.142857*t8074*t6326;
  t8428 = 1.142857*t6220*t8313;
  t8429 = t8422 + t8423 + t8425 + t8428;
  t4646 = 1.142857*t4605*t2848;
  t4851 = 1.142857*t4820*t2848;
  t5433 = 1.142857*t5012*t5363;
  t5587 = 1.142857*t5576*t3838;
  t5597 = t4646 + t4851 + t5433 + t5587;
  t8386 = 1.142857*t4605*t5998;
  t8389 = 1.142857*t4820*t5998;
  t8406 = 1.142857*t5012*t6220;
  t8409 = 1.142857*t5576*t6326;
  t8411 = t8386 + t8389 + t8406 + t8409;
  t8444 = 1.142857*t5012*t6826;
  t8445 = 1.142857*t5576*t7406;
  t8447 = 1.142857*t4820*t8074;
  t8448 = 1.142857*t4605*t8313;
  t8450 = t8444 + t8445 + t8447 + t8448;
  t8463 = 1.142857*t3355*t4820;
  t8464 = 1.142857*t3331*t5012;
  t8466 = t8463 + t8464;
  t3341 = 1.142857*t3331*t2848;
  t3839 = 1.142857*t3355*t3838;
  t3872 = t3341 + t3839;
  t8365 = 1.142857*t3331*t5998;
  t8367 = 1.142857*t3355*t6326;
  t8381 = t8365 + t8367;
  t8436 = 1.142857*t3355*t7406;
  t8441 = 1.142857*t3331*t8313;
  t8442 = t8436 + t8441;
  p_output1[0]=var2[7]*(-0.5*(2.285714*t2848*t3838 + 2.285714*t2848*t5363)*var2[0] - 0.5*t6365*var2[1] - 0.5*t8334*var2[2] - 0.5*t5597*var2[6] - 0.5*t3872*var2[7] + 0.03428571*t2848*var2[8]);
  p_output1[1]=var2[7]*(-0.5*t6365*var2[0] - 0.5*(2.285714*t5998*t6220 + 2.285714*t5998*t6326)*var2[1] - 0.5*t8429*var2[2] - 0.5*t8411*var2[6] - 0.5*t8381*var2[7] + 0.03428571*t5998*var2[8]);
  p_output1[2]=var2[7]*(-0.5*t8334*var2[0] - 0.5*t8429*var2[1] - 0.5*(2.285714*t7406*t8074 + 2.285714*t6826*t8313)*var2[2] - 0.5*t8450*var2[6] - 0.5*t8442*var2[7] + 0.03428571*t8313*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[7]*(-0.5*t5597*var2[0] - 0.5*t8411*var2[1] - 0.5*t8450*var2[2] - 0.5*(2.285714*t4605*t5012 + 2.285714*t4820*t5576)*var2[6] - 0.5*t8466*var2[7] + 0.03428571*t5012*var2[8]);
  p_output1[7]=(-0.5*t3872*var2[0] - 0.5*t8381*var2[1] - 0.5*t8442*var2[2] - 0.5*t8466*var2[6])*var2[7];
  p_output1[8]=(0.03428571*t2848*var2[0] + 0.03428571*t5998*var2[1] + 0.03428571*t8313*var2[2] + 0.03428571*t5012*var2[6])*var2[7];
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

#include "Ce2_vec_L7_J8_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L7_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

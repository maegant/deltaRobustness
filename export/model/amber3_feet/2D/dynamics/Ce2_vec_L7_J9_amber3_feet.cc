/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:54 GMT-08:00
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
  double t1832;
  double t1531;
  double t1821;
  double t1917;
  double t2500;
  double t1824;
  double t2302;
  double t2443;
  double t1008;
  double t2524;
  double t2532;
  double t2541;
  double t116;
  double t2457;
  double t2614;
  double t2618;
  double t2646;
  double t2649;
  double t2689;
  double t2848;
  double t2909;
  double t2919;
  double t2930;
  double t3056;
  double t3170;
  double t3299;
  double t3331;
  double t3341;
  double t3351;
  double t3834;
  double t3838;
  double t3839;
  double t3585;
  double t3625;
  double t3651;
  double t3661;
  double t4215;
  double t4220;
  double t4274;
  double t4701;
  double t4731;
  double t4734;
  double t4738;
  double t4769;
  double t4819;
  double t4851;
  double t4938;
  double t4956;
  double t4958;
  double t5155;
  double t5298;
  double t5347;
  double t5363;
  double t5426;
  double t3893;
  double t3917;
  double t3981;
  double t3986;
  double t3998;
  double t4101;
  double t4109;
  double t4110;
  double t5523;
  double t4205;
  double t4315;
  double t4349;
  double t4548;
  double t4605;
  double t4632;
  double t4646;
  double t4672;
  double t6220;
  double t6224;
  double t6227;
  double t6665;
  double t6826;
  double t6923;
  double t6945;
  double t7042;
  double t7065;
  double t7138;
  double t7140;
  double t7158;
  double t7208;
  double t8073;
  double t8074;
  double t8139;
  double t8331;
  double t8346;
  double t8349;
  double t2982;
  double t2998;
  double t3021;
  double t3352;
  double t3354;
  double t3379;
  double t3381;
  double t3403;
  double t3490;
  double t3562;
  double t6257;
  double t6326;
  double t6352;
  double t6437;
  double t6446;
  double t6466;
  double t4820;
  double t4829;
  double t5012;
  double t5058;
  double t5094;
  double t5104;
  double t5300;
  double t5310;
  double t5433;
  double t5439;
  double t5511;
  double t5576;
  double t5587;
  double t5598;
  double t5602;
  double t5798;
  double t5809;
  double t5918;
  double t6252;
  double t6389;
  double t6435;
  double t6511;
  double t6539;
  double t6957;
  double t7304;
  double t7342;
  double t7499;
  double t7947;
  double t8313;
  double t8350;
  double t8361;
  double t8367;
  double t8384;
  double t8386;
  double t8406;
  double t8409;
  double t8413;
  double t8416;
  double t8418;
  double t7406;
  double t8365;
  double t8389;
  double t8419;
  double t8420;
  double t8456;
  double t8457;
  double t8460;
  double t8461;
  double t8462;
  double t5070;
  double t5473;
  double t5666;
  double t5922;
  double t5924;
  double t8441;
  double t8443;
  double t8444;
  double t8445;
  double t8447;
  double t8475;
  double t8476;
  double t8477;
  double t8478;
  double t8479;
  double t8491;
  double t8492;
  double t8493;
  double t8494;
  double t8495;
  double t3355;
  double t3582;
  double t4129;
  double t4687;
  double t4688;
  double t8428;
  double t8431;
  double t8432;
  double t8434;
  double t8435;
  double t8469;
  double t8470;
  double t8471;
  double t8472;
  double t8473;
  t1832 = Cos(var1[7]);
  t1531 = Cos(var1[8]);
  t1821 = Sin(var1[7]);
  t1917 = Sin(var1[8]);
  t2500 = Cos(var1[6]);
  t1824 = -1.*t1531*t1821;
  t2302 = -1.*t1832*t1917;
  t2443 = t1824 + t2302;
  t1008 = Sin(var1[6]);
  t2524 = t1832*t1531;
  t2532 = -1.*t1821*t1917;
  t2541 = t2524 + t2532;
  t116 = Cos(var1[2]);
  t2457 = t1008*t2443;
  t2614 = t2500*t2541;
  t2618 = t2457 + t2614;
  t2646 = t116*t2618;
  t2649 = Sin(var1[2]);
  t2689 = t2500*t2443;
  t2848 = -1.*t1008*t2541;
  t2909 = t2689 + t2848;
  t2919 = t2649*t2909;
  t2930 = t2646 + t2919;
  t3056 = -1.*t1531;
  t3170 = 1. + t3056;
  t3299 = -1.3127*t3170;
  t3331 = -1.3127*t1531;
  t3341 = -0.06*t1917;
  t3351 = t3299 + t3331 + t3341;
  t3834 = t1531*t1821;
  t3838 = t1832*t1917;
  t3839 = t3834 + t3838;
  t3585 = 0.9063*t1531;
  t3625 = t1531*t3351;
  t3651 = 0.06*t1531*t1917;
  t3661 = t3585 + t3625 + t3651;
  t4215 = -1.*t1832*t1531;
  t4220 = t1821*t1917;
  t4274 = t4215 + t4220;
  t4701 = -1.*t1832;
  t4731 = 1. + t4701;
  t4734 = -0.9063*t4731;
  t4738 = -0.06*t1531*t1821;
  t4769 = t1832*t3351;
  t4819 = t4734 + t4738 + t4769;
  t4851 = 0.06*t1832*t1531;
  t4938 = 0.9063*t1821;
  t4956 = t1821*t3351;
  t4958 = t4851 + t4938 + t4956;
  t5155 = -0.06*t1832*t1917;
  t5298 = t4738 + t5155;
  t5347 = -0.06*t1832*t1531;
  t5363 = 0.06*t1821*t1917;
  t5426 = t5347 + t5363;
  t3893 = -1.*t1008*t3839;
  t3917 = t3893 + t2614;
  t3981 = t2649*t3917;
  t3986 = t2500*t3839;
  t3998 = t1008*t2541;
  t4101 = t3986 + t3998;
  t4109 = t116*t4101;
  t4110 = t3981 + t4109;
  t5523 = 0.4999*t2541;
  t4205 = -1.*t1008*t2443;
  t4315 = t2500*t4274;
  t4349 = t4205 + t4315;
  t4548 = t2649*t4349;
  t4605 = t1008*t4274;
  t4632 = t2689 + t4605;
  t4646 = t116*t4632;
  t4672 = t4548 + t4646;
  t6220 = -1.*t2649*t2618;
  t6224 = t116*t2909;
  t6227 = t6220 + t6224;
  t6665 = 0.4999*t1008;
  t6826 = t1008*t4819;
  t6923 = t2500*t4958;
  t6945 = t6665 + t6826 + t6923;
  t7042 = -1.*t2500;
  t7065 = 1. + t7042;
  t7138 = -0.4999*t7065;
  t7140 = t2500*t4819;
  t7158 = -1.*t1008*t4958;
  t7208 = t7138 + t7140 + t7158;
  t8073 = -1.*t1008*t5298;
  t8074 = t2500*t5426;
  t8139 = t8073 + t8074;
  t8331 = t2500*t5298;
  t8346 = t1008*t5426;
  t8349 = t8331 + t8346;
  t2982 = Power(t1531,2);
  t2998 = -0.06*t2982;
  t3021 = 0.9063*t1917;
  t3352 = t3351*t1917;
  t3354 = t2998 + t3021 + t3352;
  t3379 = -0.9063*t1917;
  t3381 = -1.*t3351*t1917;
  t3403 = Power(t1917,2);
  t3490 = -0.06*t3403;
  t3562 = 0. + t3379 + t3381 + t3490;
  t6257 = t116*t3917;
  t6326 = -1.*t2649*t4101;
  t6352 = t6257 + t6326;
  t6437 = t116*t4349;
  t6446 = -1.*t2649*t4632;
  t6466 = t6437 + t6446;
  t4820 = -1.*t4819*t2443;
  t4829 = 0.4999*t3839;
  t5012 = -1.*t4958*t2541;
  t5058 = t4820 + t4829 + t5012;
  t5094 = 0.4999*t2443;
  t5104 = t4819*t2443;
  t5300 = t5298*t3839;
  t5310 = t4958*t2541;
  t5433 = t2541*t5426;
  t5439 = t5094 + t5104 + t5300 + t5310 + t5433;
  t5511 = -1.*t4958*t2443;
  t5576 = -1.*t5298*t2541;
  t5587 = -1.*t2443*t5426;
  t5598 = -1.*t4819*t4274;
  t5602 = t5511 + t5523 + t5576 + t5587 + t5598;
  t5798 = t4958*t3839;
  t5809 = t4819*t2541;
  t5918 = t5798 + t5523 + t5809;
  t6252 = 1.142857*t6227*t4110;
  t6389 = 1.142857*t2930*t6352;
  t6435 = 1.142857*t6227*t4672;
  t6511 = 1.142857*t2930*t6466;
  t6539 = t6252 + t6389 + t6435 + t6511;
  t6957 = -1.*t6945*t2618;
  t7304 = -1.*t7208*t2909;
  t7342 = t6957 + t7304;
  t7499 = t6945*t2618;
  t7947 = t7208*t2909;
  t8313 = t3917*t8139;
  t8350 = t4101*t8349;
  t8361 = t7499 + t7947 + t8313 + t8350;
  t8367 = t7208*t3917;
  t8384 = t6945*t4101;
  t8386 = t8367 + t8384;
  t8406 = -1.*t2909*t8139;
  t8409 = -1.*t2618*t8349;
  t8413 = -1.*t7208*t4349;
  t8416 = -1.*t6945*t4632;
  t8418 = t8406 + t8409 + t8413 + t8416;
  t7406 = 1.142857*t2930*t7342;
  t8365 = 1.142857*t2930*t8361;
  t8389 = 1.142857*t8386*t4672;
  t8419 = 1.142857*t4110*t8418;
  t8420 = t7406 + t8365 + t8389 + t8419;
  t8456 = 1.142857*t6227*t7342;
  t8457 = 1.142857*t6227*t8361;
  t8460 = 1.142857*t8386*t6466;
  t8461 = 1.142857*t6352*t8418;
  t8462 = t8456 + t8457 + t8460 + t8461;
  t5070 = 1.142857*t5058*t2930;
  t5473 = 1.142857*t5439*t2930;
  t5666 = 1.142857*t5602*t4110;
  t5922 = 1.142857*t5918*t4672;
  t5924 = t5070 + t5473 + t5666 + t5922;
  t8441 = 1.142857*t5058*t6227;
  t8443 = 1.142857*t5439*t6227;
  t8444 = 1.142857*t5602*t6352;
  t8445 = 1.142857*t5918*t6466;
  t8447 = t8441 + t8443 + t8444 + t8445;
  t8475 = 1.142857*t5602*t7342;
  t8476 = 1.142857*t5439*t8386;
  t8477 = 1.142857*t5918*t8361;
  t8478 = 1.142857*t5058*t8418;
  t8479 = t8475 + t8476 + t8477 + t8478;
  t8491 = 1.142857*t3562*t5918;
  t8492 = 1.142857*t3661*t5058;
  t8493 = 1.142857*t3661*t5439;
  t8494 = 1.142857*t3354*t5602;
  t8495 = t8491 + t8492 + t8493 + t8494;
  t3355 = 1.142857*t3354*t2930;
  t3582 = 1.142857*t3562*t2930;
  t4129 = 1.142857*t3661*t4110;
  t4687 = 1.142857*t3661*t4672;
  t4688 = t3355 + t3582 + t4129 + t4687;
  t8428 = 1.142857*t3354*t6227;
  t8431 = 1.142857*t3562*t6227;
  t8432 = 1.142857*t3661*t6352;
  t8434 = 1.142857*t3661*t6466;
  t8435 = t8428 + t8431 + t8432 + t8434;
  t8469 = 1.142857*t3661*t7342;
  t8470 = 1.142857*t3562*t8386;
  t8471 = 1.142857*t3661*t8361;
  t8472 = 1.142857*t3354*t8418;
  t8473 = t8469 + t8470 + t8471 + t8472;
  p_output1[0]=var2[8]*(-0.5*(2.285714*t2930*t4110 + 2.285714*t2930*t4672)*var2[0] - 0.5*t6539*var2[1] - 0.5*t8420*var2[2] - 0.5*t5924*var2[6] - 0.5*t4688*var2[7] + 0.03428571*t2930*var2[8]);
  p_output1[1]=var2[8]*(-0.5*t6539*var2[0] - 0.5*(2.285714*t6227*t6352 + 2.285714*t6227*t6466)*var2[1] - 0.5*t8462*var2[2] - 0.5*t8447*var2[6] - 0.5*t8435*var2[7] + 0.03428571*t6227*var2[8]);
  p_output1[2]=var2[8]*(-0.5*t8420*var2[0] - 0.5*t8462*var2[1] - 0.5*(2.285714*t8361*t8386 + 2.285714*t7342*t8418)*var2[2] - 0.5*t8479*var2[6] - 0.5*t8473*var2[7] + 0.03428571*t8418*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[8]*(-0.5*t5924*var2[0] - 0.5*t8447*var2[1] - 0.5*t8479*var2[2] - 0.5*(2.285714*t5058*t5602 + 2.285714*t5439*t5918)*var2[6] - 0.5*t8495*var2[7] + 0.03428571*t5602*var2[8]);
  p_output1[7]=var2[8]*(-0.5*t4688*var2[0] - 0.5*t8435*var2[1] - 0.5*t8473*var2[2] - 0.5*t8495*var2[6] - 0.5*(2.285714*t3354*t3661 + 2.285714*t3562*t3661)*var2[7] + 0.03428571*t3661*var2[8]);
  p_output1[8]=(0.03428571*t2930*var2[0] + 0.03428571*t6227*var2[1] + 0.03428571*t8418*var2[2] + 0.03428571*t5602*var2[6] + 0.03428571*t3661*var2[7])*var2[8];
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

#include "Ce2_vec_L7_J9_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L7_J9_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

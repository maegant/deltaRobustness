/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:32 GMT-08:00
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
  double t1005;
  double t637;
  double t847;
  double t1074;
  double t1389;
  double t1004;
  double t1250;
  double t1267;
  double t207;
  double t1440;
  double t1449;
  double t1452;
  double t127;
  double t1335;
  double t1460;
  double t1461;
  double t1478;
  double t1553;
  double t1571;
  double t1583;
  double t1726;
  double t1731;
  double t1839;
  double t2160;
  double t2289;
  double t2402;
  double t2451;
  double t2455;
  double t2613;
  double t3401;
  double t3406;
  double t3442;
  double t3142;
  double t3325;
  double t3329;
  double t3331;
  double t3825;
  double t3925;
  double t4009;
  double t4656;
  double t4671;
  double t4672;
  double t4706;
  double t4777;
  double t4917;
  double t5070;
  double t5100;
  double t5133;
  double t5189;
  double t5405;
  double t5411;
  double t5511;
  double t5536;
  double t5537;
  double t3443;
  double t3489;
  double t3490;
  double t3492;
  double t3523;
  double t3537;
  double t3590;
  double t3661;
  double t5809;
  double t3762;
  double t4070;
  double t4116;
  double t4187;
  double t4193;
  double t4258;
  double t4302;
  double t4495;
  double t6476;
  double t6487;
  double t6527;
  double t7947;
  double t8139;
  double t8147;
  double t8228;
  double t8250;
  double t8251;
  double t8252;
  double t8255;
  double t8281;
  double t8282;
  double t8333;
  double t8334;
  double t8341;
  double t8349;
  double t8350;
  double t8357;
  double t1948;
  double t1966;
  double t2149;
  double t2683;
  double t2800;
  double t2816;
  double t2993;
  double t2998;
  double t3014;
  double t3029;
  double t6826;
  double t6883;
  double t6945;
  double t7048;
  double t7250;
  double t7304;
  double t4922;
  double t5052;
  double t5281;
  double t5290;
  double t5324;
  double t5370;
  double t5433;
  double t5509;
  double t5576;
  double t5666;
  double t5803;
  double t5826;
  double t5879;
  double t5914;
  double t5962;
  double t5976;
  double t5997;
  double t6035;
  double t6758;
  double t6946;
  double t6957;
  double t7406;
  double t7435;
  double t8235;
  double t8301;
  double t8302;
  double t8322;
  double t8331;
  double t8346;
  double t8361;
  double t8365;
  double t8381;
  double t8384;
  double t8386;
  double t8390;
  double t8391;
  double t8392;
  double t8393;
  double t8406;
  double t8313;
  double t8367;
  double t8389;
  double t8409;
  double t8410;
  double t8444;
  double t8445;
  double t8447;
  double t8448;
  double t8449;
  double t5300;
  double t5759;
  double t5969;
  double t6064;
  double t6140;
  double t8428;
  double t8429;
  double t8431;
  double t8432;
  double t8433;
  double t8461;
  double t8462;
  double t8463;
  double t8464;
  double t8465;
  double t8476;
  double t8477;
  double t8478;
  double t8479;
  double t8480;
  double t2806;
  double t3098;
  double t3701;
  double t4574;
  double t4594;
  double t8420;
  double t8421;
  double t8422;
  double t8423;
  double t8424;
  double t8454;
  double t8455;
  double t8456;
  double t8457;
  double t8458;
  t1005 = Cos(var1[4]);
  t637 = Cos(var1[5]);
  t847 = Sin(var1[4]);
  t1074 = Sin(var1[5]);
  t1389 = Cos(var1[3]);
  t1004 = -1.*t637*t847;
  t1250 = -1.*t1005*t1074;
  t1267 = t1004 + t1250;
  t207 = Sin(var1[3]);
  t1440 = t1005*t637;
  t1449 = -1.*t847*t1074;
  t1452 = t1440 + t1449;
  t127 = Cos(var1[2]);
  t1335 = t207*t1267;
  t1460 = t1389*t1452;
  t1461 = t1335 + t1460;
  t1478 = t127*t1461;
  t1553 = Sin(var1[2]);
  t1571 = t1389*t1267;
  t1583 = -1.*t207*t1452;
  t1726 = t1571 + t1583;
  t1731 = t1553*t1726;
  t1839 = t1478 + t1731;
  t2160 = -1.*t637;
  t2289 = 1. + t2160;
  t2402 = -1.3127*t2289;
  t2451 = -1.3127*t637;
  t2455 = -0.06*t1074;
  t2613 = t2402 + t2451 + t2455;
  t3401 = t637*t847;
  t3406 = t1005*t1074;
  t3442 = t3401 + t3406;
  t3142 = 0.9063*t637;
  t3325 = t637*t2613;
  t3329 = 0.06*t637*t1074;
  t3331 = t3142 + t3325 + t3329;
  t3825 = -1.*t1005*t637;
  t3925 = t847*t1074;
  t4009 = t3825 + t3925;
  t4656 = -1.*t1005;
  t4671 = 1. + t4656;
  t4672 = -0.9063*t4671;
  t4706 = -0.06*t637*t847;
  t4777 = t1005*t2613;
  t4917 = t4672 + t4706 + t4777;
  t5070 = 0.06*t1005*t637;
  t5100 = 0.9063*t847;
  t5133 = t847*t2613;
  t5189 = t5070 + t5100 + t5133;
  t5405 = -0.06*t1005*t1074;
  t5411 = t4706 + t5405;
  t5511 = -0.06*t1005*t637;
  t5536 = 0.06*t847*t1074;
  t5537 = t5511 + t5536;
  t3443 = -1.*t207*t3442;
  t3489 = t3443 + t1460;
  t3490 = t1553*t3489;
  t3492 = t1389*t3442;
  t3523 = t207*t1452;
  t3537 = t3492 + t3523;
  t3590 = t127*t3537;
  t3661 = t3490 + t3590;
  t5809 = 0.4999*t1452;
  t3762 = -1.*t207*t1267;
  t4070 = t1389*t4009;
  t4116 = t3762 + t4070;
  t4187 = t1553*t4116;
  t4193 = t207*t4009;
  t4258 = t1571 + t4193;
  t4302 = t127*t4258;
  t4495 = t4187 + t4302;
  t6476 = -1.*t1553*t1461;
  t6487 = t127*t1726;
  t6527 = t6476 + t6487;
  t7947 = 0.4999*t207;
  t8139 = t207*t4917;
  t8147 = t1389*t5189;
  t8228 = t7947 + t8139 + t8147;
  t8250 = -1.*t1389;
  t8251 = 1. + t8250;
  t8252 = -0.4999*t8251;
  t8255 = t1389*t4917;
  t8281 = -1.*t207*t5189;
  t8282 = t8252 + t8255 + t8281;
  t8333 = -1.*t207*t5411;
  t8334 = t1389*t5537;
  t8341 = t8333 + t8334;
  t8349 = t1389*t5411;
  t8350 = t207*t5537;
  t8357 = t8349 + t8350;
  t1948 = Power(t637,2);
  t1966 = -0.06*t1948;
  t2149 = 0.9063*t1074;
  t2683 = t2613*t1074;
  t2800 = t1966 + t2149 + t2683;
  t2816 = -0.9063*t1074;
  t2993 = -1.*t2613*t1074;
  t2998 = Power(t1074,2);
  t3014 = -0.06*t2998;
  t3029 = 0. + t2816 + t2993 + t3014;
  t6826 = t127*t3489;
  t6883 = -1.*t1553*t3537;
  t6945 = t6826 + t6883;
  t7048 = t127*t4116;
  t7250 = -1.*t1553*t4258;
  t7304 = t7048 + t7250;
  t4922 = -1.*t4917*t1267;
  t5052 = 0.4999*t3442;
  t5281 = -1.*t5189*t1452;
  t5290 = t4922 + t5052 + t5281;
  t5324 = 0.4999*t1267;
  t5370 = t4917*t1267;
  t5433 = t5411*t3442;
  t5509 = t5189*t1452;
  t5576 = t1452*t5537;
  t5666 = t5324 + t5370 + t5433 + t5509 + t5576;
  t5803 = -1.*t5189*t1267;
  t5826 = -1.*t5411*t1452;
  t5879 = -1.*t1267*t5537;
  t5914 = -1.*t4917*t4009;
  t5962 = t5803 + t5809 + t5826 + t5879 + t5914;
  t5976 = t5189*t3442;
  t5997 = t4917*t1452;
  t6035 = t5976 + t5809 + t5997;
  t6758 = 1.142857*t6527*t3661;
  t6946 = 1.142857*t1839*t6945;
  t6957 = 1.142857*t6527*t4495;
  t7406 = 1.142857*t1839*t7304;
  t7435 = t6758 + t6946 + t6957 + t7406;
  t8235 = -1.*t8228*t1461;
  t8301 = -1.*t8282*t1726;
  t8302 = t8235 + t8301;
  t8322 = t8228*t1461;
  t8331 = t8282*t1726;
  t8346 = t3489*t8341;
  t8361 = t3537*t8357;
  t8365 = t8322 + t8331 + t8346 + t8361;
  t8381 = t8282*t3489;
  t8384 = t8228*t3537;
  t8386 = t8381 + t8384;
  t8390 = -1.*t1726*t8341;
  t8391 = -1.*t1461*t8357;
  t8392 = -1.*t8282*t4116;
  t8393 = -1.*t8228*t4258;
  t8406 = t8390 + t8391 + t8392 + t8393;
  t8313 = 1.142857*t1839*t8302;
  t8367 = 1.142857*t1839*t8365;
  t8389 = 1.142857*t8386*t4495;
  t8409 = 1.142857*t3661*t8406;
  t8410 = t8313 + t8367 + t8389 + t8409;
  t8444 = 1.142857*t6527*t8302;
  t8445 = 1.142857*t6527*t8365;
  t8447 = 1.142857*t8386*t7304;
  t8448 = 1.142857*t6945*t8406;
  t8449 = t8444 + t8445 + t8447 + t8448;
  t5300 = 1.142857*t5290*t1839;
  t5759 = 1.142857*t5666*t1839;
  t5969 = 1.142857*t5962*t3661;
  t6064 = 1.142857*t6035*t4495;
  t6140 = t5300 + t5759 + t5969 + t6064;
  t8428 = 1.142857*t5290*t6527;
  t8429 = 1.142857*t5666*t6527;
  t8431 = 1.142857*t5962*t6945;
  t8432 = 1.142857*t6035*t7304;
  t8433 = t8428 + t8429 + t8431 + t8432;
  t8461 = 1.142857*t5962*t8302;
  t8462 = 1.142857*t5666*t8386;
  t8463 = 1.142857*t6035*t8365;
  t8464 = 1.142857*t5290*t8406;
  t8465 = t8461 + t8462 + t8463 + t8464;
  t8476 = 1.142857*t3029*t6035;
  t8477 = 1.142857*t3331*t5290;
  t8478 = 1.142857*t3331*t5666;
  t8479 = 1.142857*t2800*t5962;
  t8480 = t8476 + t8477 + t8478 + t8479;
  t2806 = 1.142857*t2800*t1839;
  t3098 = 1.142857*t3029*t1839;
  t3701 = 1.142857*t3331*t3661;
  t4574 = 1.142857*t3331*t4495;
  t4594 = t2806 + t3098 + t3701 + t4574;
  t8420 = 1.142857*t2800*t6527;
  t8421 = 1.142857*t3029*t6527;
  t8422 = 1.142857*t3331*t6945;
  t8423 = 1.142857*t3331*t7304;
  t8424 = t8420 + t8421 + t8422 + t8423;
  t8454 = 1.142857*t3331*t8302;
  t8455 = 1.142857*t3029*t8386;
  t8456 = 1.142857*t3331*t8365;
  t8457 = 1.142857*t2800*t8406;
  t8458 = t8454 + t8455 + t8456 + t8457;
  p_output1[0]=var2[5]*(-0.5*(2.285714*t1839*t3661 + 2.285714*t1839*t4495)*var2[0] - 0.5*t7435*var2[1] - 0.5*t8410*var2[2] - 0.5*t6140*var2[3] - 0.5*t4594*var2[4] + 0.03428571*t1839*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t7435*var2[0] - 0.5*(2.285714*t6527*t6945 + 2.285714*t6527*t7304)*var2[1] - 0.5*t8449*var2[2] - 0.5*t8433*var2[3] - 0.5*t8424*var2[4] + 0.03428571*t6527*var2[5]);
  p_output1[2]=var2[5]*(-0.5*t8410*var2[0] - 0.5*t8449*var2[1] - 0.5*(2.285714*t8365*t8386 + 2.285714*t8302*t8406)*var2[2] - 0.5*t8465*var2[3] - 0.5*t8458*var2[4] + 0.03428571*t8406*var2[5]);
  p_output1[3]=var2[5]*(-0.5*t6140*var2[0] - 0.5*t8433*var2[1] - 0.5*t8465*var2[2] - 0.5*(2.285714*t5290*t5962 + 2.285714*t5666*t6035)*var2[3] - 0.5*t8480*var2[4] + 0.03428571*t5962*var2[5]);
  p_output1[4]=var2[5]*(-0.5*t4594*var2[0] - 0.5*t8424*var2[1] - 0.5*t8458*var2[2] - 0.5*t8480*var2[3] - 0.5*(2.285714*t2800*t3331 + 2.285714*t3029*t3331)*var2[4] + 0.03428571*t3331*var2[5]);
  p_output1[5]=(0.03428571*t1839*var2[0] + 0.03428571*t6527*var2[1] + 0.03428571*t8406*var2[2] + 0.03428571*t5962*var2[3] + 0.03428571*t3331*var2[4])*var2[5];
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

#include "Ce2_vec_L4_J6_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L4_J6_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

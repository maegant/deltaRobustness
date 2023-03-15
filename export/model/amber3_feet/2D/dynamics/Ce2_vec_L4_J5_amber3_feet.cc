/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:31 GMT-08:00
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
  double t1087;
  double t374;
  double t377;
  double t1172;
  double t1386;
  double t626;
  double t1177;
  double t1216;
  double t259;
  double t1389;
  double t1394;
  double t1442;
  double t207;
  double t1335;
  double t1478;
  double t1548;
  double t1553;
  double t1688;
  double t1839;
  double t2052;
  double t2082;
  double t2160;
  double t2289;
  double t2761;
  double t3016;
  double t3098;
  double t3142;
  double t3331;
  double t3363;
  double t3612;
  double t3661;
  double t3662;
  double t4397;
  double t4486;
  double t4495;
  double t4574;
  double t4605;
  double t4621;
  double t4706;
  double t4777;
  double t4877;
  double t4922;
  double t5100;
  double t5133;
  double t5242;
  double t5411;
  double t5433;
  double t5477;
  double t5501;
  double t5370;
  double t5400;
  double t5576;
  double t3594;
  double t3825;
  double t3829;
  double t3925;
  double t4009;
  double t4052;
  double t4070;
  double t4187;
  double t5667;
  double t5759;
  double t5803;
  double t5809;
  double t5826;
  double t5857;
  double t5879;
  double t5969;
  double t6566;
  double t6758;
  double t6945;
  double t8251;
  double t8252;
  double t8255;
  double t8267;
  double t8273;
  double t8280;
  double t8281;
  double t8282;
  double t8283;
  double t8291;
  double t8334;
  double t8341;
  double t8343;
  double t8321;
  double t8322;
  double t8329;
  double t2451;
  double t2455;
  double t2683;
  double t3401;
  double t3406;
  double t3489;
  double t3523;
  double t3537;
  double t3590;
  double t8147;
  double t8187;
  double t8228;
  double t4628;
  double t4917;
  double t5255;
  double t5281;
  double t5300;
  double t5324;
  double t5405;
  double t5509;
  double t5511;
  double t5536;
  double t5550;
  double t5554;
  double t5604;
  double t5606;
  double t5666;
  double t7304;
  double t7327;
  double t7499;
  double t6035;
  double t6064;
  double t6140;
  double t6946;
  double t7947;
  double t8139;
  double t8235;
  double t8237;
  double t8268;
  double t8296;
  double t8301;
  double t8313;
  double t8331;
  double t8333;
  double t8346;
  double t8349;
  double t8357;
  double t8361;
  double t8365;
  double t8369;
  double t8375;
  double t8376;
  double t8379;
  double t8381;
  double t8302;
  double t8350;
  double t8367;
  double t8384;
  double t8385;
  double t8424;
  double t8425;
  double t8428;
  double t8429;
  double t8430;
  double t5290;
  double t5537;
  double t5997;
  double t6185;
  double t6241;
  double t8409;
  double t8410;
  double t8411;
  double t8413;
  double t8417;
  double t8442;
  double t8443;
  double t8444;
  double t8445;
  double t8446;
  double t8457;
  double t8458;
  double t8459;
  double t3443;
  double t4193;
  double t4232;
  double t8392;
  double t8393;
  double t8402;
  double t8435;
  double t8436;
  double t8439;
  t1087 = Cos(var1[4]);
  t374 = Cos(var1[5]);
  t377 = Sin(var1[4]);
  t1172 = Sin(var1[5]);
  t1386 = Cos(var1[3]);
  t626 = -1.*t374*t377;
  t1177 = -1.*t1087*t1172;
  t1216 = t626 + t1177;
  t259 = Sin(var1[3]);
  t1389 = t1087*t374;
  t1394 = -1.*t377*t1172;
  t1442 = t1389 + t1394;
  t207 = Cos(var1[2]);
  t1335 = t259*t1216;
  t1478 = t1386*t1442;
  t1548 = t1335 + t1478;
  t1553 = t207*t1548;
  t1688 = Sin(var1[2]);
  t1839 = t1386*t1216;
  t2052 = -1.*t259*t1442;
  t2082 = t1839 + t2052;
  t2160 = t1688*t2082;
  t2289 = t1553 + t2160;
  t2761 = -1.*t374;
  t3016 = 1. + t2761;
  t3098 = -1.3127*t3016;
  t3142 = -1.3127*t374;
  t3331 = -0.06*t1172;
  t3363 = t3098 + t3142 + t3331;
  t3612 = -1.*t1087*t374;
  t3661 = t377*t1172;
  t3662 = t3612 + t3661;
  t4397 = -1.*t1087;
  t4486 = 1. + t4397;
  t4495 = -0.9063*t4486;
  t4574 = -0.06*t374*t377;
  t4605 = t1087*t3363;
  t4621 = t4495 + t4574 + t4605;
  t4706 = t374*t377;
  t4777 = t1087*t1172;
  t4877 = t4706 + t4777;
  t4922 = 0.06*t1087*t374;
  t5100 = 0.9063*t377;
  t5133 = t377*t3363;
  t5242 = t4922 + t5100 + t5133;
  t5411 = -0.06*t1087*t374;
  t5433 = -0.9063*t377;
  t5477 = -1.*t377*t3363;
  t5501 = t5411 + t5433 + t5477;
  t5370 = 0.9063*t1087;
  t5400 = t5370 + t4574 + t4605;
  t5576 = 0.4999*t1442;
  t3594 = -1.*t259*t1216;
  t3825 = t1386*t3662;
  t3829 = t3594 + t3825;
  t3925 = t1688*t3829;
  t4009 = t259*t3662;
  t4052 = t1839 + t4009;
  t4070 = t207*t4052;
  t4187 = t3925 + t4070;
  t5667 = -1.*t259*t4877;
  t5759 = t5667 + t1478;
  t5803 = t1688*t5759;
  t5809 = t1386*t4877;
  t5826 = t259*t1442;
  t5857 = t5809 + t5826;
  t5879 = t207*t5857;
  t5969 = t5803 + t5879;
  t6566 = -1.*t1688*t1548;
  t6758 = t207*t2082;
  t6945 = t6566 + t6758;
  t8251 = 0.4999*t259;
  t8252 = t259*t4621;
  t8255 = t1386*t5242;
  t8267 = t8251 + t8252 + t8255;
  t8273 = -1.*t1386;
  t8280 = 1. + t8273;
  t8281 = -0.4999*t8280;
  t8282 = t1386*t4621;
  t8283 = -1.*t259*t5242;
  t8291 = t8281 + t8282 + t8283;
  t8334 = t1386*t5400;
  t8341 = t259*t5501;
  t8343 = t8334 + t8341;
  t8321 = -1.*t259*t5400;
  t8322 = t1386*t5501;
  t8329 = t8321 + t8322;
  t2451 = Power(t374,2);
  t2455 = -0.06*t2451;
  t2683 = 0.9063*t1172;
  t3401 = t3363*t1172;
  t3406 = t2455 + t2683 + t3401;
  t3489 = 0.9063*t374;
  t3523 = t374*t3363;
  t3537 = 0.06*t374*t1172;
  t3590 = t3489 + t3523 + t3537;
  t8147 = t207*t3829;
  t8187 = -1.*t1688*t4052;
  t8228 = t8147 + t8187;
  t4628 = -1.*t4621*t1216;
  t4917 = 0.4999*t4877;
  t5255 = -1.*t5242*t1442;
  t5281 = t4628 + t4917 + t5255;
  t5300 = 0.4999*t1216;
  t5324 = t4621*t1216;
  t5405 = t5400*t4877;
  t5509 = t5501*t1442;
  t5511 = t5242*t1442;
  t5536 = t5300 + t5324 + t5405 + t5509 + t5511;
  t5550 = -1.*t5501*t1216;
  t5554 = -1.*t5242*t1216;
  t5604 = -1.*t5400*t1442;
  t5606 = -1.*t4621*t3662;
  t5666 = t5550 + t5554 + t5576 + t5604 + t5606;
  t7304 = t207*t5759;
  t7327 = -1.*t1688*t5857;
  t7499 = t7304 + t7327;
  t6035 = t5242*t4877;
  t6064 = t4621*t1442;
  t6140 = t6035 + t5576 + t6064;
  t6946 = 1.142857*t6945*t5969;
  t7947 = 1.142857*t2289*t7499;
  t8139 = 1.142857*t6945*t4187;
  t8235 = 1.142857*t2289*t8228;
  t8237 = t6946 + t7947 + t8139 + t8235;
  t8268 = -1.*t8267*t1548;
  t8296 = -1.*t8291*t2082;
  t8301 = t8268 + t8296;
  t8313 = t8267*t1548;
  t8331 = t8329*t5759;
  t8333 = t8291*t2082;
  t8346 = t8343*t5857;
  t8349 = t8313 + t8331 + t8333 + t8346;
  t8357 = t8291*t5759;
  t8361 = t8267*t5857;
  t8365 = t8357 + t8361;
  t8369 = -1.*t8343*t1548;
  t8375 = -1.*t8329*t2082;
  t8376 = -1.*t8291*t3829;
  t8379 = -1.*t8267*t4052;
  t8381 = t8369 + t8375 + t8376 + t8379;
  t8302 = 1.142857*t2289*t8301;
  t8350 = 1.142857*t2289*t8349;
  t8367 = 1.142857*t8365*t4187;
  t8384 = 1.142857*t5969*t8381;
  t8385 = t8302 + t8350 + t8367 + t8384;
  t8424 = 1.142857*t6945*t8301;
  t8425 = 1.142857*t6945*t8349;
  t8428 = 1.142857*t8365*t8228;
  t8429 = 1.142857*t7499*t8381;
  t8430 = t8424 + t8425 + t8428 + t8429;
  t5290 = 1.142857*t5281*t2289;
  t5537 = 1.142857*t5536*t2289;
  t5997 = 1.142857*t5666*t5969;
  t6185 = 1.142857*t6140*t4187;
  t6241 = t5290 + t5537 + t5997 + t6185;
  t8409 = 1.142857*t5281*t6945;
  t8410 = 1.142857*t5536*t6945;
  t8411 = 1.142857*t5666*t7499;
  t8413 = 1.142857*t6140*t8228;
  t8417 = t8409 + t8410 + t8411 + t8413;
  t8442 = 1.142857*t5666*t8301;
  t8443 = 1.142857*t6140*t8349;
  t8444 = 1.142857*t5536*t8365;
  t8445 = 1.142857*t5281*t8381;
  t8446 = t8442 + t8443 + t8444 + t8445;
  t8457 = 1.142857*t3590*t5536;
  t8458 = 1.142857*t3406*t5666;
  t8459 = t8457 + t8458;
  t3443 = 1.142857*t3406*t2289;
  t4193 = 1.142857*t3590*t4187;
  t4232 = t3443 + t4193;
  t8392 = 1.142857*t3406*t6945;
  t8393 = 1.142857*t3590*t8228;
  t8402 = t8392 + t8393;
  t8435 = 1.142857*t3590*t8349;
  t8436 = 1.142857*t3406*t8381;
  t8439 = t8435 + t8436;
  p_output1[0]=var2[4]*(-0.5*(2.285714*t2289*t4187 + 2.285714*t2289*t5969)*var2[0] - 0.5*t8237*var2[1] - 0.5*t8385*var2[2] - 0.5*t6241*var2[3] - 0.5*t4232*var2[4] + 0.03428571*t2289*var2[5]);
  p_output1[1]=var2[4]*(-0.5*t8237*var2[0] - 0.5*(2.285714*t6945*t7499 + 2.285714*t6945*t8228)*var2[1] - 0.5*t8430*var2[2] - 0.5*t8417*var2[3] - 0.5*t8402*var2[4] + 0.03428571*t6945*var2[5]);
  p_output1[2]=var2[4]*(-0.5*t8385*var2[0] - 0.5*t8430*var2[1] - 0.5*(2.285714*t8349*t8365 + 2.285714*t8301*t8381)*var2[2] - 0.5*t8446*var2[3] - 0.5*t8439*var2[4] + 0.03428571*t8381*var2[5]);
  p_output1[3]=var2[4]*(-0.5*t6241*var2[0] - 0.5*t8417*var2[1] - 0.5*t8446*var2[2] - 0.5*(2.285714*t5281*t5666 + 2.285714*t5536*t6140)*var2[3] - 0.5*t8459*var2[4] + 0.03428571*t5666*var2[5]);
  p_output1[4]=(-0.5*t4232*var2[0] - 0.5*t8402*var2[1] - 0.5*t8439*var2[2] - 0.5*t8459*var2[3])*var2[4];
  p_output1[5]=(0.03428571*t2289*var2[0] + 0.03428571*t6945*var2[1] + 0.03428571*t8381*var2[2] + 0.03428571*t5666*var2[3])*var2[4];
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

#include "Ce2_vec_L4_J5_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L4_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

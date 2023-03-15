/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:25 GMT-08:00
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
  double t140;
  double t956;
  double t1495;
  double t1247;
  double t261;
  double t387;
  double t488;
  double t696;
  double t798;
  double t1612;
  double t1220;
  double t1634;
  double t1675;
  double t1684;
  double t1875;
  double t1889;
  double t1898;
  double t1914;
  double t1955;
  double t1956;
  double t1995;
  double t1831;
  double t185;
  double t934;
  double t1013;
  double t1076;
  double t1167;
  double t1468;
  double t1508;
  double t1556;
  double t2021;
  double t1584;
  double t1835;
  double t2100;
  double t2234;
  double t2255;
  double t2271;
  double t2144;
  double t2154;
  double t2204;
  double t2303;
  double t2307;
  double t2309;
  double t2583;
  double t2600;
  double t2609;
  double t2702;
  double t2336;
  double t2494;
  double t2526;
  double t2531;
  double t2010;
  double t2036;
  double t2342;
  double t2346;
  double t2351;
  double t2542;
  double t2572;
  double t2579;
  double t1840;
  double t2037;
  double t2057;
  double t2993;
  double t3027;
  double t3037;
  double t2316;
  double t2325;
  double t2353;
  double t2382;
  double t2442;
  double t2452;
  double t2077;
  double t3554;
  double t3580;
  double t3395;
  double t3410;
  double t3419;
  double t3430;
  double t3675;
  double t3676;
  double t3686;
  double t3725;
  double t3458;
  double t3474;
  double t3478;
  double t3479;
  double t3632;
  double t3635;
  double t3490;
  double t3547;
  double t3550;
  double t3600;
  double t3180;
  double t3192;
  double t3245;
  double t3247;
  double t3280;
  double t3325;
  double t3338;
  double t3347;
  double t3366;
  double t3601;
  double t3726;
  double t3957;
  double t3962;
  double t3758;
  double t3977;
  double t4010;
  double t4038;
  double t4056;
  double t3791;
  double t3882;
  double t3889;
  double t3916;
  double t3917;
  double t3922;
  double t3931;
  double t3945;
  double t4188;
  double t4194;
  double t4207;
  double t4210;
  double t4218;
  double t4524;
  double t4525;
  double t4536;
  double t4615;
  double t4649;
  double t4666;
  double t2705;
  double t2750;
  double t4863;
  double t3853;
  double t3901;
  double t3955;
  double t3969;
  double t4014;
  double t4019;
  double t4088;
  double t4105;
  double t4165;
  double t4170;
  double t4179;
  double t4257;
  double t4286;
  double t4290;
  double t4294;
  double t4298;
  double t4349;
  double t4370;
  double t4384;
  double t5092;
  double t5099;
  double t5102;
  double t5109;
  double t4966;
  double t3830;
  double t5007;
  double t3894;
  double t2102;
  double t5509;
  double t5514;
  double t5537;
  double t5282;
  double t4867;
  double t4868;
  double t5336;
  double t5342;
  double t5360;
  double t5415;
  double t5421;
  double t5423;
  double t5458;
  double t5463;
  double t5465;
  double t5698;
  double t5710;
  double t5719;
  double t5743;
  double t5745;
  double t5757;
  double t5758;
  double t5759;
  t140 = Cos(var1[4]);
  t956 = Sin(var1[4]);
  t1495 = Cos(var1[3]);
  t1247 = Sin(var1[3]);
  t261 = -1.*t140;
  t387 = 1. + t261;
  t488 = -0.9063*t387;
  t696 = -1.0567*t140;
  t798 = t488 + t696;
  t1612 = Cos(var1[2]);
  t1220 = Sin(var1[2]);
  t1634 = t1495*t140;
  t1675 = -1.*t1247*t956;
  t1684 = t1634 + t1675;
  t1875 = 0.4999*t956;
  t1889 = t798*t956;
  t1898 = 0.15039999999999998*t140*t956;
  t1914 = t1875 + t1889 + t1898;
  t1955 = t140*t1247;
  t1956 = t1495*t956;
  t1995 = t1955 + t1956;
  t1831 = -1.*t1612*t1684;
  t185 = 0.4999*t140;
  t934 = t798*t140;
  t1013 = Power(t956,2);
  t1076 = -0.15039999999999998*t1013;
  t1167 = t185 + t934 + t1076;
  t1468 = -1.*t140*t1247;
  t1508 = -1.*t1495*t956;
  t1556 = t1468 + t1508;
  t2021 = -1.*t1220*t1684;
  t1584 = -1.*t1220*t1556;
  t1835 = t1584 + t1831;
  t2100 = -1.*t1612*t1556;
  t2234 = -1.*t1495*t140;
  t2255 = t1247*t956;
  t2271 = t2234 + t2255;
  t2144 = t1612*t1556;
  t2154 = t2144 + t2021;
  t2204 = 3.5899*t1914*t2154;
  t2303 = t1612*t2271;
  t2307 = t1584 + t2303;
  t2309 = 3.5899*t1167*t2307;
  t2583 = -0.4999*t956;
  t2600 = -1.*t798*t956;
  t2609 = -0.15039999999999998*t140*t956;
  t2702 = t2583 + t2600 + t2609;
  t2336 = 3.5899*t1914*t1835;
  t2494 = Power(t140,2);
  t2526 = 0.15039999999999998*t2494;
  t2531 = 0. + t185 + t934 + t2526;
  t2010 = -1.*t1612*t1995;
  t2036 = t2010 + t2021;
  t2342 = -1.*t1220*t2271;
  t2346 = t2100 + t2342;
  t2351 = 3.5899*t1167*t2346;
  t2542 = -1.*t1220*t1995;
  t2572 = t1612*t1684;
  t2579 = t2542 + t2572;
  t1840 = 3.5899*t1167*t1835;
  t2037 = 3.5899*t1914*t2036;
  t2057 = t1840 + t2037;
  t2993 = 3.5899*t1914*t2579;
  t3027 = 3.5899*t1167*t2154;
  t3037 = t2993 + t3027;
  t2316 = t2204 + t2309;
  t2325 = 0.5*var2[0]*t2316;
  t2353 = t2336 + t2351;
  t2382 = 0.5*var2[1]*t2353;
  t2442 = t2325 + t2382;
  t2452 = var2[3]*t2442;
  t2077 = t1220*t1995;
  t3554 = t1495*t798;
  t3580 = 0.15039999999999998*t1247*t956;
  t3395 = -0.4999*t1247;
  t3410 = -1.*t798*t1247;
  t3419 = 0.15039999999999998*t1495*t956;
  t3430 = t3395 + t3410 + t3419;
  t3675 = 0.4999*t1247;
  t3676 = t798*t1247;
  t3686 = -0.15039999999999998*t1495*t956;
  t3725 = t3675 + t3676 + t3686;
  t3458 = -0.4999*t1495;
  t3474 = -1.*t1495*t798;
  t3478 = -0.15039999999999998*t1247*t956;
  t3479 = t3458 + t3474 + t3478;
  t3632 = 0.4999*t1495;
  t3635 = t3632 + t3554 + t3580;
  t3490 = -1.*t1495;
  t3547 = 1. + t3490;
  t3550 = -0.4999*t3547;
  t3600 = t3550 + t3554 + t3580;
  t3180 = 3.5899*t1914*t2307;
  t3192 = t1612*t1995;
  t3245 = t3192 + t2342;
  t3247 = 3.5899*t1167*t3245;
  t3280 = t2077 + t2303;
  t3325 = 3.5899*t1167*t3280;
  t3338 = t1220*t2271;
  t3347 = t2144 + t3338;
  t3366 = 3.5899*t1914*t3347;
  t3601 = -1.*t1995*t3600;
  t3726 = -1.*t3725*t2271;
  t3957 = 0.15039999999999998*t140*t1247;
  t3962 = t3957 + t3419;
  t3758 = t1556*t3725;
  t3977 = 0.15039999999999998*t1495*t140;
  t4010 = t3977 + t3478;
  t4038 = -0.15039999999999998*t1495*t140;
  t4056 = t4038 + t3580;
  t3791 = t3600*t2271;
  t3882 = t1220*t1556;
  t3889 = t3882 + t2572;
  t3916 = t3725*t1684;
  t3917 = t3430*t1684;
  t3922 = t1556*t3600;
  t3931 = t1995*t3635;
  t3945 = t3916 + t3917 + t3922 + t3931;
  t4188 = -1.*t1556*t3725;
  t4194 = -1.*t1556*t3430;
  t4207 = -1.*t1684*t3635;
  t4210 = -1.*t3600*t2271;
  t4218 = t4188 + t4194 + t4207 + t4210;
  t4524 = 3.5899*t1914*t3889;
  t4525 = 3.5899*t1167*t3347;
  t4536 = t4524 + t4525;
  t4615 = 3.5899*t1167*t3945;
  t4649 = 3.5899*t1914*t4218;
  t4666 = t4615 + t4649;
  t2705 = 3.5899*t2702*t2154;
  t2750 = 3.5899*t2702*t1835;
  t4863 = t185 + t934 + t2526;
  t3853 = 3.5899*t2702*t2307;
  t3901 = 3.5899*t2702*t3347;
  t3955 = 3.5899*t2702*t3945;
  t3969 = -1.*t3962*t1684;
  t4014 = -1.*t1556*t4010;
  t4019 = -1.*t1556*t3635;
  t4088 = -1.*t1556*t4056;
  t4105 = -1.*t3430*t2271;
  t4165 = -1.*t3962*t2271;
  t4170 = t3969 + t4014 + t3601 + t4019 + t4088 + t3726 + t4105 + t4165;
  t4179 = 3.5899*t1914*t4170;
  t4257 = t1556*t3430;
  t4286 = t1556*t3962;
  t4290 = t3962*t1995;
  t4294 = t1684*t4010;
  t4298 = t1684*t3635;
  t4349 = t1684*t4056;
  t4370 = t3758 + t4257 + t4286 + t4290 + t4294 + t4298 + t4349 + t3791;
  t4384 = 3.5899*t1167*t4370;
  t5092 = -0.4999*t140;
  t5099 = -1.*t798*t140;
  t5102 = -0.15039999999999998*t2494;
  t5109 = 0. + t5092 + t5099 + t5102;
  t4966 = 3.5899*t4863*t2154;
  t3830 = 3.5899*t2531*t2154;
  t5007 = 3.5899*t4863*t3889;
  t3894 = 3.5899*t2531*t3889;
  t2102 = t1220*t1684;
  t5509 = -1.*t1556*t3962;
  t5514 = -1.*t1684*t4056;
  t5537 = t4188 + t5509 + t5514 + t4210;
  t5282 = t3192 + t2102;
  t4867 = 3.5899*t4863*t2579;
  t4868 = t4867 + t2705 + t2204 + t2309;
  t5336 = -1.*t3725*t1684;
  t5342 = -1.*t1556*t3600;
  t5360 = t5336 + t5342;
  t5415 = t3725*t1995;
  t5421 = t1684*t3600;
  t5423 = t5415 + t5421;
  t5458 = t3962*t1684;
  t5463 = t1995*t4056;
  t5465 = t3916 + t5458 + t3922 + t5463;
  t5698 = 3.5899*t2702*t3889;
  t5710 = 3.5899*t4863*t5282;
  t5719 = t5698 + t4524 + t5710 + t4525;
  t5743 = 3.5899*t4863*t5360;
  t5745 = 3.5899*t2702*t5423;
  t5757 = 3.5899*t1167*t5465;
  t5758 = 3.5899*t1914*t5537;
  t5759 = t5743 + t5745 + t5757 + t5758;
  p_output1[0]=(0.5*t2057*var2[0] + 0.5*(3.5899*t1914*(t1831 + t2077) + 3.5899*t1167*(t2100 + t2102))*var2[1])*var2[3];
  p_output1[1]=t2452;
  p_output1[2]=(0.5*(t2204 + t2309 + 3.5899*t2531*t2579 + t2705)*var2[0] + 0.5*(t2336 + t2351 + 3.5899*t2036*t2531 + t2750)*var2[1])*var2[3];
  p_output1[3]=0.5*t3037*var2[3];
  p_output1[4]=0.5*t2057*var2[3];
  p_output1[5]=0.5*t3037*var2[0] + 0.5*t2057*var2[1];
  p_output1[6]=t2452;
  p_output1[7]=(0.5*(t3325 + t3366)*var2[0] + 0.5*(t3180 + t3247)*var2[1] + 0.5*(3.5899*t1914*(-1.*t1684*t3430 - 2.*t2271*t3430 - 1.*t1556*t3479 + t3601 - 2.*t1556*t3635 + t3726) + 3.5899*t1167*(2.*t1556*t3430 + t1995*t3430 + t1684*t3479 + 2.*t1684*t3635 + t3758 + t3791))*var2[2])*var2[3];
  p_output1[8]=(0.5*(t3325 + t3366 + t3894 + t3901)*var2[0] + 0.5*(t3180 + t3247 + t3830 + t3853)*var2[1] + 0.5*(t3955 + t4179 + 3.5899*t2531*t4218 + t4384)*var2[2])*var2[3];
  p_output1[9]=0.5*t4536*var2[3];
  p_output1[10]=0.5*t2316*var2[3];
  p_output1[11]=0.5*t4666*var2[3];
  p_output1[12]=0.5*t4536*var2[0] + 0.5*t2316*var2[1] + 0.5*t4666*var2[2];
  p_output1[13]=(0.5*t4868*var2[0] + 0.5*(t2336 + t2351 + t2750 + 3.5899*t2036*t4863)*var2[1])*var2[3];
  p_output1[14]=(0.5*(t3325 + t3366 + t3901 + t5007)*var2[0] + 0.5*(t3180 + t3247 + t3853 + t4966)*var2[1] + 0.5*(t3955 + t4179 + t4384 + 3.5899*t4218*t4863)*var2[2])*var2[3];
  p_output1[15]=var2[3]*(0.5*(t3325 + 7.1798*t2702*t3347 + t3366 + t3894 + t5007 + 3.5899*t3889*t5109 + 3.5899*t2702*t5282)*var2[0] + 0.5*(7.1798*t2307*t2702 + 3.5899*t2579*t2702 + t3180 + t3247 + t3830 + t4966 + 3.5899*t2154*t5109)*var2[1] + 0.5*(3.5899*t1914*(t3601 + t3726 - 2.*t2271*t3962 + t3969 + t4014 - 2.*t1556*t4056) + 3.5899*t1167*(t3758 + t3791 + 2.*t1556*t3962 + 2.*t1684*t4056 + t4290 + t4294) + 3.5899*t2702*t5360 + 3.5899*t5109*t5423 + 7.1798*t2702*t5465 + 3.5899*t2531*t5537 + 3.5899*t4863*t5537)*var2[2] + 0.5*(7.1798*t1914*t2702 + 7.1798*Power(t2702,2) + 7.1798*t2531*t4863 + 7.1798*t1167*t5109)*var2[3] - 0.26996047999999995*t5109*var2[4]);
  p_output1[16]=0.5*t5719*var2[3];
  p_output1[17]=0.5*t4868*var2[3];
  p_output1[18]=0.5*t5759*var2[3];
  p_output1[19]=0.5*t5719*var2[0] + 0.5*t4868*var2[1] + 0.5*t5759*var2[2] + (7.1798*t1167*t2702 + 7.1798*t1914*t4863)*var2[3] - 0.26996047999999995*t2702*var2[4];
  p_output1[20]=-0.26996047999999995*t2702*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L3_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L3_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

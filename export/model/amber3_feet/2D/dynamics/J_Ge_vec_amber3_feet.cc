/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:52 GMT-08:00
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
  double t65;
  double t178;
  double t356;
  double t370;
  double t207;
  double t262;
  double t275;
  double t417;
  double t429;
  double t434;
  double t513;
  double t589;
  double t742;
  double t766;
  double t778;
  double t787;
  double t631;
  double t665;
  double t675;
  double t794;
  double t835;
  double t844;
  double t856;
  double t898;
  double t920;
  double t952;
  double t1088;
  double t1092;
  double t1260;
  double t1306;
  double t1277;
  double t1280;
  double t1303;
  double t1344;
  double t1346;
  double t1357;
  double t1385;
  double t1437;
  double t1466;
  double t1493;
  double t1497;
  double t1504;
  double t1443;
  double t1444;
  double t1454;
  double t1509;
  double t1540;
  double t1559;
  double t1581;
  double t1653;
  double t1710;
  double t1775;
  double t1812;
  double t1825;
  double t523;
  double t2064;
  double t863;
  double t900;
  double t902;
  double t903;
  double t1093;
  double t1141;
  double t1166;
  double t1176;
  double t1179;
  double t1186;
  double t1210;
  double t1236;
  double t1245;
  double t2298;
  double t2315;
  double t2317;
  double t2286;
  double t2321;
  double t2326;
  double t2328;
  double t2364;
  double t2374;
  double t2629;
  double t2699;
  double t2745;
  double t2395;
  double t2441;
  double t1393;
  double t2832;
  double t1582;
  double t1672;
  double t1673;
  double t1692;
  double t1828;
  double t1839;
  double t1862;
  double t1926;
  double t1958;
  double t1969;
  double t1992;
  double t1996;
  double t2019;
  double t2962;
  double t2966;
  double t2976;
  double t2959;
  double t3018;
  double t3023;
  double t3036;
  double t3084;
  double t3088;
  double t3278;
  double t3282;
  double t3295;
  double t3119;
  double t3125;
  double t2092;
  double t2110;
  double t2171;
  double t2203;
  double t2226;
  double t2231;
  double t2261;
  double t2333;
  double t2334;
  double t2337;
  double t2343;
  double t2380;
  double t2391;
  double t2404;
  double t2436;
  double t2511;
  double t2514;
  double t2566;
  double t2580;
  double t2585;
  double t2587;
  double t2615;
  double t2757;
  double t2760;
  double t2776;
  double t2791;
  double t2793;
  double t2808;
  double t2811;
  double t2826;
  double t2827;
  double t3442;
  double t3454;
  double t3486;
  double t3489;
  double t3491;
  double t3501;
  double t3546;
  double t3549;
  double t3757;
  double t3765;
  double t3630;
  double t3639;
  double t3745;
  double t3772;
  double t3777;
  double t3788;
  double t3790;
  double t3812;
  double t3814;
  double t3821;
  double t3827;
  double t3884;
  double t3933;
  double t3941;
  double t3944;
  double t2869;
  double t2894;
  double t2895;
  double t2898;
  double t2912;
  double t2929;
  double t2950;
  double t3047;
  double t3058;
  double t3063;
  double t3079;
  double t3103;
  double t3118;
  double t3123;
  double t3124;
  double t3161;
  double t3162;
  double t3201;
  double t3222;
  double t3240;
  double t3260;
  double t3266;
  double t3296;
  double t3336;
  double t3346;
  double t3365;
  double t3375;
  double t3401;
  double t3411;
  double t3414;
  double t3423;
  double t4086;
  double t4095;
  double t4147;
  double t4148;
  double t4150;
  double t4152;
  double t4254;
  double t4256;
  double t4456;
  double t4498;
  double t4294;
  double t4324;
  double t4446;
  double t4509;
  double t4529;
  double t4538;
  double t4564;
  double t4568;
  double t4569;
  double t4576;
  double t4585;
  double t4648;
  double t4692;
  double t4694;
  double t4707;
  t65 = Cos(var1[2]);
  t178 = Cos(var1[3]);
  t356 = Sin(var1[2]);
  t370 = Sin(var1[3]);
  t207 = -1.*t178;
  t262 = 1. + t207;
  t275 = 0.4999*t65*t262;
  t417 = 0.4999*t356*t370;
  t429 = -1.*t65*t178;
  t434 = t356*t370;
  t513 = t429 + t434;
  t589 = Cos(var1[4]);
  t742 = t178*t356;
  t766 = t65*t370;
  t778 = t742 + t766;
  t787 = Sin(var1[4]);
  t631 = -1.*t589;
  t665 = 1. + t631;
  t675 = -0.9063*t665*t513;
  t794 = 0.9063*t778*t787;
  t835 = t589*t513;
  t844 = t778*t787;
  t856 = t835 + t844;
  t898 = Cos(var1[5]);
  t920 = t589*t778;
  t952 = -1.*t513*t787;
  t1088 = t920 + t952;
  t1092 = Sin(var1[5]);
  t1260 = Cos(var1[6]);
  t1306 = Sin(var1[6]);
  t1277 = -1.*t1260;
  t1280 = 1. + t1277;
  t1303 = 0.4999*t65*t1280;
  t1344 = 0.4999*t356*t1306;
  t1346 = -1.*t65*t1260;
  t1357 = t356*t1306;
  t1385 = t1346 + t1357;
  t1437 = Cos(var1[7]);
  t1466 = t1260*t356;
  t1493 = t65*t1306;
  t1497 = t1466 + t1493;
  t1504 = Sin(var1[7]);
  t1443 = -1.*t1437;
  t1444 = 1. + t1443;
  t1454 = -0.9063*t1444*t1385;
  t1509 = 0.9063*t1497*t1504;
  t1540 = t1437*t1385;
  t1559 = t1497*t1504;
  t1581 = t1540 + t1559;
  t1653 = Cos(var1[8]);
  t1710 = t1437*t1497;
  t1775 = -1.*t1385*t1504;
  t1812 = t1710 + t1775;
  t1825 = Sin(var1[8]);
  t523 = -0.6493*t513;
  t2064 = -0.4999*t65*t178;
  t863 = -1.0567*t856;
  t900 = -1.*t898;
  t902 = 1. + t900;
  t903 = -1.3127*t902*t856;
  t1093 = 1.3127*t1088*t1092;
  t1141 = t898*t1088;
  t1166 = -1.*t856*t1092;
  t1176 = t1141 + t1166;
  t1179 = 0.06*t1176;
  t1186 = t898*t856;
  t1210 = t1088*t1092;
  t1236 = t1186 + t1210;
  t1245 = -1.3127*t1236;
  t2298 = -1.*t178*t356;
  t2315 = -1.*t65*t370;
  t2317 = t2298 + t2315;
  t2286 = 0.9063*t589*t513;
  t2321 = -0.9063*t2317*t787;
  t2326 = -1.*t2317*t787;
  t2328 = t835 + t2326;
  t2364 = -1.*t589*t2317;
  t2374 = t2364 + t952;
  t2629 = t589*t2317;
  t2699 = t513*t787;
  t2745 = t2629 + t2699;
  t2395 = -1.*t2328*t1092;
  t2441 = t898*t2328;
  t1393 = -0.6493*t1385;
  t2832 = -0.4999*t65*t1260;
  t1582 = -1.0567*t1581;
  t1672 = -1.*t1653;
  t1673 = 1. + t1672;
  t1692 = -1.3127*t1673*t1581;
  t1828 = 1.3127*t1812*t1825;
  t1839 = t1653*t1812;
  t1862 = -1.*t1581*t1825;
  t1926 = t1839 + t1862;
  t1958 = 0.06*t1926;
  t1969 = t1653*t1581;
  t1992 = t1812*t1825;
  t1996 = t1969 + t1992;
  t2019 = -1.3127*t1996;
  t2962 = -1.*t1260*t356;
  t2966 = -1.*t65*t1306;
  t2976 = t2962 + t2966;
  t2959 = 0.9063*t1437*t1385;
  t3018 = -0.9063*t2976*t1504;
  t3023 = -1.*t2976*t1504;
  t3036 = t1540 + t3023;
  t3084 = -1.*t1437*t2976;
  t3088 = t3084 + t1775;
  t3278 = t1437*t2976;
  t3282 = t1385*t1504;
  t3295 = t3278 + t3282;
  t3119 = -1.*t3036*t1825;
  t3125 = t1653*t3036;
  t2092 = t2064 + t417 + t523;
  t2110 = -33.610041*t2092;
  t2171 = t2064 + t417 + t675 + t794 + t863;
  t2203 = -35.216919000000004*t2171;
  t2226 = t2064 + t417 + t675 + t794 + t903 + t1093 + t1179 + t1245;
  t2231 = -11.21142717*t2226;
  t2261 = t2110 + t2203 + t2231;
  t2333 = -1.0567*t2328;
  t2334 = t2286 + t2321 + t2333;
  t2337 = -35.216919000000004*t2334;
  t2343 = -1.3127*t902*t2328;
  t2380 = 1.3127*t2374*t1092;
  t2391 = t898*t2374;
  t2404 = t2391 + t2395;
  t2436 = 0.06*t2404;
  t2511 = t2374*t1092;
  t2514 = t2441 + t2511;
  t2566 = -1.3127*t2514;
  t2580 = t2286 + t2321 + t2343 + t2380 + t2436 + t2566;
  t2585 = -11.21142717*t2580;
  t2587 = t2337 + t2585;
  t2615 = 1.3127*t898*t2328;
  t2757 = -1.3127*t2745*t1092;
  t2760 = -1.*t898*t2745;
  t2776 = t2760 + t2395;
  t2791 = 0.06*t2776;
  t2793 = -1.*t2745*t1092;
  t2808 = t2441 + t2793;
  t2811 = -1.3127*t2808;
  t2826 = t2615 + t2757 + t2791 + t2811;
  t2827 = -11.21142717*t2826;
  t3442 = t65*t178;
  t3454 = -1.*t356*t370;
  t3486 = t3442 + t3454;
  t3489 = -0.9063*t589*t3486;
  t3491 = -1.*t589*t3486;
  t3501 = t3491 + t2326;
  t3546 = t3486*t787;
  t3549 = t2364 + t3546;
  t3757 = -1.*t3486*t787;
  t3765 = t2629 + t3757;
  t3630 = -1.*t3501*t1092;
  t3639 = t898*t3501;
  t3745 = 1.3127*t898*t3501;
  t3772 = -1.3127*t3765*t1092;
  t3777 = -1.*t898*t3765;
  t3788 = t3777 + t3630;
  t3790 = 0.06*t3788;
  t3812 = -1.*t3765*t1092;
  t3814 = t3639 + t3812;
  t3821 = -1.3127*t3814;
  t3827 = t3745 + t3772 + t3790 + t3821;
  t3884 = -11.21142717*t3827;
  t3933 = t589*t3486;
  t3941 = t2317*t787;
  t3944 = t3933 + t3941;
  t2869 = t2832 + t1344 + t1393;
  t2894 = -33.610041*t2869;
  t2895 = t2832 + t1344 + t1454 + t1509 + t1582;
  t2898 = -35.216919000000004*t2895;
  t2912 = t2832 + t1344 + t1454 + t1509 + t1692 + t1828 + t1958 + t2019;
  t2929 = -11.21142717*t2912;
  t2950 = t2894 + t2898 + t2929;
  t3047 = -1.0567*t3036;
  t3058 = t2959 + t3018 + t3047;
  t3063 = -35.216919000000004*t3058;
  t3079 = -1.3127*t1673*t3036;
  t3103 = 1.3127*t3088*t1825;
  t3118 = t1653*t3088;
  t3123 = t3118 + t3119;
  t3124 = 0.06*t3123;
  t3161 = t3088*t1825;
  t3162 = t3125 + t3161;
  t3201 = -1.3127*t3162;
  t3222 = t2959 + t3018 + t3079 + t3103 + t3124 + t3201;
  t3240 = -11.21142717*t3222;
  t3260 = t3063 + t3240;
  t3266 = 1.3127*t1653*t3036;
  t3296 = -1.3127*t3295*t1825;
  t3336 = -1.*t1653*t3295;
  t3346 = t3336 + t3119;
  t3365 = 0.06*t3346;
  t3375 = -1.*t3295*t1825;
  t3401 = t3125 + t3375;
  t3411 = -1.3127*t3401;
  t3414 = t3266 + t3296 + t3365 + t3411;
  t3423 = -11.21142717*t3414;
  t4086 = t65*t1260;
  t4095 = -1.*t356*t1306;
  t4147 = t4086 + t4095;
  t4148 = -0.9063*t1437*t4147;
  t4150 = -1.*t1437*t4147;
  t4152 = t4150 + t3023;
  t4254 = t4147*t1504;
  t4256 = t3084 + t4254;
  t4456 = -1.*t4147*t1504;
  t4498 = t3278 + t4456;
  t4294 = -1.*t4152*t1825;
  t4324 = t1653*t4152;
  t4446 = 1.3127*t1653*t4152;
  t4509 = -1.3127*t4498*t1825;
  t4529 = -1.*t1653*t4498;
  t4538 = t4529 + t4294;
  t4564 = 0.06*t4538;
  t4568 = -1.*t4498*t1825;
  t4569 = t4324 + t4568;
  t4576 = -1.3127*t4569;
  t4585 = t4446 + t4509 + t4564 + t4576;
  t4648 = -11.21142717*t4585;
  t4692 = t1437*t4147;
  t4694 = t2976*t1504;
  t4707 = t4692 + t4694;
  p_output1[0]=-33.610041*(t1303 + t1344 + t1393) - 35.216919000000004*(t1303 + t1344 + t1454 + t1509 + t1582) - 11.21142717*(t1303 + t1344 + t1454 + t1509 + t1692 + t1828 + t1958 + t2019) - 33.610041*(t275 + t417 + t523) - 36.3549771*t65 - 35.216919000000004*(t275 + t417 + t675 + t794 + t863) - 11.21142717*(t1093 + t1179 + t1245 + t275 + t417 + t675 + t794 + t903);
  p_output1[1]=t2261;
  p_output1[2]=t2587;
  p_output1[3]=t2827;
  p_output1[4]=t2950;
  p_output1[5]=t3260;
  p_output1[6]=t3423;
  p_output1[7]=t2261;
  p_output1[8]=t2261;
  p_output1[9]=t2587;
  p_output1[10]=t2827;
  p_output1[11]=t2587;
  p_output1[12]=t2587;
  p_output1[13]=-35.216919000000004*(t2321 + t3489 - 1.0567*t3501) - 11.21142717*(t2321 + t3489 + 1.3127*t1092*t3549 - 1.3127*(t1092*t3549 + t3639) + 0.06*(t3630 + t3549*t898) - 1.3127*t3501*t902);
  p_output1[14]=t3884;
  p_output1[15]=t2827;
  p_output1[16]=t2827;
  p_output1[17]=t3884;
  p_output1[18]=-11.21142717*(t3772 + 0.06*(t3777 + t1092*t3944) - 1.3127*t3944*t898 - 1.3127*(t3812 - 1.*t3944*t898));
  p_output1[19]=t2950;
  p_output1[20]=t2950;
  p_output1[21]=t3260;
  p_output1[22]=t3423;
  p_output1[23]=t3260;
  p_output1[24]=t3260;
  p_output1[25]=-35.216919000000004*(t3018 + t4148 - 1.0567*t4152) - 11.21142717*(t3018 + t4148 - 1.3127*t1673*t4152 + 1.3127*t1825*t4256 + 0.06*(t1653*t4256 + t4294) - 1.3127*(t1825*t4256 + t4324));
  p_output1[26]=t4648;
  p_output1[27]=t3423;
  p_output1[28]=t3423;
  p_output1[29]=t4648;
  p_output1[30]=-11.21142717*(t4509 - 1.3127*t1653*t4707 - 1.3127*(t4568 - 1.*t1653*t4707) + 0.06*(t4529 + t1825*t4707));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 31, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_amber3_feet.hh"

namespace RightSS1
{

void J_Ge_vec_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

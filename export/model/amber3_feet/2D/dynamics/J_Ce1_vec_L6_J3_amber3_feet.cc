/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:16 GMT-08:00
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
  double t228;
  double t169;
  double t189;
  double t271;
  double t754;
  double t878;
  double t936;
  double t1117;
  double t1156;
  double t1182;
  double t1192;
  double t1207;
  double t751;
  double t1351;
  double t1360;
  double t1391;
  double t10;
  double t1096;
  double t1220;
  double t1288;
  double t1335;
  double t193;
  double t281;
  double t335;
  double t1398;
  double t1435;
  double t1456;
  double t1472;
  double t1544;
  double t1566;
  double t945;
  double t1348;
  double t1567;
  double t1580;
  double t1934;
  double t2003;
  double t1704;
  double t1747;
  double t1809;
  double t1589;
  double t2027;
  double t2040;
  double t2042;
  double t2046;
  double t2118;
  double t2121;
  double t2216;
  double t2230;
  double t2248;
  double t2013;
  double t2018;
  double t2083;
  double t2250;
  double t2282;
  double t2286;
  double t2299;
  double t2300;
  double t2309;
  double t2339;
  double t2494;
  double t2495;
  double t2535;
  double t2537;
  double t2414;
  double t2070;
  double t2163;
  double t2183;
  double t2205;
  double t2360;
  double t2382;
  double t2417;
  double t2457;
  double t2485;
  double t2782;
  double t2785;
  double t3034;
  double t3041;
  double t2901;
  double t2904;
  double t2905;
  double t2916;
  double t2739;
  double t2742;
  double t2775;
  double t2806;
  double t2530;
  double t2538;
  double t2553;
  double t2817;
  double t2818;
  double t2823;
  double t2933;
  double t2966;
  double t2608;
  double t2626;
  double t2644;
  double t3063;
  double t3236;
  double t3244;
  double t3127;
  double t2588;
  double t2671;
  double t2673;
  double t3220;
  double t3222;
  double t3230;
  double t3255;
  double t3272;
  double t3280;
  double t3296;
  double t3302;
  double t3306;
  double t3308;
  double t3332;
  double t3362;
  double t3386;
  double t3413;
  double t3420;
  double t3469;
  double t3506;
  double t3518;
  double t3552;
  double t3553;
  double t3555;
  double t3999;
  double t4013;
  double t4011;
  double t4061;
  double t4100;
  double t4154;
  double t4171;
  double t4172;
  double t1608;
  double t1630;
  double t4209;
  double t623;
  double t1084;
  double t4253;
  double t4271;
  double t4288;
  double t4296;
  double t4257;
  double t4313;
  double t4325;
  double t2900;
  double t2925;
  double t2963;
  double t2972;
  double t2979;
  double t3072;
  double t3102;
  double t3109;
  double t3121;
  double t3133;
  double t4446;
  double t4488;
  double t4498;
  double t4404;
  double t4405;
  double t4410;
  double t4609;
  double t4614;
  double t4615;
  double t4637;
  double t4639;
  double t4640;
  double t4643;
  double t3635;
  double t3701;
  double t3730;
  double t3803;
  double t3848;
  double t3865;
  double t1588;
  double t1895;
  double t1903;
  double t2493;
  double t2685;
  double t2706;
  double t3593;
  double t4818;
  double t4820;
  double t4855;
  double t4858;
  double t4881;
  double t4963;
  double t4984;
  double t4987;
  double t4999;
  double t5006;
  double t5009;
  double t5034;
  double t5035;
  double t5040;
  double t5059;
  double t5061;
  double t5065;
  double t5067;
  double t5076;
  double t5080;
  double t5115;
  double t5119;
  double t5123;
  double t5131;
  double t5135;
  double t5140;
  double t5143;
  double t5144;
  double t5158;
  double t5147;
  double t5176;
  double t5263;
  double t5265;
  double t5268;
  double t5274;
  double t5276;
  double t5281;
  double t5285;
  double t5289;
  t228 = Cos(var1[6]);
  t169 = Cos(var1[7]);
  t189 = Sin(var1[6]);
  t271 = Sin(var1[7]);
  t754 = t228*t169;
  t878 = -1.*t189*t271;
  t936 = t754 + t878;
  t1117 = -1.*t169;
  t1156 = 1. + t1117;
  t1182 = -0.9063*t1156;
  t1192 = -1.0567*t169;
  t1207 = t1182 + t1192;
  t751 = Sin(var1[2]);
  t1351 = -1.*t169*t189;
  t1360 = -1.*t228*t271;
  t1391 = t1351 + t1360;
  t10 = Cos(var1[2]);
  t1096 = 0.4999*t189;
  t1220 = t1207*t189;
  t1288 = -0.15039999999999998*t228*t271;
  t1335 = t1096 + t1220 + t1288;
  t193 = t169*t189;
  t281 = t228*t271;
  t335 = t193 + t281;
  t1398 = -1.*t228;
  t1435 = 1. + t1398;
  t1456 = -0.4999*t1435;
  t1472 = t228*t1207;
  t1544 = 0.15039999999999998*t189*t271;
  t1566 = t1456 + t1472 + t1544;
  t945 = -1.*t751*t936;
  t1348 = -1.*t1335*t936;
  t1567 = -1.*t1391*t1566;
  t1580 = t1348 + t1567;
  t1934 = t10*t1391;
  t2003 = t1934 + t945;
  t1704 = t1335*t335;
  t1747 = t936*t1566;
  t1809 = t1704 + t1747;
  t1589 = -1.*t751*t1391;
  t2027 = -0.4999*t189;
  t2040 = -1.*t1207*t189;
  t2042 = 0.15039999999999998*t228*t271;
  t2046 = t2027 + t2040 + t2042;
  t2118 = 0.4999*t228;
  t2121 = t2118 + t1472 + t1544;
  t2216 = -1.*t228*t169;
  t2230 = t189*t271;
  t2248 = t2216 + t2230;
  t2013 = 3.5899*t2003*t1580;
  t2018 = t1335*t936;
  t2083 = t1391*t1566;
  t2250 = t10*t2248;
  t2282 = t1589 + t2250;
  t2286 = 3.5899*t1809*t2282;
  t2299 = -1.*t751*t335;
  t2300 = t10*t936;
  t2309 = t2299 + t2300;
  t2339 = -1.*t1391*t1335;
  t2494 = 0.15039999999999998*t169*t189;
  t2495 = t2494 + t2042;
  t2535 = -0.15039999999999998*t228*t169;
  t2537 = t2535 + t1544;
  t2414 = -1.*t1566*t2248;
  t2070 = t2046*t936;
  t2163 = t335*t2121;
  t2183 = t2018 + t2070 + t2083 + t2163;
  t2205 = 3.5899*t2003*t2183;
  t2360 = -1.*t1391*t2046;
  t2382 = -1.*t936*t2121;
  t2417 = t2339 + t2360 + t2382 + t2414;
  t2457 = 3.5899*t2309*t2417;
  t2485 = t2013 + t2205 + t2286 + t2457;
  t2782 = t751*t2248;
  t2785 = t1934 + t2782;
  t3034 = t751*t1391;
  t3041 = t3034 + t2300;
  t2901 = -0.4999*t228;
  t2904 = -1.*t228*t1207;
  t2905 = -0.15039999999999998*t189*t271;
  t2916 = t2901 + t2904 + t2905;
  t2739 = t751*t335;
  t2742 = t2739 + t2250;
  t2775 = 3.5899*t1809*t2742;
  t2806 = 3.5899*t1580*t2785;
  t2530 = t2495*t936;
  t2538 = t335*t2537;
  t2553 = t2018 + t2530 + t2083 + t2538;
  t2817 = t10*t335;
  t2818 = t751*t936;
  t2823 = t2817 + t2818;
  t2933 = -1.*t335*t1566;
  t2966 = -1.*t1335*t2248;
  t2608 = -1.*t1391*t2495;
  t2626 = -1.*t936*t2537;
  t2644 = t2339 + t2608 + t2626 + t2414;
  t3063 = t1391*t1335;
  t3236 = 0.15039999999999998*t228*t169;
  t3244 = t3236 + t2905;
  t3127 = t1566*t2248;
  t2588 = 3.5899*t2003*t2553;
  t2671 = 3.5899*t2309*t2644;
  t2673 = t2013 + t2588 + t2286 + t2671;
  t3220 = 3.5899*t2183*t2785;
  t3222 = 3.5899*t2553*t2785;
  t3230 = -1.*t2495*t936;
  t3255 = -1.*t1391*t3244;
  t3272 = -1.*t1391*t2121;
  t3280 = -1.*t1391*t2537;
  t3296 = -1.*t2046*t2248;
  t3302 = -1.*t2495*t2248;
  t3306 = t3230 + t3255 + t2933 + t3272 + t3280 + t2966 + t3296 + t3302;
  t3308 = 3.5899*t2823*t3306;
  t3332 = 3.5899*t3041*t2417;
  t3362 = 3.5899*t3041*t2644;
  t3386 = t1391*t2046;
  t3413 = t1391*t2495;
  t3420 = t2495*t335;
  t3469 = t936*t3244;
  t3506 = t936*t2121;
  t3518 = t936*t2537;
  t3552 = t3063 + t3386 + t3413 + t3420 + t3469 + t3506 + t3518 + t3127;
  t3553 = 3.5899*t3041*t3552;
  t3555 = t2775 + t2806 + t3220 + t3222 + t3308 + t3332 + t3362 + t3553;
  t3999 = 3.5899*t3041*t1580;
  t4013 = 3.5899*t1809*t2785;
  t4011 = 3.5899*t3041*t2183;
  t4061 = 3.5899*t2823*t2417;
  t4100 = t3999 + t4011 + t4013 + t4061;
  t4154 = 3.5899*t3041*t2553;
  t4171 = 3.5899*t2823*t2644;
  t4172 = t3999 + t4154 + t4013 + t4171;
  t1608 = -1.*t10*t936;
  t1630 = t1589 + t1608;
  t4209 = -1.*t10*t1391;
  t623 = -1.*t10*t335;
  t1084 = t623 + t945;
  t4253 = 3.5899*t1630*t1580;
  t4271 = -1.*t751*t2248;
  t4288 = t4209 + t4271;
  t4296 = 3.5899*t1809*t4288;
  t4257 = 3.5899*t1630*t2183;
  t4313 = 3.5899*t1084*t2417;
  t4325 = t4253 + t4257 + t4296 + t4313;
  t2900 = -1.*t2046*t936;
  t2925 = -1.*t1391*t2916;
  t2963 = -2.*t1391*t2121;
  t2972 = -2.*t2046*t2248;
  t2979 = t2900 + t2925 + t2933 + t2963 + t2966 + t2972;
  t3072 = 2.*t1391*t2046;
  t3102 = t2046*t335;
  t3109 = t936*t2916;
  t3121 = 2.*t936*t2121;
  t3133 = t3063 + t3072 + t3102 + t3109 + t3121 + t3127;
  t4446 = 3.5899*t1580*t2282;
  t4488 = t2817 + t4271;
  t4498 = 3.5899*t1809*t4488;
  t4404 = 3.5899*t1630*t2553;
  t4405 = 3.5899*t1084*t2644;
  t4410 = t4253 + t4404 + t4296 + t4405;
  t4609 = 3.5899*t2183*t2282;
  t4614 = 3.5899*t2553*t2282;
  t4615 = 3.5899*t2309*t3306;
  t4637 = 3.5899*t2003*t2417;
  t4639 = 3.5899*t2003*t2644;
  t4640 = 3.5899*t2003*t3552;
  t4643 = t4446 + t4609 + t4614 + t4498 + t4615 + t4637 + t4639 + t4640;
  t3635 = -2.*t1391*t2537;
  t3701 = -2.*t2495*t2248;
  t3730 = t3230 + t3255 + t2933 + t3635 + t2966 + t3701;
  t3803 = 2.*t1391*t2495;
  t3848 = 2.*t936*t2537;
  t3865 = t3063 + t3803 + t3420 + t3469 + t3848 + t3127;
  t1588 = 3.5899*t1084*t1580;
  t1895 = 3.5899*t1630*t1809;
  t1903 = t1588 + t1895;
  t2493 = -0.5*var2[6]*t2485;
  t2685 = -0.5*var2[7]*t2673;
  t2706 = -0.5*var2[2]*t2485;
  t3593 = -0.5*var2[2]*t2673;
  t4818 = 7.1798*t2183*t2553;
  t4820 = 7.1798*t1580*t3306;
  t4855 = 7.1798*t2417*t2644;
  t4858 = 7.1798*t1809*t3552;
  t4881 = t4818 + t4820 + t4855 + t4858;
  t4963 = 7.1798*t1809*t2183;
  t4984 = 7.1798*t1580*t2417;
  t4987 = t4963 + t4984;
  t4999 = 7.1798*t1809*t2553;
  t5006 = 7.1798*t1580*t2644;
  t5009 = t4999 + t5006;
  t5034 = 0.4999*t271;
  t5035 = t1207*t271;
  t5040 = 0.15039999999999998*t169*t271;
  t5059 = t5034 + t5035 + t5040;
  t5061 = 0.4999*t169;
  t5065 = t1207*t169;
  t5067 = Power(t271,2);
  t5076 = -0.15039999999999998*t5067;
  t5080 = t5061 + t5065 + t5076;
  t5115 = -0.4999*t271;
  t5119 = -1.*t1207*t271;
  t5123 = -0.15039999999999998*t169*t271;
  t5131 = t5115 + t5119 + t5123;
  t5135 = 3.5899*t5131*t2183;
  t5140 = 3.5899*t5059*t3306;
  t5143 = Power(t169,2);
  t5144 = 0.15039999999999998*t5143;
  t5158 = 3.5899*t5080*t3552;
  t5147 = t5061 + t5065 + t5144;
  t5176 = 0. + t5061 + t5065 + t5144;
  t5263 = 3.5899*t5080*t2183;
  t5265 = 3.5899*t5059*t2417;
  t5268 = t5263 + t5265;
  t5274 = 3.5899*t5147*t1580;
  t5276 = 3.5899*t5131*t1809;
  t5281 = 3.5899*t5080*t2553;
  t5285 = 3.5899*t5059*t2644;
  t5289 = t5274 + t5276 + t5281 + t5285;
  p_output1[0]=var2[2]*(t2493 + t2685 - 0.5*t1903*var2[2]);
  p_output1[1]=var2[2]*(t2706 - 0.5*(t2775 + 7.1798*t2183*t2785 + t2806 + 3.5899*t2823*t2979 + 7.1798*t2417*t3041 + 3.5899*t3041*t3133)*var2[6] - 0.5*t3555*var2[7]);
  p_output1[2]=var2[2]*(t3593 - 0.5*t3555*var2[6] - 0.5*(t2775 + 7.1798*t2553*t2785 + t2806 + 7.1798*t2644*t3041 + 3.5899*t2823*t3730 + 3.5899*t3041*t3865)*var2[7]);
  p_output1[3]=-1.*(3.5899*t1809*t2003 + 3.5899*t1580*t2309)*var2[2] - 0.5*t4100*var2[6] - 0.5*t4172*var2[7];
  p_output1[4]=-0.5*t4100*var2[2];
  p_output1[5]=-0.5*t4172*var2[2];
  p_output1[6]=var2[2]*(-0.5*(3.5899*t1580*(t1608 + t2739) + 3.5899*t1809*(t2818 + t4209))*var2[2] - 0.5*t4325*var2[6] - 0.5*t4410*var2[7]);
  p_output1[7]=var2[2]*(-0.5*t4325*var2[2] - 0.5*(7.1798*t2183*t2282 + 7.1798*t2003*t2417 + 3.5899*t2309*t2979 + 3.5899*t2003*t3133 + t4446 + t4498)*var2[6] - 0.5*t4643*var2[7]);
  p_output1[8]=var2[2]*(-0.5*t4410*var2[2] - 0.5*t4643*var2[6] - 0.5*(7.1798*t2282*t2553 + 7.1798*t2003*t2644 + 3.5899*t2309*t3730 + 3.5899*t2003*t3865 + t4446 + t4498)*var2[7]);
  p_output1[9]=t2493 + t2685 - 1.*t1903*var2[2];
  p_output1[10]=t2706;
  p_output1[11]=t3593;
  p_output1[12]=var2[2]*(-0.5*(7.1798*Power(t2183,2) + 7.1798*Power(t2417,2) + 7.1798*t1580*t2979 + 7.1798*t1809*t3133)*var2[6] - 0.5*t4881*var2[7]);
  p_output1[13]=var2[2]*(-0.5*t4881*var2[6] - 0.5*(7.1798*Power(t2553,2) + 7.1798*Power(t2644,2) + 7.1798*t1580*t3730 + 7.1798*t1809*t3865)*var2[7]);
  p_output1[14]=-0.5*t4987*var2[6] - 0.5*t5009*var2[7];
  p_output1[15]=-0.5*t4987*var2[2];
  p_output1[16]=-0.5*t5009*var2[2];
  p_output1[17]=var2[2]*(-0.5*(3.5899*t2979*t5059 + 3.5899*t3133*t5080)*var2[6] - 0.5*(t5135 + t5140 + 3.5899*t2417*t5147 + t5158)*var2[7]);
  p_output1[18]=var2[2]*(-0.5*(t5135 + t5140 + t5158 + 3.5899*t2417*t5176)*var2[6] - 0.5*(3.5899*t3730*t5059 + 3.5899*t3865*t5080 + 3.5899*t1580*t5131 + 7.1798*t2553*t5131 + 3.5899*t1809*(0. - 0.4999*t169 - 1.*t1207*t169 - 0.15039999999999998*t5143) + 3.5899*t2644*t5147 + 3.5899*t2644*t5176)*var2[7]);
  p_output1[19]=-0.5*t5268*var2[6] - 0.5*t5289*var2[7];
  p_output1[20]=-0.5*t5268*var2[2];
  p_output1[21]=-0.5*t5289*var2[2];
  p_output1[22]=var2[2]*(0.26996047999999995*t3133*var2[6] + 0.26996047999999995*t3552*var2[7]);
  p_output1[23]=var2[2]*(0.26996047999999995*t3552*var2[6] + 0.26996047999999995*t3865*var2[7]);
  p_output1[24]=0.26996047999999995*t2183*var2[6] + 0.26996047999999995*t2553*var2[7];
  p_output1[25]=0.26996047999999995*t2183*var2[2];
  p_output1[26]=0.26996047999999995*t2553*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L6_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L6_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

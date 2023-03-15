/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:07 GMT-08:00
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
  double t24;
  double t778;
  double t1093;
  double t1027;
  double t273;
  double t287;
  double t387;
  double t577;
  double t675;
  double t1282;
  double t1010;
  double t1324;
  double t1330;
  double t1492;
  double t1718;
  double t1746;
  double t1747;
  double t1792;
  double t1089;
  double t1095;
  double t1202;
  double t2134;
  double t32;
  double t683;
  double t808;
  double t827;
  double t894;
  double t1228;
  double t1885;
  double t1903;
  double t1905;
  double t2220;
  double t2237;
  double t2271;
  double t2294;
  double t2300;
  double t2328;
  double t2342;
  double t2419;
  double t2463;
  double t2465;
  double t2557;
  double t2560;
  double t2566;
  double t2811;
  double t3190;
  double t3200;
  double t3313;
  double t2832;
  double t2868;
  double t2871;
  double t2890;
  double t3357;
  double t3450;
  double t3506;
  double t2782;
  double t2819;
  double t2946;
  double t3830;
  double t3635;
  double t3641;
  double t3680;
  double t3667;
  double t3937;
  double t4540;
  double t4542;
  double t4562;
  double t4641;
  double t4232;
  double t4284;
  double t4397;
  double t4642;
  double t4737;
  double t4783;
  double t4787;
  double t1532;
  double t1622;
  double t5079;
  double t5216;
  double t1950;
  double t2162;
  double t5243;
  double t5245;
  double t5264;
  double t5279;
  double t5508;
  double t5518;
  double t5561;
  double t5353;
  double t5662;
  double t4049;
  double t4101;
  double t4127;
  double t4131;
  double t5607;
  double t5867;
  double t1665;
  double t2189;
  double t2201;
  double t2213;
  double t2820;
  double t2950;
  double t3029;
  double t6263;
  double t6276;
  double t6048;
  double t6057;
  double t6077;
  double t6090;
  double t6354;
  double t6370;
  double t6380;
  double t6382;
  double t6124;
  double t6126;
  double t6165;
  double t6182;
  double t6306;
  double t6344;
  double t6210;
  double t6240;
  double t6255;
  double t6282;
  double t6302;
  double t6384;
  double t6791;
  double t6881;
  double t6437;
  double t6900;
  double t6914;
  double t6941;
  double t6969;
  double t6469;
  double t6561;
  double t6632;
  double t6656;
  double t6720;
  double t6728;
  double t6734;
  double t6892;
  double t6915;
  double t6920;
  double t6970;
  double t6986;
  double t7051;
  double t7083;
  double t7094;
  double t7114;
  double t7120;
  double t7141;
  double t7148;
  double t7175;
  double t7245;
  double t7249;
  double t7273;
  double t7296;
  double t7305;
  double t7346;
  double t7359;
  double t7363;
  double t8079;
  double t8102;
  double t8103;
  double t7597;
  double t7624;
  double t7642;
  double t7665;
  double t7738;
  double t7811;
  double t7888;
  double t7890;
  double t7916;
  double t8182;
  double t8187;
  double t8194;
  double t8199;
  double t8201;
  double t8222;
  double t8223;
  double t8227;
  t24 = Cos(var1[4]);
  t778 = Sin(var1[4]);
  t1093 = Cos(var1[3]);
  t1027 = Sin(var1[3]);
  t273 = -1.*t24;
  t287 = 1. + t273;
  t387 = -0.9063*t287;
  t577 = -1.078185*t24;
  t675 = t387 + t577;
  t1282 = Cos(var1[2]);
  t1010 = Sin(var1[2]);
  t1324 = t1093*t24;
  t1330 = -1.*t1027*t778;
  t1492 = t1324 + t1330;
  t1718 = 0.4999*t778;
  t1746 = t675*t778;
  t1747 = 0.17188499999999995*t24*t778;
  t1792 = t1718 + t1746 + t1747;
  t1089 = -1.*t24*t1027;
  t1095 = -1.*t1093*t778;
  t1202 = t1089 + t1095;
  t2134 = -1.*t1010*t1492;
  t32 = 0.4999*t24;
  t683 = t675*t24;
  t808 = Power(t778,2);
  t827 = -0.17188499999999995*t808;
  t894 = t32 + t683 + t827;
  t1228 = -1.*t1010*t1202;
  t1885 = t24*t1027;
  t1903 = t1093*t778;
  t1905 = t1885 + t1903;
  t2220 = t1282*t1202;
  t2237 = t2220 + t2134;
  t2271 = 0.85216*t1792*t2237;
  t2294 = -1.*t1093*t24;
  t2300 = t1027*t778;
  t2328 = t2294 + t2300;
  t2342 = t1282*t2328;
  t2419 = t1228 + t2342;
  t2463 = 0.85216*t894*t2419;
  t2465 = t2271 + t2463;
  t2557 = Power(t24,2);
  t2560 = 0.17188499999999995*t2557;
  t2566 = t32 + t683 + t2560;
  t2811 = t1282*t1492;
  t3190 = t1010*t1905;
  t3200 = t3190 + t2342;
  t3313 = 0.85216*t894*t3200;
  t2832 = -0.4999*t778;
  t2868 = -1.*t675*t778;
  t2871 = -0.17188499999999995*t24*t778;
  t2890 = t2832 + t2868 + t2871;
  t3357 = t1010*t2328;
  t3450 = t2220 + t3357;
  t3506 = 0.85216*t1792*t3450;
  t2782 = -1.*t1010*t1905;
  t2819 = t2782 + t2811;
  t2946 = 0.85216*t2890*t2237;
  t3830 = 0. + t32 + t683 + t2560;
  t3635 = t1010*t1202;
  t3641 = t3635 + t2811;
  t3680 = 0.85216*t2890*t3450;
  t3667 = 0.85216*t2566*t3641;
  t3937 = 0.85216*t3830*t3641;
  t4540 = 0.85216*t1792*t2819;
  t4542 = 0.85216*t894*t2237;
  t4562 = t4540 + t4542;
  t4641 = 0.85216*t1792*t3641;
  t4232 = t1282*t1905;
  t4284 = t1010*t1492;
  t4397 = t4232 + t4284;
  t4642 = 0.85216*t894*t3450;
  t4737 = 0.85216*t2890*t3641;
  t4783 = 0.85216*t2566*t4397;
  t4787 = t4737 + t4641 + t4783 + t4642;
  t1532 = -1.*t1282*t1492;
  t1622 = t1228 + t1532;
  t5079 = -1.*t1282*t1202;
  t5216 = 0.85216*t1792*t1622;
  t1950 = -1.*t1282*t1905;
  t2162 = t1950 + t2134;
  t5243 = -1.*t1010*t2328;
  t5245 = t5079 + t5243;
  t5264 = 0.85216*t894*t5245;
  t5279 = t5216 + t5264;
  t5508 = 0.85216*t1792*t2419;
  t5518 = t4232 + t5243;
  t5561 = 0.85216*t894*t5518;
  t5353 = 0.85216*t2890*t1622;
  t5662 = 0.85216*t2890*t2419;
  t4049 = -0.4999*t24;
  t4101 = -1.*t675*t24;
  t4127 = -0.17188499999999995*t2557;
  t4131 = 0. + t4049 + t4101 + t4127;
  t5607 = 0.85216*t2566*t2237;
  t5867 = 0.85216*t3830*t2237;
  t1665 = 0.85216*t894*t1622;
  t2189 = 0.85216*t1792*t2162;
  t2201 = t1665 + t2189;
  t2213 = -0.5*var2[2]*t2201;
  t2820 = 0.85216*t2566*t2819;
  t2950 = t2820 + t2946 + t2271 + t2463;
  t3029 = -0.5*var2[4]*t2950;
  t6263 = t1093*t675;
  t6276 = 0.17188499999999995*t1027*t778;
  t6048 = -0.4999*t1027;
  t6057 = -1.*t675*t1027;
  t6077 = 0.17188499999999995*t1093*t778;
  t6090 = t6048 + t6057 + t6077;
  t6354 = 0.4999*t1027;
  t6370 = t675*t1027;
  t6380 = -0.17188499999999995*t1093*t778;
  t6382 = t6354 + t6370 + t6380;
  t6124 = -0.4999*t1093;
  t6126 = -1.*t1093*t675;
  t6165 = -0.17188499999999995*t1027*t778;
  t6182 = t6124 + t6126 + t6165;
  t6306 = 0.4999*t1093;
  t6344 = t6306 + t6263 + t6276;
  t6210 = -1.*t1093;
  t6240 = 1. + t6210;
  t6255 = -0.4999*t6240;
  t6282 = t6255 + t6263 + t6276;
  t6302 = -1.*t1905*t6282;
  t6384 = -1.*t6382*t2328;
  t6791 = 0.17188499999999995*t24*t1027;
  t6881 = t6791 + t6077;
  t6437 = t1202*t6382;
  t6900 = 0.17188499999999995*t1093*t24;
  t6914 = t6900 + t6165;
  t6941 = -0.17188499999999995*t1093*t24;
  t6969 = t6941 + t6276;
  t6469 = t6282*t2328;
  t6561 = t6382*t1492;
  t6632 = t6090*t1492;
  t6656 = t1202*t6282;
  t6720 = t1905*t6344;
  t6728 = t6561 + t6632 + t6656 + t6720;
  t6734 = 0.85216*t2890*t6728;
  t6892 = -1.*t6881*t1492;
  t6915 = -1.*t1202*t6914;
  t6920 = -1.*t1202*t6344;
  t6970 = -1.*t1202*t6969;
  t6986 = -1.*t6090*t2328;
  t7051 = -1.*t6881*t2328;
  t7083 = t6892 + t6915 + t6302 + t6920 + t6970 + t6384 + t6986 + t7051;
  t7094 = 0.85216*t1792*t7083;
  t7114 = -1.*t1202*t6382;
  t7120 = -1.*t1202*t6090;
  t7141 = -1.*t1492*t6344;
  t7148 = -1.*t6282*t2328;
  t7175 = t7114 + t7120 + t7141 + t7148;
  t7245 = t1202*t6090;
  t7249 = t1202*t6881;
  t7273 = t6881*t1905;
  t7296 = t1492*t6914;
  t7305 = t1492*t6344;
  t7346 = t1492*t6969;
  t7359 = t6437 + t7245 + t7249 + t7273 + t7296 + t7305 + t7346 + t6469;
  t7363 = 0.85216*t894*t7359;
  t8079 = -1.*t1202*t6881;
  t8102 = -1.*t1492*t6969;
  t8103 = t7114 + t8079 + t8102 + t7148;
  t7597 = -1.*t6382*t1492;
  t7624 = -1.*t1202*t6282;
  t7642 = t7597 + t7624;
  t7665 = t6382*t1905;
  t7738 = t1492*t6282;
  t7811 = t7665 + t7738;
  t7888 = t6881*t1492;
  t7890 = t1905*t6969;
  t7916 = t6561 + t7888 + t6656 + t7890;
  t8182 = 0.85216*t2566*t7642;
  t8187 = 0.85216*t2890*t7811;
  t8194 = 0.85216*t894*t7916;
  t8199 = 0.85216*t1792*t8103;
  t8201 = t8182 + t8187 + t8194 + t8199;
  t8222 = 1.70432*t2566*t1792;
  t8223 = 1.70432*t2890*t894;
  t8227 = t8222 + t8223;
  p_output1[0]=var2[3]*(t2213 + t3029 - 0.5*t2465*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t2465*var2[2] - 0.5*(t3313 + t3506)*var2[3] - 0.5*(t3313 + t3506 + t3667 + t3680)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(t2271 + t2463 + t2946 + 0.85216*t2819*t3830)*var2[2] - 0.5*(t3313 + t3506 + t3680 + t3937)*var2[3] - 0.5*(t3313 + 1.70432*t2890*t3450 + t3506 + t3667 + t3937 + 0.85216*t3641*t4131 + 0.85216*t2890*t4397)*var2[4]);
  p_output1[3]=-0.5*t4562*var2[3];
  p_output1[4]=-0.5*t4562*var2[2] - 1.*(t4641 + t4642)*var2[3] - 0.5*t4787*var2[4];
  p_output1[5]=-0.5*t4787*var2[3];
  p_output1[6]=var2[3]*(-0.5*(0.85216*t1792*(t1532 + t3190) + 0.85216*(t4284 + t5079)*t894)*var2[2] - 0.5*t5279*var2[3] - 0.5*(0.85216*t2162*t2566 + t5216 + t5264 + t5353)*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t5279*var2[2] - 0.5*(t5508 + t5561)*var2[3] - 0.5*(t5508 + t5561 + t5607 + t5662)*var2[4]);
  p_output1[8]=var2[3]*(-0.5*(0.85216*t2162*t3830 + t5216 + t5264 + t5353)*var2[2] - 0.5*(t5508 + t5561 + t5662 + t5867)*var2[3] - 0.5*(1.70432*t2419*t2890 + 0.85216*t2819*t2890 + 0.85216*t2237*t4131 + t5508 + t5561 + t5607 + t5867)*var2[4]);
  p_output1[9]=-0.5*t2201*var2[3];
  p_output1[10]=t2213 + t3029 - 1.*t2465*var2[3];
  p_output1[11]=-0.5*t2950*var2[3];
  p_output1[12]=var2[3]*(-0.5*(0.85216*t1792*(-1.*t1492*t6090 - 2.*t2328*t6090 - 1.*t1202*t6182 + t6302 - 2.*t1202*t6344 + t6384) + 0.85216*(2.*t1202*t6090 + t1905*t6090 + t1492*t6182 + 2.*t1492*t6344 + t6437 + t6469)*t894)*var2[3] - 0.5*(t6734 + t7094 + 0.85216*t2566*t7175 + t7363)*var2[4]);
  p_output1[13]=var2[3]*(-0.5*(t6734 + t7094 + 0.85216*t3830*t7175 + t7363)*var2[3] - 0.5*(0.85216*t1792*(t6302 + t6384 - 2.*t2328*t6881 + t6892 + t6915 - 2.*t1202*t6969) + 0.85216*t2890*t7642 + 0.85216*t4131*t7811 + 1.70432*t2890*t7916 + 0.85216*t2566*t8103 + 0.85216*t3830*t8103 + 0.85216*(t6437 + t6469 + 2.*t1202*t6881 + 2.*t1492*t6969 + t7273 + t7296)*t894)*var2[4]);
  p_output1[14]=-1.*(0.85216*t1792*t7175 + 0.85216*t6728*t894)*var2[3] - 0.5*t8201*var2[4];
  p_output1[15]=-0.5*t8201*var2[3];
  p_output1[16]=-0.5*(1.70432*t1792*t2890 + 1.70432*Power(t2890,2) + 1.70432*t2566*t3830 + 1.70432*t4131*t894)*var2[3]*var2[4];
  p_output1[17]=-0.5*t8227*var2[4];
  p_output1[18]=-0.5*t8227*var2[3];
  p_output1[19]=0.07323676079999998*t4131*var2[3]*var2[4];
  p_output1[20]=0.07323676079999998*t2890*var2[4];
  p_output1[21]=0.07323676079999998*t2890*var2[3];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L3_J4_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L3_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

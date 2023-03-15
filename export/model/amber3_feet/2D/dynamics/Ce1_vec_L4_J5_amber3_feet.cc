/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:39 GMT-08:00
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
  double t4;
  double t398;
  double t1009;
  double t928;
  double t1314;
  double t999;
  double t1035;
  double t1174;
  double t909;
  double t1456;
  double t1503;
  double t1504;
  double t239;
  double t242;
  double t294;
  double t313;
  double t409;
  double t566;
  double t1691;
  double t894;
  double t2960;
  double t3249;
  double t3262;
  double t1867;
  double t13;
  double t772;
  double t849;
  double t891;
  double t3340;
  double t1758;
  double t1879;
  double t2021;
  double t2663;
  double t2843;
  double t2888;
  double t2949;
  double t2959;
  double t3285;
  double t3408;
  double t3747;
  double t4391;
  double t4399;
  double t1233;
  double t5215;
  double t5216;
  double t5217;
  double t4957;
  double t5091;
  double t5108;
  double t5115;
  double t4458;
  double t4553;
  double t4559;
  double t5219;
  double t5221;
  double t5222;
  double t5226;
  double t5229;
  double t5232;
  double t5235;
  double t5289;
  double t1545;
  double t1554;
  double t3991;
  double t4018;
  double t6872;
  double t7916;
  double t4441;
  double t4453;
  double t7972;
  double t5446;
  double t5483;
  double t5487;
  double t5493;
  double t5512;
  double t4580;
  double t4584;
  double t7984;
  double t7991;
  double t7996;
  double t8007;
  double t8060;
  double t8061;
  double t8068;
  double t8071;
  double t8076;
  double t8078;
  double t8079;
  double t8081;
  double t8082;
  double t8083;
  double t8090;
  double t8097;
  double t8108;
  double t8109;
  double t8114;
  double t8115;
  double t8118;
  double t8120;
  double t8127;
  double t8128;
  double t8051;
  double t8053;
  double t8054;
  double t8099;
  double t8103;
  double t8106;
  double t8160;
  double t8161;
  double t8163;
  double t8164;
  double t8165;
  double t8166;
  double t8181;
  double t8182;
  double t8183;
  double t8162;
  double t8169;
  double t8170;
  double t8159;
  double t8173;
  double t8211;
  double t8215;
  double t8217;
  double t8218;
  double t8216;
  double t8219;
  double t8220;
  double t8222;
  double t8223;
  double t8224;
  double t8192;
  double t8194;
  double t8245;
  double t8236;
  double t8237;
  double t8240;
  double t8244;
  double t8247;
  t4 = Cos(var1[5]);
  t398 = Sin(var1[5]);
  t1009 = Cos(var1[4]);
  t928 = Sin(var1[4]);
  t1314 = Cos(var1[3]);
  t999 = -1.*t4*t928;
  t1035 = -1.*t1009*t398;
  t1174 = t999 + t1035;
  t909 = Sin(var1[3]);
  t1456 = t1009*t4;
  t1503 = -1.*t928*t398;
  t1504 = t1456 + t1503;
  t239 = -1.*t4;
  t242 = 1. + t239;
  t294 = -1.3127*t242;
  t313 = -1.3127*t4;
  t409 = -0.06*t398;
  t566 = t294 + t313 + t409;
  t1691 = Cos(var1[2]);
  t894 = Sin(var1[2]);
  t2960 = t4*t928;
  t3249 = t1009*t398;
  t3262 = t2960 + t3249;
  t1867 = -1.*t909*t1504;
  t13 = 0.9063*t4;
  t772 = t4*t566;
  t849 = 0.06*t4*t398;
  t891 = t13 + t772 + t849;
  t3340 = t1314*t1504;
  t1758 = t1314*t1174;
  t1879 = t1758 + t1867;
  t2021 = t1691*t1879;
  t2663 = Power(t4,2);
  t2843 = -0.06*t2663;
  t2888 = 0.9063*t398;
  t2949 = t566*t398;
  t2959 = t2843 + t2888 + t2949;
  t3285 = -1.*t909*t3262;
  t3408 = t3285 + t3340;
  t3747 = t1691*t3408;
  t4391 = t909*t1174;
  t4399 = t4391 + t3340;
  t1233 = -1.*t909*t1174;
  t5215 = -1.*t1009*t4;
  t5216 = t928*t398;
  t5217 = t5215 + t5216;
  t4957 = t1691*t4399;
  t5091 = t894*t1879;
  t5108 = t4957 + t5091;
  t5115 = 1.142857*t2959*t5108;
  t4458 = t1314*t3262;
  t4553 = t909*t1504;
  t4559 = t4458 + t4553;
  t5219 = t1314*t5217;
  t5221 = t1233 + t5219;
  t5222 = t894*t5221;
  t5226 = t909*t5217;
  t5229 = t1758 + t5226;
  t5232 = t1691*t5229;
  t5235 = t5222 + t5232;
  t5289 = 1.142857*t891*t5235;
  t1545 = -1.*t1314*t1504;
  t1554 = t1233 + t1545;
  t3991 = -1.*t1314*t3262;
  t4018 = t3991 + t1867;
  t6872 = -1.*t894*t1879;
  t7916 = -1.*t894*t3408;
  t4441 = -1.*t894*t4399;
  t4453 = t4441 + t2021;
  t7972 = 1.142857*t2959*t4453;
  t5446 = -0.9063*t398;
  t5483 = -1.*t566*t398;
  t5487 = Power(t398,2);
  t5493 = -0.06*t5487;
  t5512 = 0. + t5446 + t5483 + t5493;
  t4580 = -1.*t894*t4559;
  t4584 = t3747 + t4580;
  t7984 = t1691*t5221;
  t7991 = -1.*t894*t5229;
  t7996 = t7984 + t7991;
  t8007 = 1.142857*t891*t7996;
  t8060 = -1.*t1009;
  t8061 = 1. + t8060;
  t8068 = -0.9063*t8061;
  t8071 = -0.06*t4*t928;
  t8076 = t1009*t566;
  t8078 = t8068 + t8071 + t8076;
  t8079 = t1314*t8078;
  t8081 = 0.06*t1009*t4;
  t8082 = 0.9063*t928;
  t8083 = t928*t566;
  t8090 = t8081 + t8082 + t8083;
  t8097 = -1.*t909*t8090;
  t8108 = -0.4999*t909;
  t8109 = -1.*t909*t8078;
  t8114 = -1.*t1314*t8090;
  t8115 = t8108 + t8109 + t8114;
  t8118 = 0.4999*t909;
  t8120 = t909*t8078;
  t8127 = t1314*t8090;
  t8128 = t8118 + t8120 + t8127;
  t8051 = -1.*t1314;
  t8053 = 1. + t8051;
  t8054 = -0.4999*t8053;
  t8099 = t8054 + t8079 + t8097;
  t8103 = 0.4999*t1314;
  t8106 = t8103 + t8079 + t8097;
  t8160 = 0.9063*t1009;
  t8161 = t8160 + t8071 + t8076;
  t8163 = -0.06*t1009*t4;
  t8164 = -0.9063*t928;
  t8165 = -1.*t928*t566;
  t8166 = t8163 + t8164 + t8165;
  t8181 = t1314*t8161;
  t8182 = t909*t8166;
  t8183 = t8181 + t8182;
  t8162 = -1.*t909*t8161;
  t8169 = t1314*t8166;
  t8170 = t8162 + t8169;
  t8159 = t8128*t4399;
  t8173 = t8099*t1879;
  t8211 = -0.06*t1009*t398;
  t8215 = t8071 + t8211;
  t8217 = 0.06*t928*t398;
  t8218 = t8163 + t8217;
  t8216 = -1.*t909*t8215;
  t8219 = t1314*t8218;
  t8220 = t8216 + t8219;
  t8222 = t1314*t8215;
  t8223 = t909*t8218;
  t8224 = t8222 + t8223;
  t8192 = -1.*t8099*t5221;
  t8194 = -1.*t8128*t5229;
  t8245 = 0.4999*t1504;
  t8236 = 0.4999*t1174;
  t8237 = t8078*t1174;
  t8240 = t8090*t1504;
  t8244 = -1.*t8090*t1174;
  t8247 = -1.*t8078*t5217;
  p_output1[0]=var2[4]*(-0.5*(1.142857*t2959*t4584 + 1.142857*t4453*t891)*var2[2] - 0.5*(1.142857*t891*(t2021 + t1554*t894) + 1.142857*t2959*(t3747 + t4018*t894))*var2[3] - 0.5*(t5115 + t5289)*var2[4] - 0.5*(t5115 + t5289 + 1.142857*t5108*t5512 + 1.142857*t891*(t1691*t4559 + t3408*t894))*var2[5]);
  p_output1[1]=var2[4]*(-0.5*(1.142857*t2959*(-1.*t1691*t4559 + t7916) + 1.142857*(-1.*t1691*t4399 + t6872)*t891)*var2[2] - 0.5*(1.142857*t2959*(t1691*t4018 + t7916) + 1.142857*(t1554*t1691 + t6872)*t891)*var2[3] - 0.5*(t7972 + t8007)*var2[4] - 0.5*(1.142857*t4453*t5512 + t7972 + t8007 + 1.142857*t4584*t891)*var2[5]);
  p_output1[2]=var2[4]*(-0.5*(1.142857*t2959*(-1.*t1554*t8099 - 1.*t4399*t8106 - 1.*t1879*t8115 - 1.*t1879*t8128) + 1.142857*(t4018*t8099 + t4559*t8106 + t3408*t8115 + t3408*t8128)*t891)*var2[3] - 0.5*(1.142857*t2959*(-1.*t1879*t8170 - 1.*t4399*t8183 + t8192 + t8194) + 1.142857*(t8159 + t3408*t8170 + t8173 + t4559*t8183)*t891)*var2[4] - 0.5*(1.142857*t5512*(t3408*t8099 + t4559*t8128) + 1.142857*t2959*(t8192 + t8194 - 1.*t1879*t8220 - 1.*t4399*t8224) + 1.142857*(-1.*t1879*t8099 - 1.*t4399*t8128)*t891 + 1.142857*(t8159 + t8173 + t3408*t8220 + t4559*t8224)*t891)*var2[5]);
  p_output1[3]=var2[4]*(-0.5*(1.142857*t2959*(-1.*t1504*t8161 - 1.*t1174*t8166 + t8244 + t8245 + t8247) + 1.142857*(t3262*t8161 + t1504*t8166 + t8236 + t8237 + t8240)*t891)*var2[4] - 0.5*(1.142857*t5512*(t1504*t8078 + t3262*t8090 + t8245) + 1.142857*t2959*(-1.*t1504*t8215 - 1.*t1174*t8218 + t8244 + t8245 + t8247) + 1.142857*(0.4999*t3262 - 1.*t1174*t8078 - 1.*t1504*t8090)*t891 + 1.142857*(t3262*t8215 + t1504*t8218 + t8236 + t8237 + t8240)*t891)*var2[5]);
  p_output1[4]=-0.5*(2.285714*t2959*t891 + 2.285714*t5512*t891)*var2[4]*var2[5];
  p_output1[5]=0.03428571*t891*var2[4]*var2[5];
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

#include "Ce1_vec_L4_J5_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L4_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

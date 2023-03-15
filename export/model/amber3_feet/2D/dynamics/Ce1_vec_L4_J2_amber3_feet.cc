/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:37 GMT-08:00
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
  double t726;
  double t324;
  double t488;
  double t834;
  double t1070;
  double t577;
  double t910;
  double t920;
  double t244;
  double t1163;
  double t1915;
  double t1989;
  double t72;
  double t2259;
  double t2272;
  double t2447;
  double t2577;
  double t2663;
  double t974;
  double t2047;
  double t2175;
  double t3086;
  double t3135;
  double t3516;
  double t4162;
  double t4169;
  double t4228;
  double t4396;
  double t4404;
  double t4654;
  double t4693;
  double t5407;
  double t4957;
  double t5056;
  double t5075;
  double t3746;
  double t3747;
  double t3812;
  double t3939;
  double t3991;
  double t4099;
  double t4412;
  double t4948;
  double t5108;
  double t5115;
  double t5740;
  double t6069;
  double t7894;
  double t7901;
  double t7905;
  double t7908;
  double t7909;
  double t7916;
  double t7923;
  double t7846;
  double t7863;
  double t7910;
  double t7925;
  double t7932;
  double t7933;
  double t7938;
  double t7944;
  double t7945;
  double t7947;
  double t7948;
  double t3755;
  double t3845;
  double t4762;
  double t4856;
  double t6562;
  double t7766;
  double t7802;
  double t7812;
  double t7980;
  double t7981;
  double t7983;
  double t8000;
  double t8002;
  double t8006;
  double t8007;
  double t8008;
  double t8010;
  double t7994;
  double t7995;
  double t7996;
  double t7997;
  double t8012;
  double t8013;
  double t8015;
  double t8017;
  double t8022;
  double t8023;
  double t8030;
  double t8031;
  double t8032;
  double t8033;
  double t8034;
  double t8035;
  double t7993;
  double t8014;
  double t8027;
  double t8028;
  double t8029;
  double t8036;
  double t8037;
  double t8040;
  double t8044;
  double t8045;
  double t8054;
  double t8055;
  double t8056;
  double t8057;
  double t8051;
  double t8052;
  double t8086;
  double t8087;
  double t8089;
  double t8090;
  double t8093;
  double t8095;
  double t8102;
  double t8103;
  double t8104;
  double t8088;
  double t8097;
  double t8098;
  double t8082;
  double t8083;
  double t8101;
  double t8120;
  double t8121;
  double t8123;
  double t8124;
  double t8108;
  double t8122;
  double t8125;
  double t8126;
  double t8128;
  double t8129;
  double t8133;
  double t8111;
  double t8112;
  double t8147;
  double t8150;
  double t8151;
  double t8152;
  double t8154;
  double t8155;
  double t8156;
  double t8157;
  double t8165;
  double t8166;
  double t8167;
  double t8170;
  double t8174;
  double t8176;
  double t8181;
  double t8196;
  double t8197;
  double t8198;
  double t8199;
  double t8201;
  double t8202;
  double t8203;
  double t8204;
  double t8205;
  double t8213;
  double t8214;
  t726 = Cos(var1[4]);
  t324 = Cos(var1[5]);
  t488 = Sin(var1[4]);
  t834 = Sin(var1[5]);
  t1070 = Cos(var1[3]);
  t577 = -1.*t324*t488;
  t910 = -1.*t726*t834;
  t920 = t577 + t910;
  t244 = Sin(var1[3]);
  t1163 = t726*t324;
  t1915 = -1.*t488*t834;
  t1989 = t1163 + t1915;
  t72 = Sin(var1[2]);
  t2259 = Cos(var1[2]);
  t2272 = t1070*t920;
  t2447 = -1.*t244*t1989;
  t2577 = t2272 + t2447;
  t2663 = t2259*t2577;
  t974 = -1.*t244*t920;
  t2047 = -1.*t1070*t1989;
  t2175 = t974 + t2047;
  t3086 = t244*t920;
  t3135 = t1070*t1989;
  t3516 = t3086 + t3135;
  t4162 = t324*t488;
  t4169 = t726*t834;
  t4228 = t4162 + t4169;
  t4396 = -1.*t244*t4228;
  t4404 = t4396 + t3135;
  t4654 = -1.*t1070*t4228;
  t4693 = t4654 + t2447;
  t5407 = t2259*t4404;
  t4957 = t1070*t4228;
  t5056 = t244*t1989;
  t5075 = t4957 + t5056;
  t3746 = -1.*t72*t3516;
  t3747 = t3746 + t2663;
  t3812 = -1.*t72*t2577;
  t3939 = t2259*t3516;
  t3991 = t72*t2577;
  t4099 = t3939 + t3991;
  t4412 = -1.*t72*t4404;
  t4948 = t72*t4404;
  t5108 = t2259*t5075;
  t5115 = t4948 + t5108;
  t5740 = -1.*t72*t5075;
  t6069 = t5407 + t5740;
  t7894 = -1.*t726*t324;
  t7901 = t488*t834;
  t7905 = t7894 + t7901;
  t7908 = t1070*t7905;
  t7909 = t974 + t7908;
  t7916 = t244*t7905;
  t7923 = t2272 + t7916;
  t7846 = 1.142857*t3747*t5115;
  t7863 = 1.142857*t4099*t6069;
  t7910 = t72*t7909;
  t7925 = t2259*t7923;
  t7932 = t7910 + t7925;
  t7933 = 1.142857*t3747*t7932;
  t7938 = t2259*t7909;
  t7944 = -1.*t72*t7923;
  t7945 = t7938 + t7944;
  t7947 = 1.142857*t4099*t7945;
  t7948 = t7846 + t7863 + t7933 + t7947;
  t3755 = t2259*t2175;
  t3845 = t3755 + t3812;
  t4762 = t2259*t4693;
  t4856 = t4412 + t4762;
  t6562 = -1.*t2259*t3516;
  t7766 = t6562 + t3812;
  t7802 = -1.*t2259*t5075;
  t7812 = t4412 + t7802;
  t7980 = 2.285714*t3747*t6069;
  t7981 = 2.285714*t3747*t7945;
  t7983 = t7980 + t7981;
  t8000 = -1.*t324;
  t8002 = 1. + t8000;
  t8006 = -1.3127*t8002;
  t8007 = -1.3127*t324;
  t8008 = -0.06*t834;
  t8010 = t8006 + t8007 + t8008;
  t7994 = -1.*t726;
  t7995 = 1. + t7994;
  t7996 = -0.9063*t7995;
  t7997 = -0.06*t324*t488;
  t8012 = t726*t8010;
  t8013 = t7996 + t7997 + t8012;
  t8015 = 0.06*t726*t324;
  t8017 = 0.9063*t488;
  t8022 = t488*t8010;
  t8023 = t8015 + t8017 + t8022;
  t8030 = -1.*t1070;
  t8031 = 1. + t8030;
  t8032 = -0.4999*t8031;
  t8033 = t1070*t8013;
  t8034 = -1.*t244*t8023;
  t8035 = t8032 + t8033 + t8034;
  t7993 = 0.4999*t244;
  t8014 = t244*t8013;
  t8027 = t1070*t8023;
  t8028 = t7993 + t8014 + t8027;
  t8029 = -1.*t8028*t3516;
  t8036 = -1.*t8035*t2577;
  t8037 = t8029 + t8036;
  t8040 = t8035*t4404;
  t8044 = t8028*t5075;
  t8045 = t8040 + t8044;
  t8054 = -0.4999*t244;
  t8055 = -1.*t244*t8013;
  t8056 = -1.*t1070*t8023;
  t8057 = t8054 + t8055 + t8056;
  t8051 = 0.4999*t1070;
  t8052 = t8051 + t8033 + t8034;
  t8086 = 0.9063*t726;
  t8087 = t8086 + t7997 + t8012;
  t8089 = -0.06*t726*t324;
  t8090 = -0.9063*t488;
  t8093 = -1.*t488*t8010;
  t8095 = t8089 + t8090 + t8093;
  t8102 = t1070*t8087;
  t8103 = t244*t8095;
  t8104 = t8102 + t8103;
  t8088 = -1.*t244*t8087;
  t8097 = t1070*t8095;
  t8098 = t8088 + t8097;
  t8082 = 1.142857*t3747*t8037;
  t8083 = t8028*t3516;
  t8101 = t8035*t2577;
  t8120 = -0.06*t726*t834;
  t8121 = t7997 + t8120;
  t8123 = 0.06*t488*t834;
  t8124 = t8089 + t8123;
  t8108 = 1.142857*t8045*t7945;
  t8122 = -1.*t244*t8121;
  t8125 = t1070*t8124;
  t8126 = t8122 + t8125;
  t8128 = t1070*t8121;
  t8129 = t244*t8124;
  t8133 = t8128 + t8129;
  t8111 = -1.*t8035*t7909;
  t8112 = -1.*t8028*t7923;
  t8147 = t8023*t4228;
  t8150 = 0.4999*t1989;
  t8151 = t8013*t1989;
  t8152 = t8147 + t8150 + t8151;
  t8154 = -1.*t8013*t920;
  t8155 = 0.4999*t4228;
  t8156 = -1.*t8023*t1989;
  t8157 = t8154 + t8155 + t8156;
  t8165 = 1.142857*t8157*t3747;
  t8166 = 0.4999*t920;
  t8167 = t8013*t920;
  t8170 = t8023*t1989;
  t8174 = -1.*t8023*t920;
  t8176 = -1.*t8013*t7905;
  t8181 = 1.142857*t8152*t7945;
  t8196 = 0.9063*t324;
  t8197 = t324*t8010;
  t8198 = 0.06*t324*t834;
  t8199 = t8196 + t8197 + t8198;
  t8201 = Power(t324,2);
  t8202 = -0.06*t8201;
  t8203 = 0.9063*t834;
  t8204 = t8010*t834;
  t8205 = t8202 + t8203 + t8204;
  t8213 = 1.142857*t8205*t3747;
  t8214 = 1.142857*t8199*t7945;
  p_output1[0]=var2[1]*(-0.5*(1.142857*Power(t3747,2) + 1.142857*Power(t6069,2) + 1.142857*t4099*t7766 + 1.142857*t5115*t7812)*var2[2] - 0.5*(1.142857*t3845*t4099 + 1.142857*t4856*t5115 + 1.142857*t3747*(t2663 + t2175*t72) + 1.142857*t6069*(t5407 + t4693*t72))*var2[3] - 0.5*t7948*var2[4] - 0.5*t7948*var2[5]);
  p_output1[1]=var2[1]*(-0.5*(2.285714*t3747*t7766 + 2.285714*t6069*t7812)*var2[2] - 0.5*(2.285714*t3747*t3845 + 2.285714*t4856*t6069)*var2[3] - 0.5*t7983*var2[4] - 0.5*t7983*var2[5]);
  p_output1[2]=var2[1]*(-0.5*(1.142857*t7812*t8037 + 1.142857*t7766*t8045)*var2[2] - 0.5*(1.142857*t4856*t8037 + 1.142857*t3845*t8045 + 1.142857*t6069*(-1.*t2577*t8028 - 1.*t2175*t8035 - 1.*t3516*t8052 - 1.*t2577*t8057) + 1.142857*t3747*(t4404*t8028 + t4693*t8035 + t5075*t8052 + t4404*t8057))*var2[3] - 0.5*(t8082 + 1.142857*t3747*(t8083 + t4404*t8098 + t8101 + t5075*t8104) + t8108 + 1.142857*t6069*(-1.*t2577*t8098 - 1.*t3516*t8104 + t8111 + t8112))*var2[4] - 0.5*(t8082 + t8108 + 1.142857*t6069*(t8111 + t8112 - 1.*t2577*t8126 - 1.*t3516*t8133) + 1.142857*t3747*(t8083 + t8101 + t4404*t8126 + t5075*t8133))*var2[5]);
  p_output1[3]=var2[1]*(-0.5*(1.142857*t7766*t8152 + 1.142857*t7812*t8157)*var2[2] - 0.5*(1.142857*t3845*t8152 + 1.142857*t4856*t8157)*var2[3] - 0.5*(t8165 + 1.142857*t3747*(t4228*t8087 + t1989*t8095 + t8166 + t8167 + t8170) + t8181 + 1.142857*t6069*(-1.*t1989*t8087 + t8150 + t8174 + t8176 - 1.*t8095*t920))*var2[4] - 0.5*(t8165 + 1.142857*t3747*(t4228*t8121 + t1989*t8124 + t8166 + t8167 + t8170) + t8181 + 1.142857*t6069*(-1.*t1989*t8121 + t8150 + t8174 + t8176 - 1.*t8124*t920))*var2[5]);
  p_output1[4]=var2[1]*(-0.5*(1.142857*t7766*t8199 + 1.142857*t7812*t8205)*var2[2] - 0.5*(1.142857*t3845*t8199 + 1.142857*t4856*t8205)*var2[3] - 0.5*(t8213 + t8214)*var2[4] - 0.5*(1.142857*t6069*t8199 + t8213 + t8214 + 1.142857*t3747*(0. - 0.9063*t834 - 1.*t8010*t834 - 0.06*Power(t834,2)))*var2[5]);
  p_output1[5]=var2[1]*(0.03428571*t7812*var2[2] + 0.03428571*t4856*var2[3] + 0.03428571*t3747*var2[4] + 0.03428571*t3747*var2[5]);
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

#include "Ce1_vec_L4_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L4_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

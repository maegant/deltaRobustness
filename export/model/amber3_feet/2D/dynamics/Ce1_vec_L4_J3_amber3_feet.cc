/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:38 GMT-08:00
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
  double t315;
  double t450;
  double t1111;
  double t1163;
  double t1175;
  double t1343;
  double t1503;
  double t1504;
  double t1664;
  double t1792;
  double t1828;
  double t2272;
  double t659;
  double t914;
  double t1015;
  double t1174;
  double t1994;
  double t1997;
  double t2338;
  double t2434;
  double t2436;
  double t2437;
  double t2897;
  double t3086;
  double t3135;
  double t3408;
  double t3583;
  double t3669;
  double t3747;
  double t4630;
  double t4638;
  double t4693;
  double t4856;
  double t3249;
  double t3754;
  double t4474;
  double t4095;
  double t4099;
  double t4160;
  double t3845;
  double t3939;
  double t3991;
  double t4066;
  double t4071;
  double t4090;
  double t4762;
  double t4840;
  double t398;
  double t2187;
  double t2663;
  double t2809;
  double t4948;
  double t4957;
  double t5056;
  double t3755;
  double t4162;
  double t4169;
  double t4841;
  double t6415;
  double t6472;
  double t6497;
  double t5392;
  double t5446;
  double t5493;
  double t5565;
  double t7813;
  double t7814;
  double t7820;
  double t7831;
  double t6162;
  double t6223;
  double t7766;
  double t7777;
  double t7938;
  double t7945;
  double t7947;
  double t7972;
  double t7979;
  double t7981;
  double t7984;
  double t7986;
  double t7990;
  double t8017;
  double t8022;
  double t8027;
  double t7901;
  double t7908;
  double t7910;
  double t8006;
  double t8007;
  double t8008;
  double t7980;
  double t7991;
  double t7993;
  double t8032;
  double t8033;
  double t8039;
  double t8040;
  double t7969;
  double t7971;
  double t7997;
  double t8061;
  double t8064;
  double t8068;
  double t8070;
  double t8037;
  double t8044;
  double t8045;
  double t8046;
  double t8065;
  double t8071;
  double t8075;
  double t8078;
  double t8079;
  double t8080;
  double t8049;
  double t8050;
  double t8105;
  double t6570;
  double t7812;
  double t7841;
  double t7846;
  double t7863;
  double t5057;
  double t5108;
  double t8110;
  double t5192;
  double t5407;
  double t7949;
  double t7951;
  double t7954;
  double t7958;
  double t7961;
  double t7996;
  double t8012;
  double t8014;
  double t8047;
  double t8048;
  double t8051;
  double t8138;
  double t8076;
  double t8081;
  double t8082;
  double t8141;
  double t8143;
  double t8144;
  double t8145;
  double t8086;
  double t8089;
  double t8090;
  double t8184;
  double t8183;
  double t8185;
  double t8186;
  double t8175;
  double t8177;
  double t8178;
  double t8181;
  double t8191;
  double t8193;
  double t8197;
  double t8198;
  double t8201;
  double t8229;
  double t8230;
  double t8231;
  double t8232;
  double t8223;
  double t8224;
  double t8225;
  double t8226;
  double t8227;
  t315 = Sin(var1[3]);
  t450 = Cos(var1[4]);
  t1111 = Cos(var1[5]);
  t1163 = Sin(var1[4]);
  t1175 = -1.*t1111;
  t1343 = 1. + t1175;
  t1503 = -1.3127*t1343;
  t1504 = -1.3127*t1111;
  t1664 = Sin(var1[5]);
  t1792 = -0.06*t1664;
  t1828 = t1503 + t1504 + t1792;
  t2272 = Cos(var1[3]);
  t659 = -1.*t450;
  t914 = 1. + t659;
  t1015 = -0.9063*t914;
  t1174 = -0.06*t1111*t1163;
  t1994 = t450*t1828;
  t1997 = t1015 + t1174 + t1994;
  t2338 = 0.06*t450*t1111;
  t2434 = 0.9063*t1163;
  t2436 = t1163*t1828;
  t2437 = t2338 + t2434 + t2436;
  t2897 = -1.*t1111*t1163;
  t3086 = -1.*t450*t1664;
  t3135 = t2897 + t3086;
  t3408 = t450*t1111;
  t3583 = -1.*t1163*t1664;
  t3669 = t3408 + t3583;
  t3747 = t2272*t3669;
  t4630 = t1111*t1163;
  t4638 = t450*t1664;
  t4693 = t4630 + t4638;
  t4856 = Sin(var1[2]);
  t3249 = t315*t3135;
  t3754 = t3249 + t3747;
  t4474 = Cos(var1[2]);
  t4095 = t2272*t3135;
  t4099 = -1.*t315*t3669;
  t4160 = t4095 + t4099;
  t3845 = -1.*t2272;
  t3939 = 1. + t3845;
  t3991 = -0.4999*t3939;
  t4066 = t2272*t1997;
  t4071 = -1.*t315*t2437;
  t4090 = t3991 + t4066 + t4071;
  t4762 = -1.*t315*t4693;
  t4840 = t4762 + t3747;
  t398 = 0.4999*t315;
  t2187 = t315*t1997;
  t2663 = t2272*t2437;
  t2809 = t398 + t2187 + t2663;
  t4948 = t2272*t4693;
  t4957 = t315*t3669;
  t5056 = t4948 + t4957;
  t3755 = -1.*t2809*t3754;
  t4162 = -1.*t4090*t4160;
  t4169 = t3755 + t4162;
  t4841 = t4474*t4840;
  t6415 = -1.*t315*t3135;
  t6472 = -1.*t2272*t3669;
  t6497 = t6415 + t6472;
  t5392 = t4474*t4160;
  t5446 = t4090*t4840;
  t5493 = t2809*t5056;
  t5565 = t5446 + t5493;
  t7813 = -0.4999*t315;
  t7814 = -1.*t315*t1997;
  t7820 = -1.*t2272*t2437;
  t7831 = t7813 + t7814 + t7820;
  t6162 = -1.*t2272*t4693;
  t6223 = t6162 + t4099;
  t7766 = 0.4999*t2272;
  t7777 = t7766 + t4066 + t4071;
  t7938 = t4474*t3754;
  t7945 = t4856*t4160;
  t7947 = t7938 + t7945;
  t7972 = 0.9063*t450;
  t7979 = t7972 + t1174 + t1994;
  t7981 = -0.06*t450*t1111;
  t7984 = -0.9063*t1163;
  t7986 = -1.*t1163*t1828;
  t7990 = t7981 + t7984 + t7986;
  t8017 = -1.*t450*t1111;
  t8022 = t1163*t1664;
  t8027 = t8017 + t8022;
  t7901 = t4856*t4840;
  t7908 = t4474*t5056;
  t7910 = t7901 + t7908;
  t8006 = t2272*t7979;
  t8007 = t315*t7990;
  t8008 = t8006 + t8007;
  t7980 = -1.*t315*t7979;
  t7991 = t2272*t7990;
  t7993 = t7980 + t7991;
  t8032 = t2272*t8027;
  t8033 = t6415 + t8032;
  t8039 = t315*t8027;
  t8040 = t4095 + t8039;
  t7969 = 1.142857*t7947*t4169;
  t7971 = t2809*t3754;
  t7997 = t4090*t4160;
  t8061 = -0.06*t450*t1664;
  t8064 = t1174 + t8061;
  t8068 = 0.06*t1163*t1664;
  t8070 = t7981 + t8068;
  t8037 = t4856*t8033;
  t8044 = t4474*t8040;
  t8045 = t8037 + t8044;
  t8046 = 1.142857*t5565*t8045;
  t8065 = -1.*t315*t8064;
  t8071 = t2272*t8070;
  t8075 = t8065 + t8071;
  t8078 = t2272*t8064;
  t8079 = t315*t8070;
  t8080 = t8078 + t8079;
  t8049 = -1.*t4090*t8033;
  t8050 = -1.*t2809*t8040;
  t8105 = -1.*t4856*t4840;
  t6570 = -1.*t4090*t6497;
  t7812 = -1.*t7777*t3754;
  t7841 = -1.*t7831*t4160;
  t7846 = -1.*t2809*t4160;
  t7863 = t6570 + t7812 + t7841 + t7846;
  t5057 = -1.*t4856*t5056;
  t5108 = t4841 + t5057;
  t8110 = -1.*t4856*t4160;
  t5192 = -1.*t4856*t3754;
  t5407 = t5192 + t5392;
  t7949 = t7831*t4840;
  t7951 = t2809*t4840;
  t7954 = t4090*t6223;
  t7958 = t7777*t5056;
  t7961 = t7949 + t7951 + t7954 + t7958;
  t7996 = t7993*t4840;
  t8012 = t8008*t5056;
  t8014 = t7971 + t7996 + t7997 + t8012;
  t8047 = -1.*t8008*t3754;
  t8048 = -1.*t7993*t4160;
  t8051 = t8047 + t8048 + t8049 + t8050;
  t8138 = 1.142857*t5407*t4169;
  t8076 = t4840*t8075;
  t8081 = t5056*t8080;
  t8082 = t7971 + t7997 + t8076 + t8081;
  t8141 = t4474*t8033;
  t8143 = -1.*t4856*t8040;
  t8144 = t8141 + t8143;
  t8145 = 1.142857*t5565*t8144;
  t8086 = -1.*t4160*t8075;
  t8089 = -1.*t3754*t8080;
  t8090 = t8086 + t8089 + t8049 + t8050;
  t8184 = 0.4999*t3669;
  t8183 = t2437*t4693;
  t8185 = t1997*t3669;
  t8186 = t8183 + t8184 + t8185;
  t8175 = -1.*t1997*t3135;
  t8177 = 0.4999*t4693;
  t8178 = -1.*t2437*t3669;
  t8181 = t8175 + t8177 + t8178;
  t8191 = -1.*t2437*t3135;
  t8193 = -1.*t1997*t8027;
  t8197 = 0.4999*t3135;
  t8198 = t1997*t3135;
  t8201 = t2437*t3669;
  t8229 = 0.9063*t1111;
  t8230 = t1111*t1828;
  t8231 = 0.06*t1111*t1664;
  t8232 = t8229 + t8230 + t8231;
  t8223 = Power(t1111,2);
  t8224 = -0.06*t8223;
  t8225 = 0.9063*t1664;
  t8226 = t1828*t1664;
  t8227 = t8224 + t8225 + t8226;
  p_output1[0]=var2[2]*(-0.5*(1.142857*t4169*t5108 + 1.142857*t5407*t5565)*var2[2] - 0.5*(1.142857*t4169*(t4841 + t4856*t6223) + 1.142857*t5565*(t5392 + t4856*t6497) + 1.142857*t7863*t7910 + 1.142857*t7947*t7961)*var2[3] - 0.5*(t7969 + 1.142857*t7947*t8014 + t8046 + 1.142857*t7910*t8051)*var2[4] - 0.5*(t7969 + t8046 + 1.142857*t7947*t8082 + 1.142857*t7910*t8090)*var2[5]);
  p_output1[1]=var2[2]*(-0.5*(1.142857*t4169*(-1.*t4474*t5056 + t8105) + 1.142857*t5565*(-1.*t3754*t4474 + t8110))*var2[2] - 0.5*(1.142857*t5108*t7863 + 1.142857*t5407*t7961 + 1.142857*t4169*(t4474*t6223 + t8105) + 1.142857*t5565*(t4474*t6497 + t8110))*var2[3] - 0.5*(1.142857*t5407*t8014 + 1.142857*t5108*t8051 + t8138 + t8145)*var2[4] - 0.5*(1.142857*t5407*t8082 + 1.142857*t5108*t8090 + t8138 + t8145)*var2[5]);
  p_output1[2]=var2[2]*(-0.5*(2.285714*t4169*t7863 + 2.285714*t5565*t7961)*var2[3] - 0.5*(2.285714*t5565*t8014 + 2.285714*t4169*t8051)*var2[4] - 0.5*(2.285714*t5565*t8082 + 2.285714*t4169*t8090)*var2[5]);
  p_output1[3]=var2[2]*(-0.5*(1.142857*t7863*t8181 + 1.142857*t7961*t8186)*var2[3] - 0.5*(1.142857*t8051*t8181 + 1.142857*t8014*t8186 + 1.142857*t4169*(-1.*t3669*t7979 - 1.*t3135*t7990 + t8184 + t8191 + t8193) + 1.142857*t5565*(t4693*t7979 + t3669*t7990 + t8197 + t8198 + t8201))*var2[4] - 0.5*(1.142857*t8090*t8181 + 1.142857*t8082*t8186 + 1.142857*t4169*(-1.*t3669*t8064 - 1.*t3135*t8070 + t8184 + t8191 + t8193) + 1.142857*t5565*(t4693*t8064 + t3669*t8070 + t8197 + t8198 + t8201))*var2[5]);
  p_output1[4]=var2[2]*(-0.5*(1.142857*t7863*t8227 + 1.142857*t7961*t8232)*var2[3] - 0.5*(1.142857*t8051*t8227 + 1.142857*t8014*t8232)*var2[4] - 0.5*(1.142857*(0. - 0.9063*t1664 - 0.06*Power(t1664,2) - 1.*t1664*t1828)*t5565 + 1.142857*t8090*t8227 + 1.142857*t4169*t8232 + 1.142857*t8082*t8232)*var2[5]);
  p_output1[5]=var2[2]*(0.03428571*t7863*var2[3] + 0.03428571*t8051*var2[4] + 0.03428571*t8090*var2[5]);
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

#include "Ce1_vec_L4_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L4_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

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
  double t303;
  double t291;
  double t290;
  double t561;
  double t371;
  double t375;
  double t398;
  double t409;
  double t566;
  double t760;
  double t1233;
  double t1234;
  double t1282;
  double t2434;
  double t1994;
  double t2126;
  double t2187;
  double t1810;
  double t1322;
  double t1401;
  double t1503;
  double t1504;
  double t1545;
  double t1671;
  double t891;
  double t894;
  double t1015;
  double t294;
  double t313;
  double t772;
  double t851;
  double t2702;
  double t1792;
  double t2891;
  double t1174;
  double t1314;
  double t1691;
  double t1758;
  double t3747;
  double t2888;
  double t2932;
  double t2949;
  double t3020;
  double t3249;
  double t3359;
  double t3408;
  double t3688;
  double t3753;
  double t3991;
  double t4454;
  double t4468;
  double t5289;
  double t5392;
  double t5407;
  double t5883;
  double t6069;
  double t6202;
  double t6223;
  double t5512;
  double t5565;
  double t4584;
  double t4630;
  double t4638;
  double t2338;
  double t7813;
  double t7863;
  double t7901;
  double t5446;
  double t5483;
  double t5493;
  double t6335;
  double t7062;
  double t7968;
  double t7969;
  double t7972;
  double t7981;
  double t7908;
  double t7916;
  double t7925;
  double t7932;
  double t7938;
  double t7945;
  double t7947;
  double t7949;
  double t7951;
  double t7954;
  double t7958;
  double t7961;
  double t2436;
  double t2635;
  double t4014;
  double t4018;
  double t8039;
  double t8046;
  double t4472;
  double t4553;
  double t5689;
  double t6305;
  double t6346;
  double t6563;
  double t7766;
  double t7910;
  double t4841;
  double t4948;
  double t8090;
  double t7971;
  double t7984;
  double t7991;
  double t7997;
  double t8006;
  double t8007;
  double t8101;
  double t8102;
  double t8103;
  double t8106;
  double t8128;
  double t8129;
  double t8139;
  double t8141;
  double t8144;
  double t8145;
  double t8147;
  double t8151;
  double t8152;
  double t8153;
  double t8123;
  double t8125;
  double t8127;
  double t8134;
  double t8136;
  double t8137;
  double t8183;
  double t8185;
  double t8186;
  double t8172;
  double t8173;
  double t8177;
  double t8167;
  double t8168;
  double t8169;
  double t8190;
  double t8192;
  double t8194;
  double t8171;
  double t8182;
  double t8206;
  double t8207;
  double t8208;
  double t8210;
  double t8211;
  double t8212;
  double t8198;
  double t8199;
  double t8236;
  double t8237;
  double t8238;
  double t8239;
  double t8241;
  double t8242;
  double t8243;
  double t8244;
  double t8245;
  t303 = Sin(var1[4]);
  t291 = Cos(var1[5]);
  t290 = Cos(var1[4]);
  t561 = Sin(var1[5]);
  t371 = -1.*t291;
  t375 = 1. + t371;
  t398 = -1.3127*t375;
  t409 = -1.3127*t291;
  t566 = -0.06*t561;
  t760 = t398 + t409 + t566;
  t1233 = t290*t291;
  t1234 = -1.*t303*t561;
  t1282 = t1233 + t1234;
  t2434 = Cos(var1[3]);
  t1994 = -1.*t291*t303;
  t2126 = -1.*t290*t561;
  t2187 = t1994 + t2126;
  t1810 = Sin(var1[3]);
  t1322 = -1.*t290;
  t1401 = 1. + t1322;
  t1503 = -0.9063*t1401;
  t1504 = -0.06*t291*t303;
  t1545 = t290*t760;
  t1671 = t1503 + t1504 + t1545;
  t891 = t291*t303;
  t894 = t290*t561;
  t1015 = t891 + t894;
  t294 = 0.06*t290*t291;
  t313 = 0.9063*t303;
  t772 = t303*t760;
  t851 = t294 + t313 + t772;
  t2702 = Cos(var1[2]);
  t1792 = Sin(var1[2]);
  t2891 = -1.*t1810*t1282;
  t1174 = t851*t1015;
  t1314 = 0.4999*t1282;
  t1691 = t1671*t1282;
  t1758 = t1174 + t1314 + t1691;
  t3747 = t2434*t1282;
  t2888 = t2434*t2187;
  t2932 = t2888 + t2891;
  t2949 = t2702*t2932;
  t3020 = -1.*t1671*t2187;
  t3249 = 0.4999*t1015;
  t3359 = -1.*t851*t1282;
  t3408 = t3020 + t3249 + t3359;
  t3688 = -1.*t1810*t1015;
  t3753 = t3688 + t3747;
  t3991 = t2702*t3753;
  t4454 = t1810*t2187;
  t4468 = t4454 + t3747;
  t5289 = t2702*t4468;
  t5392 = t1792*t2932;
  t5407 = t5289 + t5392;
  t5883 = -0.06*t290*t291;
  t6069 = -0.9063*t303;
  t6202 = -1.*t303*t760;
  t6223 = t5883 + t6069 + t6202;
  t5512 = 0.9063*t290;
  t5565 = t5512 + t1504 + t1545;
  t4584 = t2434*t1015;
  t4630 = t1810*t1282;
  t4638 = t4584 + t4630;
  t2338 = -1.*t1810*t2187;
  t7813 = -1.*t290*t291;
  t7863 = t303*t561;
  t7901 = t7813 + t7863;
  t5446 = 1.142857*t3408*t5407;
  t5483 = 0.4999*t2187;
  t5493 = t1671*t2187;
  t6335 = t851*t1282;
  t7062 = -1.*t851*t2187;
  t7968 = -0.06*t290*t561;
  t7969 = t1504 + t7968;
  t7972 = 0.06*t303*t561;
  t7981 = t5883 + t7972;
  t7908 = -1.*t1671*t7901;
  t7916 = t1792*t3753;
  t7925 = t2702*t4638;
  t7932 = t7916 + t7925;
  t7938 = t2434*t7901;
  t7945 = t2338 + t7938;
  t7947 = t1792*t7945;
  t7949 = t1810*t7901;
  t7951 = t2888 + t7949;
  t7954 = t2702*t7951;
  t7958 = t7947 + t7954;
  t7961 = 1.142857*t1758*t7958;
  t2436 = -1.*t2434*t1282;
  t2635 = t2338 + t2436;
  t4014 = -1.*t2434*t1015;
  t4018 = t4014 + t2891;
  t8039 = -1.*t1792*t2932;
  t8046 = -1.*t1792*t3753;
  t4472 = -1.*t1792*t4468;
  t4553 = t4472 + t2949;
  t5689 = t5565*t1015;
  t6305 = t6223*t1282;
  t6346 = t5483 + t5493 + t5689 + t6305 + t6335;
  t6563 = -1.*t6223*t2187;
  t7766 = -1.*t5565*t1282;
  t7910 = t6563 + t7062 + t1314 + t7766 + t7908;
  t4841 = -1.*t1792*t4638;
  t4948 = t3991 + t4841;
  t8090 = 1.142857*t3408*t4553;
  t7971 = t7969*t1015;
  t7984 = t1282*t7981;
  t7991 = t5483 + t5493 + t7971 + t6335 + t7984;
  t7997 = -1.*t7969*t1282;
  t8006 = -1.*t2187*t7981;
  t8007 = t7062 + t1314 + t7997 + t8006 + t7908;
  t8101 = t2702*t7945;
  t8102 = -1.*t1792*t7951;
  t8103 = t8101 + t8102;
  t8106 = 1.142857*t1758*t8103;
  t8128 = t2434*t1671;
  t8129 = -1.*t1810*t851;
  t8139 = -0.4999*t1810;
  t8141 = -1.*t1810*t1671;
  t8144 = -1.*t2434*t851;
  t8145 = t8139 + t8141 + t8144;
  t8147 = 0.4999*t1810;
  t8151 = t1810*t1671;
  t8152 = t2434*t851;
  t8153 = t8147 + t8151 + t8152;
  t8123 = -1.*t2434;
  t8125 = 1. + t8123;
  t8127 = -0.4999*t8125;
  t8134 = t8127 + t8128 + t8129;
  t8136 = 0.4999*t2434;
  t8137 = t8136 + t8128 + t8129;
  t8183 = t2434*t5565;
  t8185 = t1810*t6223;
  t8186 = t8183 + t8185;
  t8172 = -1.*t1810*t5565;
  t8173 = t2434*t6223;
  t8177 = t8172 + t8173;
  t8167 = -1.*t8153*t4468;
  t8168 = -1.*t8134*t2932;
  t8169 = t8167 + t8168;
  t8190 = t8134*t3753;
  t8192 = t8153*t4638;
  t8194 = t8190 + t8192;
  t8171 = t8153*t4468;
  t8182 = t8134*t2932;
  t8206 = -1.*t1810*t7969;
  t8207 = t2434*t7981;
  t8208 = t8206 + t8207;
  t8210 = t2434*t7969;
  t8211 = t1810*t7981;
  t8212 = t8210 + t8211;
  t8198 = -1.*t8134*t7945;
  t8199 = -1.*t8153*t7951;
  t8236 = 0.9063*t291;
  t8237 = t291*t760;
  t8238 = 0.06*t291*t561;
  t8239 = t8236 + t8237 + t8238;
  t8241 = Power(t291,2);
  t8242 = -0.06*t8241;
  t8243 = 0.9063*t561;
  t8244 = t760*t561;
  t8245 = t8242 + t8243 + t8244;
  p_output1[0]=var2[3]*(-0.5*(1.142857*t1758*t4553 + 1.142857*t3408*t4948)*var2[2] - 0.5*(1.142857*t1758*(t1792*t2635 + t2949) + 1.142857*t3408*(t3991 + t1792*t4018))*var2[3] - 0.5*(t5446 + 1.142857*t5407*t6346 + 1.142857*t7910*t7932 + t7961)*var2[4] - 0.5*(t5446 + t7961 + 1.142857*t5407*t7991 + 1.142857*t7932*t8007)*var2[5]);
  p_output1[1]=var2[3]*(-0.5*(1.142857*t1758*(-1.*t2702*t4468 + t8039) + 1.142857*t3408*(-1.*t2702*t4638 + t8046))*var2[2] - 0.5*(1.142857*t1758*(t2635*t2702 + t8039) + 1.142857*t3408*(t2702*t4018 + t8046))*var2[3] - 0.5*(1.142857*t4553*t6346 + 1.142857*t4948*t7910 + t8090 + t8106)*var2[4] - 0.5*(1.142857*t4553*t7991 + 1.142857*t4948*t8007 + t8090 + t8106)*var2[5]);
  p_output1[2]=var2[3]*(-0.5*(1.142857*t3408*(-1.*t2635*t8134 - 1.*t4468*t8137 - 1.*t2932*t8145 - 1.*t2932*t8153) + 1.142857*t1758*(t4018*t8134 + t4638*t8137 + t3753*t8145 + t3753*t8153))*var2[3] - 0.5*(1.142857*t7910*t8169 + 1.142857*t1758*(t8171 + t3753*t8177 + t8182 + t4638*t8186) + 1.142857*t6346*t8194 + 1.142857*t3408*(-1.*t2932*t8177 - 1.*t4468*t8186 + t8198 + t8199))*var2[4] - 0.5*(1.142857*t8007*t8169 + 1.142857*t7991*t8194 + 1.142857*t3408*(t8198 + t8199 - 1.*t2932*t8208 - 1.*t4468*t8212) + 1.142857*t1758*(t8171 + t8182 + t3753*t8208 + t4638*t8212))*var2[5]);
  p_output1[3]=var2[3]*(-0.5*(2.285714*t1758*t6346 + 2.285714*t3408*t7910)*var2[4] - 0.5*(2.285714*t1758*t7991 + 2.285714*t3408*t8007)*var2[5]);
  p_output1[4]=var2[3]*(-0.5*(1.142857*t6346*t8239 + 1.142857*t7910*t8245)*var2[4] - 0.5*(1.142857*t1758*(0. - 0.9063*t561 - 0.06*Power(t561,2) - 1.*t561*t760) + 1.142857*t3408*t8239 + 1.142857*t7991*t8239 + 1.142857*t8007*t8245)*var2[5]);
  p_output1[5]=var2[3]*(0.03428571*t7910*var2[4] + 0.03428571*t8007*var2[5]);
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

#include "Ce1_vec_L4_J4_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L4_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

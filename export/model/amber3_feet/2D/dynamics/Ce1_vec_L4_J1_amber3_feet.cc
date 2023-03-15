/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:36 GMT-08:00
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
  double t2010;
  double t1324;
  double t1769;
  double t2060;
  double t2261;
  double t1889;
  double t2078;
  double t2138;
  double t120;
  double t2272;
  double t2283;
  double t2342;
  double t2773;
  double t119;
  double t3086;
  double t3135;
  double t3358;
  double t3991;
  double t4404;
  double t4412;
  double t4443;
  double t4631;
  double t4651;
  double t3939;
  double t4092;
  double t3812;
  double t4099;
  double t4160;
  double t4228;
  double t5108;
  double t5407;
  double t5493;
  double t5630;
  double t5740;
  double t6069;
  double t4654;
  double t2164;
  double t7824;
  double t7831;
  double t7835;
  double t7820;
  double t7841;
  double t7842;
  double t7846;
  double t7863;
  double t7891;
  double t7894;
  double t7901;
  double t7905;
  double t7906;
  double t2579;
  double t2650;
  double t2663;
  double t3845;
  double t7011;
  double t7766;
  double t4692;
  double t4693;
  double t4762;
  double t5056;
  double t7783;
  double t7802;
  double t7930;
  double t7934;
  double t7981;
  double t7983;
  double t7984;
  double t7986;
  double t7987;
  double t7990;
  double t7991;
  double t7992;
  double t8003;
  double t8005;
  double t8006;
  double t8007;
  double t8008;
  double t8009;
  double t7998;
  double t7999;
  double t8000;
  double t8002;
  double t8010;
  double t8011;
  double t8013;
  double t8014;
  double t8015;
  double t8016;
  double t8020;
  double t8021;
  double t8022;
  double t8023;
  double t8024;
  double t8025;
  double t7997;
  double t8012;
  double t8017;
  double t8018;
  double t8019;
  double t8026;
  double t8027;
  double t8029;
  double t8030;
  double t8031;
  double t8040;
  double t8041;
  double t8042;
  double t8043;
  double t8037;
  double t8038;
  double t8061;
  double t8062;
  double t8064;
  double t8065;
  double t8066;
  double t8067;
  double t8075;
  double t8076;
  double t8077;
  double t8063;
  double t8068;
  double t8069;
  double t8057;
  double t8060;
  double t8071;
  double t8090;
  double t8091;
  double t8093;
  double t8094;
  double t8081;
  double t8092;
  double t8095;
  double t8096;
  double t8098;
  double t8099;
  double t8100;
  double t8084;
  double t8085;
  double t8112;
  double t8113;
  double t8114;
  double t8115;
  double t8117;
  double t8118;
  double t8119;
  double t8120;
  double t8128;
  double t8129;
  double t8133;
  double t8136;
  double t8140;
  double t8142;
  double t8145;
  double t8162;
  double t8163;
  double t8164;
  double t8165;
  double t8167;
  double t8168;
  double t8169;
  double t8170;
  double t8171;
  double t8179;
  double t8180;
  t2010 = Cos(var1[4]);
  t1324 = Cos(var1[5]);
  t1769 = Sin(var1[4]);
  t2060 = Sin(var1[5]);
  t2261 = Cos(var1[3]);
  t1889 = -1.*t1324*t1769;
  t2078 = -1.*t2010*t2060;
  t2138 = t1889 + t2078;
  t120 = Sin(var1[3]);
  t2272 = t2010*t1324;
  t2283 = -1.*t1769*t2060;
  t2342 = t2272 + t2283;
  t2773 = Cos(var1[2]);
  t119 = Sin(var1[2]);
  t3086 = t2261*t2138;
  t3135 = -1.*t120*t2342;
  t3358 = t3086 + t3135;
  t3991 = t2261*t2342;
  t4404 = t1324*t1769;
  t4412 = t2010*t2060;
  t4443 = t4404 + t4412;
  t4631 = -1.*t120*t4443;
  t4651 = t4631 + t3991;
  t3939 = t120*t2138;
  t4092 = t3939 + t3991;
  t3812 = t2773*t3358;
  t4099 = t2773*t4092;
  t4160 = t119*t3358;
  t4228 = t4099 + t4160;
  t5108 = t119*t4651;
  t5407 = t2261*t4443;
  t5493 = t120*t2342;
  t5630 = t5407 + t5493;
  t5740 = t2773*t5630;
  t6069 = t5108 + t5740;
  t4654 = t2773*t4651;
  t2164 = -1.*t120*t2138;
  t7824 = -1.*t2010*t1324;
  t7831 = t1769*t2060;
  t7835 = t7824 + t7831;
  t7820 = 2.285714*t4228*t6069;
  t7841 = t2261*t7835;
  t7842 = t2164 + t7841;
  t7846 = t119*t7842;
  t7863 = t120*t7835;
  t7891 = t3086 + t7863;
  t7894 = t2773*t7891;
  t7901 = t7846 + t7894;
  t7905 = 2.285714*t4228*t7901;
  t7906 = t7820 + t7905;
  t2579 = -1.*t2261*t2342;
  t2650 = t2164 + t2579;
  t2663 = t119*t2650;
  t3845 = t2663 + t3812;
  t7011 = -1.*t119*t4092;
  t7766 = t7011 + t3812;
  t4692 = -1.*t2261*t4443;
  t4693 = t4692 + t3135;
  t4762 = t119*t4693;
  t5056 = t4654 + t4762;
  t7783 = -1.*t119*t5630;
  t7802 = t4654 + t7783;
  t7930 = -1.*t119*t3358;
  t7934 = -1.*t119*t4651;
  t7981 = 1.142857*t7766*t6069;
  t7983 = 1.142857*t4228*t7802;
  t7984 = 1.142857*t7766*t7901;
  t7986 = t2773*t7842;
  t7987 = -1.*t119*t7891;
  t7990 = t7986 + t7987;
  t7991 = 1.142857*t4228*t7990;
  t7992 = t7981 + t7983 + t7984 + t7991;
  t8003 = -1.*t1324;
  t8005 = 1. + t8003;
  t8006 = -1.3127*t8005;
  t8007 = -1.3127*t1324;
  t8008 = -0.06*t2060;
  t8009 = t8006 + t8007 + t8008;
  t7998 = -1.*t2010;
  t7999 = 1. + t7998;
  t8000 = -0.9063*t7999;
  t8002 = -0.06*t1324*t1769;
  t8010 = t2010*t8009;
  t8011 = t8000 + t8002 + t8010;
  t8013 = 0.06*t2010*t1324;
  t8014 = 0.9063*t1769;
  t8015 = t1769*t8009;
  t8016 = t8013 + t8014 + t8015;
  t8020 = -1.*t2261;
  t8021 = 1. + t8020;
  t8022 = -0.4999*t8021;
  t8023 = t2261*t8011;
  t8024 = -1.*t120*t8016;
  t8025 = t8022 + t8023 + t8024;
  t7997 = 0.4999*t120;
  t8012 = t120*t8011;
  t8017 = t2261*t8016;
  t8018 = t7997 + t8012 + t8017;
  t8019 = -1.*t8018*t4092;
  t8026 = -1.*t8025*t3358;
  t8027 = t8019 + t8026;
  t8029 = t8025*t4651;
  t8030 = t8018*t5630;
  t8031 = t8029 + t8030;
  t8040 = -0.4999*t120;
  t8041 = -1.*t120*t8011;
  t8042 = -1.*t2261*t8016;
  t8043 = t8040 + t8041 + t8042;
  t8037 = 0.4999*t2261;
  t8038 = t8037 + t8023 + t8024;
  t8061 = 0.9063*t2010;
  t8062 = t8061 + t8002 + t8010;
  t8064 = -0.06*t2010*t1324;
  t8065 = -0.9063*t1769;
  t8066 = -1.*t1769*t8009;
  t8067 = t8064 + t8065 + t8066;
  t8075 = t2261*t8062;
  t8076 = t120*t8067;
  t8077 = t8075 + t8076;
  t8063 = -1.*t120*t8062;
  t8068 = t2261*t8067;
  t8069 = t8063 + t8068;
  t8057 = 1.142857*t4228*t8027;
  t8060 = t8018*t4092;
  t8071 = t8025*t3358;
  t8090 = -0.06*t2010*t2060;
  t8091 = t8002 + t8090;
  t8093 = 0.06*t1769*t2060;
  t8094 = t8064 + t8093;
  t8081 = 1.142857*t8031*t7901;
  t8092 = -1.*t120*t8091;
  t8095 = t2261*t8094;
  t8096 = t8092 + t8095;
  t8098 = t2261*t8091;
  t8099 = t120*t8094;
  t8100 = t8098 + t8099;
  t8084 = -1.*t8025*t7842;
  t8085 = -1.*t8018*t7891;
  t8112 = t8016*t4443;
  t8113 = 0.4999*t2342;
  t8114 = t8011*t2342;
  t8115 = t8112 + t8113 + t8114;
  t8117 = -1.*t8011*t2138;
  t8118 = 0.4999*t4443;
  t8119 = -1.*t8016*t2342;
  t8120 = t8117 + t8118 + t8119;
  t8128 = 1.142857*t8120*t4228;
  t8129 = 0.4999*t2138;
  t8133 = t8011*t2138;
  t8136 = t8016*t2342;
  t8140 = -1.*t8016*t2138;
  t8142 = -1.*t8011*t7835;
  t8145 = 1.142857*t8115*t7901;
  t8162 = 0.9063*t1324;
  t8163 = t1324*t8009;
  t8164 = 0.06*t1324*t2060;
  t8165 = t8162 + t8163 + t8164;
  t8167 = Power(t1324,2);
  t8168 = -0.06*t8167;
  t8169 = 0.9063*t2060;
  t8170 = t8009*t2060;
  t8171 = t8168 + t8169 + t8170;
  t8179 = 1.142857*t8171*t4228;
  t8180 = 1.142857*t8165*t7901;
  p_output1[0]=var2[0]*(-0.5*(2.285714*t4228*t7766 + 2.285714*t6069*t7802)*var2[2] - 0.5*(2.285714*t3845*t4228 + 2.285714*t5056*t6069)*var2[3] - 0.5*t7906*var2[4] - 0.5*t7906*var2[5]);
  p_output1[1]=var2[0]*(-0.5*(1.142857*Power(t7766,2) + 1.142857*Power(t7802,2) + 1.142857*t4228*(-1.*t2773*t4092 + t7930) + 1.142857*t6069*(-1.*t2773*t5630 + t7934))*var2[2] - 0.5*(1.142857*t3845*t7766 + 1.142857*t5056*t7802 + 1.142857*t4228*(t2650*t2773 + t7930) + 1.142857*t6069*(t2773*t4693 + t7934))*var2[3] - 0.5*t7992*var2[4] - 0.5*t7992*var2[5]);
  p_output1[2]=var2[0]*(-0.5*(1.142857*t7802*t8027 + 1.142857*t7766*t8031)*var2[2] - 0.5*(1.142857*t5056*t8027 + 1.142857*t3845*t8031 + 1.142857*t6069*(-1.*t3358*t8018 - 1.*t2650*t8025 - 1.*t4092*t8038 - 1.*t3358*t8043) + 1.142857*t4228*(t4651*t8018 + t4693*t8025 + t5630*t8038 + t4651*t8043))*var2[3] - 0.5*(t8057 + 1.142857*t4228*(t8060 + t4651*t8069 + t8071 + t5630*t8077) + t8081 + 1.142857*t6069*(-1.*t3358*t8069 - 1.*t4092*t8077 + t8084 + t8085))*var2[4] - 0.5*(t8057 + t8081 + 1.142857*t6069*(t8084 + t8085 - 1.*t3358*t8096 - 1.*t4092*t8100) + 1.142857*t4228*(t8060 + t8071 + t4651*t8096 + t5630*t8100))*var2[5]);
  p_output1[3]=var2[0]*(-0.5*(1.142857*t7766*t8115 + 1.142857*t7802*t8120)*var2[2] - 0.5*(1.142857*t3845*t8115 + 1.142857*t5056*t8120)*var2[3] - 0.5*(t8128 + 1.142857*t4228*(t4443*t8062 + t2342*t8067 + t8129 + t8133 + t8136) + 1.142857*t6069*(-1.*t2342*t8062 - 1.*t2138*t8067 + t8113 + t8140 + t8142) + t8145)*var2[4] - 0.5*(t8128 + 1.142857*t4228*(t4443*t8091 + t2342*t8094 + t8129 + t8133 + t8136) + 1.142857*t6069*(-1.*t2342*t8091 - 1.*t2138*t8094 + t8113 + t8140 + t8142) + t8145)*var2[5]);
  p_output1[4]=var2[0]*(-0.5*(1.142857*t7766*t8165 + 1.142857*t7802*t8171)*var2[2] - 0.5*(1.142857*t3845*t8165 + 1.142857*t5056*t8171)*var2[3] - 0.5*(t8179 + t8180)*var2[4] - 0.5*(1.142857*t4228*(0. - 0.9063*t2060 - 0.06*Power(t2060,2) - 1.*t2060*t8009) + 1.142857*t6069*t8165 + t8179 + t8180)*var2[5]);
  p_output1[5]=var2[0]*(0.03428571*t7802*var2[2] + 0.03428571*t5056*var2[3] + 0.03428571*t4228*var2[4] + 0.03428571*t4228*var2[5]);
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

#include "Ce1_vec_L4_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L4_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

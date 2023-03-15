/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:22 GMT-08:00
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
  double t67;
  double t754;
  double t1084;
  double t1059;
  double t144;
  double t193;
  double t281;
  double t286;
  double t547;
  double t1182;
  double t1027;
  double t1192;
  double t1220;
  double t1288;
  double t1544;
  double t1547;
  double t1580;
  double t1586;
  double t1065;
  double t1096;
  double t1120;
  double t1809;
  double t124;
  double t603;
  double t961;
  double t964;
  double t1007;
  double t1146;
  double t1588;
  double t1630;
  double t1704;
  double t1983;
  double t2003;
  double t2013;
  double t2018;
  double t2027;
  double t2042;
  double t2070;
  double t2083;
  double t2118;
  double t2163;
  double t2205;
  double t2229;
  double t2230;
  double t2256;
  double t2538;
  double t2553;
  double t2576;
  double t2286;
  double t2300;
  double t2309;
  double t2322;
  double t2588;
  double t2644;
  double t2652;
  double t2250;
  double t2260;
  double t2410;
  double t2817;
  double t2701;
  double t2739;
  double t2775;
  double t2742;
  double t2905;
  double t3187;
  double t3220;
  double t3222;
  double t3308;
  double t3063;
  double t3077;
  double t3095;
  double t3332;
  double t3413;
  double t3420;
  double t3469;
  double t1295;
  double t1456;
  double t3553;
  double t3630;
  double t1747;
  double t1895;
  double t3730;
  double t3755;
  double t3770;
  double t3865;
  double t3993;
  double t3999;
  double t4011;
  double t3867;
  double t4154;
  double t2979;
  double t3027;
  double t3034;
  double t3041;
  double t4139;
  double t4214;
  double t1472;
  double t1909;
  double t1934;
  double t1949;
  double t2282;
  double t2417;
  double t2457;
  double t4594;
  double t4605;
  double t4405;
  double t4409;
  double t4412;
  double t4418;
  double t4640;
  double t4650;
  double t4657;
  double t4659;
  double t4434;
  double t4446;
  double t4455;
  double t4488;
  double t4615;
  double t4637;
  double t4569;
  double t4575;
  double t4588;
  double t4609;
  double t4614;
  double t4675;
  double t4818;
  double t4820;
  double t4715;
  double t4858;
  double t4887;
  double t4898;
  double t4904;
  double t4753;
  double t4783;
  double t4792;
  double t4799;
  double t4800;
  double t4810;
  double t4815;
  double t4855;
  double t4889;
  double t4894;
  double t4905;
  double t4906;
  double t4910;
  double t4914;
  double t4919;
  double t4926;
  double t4942;
  double t4943;
  double t4944;
  double t4949;
  double t4953;
  double t4963;
  double t4984;
  double t4988;
  double t4989;
  double t4999;
  double t5006;
  double t5011;
  double t5147;
  double t5150;
  double t5158;
  double t5060;
  double t5061;
  double t5065;
  double t5076;
  double t5080;
  double t5081;
  double t5095;
  double t5115;
  double t5123;
  double t5249;
  double t5251;
  double t5252;
  double t5253;
  double t5256;
  double t5281;
  double t5285;
  double t5311;
  t67 = Cos(var1[7]);
  t754 = Sin(var1[7]);
  t1084 = Cos(var1[6]);
  t1059 = Sin(var1[6]);
  t144 = -1.*t67;
  t193 = 1. + t144;
  t281 = -0.9063*t193;
  t286 = -1.0567*t67;
  t547 = t281 + t286;
  t1182 = Cos(var1[2]);
  t1027 = Sin(var1[2]);
  t1192 = t1084*t67;
  t1220 = -1.*t1059*t754;
  t1288 = t1192 + t1220;
  t1544 = 0.4999*t754;
  t1547 = t547*t754;
  t1580 = 0.15039999999999998*t67*t754;
  t1586 = t1544 + t1547 + t1580;
  t1065 = -1.*t67*t1059;
  t1096 = -1.*t1084*t754;
  t1120 = t1065 + t1096;
  t1809 = -1.*t1027*t1288;
  t124 = 0.4999*t67;
  t603 = t547*t67;
  t961 = Power(t754,2);
  t964 = -0.15039999999999998*t961;
  t1007 = t124 + t603 + t964;
  t1146 = -1.*t1027*t1120;
  t1588 = t67*t1059;
  t1630 = t1084*t754;
  t1704 = t1588 + t1630;
  t1983 = t1182*t1120;
  t2003 = t1983 + t1809;
  t2013 = 3.5899*t1586*t2003;
  t2018 = -1.*t1084*t67;
  t2027 = t1059*t754;
  t2042 = t2018 + t2027;
  t2070 = t1182*t2042;
  t2083 = t1146 + t2070;
  t2118 = 3.5899*t1007*t2083;
  t2163 = t2013 + t2118;
  t2205 = Power(t67,2);
  t2229 = 0.15039999999999998*t2205;
  t2230 = t124 + t603 + t2229;
  t2256 = t1182*t1288;
  t2538 = t1027*t1704;
  t2553 = t2538 + t2070;
  t2576 = 3.5899*t1007*t2553;
  t2286 = -0.4999*t754;
  t2300 = -1.*t547*t754;
  t2309 = -0.15039999999999998*t67*t754;
  t2322 = t2286 + t2300 + t2309;
  t2588 = t1027*t2042;
  t2644 = t1983 + t2588;
  t2652 = 3.5899*t1586*t2644;
  t2250 = -1.*t1027*t1704;
  t2260 = t2250 + t2256;
  t2410 = 3.5899*t2322*t2003;
  t2817 = 0. + t124 + t603 + t2229;
  t2701 = t1027*t1120;
  t2739 = t2701 + t2256;
  t2775 = 3.5899*t2322*t2644;
  t2742 = 3.5899*t2230*t2739;
  t2905 = 3.5899*t2817*t2739;
  t3187 = 3.5899*t1586*t2260;
  t3220 = 3.5899*t1007*t2003;
  t3222 = t3187 + t3220;
  t3308 = 3.5899*t1586*t2739;
  t3063 = t1182*t1704;
  t3077 = t1027*t1288;
  t3095 = t3063 + t3077;
  t3332 = 3.5899*t1007*t2644;
  t3413 = 3.5899*t2322*t2739;
  t3420 = 3.5899*t2230*t3095;
  t3469 = t3413 + t3308 + t3420 + t3332;
  t1295 = -1.*t1182*t1288;
  t1456 = t1146 + t1295;
  t3553 = -1.*t1182*t1120;
  t3630 = 3.5899*t1586*t1456;
  t1747 = -1.*t1182*t1704;
  t1895 = t1747 + t1809;
  t3730 = -1.*t1027*t2042;
  t3755 = t3553 + t3730;
  t3770 = 3.5899*t1007*t3755;
  t3865 = t3630 + t3770;
  t3993 = 3.5899*t1586*t2083;
  t3999 = t3063 + t3730;
  t4011 = 3.5899*t1007*t3999;
  t3867 = 3.5899*t2322*t1456;
  t4154 = 3.5899*t2322*t2083;
  t2979 = -0.4999*t67;
  t3027 = -1.*t547*t67;
  t3034 = -0.15039999999999998*t2205;
  t3041 = 0. + t2979 + t3027 + t3034;
  t4139 = 3.5899*t2230*t2003;
  t4214 = 3.5899*t2817*t2003;
  t1472 = 3.5899*t1007*t1456;
  t1909 = 3.5899*t1586*t1895;
  t1934 = t1472 + t1909;
  t1949 = -0.5*var2[2]*t1934;
  t2282 = 3.5899*t2230*t2260;
  t2417 = t2282 + t2410 + t2013 + t2118;
  t2457 = -0.5*var2[7]*t2417;
  t4594 = t1084*t547;
  t4605 = 0.15039999999999998*t1059*t754;
  t4405 = -0.4999*t1059;
  t4409 = -1.*t547*t1059;
  t4412 = 0.15039999999999998*t1084*t754;
  t4418 = t4405 + t4409 + t4412;
  t4640 = 0.4999*t1059;
  t4650 = t547*t1059;
  t4657 = -0.15039999999999998*t1084*t754;
  t4659 = t4640 + t4650 + t4657;
  t4434 = -0.4999*t1084;
  t4446 = -1.*t1084*t547;
  t4455 = -0.15039999999999998*t1059*t754;
  t4488 = t4434 + t4446 + t4455;
  t4615 = 0.4999*t1084;
  t4637 = t4615 + t4594 + t4605;
  t4569 = -1.*t1084;
  t4575 = 1. + t4569;
  t4588 = -0.4999*t4575;
  t4609 = t4588 + t4594 + t4605;
  t4614 = -1.*t1704*t4609;
  t4675 = -1.*t4659*t2042;
  t4818 = 0.15039999999999998*t67*t1059;
  t4820 = t4818 + t4412;
  t4715 = t1120*t4659;
  t4858 = 0.15039999999999998*t1084*t67;
  t4887 = t4858 + t4455;
  t4898 = -0.15039999999999998*t1084*t67;
  t4904 = t4898 + t4605;
  t4753 = t4609*t2042;
  t4783 = t4659*t1288;
  t4792 = t4418*t1288;
  t4799 = t1120*t4609;
  t4800 = t1704*t4637;
  t4810 = t4783 + t4792 + t4799 + t4800;
  t4815 = 3.5899*t2322*t4810;
  t4855 = -1.*t4820*t1288;
  t4889 = -1.*t1120*t4887;
  t4894 = -1.*t1120*t4637;
  t4905 = -1.*t1120*t4904;
  t4906 = -1.*t4418*t2042;
  t4910 = -1.*t4820*t2042;
  t4914 = t4855 + t4889 + t4614 + t4894 + t4905 + t4675 + t4906 + t4910;
  t4919 = 3.5899*t1586*t4914;
  t4926 = -1.*t1120*t4659;
  t4942 = -1.*t1120*t4418;
  t4943 = -1.*t1288*t4637;
  t4944 = -1.*t4609*t2042;
  t4949 = t4926 + t4942 + t4943 + t4944;
  t4953 = t1120*t4418;
  t4963 = t1120*t4820;
  t4984 = t4820*t1704;
  t4988 = t1288*t4887;
  t4989 = t1288*t4637;
  t4999 = t1288*t4904;
  t5006 = t4715 + t4953 + t4963 + t4984 + t4988 + t4989 + t4999 + t4753;
  t5011 = 3.5899*t1007*t5006;
  t5147 = -1.*t1120*t4820;
  t5150 = -1.*t1288*t4904;
  t5158 = t4926 + t5147 + t5150 + t4944;
  t5060 = -1.*t4659*t1288;
  t5061 = -1.*t1120*t4609;
  t5065 = t5060 + t5061;
  t5076 = t4659*t1704;
  t5080 = t1288*t4609;
  t5081 = t5076 + t5080;
  t5095 = t4820*t1288;
  t5115 = t1704*t4904;
  t5123 = t4783 + t5095 + t4799 + t5115;
  t5249 = 3.5899*t2230*t5065;
  t5251 = 3.5899*t2322*t5081;
  t5252 = 3.5899*t1007*t5123;
  t5253 = 3.5899*t1586*t5158;
  t5256 = t5249 + t5251 + t5252 + t5253;
  t5281 = 7.1798*t2230*t1586;
  t5285 = 7.1798*t2322*t1007;
  t5311 = t5281 + t5285;
  p_output1[0]=var2[6]*(t1949 + t2457 - 0.5*t2163*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t2163*var2[2] - 0.5*(t2576 + t2652)*var2[6] - 0.5*(t2576 + t2652 + t2742 + t2775)*var2[7]);
  p_output1[2]=var2[6]*(-0.5*(t2013 + t2118 + t2410 + 3.5899*t2260*t2817)*var2[2] - 0.5*(t2576 + t2652 + t2775 + t2905)*var2[6] - 0.5*(t2576 + 7.1798*t2322*t2644 + t2652 + t2742 + t2905 + 3.5899*t2739*t3041 + 3.5899*t2322*t3095)*var2[7]);
  p_output1[3]=-0.5*t3222*var2[6];
  p_output1[4]=-0.5*t3222*var2[2] - 1.*(t3308 + t3332)*var2[6] - 0.5*t3469*var2[7];
  p_output1[5]=-0.5*t3469*var2[6];
  p_output1[6]=var2[6]*(-0.5*(3.5899*t1586*(t1295 + t2538) + 3.5899*t1007*(t3077 + t3553))*var2[2] - 0.5*t3865*var2[6] - 0.5*(3.5899*t1895*t2230 + t3630 + t3770 + t3867)*var2[7]);
  p_output1[7]=var2[6]*(-0.5*t3865*var2[2] - 0.5*(t3993 + t4011)*var2[6] - 0.5*(t3993 + t4011 + t4139 + t4154)*var2[7]);
  p_output1[8]=var2[6]*(-0.5*(3.5899*t1895*t2817 + t3630 + t3770 + t3867)*var2[2] - 0.5*(t3993 + t4011 + t4154 + t4214)*var2[6] - 0.5*(7.1798*t2083*t2322 + 3.5899*t2260*t2322 + 3.5899*t2003*t3041 + t3993 + t4011 + t4139 + t4214)*var2[7]);
  p_output1[9]=-0.5*t1934*var2[6];
  p_output1[10]=t1949 + t2457 - 1.*t2163*var2[6];
  p_output1[11]=-0.5*t2417*var2[6];
  p_output1[12]=var2[6]*(-0.5*(3.5899*t1586*(-1.*t1288*t4418 - 2.*t2042*t4418 - 1.*t1120*t4488 + t4614 - 2.*t1120*t4637 + t4675) + 3.5899*t1007*(2.*t1120*t4418 + t1704*t4418 + t1288*t4488 + 2.*t1288*t4637 + t4715 + t4753))*var2[6] - 0.5*(t4815 + t4919 + 3.5899*t2230*t4949 + t5011)*var2[7]);
  p_output1[13]=var2[6]*(-0.5*(t4815 + t4919 + 3.5899*t2817*t4949 + t5011)*var2[6] - 0.5*(3.5899*t1586*(t4614 + t4675 - 2.*t2042*t4820 + t4855 + t4889 - 2.*t1120*t4904) + 3.5899*t1007*(t4715 + t4753 + 2.*t1120*t4820 + 2.*t1288*t4904 + t4984 + t4988) + 3.5899*t2322*t5065 + 3.5899*t3041*t5081 + 7.1798*t2322*t5123 + 3.5899*t2230*t5158 + 3.5899*t2817*t5158)*var2[7]);
  p_output1[14]=-1.*(3.5899*t1007*t4810 + 3.5899*t1586*t4949)*var2[6] - 0.5*t5256*var2[7];
  p_output1[15]=-0.5*t5256*var2[6];
  p_output1[16]=-0.5*(7.1798*t1586*t2322 + 7.1798*Power(t2322,2) + 7.1798*t2230*t2817 + 7.1798*t1007*t3041)*var2[6]*var2[7];
  p_output1[17]=-0.5*t5311*var2[7];
  p_output1[18]=-0.5*t5311*var2[6];
  p_output1[19]=0.26996047999999995*t3041*var2[6]*var2[7];
  p_output1[20]=0.26996047999999995*t2322*var2[7];
  p_output1[21]=0.26996047999999995*t2322*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L6_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L6_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

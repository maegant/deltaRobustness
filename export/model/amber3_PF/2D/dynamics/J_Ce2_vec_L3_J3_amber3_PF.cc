/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:16 GMT-08:00
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
  double t797;
  double t378;
  double t461;
  double t883;
  double t353;
  double t490;
  double t1217;
  double t1405;
  double t1459;
  double t1675;
  double t1731;
  double t1799;
  double t1819;
  double t1831;
  double t1833;
  double t1870;
  double t1888;
  double t1912;
  double t1917;
  double t1920;
  double t2656;
  double t2375;
  double t2389;
  double t2483;
  double t2588;
  double t2670;
  double t3064;
  double t3351;
  double t3306;
  double t3315;
  double t3063;
  double t3122;
  double t2976;
  double t3027;
  double t3523;
  double t3532;
  double t4127;
  double t4206;
  double t4209;
  double t4252;
  double t4273;
  double t4276;
  double t4301;
  double t4350;
  double t4356;
  double t4408;
  double t2256;
  double t2314;
  double t2322;
  double t2349;
  double t1866;
  double t2057;
  double t2091;
  double t2202;
  double t2211;
  double t4640;
  double t4667;
  double t4692;
  double t4726;
  double t4728;
  double t3316;
  double t4960;
  double t5049;
  double t4266;
  double t4428;
  double t4444;
  double t4498;
  double t4501;
  double t4517;
  double t5231;
  double t5234;
  double t5244;
  double t5245;
  double t5304;
  double t5318;
  double t4739;
  double t4772;
  double t4778;
  double t4817;
  double t4834;
  double t4850;
  double t4867;
  double t4898;
  double t4912;
  double t4947;
  double t5085;
  double t5123;
  double t5128;
  double t5143;
  double t5147;
  double t5148;
  double t5189;
  double t5190;
  double t5198;
  double t5204;
  double t5216;
  double t5278;
  double t5361;
  double t5370;
  double t5852;
  double t5854;
  double t5898;
  double t5904;
  double t5442;
  double t3739;
  double t3758;
  double t6005;
  double t6010;
  double t6017;
  double t6027;
  double t6030;
  double t6035;
  double t6047;
  double t6048;
  double t6134;
  double t6148;
  double t6163;
  double t3379;
  double t3496;
  double t3510;
  double t3037;
  double t3236;
  double t3439;
  double t3535;
  double t3576;
  double t5258;
  double t5319;
  double t5350;
  double t5394;
  double t5412;
  double t5504;
  double t6734;
  double t5792;
  double t5799;
  double t5808;
  double t5824;
  double t6753;
  double t5643;
  double t5651;
  double t5746;
  double t6758;
  double t6791;
  double t6803;
  double t6806;
  double t6821;
  double t6844;
  double t6847;
  double t6856;
  double t6884;
  double t5883;
  double t5917;
  double t5926;
  double t6902;
  double t5941;
  double t5948;
  double t5950;
  double t6077;
  double t1860;
  double t2223;
  double t2806;
  double t2939;
  double t2943;
  double t7073;
  double t7077;
  double t7096;
  double t4465;
  double t4521;
  double t4529;
  double t6631;
  double t6694;
  double t6698;
  double t5353;
  double t5522;
  double t5542;
  double t6900;
  double t6904;
  double t6921;
  double t5940;
  double t5955;
  double t5986;
  double t7039;
  double t7041;
  double t7054;
  double t6259;
  double t6370;
  double t6379;
  double t4604;
  double t6463;
  double t6472;
  double t6473;
  double t4781;
  double t6763;
  double t5789;
  double t5834;
  double t5845;
  double t6987;
  double t6989;
  double t7002;
  double t6428;
  double t7161;
  double t7483;
  double t7486;
  double t7492;
  double t7494;
  double t6429;
  double t7164;
  t797 = Cos(var1[3]);
  t378 = Cos(var1[4]);
  t461 = Sin(var1[3]);
  t883 = Sin(var1[4]);
  t353 = Sin(var1[2]);
  t490 = -1.*t378*t461;
  t1217 = -1.*t797*t883;
  t1405 = t490 + t1217;
  t1459 = -1.*t353*t1405;
  t1675 = Cos(var1[2]);
  t1731 = t797*t378;
  t1799 = -1.*t461*t883;
  t1819 = t1731 + t1799;
  t1831 = -1.*t1675*t1819;
  t1833 = t1459 + t1831;
  t1870 = -1.*t378;
  t1888 = 1. + t1870;
  t1912 = -0.9063*t1888;
  t1917 = -1.078185*t378;
  t1920 = t1912 + t1917;
  t2656 = -1.*t353*t1819;
  t2375 = t378*t461;
  t2389 = t797*t883;
  t2483 = t2375 + t2389;
  t2588 = -1.*t1675*t2483;
  t2670 = t2588 + t2656;
  t3064 = t1675*t1819;
  t3351 = t353*t1819;
  t3306 = t353*t1405;
  t3315 = t3306 + t3064;
  t3063 = -1.*t353*t2483;
  t3122 = t3063 + t3064;
  t2976 = t1675*t1405;
  t3027 = t2976 + t2656;
  t3523 = t1675*t2483;
  t3532 = t3523 + t3351;
  t4127 = 0.4999*t461;
  t4206 = t1920*t461;
  t4209 = -0.17188499999999995*t797*t883;
  t4252 = t4127 + t4206 + t4209;
  t4273 = -1.*t797;
  t4276 = 1. + t4273;
  t4301 = -0.4999*t4276;
  t4350 = t797*t1920;
  t4356 = 0.17188499999999995*t461*t883;
  t4408 = t4301 + t4350 + t4356;
  t2256 = 0.4999*t883;
  t2314 = t1920*t883;
  t2322 = 0.17188499999999995*t378*t883;
  t2349 = t2256 + t2314 + t2322;
  t1866 = 0.4999*t378;
  t2057 = t1920*t378;
  t2091 = Power(t883,2);
  t2202 = -0.17188499999999995*t2091;
  t2211 = t1866 + t2057 + t2202;
  t4640 = -1.*t797*t378;
  t4667 = t461*t883;
  t4692 = t4640 + t4667;
  t4726 = t1675*t4692;
  t4728 = t1459 + t4726;
  t3316 = -1.*t1675*t1405;
  t4960 = t353*t4692;
  t5049 = t2976 + t4960;
  t4266 = -1.*t4252*t1819;
  t4428 = -1.*t1405*t4408;
  t4444 = t4266 + t4428;
  t4498 = t4252*t2483;
  t4501 = t1819*t4408;
  t4517 = t4498 + t4501;
  t5231 = -0.4999*t461;
  t5234 = -1.*t1920*t461;
  t5244 = 0.17188499999999995*t797*t883;
  t5245 = t5231 + t5234 + t5244;
  t5304 = 0.4999*t797;
  t5318 = t5304 + t4350 + t4356;
  t4739 = 0.07323676079999998*var2[4]*t4728;
  t4772 = 0.85216*t2349*t3027;
  t4778 = 0.85216*t2211*t4728;
  t4817 = 1.70432*t3122*t3027;
  t4834 = 0.85216*t3315*t2670;
  t4850 = 0.85216*t1833*t3532;
  t4867 = 1.70432*t3027*t4728;
  t4898 = -1.*t353*t4692;
  t4912 = t3316 + t4898;
  t4947 = 0.85216*t3315*t4912;
  t5085 = 0.85216*t1833*t5049;
  t5123 = t4817 + t4834 + t4850 + t4867 + t4947 + t5085;
  t5128 = -0.5*var2[1]*t5123;
  t5143 = 1.70432*t3315*t3122;
  t5147 = 1.70432*t3027*t3532;
  t5148 = 1.70432*t3315*t4728;
  t5189 = 1.70432*t3027*t5049;
  t5190 = t5143 + t5147 + t5148 + t5189;
  t5198 = -0.5*var2[0]*t5190;
  t5204 = 0.85216*t3027*t4444;
  t5216 = t4252*t1819;
  t5278 = t1405*t4408;
  t5361 = 0.85216*t4517*t4728;
  t5370 = -1.*t1405*t4252;
  t5852 = 0.17188499999999995*t378*t461;
  t5854 = t5852 + t5244;
  t5898 = -0.17188499999999995*t797*t378;
  t5904 = t5898 + t4356;
  t5442 = -1.*t4408*t4692;
  t3739 = Power(t3122,2);
  t3758 = Power(t3027,2);
  t6005 = 1.70432*t3315*t3027;
  t6010 = 1.70432*t3122*t3532;
  t6017 = t6005 + t6010;
  t6027 = 0.85216*t1833*t3315;
  t6030 = 0.85216*t3739;
  t6035 = 0.85216*t3758;
  t6047 = 0.85216*t2670*t3532;
  t6048 = t6027 + t6030 + t6035 + t6047;
  t6134 = 0.85216*t2349*t3122;
  t6148 = 0.85216*t2211*t3027;
  t6163 = t6134 + t6148;
  t3379 = t3316 + t3351;
  t3496 = t353*t2483;
  t3510 = t3496 + t1831;
  t3037 = 2.55648*t1833*t3027;
  t3236 = 2.55648*t3122*t2670;
  t3439 = 0.85216*t3315*t3379;
  t3535 = 0.85216*t3510*t3532;
  t3576 = t3037 + t3236 + t3439 + t3535;
  t5258 = t5245*t1819;
  t5319 = t2483*t5318;
  t5350 = t5216 + t5258 + t5278 + t5319;
  t5394 = -1.*t1405*t5245;
  t5412 = -1.*t1819*t5318;
  t5504 = t5370 + t5394 + t5412 + t5442;
  t6734 = 0.07323676079999998*var2[4]*t4912;
  t5792 = -0.4999*t883;
  t5799 = -1.*t1920*t883;
  t5808 = -0.17188499999999995*t378*t883;
  t5824 = t5792 + t5799 + t5808;
  t6753 = 0.85216*t2349*t1833;
  t5643 = Power(t378,2);
  t5651 = 0.17188499999999995*t5643;
  t5746 = 0. + t1866 + t2057 + t5651;
  t6758 = 0.85216*t2211*t4912;
  t6791 = 1.70432*t1833*t3122;
  t6803 = 1.70432*t3027*t2670;
  t6806 = 1.70432*t1833*t4728;
  t6821 = 1.70432*t3027*t4912;
  t6844 = t6791 + t6803 + t6806 + t6821;
  t6847 = -0.5*var2[1]*t6844;
  t6856 = -0.5*var2[0]*t5123;
  t6884 = 0.85216*t1833*t4444;
  t5883 = t5854*t1819;
  t5917 = t2483*t5904;
  t5926 = t5216 + t5883 + t5278 + t5917;
  t6902 = 0.85216*t4517*t4912;
  t5941 = -1.*t1405*t5854;
  t5948 = -1.*t1819*t5904;
  t5950 = t5370 + t5941 + t5948 + t5442;
  t6077 = -0.5*var2[2]*t6048;
  t1860 = 0.07323676079999998*var2[4]*t1833;
  t2223 = 0.85216*t2211*t1833;
  t2806 = 0.85216*t2349*t2670;
  t2939 = t2223 + t2806;
  t2943 = -0.5*var2[3]*t2939;
  t7073 = 1.70432*t1833*t3027;
  t7077 = 1.70432*t3122*t2670;
  t7096 = t7073 + t7077;
  t4465 = 0.85216*t2670*t4444;
  t4521 = 0.85216*t1833*t4517;
  t4529 = t4465 + t4521;
  t6631 = 0.85216*t3510*t4444;
  t6694 = 0.85216*t3379*t4517;
  t6698 = t6631 + t6694;
  t5353 = 0.85216*t3027*t5350;
  t5522 = 0.85216*t3122*t5504;
  t5542 = t5204 + t5353 + t5361 + t5522;
  t6900 = 0.85216*t1833*t5350;
  t6904 = 0.85216*t2670*t5504;
  t6921 = t6884 + t6900 + t6902 + t6904;
  t5940 = 0.85216*t3027*t5926;
  t5955 = 0.85216*t3122*t5950;
  t5986 = t5204 + t5940 + t5361 + t5955;
  t7039 = 0.85216*t1833*t5926;
  t7041 = 0.85216*t2670*t5950;
  t7054 = t6884 + t7039 + t6902 + t7041;
  t6259 = 0.85216*t3122*t4444;
  t6370 = 0.85216*t3027*t4517;
  t6379 = t6259 + t6370;
  t4604 = -0.5*var2[2]*t4529;
  t6463 = 0.85216*t2349*t3510;
  t6472 = 0.85216*t2211*t3379;
  t6473 = t6463 + t6472;
  t4781 = t4772 + t4778;
  t6763 = t6753 + t6758;
  t5789 = 0.85216*t5746*t3122;
  t5834 = 0.85216*t5824*t3027;
  t5845 = t5789 + t5834 + t4772 + t4778;
  t6987 = 0.85216*t5824*t1833;
  t6989 = 0.85216*t5746*t2670;
  t7002 = t6987 + t6753 + t6989 + t6758;
  t6428 = -0.5*var2[2]*t6163;
  t7161 = -0.5*var2[2]*t2939;
  t7483 = 0.07323676079999998*var2[0]*t4728;
  t7486 = 0.07323676079999998*var2[1]*t4912;
  t7492 = t7483 + t7486;
  t7494 = var2[2]*t7492;
  t6429 = 0.07323676079999998*var2[2]*t3027;
  t7164 = 0.07323676079999998*var2[2]*t1833;
  p_output1[0]=(t1860 + t2943 + t4604 - 0.5*(1.70432*t1833*t3315 + 1.70432*t2670*t3532 + 1.70432*t3739 + 1.70432*t3758)*var2[0] - 0.5*t3576*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t4739 + t5128 + t5198 - 0.5*t5542*var2[2] - 0.5*t4781*var2[3]);
  p_output1[2]=var2[2]*(t4739 + t5128 + t5198 - 0.5*t5986*var2[2] - 0.5*t5845*var2[3]);
  p_output1[3]=-0.5*t6017*var2[2];
  p_output1[4]=t6077;
  p_output1[5]=-0.5*t6017*var2[0] - 0.5*t6048*var2[1] - 1.*t6379*var2[2] - 0.5*t6163*var2[3] + 0.07323676079999998*t3027*var2[4];
  p_output1[6]=t6428;
  p_output1[7]=t6429;
  p_output1[8]=var2[2]*(-0.5*t3576*var2[0] - 0.5*(1.70432*Power(t1833,2) + 1.70432*Power(t2670,2) + 1.70432*t3027*t3379 + 1.70432*t3122*t3510)*var2[1] - 0.5*t6698*var2[2] - 0.5*t6473*var2[3] + 0.07323676079999998*t3379*var2[4]);
  p_output1[9]=var2[2]*(t6734 + t6847 + t6856 - 0.5*t6921*var2[2] - 0.5*t6763*var2[3]);
  p_output1[10]=var2[2]*(t6734 + t6847 + t6856 - 0.5*t7054*var2[2] - 0.5*t7002*var2[3]);
  p_output1[11]=t6077;
  p_output1[12]=-0.5*t7096*var2[2];
  p_output1[13]=t1860 + t2943 - 0.5*t6048*var2[0] - 0.5*t7096*var2[1] - 1.*t4529*var2[2];
  p_output1[14]=t7161;
  p_output1[15]=t7164;
  p_output1[16]=(-0.5*t4529*var2[0] - 0.5*t6698*var2[1])*var2[2];
  p_output1[17]=(-0.5*t5542*var2[0] - 0.5*t6921*var2[1])*var2[2];
  p_output1[18]=(-0.5*t5986*var2[0] - 0.5*t7054*var2[1])*var2[2];
  p_output1[19]=-0.5*t6379*var2[2];
  p_output1[20]=t4604;
  p_output1[21]=-0.5*t6379*var2[0] - 0.5*t4529*var2[1];
  p_output1[22]=(-0.5*t2939*var2[0] - 0.5*t6473*var2[1])*var2[2];
  p_output1[23]=(-0.5*t4781*var2[0] - 0.5*t6763*var2[1])*var2[2];
  p_output1[24]=(-0.5*t5845*var2[0] - 0.5*t7002*var2[1])*var2[2];
  p_output1[25]=t6428;
  p_output1[26]=t7161;
  p_output1[27]=-0.5*t6163*var2[0] - 0.5*t2939*var2[1];
  p_output1[28]=(0.07323676079999998*t1833*var2[0] + 0.07323676079999998*t3379*var2[1])*var2[2];
  p_output1[29]=t7494;
  p_output1[30]=t7494;
  p_output1[31]=t6429;
  p_output1[32]=t7164;
  p_output1[33]=0.07323676079999998*t3027*var2[0] + 0.07323676079999998*t1833*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 34, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L3_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L3_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

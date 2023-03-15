/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:36 GMT-08:00
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
  double t277;
  double t119;
  double t131;
  double t289;
  double t947;
  double t115;
  double t1272;
  double t1332;
  double t1359;
  double t1728;
  double t1740;
  double t1766;
  double t1796;
  double t1815;
  double t187;
  double t321;
  double t329;
  double t640;
  double t1381;
  double t1440;
  double t3023;
  double t1898;
  double t1910;
  double t2033;
  double t2513;
  double t3058;
  double t3699;
  double t3757;
  double t3870;
  double t3874;
  double t3887;
  double t5551;
  double t5562;
  double t5606;
  double t5719;
  double t5809;
  double t5841;
  double t5853;
  double t5859;
  double t5977;
  double t6000;
  double t1606;
  double t1822;
  double t1831;
  double t1885;
  double t3097;
  double t3111;
  double t3125;
  double t3174;
  double t3240;
  double t6427;
  double t6450;
  double t6459;
  double t6485;
  double t6510;
  double t4648;
  double t5781;
  double t6001;
  double t6033;
  double t6064;
  double t6099;
  double t6194;
  double t7160;
  double t7270;
  double t7334;
  double t7337;
  double t7346;
  double t7368;
  double t6549;
  double t6550;
  double t6656;
  double t6720;
  double t6728;
  double t6754;
  double t6783;
  double t6842;
  double t6896;
  double t6912;
  double t6915;
  double t6920;
  double t7019;
  double t7060;
  double t7108;
  double t7128;
  double t7141;
  double t7345;
  double t7438;
  double t7495;
  double t8103;
  double t8104;
  double t8107;
  double t8108;
  double t7608;
  double t4909;
  double t5132;
  double t5329;
  double t5330;
  double t5216;
  double t5249;
  double t5314;
  double t5315;
  double t5327;
  double t5442;
  double t5497;
  double t7340;
  double t7370;
  double t7373;
  double t7546;
  double t7586;
  double t7624;
  double t8186;
  double t8082;
  double t8083;
  double t8086;
  double t8039;
  double t8060;
  double t8063;
  double t8067;
  double t8187;
  double t8188;
  double t8193;
  double t8194;
  double t8195;
  double t8196;
  double t8197;
  double t8198;
  double t8105;
  double t8116;
  double t8117;
  double t8201;
  double t8125;
  double t8128;
  double t8129;
  double t8150;
  double t8152;
  double t8153;
  double t8181;
  double t8182;
  double t8183;
  double t6057;
  double t6218;
  double t6222;
  double t8199;
  double t8202;
  double t8203;
  double t7391;
  double t7652;
  double t7720;
  double t8214;
  double t8216;
  double t8218;
  double t8120;
  double t8130;
  double t8136;
  double t8154;
  double t8155;
  double t8156;
  double t8229;
  double t8230;
  double t8232;
  double t3072;
  double t3285;
  double t3508;
  double t8164;
  double t8166;
  double t8167;
  double t8191;
  double t6662;
  double t8246;
  double t8247;
  double t8248;
  double t8209;
  double t8210;
  double t8211;
  double t8079;
  double t8089;
  double t8093;
  double t8263;
  double t8264;
  double t8265;
  double t8266;
  double t8270;
  double t8157;
  double t8158;
  double t8160;
  double t8233;
  double t8236;
  double t8237;
  double t8287;
  double t8290;
  double t8291;
  double t8325;
  double t8326;
  double t8161;
  double t8239;
  double t8292;
  double t8293;
  double t8316;
  double t8317;
  t277 = Cos(var1[5]);
  t119 = Cos(var1[6]);
  t131 = Sin(var1[5]);
  t289 = Sin(var1[6]);
  t947 = Sin(var1[2]);
  t115 = Cos(var1[2]);
  t1272 = t277*t119;
  t1332 = -1.*t131*t289;
  t1359 = t1272 + t1332;
  t1728 = -1.*t119;
  t1740 = 1. + t1728;
  t1766 = -0.9063*t1740;
  t1796 = -1.078185*t119;
  t1815 = t1766 + t1796;
  t187 = -1.*t119*t131;
  t321 = -1.*t277*t289;
  t329 = t187 + t321;
  t640 = t115*t329;
  t1381 = -1.*t947*t1359;
  t1440 = t640 + t1381;
  t3023 = t115*t1359;
  t1898 = t119*t131;
  t1910 = t277*t289;
  t2033 = t1898 + t1910;
  t2513 = -1.*t947*t2033;
  t3058 = t2513 + t3023;
  t3699 = t947*t329;
  t3757 = t3699 + t3023;
  t3870 = t115*t2033;
  t3874 = t947*t1359;
  t3887 = t3870 + t3874;
  t5551 = 0.4999*t131;
  t5562 = t1815*t131;
  t5606 = -0.17188499999999995*t277*t289;
  t5719 = t5551 + t5562 + t5606;
  t5809 = -1.*t277;
  t5841 = 1. + t5809;
  t5853 = -0.4999*t5841;
  t5859 = t277*t1815;
  t5977 = 0.17188499999999995*t131*t289;
  t6000 = t5853 + t5859 + t5977;
  t1606 = 0.4999*t289;
  t1822 = t1815*t289;
  t1831 = 0.17188499999999995*t119*t289;
  t1885 = t1606 + t1822 + t1831;
  t3097 = 0.4999*t119;
  t3111 = t1815*t119;
  t3125 = Power(t289,2);
  t3174 = -0.17188499999999995*t3125;
  t3240 = t3097 + t3111 + t3174;
  t6427 = -1.*t277*t119;
  t6450 = t131*t289;
  t6459 = t6427 + t6450;
  t6485 = t947*t6459;
  t6510 = t640 + t6485;
  t4648 = -1.*t947*t329;
  t5781 = -1.*t5719*t1359;
  t6001 = -1.*t329*t6000;
  t6033 = t5781 + t6001;
  t6064 = t5719*t2033;
  t6099 = t1359*t6000;
  t6194 = t6064 + t6099;
  t7160 = -0.4999*t131;
  t7270 = -1.*t1815*t131;
  t7334 = 0.17188499999999995*t277*t289;
  t7337 = t7160 + t7270 + t7334;
  t7346 = 0.4999*t277;
  t7368 = t7346 + t5859 + t5977;
  t6549 = 0.14647352159999996*var2[6]*t6510;
  t6550 = 0.85216*t1885*t3757;
  t6656 = 0.85216*t3240*t6510;
  t6720 = 1.70432*t3757*t3887;
  t6728 = 1.70432*t3757*t6510;
  t6754 = t6720 + t6728;
  t6783 = -1.*var2[0]*t6754;
  t6842 = 0.85216*t3757*t3058;
  t6896 = 0.85216*t1440*t3887;
  t6912 = t115*t6459;
  t6915 = t4648 + t6912;
  t6920 = 0.85216*t3757*t6915;
  t7019 = 0.85216*t1440*t6510;
  t7060 = t6842 + t6896 + t6920 + t7019;
  t7108 = -1.*var2[1]*t7060;
  t7128 = 0.85216*t3757*t6033;
  t7141 = t5719*t1359;
  t7345 = t329*t6000;
  t7438 = 0.85216*t6194*t6510;
  t7495 = -1.*t329*t5719;
  t8103 = 0.17188499999999995*t119*t131;
  t8104 = t8103 + t7334;
  t8107 = -0.17188499999999995*t277*t119;
  t8108 = t8107 + t5977;
  t7608 = -1.*t6000*t6459;
  t4909 = -1.*t115*t1359;
  t5132 = t4648 + t4909;
  t5329 = -1.*t115*t2033;
  t5330 = t5329 + t1381;
  t5216 = 0.85216*t5132*t3757;
  t5249 = Power(t3058,2);
  t5314 = 0.85216*t5249;
  t5315 = Power(t1440,2);
  t5327 = 0.85216*t5315;
  t5442 = 0.85216*t5330*t3887;
  t5497 = t5216 + t5314 + t5327 + t5442;
  t7340 = t7337*t1359;
  t7370 = t2033*t7368;
  t7373 = t7141 + t7340 + t7345 + t7370;
  t7546 = -1.*t329*t7337;
  t7586 = -1.*t1359*t7368;
  t7624 = t7495 + t7546 + t7586 + t7608;
  t8186 = 0.14647352159999996*var2[6]*t6915;
  t8082 = Power(t119,2);
  t8083 = 0.17188499999999995*t8082;
  t8086 = 0. + t3097 + t3111 + t8083;
  t8039 = -0.4999*t289;
  t8060 = -1.*t1815*t289;
  t8063 = -0.17188499999999995*t119*t289;
  t8067 = t8039 + t8060 + t8063;
  t8187 = 0.85216*t1885*t1440;
  t8188 = 0.85216*t3240*t6915;
  t8193 = 1.70432*t3058*t1440;
  t8194 = 1.70432*t1440*t6915;
  t8195 = t8193 + t8194;
  t8196 = -1.*var2[1]*t8195;
  t8197 = -1.*var2[0]*t7060;
  t8198 = 0.85216*t1440*t6033;
  t8105 = t8104*t1359;
  t8116 = t2033*t8108;
  t8117 = t7141 + t8105 + t7345 + t8116;
  t8201 = 0.85216*t6194*t6915;
  t8125 = -1.*t329*t8104;
  t8128 = -1.*t1359*t8108;
  t8129 = t7495 + t8125 + t8128 + t7608;
  t8150 = -0.85216*t3757*t1440;
  t8152 = -0.85216*t3058*t3887;
  t8153 = t8150 + t8152;
  t8181 = 0.85216*t5330*t6033;
  t8182 = 0.85216*t5132*t6194;
  t8183 = t8181 + t8182;
  t6057 = 0.85216*t3058*t6033;
  t6218 = 0.85216*t1440*t6194;
  t6222 = t6057 + t6218;
  t8199 = 0.85216*t1440*t7373;
  t8202 = 0.85216*t3058*t7624;
  t8203 = t8198 + t8199 + t8201 + t8202;
  t7391 = 0.85216*t3757*t7373;
  t7652 = 0.85216*t3887*t7624;
  t7720 = t7128 + t7391 + t7438 + t7652;
  t8214 = 0.85216*t1440*t8117;
  t8216 = 0.85216*t3058*t8129;
  t8218 = t8198 + t8214 + t8201 + t8216;
  t8120 = 0.85216*t3757*t8117;
  t8130 = 0.85216*t3887*t8129;
  t8136 = t7128 + t8120 + t7438 + t8130;
  t8154 = -0.85216*t3887*t6033;
  t8155 = -0.85216*t3757*t6194;
  t8156 = t8154 + t8155;
  t8229 = -0.85216*t3058*t6033;
  t8230 = -0.85216*t1440*t6194;
  t8232 = t8229 + t8230;
  t3072 = 0.85216*t1885*t3058;
  t3285 = 0.85216*t3240*t1440;
  t3508 = t3072 + t3285;
  t8164 = 0.85216*t3240*t5132;
  t8166 = 0.85216*t1885*t5330;
  t8167 = t8164 + t8166;
  t8191 = t8187 + t8188;
  t6662 = t6550 + t6656;
  t8246 = 0.85216*t3240*t7373;
  t8247 = 0.85216*t1885*t7624;
  t8248 = t8246 + t8247;
  t8209 = 0.85216*t8086*t3058;
  t8210 = 0.85216*t8067*t1440;
  t8211 = t8209 + t8210 + t8187 + t8188;
  t8079 = 0.85216*t8067*t3757;
  t8089 = 0.85216*t8086*t3887;
  t8093 = t8079 + t6550 + t8089 + t6656;
  t8263 = 0.85216*t8086*t6033;
  t8264 = 0.85216*t8067*t6194;
  t8265 = 0.85216*t3240*t8117;
  t8266 = 0.85216*t1885*t8129;
  t8270 = t8263 + t8264 + t8265 + t8266;
  t8157 = -0.85216*t3240*t3757;
  t8158 = -0.85216*t1885*t3887;
  t8160 = t8157 + t8158;
  t8233 = -0.85216*t1885*t3058;
  t8236 = -0.85216*t3240*t1440;
  t8237 = t8233 + t8236;
  t8287 = -0.85216*t1885*t6033;
  t8290 = -0.85216*t3240*t6194;
  t8291 = -0.019286 + t8287 + t8290;
  t8325 = 0.14647352159999996*var2[1]*t6915;
  t8326 = 0.14647352159999996*var2[0]*t6510;
  t8161 = 0.14647352159999996*t3757;
  t8239 = 0.14647352159999996*t1440;
  t8292 = 0.14647352159999996*t6194;
  t8293 = -0.019286 + t8292;
  t8316 = 0.14647352159999996*t3240;
  t8317 = -0.019286 + t8316;
  p_output1[0]=-1.*(1.70432*t1440*t3757 + 1.70432*t3058*t3887)*var2[0] - 1.*t5497*var2[1] - 1.*t6222*var2[2] - 1.*t3508*var2[5] + 0.14647352159999996*t1440*var2[6];
  p_output1[1]=t6549 + t6783 + t7108 - 1.*t7720*var2[2] - 1.*t6662*var2[5];
  p_output1[2]=t6549 + t6783 + t7108 - 1.*t8136*var2[2] - 1.*t8093*var2[5];
  p_output1[3]=-0.85216*Power(t3757,2) - 0.85216*Power(t3887,2);
  p_output1[4]=t8153;
  p_output1[5]=t8156;
  p_output1[6]=t8160;
  p_output1[7]=t8161;
  p_output1[8]=-1.*t5497*var2[0] - 1.*(1.70432*t1440*t5132 + 1.70432*t3058*t5330)*var2[1] - 1.*t8183*var2[2] - 1.*t8167*var2[5] + 0.14647352159999996*t5132*var2[6];
  p_output1[9]=t8186 + t8196 + t8197 - 1.*t8203*var2[2] - 1.*t8191*var2[5];
  p_output1[10]=t8186 + t8196 + t8197 - 1.*t8218*var2[2] - 1.*t8211*var2[5];
  p_output1[11]=t8153;
  p_output1[12]=-0.85216*t5249 - 0.85216*t5315;
  p_output1[13]=t8232;
  p_output1[14]=t8237;
  p_output1[15]=t8239;
  p_output1[16]=-1.*t6222*var2[0] - 1.*t8183*var2[1];
  p_output1[17]=-1.*t7720*var2[0] - 1.*t8203*var2[1] - 1.*(1.70432*t6194*t7373 + 1.70432*t6033*t7624)*var2[2] - 1.*t8248*var2[5] + 0.14647352159999996*t7373*var2[6];
  p_output1[18]=-1.*t8136*var2[0] - 1.*t8218*var2[1] - 1.*(1.70432*t6194*t8117 + 1.70432*t6033*t8129)*var2[2] - 1.*t8270*var2[5] + 0.14647352159999996*t8117*var2[6];
  p_output1[19]=t8156;
  p_output1[20]=t8232;
  p_output1[21]=-0.019286 - 0.85216*Power(t6033,2) - 0.85216*Power(t6194,2);
  p_output1[22]=t8291;
  p_output1[23]=t8293;
  p_output1[24]=-1.*t3508*var2[0] - 1.*t8167*var2[1];
  p_output1[25]=-1.*t6662*var2[0] - 1.*t8191*var2[1] - 1.*t8248*var2[2];
  p_output1[26]=-1.*t8093*var2[0] - 1.*t8211*var2[1] - 1.*t8270*var2[2] - 1.*(1.70432*t3240*t8067 + 1.70432*t1885*t8086)*var2[5] + 0.14647352159999996*t8067*var2[6];
  p_output1[27]=t8160;
  p_output1[28]=t8237;
  p_output1[29]=t8291;
  p_output1[30]=-0.019286 - 0.85216*Power(t1885,2) - 0.85216*Power(t3240,2);
  p_output1[31]=t8317;
  p_output1[32]=0.14647352159999996*t1440*var2[0] + 0.14647352159999996*t5132*var2[1];
  p_output1[33]=t8325 + t8326 + 0.14647352159999996*t7373*var2[2];
  p_output1[34]=t8325 + t8326 + 0.14647352159999996*t8117*var2[2] + 0.14647352159999996*t8067*var2[5];
  p_output1[35]=t8161;
  p_output1[36]=t8239;
  p_output1[37]=t8293;
  p_output1[38]=t8317;
  p_output1[39]=-0.04446260126021599;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx5_amber3_PF.hh"

namespace RightSS
{

void J_MmatDx5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

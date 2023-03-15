/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:33 GMT-08:00
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
  double t2206;
  double t1244;
  double t1508;
  double t2268;
  double t3137;
  double t15;
  double t3174;
  double t3197;
  double t3248;
  double t3581;
  double t3735;
  double t3870;
  double t4130;
  double t5066;
  double t2113;
  double t2533;
  double t3017;
  double t3023;
  double t3265;
  double t3285;
  double t5551;
  double t5330;
  double t5442;
  double t5445;
  double t5539;
  double t5554;
  double t6057;
  double t6257;
  double t6327;
  double t6344;
  double t6427;
  double t7019;
  double t7108;
  double t7141;
  double t7216;
  double t7309;
  double t7329;
  double t7334;
  double t7373;
  double t7438;
  double t7514;
  double t3556;
  double t5072;
  double t5216;
  double t5315;
  double t5606;
  double t5719;
  double t5809;
  double t5841;
  double t5853;
  double t8062;
  double t8063;
  double t8066;
  double t8067;
  double t8079;
  double t6518;
  double t7294;
  double t7604;
  double t7608;
  double t7652;
  double t7720;
  double t7916;
  double t8120;
  double t8124;
  double t8125;
  double t8127;
  double t8130;
  double t8135;
  double t8080;
  double t8082;
  double t8083;
  double t8089;
  double t8093;
  double t8097;
  double t8098;
  double t8102;
  double t8103;
  double t8104;
  double t8105;
  double t8107;
  double t8108;
  double t8111;
  double t8112;
  double t8116;
  double t8117;
  double t8129;
  double t8140;
  double t8141;
  double t8161;
  double t8162;
  double t8164;
  double t8165;
  double t8144;
  double t6529;
  double t6545;
  double t6768;
  double t6783;
  double t6549;
  double t6550;
  double t6717;
  double t6720;
  double t6728;
  double t6842;
  double t6851;
  double t8128;
  double t8136;
  double t8137;
  double t8142;
  double t8143;
  double t8145;
  double t8215;
  double t8155;
  double t8156;
  double t8157;
  double t8150;
  double t8151;
  double t8152;
  double t8153;
  double t8216;
  double t8218;
  double t8222;
  double t8223;
  double t8224;
  double t8225;
  double t8226;
  double t8227;
  double t8163;
  double t8166;
  double t8167;
  double t8229;
  double t8173;
  double t8174;
  double t8175;
  double t8185;
  double t8186;
  double t8187;
  double t8210;
  double t8211;
  double t8212;
  double t7624;
  double t7981;
  double t8008;
  double t8228;
  double t8230;
  double t8231;
  double t8139;
  double t8146;
  double t8147;
  double t8240;
  double t8241;
  double t8243;
  double t8170;
  double t8176;
  double t8177;
  double t8188;
  double t8191;
  double t8192;
  double t8249;
  double t8253;
  double t8256;
  double t5562;
  double t5859;
  double t5879;
  double t8198;
  double t8199;
  double t8200;
  double t8220;
  double t8085;
  double t8265;
  double t8266;
  double t8267;
  double t8236;
  double t8237;
  double t8238;
  double t8154;
  double t8158;
  double t8159;
  double t8281;
  double t8282;
  double t8283;
  double t8284;
  double t8285;
  double t8193;
  double t8194;
  double t8195;
  double t8257;
  double t8258;
  double t8259;
  double t8301;
  double t8302;
  double t8303;
  double t8337;
  double t8338;
  double t8196;
  double t8260;
  double t8304;
  double t8305;
  double t8331;
  double t8332;
  t2206 = Cos(var1[3]);
  t1244 = Cos(var1[4]);
  t1508 = Sin(var1[3]);
  t2268 = Sin(var1[4]);
  t3137 = Sin(var1[2]);
  t15 = Cos(var1[2]);
  t3174 = t2206*t1244;
  t3197 = -1.*t1508*t2268;
  t3248 = t3174 + t3197;
  t3581 = -1.*t1244;
  t3735 = 1. + t3581;
  t3870 = -0.9063*t3735;
  t4130 = -1.078185*t1244;
  t5066 = t3870 + t4130;
  t2113 = -1.*t1244*t1508;
  t2533 = -1.*t2206*t2268;
  t3017 = t2113 + t2533;
  t3023 = t15*t3017;
  t3265 = -1.*t3137*t3248;
  t3285 = t3023 + t3265;
  t5551 = t15*t3248;
  t5330 = t1244*t1508;
  t5442 = t2206*t2268;
  t5445 = t5330 + t5442;
  t5539 = -1.*t3137*t5445;
  t5554 = t5539 + t5551;
  t6057 = t3137*t3017;
  t6257 = t6057 + t5551;
  t6327 = t15*t5445;
  t6344 = t3137*t3248;
  t6427 = t6327 + t6344;
  t7019 = 0.4999*t1508;
  t7108 = t5066*t1508;
  t7141 = -0.17188499999999995*t2206*t2268;
  t7216 = t7019 + t7108 + t7141;
  t7309 = -1.*t2206;
  t7329 = 1. + t7309;
  t7334 = -0.4999*t7329;
  t7373 = t2206*t5066;
  t7438 = 0.17188499999999995*t1508*t2268;
  t7514 = t7334 + t7373 + t7438;
  t3556 = 0.4999*t2268;
  t5072 = t5066*t2268;
  t5216 = 0.17188499999999995*t1244*t2268;
  t5315 = t3556 + t5072 + t5216;
  t5606 = 0.4999*t1244;
  t5719 = t5066*t1244;
  t5809 = Power(t2268,2);
  t5841 = -0.17188499999999995*t5809;
  t5853 = t5606 + t5719 + t5841;
  t8062 = -1.*t2206*t1244;
  t8063 = t1508*t2268;
  t8066 = t8062 + t8063;
  t8067 = t3137*t8066;
  t8079 = t3023 + t8067;
  t6518 = -1.*t3137*t3017;
  t7294 = -1.*t7216*t3248;
  t7604 = -1.*t3017*t7514;
  t7608 = t7294 + t7604;
  t7652 = t7216*t5445;
  t7720 = t3248*t7514;
  t7916 = t7652 + t7720;
  t8120 = -0.4999*t1508;
  t8124 = -1.*t5066*t1508;
  t8125 = 0.17188499999999995*t2206*t2268;
  t8127 = t8120 + t8124 + t8125;
  t8130 = 0.4999*t2206;
  t8135 = t8130 + t7373 + t7438;
  t8080 = 0.14647352159999996*var2[4]*t8079;
  t8082 = 0.85216*t5315*t6257;
  t8083 = 0.85216*t5853*t8079;
  t8089 = 1.70432*t6257*t6427;
  t8093 = 1.70432*t6257*t8079;
  t8097 = t8089 + t8093;
  t8098 = -1.*var2[0]*t8097;
  t8102 = 0.85216*t6257*t5554;
  t8103 = 0.85216*t3285*t6427;
  t8104 = t15*t8066;
  t8105 = t6518 + t8104;
  t8107 = 0.85216*t6257*t8105;
  t8108 = 0.85216*t3285*t8079;
  t8111 = t8102 + t8103 + t8107 + t8108;
  t8112 = -1.*var2[1]*t8111;
  t8116 = 0.85216*t6257*t7608;
  t8117 = t7216*t3248;
  t8129 = t3017*t7514;
  t8140 = 0.85216*t7916*t8079;
  t8141 = -1.*t3017*t7216;
  t8161 = 0.17188499999999995*t1244*t1508;
  t8162 = t8161 + t8125;
  t8164 = -0.17188499999999995*t2206*t1244;
  t8165 = t8164 + t7438;
  t8144 = -1.*t7514*t8066;
  t6529 = -1.*t15*t3248;
  t6545 = t6518 + t6529;
  t6768 = -1.*t15*t5445;
  t6783 = t6768 + t3265;
  t6549 = 0.85216*t6545*t6257;
  t6550 = Power(t5554,2);
  t6717 = 0.85216*t6550;
  t6720 = Power(t3285,2);
  t6728 = 0.85216*t6720;
  t6842 = 0.85216*t6783*t6427;
  t6851 = t6549 + t6717 + t6728 + t6842;
  t8128 = t8127*t3248;
  t8136 = t5445*t8135;
  t8137 = t8117 + t8128 + t8129 + t8136;
  t8142 = -1.*t3017*t8127;
  t8143 = -1.*t3248*t8135;
  t8145 = t8141 + t8142 + t8143 + t8144;
  t8215 = 0.14647352159999996*var2[4]*t8105;
  t8155 = Power(t1244,2);
  t8156 = 0.17188499999999995*t8155;
  t8157 = 0. + t5606 + t5719 + t8156;
  t8150 = -0.4999*t2268;
  t8151 = -1.*t5066*t2268;
  t8152 = -0.17188499999999995*t1244*t2268;
  t8153 = t8150 + t8151 + t8152;
  t8216 = 0.85216*t5315*t3285;
  t8218 = 0.85216*t5853*t8105;
  t8222 = 1.70432*t5554*t3285;
  t8223 = 1.70432*t3285*t8105;
  t8224 = t8222 + t8223;
  t8225 = -1.*var2[1]*t8224;
  t8226 = -1.*var2[0]*t8111;
  t8227 = 0.85216*t3285*t7608;
  t8163 = t8162*t3248;
  t8166 = t5445*t8165;
  t8167 = t8117 + t8163 + t8129 + t8166;
  t8229 = 0.85216*t7916*t8105;
  t8173 = -1.*t3017*t8162;
  t8174 = -1.*t3248*t8165;
  t8175 = t8141 + t8173 + t8174 + t8144;
  t8185 = -0.85216*t6257*t3285;
  t8186 = -0.85216*t5554*t6427;
  t8187 = t8185 + t8186;
  t8210 = 0.85216*t6783*t7608;
  t8211 = 0.85216*t6545*t7916;
  t8212 = t8210 + t8211;
  t7624 = 0.85216*t5554*t7608;
  t7981 = 0.85216*t3285*t7916;
  t8008 = t7624 + t7981;
  t8228 = 0.85216*t3285*t8137;
  t8230 = 0.85216*t5554*t8145;
  t8231 = t8227 + t8228 + t8229 + t8230;
  t8139 = 0.85216*t6257*t8137;
  t8146 = 0.85216*t6427*t8145;
  t8147 = t8116 + t8139 + t8140 + t8146;
  t8240 = 0.85216*t3285*t8167;
  t8241 = 0.85216*t5554*t8175;
  t8243 = t8227 + t8240 + t8229 + t8241;
  t8170 = 0.85216*t6257*t8167;
  t8176 = 0.85216*t6427*t8175;
  t8177 = t8116 + t8170 + t8140 + t8176;
  t8188 = -0.85216*t6427*t7608;
  t8191 = -0.85216*t6257*t7916;
  t8192 = t8188 + t8191;
  t8249 = -0.85216*t5554*t7608;
  t8253 = -0.85216*t3285*t7916;
  t8256 = t8249 + t8253;
  t5562 = 0.85216*t5315*t5554;
  t5859 = 0.85216*t5853*t3285;
  t5879 = t5562 + t5859;
  t8198 = 0.85216*t5853*t6545;
  t8199 = 0.85216*t5315*t6783;
  t8200 = t8198 + t8199;
  t8220 = t8216 + t8218;
  t8085 = t8082 + t8083;
  t8265 = 0.85216*t5853*t8137;
  t8266 = 0.85216*t5315*t8145;
  t8267 = t8265 + t8266;
  t8236 = 0.85216*t8157*t5554;
  t8237 = 0.85216*t8153*t3285;
  t8238 = t8236 + t8237 + t8216 + t8218;
  t8154 = 0.85216*t8153*t6257;
  t8158 = 0.85216*t8157*t6427;
  t8159 = t8154 + t8082 + t8158 + t8083;
  t8281 = 0.85216*t8157*t7608;
  t8282 = 0.85216*t8153*t7916;
  t8283 = 0.85216*t5853*t8167;
  t8284 = 0.85216*t5315*t8175;
  t8285 = t8281 + t8282 + t8283 + t8284;
  t8193 = -0.85216*t5853*t6257;
  t8194 = -0.85216*t5315*t6427;
  t8195 = t8193 + t8194;
  t8257 = -0.85216*t5315*t5554;
  t8258 = -0.85216*t5853*t3285;
  t8259 = t8257 + t8258;
  t8301 = -0.85216*t5315*t7608;
  t8302 = -0.85216*t5853*t7916;
  t8303 = -0.019286 + t8301 + t8302;
  t8337 = 0.14647352159999996*var2[1]*t8105;
  t8338 = 0.14647352159999996*var2[0]*t8079;
  t8196 = 0.14647352159999996*t6257;
  t8260 = 0.14647352159999996*t3285;
  t8304 = 0.14647352159999996*t7916;
  t8305 = -0.019286 + t8304;
  t8331 = 0.14647352159999996*t5853;
  t8332 = -0.019286 + t8331;
  p_output1[0]=-1.*(1.70432*t3285*t6257 + 1.70432*t5554*t6427)*var2[0] - 1.*t6851*var2[1] - 1.*t8008*var2[2] - 1.*t5879*var2[3] + 0.14647352159999996*t3285*var2[4];
  p_output1[1]=t8080 + t8098 + t8112 - 1.*t8147*var2[2] - 1.*t8085*var2[3];
  p_output1[2]=t8080 + t8098 + t8112 - 1.*t8177*var2[2] - 1.*t8159*var2[3];
  p_output1[3]=-0.85216*Power(t6257,2) - 0.85216*Power(t6427,2);
  p_output1[4]=t8187;
  p_output1[5]=t8192;
  p_output1[6]=t8195;
  p_output1[7]=t8196;
  p_output1[8]=-1.*t6851*var2[0] - 1.*(1.70432*t3285*t6545 + 1.70432*t5554*t6783)*var2[1] - 1.*t8212*var2[2] - 1.*t8200*var2[3] + 0.14647352159999996*t6545*var2[4];
  p_output1[9]=t8215 + t8225 + t8226 - 1.*t8231*var2[2] - 1.*t8220*var2[3];
  p_output1[10]=t8215 + t8225 + t8226 - 1.*t8243*var2[2] - 1.*t8238*var2[3];
  p_output1[11]=t8187;
  p_output1[12]=-0.85216*t6550 - 0.85216*t6720;
  p_output1[13]=t8256;
  p_output1[14]=t8259;
  p_output1[15]=t8260;
  p_output1[16]=-1.*t8008*var2[0] - 1.*t8212*var2[1];
  p_output1[17]=-1.*t8147*var2[0] - 1.*t8231*var2[1] - 1.*(1.70432*t7916*t8137 + 1.70432*t7608*t8145)*var2[2] - 1.*t8267*var2[3] + 0.14647352159999996*t8137*var2[4];
  p_output1[18]=-1.*t8177*var2[0] - 1.*t8243*var2[1] - 1.*(1.70432*t7916*t8167 + 1.70432*t7608*t8175)*var2[2] - 1.*t8285*var2[3] + 0.14647352159999996*t8167*var2[4];
  p_output1[19]=t8192;
  p_output1[20]=t8256;
  p_output1[21]=-0.019286 - 0.85216*Power(t7608,2) - 0.85216*Power(t7916,2);
  p_output1[22]=t8303;
  p_output1[23]=t8305;
  p_output1[24]=-1.*t5879*var2[0] - 1.*t8200*var2[1];
  p_output1[25]=-1.*t8085*var2[0] - 1.*t8220*var2[1] - 1.*t8267*var2[2];
  p_output1[26]=-1.*t8159*var2[0] - 1.*t8238*var2[1] - 1.*t8285*var2[2] - 1.*(1.70432*t5853*t8153 + 1.70432*t5315*t8157)*var2[3] + 0.14647352159999996*t8153*var2[4];
  p_output1[27]=t8195;
  p_output1[28]=t8259;
  p_output1[29]=t8303;
  p_output1[30]=-0.019286 - 0.85216*Power(t5315,2) - 0.85216*Power(t5853,2);
  p_output1[31]=t8332;
  p_output1[32]=0.14647352159999996*t3285*var2[0] + 0.14647352159999996*t6545*var2[1];
  p_output1[33]=t8337 + t8338 + 0.14647352159999996*t8137*var2[2];
  p_output1[34]=t8337 + t8338 + 0.14647352159999996*t8167*var2[2] + 0.14647352159999996*t8153*var2[3];
  p_output1[35]=t8196;
  p_output1[36]=t8260;
  p_output1[37]=t8305;
  p_output1[38]=t8332;
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

#include "J_MmatDx3_amber3_PF.hh"

namespace RightSS
{

void J_MmatDx3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:34 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t456;
  double t372;
  double t392;
  double t720;
  double t1847;
  double t1977;
  double t2089;
  double t402;
  double t1452;
  double t1455;
  double t3159;
  double t3394;
  double t3462;
  double t3617;
  double t3633;
  double t2346;
  double t2402;
  double t2852;
  double t2094;
  double t3727;
  double t3740;
  double t3752;
  double t3899;
  double t3951;
  double t4021;
  double t4180;
  double t4338;
  double t4391;
  double t4436;
  double t4449;
  double t4479;
  double t4565;
  double t4613;
  double t4627;
  double t4676;
  double t4755;
  double t4801;
  double t4861;
  double t4862;
  double t4948;
  double t4982;
  double t5065;
  double t5188;
  double t5194;
  double t5289;
  double t5296;
  double t5369;
  double t5392;
  double t5427;
  double t5475;
  double t5478;
  double t1533;
  double t2957;
  double t3005;
  double t3114;
  double t2136;
  double t6348;
  double t6378;
  double t6399;
  double t6421;
  double t6434;
  double t5821;
  double t5855;
  double t5899;
  double t6437;
  double t5709;
  double t5717;
  double t5721;
  double t6440;
  double t6088;
  double t6154;
  double t6168;
  double t5543;
  double t3879;
  double t4218;
  double t4253;
  double t6275;
  double t6301;
  double t6308;
  double t6448;
  double t5749;
  double t5900;
  double t5917;
  double t6458;
  double t6459;
  double t6465;
  double t6185;
  double t6190;
  double t6231;
  double t6488;
  double t6505;
  double t4257;
  double t6312;
  double t6537;
  double t6548;
  double t6620;
  double t6632;
  double t6248;
  double t6485;
  double t6601;
  double t6611;
  t456 = Cos(var2[2]);
  t372 = Cos(var2[6]);
  t392 = Sin(var2[2]);
  t720 = Sin(var2[6]);
  t1847 = t456*t372;
  t1977 = -1.*t392*t720;
  t2089 = t1847 + t1977;
  t402 = t372*t392;
  t1452 = t456*t720;
  t1455 = t402 + t1452;
  t3159 = -1.*t372;
  t3394 = 1. + t3159;
  t3462 = -0.4999*t3394;
  t3617 = -0.6493*t372;
  t3633 = t3462 + t3617;
  t2346 = -1.*t372*t392;
  t2402 = -1.*t456*t720;
  t2852 = t2346 + t2402;
  t2094 = Power(t2089,2);
  t3727 = t3633*t720;
  t3740 = 0.14939999999999998*t372*t720;
  t3752 = t3727 + t3740;
  t3899 = t3633*t372;
  t3951 = Power(t720,2);
  t4021 = -0.14939999999999998*t3951;
  t4180 = t3899 + t4021;
  t4338 = -1.*var1[3];
  t4391 = var3[6] + t4338;
  t4436 = -0.5118593399999999*t4391*t2852;
  t4449 = -1.*var1[0];
  t4479 = var3[0] + t4449;
  t4565 = 6.8522*t2852*t2089;
  t4613 = 6.8522*t1455*t2089;
  t4627 = t4565 + t4613;
  t4676 = t4479*t4627;
  t4755 = -1.*var1[1];
  t4801 = var3[1] + t4755;
  t4861 = Power(t2852,2);
  t4862 = 3.4261*t4861;
  t4948 = 3.4261*t2852*t1455;
  t4982 = 3.4261*t2094;
  t5065 = -1.*t456*t372;
  t5188 = t392*t720;
  t5194 = t5065 + t5188;
  t5289 = 3.4261*t2089*t5194;
  t5296 = t4862 + t4948 + t4982 + t5289;
  t5369 = t4801*t5296;
  t5392 = -1.*var1[2];
  t5427 = var3[2] + t5392;
  t5475 = 3.4261*t3752*t2089;
  t5478 = 3.4261*t2852*t4180;
  t1533 = Power(t1455,2);
  t2957 = -3.4261*t2852*t2089;
  t3005 = -3.4261*t1455*t2089;
  t3114 = t2957 + t3005;
  t2136 = -3.4261*t2094;
  t6348 = -0.5118593399999999*t4391*t5194;
  t6378 = 6.8522*t2852*t5194;
  t6399 = t4565 + t6378;
  t6421 = t4801*t6399;
  t6434 = t4479*t5296;
  t5821 = -1.*t3633*t720;
  t5855 = -0.14939999999999998*t372*t720;
  t5899 = t5821 + t5855;
  t6437 = 3.4261*t2852*t3752;
  t5709 = Power(t372,2);
  t5717 = 0.14939999999999998*t5709;
  t5721 = 0. + t3899 + t5717;
  t6440 = 3.4261*t5194*t4180;
  t6088 = 3.4261*t2852*t2089;
  t6154 = 3.4261*t1455*t2089;
  t6168 = t6088 + t6154;
  t5543 = t5475 + t5478;
  t3879 = -3.4261*t1455*t3752;
  t4218 = -3.4261*t2089*t4180;
  t4253 = t3879 + t4218;
  t6275 = -3.4261*t3752*t2089;
  t6301 = -3.4261*t2852*t4180;
  t6308 = t6275 + t6301;
  t6448 = t6437 + t6440;
  t5749 = 3.4261*t5721*t1455;
  t5900 = 3.4261*t5899*t2089;
  t5917 = t5749 + t5900 + t5475 + t5478;
  t6458 = 3.4261*t2852*t5899;
  t6459 = 3.4261*t5721*t2089;
  t6465 = t6458 + t6437 + t6459 + t6440;
  t6185 = 3.4261*t1455*t3752;
  t6190 = 3.4261*t2089*t4180;
  t6231 = t6185 + t6190;
  t6488 = Power(t3752,2);
  t6505 = Power(t4180,2);
  t4257 = 0.5118593399999999*t2089;
  t6312 = 0.5118593399999999*t2852;
  t6537 = 0.5118593399999999*t4180;
  t6548 = -0.0389 + t6537;
  t6620 = -0.5118593399999999*t4479*t2852;
  t6632 = -0.5118593399999999*t4801*t5194;
  t6248 = -0.5118593399999999*t2089;
  t6485 = -0.5118593399999999*t2852;
  t6601 = -0.5118593399999999*t4180;
  t6611 = 0.0389 + t6601;
  p_output1[0]=-3.4261*t1533 + t2136;
  p_output1[1]=t3114;
  p_output1[2]=t4253;
  p_output1[3]=t4257;
  p_output1[4]=t4436 + t4676 + t5369 + t5427*t5543;
  p_output1[5]=t4436 + t4676 + t5369 + t5427*t5917;
  p_output1[6]=3.4261*t1533 + t4982;
  p_output1[7]=t6168;
  p_output1[8]=t6231;
  p_output1[9]=t6248;
  p_output1[10]=t3114;
  p_output1[11]=t2136 - 3.4261*t4861;
  p_output1[12]=t6308;
  p_output1[13]=t6312;
  p_output1[14]=t6348 + t6421 + t6434 + t5427*t6448;
  p_output1[15]=t6348 + t6421 + t6434 + t5427*t6465;
  p_output1[16]=t6168;
  p_output1[17]=t4862 + t4982;
  p_output1[18]=t5543;
  p_output1[19]=t6485;
  p_output1[20]=t4253;
  p_output1[21]=t6308;
  p_output1[22]=-0.0389 - 3.4261*t6488 - 3.4261*t6505;
  p_output1[23]=t6548;
  p_output1[24]=t4479*t5543 + t4801*t6448;
  p_output1[25]=-0.5118593399999999*t4391*t5899 + t5427*(6.8522*t3752*t5721 + 6.8522*t4180*t5899) + t4479*t5917 + t4801*t6465;
  p_output1[26]=t6231;
  p_output1[27]=t5543;
  p_output1[28]=0.0389 + 3.4261*t6488 + 3.4261*t6505;
  p_output1[29]=t6611;
  p_output1[30]=t4257;
  p_output1[31]=t6312;
  p_output1[32]=t6548;
  p_output1[33]=-0.11537178539599996;
  p_output1[34]=t6620 + t6632;
  p_output1[35]=-0.5118593399999999*t5427*t5899 + t6620 + t6632;
  p_output1[36]=t6248;
  p_output1[37]=t6485;
  p_output1[38]=t6611;
  p_output1[39]=0.11537178539599996;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap5_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap5_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

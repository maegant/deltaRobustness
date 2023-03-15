/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:11 GMT-08:00
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
  double t943;
  double t36;
  double t255;
  double t956;
  double t1644;
  double t1803;
  double t2012;
  double t844;
  double t1393;
  double t1403;
  double t4073;
  double t4153;
  double t4216;
  double t4231;
  double t4304;
  double t3449;
  double t3584;
  double t3645;
  double t2800;
  double t4325;
  double t4344;
  double t4357;
  double t4387;
  double t4414;
  double t4424;
  double t4440;
  double t4484;
  double t4512;
  double t4564;
  double t4569;
  double t4585;
  double t4617;
  double t4648;
  double t4675;
  double t4680;
  double t4703;
  double t4747;
  double t4754;
  double t4818;
  double t4825;
  double t4887;
  double t4890;
  double t4992;
  double t5021;
  double t5024;
  double t5043;
  double t5045;
  double t5054;
  double t5063;
  double t5082;
  double t5092;
  double t1445;
  double t3769;
  double t3779;
  double t3988;
  double t2945;
  double t5352;
  double t5355;
  double t5360;
  double t5367;
  double t5405;
  double t5138;
  double t5140;
  double t5157;
  double t5407;
  double t5109;
  double t5111;
  double t5113;
  double t5410;
  double t5262;
  double t5266;
  double t5280;
  double t5093;
  double t4376;
  double t4441;
  double t4446;
  double t5325;
  double t5332;
  double t5340;
  double t5420;
  double t5135;
  double t5159;
  double t5171;
  double t5433;
  double t5434;
  double t5435;
  double t5285;
  double t5289;
  double t5296;
  double t5462;
  double t5471;
  double t4457;
  double t5344;
  double t5477;
  double t5483;
  double t5583;
  double t5585;
  double t5306;
  double t5456;
  double t5571;
  double t5575;
  t943 = Cos(var2[2]);
  t36 = Cos(var2[5]);
  t255 = Sin(var2[2]);
  t956 = Sin(var2[5]);
  t1644 = t943*t36;
  t1803 = -1.*t255*t956;
  t2012 = t1644 + t1803;
  t844 = t36*t255;
  t1393 = t943*t956;
  t1403 = t844 + t1393;
  t4073 = -1.*t36;
  t4153 = 1. + t4073;
  t4216 = -0.4999*t4153;
  t4231 = -0.6493*t36;
  t4304 = t4216 + t4231;
  t3449 = -1.*t36*t255;
  t3584 = -1.*t943*t956;
  t3645 = t3449 + t3584;
  t2800 = Power(t2012,2);
  t4325 = t4304*t956;
  t4344 = 0.14939999999999998*t36*t956;
  t4357 = t4325 + t4344;
  t4387 = t4304*t36;
  t4414 = Power(t956,2);
  t4424 = -0.14939999999999998*t4414;
  t4440 = t4387 + t4424;
  t4484 = -1.*var1[3];
  t4512 = var3[5] + t4484;
  t4564 = -0.5118593399999999*t4512*t3645;
  t4569 = -1.*var1[0];
  t4585 = var3[0] + t4569;
  t4617 = 6.8522*t3645*t2012;
  t4648 = 6.8522*t1403*t2012;
  t4675 = t4617 + t4648;
  t4680 = t4585*t4675;
  t4703 = -1.*var1[1];
  t4747 = var3[1] + t4703;
  t4754 = Power(t3645,2);
  t4818 = 3.4261*t4754;
  t4825 = 3.4261*t3645*t1403;
  t4887 = 3.4261*t2800;
  t4890 = -1.*t943*t36;
  t4992 = t255*t956;
  t5021 = t4890 + t4992;
  t5024 = 3.4261*t2012*t5021;
  t5043 = t4818 + t4825 + t4887 + t5024;
  t5045 = t4747*t5043;
  t5054 = -1.*var1[2];
  t5063 = var3[2] + t5054;
  t5082 = 3.4261*t4357*t2012;
  t5092 = 3.4261*t3645*t4440;
  t1445 = Power(t1403,2);
  t3769 = -3.4261*t3645*t2012;
  t3779 = -3.4261*t1403*t2012;
  t3988 = t3769 + t3779;
  t2945 = -3.4261*t2800;
  t5352 = -0.5118593399999999*t4512*t5021;
  t5355 = 6.8522*t3645*t5021;
  t5360 = t4617 + t5355;
  t5367 = t4747*t5360;
  t5405 = t4585*t5043;
  t5138 = -1.*t4304*t956;
  t5140 = -0.14939999999999998*t36*t956;
  t5157 = t5138 + t5140;
  t5407 = 3.4261*t3645*t4357;
  t5109 = Power(t36,2);
  t5111 = 0.14939999999999998*t5109;
  t5113 = 0. + t4387 + t5111;
  t5410 = 3.4261*t5021*t4440;
  t5262 = 3.4261*t3645*t2012;
  t5266 = 3.4261*t1403*t2012;
  t5280 = t5262 + t5266;
  t5093 = t5082 + t5092;
  t4376 = -3.4261*t1403*t4357;
  t4441 = -3.4261*t2012*t4440;
  t4446 = t4376 + t4441;
  t5325 = -3.4261*t4357*t2012;
  t5332 = -3.4261*t3645*t4440;
  t5340 = t5325 + t5332;
  t5420 = t5407 + t5410;
  t5135 = 3.4261*t5113*t1403;
  t5159 = 3.4261*t5157*t2012;
  t5171 = t5135 + t5159 + t5082 + t5092;
  t5433 = 3.4261*t3645*t5157;
  t5434 = 3.4261*t5113*t2012;
  t5435 = t5433 + t5407 + t5434 + t5410;
  t5285 = 3.4261*t1403*t4357;
  t5289 = 3.4261*t2012*t4440;
  t5296 = t5285 + t5289;
  t5462 = Power(t4357,2);
  t5471 = Power(t4440,2);
  t4457 = 0.5118593399999999*t2012;
  t5344 = 0.5118593399999999*t3645;
  t5477 = 0.5118593399999999*t4440;
  t5483 = -0.0389 + t5477;
  t5583 = -0.5118593399999999*t4585*t3645;
  t5585 = -0.5118593399999999*t4747*t5021;
  t5306 = -0.5118593399999999*t2012;
  t5456 = -0.5118593399999999*t3645;
  t5571 = -0.5118593399999999*t4440;
  t5575 = 0.0389 + t5571;
  p_output1[0]=-3.4261*t1445 + t2945;
  p_output1[1]=t3988;
  p_output1[2]=t4446;
  p_output1[3]=t4457;
  p_output1[4]=t4564 + t4680 + t5045 + t5063*t5093;
  p_output1[5]=t4564 + t4680 + t5045 + t5063*t5171;
  p_output1[6]=3.4261*t1445 + t4887;
  p_output1[7]=t5280;
  p_output1[8]=t5296;
  p_output1[9]=t5306;
  p_output1[10]=t3988;
  p_output1[11]=t2945 - 3.4261*t4754;
  p_output1[12]=t5340;
  p_output1[13]=t5344;
  p_output1[14]=t5352 + t5367 + t5405 + t5063*t5420;
  p_output1[15]=t5352 + t5367 + t5405 + t5063*t5435;
  p_output1[16]=t5280;
  p_output1[17]=t4818 + t4887;
  p_output1[18]=t5093;
  p_output1[19]=t5456;
  p_output1[20]=t4446;
  p_output1[21]=t5340;
  p_output1[22]=-0.0389 - 3.4261*t5462 - 3.4261*t5471;
  p_output1[23]=t5483;
  p_output1[24]=t4585*t5093 + t4747*t5420;
  p_output1[25]=-0.5118593399999999*t4512*t5157 + t5063*(6.8522*t4357*t5113 + 6.8522*t4440*t5157) + t4585*t5171 + t4747*t5435;
  p_output1[26]=t5296;
  p_output1[27]=t5093;
  p_output1[28]=0.0389 + 3.4261*t5462 + 3.4261*t5471;
  p_output1[29]=t5575;
  p_output1[30]=t4457;
  p_output1[31]=t5344;
  p_output1[32]=t5483;
  p_output1[33]=-0.11537178539599996;
  p_output1[34]=t5583 + t5585;
  p_output1[35]=-0.5118593399999999*t5063*t5157 + t5583 + t5585;
  p_output1[36]=t5306;
  p_output1[37]=t5456;
  p_output1[38]=t5575;
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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

#include "J_dxDiscreteMap4_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap4_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

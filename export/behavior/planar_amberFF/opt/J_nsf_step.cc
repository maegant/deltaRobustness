/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:39 GMT-08:00
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
  double t1425;
  double t360;
  double t2407;
  double t2415;
  double t2841;
  double t3781;
  double t3816;
  double t3820;
  double t3925;
  double t3968;
  double t4055;
  double t4071;
  double t4097;
  double t4166;
  double t4192;
  double t4199;
  double t4225;
  double t4435;
  double t4450;
  double t4463;
  double t1850;
  double t4723;
  double t4748;
  double t4818;
  double t4819;
  double t4876;
  double t4884;
  double t4886;
  double t4892;
  double t4972;
  double t5013;
  double t5049;
  double t5105;
  double t5130;
  double t5155;
  double t5173;
  double t5175;
  double t5187;
  double t805;
  double t1242;
  double t1982;
  double t2194;
  double t3100;
  double t3385;
  double t4143;
  double t4162;
  double t5408;
  double t5429;
  double t5439;
  double t5455;
  double t5463;
  double t5488;
  double t5514;
  double t5520;
  double t5527;
  double t5544;
  double t5546;
  double t5552;
  double t4752;
  double t4774;
  double t5017;
  double t5045;
  double t5672;
  double t5684;
  double t5686;
  double t5697;
  double t5705;
  double t5708;
  double t5730;
  double t5736;
  double t5743;
  double t5776;
  double t5799;
  double t5804;
  double t5335;
  double t5344;
  double t5346;
  double t5360;
  double t5443;
  double t5509;
  double t5542;
  double t5553;
  double t5555;
  double t5571;
  double t5573;
  double t5583;
  double t5599;
  double t5608;
  double t5640;
  double t5644;
  double t5669;
  double t5690;
  double t5719;
  double t5751;
  double t5808;
  double t5814;
  double t5818;
  double t5833;
  double t5840;
  double t5846;
  double t5856;
  double t5857;
  double t5861;
  double t5870;
  double t5884;
  double t5916;
  double t6079;
  double t6092;
  double t6058;
  double t6059;
  double t6237;
  double t6268;
  double t6202;
  double t6208;
  double t2619;
  double t3921;
  double t4076;
  double t4206;
  double t4539;
  double t4554;
  double t4571;
  double t4615;
  double t4637;
  double t4653;
  double t4671;
  double t4687;
  double t4691;
  double t5949;
  double t5977;
  double t6018;
  double t6020;
  double t6031;
  double t6078;
  double t6099;
  double t6101;
  double t6119;
  double t6151;
  double t6158;
  double t6160;
  double t6162;
  double t6163;
  double t6167;
  double t6463;
  double t6469;
  double t6529;
  double t6532;
  double t6498;
  double t6546;
  double t4747;
  double t4877;
  double t5007;
  double t5139;
  double t5204;
  double t5219;
  double t5221;
  double t5226;
  double t5231;
  double t5249;
  double t5251;
  double t5269;
  double t5274;
  double t6171;
  double t6173;
  double t6188;
  double t6217;
  double t6279;
  double t6297;
  double t6302;
  double t6314;
  double t6317;
  double t6318;
  double t6348;
  double t6349;
  double t6376;
  double t6720;
  double t6722;
  double t6817;
  double t6826;
  double t6765;
  double t6877;
  t1425 = Sin(var1[2]);
  t360 = Cos(var1[3]);
  t2407 = Cos(var1[2]);
  t2415 = Sin(var1[3]);
  t2841 = Cos(var1[4]);
  t3781 = -1.*t360*t1425;
  t3816 = -1.*t2407*t2415;
  t3820 = t3781 + t3816;
  t3925 = -1.*t2407*t360;
  t3968 = t1425*t2415;
  t4055 = t3925 + t3968;
  t4071 = Sin(var1[4]);
  t4097 = Cos(var1[5]);
  t4166 = t2841*t3820;
  t4192 = t4055*t4071;
  t4199 = t4166 + t4192;
  t4225 = t2841*t4055;
  t4435 = -1.*t3820*t4071;
  t4450 = t4225 + t4435;
  t4463 = Sin(var1[5]);
  t1850 = Cos(var1[6]);
  t4723 = Sin(var1[6]);
  t4748 = Cos(var1[7]);
  t4818 = -1.*t1850*t1425;
  t4819 = -1.*t2407*t4723;
  t4876 = t4818 + t4819;
  t4884 = -1.*t2407*t1850;
  t4886 = t1425*t4723;
  t4892 = t4884 + t4886;
  t4972 = Sin(var1[7]);
  t5013 = Cos(var1[8]);
  t5049 = t4748*t4876;
  t5105 = t4892*t4972;
  t5130 = t5049 + t5105;
  t5155 = t4748*t4892;
  t5173 = -1.*t4876*t4972;
  t5175 = t5155 + t5173;
  t5187 = Sin(var1[8]);
  t805 = -1.*t360;
  t1242 = 1. + t805;
  t1982 = -1.*t1850;
  t2194 = 1. + t1982;
  t3100 = -1.*t2841;
  t3385 = 1. + t3100;
  t4143 = -1.*t4097;
  t4162 = 1. + t4143;
  t5408 = t360*t1425;
  t5429 = t2407*t2415;
  t5439 = t5408 + t5429;
  t5455 = t2407*t360;
  t5463 = -1.*t1425*t2415;
  t5488 = t5455 + t5463;
  t5514 = t2841*t5439;
  t5520 = t5488*t4071;
  t5527 = t5514 + t5520;
  t5544 = t2841*t5488;
  t5546 = -1.*t5439*t4071;
  t5552 = t5544 + t5546;
  t4752 = -1.*t4748;
  t4774 = 1. + t4752;
  t5017 = -1.*t5013;
  t5045 = 1. + t5017;
  t5672 = t1850*t1425;
  t5684 = t2407*t4723;
  t5686 = t5672 + t5684;
  t5697 = t2407*t1850;
  t5705 = -1.*t1425*t4723;
  t5708 = t5697 + t5705;
  t5730 = t4748*t5686;
  t5736 = t5708*t4972;
  t5743 = t5730 + t5736;
  t5776 = t4748*t5708;
  t5799 = -1.*t5686*t4972;
  t5804 = t5776 + t5799;
  t5335 = -1.*var2[1];
  t5344 = -0.4999*t1242*t1425;
  t5346 = 0.4999*t2194*t1425;
  t5360 = 0.4999*t2407*t2415;
  t5443 = -0.9063*t3385*t5439;
  t5509 = 0.9063*t5488*t4071;
  t5542 = -1.3127*t4162*t5527;
  t5553 = 1.3127*t5552*t4463;
  t5555 = t4097*t5527;
  t5571 = t5552*t4463;
  t5573 = t5555 + t5571;
  t5583 = -1.3127*t5573;
  t5599 = t4097*t5552;
  t5608 = -1.*t5527*t4463;
  t5640 = t5599 + t5608;
  t5644 = 0.06*t5640;
  t5669 = -0.4999*t2407*t4723;
  t5690 = 0.9063*t4774*t5686;
  t5719 = -0.9063*t5708*t4972;
  t5751 = 1.3127*t5045*t5743;
  t5808 = -1.3127*t5804*t5187;
  t5814 = t5013*t5743;
  t5818 = t5804*t5187;
  t5833 = t5814 + t5818;
  t5840 = 1.3127*t5833;
  t5846 = t5013*t5804;
  t5856 = -1.*t5743*t5187;
  t5857 = t5846 + t5856;
  t5861 = -0.06*t5857;
  t5870 = t5335 + t5344 + t5346 + t5360 + t5443 + t5509 + t5542 + t5553 + t5583 + t5644 + t5669 + t5690 + t5719 + t5751 + t5808 + t5840 + t5861;
  t5884 = -50.*t5870;
  t5916 = Power(2.71828182845905,t5884);
  t6079 = -1.*t5488*t4071;
  t6092 = t4166 + t6079;
  t6058 = t3820*t4071;
  t6059 = t5544 + t6058;
  t6237 = -1.*t5708*t4972;
  t6268 = t5049 + t6237;
  t6202 = t4876*t4972;
  t6208 = t5776 + t6202;
  t2619 = -0.4999*t2407*t2415;
  t3921 = -0.9063*t3385*t3820;
  t4076 = 0.9063*t4055*t4071;
  t4206 = -1.3127*t4162*t4199;
  t4539 = 1.3127*t4450*t4463;
  t4554 = t4097*t4199;
  t4571 = t4450*t4463;
  t4615 = t4554 + t4571;
  t4637 = -1.3127*t4615;
  t4653 = t4097*t4450;
  t4671 = -1.*t4199*t4463;
  t4687 = t4653 + t4671;
  t4691 = 0.06*t4687;
  t5949 = 1. + t5916;
  t5977 = Power(t5949,-2);
  t6018 = -0.4999*t1425*t2415;
  t6020 = -0.9063*t3385*t5488;
  t6031 = 0.9063*t3820*t4071;
  t6078 = -1.3127*t4162*t6059;
  t6099 = 1.3127*t6092*t4463;
  t6101 = t4097*t6092;
  t6119 = -1.*t6059*t4463;
  t6151 = t6101 + t6119;
  t6158 = 0.06*t6151;
  t6160 = t4097*t6059;
  t6162 = t6092*t4463;
  t6163 = t6160 + t6162;
  t6167 = -1.3127*t6163;
  t6463 = -1.*t2841*t5488;
  t6469 = t6463 + t4435;
  t6529 = -1.*t2841*t5439;
  t6532 = t6529 + t6079;
  t6498 = -1.*t6092*t4463;
  t6546 = -1.*t5552*t4463;
  t4747 = 0.4999*t2407*t4723;
  t4877 = 0.9063*t4774*t4876;
  t5007 = -0.9063*t4892*t4972;
  t5139 = 1.3127*t5045*t5130;
  t5204 = -1.3127*t5175*t5187;
  t5219 = t5013*t5130;
  t5221 = t5175*t5187;
  t5226 = t5219 + t5221;
  t5231 = 1.3127*t5226;
  t5249 = t5013*t5175;
  t5251 = -1.*t5130*t5187;
  t5269 = t5249 + t5251;
  t5274 = -0.06*t5269;
  t6171 = 0.4999*t1425*t4723;
  t6173 = 0.9063*t4774*t5708;
  t6188 = -0.9063*t4876*t4972;
  t6217 = 1.3127*t5045*t6208;
  t6279 = -1.3127*t6268*t5187;
  t6297 = t5013*t6268;
  t6302 = -1.*t6208*t5187;
  t6314 = t6297 + t6302;
  t6317 = -0.06*t6314;
  t6318 = t5013*t6208;
  t6348 = t6268*t5187;
  t6349 = t6318 + t6348;
  t6376 = 1.3127*t6349;
  t6720 = -1.*t4748*t5708;
  t6722 = t6720 + t5173;
  t6817 = -1.*t4748*t5686;
  t6826 = t6817 + t6237;
  t6765 = -1.*t6268*t5187;
  t6877 = -1.*t5804*t5187;
  p_output1[0]=0.4999*t1242*t1425 - 0.4999*t1425*t2194 + t2619 + t3921 + t4076 + t4206 + t4539 + t4637 + t4691 + t4747 + t4877 + t5007 + t5139 + t5204 + t5231 + t5274 - 50.*t5916*t5977*(-0.4999*t1242*t2407 + 0.4999*t2194*t2407 + t6018 + t6020 + t6031 + t6078 + t6099 + t6158 + t6167 + t6171 + t6173 + t6188 + t6217 + t6279 + t6317 + t6376)*var2[0];
  p_output1[1]=t2619 - 0.4999*t1425*t360 + t3921 + t4076 + t4206 + t4539 + t4637 + t4691 - 50.*t5916*t5977*(0.4999*t2407*t360 + t6018 + t6020 + t6031 + t6078 + t6099 + t6158 + t6167)*var2[0];
  p_output1[2]=0.9063*t2841*t3820 - 0.9063*t4071*t5488 - 1.3127*t4162*t6092 + 1.3127*t4463*t6469 - 1.3127*(t6101 + t4463*t6469) + 0.06*(t4097*t6469 + t6498) - 50.*t5916*t5977*(-0.9063*t4071*t5439 + 0.9063*t2841*t5488 - 1.3127*t4162*t5552 + 1.3127*t4463*t6532 - 1.3127*(t5599 + t4463*t6532) + 0.06*(t4097*t6532 + t6546))*var2[0];
  p_output1[3]=-1.3127*t4463*t6059 + 1.3127*t4097*t6092 - 1.3127*t6151 + 0.06*(-1.*t4097*t6059 + t6498) - 50.*t5916*t5977*(-1.3127*t4463*t5527 + 1.3127*t4097*t5552 - 1.3127*t5640 + 0.06*(-1.*t4097*t5527 + t6546))*var2[0];
  p_output1[4]=0.4999*t1425*t1850 + t4747 + t4877 + t5007 + t5139 + t5204 + t5231 + t5274 - 50.*t5916*t5977*(-0.4999*t1850*t2407 + t6171 + t6173 + t6188 + t6217 + t6279 + t6317 + t6376)*var2[0];
  p_output1[5]=-0.9063*t4748*t4876 + 0.9063*t4972*t5708 + 1.3127*t5045*t6268 - 1.3127*t5187*t6722 + 1.3127*(t6297 + t5187*t6722) - 0.06*(t5013*t6722 + t6765) - 50.*t5916*t5977*(0.9063*t4972*t5686 - 0.9063*t4748*t5708 + 1.3127*t5045*t5804 - 1.3127*t5187*t6826 + 1.3127*(t5846 + t5187*t6826) - 0.06*(t5013*t6826 + t6877))*var2[0];
  p_output1[6]=1.3127*t5187*t6208 - 1.3127*t5013*t6268 + 1.3127*t6314 - 0.06*(-1.*t5013*t6208 + t6765) - 50.*t5916*t5977*(1.3127*t5187*t5743 - 1.3127*t5013*t5804 + 1.3127*t5857 - 0.06*(-1.*t5013*t5743 + t6877))*var2[0];
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
    ( !(mrows == 1 && ncols == 2) && 
      !(mrows == 2 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_step.hh"

namespace RightSS2
{

void J_nsf_step_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

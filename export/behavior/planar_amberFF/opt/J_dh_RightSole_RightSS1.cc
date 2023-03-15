/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:27 GMT-08:00
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
  double t1065;
  double t422;
  double t593;
  double t1094;
  double t2207;
  double t725;
  double t1316;
  double t1980;
  double t257;
  double t2356;
  double t2394;
  double t2737;
  double t3377;
  double t2022;
  double t3164;
  double t3304;
  double t198;
  double t3381;
  double t3406;
  double t3418;
  double t3760;
  double t4791;
  double t4799;
  double t4914;
  double t4426;
  double t5171;
  double t5184;
  double t5253;
  double t5254;
  double t5258;
  double t5261;
  double t5148;
  double t5150;
  double t5152;
  double t5161;
  double t5278;
  double t5286;
  double t5290;
  double t5299;
  double t5304;
  double t5305;
  double t5336;
  double t5342;
  double t5353;
  double t5355;
  double t5368;
  double t5436;
  double t5438;
  double t5384;
  double t5386;
  double t5387;
  double t5397;
  double t5518;
  double t5521;
  double t5528;
  double t5529;
  double t5530;
  double t5531;
  double t5422;
  double t5430;
  double t5435;
  double t5444;
  double t5474;
  double t5478;
  double t5487;
  double t5633;
  double t5634;
  double t5636;
  double t5645;
  double t5649;
  double t5655;
  double t5665;
  double t5505;
  double t5515;
  double t5693;
  double t5706;
  double t5538;
  double t5561;
  double t5585;
  double t5786;
  double t5791;
  double t5806;
  double t5823;
  double t5831;
  double t5837;
  double t5650;
  double t5674;
  double t5677;
  double t5680;
  double t5682;
  double t5685;
  double t5687;
  double t5689;
  double t3323;
  double t4041;
  double t5462;
  double t5472;
  double t5129;
  double t5288;
  double t5316;
  double t5332;
  double t5926;
  double t5445;
  double t5457;
  double t5945;
  double t5911;
  double t5885;
  double t5890;
  double t5891;
  double t5602;
  double t5603;
  double t5609;
  double t5563;
  double t5568;
  double t5575;
  double t5918;
  double t5919;
  double t6016;
  double t6026;
  double t6037;
  double t6065;
  double t5848;
  double t5851;
  double t5852;
  double t5859;
  double t5860;
  double t5864;
  double t6074;
  double t6087;
  double t5956;
  double t5957;
  double t5713;
  t1065 = Cos(var1[7]);
  t422 = Cos(var1[8]);
  t593 = Sin(var1[7]);
  t1094 = Sin(var1[8]);
  t2207 = Cos(var1[6]);
  t725 = -1.*t422*t593;
  t1316 = -1.*t1065*t1094;
  t1980 = t725 + t1316;
  t257 = Sin(var1[6]);
  t2356 = t1065*t422;
  t2394 = -1.*t593*t1094;
  t2737 = t2356 + t2394;
  t3377 = Cos(var1[2]);
  t2022 = t257*t1980;
  t3164 = t2207*t2737;
  t3304 = t2022 + t3164;
  t198 = Sin(var1[2]);
  t3381 = t2207*t1980;
  t3406 = -1.*t257*t2737;
  t3418 = t3381 + t3406;
  t3760 = t3377*t3418;
  t4791 = -1.*t257*t1980;
  t4799 = -1.*t2207*t2737;
  t4914 = t4791 + t4799;
  t4426 = -1.*t198*t3418;
  t5171 = -1.*t422;
  t5184 = 1. + t5171;
  t5253 = -1.3127*t5184;
  t5254 = -1.3127*t422;
  t5258 = -0.06*t1094;
  t5261 = t5253 + t5254 + t5258;
  t5148 = -1.*t1065;
  t5150 = 1. + t5148;
  t5152 = -0.9063*t5150;
  t5161 = -0.06*t422*t593;
  t5278 = t1065*t5261;
  t5286 = t5152 + t5161 + t5278;
  t5290 = 0.06*t1065*t422;
  t5299 = 0.9063*t593;
  t5304 = t593*t5261;
  t5305 = t5290 + t5299 + t5304;
  t5336 = t422*t593;
  t5342 = t1065*t1094;
  t5353 = t5336 + t5342;
  t5355 = -1.*t257*t5353;
  t5368 = t5355 + t3164;
  t5436 = t2207*t5286;
  t5438 = -1.*t257*t5305;
  t5384 = 0.4999*t257;
  t5386 = t257*t5286;
  t5387 = t2207*t5305;
  t5397 = t5384 + t5386 + t5387;
  t5518 = 0.9063*t1065;
  t5521 = t5518 + t5161 + t5278;
  t5528 = -0.06*t1065*t422;
  t5529 = -0.9063*t593;
  t5530 = -1.*t593*t5261;
  t5531 = t5528 + t5529 + t5530;
  t5422 = -1.*t2207;
  t5430 = 1. + t5422;
  t5435 = -0.4999*t5430;
  t5444 = t5435 + t5436 + t5438;
  t5474 = t2207*t5353;
  t5478 = t257*t2737;
  t5487 = t5474 + t5478;
  t5633 = -1.*t1065*t422;
  t5634 = t593*t1094;
  t5636 = t5633 + t5634;
  t5645 = t2207*t5636;
  t5649 = t4791 + t5645;
  t5655 = t257*t5636;
  t5665 = t3381 + t5655;
  t5505 = 0.4999*t1980;
  t5515 = t5286*t1980;
  t5693 = -0.06*t422;
  t5706 = 0. + t5693;
  t5538 = t5305*t2737;
  t5561 = t5397*t3304;
  t5585 = t5444*t3418;
  t5786 = t5706*t593;
  t5791 = -0.06*t1065*t1094;
  t5806 = t5786 + t5791;
  t5823 = t1065*t5706;
  t5831 = 0.06*t593*t1094;
  t5837 = t5823 + t5831;
  t5650 = t198*t5649;
  t5674 = t3377*t5665;
  t5677 = t5650 + t5674;
  t5680 = var2[0]*t5677;
  t5682 = t3377*t5649;
  t5685 = -1.*t198*t5665;
  t5687 = t5682 + t5685;
  t5689 = var2[1]*t5687;
  t3323 = -1.*t198*t3304;
  t4041 = t3323 + t3760;
  t5462 = 0.4999*t2207;
  t5472 = t5462 + t5436 + t5438;
  t5129 = -0.4999*t257;
  t5288 = -1.*t257*t5286;
  t5316 = -1.*t2207*t5305;
  t5332 = t5129 + t5288 + t5316;
  t5926 = -1.*t198*t5368;
  t5445 = -1.*t2207*t5353;
  t5457 = t5445 + t3406;
  t5945 = t3377*t5368;
  t5911 = 0.4999*t2737;
  t5885 = t3377*t3304;
  t5890 = t198*t3418;
  t5891 = t5885 + t5890;
  t5602 = t2207*t5521;
  t5603 = t257*t5531;
  t5609 = t5602 + t5603;
  t5563 = -1.*t257*t5521;
  t5568 = t2207*t5531;
  t5575 = t5563 + t5568;
  t5918 = 0.9063*t422;
  t5919 = t422*t5261;
  t6016 = -1.*t5305*t1980;
  t6026 = -1.*t5286*t5636;
  t6037 = var2[1]*t4041;
  t6065 = var2[0]*t5891;
  t5848 = -1.*t257*t5806;
  t5851 = t2207*t5837;
  t5852 = t5848 + t5851;
  t5859 = t2207*t5806;
  t5860 = t257*t5837;
  t5864 = t5859 + t5860;
  t6074 = -1.*t5444*t5649;
  t6087 = -1.*t5397*t5665;
  t5956 = -1.*t198*t5487;
  t5957 = t5945 + t5956;
  t5713 = Power(t422,2);
  p_output1[0]=t4041*var2[0] + (-1.*t3304*t3377 + t4426)*var2[1];
  p_output1[1]=(t3760 + t198*t4914)*var2[0] + (t4426 + t3377*t4914)*var2[1] + (t5332*t5368 + t5368*t5397 + t5444*t5457 + t5472*t5487)*var2[2];
  p_output1[2]=t5680 + t5689 + (t5561 + t5368*t5575 + t5585 + t5487*t5609)*var2[2] + (t5505 + t5515 + t5353*t5521 + t2737*t5531 + t5538)*var2[6];
  p_output1[3]=t5680 + t5689 + (t5561 + t5585 + t5368*t5852 + t5487*t5864)*var2[2] + (t5505 + t5515 + t5538 + t5353*t5806 + t2737*t5837)*var2[6] + (-0.9063*t1094 - 0.06*Power(t1094,2) - 1.*t1094*t5261 + t422*t5706 + 0.06*t5713)*var2[7];
  p_output1[4]=t5891;
  p_output1[5]=t4041;
  p_output1[6]=t5368*t5444 + t5397*t5487;
  p_output1[7]=t2737*t5286 + t5305*t5353 + t5911;
  p_output1[8]=0.06*t1094*t422 + t5918 + t5919;
  p_output1[9]=t5957*var2[0] + (-1.*t3377*t5487 + t5926)*var2[1];
  p_output1[10]=(t198*t5457 + t5945)*var2[0] + (t3377*t5457 + t5926)*var2[1] + (-1.*t3418*t5332 - 1.*t3418*t5397 - 1.*t4914*t5444 - 1.*t3304*t5472)*var2[2];
  p_output1[11]=t6037 + t6065 + (-1.*t3418*t5575 - 1.*t3304*t5609 + t6074 + t6087)*var2[2] + (-1.*t2737*t5521 - 1.*t1980*t5531 + t5911 + t6016 + t6026)*var2[6];
  p_output1[12]=t6037 + t6065 + (-1.*t3418*t5852 - 1.*t3304*t5864 + t6074 + t6087)*var2[2] + (-1.*t2737*t5806 - 1.*t1980*t5837 + t5911 + t6016 + t6026)*var2[6] + (0.12*t1094*t422 + t1094*t5706 + t5918 + t5919)*var2[7];
  p_output1[13]=t198*t5368 + t3377*t5487;
  p_output1[14]=t5957;
  p_output1[15]=-1.*t3304*t5397 - 1.*t3418*t5444;
  p_output1[16]=-1.*t1980*t5286 - 1.*t2737*t5305 + 0.4999*t5353;
  p_output1[17]=0.9063*t1094 + t1094*t5261 - 0.06*t5713;
  p_output1[18]=-0.06;
  p_output1[19]=1.;
  p_output1[20]=1.;
  p_output1[21]=1.;
  p_output1[22]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightSole_RightSS1.hh"

namespace RightSS1
{

void J_dh_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

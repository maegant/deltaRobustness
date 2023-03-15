/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:25 GMT-08:00
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
  double t2611;
  double t2018;
  double t2455;
  double t2656;
  double t3887;
  double t2520;
  double t2691;
  double t2948;
  double t1358;
  double t4117;
  double t4156;
  double t4202;
  double t4449;
  double t4302;
  double t1034;
  double t5504;
  double t5517;
  double t5578;
  double t5255;
  double t5268;
  double t5279;
  double t5426;
  double t5427;
  double t5471;
  double t3256;
  double t4349;
  double t4439;
  double t4591;
  double t4883;
  double t4943;
  double t4948;
  double t4982;
  double t5589;
  double t5590;
  double t5600;
  double t5606;
  double t5611;
  double t5620;
  double t5627;
  double t5681;
  double t5950;
  double t6001;
  double t6008;
  double t6010;
  double t6068;
  double t6072;
  double t5922;
  double t5930;
  double t5932;
  double t5937;
  double t6332;
  double t6333;
  double t6342;
  double t6348;
  double t6358;
  double t6369;
  double t6305;
  double t6309;
  double t6316;
  double t6319;
  double t378;
  double t498;
  double t6275;
  double t6278;
  double t6280;
  double t5058;
  double t5075;
  double t5162;
  double t5478;
  double t5493;
  double t5503;
  double t6261;
  double t6265;
  double t6266;
  double t5749;
  double t5755;
  double t5797;
  double t5801;
  double t5830;
  double t5910;
  double t5917;
  double t5943;
  double t5948;
  double t6077;
  double t6081;
  double t6115;
  double t6138;
  double t6140;
  double t6144;
  double t6180;
  double t6185;
  double t6272;
  double t6281;
  double t6282;
  double t6252;
  double t6257;
  double t6286;
  double t6290;
  double t6321;
  double t6375;
  double t6378;
  double t6399;
  double t6409;
  double t6418;
  double t6518;
  double t6531;
  double t6532;
  double t6391;
  double t6421;
  double t6434;
  double t6110;
  double t6145;
  double t6154;
  double t6459;
  double t6460;
  double t6464;
  double t6581;
  double t6583;
  double t6586;
  double t6641;
  double t6643;
  double t6646;
  double t5721;
  double t5843;
  double t5867;
  double t6452;
  double t6454;
  double t6456;
  double t6566;
  double t6571;
  double t6574;
  double t6733;
  double t6734;
  double t6632;
  double t6635;
  double t6552;
  double t6558;
  t2611 = Cos(var2[7]);
  t2018 = Cos(var2[8]);
  t2455 = Sin(var2[7]);
  t2656 = Sin(var2[8]);
  t3887 = Cos(var2[6]);
  t2520 = t2018*t2455;
  t2691 = t2611*t2656;
  t2948 = t2520 + t2691;
  t1358 = Sin(var2[6]);
  t4117 = t2611*t2018;
  t4156 = -1.*t2455*t2656;
  t4202 = t4117 + t4156;
  t4449 = Cos(var2[2]);
  t4302 = t3887*t4202;
  t1034 = Sin(var2[2]);
  t5504 = -1.*t2018*t2455;
  t5517 = -1.*t2611*t2656;
  t5578 = t5504 + t5517;
  t5255 = -1.*t2018;
  t5268 = 1. + t5255;
  t5279 = -1.3127*t5268;
  t5426 = -1.3127*t2018;
  t5427 = -0.06*t2656;
  t5471 = t5279 + t5426 + t5427;
  t3256 = -1.*t1358*t2948;
  t4349 = t3256 + t4302;
  t4439 = t1034*t4349;
  t4591 = t3887*t2948;
  t4883 = t1358*t4202;
  t4943 = t4591 + t4883;
  t4948 = t4449*t4943;
  t4982 = t4439 + t4948;
  t5589 = t1358*t5578;
  t5590 = t5589 + t4302;
  t5600 = t4449*t5590;
  t5606 = t3887*t5578;
  t5611 = -1.*t1358*t4202;
  t5620 = t5606 + t5611;
  t5627 = t1034*t5620;
  t5681 = t5600 + t5627;
  t5950 = -1.*t2611;
  t6001 = 1. + t5950;
  t6008 = -0.9063*t6001;
  t6010 = -0.06*t2018*t2455;
  t6068 = t2611*t5471;
  t6072 = t6008 + t6010 + t6068;
  t5922 = 0.06*t2611*t2018;
  t5930 = 0.9063*t2455;
  t5932 = t2455*t5471;
  t5937 = t5922 + t5930 + t5932;
  t6332 = -1.*t3887;
  t6333 = 1. + t6332;
  t6342 = -0.4999*t6333;
  t6348 = t3887*t6072;
  t6358 = -1.*t1358*t5937;
  t6369 = t6342 + t6348 + t6358;
  t6305 = 0.4999*t1358;
  t6309 = t1358*t6072;
  t6316 = t3887*t5937;
  t6319 = t6305 + t6309 + t6316;
  t378 = -1.*var1[5];
  t498 = var3[8] + t378;
  t6275 = t4449*t4349;
  t6278 = -1.*t1034*t4943;
  t6280 = t6275 + t6278;
  t5058 = -1.*var1[4];
  t5075 = var3[7] + t5058;
  t5162 = 0.9063*t2018;
  t5478 = t2018*t5471;
  t5493 = 0.06*t2018*t2656;
  t5503 = t5162 + t5478 + t5493;
  t6261 = -1.*t1034*t5590;
  t6265 = t4449*t5620;
  t6266 = t6261 + t6265;
  t5749 = Power(t2018,2);
  t5755 = -0.06*t5749;
  t5797 = 0.9063*t2656;
  t5801 = t5471*t2656;
  t5830 = t5755 + t5797 + t5801;
  t5910 = -1.*var1[3];
  t5917 = var3[6] + t5910;
  t5943 = t5937*t2948;
  t5948 = 0.4999*t4202;
  t6077 = t6072*t4202;
  t6081 = t5943 + t5948 + t6077;
  t6115 = -1.*t6072*t5578;
  t6138 = 0.4999*t2948;
  t6140 = -1.*t5937*t4202;
  t6144 = t6115 + t6138 + t6140;
  t6180 = -1.*var1[0];
  t6185 = var3[0] + t6180;
  t6272 = 1.142857*t6266*t5681;
  t6281 = 1.142857*t4982*t6280;
  t6282 = t6272 + t6281;
  t6252 = -1.*var1[1];
  t6257 = var3[1] + t6252;
  t6286 = -1.*var1[2];
  t6290 = var3[2] + t6286;
  t6321 = -1.*t6319*t5590;
  t6375 = -1.*t6369*t5620;
  t6378 = t6321 + t6375;
  t6399 = t6369*t4349;
  t6409 = t6319*t4943;
  t6418 = t6399 + t6409;
  t6518 = 1.142857*t6378*t6280;
  t6531 = 1.142857*t6266*t6418;
  t6532 = t6518 + t6531;
  t6391 = 1.142857*t6378*t4982;
  t6421 = 1.142857*t5681*t6418;
  t6434 = t6391 + t6421;
  t6110 = 1.142857*t6081*t5681;
  t6145 = 1.142857*t6144*t4982;
  t6154 = t6110 + t6145;
  t6459 = 1.142857*t6081*t6266;
  t6460 = 1.142857*t6144*t6280;
  t6464 = t6459 + t6460;
  t6581 = 1.142857*t6144*t6378;
  t6583 = 1.142857*t6081*t6418;
  t6586 = 0.0085 + t6581 + t6583;
  t6641 = 1.142857*t5503*t6081;
  t6643 = 1.142857*t5830*t6144;
  t6646 = 0.0085 + t6641 + t6643;
  t5721 = 1.142857*t5503*t5681;
  t5843 = 1.142857*t5830*t4982;
  t5867 = t5721 + t5843;
  t6452 = 1.142857*t5503*t6266;
  t6454 = 1.142857*t5830*t6280;
  t6456 = t6452 + t6454;
  t6566 = 1.142857*t5830*t6378;
  t6571 = 1.142857*t5503*t6418;
  t6574 = 0.0085 + t6566 + t6571;
  t6733 = -0.06857142*t5830;
  t6734 = 0.0085 + t6733;
  t6632 = -0.06857142*t6144;
  t6635 = 0.0085 + t6632;
  t6552 = -0.06857142*t6378;
  t6558 = 0.0085 + t6552;
  p_output1[0]=-0.06857142*t498*t4982 + t5075*t5867 + t5917*t6154 + (1.142857*Power(t4982,2) + 1.142857*Power(t5681,2))*t6185 + t6257*t6282 + t6290*t6434;
  p_output1[1]=-0.06857142*t498*t6280 + t6257*(1.142857*Power(t6266,2) + 1.142857*Power(t6280,2)) + t6185*t6282 + t5075*t6456 + t5917*t6464 + t6290*t6532;
  p_output1[2]=t6290*(0.0085 + 1.142857*Power(t6378,2) + 1.142857*Power(t6418,2)) + t6185*t6434 + t6257*t6532 + t498*t6558 + t5075*t6574 + t5917*t6586;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t5917*(0.0085 + 1.142857*Power(t6081,2) + 1.142857*Power(t6144,2)) + t6154*t6185 + t6257*t6464 + t6290*t6586 + t498*t6635 + t5075*t6646;
  p_output1[7]=t5075*(0.0085 + 1.142857*Power(t5503,2) + 1.142857*Power(t5830,2)) + t5867*t6185 + t6257*t6456 + t6290*t6574 + t5917*t6646 + t498*t6734;
  p_output1[8]=0.0126142852*t498 - 0.06857142*t4982*t6185 - 0.06857142*t6257*t6280 + t6290*t6558 + t5917*t6635 + t5075*t6734;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap7_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap7_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

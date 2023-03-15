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
  double t2799;
  double t692;
  double t1301;
  double t3646;
  double t398;
  double t2206;
  double t3648;
  double t3657;
  double t3887;
  double t4117;
  double t4202;
  double t4227;
  double t4271;
  double t4302;
  double t4349;
  double t4911;
  double t4922;
  double t4943;
  double t4948;
  double t4982;
  double t5503;
  double t5504;
  double t5568;
  double t5578;
  double t5589;
  double t5590;
  double t5943;
  double t5948;
  double t5950;
  double t5965;
  double t5993;
  double t5999;
  double t6001;
  double t6008;
  double t6010;
  double t6015;
  double t332;
  double t378;
  double t5721;
  double t5739;
  double t5749;
  double t4519;
  double t4591;
  double t5279;
  double t5471;
  double t5478;
  double t5493;
  double t5781;
  double t5797;
  double t4883;
  double t5047;
  double t5075;
  double t5162;
  double t5255;
  double t5664;
  double t5681;
  double t5860;
  double t5867;
  double t5755;
  double t5801;
  double t5830;
  double t5936;
  double t5937;
  double t5980;
  double t6027;
  double t6068;
  double t6077;
  double t6081;
  double t6110;
  double t6072;
  double t6115;
  double t6138;
  double t6261;
  double t6265;
  double t6266;
  double t6154;
  double t6168;
  double t6180;
  double t5268;
  double t5606;
  double t5620;
  double t6284;
  double t6286;
  double t6290;
  double t6375;
  double t6378;
  double t6280;
  double t6281;
  t2799 = Cos(var2[6]);
  t692 = Cos(var2[7]);
  t1301 = Sin(var2[6]);
  t3646 = Sin(var2[7]);
  t398 = Sin(var2[2]);
  t2206 = -1.*t692*t1301;
  t3648 = -1.*t2799*t3646;
  t3657 = t2206 + t3648;
  t3887 = t398*t3657;
  t4117 = Cos(var2[2]);
  t4202 = t2799*t692;
  t4227 = -1.*t1301*t3646;
  t4271 = t4202 + t4227;
  t4302 = t4117*t4271;
  t4349 = t3887 + t4302;
  t4911 = -1.*t692;
  t4922 = 1. + t4911;
  t4943 = -0.9063*t4922;
  t4948 = -1.0567*t692;
  t4982 = t4943 + t4948;
  t5503 = t692*t1301;
  t5504 = t2799*t3646;
  t5568 = t5503 + t5504;
  t5578 = t4117*t5568;
  t5589 = t398*t4271;
  t5590 = t5578 + t5589;
  t5943 = 0.4999*t1301;
  t5948 = t4982*t1301;
  t5950 = -0.15039999999999998*t2799*t3646;
  t5965 = t5943 + t5948 + t5950;
  t5993 = -1.*t2799;
  t5999 = 1. + t5993;
  t6001 = -0.4999*t5999;
  t6008 = t2799*t4982;
  t6010 = 0.15039999999999998*t1301*t3646;
  t6015 = t6001 + t6008 + t6010;
  t332 = -1.*var1[4];
  t378 = var3[7] + t332;
  t5721 = t4117*t3657;
  t5739 = -1.*t398*t4271;
  t5749 = t5721 + t5739;
  t4519 = -1.*var1[3];
  t4591 = var3[6] + t4519;
  t5279 = 0.4999*t3646;
  t5471 = t4982*t3646;
  t5478 = 0.15039999999999998*t692*t3646;
  t5493 = t5279 + t5471 + t5478;
  t5781 = -1.*t398*t5568;
  t5797 = t5781 + t4302;
  t4883 = 0.4999*t692;
  t5047 = t4982*t692;
  t5075 = Power(t3646,2);
  t5162 = -0.15039999999999998*t5075;
  t5255 = t4883 + t5047 + t5162;
  t5664 = -1.*var1[1];
  t5681 = var3[1] + t5664;
  t5860 = -1.*var1[0];
  t5867 = var3[0] + t5860;
  t5755 = 3.5899*t4349*t5749;
  t5801 = 3.5899*t5797*t5590;
  t5830 = t5755 + t5801;
  t5936 = -1.*var1[2];
  t5937 = var3[2] + t5936;
  t5980 = -1.*t5965*t4271;
  t6027 = -1.*t3657*t6015;
  t6068 = t5980 + t6027;
  t6077 = t5965*t5568;
  t6081 = t4271*t6015;
  t6110 = t6077 + t6081;
  t6072 = 3.5899*t5590*t6068;
  t6115 = 3.5899*t4349*t6110;
  t6138 = t6072 + t6115;
  t6261 = 3.5899*t5797*t6068;
  t6265 = 3.5899*t5749*t6110;
  t6266 = t6261 + t6265;
  t6154 = 3.5899*t5493*t5797;
  t6168 = 3.5899*t5255*t5749;
  t6180 = t6154 + t6168;
  t5268 = 3.5899*t5255*t4349;
  t5606 = 3.5899*t5493*t5590;
  t5620 = t5268 + t5606;
  t6284 = 3.5899*t5493*t6068;
  t6286 = 3.5899*t5255*t6110;
  t6290 = 0.0378 + t6284 + t6286;
  t6375 = -0.5399209599999999*t5255;
  t6378 = 0.0378 + t6375;
  t6280 = -0.5399209599999999*t6110;
  t6281 = 0.0378 + t6280;
  p_output1[0]=-0.5399209599999999*t378*t4349 + t4591*t5620 + t5681*t5830 + (3.5899*Power(t4349,2) + 3.5899*Power(t5590,2))*t5867 + t5937*t6138;
  p_output1[1]=-0.5399209599999999*t378*t5749 + t5681*(3.5899*Power(t5749,2) + 3.5899*Power(t5797,2)) + t5830*t5867 + t4591*t6180 + t5937*t6266;
  p_output1[2]=t5937*(0.0378 + 3.5899*Power(t6068,2) + 3.5899*Power(t6110,2)) + t5867*t6138 + t5681*t6266 + t378*t6281 + t4591*t6290;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4591*(0.0378 + 3.5899*Power(t5255,2) + 3.5899*Power(t5493,2)) + t5620*t5867 + t5681*t6180 + t5937*t6290 + t378*t6378;
  p_output1[7]=0.11900411238399997*t378 - 0.5399209599999999*t5681*t5749 - 0.5399209599999999*t4349*t5867 + t5937*t6281 + t4591*t6378;
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

#include "dxDiscreteMap6_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap6_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:23 GMT-08:00
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
  double t3035;
  double t2248;
  double t2584;
  double t3042;
  double t3625;
  double t2799;
  double t3151;
  double t3219;
  double t1813;
  double t3657;
  double t3736;
  double t3909;
  double t4202;
  double t3984;
  double t1343;
  double t5080;
  double t5116;
  double t5158;
  double t4678;
  double t4855;
  double t4911;
  double t4922;
  double t4948;
  double t4982;
  double t3393;
  double t4005;
  double t4117;
  double t4227;
  double t4271;
  double t4301;
  double t4302;
  double t4349;
  double t5162;
  double t5180;
  double t5255;
  double t5268;
  double t5417;
  double t5434;
  double t5471;
  double t5478;
  double t5766;
  double t5779;
  double t5781;
  double t5797;
  double t5801;
  double t5815;
  double t5664;
  double t5681;
  double t5721;
  double t5732;
  double t6098;
  double t6109;
  double t6110;
  double t6115;
  double t6121;
  double t6133;
  double t6072;
  double t6077;
  double t6081;
  double t6085;
  double t1284;
  double t1301;
  double t6001;
  double t6005;
  double t6008;
  double t4570;
  double t4591;
  double t4597;
  double t5047;
  double t5073;
  double t5075;
  double t5967;
  double t5980;
  double t5993;
  double t5503;
  double t5504;
  double t5568;
  double t5578;
  double t5589;
  double t5622;
  double t5627;
  double t5749;
  double t5755;
  double t5830;
  double t5843;
  double t5862;
  double t5867;
  double t5887;
  double t5893;
  double t5928;
  double t5930;
  double t5999;
  double t6010;
  double t6015;
  double t5952;
  double t5965;
  double t6029;
  double t6068;
  double t6091;
  double t6135;
  double t6138;
  double t6144;
  double t6145;
  double t6154;
  double t6290;
  double t6305;
  double t6309;
  double t6140;
  double t6168;
  double t6180;
  double t5860;
  double t5910;
  double t5917;
  double t6257;
  double t6261;
  double t6265;
  double t6378;
  double t6391;
  double t6399;
  double t6464;
  double t6468;
  double t6471;
  double t5493;
  double t5590;
  double t5606;
  double t6227;
  double t6231;
  double t6248;
  double t6348;
  double t6358;
  double t6369;
  double t6558;
  double t6561;
  double t6458;
  double t6459;
  double t6321;
  double t6333;
  t3035 = Cos(var2[4]);
  t2248 = Cos(var2[5]);
  t2584 = Sin(var2[4]);
  t3042 = Sin(var2[5]);
  t3625 = Cos(var2[3]);
  t2799 = t2248*t2584;
  t3151 = t3035*t3042;
  t3219 = t2799 + t3151;
  t1813 = Sin(var2[3]);
  t3657 = t3035*t2248;
  t3736 = -1.*t2584*t3042;
  t3909 = t3657 + t3736;
  t4202 = Cos(var2[2]);
  t3984 = t3625*t3909;
  t1343 = Sin(var2[2]);
  t5080 = -1.*t2248*t2584;
  t5116 = -1.*t3035*t3042;
  t5158 = t5080 + t5116;
  t4678 = -1.*t2248;
  t4855 = 1. + t4678;
  t4911 = -1.3127*t4855;
  t4922 = -1.3127*t2248;
  t4948 = -0.06*t3042;
  t4982 = t4911 + t4922 + t4948;
  t3393 = -1.*t1813*t3219;
  t4005 = t3393 + t3984;
  t4117 = t1343*t4005;
  t4227 = t3625*t3219;
  t4271 = t1813*t3909;
  t4301 = t4227 + t4271;
  t4302 = t4202*t4301;
  t4349 = t4117 + t4302;
  t5162 = t1813*t5158;
  t5180 = t5162 + t3984;
  t5255 = t4202*t5180;
  t5268 = t3625*t5158;
  t5417 = -1.*t1813*t3909;
  t5434 = t5268 + t5417;
  t5471 = t1343*t5434;
  t5478 = t5255 + t5471;
  t5766 = -1.*t3035;
  t5779 = 1. + t5766;
  t5781 = -0.9063*t5779;
  t5797 = -0.06*t2248*t2584;
  t5801 = t3035*t4982;
  t5815 = t5781 + t5797 + t5801;
  t5664 = 0.06*t3035*t2248;
  t5681 = 0.9063*t2584;
  t5721 = t2584*t4982;
  t5732 = t5664 + t5681 + t5721;
  t6098 = -1.*t3625;
  t6109 = 1. + t6098;
  t6110 = -0.4999*t6109;
  t6115 = t3625*t5815;
  t6121 = -1.*t1813*t5732;
  t6133 = t6110 + t6115 + t6121;
  t6072 = 0.4999*t1813;
  t6077 = t1813*t5815;
  t6081 = t3625*t5732;
  t6085 = t6072 + t6077 + t6081;
  t1284 = -1.*var1[8];
  t1301 = var3[5] + t1284;
  t6001 = t4202*t4005;
  t6005 = -1.*t1343*t4301;
  t6008 = t6001 + t6005;
  t4570 = -1.*var1[7];
  t4591 = var3[4] + t4570;
  t4597 = 0.9063*t2248;
  t5047 = t2248*t4982;
  t5073 = 0.06*t2248*t3042;
  t5075 = t4597 + t5047 + t5073;
  t5967 = -1.*t1343*t5180;
  t5980 = t4202*t5434;
  t5993 = t5967 + t5980;
  t5503 = Power(t2248,2);
  t5504 = -0.06*t5503;
  t5568 = 0.9063*t3042;
  t5578 = t4982*t3042;
  t5589 = t5504 + t5568 + t5578;
  t5622 = -1.*var1[6];
  t5627 = var3[3] + t5622;
  t5749 = t5732*t3219;
  t5755 = 0.4999*t3909;
  t5830 = t5815*t3909;
  t5843 = t5749 + t5755 + t5830;
  t5862 = -1.*t5815*t5158;
  t5867 = 0.4999*t3219;
  t5887 = -1.*t5732*t3909;
  t5893 = t5862 + t5867 + t5887;
  t5928 = -1.*var1[0];
  t5930 = var3[0] + t5928;
  t5999 = 1.142857*t5993*t5478;
  t6010 = 1.142857*t4349*t6008;
  t6015 = t5999 + t6010;
  t5952 = -1.*var1[1];
  t5965 = var3[1] + t5952;
  t6029 = -1.*var1[2];
  t6068 = var3[2] + t6029;
  t6091 = -1.*t6085*t5180;
  t6135 = -1.*t6133*t5434;
  t6138 = t6091 + t6135;
  t6144 = t6133*t4005;
  t6145 = t6085*t4301;
  t6154 = t6144 + t6145;
  t6290 = 1.142857*t6138*t6008;
  t6305 = 1.142857*t5993*t6154;
  t6309 = t6290 + t6305;
  t6140 = 1.142857*t6138*t4349;
  t6168 = 1.142857*t5478*t6154;
  t6180 = t6140 + t6168;
  t5860 = 1.142857*t5843*t5478;
  t5910 = 1.142857*t5893*t4349;
  t5917 = t5860 + t5910;
  t6257 = 1.142857*t5843*t5993;
  t6261 = 1.142857*t5893*t6008;
  t6265 = t6257 + t6261;
  t6378 = 1.142857*t5893*t6138;
  t6391 = 1.142857*t5843*t6154;
  t6399 = 0.0085 + t6378 + t6391;
  t6464 = 1.142857*t5075*t5843;
  t6468 = 1.142857*t5589*t5893;
  t6471 = 0.0085 + t6464 + t6468;
  t5493 = 1.142857*t5075*t5478;
  t5590 = 1.142857*t5589*t4349;
  t5606 = t5493 + t5590;
  t6227 = 1.142857*t5075*t5993;
  t6231 = 1.142857*t5589*t6008;
  t6248 = t6227 + t6231;
  t6348 = 1.142857*t5589*t6138;
  t6358 = 1.142857*t5075*t6154;
  t6369 = 0.0085 + t6348 + t6358;
  t6558 = -0.06857142*t5589;
  t6561 = 0.0085 + t6558;
  t6458 = -0.06857142*t5893;
  t6459 = 0.0085 + t6458;
  t6321 = -0.06857142*t6138;
  t6333 = 0.0085 + t6321;
  p_output1[0]=-0.06857142*t1301*t4349 + t4591*t5606 + t5627*t5917 + (1.142857*Power(t4349,2) + 1.142857*Power(t5478,2))*t5930 + t5965*t6015 + t6068*t6180;
  p_output1[1]=-0.06857142*t1301*t6008 + t5965*(1.142857*Power(t5993,2) + 1.142857*Power(t6008,2)) + t5930*t6015 + t4591*t6248 + t5627*t6265 + t6068*t6309;
  p_output1[2]=t6068*(0.0085 + 1.142857*Power(t6138,2) + 1.142857*Power(t6154,2)) + t5930*t6180 + t5965*t6309 + t1301*t6333 + t4591*t6369 + t5627*t6399;
  p_output1[3]=t5627*(0.0085 + 1.142857*Power(t5843,2) + 1.142857*Power(t5893,2)) + t5917*t5930 + t5965*t6265 + t6068*t6399 + t1301*t6459 + t4591*t6471;
  p_output1[4]=t4591*(0.0085 + 1.142857*Power(t5075,2) + 1.142857*Power(t5589,2)) + t5606*t5930 + t5965*t6248 + t6068*t6369 + t5627*t6471 + t1301*t6561;
  p_output1[5]=0.0126142852*t1301 - 0.06857142*t4349*t5930 - 0.06857142*t5965*t6008 + t6068*t6333 + t5627*t6459 + t4591*t6561;
  p_output1[6]=0;
  p_output1[7]=0;
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

#include "dxDiscreteMap4_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap4_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

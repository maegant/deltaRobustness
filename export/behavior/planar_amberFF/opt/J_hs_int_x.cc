/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:04 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t20;
  double t124;
  double t228;
  double t816;
  double t1154;
  double t1288;
  double t1317;
  double t1648;
  double t1658;
  double t1489;
  double t1819;
  double t1841;
  double t1881;
  double t1901;
  double t2193;
  double t2205;
  double t2375;
  double t2398;
  double t2459;
  double t2605;
  double t2789;
  double t2828;
  double t2957;
  double t3039;
  double t3129;
  double t3389;
  double t3528;
  double t3539;
  double t3495;
  double t3498;
  double t3652;
  double t3686;
  double t3727;
  double t3740;
  double t3898;
  double t3908;
  double t3980;
  double t4120;
  double t4180;
  double t4217;
  double t4257;
  double t4350;
  double t4388;
  double t4412;
  t20 = 4.*var5[0];
  t124 = t20 + var7[0] + var3[0];
  t228 = -1. + var8[0];
  t816 = 1/t228;
  t1154 = -1.*var1[0];
  t1288 = t1154 + var1[1];
  t1317 = -0.333333333333333*t816*t1288;
  t1648 = 4.*var5[1];
  t1658 = t1648 + var7[1] + var3[1];
  t1489 = -1.33333333333333*t816*t1288;
  t1819 = 4.*var5[2];
  t1841 = t1819 + var7[2] + var3[2];
  t1881 = 4.*var5[3];
  t1901 = t1881 + var7[3] + var3[3];
  t2193 = 4.*var5[4];
  t2205 = t2193 + var7[4] + var3[4];
  t2375 = 4.*var5[5];
  t2398 = t2375 + var7[5] + var3[5];
  t2459 = 4.*var5[6];
  t2605 = t2459 + var7[6] + var3[6];
  t2789 = 4.*var5[7];
  t2828 = t2789 + var7[7] + var3[7];
  t2957 = 4.*var5[8];
  t3039 = t2957 + var7[8] + var3[8];
  t3129 = -1.*var7[0];
  t3389 = t3129 + var3[0];
  t3528 = -1.*var7[1];
  t3539 = t3528 + var3[1];
  t3495 = -0.25*t816*t1288;
  t3498 = 0.25*t816*t1288;
  t3652 = -1.*var7[2];
  t3686 = t3652 + var3[2];
  t3727 = -1.*var7[3];
  t3740 = t3727 + var3[3];
  t3898 = -1.*var7[4];
  t3908 = t3898 + var3[4];
  t3980 = -1.*var7[5];
  t4120 = t3980 + var3[5];
  t4180 = -1.*var7[6];
  t4217 = t4180 + var3[6];
  t4257 = -1.*var7[7];
  t4350 = t4257 + var3[7];
  t4388 = -1.*var7[8];
  t4412 = t4388 + var3[8];
  p_output1[0]=0.333333333333333*t124*t816;
  p_output1[1]=-0.333333333333333*t124*t816;
  p_output1[2]=-1.;
  p_output1[3]=t1317;
  p_output1[4]=t1489;
  p_output1[5]=1.;
  p_output1[6]=t1317;
  p_output1[7]=0.333333333333333*t1658*t816;
  p_output1[8]=-0.333333333333333*t1658*t816;
  p_output1[9]=-1.;
  p_output1[10]=t1317;
  p_output1[11]=t1489;
  p_output1[12]=1.;
  p_output1[13]=t1317;
  p_output1[14]=0.333333333333333*t1841*t816;
  p_output1[15]=-0.333333333333333*t1841*t816;
  p_output1[16]=-1.;
  p_output1[17]=t1317;
  p_output1[18]=t1489;
  p_output1[19]=1.;
  p_output1[20]=t1317;
  p_output1[21]=0.333333333333333*t1901*t816;
  p_output1[22]=-0.333333333333333*t1901*t816;
  p_output1[23]=-1.;
  p_output1[24]=t1317;
  p_output1[25]=t1489;
  p_output1[26]=1.;
  p_output1[27]=t1317;
  p_output1[28]=0.333333333333333*t2205*t816;
  p_output1[29]=-0.333333333333333*t2205*t816;
  p_output1[30]=-1.;
  p_output1[31]=t1317;
  p_output1[32]=t1489;
  p_output1[33]=1.;
  p_output1[34]=t1317;
  p_output1[35]=0.333333333333333*t2398*t816;
  p_output1[36]=-0.333333333333333*t2398*t816;
  p_output1[37]=-1.;
  p_output1[38]=t1317;
  p_output1[39]=t1489;
  p_output1[40]=1.;
  p_output1[41]=t1317;
  p_output1[42]=0.333333333333333*t2605*t816;
  p_output1[43]=-0.333333333333333*t2605*t816;
  p_output1[44]=-1.;
  p_output1[45]=t1317;
  p_output1[46]=t1489;
  p_output1[47]=1.;
  p_output1[48]=t1317;
  p_output1[49]=0.333333333333333*t2828*t816;
  p_output1[50]=-0.333333333333333*t2828*t816;
  p_output1[51]=-1.;
  p_output1[52]=t1317;
  p_output1[53]=t1489;
  p_output1[54]=1.;
  p_output1[55]=t1317;
  p_output1[56]=0.333333333333333*t3039*t816;
  p_output1[57]=-0.333333333333333*t3039*t816;
  p_output1[58]=-1.;
  p_output1[59]=t1317;
  p_output1[60]=t1489;
  p_output1[61]=1.;
  p_output1[62]=t1317;
  p_output1[63]=0.25*t3389*t816;
  p_output1[64]=-0.25*t3389*t816;
  p_output1[65]=-0.5;
  p_output1[66]=t3495;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t3498;
  p_output1[70]=0.25*t3539*t816;
  p_output1[71]=-0.25*t3539*t816;
  p_output1[72]=-0.5;
  p_output1[73]=t3495;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t3498;
  p_output1[77]=0.25*t3686*t816;
  p_output1[78]=-0.25*t3686*t816;
  p_output1[79]=-0.5;
  p_output1[80]=t3495;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t3498;
  p_output1[84]=0.25*t3740*t816;
  p_output1[85]=-0.25*t3740*t816;
  p_output1[86]=-0.5;
  p_output1[87]=t3495;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t3498;
  p_output1[91]=0.25*t3908*t816;
  p_output1[92]=-0.25*t3908*t816;
  p_output1[93]=-0.5;
  p_output1[94]=t3495;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t3498;
  p_output1[98]=0.25*t4120*t816;
  p_output1[99]=-0.25*t4120*t816;
  p_output1[100]=-0.5;
  p_output1[101]=t3495;
  p_output1[102]=1.;
  p_output1[103]=-0.5;
  p_output1[104]=t3498;
  p_output1[105]=0.25*t4217*t816;
  p_output1[106]=-0.25*t4217*t816;
  p_output1[107]=-0.5;
  p_output1[108]=t3495;
  p_output1[109]=1.;
  p_output1[110]=-0.5;
  p_output1[111]=t3498;
  p_output1[112]=0.25*t4350*t816;
  p_output1[113]=-0.25*t4350*t816;
  p_output1[114]=-0.5;
  p_output1[115]=t3495;
  p_output1[116]=1.;
  p_output1[117]=-0.5;
  p_output1[118]=t3498;
  p_output1[119]=0.25*t4412*t816;
  p_output1[120]=-0.25*t4412*t816;
  p_output1[121]=-0.5;
  p_output1[122]=t3495;
  p_output1[123]=1.;
  p_output1[124]=-0.5;
  p_output1[125]=t3498;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 126, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace RightSS2
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE

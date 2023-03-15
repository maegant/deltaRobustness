/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:07 GMT-08:00
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
  double t308;
  double t358;
  double t621;
  double t691;
  double t948;
  double t958;
  double t1118;
  double t1745;
  double t1778;
  double t1638;
  double t1876;
  double t1877;
  double t1939;
  double t1944;
  double t2156;
  double t2175;
  double t2351;
  double t2353;
  double t2509;
  double t2535;
  double t2669;
  double t2830;
  double t2900;
  double t2947;
  double t3138;
  double t3187;
  double t3395;
  double t3422;
  double t3372;
  double t3391;
  double t3606;
  double t3640;
  double t3801;
  double t3843;
  double t3975;
  double t4090;
  double t4146;
  double t4174;
  double t4365;
  double t4369;
  double t4558;
  double t4579;
  double t4703;
  double t4704;
  t308 = 4.*var5[0];
  t358 = var3[0] + t308 + var7[0];
  t621 = -1. + var8[0];
  t691 = 1/t621;
  t948 = -1.*var1[0];
  t958 = t948 + var1[1];
  t1118 = -0.333333333333333*t691*t958;
  t1745 = 4.*var5[1];
  t1778 = var3[1] + t1745 + var7[1];
  t1638 = -1.33333333333333*t691*t958;
  t1876 = 4.*var5[2];
  t1877 = var3[2] + t1876 + var7[2];
  t1939 = 4.*var5[3];
  t1944 = var3[3] + t1939 + var7[3];
  t2156 = 4.*var5[4];
  t2175 = var3[4] + t2156 + var7[4];
  t2351 = 4.*var5[5];
  t2353 = var3[5] + t2351 + var7[5];
  t2509 = 4.*var5[6];
  t2535 = var3[6] + t2509 + var7[6];
  t2669 = 4.*var5[7];
  t2830 = var3[7] + t2669 + var7[7];
  t2900 = 4.*var5[8];
  t2947 = var3[8] + t2900 + var7[8];
  t3138 = -1.*var7[0];
  t3187 = var3[0] + t3138;
  t3395 = -1.*var7[1];
  t3422 = var3[1] + t3395;
  t3372 = -0.25*t691*t958;
  t3391 = 0.25*t691*t958;
  t3606 = -1.*var7[2];
  t3640 = var3[2] + t3606;
  t3801 = -1.*var7[3];
  t3843 = var3[3] + t3801;
  t3975 = -1.*var7[4];
  t4090 = var3[4] + t3975;
  t4146 = -1.*var7[5];
  t4174 = var3[5] + t4146;
  t4365 = -1.*var7[6];
  t4369 = var3[6] + t4365;
  t4558 = -1.*var7[7];
  t4579 = var3[7] + t4558;
  t4703 = -1.*var7[8];
  t4704 = var3[8] + t4703;
  p_output1[0]=0.333333333333333*t358*t691;
  p_output1[1]=-0.333333333333333*t358*t691;
  p_output1[2]=-1.;
  p_output1[3]=t1118;
  p_output1[4]=t1638;
  p_output1[5]=1.;
  p_output1[6]=t1118;
  p_output1[7]=0.333333333333333*t1778*t691;
  p_output1[8]=-0.333333333333333*t1778*t691;
  p_output1[9]=-1.;
  p_output1[10]=t1118;
  p_output1[11]=t1638;
  p_output1[12]=1.;
  p_output1[13]=t1118;
  p_output1[14]=0.333333333333333*t1877*t691;
  p_output1[15]=-0.333333333333333*t1877*t691;
  p_output1[16]=-1.;
  p_output1[17]=t1118;
  p_output1[18]=t1638;
  p_output1[19]=1.;
  p_output1[20]=t1118;
  p_output1[21]=0.333333333333333*t1944*t691;
  p_output1[22]=-0.333333333333333*t1944*t691;
  p_output1[23]=-1.;
  p_output1[24]=t1118;
  p_output1[25]=t1638;
  p_output1[26]=1.;
  p_output1[27]=t1118;
  p_output1[28]=0.333333333333333*t2175*t691;
  p_output1[29]=-0.333333333333333*t2175*t691;
  p_output1[30]=-1.;
  p_output1[31]=t1118;
  p_output1[32]=t1638;
  p_output1[33]=1.;
  p_output1[34]=t1118;
  p_output1[35]=0.333333333333333*t2353*t691;
  p_output1[36]=-0.333333333333333*t2353*t691;
  p_output1[37]=-1.;
  p_output1[38]=t1118;
  p_output1[39]=t1638;
  p_output1[40]=1.;
  p_output1[41]=t1118;
  p_output1[42]=0.333333333333333*t2535*t691;
  p_output1[43]=-0.333333333333333*t2535*t691;
  p_output1[44]=-1.;
  p_output1[45]=t1118;
  p_output1[46]=t1638;
  p_output1[47]=1.;
  p_output1[48]=t1118;
  p_output1[49]=0.333333333333333*t2830*t691;
  p_output1[50]=-0.333333333333333*t2830*t691;
  p_output1[51]=-1.;
  p_output1[52]=t1118;
  p_output1[53]=t1638;
  p_output1[54]=1.;
  p_output1[55]=t1118;
  p_output1[56]=0.333333333333333*t2947*t691;
  p_output1[57]=-0.333333333333333*t2947*t691;
  p_output1[58]=-1.;
  p_output1[59]=t1118;
  p_output1[60]=t1638;
  p_output1[61]=1.;
  p_output1[62]=t1118;
  p_output1[63]=0.25*t3187*t691;
  p_output1[64]=-0.25*t3187*t691;
  p_output1[65]=-0.5;
  p_output1[66]=t3372;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t3391;
  p_output1[70]=0.25*t3422*t691;
  p_output1[71]=-0.25*t3422*t691;
  p_output1[72]=-0.5;
  p_output1[73]=t3372;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t3391;
  p_output1[77]=0.25*t3640*t691;
  p_output1[78]=-0.25*t3640*t691;
  p_output1[79]=-0.5;
  p_output1[80]=t3372;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t3391;
  p_output1[84]=0.25*t3843*t691;
  p_output1[85]=-0.25*t3843*t691;
  p_output1[86]=-0.5;
  p_output1[87]=t3372;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t3391;
  p_output1[91]=0.25*t4090*t691;
  p_output1[92]=-0.25*t4090*t691;
  p_output1[93]=-0.5;
  p_output1[94]=t3372;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t3391;
  p_output1[98]=0.25*t4174*t691;
  p_output1[99]=-0.25*t4174*t691;
  p_output1[100]=-0.5;
  p_output1[101]=t3372;
  p_output1[102]=1.;
  p_output1[103]=-0.5;
  p_output1[104]=t3391;
  p_output1[105]=0.25*t4369*t691;
  p_output1[106]=-0.25*t4369*t691;
  p_output1[107]=-0.5;
  p_output1[108]=t3372;
  p_output1[109]=1.;
  p_output1[110]=-0.5;
  p_output1[111]=t3391;
  p_output1[112]=0.25*t4579*t691;
  p_output1[113]=-0.25*t4579*t691;
  p_output1[114]=-0.5;
  p_output1[115]=t3372;
  p_output1[116]=1.;
  p_output1[117]=-0.5;
  p_output1[118]=t3391;
  p_output1[119]=0.25*t4704*t691;
  p_output1[120]=-0.25*t4704*t691;
  p_output1[121]=-0.5;
  p_output1[122]=t3372;
  p_output1[123]=1.;
  p_output1[124]=-0.5;
  p_output1[125]=t3391;
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

#include "J_hs_int_dx.hh"

namespace RightSS2
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE

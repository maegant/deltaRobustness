/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:53 GMT-08:00
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
  double t1300;
  double t728;
  double t875;
  double t1310;
  double t2084;
  double t2163;
  double t2180;
  double t1271;
  double t1355;
  double t1972;
  double t2962;
  double t3057;
  double t3166;
  double t3180;
  double t3247;
  double t2388;
  double t2457;
  double t2764;
  double t2217;
  double t3331;
  double t3597;
  double t3607;
  double t3901;
  double t3969;
  double t3974;
  double t4003;
  double t4444;
  double t4455;
  double t4539;
  double t4580;
  double t4612;
  double t4659;
  double t4675;
  double t4747;
  double t4750;
  double t4772;
  double t4823;
  double t4837;
  double t4859;
  double t4886;
  double t4892;
  double t4924;
  double t4935;
  double t4936;
  double t4953;
  double t4971;
  double t4976;
  double t5003;
  double t5051;
  double t5103;
  double t5123;
  double t2036;
  double t2786;
  double t2787;
  double t2879;
  double t2254;
  double t6271;
  double t6309;
  double t6317;
  double t6371;
  double t6395;
  double t5526;
  double t5604;
  double t5644;
  double t6402;
  double t5366;
  double t5410;
  double t5457;
  double t6405;
  double t6049;
  double t6137;
  double t6160;
  double t5200;
  double t3796;
  double t4062;
  double t4376;
  double t6202;
  double t6211;
  double t6230;
  double t6407;
  double t5509;
  double t5661;
  double t5673;
  double t6447;
  double t6455;
  double t6470;
  double t6162;
  double t6167;
  double t6176;
  double t6555;
  double t6570;
  double t4395;
  double t6238;
  double t6595;
  double t6616;
  double t6725;
  double t6735;
  double t6177;
  double t6553;
  double t6718;
  double t6722;
  t1300 = Cos(var2[2]);
  t728 = Cos(var2[6]);
  t875 = Sin(var2[2]);
  t1310 = Sin(var2[6]);
  t2084 = t1300*t728;
  t2163 = -1.*t875*t1310;
  t2180 = t2084 + t2163;
  t1271 = t728*t875;
  t1355 = t1300*t1310;
  t1972 = t1271 + t1355;
  t2962 = -1.*t728;
  t3057 = 1. + t2962;
  t3166 = -0.4999*t3057;
  t3180 = -0.6493*t728;
  t3247 = t3166 + t3180;
  t2388 = -1.*t728*t875;
  t2457 = -1.*t1300*t1310;
  t2764 = t2388 + t2457;
  t2217 = Power(t2180,2);
  t3331 = t3247*t1310;
  t3597 = 0.14939999999999998*t728*t1310;
  t3607 = t3331 + t3597;
  t3901 = t3247*t728;
  t3969 = Power(t1310,2);
  t3974 = -0.14939999999999998*t3969;
  t4003 = t3901 + t3974;
  t4444 = -1.*var1[3];
  t4455 = var3[6] + t4444;
  t4539 = -0.5118593399999999*t4455*t2764;
  t4580 = -1.*var1[0];
  t4612 = var3[0] + t4580;
  t4659 = 6.8522*t2764*t2180;
  t4675 = 6.8522*t1972*t2180;
  t4747 = t4659 + t4675;
  t4750 = t4612*t4747;
  t4772 = -1.*var1[1];
  t4823 = var3[1] + t4772;
  t4837 = Power(t2764,2);
  t4859 = 3.4261*t4837;
  t4886 = 3.4261*t2764*t1972;
  t4892 = 3.4261*t2217;
  t4924 = -1.*t1300*t728;
  t4935 = t875*t1310;
  t4936 = t4924 + t4935;
  t4953 = 3.4261*t2180*t4936;
  t4971 = t4859 + t4886 + t4892 + t4953;
  t4976 = t4823*t4971;
  t5003 = -1.*var1[2];
  t5051 = var3[2] + t5003;
  t5103 = 3.4261*t3607*t2180;
  t5123 = 3.4261*t2764*t4003;
  t2036 = Power(t1972,2);
  t2786 = -3.4261*t2764*t2180;
  t2787 = -3.4261*t1972*t2180;
  t2879 = t2786 + t2787;
  t2254 = -3.4261*t2217;
  t6271 = -0.5118593399999999*t4455*t4936;
  t6309 = 6.8522*t2764*t4936;
  t6317 = t4659 + t6309;
  t6371 = t4823*t6317;
  t6395 = t4612*t4971;
  t5526 = -1.*t3247*t1310;
  t5604 = -0.14939999999999998*t728*t1310;
  t5644 = t5526 + t5604;
  t6402 = 3.4261*t2764*t3607;
  t5366 = Power(t728,2);
  t5410 = 0.14939999999999998*t5366;
  t5457 = 0. + t3901 + t5410;
  t6405 = 3.4261*t4936*t4003;
  t6049 = 3.4261*t2764*t2180;
  t6137 = 3.4261*t1972*t2180;
  t6160 = t6049 + t6137;
  t5200 = t5103 + t5123;
  t3796 = -3.4261*t1972*t3607;
  t4062 = -3.4261*t2180*t4003;
  t4376 = t3796 + t4062;
  t6202 = -3.4261*t3607*t2180;
  t6211 = -3.4261*t2764*t4003;
  t6230 = t6202 + t6211;
  t6407 = t6402 + t6405;
  t5509 = 3.4261*t5457*t1972;
  t5661 = 3.4261*t5644*t2180;
  t5673 = t5509 + t5661 + t5103 + t5123;
  t6447 = 3.4261*t2764*t5644;
  t6455 = 3.4261*t5457*t2180;
  t6470 = t6447 + t6402 + t6455 + t6405;
  t6162 = 3.4261*t1972*t3607;
  t6167 = 3.4261*t2180*t4003;
  t6176 = t6162 + t6167;
  t6555 = Power(t3607,2);
  t6570 = Power(t4003,2);
  t4395 = 0.5118593399999999*t2180;
  t6238 = 0.5118593399999999*t2764;
  t6595 = 0.5118593399999999*t4003;
  t6616 = -0.0389 + t6595;
  t6725 = -0.5118593399999999*t4612*t2764;
  t6735 = -0.5118593399999999*t4823*t4936;
  t6177 = -0.5118593399999999*t2180;
  t6553 = -0.5118593399999999*t2764;
  t6718 = -0.5118593399999999*t4003;
  t6722 = 0.0389 + t6718;
  p_output1[0]=-3.4261*t2036 + t2254;
  p_output1[1]=t2879;
  p_output1[2]=t4376;
  p_output1[3]=t4395;
  p_output1[4]=t4539 + t4750 + t4976 + t5051*t5200;
  p_output1[5]=t4539 + t4750 + t4976 + t5051*t5673;
  p_output1[6]=3.4261*t2036 + t4892;
  p_output1[7]=t6160;
  p_output1[8]=t6176;
  p_output1[9]=t6177;
  p_output1[10]=t2879;
  p_output1[11]=t2254 - 3.4261*t4837;
  p_output1[12]=t6230;
  p_output1[13]=t6238;
  p_output1[14]=t6271 + t6371 + t6395 + t5051*t6407;
  p_output1[15]=t6271 + t6371 + t6395 + t5051*t6470;
  p_output1[16]=t6160;
  p_output1[17]=t4859 + t4892;
  p_output1[18]=t5200;
  p_output1[19]=t6553;
  p_output1[20]=t4376;
  p_output1[21]=t6230;
  p_output1[22]=-0.0389 - 3.4261*t6555 - 3.4261*t6570;
  p_output1[23]=t6616;
  p_output1[24]=t4612*t5200 + t4823*t6407;
  p_output1[25]=-0.5118593399999999*t4455*t5644 + t5051*(6.8522*t3607*t5457 + 6.8522*t4003*t5644) + t4612*t5673 + t4823*t6470;
  p_output1[26]=t6176;
  p_output1[27]=t5200;
  p_output1[28]=0.0389 + 3.4261*t6555 + 3.4261*t6570;
  p_output1[29]=t6722;
  p_output1[30]=t4395;
  p_output1[31]=t6238;
  p_output1[32]=t6616;
  p_output1[33]=-0.11537178539599996;
  p_output1[34]=t6725 + t6735;
  p_output1[35]=-0.5118593399999999*t5051*t5644 + t6725 + t6735;
  p_output1[36]=t6177;
  p_output1[37]=t6553;
  p_output1[38]=t6722;
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

#include "J_dxDiscreteMap5_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void J_dxDiscreteMap5_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

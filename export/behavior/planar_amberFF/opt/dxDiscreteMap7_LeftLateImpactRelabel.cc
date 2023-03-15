/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:45 GMT-08:00
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
  double t1250;
  double t1160;
  double t1188;
  double t1274;
  double t1557;
  double t1216;
  double t1339;
  double t1484;
  double t928;
  double t1721;
  double t1730;
  double t2490;
  double t3974;
  double t3607;
  double t469;
  double t5219;
  double t5231;
  double t5249;
  double t4632;
  double t4745;
  double t4747;
  double t4886;
  double t4892;
  double t4944;
  double t1496;
  double t3771;
  double t3969;
  double t4014;
  double t4313;
  double t4330;
  double t4415;
  double t4444;
  double t5307;
  double t5344;
  double t5346;
  double t5347;
  double t5360;
  double t5429;
  double t5440;
  double t5455;
  double t5840;
  double t5846;
  double t5861;
  double t5920;
  double t5968;
  double t5977;
  double t5725;
  double t5736;
  double t5751;
  double t5776;
  double t6512;
  double t6519;
  double t6525;
  double t6527;
  double t6532;
  double t6536;
  double t6473;
  double t6474;
  double t6477;
  double t6481;
  double t161;
  double t296;
  double t6410;
  double t6414;
  double t6419;
  double t4472;
  double t4539;
  double t4571;
  double t5007;
  double t5136;
  double t5210;
  double t6397;
  double t6402;
  double t6405;
  double t5514;
  double t5520;
  double t5571;
  double t5583;
  double t5644;
  double t5690;
  double t5697;
  double t5808;
  double t5818;
  double t6031;
  double t6049;
  double t6099;
  double t6137;
  double t6151;
  double t6160;
  double t6173;
  double t6177;
  double t6407;
  double t6431;
  double t6447;
  double t6385;
  double t6395;
  double t6469;
  double t6470;
  double t6503;
  double t6539;
  double t6553;
  double t6564;
  double t6570;
  double t6574;
  double t6675;
  double t6686;
  double t6688;
  double t6555;
  double t6578;
  double t6583;
  double t6058;
  double t6162;
  double t6163;
  double t6633;
  double t6636;
  double t6637;
  double t6768;
  double t6783;
  double t6784;
  double t6944;
  double t6948;
  double t6953;
  double t5509;
  double t5661;
  double t5672;
  double t6600;
  double t6616;
  double t6620;
  double t6739;
  double t6751;
  double t6755;
  double t7043;
  double t7044;
  double t6908;
  double t6929;
  double t6718;
  double t6722;
  t1250 = Cos(var2[7]);
  t1160 = Cos(var2[8]);
  t1188 = Sin(var2[7]);
  t1274 = Sin(var2[8]);
  t1557 = Cos(var2[6]);
  t1216 = t1160*t1188;
  t1339 = t1250*t1274;
  t1484 = t1216 + t1339;
  t928 = Sin(var2[6]);
  t1721 = t1250*t1160;
  t1730 = -1.*t1188*t1274;
  t2490 = t1721 + t1730;
  t3974 = Cos(var2[2]);
  t3607 = t1557*t2490;
  t469 = Sin(var2[2]);
  t5219 = -1.*t1160*t1188;
  t5231 = -1.*t1250*t1274;
  t5249 = t5219 + t5231;
  t4632 = -1.*t1160;
  t4745 = 1. + t4632;
  t4747 = -1.3127*t4745;
  t4886 = -1.3127*t1160;
  t4892 = -0.06*t1274;
  t4944 = t4747 + t4886 + t4892;
  t1496 = -1.*t928*t1484;
  t3771 = t1496 + t3607;
  t3969 = t469*t3771;
  t4014 = t1557*t1484;
  t4313 = t928*t2490;
  t4330 = t4014 + t4313;
  t4415 = t3974*t4330;
  t4444 = t3969 + t4415;
  t5307 = t928*t5249;
  t5344 = t5307 + t3607;
  t5346 = t3974*t5344;
  t5347 = t1557*t5249;
  t5360 = -1.*t928*t2490;
  t5429 = t5347 + t5360;
  t5440 = t469*t5429;
  t5455 = t5346 + t5440;
  t5840 = -1.*t1250;
  t5846 = 1. + t5840;
  t5861 = -0.9063*t5846;
  t5920 = -0.06*t1160*t1188;
  t5968 = t1250*t4944;
  t5977 = t5861 + t5920 + t5968;
  t5725 = 0.06*t1250*t1160;
  t5736 = 0.9063*t1188;
  t5751 = t1188*t4944;
  t5776 = t5725 + t5736 + t5751;
  t6512 = -1.*t1557;
  t6519 = 1. + t6512;
  t6525 = -0.4999*t6519;
  t6527 = t1557*t5977;
  t6532 = -1.*t928*t5776;
  t6536 = t6525 + t6527 + t6532;
  t6473 = 0.4999*t928;
  t6474 = t928*t5977;
  t6477 = t1557*t5776;
  t6481 = t6473 + t6474 + t6477;
  t161 = -1.*var1[5];
  t296 = var3[8] + t161;
  t6410 = t3974*t3771;
  t6414 = -1.*t469*t4330;
  t6419 = t6410 + t6414;
  t4472 = -1.*var1[4];
  t4539 = var3[7] + t4472;
  t4571 = 0.9063*t1160;
  t5007 = t1160*t4944;
  t5136 = 0.06*t1160*t1274;
  t5210 = t4571 + t5007 + t5136;
  t6397 = -1.*t469*t5344;
  t6402 = t3974*t5429;
  t6405 = t6397 + t6402;
  t5514 = Power(t1160,2);
  t5520 = -0.06*t5514;
  t5571 = 0.9063*t1274;
  t5583 = t4944*t1274;
  t5644 = t5520 + t5571 + t5583;
  t5690 = -1.*var1[3];
  t5697 = var3[6] + t5690;
  t5808 = t5776*t1484;
  t5818 = 0.4999*t2490;
  t6031 = t5977*t2490;
  t6049 = t5808 + t5818 + t6031;
  t6099 = -1.*t5977*t5249;
  t6137 = 0.4999*t1484;
  t6151 = -1.*t5776*t2490;
  t6160 = t6099 + t6137 + t6151;
  t6173 = -1.*var1[0];
  t6177 = var3[0] + t6173;
  t6407 = 1.142857*t6405*t5455;
  t6431 = 1.142857*t4444*t6419;
  t6447 = t6407 + t6431;
  t6385 = -1.*var1[1];
  t6395 = var3[1] + t6385;
  t6469 = -1.*var1[2];
  t6470 = var3[2] + t6469;
  t6503 = -1.*t6481*t5344;
  t6539 = -1.*t6536*t5429;
  t6553 = t6503 + t6539;
  t6564 = t6536*t3771;
  t6570 = t6481*t4330;
  t6574 = t6564 + t6570;
  t6675 = 1.142857*t6553*t6419;
  t6686 = 1.142857*t6405*t6574;
  t6688 = t6675 + t6686;
  t6555 = 1.142857*t6553*t4444;
  t6578 = 1.142857*t5455*t6574;
  t6583 = t6555 + t6578;
  t6058 = 1.142857*t6049*t5455;
  t6162 = 1.142857*t6160*t4444;
  t6163 = t6058 + t6162;
  t6633 = 1.142857*t6049*t6405;
  t6636 = 1.142857*t6160*t6419;
  t6637 = t6633 + t6636;
  t6768 = 1.142857*t6160*t6553;
  t6783 = 1.142857*t6049*t6574;
  t6784 = 0.0085 + t6768 + t6783;
  t6944 = 1.142857*t5210*t6049;
  t6948 = 1.142857*t5644*t6160;
  t6953 = 0.0085 + t6944 + t6948;
  t5509 = 1.142857*t5210*t5455;
  t5661 = 1.142857*t5644*t4444;
  t5672 = t5509 + t5661;
  t6600 = 1.142857*t5210*t6405;
  t6616 = 1.142857*t5644*t6419;
  t6620 = t6600 + t6616;
  t6739 = 1.142857*t5644*t6553;
  t6751 = 1.142857*t5210*t6574;
  t6755 = 0.0085 + t6739 + t6751;
  t7043 = -0.06857142*t5644;
  t7044 = 0.0085 + t7043;
  t6908 = -0.06857142*t6160;
  t6929 = 0.0085 + t6908;
  t6718 = -0.06857142*t6553;
  t6722 = 0.0085 + t6718;
  p_output1[0]=-0.06857142*t296*t4444 + t4539*t5672 + t5697*t6163 + (1.142857*Power(t4444,2) + 1.142857*Power(t5455,2))*t6177 + t6395*t6447 + t6470*t6583;
  p_output1[1]=-0.06857142*t296*t6419 + t6395*(1.142857*Power(t6405,2) + 1.142857*Power(t6419,2)) + t6177*t6447 + t4539*t6620 + t5697*t6637 + t6470*t6688;
  p_output1[2]=t6470*(0.0085 + 1.142857*Power(t6553,2) + 1.142857*Power(t6574,2)) + t6177*t6583 + t6395*t6688 + t296*t6722 + t4539*t6755 + t5697*t6784;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t5697*(0.0085 + 1.142857*Power(t6049,2) + 1.142857*Power(t6160,2)) + t6163*t6177 + t6395*t6637 + t6470*t6784 + t296*t6929 + t4539*t6953;
  p_output1[7]=t4539*(0.0085 + 1.142857*Power(t5210,2) + 1.142857*Power(t5644,2)) + t5672*t6177 + t6395*t6620 + t6470*t6755 + t5697*t6953 + t296*t7044;
  p_output1[8]=0.0126142852*t296 - 0.06857142*t4444*t6177 - 0.06857142*t6395*t6419 + t6470*t6722 + t5697*t6929 + t4539*t7044;
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

#include "dxDiscreteMap7_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void dxDiscreteMap7_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

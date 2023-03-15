/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:44 GMT-08:00
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
  double t2487;
  double t1589;
  double t1732;
  double t3160;
  double t1577;
  double t1890;
  double t3730;
  double t3962;
  double t3969;
  double t3974;
  double t4014;
  double t4206;
  double t4225;
  double t4313;
  double t4444;
  double t4651;
  double t4653;
  double t4745;
  double t4747;
  double t4886;
  double t5347;
  double t5360;
  double t5408;
  double t5429;
  double t5440;
  double t5455;
  double t5920;
  double t5968;
  double t5977;
  double t6012;
  double t6018;
  double t6020;
  double t6031;
  double t6058;
  double t6099;
  double t6101;
  double t1027;
  double t1188;
  double t5583;
  double t5641;
  double t5644;
  double t4554;
  double t4571;
  double t5231;
  double t5249;
  double t5344;
  double t5346;
  double t5669;
  double t5672;
  double t4632;
  double t4892;
  double t4944;
  double t5007;
  double t5210;
  double t5570;
  double t5571;
  double t5730;
  double t5736;
  double t5661;
  double t5690;
  double t5697;
  double t5857;
  double t5861;
  double t6014;
  double t6129;
  double t6151;
  double t6162;
  double t6163;
  double t6167;
  double t6160;
  double t6173;
  double t6177;
  double t6419;
  double t6431;
  double t6447;
  double t6318;
  double t6362;
  double t6376;
  double t5219;
  double t5509;
  double t5514;
  double t6477;
  double t6481;
  double t6503;
  double t6570;
  double t6574;
  double t6470;
  double t6473;
  t2487 = Cos(var2[6]);
  t1589 = Cos(var2[7]);
  t1732 = Sin(var2[6]);
  t3160 = Sin(var2[7]);
  t1577 = Sin(var2[2]);
  t1890 = -1.*t1589*t1732;
  t3730 = -1.*t2487*t3160;
  t3962 = t1890 + t3730;
  t3969 = t1577*t3962;
  t3974 = Cos(var2[2]);
  t4014 = t2487*t1589;
  t4206 = -1.*t1732*t3160;
  t4225 = t4014 + t4206;
  t4313 = t3974*t4225;
  t4444 = t3969 + t4313;
  t4651 = -1.*t1589;
  t4653 = 1. + t4651;
  t4745 = -0.9063*t4653;
  t4747 = -1.0567*t1589;
  t4886 = t4745 + t4747;
  t5347 = t1589*t1732;
  t5360 = t2487*t3160;
  t5408 = t5347 + t5360;
  t5429 = t3974*t5408;
  t5440 = t1577*t4225;
  t5455 = t5429 + t5440;
  t5920 = 0.4999*t1732;
  t5968 = t4886*t1732;
  t5977 = -0.15039999999999998*t2487*t3160;
  t6012 = t5920 + t5968 + t5977;
  t6018 = -1.*t2487;
  t6020 = 1. + t6018;
  t6031 = -0.4999*t6020;
  t6058 = t2487*t4886;
  t6099 = 0.15039999999999998*t1732*t3160;
  t6101 = t6031 + t6058 + t6099;
  t1027 = -1.*var1[4];
  t1188 = var3[7] + t1027;
  t5583 = t3974*t3962;
  t5641 = -1.*t1577*t4225;
  t5644 = t5583 + t5641;
  t4554 = -1.*var1[3];
  t4571 = var3[6] + t4554;
  t5231 = 0.4999*t3160;
  t5249 = t4886*t3160;
  t5344 = 0.15039999999999998*t1589*t3160;
  t5346 = t5231 + t5249 + t5344;
  t5669 = -1.*t1577*t5408;
  t5672 = t5669 + t4313;
  t4632 = 0.4999*t1589;
  t4892 = t4886*t1589;
  t4944 = Power(t3160,2);
  t5007 = -0.15039999999999998*t4944;
  t5210 = t4632 + t4892 + t5007;
  t5570 = -1.*var1[1];
  t5571 = var3[1] + t5570;
  t5730 = -1.*var1[0];
  t5736 = var3[0] + t5730;
  t5661 = 3.5899*t4444*t5644;
  t5690 = 3.5899*t5672*t5455;
  t5697 = t5661 + t5690;
  t5857 = -1.*var1[2];
  t5861 = var3[2] + t5857;
  t6014 = -1.*t6012*t4225;
  t6129 = -1.*t3962*t6101;
  t6151 = t6014 + t6129;
  t6162 = t6012*t5408;
  t6163 = t4225*t6101;
  t6167 = t6162 + t6163;
  t6160 = 3.5899*t5455*t6151;
  t6173 = 3.5899*t4444*t6167;
  t6177 = t6160 + t6173;
  t6419 = 3.5899*t5672*t6151;
  t6431 = 3.5899*t5644*t6167;
  t6447 = t6419 + t6431;
  t6318 = 3.5899*t5346*t5672;
  t6362 = 3.5899*t5210*t5644;
  t6376 = t6318 + t6362;
  t5219 = 3.5899*t5210*t4444;
  t5509 = 3.5899*t5346*t5455;
  t5514 = t5219 + t5509;
  t6477 = 3.5899*t5346*t6151;
  t6481 = 3.5899*t5210*t6167;
  t6503 = 0.0378 + t6477 + t6481;
  t6570 = -0.5399209599999999*t5210;
  t6574 = 0.0378 + t6570;
  t6470 = -0.5399209599999999*t6167;
  t6473 = 0.0378 + t6470;
  p_output1[0]=-0.5399209599999999*t1188*t4444 + t4571*t5514 + t5571*t5697 + (3.5899*Power(t4444,2) + 3.5899*Power(t5455,2))*t5736 + t5861*t6177;
  p_output1[1]=-0.5399209599999999*t1188*t5644 + t5571*(3.5899*Power(t5644,2) + 3.5899*Power(t5672,2)) + t5697*t5736 + t4571*t6376 + t5861*t6447;
  p_output1[2]=t5861*(0.0378 + 3.5899*Power(t6151,2) + 3.5899*Power(t6167,2)) + t5736*t6177 + t5571*t6447 + t1188*t6473 + t4571*t6503;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4571*(0.0378 + 3.5899*Power(t5210,2) + 3.5899*Power(t5346,2)) + t5514*t5736 + t5571*t6376 + t5861*t6503 + t1188*t6574;
  p_output1[7]=0.11900411238399997*t1188 - 0.5399209599999999*t5571*t5644 - 0.5399209599999999*t4444*t5736 + t5861*t6473 + t4571*t6574;
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

#include "dxDiscreteMap6_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void dxDiscreteMap6_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

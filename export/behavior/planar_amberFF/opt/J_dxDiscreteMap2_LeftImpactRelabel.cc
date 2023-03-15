/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:29 GMT-08:00
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
  double t954;
  double t687;
  double t772;
  double t1224;
  double t2691;
  double t2697;
  double t2700;
  double t811;
  double t1494;
  double t1632;
  double t4308;
  double t4439;
  double t4449;
  double t4565;
  double t4591;
  double t4117;
  double t4163;
  double t4251;
  double t3115;
  double t4600;
  double t4627;
  double t4845;
  double t4946;
  double t4948;
  double t4982;
  double t5075;
  double t5413;
  double t5426;
  double t5427;
  double t5471;
  double t5478;
  double t5486;
  double t5493;
  double t5503;
  double t5574;
  double t5589;
  double t5606;
  double t5721;
  double t5749;
  double t5801;
  double t5830;
  double t5843;
  double t5855;
  double t5867;
  double t5917;
  double t5922;
  double t5930;
  double t5932;
  double t5948;
  double t6010;
  double t6081;
  double t2149;
  double t4257;
  double t4276;
  double t4302;
  double t3763;
  double t6399;
  double t6409;
  double t6418;
  double t6421;
  double t6434;
  double t6220;
  double t6227;
  double t6231;
  double t6437;
  double t6168;
  double t6185;
  double t6189;
  double t6440;
  double t6280;
  double t6281;
  double t6282;
  double t6110;
  double t4941;
  double t5162;
  double t5194;
  double t6342;
  double t6348;
  double t6378;
  double t6448;
  double t6190;
  double t6248;
  double t6257;
  double t6456;
  double t6458;
  double t6459;
  double t6284;
  double t6290;
  double t6301;
  double t6471;
  double t6485;
  double t5279;
  double t6391;
  double t6494;
  double t6518;
  double t6594;
  double t6595;
  double t6305;
  double t6468;
  double t6586;
  double t6592;
  t954 = Cos(var2[2]);
  t687 = Cos(var2[3]);
  t772 = Sin(var2[2]);
  t1224 = Sin(var2[3]);
  t2691 = t954*t687;
  t2697 = -1.*t772*t1224;
  t2700 = t2691 + t2697;
  t811 = t687*t772;
  t1494 = t954*t1224;
  t1632 = t811 + t1494;
  t4308 = -1.*t687;
  t4439 = 1. + t4308;
  t4449 = -0.4999*t4439;
  t4565 = -0.6493*t687;
  t4591 = t4449 + t4565;
  t4117 = -1.*t687*t772;
  t4163 = -1.*t954*t1224;
  t4251 = t4117 + t4163;
  t3115 = Power(t2700,2);
  t4600 = t4591*t1224;
  t4627 = 0.14939999999999998*t687*t1224;
  t4845 = t4600 + t4627;
  t4946 = t4591*t687;
  t4948 = Power(t1224,2);
  t4982 = -0.14939999999999998*t4948;
  t5075 = t4946 + t4982;
  t5413 = -1.*var1[6];
  t5426 = var3[3] + t5413;
  t5427 = -0.5118593399999999*t5426*t4251;
  t5471 = -1.*var1[0];
  t5478 = var3[0] + t5471;
  t5486 = 6.8522*t4251*t2700;
  t5493 = 6.8522*t1632*t2700;
  t5503 = t5486 + t5493;
  t5574 = t5478*t5503;
  t5589 = -1.*var1[1];
  t5606 = var3[1] + t5589;
  t5721 = Power(t4251,2);
  t5749 = 3.4261*t5721;
  t5801 = 3.4261*t4251*t1632;
  t5830 = 3.4261*t3115;
  t5843 = -1.*t954*t687;
  t5855 = t772*t1224;
  t5867 = t5843 + t5855;
  t5917 = 3.4261*t2700*t5867;
  t5922 = t5749 + t5801 + t5830 + t5917;
  t5930 = t5606*t5922;
  t5932 = -1.*var1[2];
  t5948 = var3[2] + t5932;
  t6010 = 3.4261*t4845*t2700;
  t6081 = 3.4261*t4251*t5075;
  t2149 = Power(t1632,2);
  t4257 = -3.4261*t4251*t2700;
  t4276 = -3.4261*t1632*t2700;
  t4302 = t4257 + t4276;
  t3763 = -3.4261*t3115;
  t6399 = -0.5118593399999999*t5426*t5867;
  t6409 = 6.8522*t4251*t5867;
  t6418 = t5486 + t6409;
  t6421 = t5606*t6418;
  t6434 = t5478*t5922;
  t6220 = -1.*t4591*t1224;
  t6227 = -0.14939999999999998*t687*t1224;
  t6231 = t6220 + t6227;
  t6437 = 3.4261*t4251*t4845;
  t6168 = Power(t687,2);
  t6185 = 0.14939999999999998*t6168;
  t6189 = 0. + t4946 + t6185;
  t6440 = 3.4261*t5867*t5075;
  t6280 = 3.4261*t4251*t2700;
  t6281 = 3.4261*t1632*t2700;
  t6282 = t6280 + t6281;
  t6110 = t6010 + t6081;
  t4941 = -3.4261*t1632*t4845;
  t5162 = -3.4261*t2700*t5075;
  t5194 = t4941 + t5162;
  t6342 = -3.4261*t4845*t2700;
  t6348 = -3.4261*t4251*t5075;
  t6378 = t6342 + t6348;
  t6448 = t6437 + t6440;
  t6190 = 3.4261*t6189*t1632;
  t6248 = 3.4261*t6231*t2700;
  t6257 = t6190 + t6248 + t6010 + t6081;
  t6456 = 3.4261*t4251*t6231;
  t6458 = 3.4261*t6189*t2700;
  t6459 = t6456 + t6437 + t6458 + t6440;
  t6284 = 3.4261*t1632*t4845;
  t6290 = 3.4261*t2700*t5075;
  t6301 = t6284 + t6290;
  t6471 = Power(t4845,2);
  t6485 = Power(t5075,2);
  t5279 = 0.5118593399999999*t2700;
  t6391 = 0.5118593399999999*t4251;
  t6494 = 0.5118593399999999*t5075;
  t6518 = -0.0389 + t6494;
  t6594 = -0.5118593399999999*t5478*t4251;
  t6595 = -0.5118593399999999*t5606*t5867;
  t6305 = -0.5118593399999999*t2700;
  t6468 = -0.5118593399999999*t4251;
  t6586 = -0.5118593399999999*t5075;
  t6592 = 0.0389 + t6586;
  p_output1[0]=-3.4261*t2149 + t3763;
  p_output1[1]=t4302;
  p_output1[2]=t5194;
  p_output1[3]=t5279;
  p_output1[4]=t5427 + t5574 + t5930 + t5948*t6110;
  p_output1[5]=t5427 + t5574 + t5930 + t5948*t6257;
  p_output1[6]=3.4261*t2149 + t5830;
  p_output1[7]=t6282;
  p_output1[8]=t6301;
  p_output1[9]=t6305;
  p_output1[10]=t4302;
  p_output1[11]=t3763 - 3.4261*t5721;
  p_output1[12]=t6378;
  p_output1[13]=t6391;
  p_output1[14]=t6399 + t6421 + t6434 + t5948*t6448;
  p_output1[15]=t6399 + t6421 + t6434 + t5948*t6459;
  p_output1[16]=t6282;
  p_output1[17]=t5749 + t5830;
  p_output1[18]=t6110;
  p_output1[19]=t6468;
  p_output1[20]=t5194;
  p_output1[21]=t6378;
  p_output1[22]=-0.0389 - 3.4261*t6471 - 3.4261*t6485;
  p_output1[23]=t6518;
  p_output1[24]=t5478*t6110 + t5606*t6448;
  p_output1[25]=-0.5118593399999999*t5426*t6231 + t5948*(6.8522*t4845*t6189 + 6.8522*t5075*t6231) + t5478*t6257 + t5606*t6459;
  p_output1[26]=t6301;
  p_output1[27]=t6110;
  p_output1[28]=0.0389 + 3.4261*t6471 + 3.4261*t6485;
  p_output1[29]=t6592;
  p_output1[30]=t5279;
  p_output1[31]=t6391;
  p_output1[32]=t6518;
  p_output1[33]=-0.11537178539599996;
  p_output1[34]=t6594 + t6595;
  p_output1[35]=-0.5118593399999999*t5948*t6231 + t6594 + t6595;
  p_output1[36]=t6305;
  p_output1[37]=t6468;
  p_output1[38]=t6592;
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

#include "J_dxDiscreteMap2_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap2_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

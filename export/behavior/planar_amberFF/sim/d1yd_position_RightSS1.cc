/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:45 GMT-08:00
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
  double t250;
  double t969;
  double t985;
  double t1057;
  double t1203;
  double t1228;
  double t1549;
  double t1866;
  double t1868;
  double t2183;
  double t2298;
  double t2515;
  double t3141;
  double t3333;
  double t3501;
  double t3710;
  double t3776;
  double t3852;
  double t3946;
  double t4161;
  double t4376;
  double t4382;
  double t4402;
  double t4467;
  double t4599;
  double t4669;
  double t4670;
  double t4755;
  double t4826;
  double t4882;
  double t5468;
  double t5500;
  double t5562;
  double t5612;
  double t5773;
  double t5793;
  double t6062;
  double t6122;
  double t6164;
  double t6984;
  double t7232;
  double t7389;
  double t7393;
  double t7414;
  double t7415;
  double t7418;
  double t7420;
  double t7425;
  double t7428;
  double t7431;
  double t7454;
  double t7457;
  double t7510;
  double t7514;
  double t7516;
  double t7517;
  double t7521;
  double t7530;
  double t7531;
  double t7532;
  double t7541;
  double t7542;
  double t7544;
  double t7594;
  double t7595;
  double t7596;
  double t7600;
  double t7601;
  double t7603;
  double t7605;
  double t7608;
  double t7613;
  double t7614;
  double t7621;
  t250 = -1.*var4[1];
  t969 = var4[0] + t250;
  t985 = 1/t969;
  t1057 = 0.8128*var1[2];
  t1203 = 0.8128*var1[6];
  t1228 = 0.4064*var1[7];
  t1549 = 0. + t250 + t1057 + t1203 + t1228;
  t1866 = -1.*t985*t1549;
  t1868 = 1. + t1866;
  t2183 = Power(t1868,4);
  t2298 = Power(t969,-2);
  t2515 = Power(t1868,3);
  t3141 = Power(t969,-3);
  t3333 = Power(t1868,2);
  t3501 = Power(t1549,2);
  t3710 = Power(t969,-4);
  t3776 = Power(t1549,3);
  t3852 = Power(t969,-5);
  t3946 = Power(t1549,4);
  t4161 = -4.064*var3[0]*t985*t2183;
  t4376 = 4.064*var3[5]*t985*t2183;
  t4382 = -16.256*var3[5]*t2298*t2515*t1549;
  t4402 = 16.256*var3[10]*t2298*t2515*t1549;
  t4467 = -24.383999999999997*var3[10]*t3141*t3333*t3501;
  t4599 = 24.383999999999997*var3[15]*t3141*t3333*t3501;
  t4669 = -16.256*var3[15]*t3710*t1868*t3776;
  t4670 = 16.256*var3[20]*t3710*t1868*t3776;
  t4755 = -4.064*var3[20]*t3852*t3946;
  t4826 = 4.064*var3[25]*t3852*t3946;
  t4882 = t4161 + t4376 + t4382 + t4402 + t4467 + t4599 + t4669 + t4670 + t4755 + t4826;
  t5468 = -4.064*var3[1]*t985*t2183;
  t5500 = 4.064*var3[6]*t985*t2183;
  t5562 = -16.256*var3[6]*t2298*t2515*t1549;
  t5612 = 16.256*var3[11]*t2298*t2515*t1549;
  t5773 = -24.383999999999997*var3[11]*t3141*t3333*t3501;
  t5793 = 24.383999999999997*var3[16]*t3141*t3333*t3501;
  t6062 = -16.256*var3[16]*t3710*t1868*t3776;
  t6122 = 16.256*var3[21]*t3710*t1868*t3776;
  t6164 = -4.064*var3[21]*t3852*t3946;
  t6984 = 4.064*var3[26]*t3852*t3946;
  t7232 = t5468 + t5500 + t5562 + t5612 + t5773 + t5793 + t6062 + t6122 + t6164 + t6984;
  t7389 = -4.064*var3[2]*t985*t2183;
  t7393 = 4.064*var3[7]*t985*t2183;
  t7414 = -16.256*var3[7]*t2298*t2515*t1549;
  t7415 = 16.256*var3[12]*t2298*t2515*t1549;
  t7418 = -24.383999999999997*var3[12]*t3141*t3333*t3501;
  t7420 = 24.383999999999997*var3[17]*t3141*t3333*t3501;
  t7425 = -16.256*var3[17]*t3710*t1868*t3776;
  t7428 = 16.256*var3[22]*t3710*t1868*t3776;
  t7431 = -4.064*var3[22]*t3852*t3946;
  t7454 = 4.064*var3[27]*t3852*t3946;
  t7457 = t7389 + t7393 + t7414 + t7415 + t7418 + t7420 + t7425 + t7428 + t7431 + t7454;
  t7510 = -4.064*var3[3]*t985*t2183;
  t7514 = 4.064*var3[8]*t985*t2183;
  t7516 = -16.256*var3[8]*t2298*t2515*t1549;
  t7517 = 16.256*var3[13]*t2298*t2515*t1549;
  t7521 = -24.383999999999997*var3[13]*t3141*t3333*t3501;
  t7530 = 24.383999999999997*var3[18]*t3141*t3333*t3501;
  t7531 = -16.256*var3[18]*t3710*t1868*t3776;
  t7532 = 16.256*var3[23]*t3710*t1868*t3776;
  t7541 = -4.064*var3[23]*t3852*t3946;
  t7542 = 4.064*var3[28]*t3852*t3946;
  t7544 = t7510 + t7514 + t7516 + t7517 + t7521 + t7530 + t7531 + t7532 + t7541 + t7542;
  t7594 = -4.064*var3[4]*t985*t2183;
  t7595 = 4.064*var3[9]*t985*t2183;
  t7596 = -16.256*var3[9]*t2298*t2515*t1549;
  t7600 = 16.256*var3[14]*t2298*t2515*t1549;
  t7601 = -24.383999999999997*var3[14]*t3141*t3333*t3501;
  t7603 = 24.383999999999997*var3[19]*t3141*t3333*t3501;
  t7605 = -16.256*var3[19]*t3710*t1868*t3776;
  t7608 = 16.256*var3[24]*t3710*t1868*t3776;
  t7613 = -4.064*var3[24]*t3852*t3946;
  t7614 = 4.064*var3[29]*t3852*t3946;
  t7621 = t7594 + t7595 + t7596 + t7600 + t7601 + t7603 + t7605 + t7608 + t7613 + t7614;
  p_output1[0]=t4882*var2[2] + t4882*var2[6] + var2[7]*(-2.032*t2183*t985*var3[0] - 8.128*t1549*t2298*t2515*var3[5] + 2.032*t2183*t985*var3[5] + 8.128*t1549*t2298*t2515*var3[10] - 12.191999999999998*t3141*t3333*t3501*var3[10] + 12.191999999999998*t3141*t3333*t3501*var3[15] - 8.128*t1868*t3710*t3776*var3[15] + 8.128*t1868*t3710*t3776*var3[20] - 2.032*t3852*t3946*var3[20] + 2.032*t3852*t3946*var3[25]);
  p_output1[1]=t7232*var2[2] + t7232*var2[6] + var2[7]*(-2.032*t2183*t985*var3[1] - 8.128*t1549*t2298*t2515*var3[6] + 2.032*t2183*t985*var3[6] + 8.128*t1549*t2298*t2515*var3[11] - 12.191999999999998*t3141*t3333*t3501*var3[11] + 12.191999999999998*t3141*t3333*t3501*var3[16] - 8.128*t1868*t3710*t3776*var3[16] + 8.128*t1868*t3710*t3776*var3[21] - 2.032*t3852*t3946*var3[21] + 2.032*t3852*t3946*var3[26]);
  p_output1[2]=t7457*var2[2] + t7457*var2[6] + var2[7]*(-2.032*t2183*t985*var3[2] - 8.128*t1549*t2298*t2515*var3[7] + 2.032*t2183*t985*var3[7] + 8.128*t1549*t2298*t2515*var3[12] - 12.191999999999998*t3141*t3333*t3501*var3[12] + 12.191999999999998*t3141*t3333*t3501*var3[17] - 8.128*t1868*t3710*t3776*var3[17] + 8.128*t1868*t3710*t3776*var3[22] - 2.032*t3852*t3946*var3[22] + 2.032*t3852*t3946*var3[27]);
  p_output1[3]=t7544*var2[2] + t7544*var2[6] + var2[7]*(-2.032*t2183*t985*var3[3] - 8.128*t1549*t2298*t2515*var3[8] + 2.032*t2183*t985*var3[8] + 8.128*t1549*t2298*t2515*var3[13] - 12.191999999999998*t3141*t3333*t3501*var3[13] + 12.191999999999998*t3141*t3333*t3501*var3[18] - 8.128*t1868*t3710*t3776*var3[18] + 8.128*t1868*t3710*t3776*var3[23] - 2.032*t3852*t3946*var3[23] + 2.032*t3852*t3946*var3[28]);
  p_output1[4]=t7621*var2[2] + t7621*var2[6] + var2[7]*(-2.032*t2183*t985*var3[4] - 8.128*t1549*t2298*t2515*var3[9] + 2.032*t2183*t985*var3[9] + 8.128*t1549*t2298*t2515*var3[14] - 12.191999999999998*t3141*t3333*t3501*var3[14] + 12.191999999999998*t3141*t3333*t3501*var3[19] - 8.128*t1868*t3710*t3776*var3[19] + 8.128*t1868*t3710*t3776*var3[24] - 2.032*t3852*t3946*var3[24] + 2.032*t3852*t3946*var3[29]);
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "d1yd_position_RightSS1.hh"

namespace SymFunction
{

void d1yd_position_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

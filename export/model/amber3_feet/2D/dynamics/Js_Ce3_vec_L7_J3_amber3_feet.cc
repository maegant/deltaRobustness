/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:26 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=3;
  p_output1[1]=3;
  p_output1[2]=3;
  p_output1[3]=3;
  p_output1[4]=3;
  p_output1[5]=3;
  p_output1[6]=3;
  p_output1[7]=7;
  p_output1[8]=7;
  p_output1[9]=7;
  p_output1[10]=7;
  p_output1[11]=7;
  p_output1[12]=7;
  p_output1[13]=7;
  p_output1[14]=7;
  p_output1[15]=7;
  p_output1[16]=7;
  p_output1[17]=8;
  p_output1[18]=8;
  p_output1[19]=8;
  p_output1[20]=8;
  p_output1[21]=8;
  p_output1[22]=8;
  p_output1[23]=8;
  p_output1[24]=8;
  p_output1[25]=8;
  p_output1[26]=8;
  p_output1[27]=9;
  p_output1[28]=9;
  p_output1[29]=9;
  p_output1[30]=9;
  p_output1[31]=9;
  p_output1[32]=9;
  p_output1[33]=9;
  p_output1[34]=9;
  p_output1[35]=9;
  p_output1[36]=9;
  p_output1[37]=3;
  p_output1[38]=7;
  p_output1[39]=8;
  p_output1[40]=9;
  p_output1[41]=10;
  p_output1[42]=11;
  p_output1[43]=12;
  p_output1[44]=3;
  p_output1[45]=7;
  p_output1[46]=8;
  p_output1[47]=9;
  p_output1[48]=10;
  p_output1[49]=11;
  p_output1[50]=12;
  p_output1[51]=16;
  p_output1[52]=17;
  p_output1[53]=18;
  p_output1[54]=3;
  p_output1[55]=7;
  p_output1[56]=8;
  p_output1[57]=9;
  p_output1[58]=10;
  p_output1[59]=11;
  p_output1[60]=12;
  p_output1[61]=16;
  p_output1[62]=17;
  p_output1[63]=18;
  p_output1[64]=3;
  p_output1[65]=7;
  p_output1[66]=8;
  p_output1[67]=9;
  p_output1[68]=10;
  p_output1[69]=11;
  p_output1[70]=12;
  p_output1[71]=16;
  p_output1[72]=17;
  p_output1[73]=18;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 37, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec_L7_J3_amber3_feet.hh"

namespace RightSS1
{

void Js_Ce3_vec_L7_J3_amber3_feet_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

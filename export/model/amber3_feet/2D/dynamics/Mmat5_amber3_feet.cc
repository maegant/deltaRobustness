/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:12:14 GMT-08:00
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
  double t37;
  double t16;
  double t32;
  double t40;
  double t51;
  double t52;
  double t53;
  double t34;
  double t43;
  double t46;
  double t73;
  double t74;
  double t75;
  double t76;
  double t78;
  double t65;
  double t67;
  double t68;
  double t69;
  double t70;
  double t71;
  double t60;
  double t63;
  double t79;
  double t80;
  double t81;
  double t85;
  double t88;
  double t89;
  double t90;
  double t84;
  double t91;
  double t92;
  double t99;
  double t104;
  double t105;
  double t94;
  double t109;
  double t115;
  double t116;
  t37 = Cos(var1[2]);
  t16 = Cos(var1[6]);
  t32 = Sin(var1[2]);
  t40 = Sin(var1[6]);
  t51 = t37*t16;
  t52 = -1.*t32*t40;
  t53 = t51 + t52;
  t34 = t16*t32;
  t43 = t37*t40;
  t46 = t34 + t43;
  t73 = -1.*t16;
  t74 = 1. + t73;
  t75 = -0.4999*t74;
  t76 = -0.6493*t16;
  t78 = t75 + t76;
  t65 = -1.*t16*t32;
  t67 = -1.*t37*t40;
  t68 = t65 + t67;
  t69 = 3.4261*t68*t53;
  t70 = 3.4261*t46*t53;
  t71 = t69 + t70;
  t60 = Power(t53,2);
  t63 = 3.4261*t60;
  t79 = t78*t40;
  t80 = 0.14939999999999998*t16*t40;
  t81 = t79 + t80;
  t85 = t78*t16;
  t88 = Power(t40,2);
  t89 = -0.14939999999999998*t88;
  t90 = t85 + t89;
  t84 = 3.4261*t46*t81;
  t91 = 3.4261*t53*t90;
  t92 = t84 + t91;
  t99 = 3.4261*t81*t53;
  t104 = 3.4261*t68*t90;
  t105 = t99 + t104;
  t94 = -0.5118593399999999*t53;
  t109 = -0.5118593399999999*t68;
  t115 = -0.5118593399999999*t90;
  t116 = 0.0389 + t115;
  p_output1[0]=3.4261*Power(t46,2) + t63;
  p_output1[1]=t71;
  p_output1[2]=t92;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t94;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t71;
  p_output1[10]=t63 + 3.4261*Power(t68,2);
  p_output1[11]=t105;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=t109;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t92;
  p_output1[19]=t105;
  p_output1[20]=0.0389 + 3.4261*Power(t81,2) + 3.4261*Power(t90,2);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=t116;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=t94;
  p_output1[55]=t109;
  p_output1[56]=t116;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0.11537178539599996;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat5_amber3_feet.hh"

namespace SymFunction
{

void Mmat5_amber3_feet_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

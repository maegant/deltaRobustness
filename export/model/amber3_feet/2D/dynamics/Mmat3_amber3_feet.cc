/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:12:12 GMT-08:00
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
  double t11;
  double t8;
  double t9;
  double t12;
  double t17;
  double t5;
  double t20;
  double t21;
  double t22;
  double t10;
  double t14;
  double t15;
  double t16;
  double t23;
  double t26;
  double t29;
  double t30;
  double t31;
  double t32;
  double t33;
  double t34;
  double t47;
  double t48;
  double t49;
  double t50;
  double t51;
  double t46;
  double t52;
  double t53;
  double t54;
  double t56;
  double t57;
  double t58;
  double t59;
  double t60;
  double t61;
  double t38;
  double t39;
  double t40;
  double t41;
  double t42;
  double t43;
  double t44;
  double t45;
  double t55;
  double t62;
  double t63;
  double t65;
  double t66;
  double t67;
  double t76;
  double t77;
  double t78;
  double t79;
  double t70;
  double t71;
  double t72;
  double t73;
  double t74;
  double t64;
  double t68;
  double t69;
  double t88;
  double t89;
  double t90;
  double t75;
  double t80;
  double t81;
  double t91;
  double t92;
  double t93;
  double t100;
  double t101;
  double t102;
  double t82;
  double t94;
  double t103;
  double t104;
  double t110;
  double t111;
  t11 = Cos(var1[3]);
  t8 = Cos(var1[4]);
  t9 = Sin(var1[3]);
  t12 = Sin(var1[4]);
  t17 = Cos(var1[2]);
  t5 = Sin(var1[2]);
  t20 = t11*t8;
  t21 = -1.*t9*t12;
  t22 = t20 + t21;
  t10 = -1.*t8*t9;
  t14 = -1.*t11*t12;
  t15 = t10 + t14;
  t16 = t5*t15;
  t23 = t17*t22;
  t26 = t16 + t23;
  t29 = t8*t9;
  t30 = t11*t12;
  t31 = t29 + t30;
  t32 = t17*t31;
  t33 = t5*t22;
  t34 = t32 + t33;
  t47 = -1.*t8;
  t48 = 1. + t47;
  t49 = -0.9063*t48;
  t50 = -1.0567*t8;
  t51 = t49 + t50;
  t46 = 0.4999*t9;
  t52 = t51*t9;
  t53 = -0.15039999999999998*t11*t12;
  t54 = t46 + t52 + t53;
  t56 = -1.*t11;
  t57 = 1. + t56;
  t58 = -0.4999*t57;
  t59 = t11*t51;
  t60 = 0.15039999999999998*t9*t12;
  t61 = t58 + t59 + t60;
  t38 = t17*t15;
  t39 = -1.*t5*t22;
  t40 = t38 + t39;
  t41 = 3.5899*t26*t40;
  t42 = -1.*t5*t31;
  t43 = t42 + t23;
  t44 = 3.5899*t43*t34;
  t45 = t41 + t44;
  t55 = -1.*t54*t22;
  t62 = -1.*t15*t61;
  t63 = t55 + t62;
  t65 = t54*t31;
  t66 = t22*t61;
  t67 = t65 + t66;
  t76 = 0.4999*t12;
  t77 = t51*t12;
  t78 = 0.15039999999999998*t8*t12;
  t79 = t76 + t77 + t78;
  t70 = 0.4999*t8;
  t71 = t51*t8;
  t72 = Power(t12,2);
  t73 = -0.15039999999999998*t72;
  t74 = t70 + t71 + t73;
  t64 = 3.5899*t34*t63;
  t68 = 3.5899*t26*t67;
  t69 = t64 + t68;
  t88 = 3.5899*t43*t63;
  t89 = 3.5899*t40*t67;
  t90 = t88 + t89;
  t75 = 3.5899*t74*t26;
  t80 = 3.5899*t79*t34;
  t81 = t75 + t80;
  t91 = 3.5899*t79*t43;
  t92 = 3.5899*t74*t40;
  t93 = t91 + t92;
  t100 = 3.5899*t79*t63;
  t101 = 3.5899*t74*t67;
  t102 = 0.0378 + t100 + t101;
  t82 = -0.5399209599999999*t26;
  t94 = -0.5399209599999999*t40;
  t103 = -0.5399209599999999*t67;
  t104 = 0.0378 + t103;
  t110 = -0.5399209599999999*t74;
  t111 = 0.0378 + t110;
  p_output1[0]=3.5899*Power(t26,2) + 3.5899*Power(t34,2);
  p_output1[1]=t45;
  p_output1[2]=t69;
  p_output1[3]=t81;
  p_output1[4]=t82;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t45;
  p_output1[10]=3.5899*Power(t40,2) + 3.5899*Power(t43,2);
  p_output1[11]=t90;
  p_output1[12]=t93;
  p_output1[13]=t94;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t69;
  p_output1[19]=t90;
  p_output1[20]=0.0378 + 3.5899*Power(t63,2) + 3.5899*Power(t67,2);
  p_output1[21]=t102;
  p_output1[22]=t104;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t81;
  p_output1[28]=t93;
  p_output1[29]=t102;
  p_output1[30]=0.0378 + 3.5899*Power(t74,2) + 3.5899*Power(t79,2);
  p_output1[31]=t111;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t82;
  p_output1[37]=t94;
  p_output1[38]=t104;
  p_output1[39]=t111;
  p_output1[40]=0.11900411238399997;
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
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
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

#include "Mmat3_amber3_feet.hh"

namespace SymFunction
{

void Mmat3_amber3_feet_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

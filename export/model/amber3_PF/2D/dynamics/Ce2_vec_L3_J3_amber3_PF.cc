/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:31 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1997;
  double t1064;
  double t1684;
  double t2003;
  double t3479;
  double t713;
  double t3482;
  double t3485;
  double t3684;
  double t4025;
  double t4086;
  double t4102;
  double t4207;
  double t4219;
  double t1995;
  double t2759;
  double t3383;
  double t3430;
  double t3758;
  double t3791;
  double t5090;
  double t4711;
  double t4716;
  double t4782;
  double t5026;
  double t5160;
  double t6149;
  double t6341;
  double t6453;
  double t6524;
  double t6696;
  double t7438;
  double t7443;
  double t7447;
  double t7467;
  double t7543;
  double t7545;
  double t7550;
  double t7564;
  double t7565;
  double t7575;
  double t6747;
  double t6762;
  double t6774;
  double t5213;
  double t5268;
  double t5337;
  double t5345;
  double t5710;
  double t4015;
  double t4621;
  double t4657;
  double t4700;
  double t7116;
  double t7137;
  double t6837;
  double t6841;
  double t6880;
  double t6949;
  double t7085;
  double t7199;
  double t7279;
  double t7479;
  double t7595;
  double t7686;
  double t7860;
  double t7866;
  double t7899;
  double t8025;
  double t8030;
  double t8038;
  double t7795;
  double t7902;
  double t7929;
  double t5179;
  double t5865;
  double t5890;
  double t7990;
  double t7993;
  double t8000;
  t1997 = Cos(var1[3]);
  t1064 = Cos(var1[4]);
  t1684 = Sin(var1[3]);
  t2003 = Sin(var1[4]);
  t3479 = Sin(var1[2]);
  t713 = Cos(var1[2]);
  t3482 = t1997*t1064;
  t3485 = -1.*t1684*t2003;
  t3684 = t3482 + t3485;
  t4025 = -1.*t1064;
  t4086 = 1. + t4025;
  t4102 = -0.9063*t4086;
  t4207 = -1.078185*t1064;
  t4219 = t4102 + t4207;
  t1995 = -1.*t1064*t1684;
  t2759 = -1.*t1997*t2003;
  t3383 = t1995 + t2759;
  t3430 = t713*t3383;
  t3758 = -1.*t3479*t3684;
  t3791 = t3430 + t3758;
  t5090 = t713*t3684;
  t4711 = t1064*t1684;
  t4716 = t1997*t2003;
  t4782 = t4711 + t4716;
  t5026 = -1.*t3479*t4782;
  t5160 = t5026 + t5090;
  t6149 = t3479*t3383;
  t6341 = t6149 + t5090;
  t6453 = t713*t4782;
  t6524 = t3479*t3684;
  t6696 = t6453 + t6524;
  t7438 = 0.4999*t1684;
  t7443 = t4219*t1684;
  t7447 = -0.17188499999999995*t1997*t2003;
  t7467 = t7438 + t7443 + t7447;
  t7543 = -1.*t1997;
  t7545 = 1. + t7543;
  t7550 = -0.4999*t7545;
  t7564 = t1997*t4219;
  t7565 = 0.17188499999999995*t1684*t2003;
  t7575 = t7550 + t7564 + t7565;
  t6747 = -1.*t3479*t3383;
  t6762 = -1.*t713*t3684;
  t6774 = t6747 + t6762;
  t5213 = 0.4999*t1064;
  t5268 = t4219*t1064;
  t5337 = Power(t2003,2);
  t5345 = -0.17188499999999995*t5337;
  t5710 = t5213 + t5268 + t5345;
  t4015 = 0.4999*t2003;
  t4621 = t4219*t2003;
  t4657 = 0.17188499999999995*t1064*t2003;
  t4700 = t4015 + t4621 + t4657;
  t7116 = -1.*t713*t4782;
  t7137 = t7116 + t3758;
  t6837 = 0.85216*t6774*t6341;
  t6841 = Power(t5160,2);
  t6880 = 0.85216*t6841;
  t6949 = Power(t3791,2);
  t7085 = 0.85216*t6949;
  t7199 = 0.85216*t7137*t6696;
  t7279 = t6837 + t6880 + t7085 + t7199;
  t7479 = -1.*t7467*t3684;
  t7595 = -1.*t3383*t7575;
  t7686 = t7479 + t7595;
  t7860 = t7467*t4782;
  t7866 = t3684*t7575;
  t7899 = t7860 + t7866;
  t8025 = 0.85216*t7137*t7686;
  t8030 = 0.85216*t6774*t7899;
  t8038 = t8025 + t8030;
  t7795 = 0.85216*t5160*t7686;
  t7902 = 0.85216*t3791*t7899;
  t7929 = t7795 + t7902;
  t5179 = 0.85216*t4700*t5160;
  t5865 = 0.85216*t5710*t3791;
  t5890 = t5179 + t5865;
  t7990 = 0.85216*t5710*t6774;
  t7993 = 0.85216*t4700*t7137;
  t8000 = t7990 + t7993;
  p_output1[0]=var2[2]*(-0.5*(1.70432*t3791*t6341 + 1.70432*t5160*t6696)*var2[0] - 0.5*t7279*var2[1] - 0.5*t7929*var2[2] - 0.5*t5890*var2[3] + 0.07323676079999998*t3791*var2[4]);
  p_output1[1]=var2[2]*(-0.5*t7279*var2[0] - 0.5*(1.70432*t3791*t6774 + 1.70432*t5160*t7137)*var2[1] - 0.5*t8038*var2[2] - 0.5*t8000*var2[3] + 0.07323676079999998*t6774*var2[4]);
  p_output1[2]=(-0.5*t7929*var2[0] - 0.5*t8038*var2[1])*var2[2];
  p_output1[3]=(-0.5*t5890*var2[0] - 0.5*t8000*var2[1])*var2[2];
  p_output1[4]=(0.07323676079999998*t3791*var2[0] + 0.07323676079999998*t6774*var2[1])*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec_L3_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L3_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

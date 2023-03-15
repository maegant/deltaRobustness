/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:04 GMT-08:00
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
  double t3208;
  double t3328;
  double t2698;
  double t3661;
  double t3295;
  double t3684;
  double t3697;
  double t3942;
  double t3956;
  double t3968;
  double t4223;
  double t4228;
  double t4236;
  double t4296;
  double t4304;
  double t294;
  double t1082;
  double t3906;
  double t3912;
  double t3921;
  double t4017;
  double t4018;
  double t3927;
  double t3970;
  double t3975;
  double t3747;
  double t3866;
  double t4116;
  double t4119;
  double t4184;
  double t4220;
  double t4315;
  double t4344;
  double t4346;
  double t4349;
  double t4357;
  double t4376;
  double t4387;
  double t4617;
  double t4618;
  double t4628;
  double t4347;
  double t4407;
  double t4420;
  double t4703;
  double t4710;
  t3208 = Cos(var2[5]);
  t3328 = Sin(var2[2]);
  t2698 = Cos(var2[2]);
  t3661 = Sin(var2[5]);
  t3295 = t2698*t3208;
  t3684 = -1.*t3328*t3661;
  t3697 = t3295 + t3684;
  t3942 = t3208*t3328;
  t3956 = t2698*t3661;
  t3968 = t3942 + t3956;
  t4223 = -1.*t3208;
  t4228 = 1. + t4223;
  t4236 = -0.4999*t4228;
  t4296 = -0.6493*t3208;
  t4304 = t4236 + t4296;
  t294 = -1.*var1[3];
  t1082 = var3[5] + t294;
  t3906 = -1.*t3208*t3328;
  t3912 = -1.*t2698*t3661;
  t3921 = t3906 + t3912;
  t4017 = -1.*var1[0];
  t4018 = var3[0] + t4017;
  t3927 = 3.4261*t3921*t3697;
  t3970 = 3.4261*t3968*t3697;
  t3975 = t3927 + t3970;
  t3747 = -1.*var1[1];
  t3866 = var3[1] + t3747;
  t4116 = Power(t3697,2);
  t4119 = 3.4261*t4116;
  t4184 = -1.*var1[2];
  t4220 = var3[2] + t4184;
  t4315 = t4304*t3661;
  t4344 = 0.14939999999999998*t3208*t3661;
  t4346 = t4315 + t4344;
  t4349 = t4304*t3208;
  t4357 = Power(t3661,2);
  t4376 = -0.14939999999999998*t4357;
  t4387 = t4349 + t4376;
  t4617 = 3.4261*t4346*t3697;
  t4618 = 3.4261*t3921*t4387;
  t4628 = t4617 + t4618;
  t4347 = 3.4261*t3968*t4346;
  t4407 = 3.4261*t3697*t4387;
  t4420 = t4347 + t4407;
  t4703 = -0.5118593399999999*t4387;
  t4710 = 0.0389 + t4703;
  p_output1[0]=-0.5118593399999999*t1082*t3697 + t3866*t3975 + t4018*(3.4261*Power(t3968,2) + t4119) + t4220*t4420;
  p_output1[1]=-0.5118593399999999*t1082*t3921 + t3975*t4018 + t3866*(3.4261*Power(t3921,2) + t4119) + t4220*t4628;
  p_output1[2]=t4220*(0.0389 + 3.4261*Power(t4346,2) + 3.4261*Power(t4387,2)) + t4018*t4420 + t3866*t4628 + t1082*t4710;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0.11537178539599996*t1082 - 0.5118593399999999*t3866*t3921 - 0.5118593399999999*t3697*t4018 + t4220*t4710;
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap4_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap4_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

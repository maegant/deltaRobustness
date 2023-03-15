/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:24:56 GMT-08:00
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
  double t328;
  double t56;
  double t217;
  double t371;
  double t507;
  double t547;
  double t564;
  double t291;
  double t394;
  double t421;
  double t1059;
  double t1068;
  double t1510;
  double t1518;
  double t1605;
  double t869;
  double t905;
  double t934;
  double t981;
  double t987;
  double t1037;
  double t754;
  double t757;
  double t1716;
  double t1852;
  double t2062;
  double t2121;
  double t2181;
  double t2235;
  double t2314;
  double t2072;
  double t2537;
  double t2569;
  double t2806;
  double t2845;
  double t2941;
  double t2575;
  double t2945;
  double t3414;
  double t3490;
  t328 = Cos(var1[2]);
  t56 = Cos(var1[3]);
  t217 = Sin(var1[2]);
  t371 = Sin(var1[3]);
  t507 = t328*t56;
  t547 = -1.*t217*t371;
  t564 = t507 + t547;
  t291 = t56*t217;
  t394 = t328*t371;
  t421 = t291 + t394;
  t1059 = -1.*t56;
  t1068 = 1. + t1059;
  t1510 = -0.4999*t1068;
  t1518 = -0.6493*t56;
  t1605 = t1510 + t1518;
  t869 = -1.*t56*t217;
  t905 = -1.*t328*t371;
  t934 = t869 + t905;
  t981 = 3.4261*t934*t564;
  t987 = 3.4261*t421*t564;
  t1037 = t981 + t987;
  t754 = Power(t564,2);
  t757 = 3.4261*t754;
  t1716 = t1605*t371;
  t1852 = 0.14939999999999998*t56*t371;
  t2062 = t1716 + t1852;
  t2121 = t1605*t56;
  t2181 = Power(t371,2);
  t2235 = -0.14939999999999998*t2181;
  t2314 = t2121 + t2235;
  t2072 = 3.4261*t421*t2062;
  t2537 = 3.4261*t564*t2314;
  t2569 = t2072 + t2537;
  t2806 = 3.4261*t2062*t564;
  t2845 = 3.4261*t934*t2314;
  t2941 = t2806 + t2845;
  t2575 = -0.5118593399999999*t564;
  t2945 = -0.5118593399999999*t934;
  t3414 = -0.5118593399999999*t2314;
  t3490 = 0.0389 + t3414;
  p_output1[0]=3.4261*Power(t421,2) + t757;
  p_output1[1]=t1037;
  p_output1[2]=t2569;
  p_output1[3]=t2575;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=t1037;
  p_output1[8]=t757 + 3.4261*Power(t934,2);
  p_output1[9]=t2941;
  p_output1[10]=t2945;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=t2569;
  p_output1[15]=t2941;
  p_output1[16]=0.0389 + 3.4261*Power(t2062,2) + 3.4261*Power(t2314,2);
  p_output1[17]=t3490;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=t2575;
  p_output1[22]=t2945;
  p_output1[23]=t3490;
  p_output1[24]=0.11537178539599996;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat2_amber3_PF.hh"

namespace SymFunction
{

void Mmat2_amber3_PF_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

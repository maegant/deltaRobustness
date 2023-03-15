/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:02 GMT-08:00
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
  double t418;
  double t163;
  double t319;
  double t422;
  double t649;
  double t383;
  double t428;
  double t436;
  double t35;
  double t707;
  double t708;
  double t742;
  double t24;
  double t453;
  double t980;
  double t982;
  double t1138;
  double t1200;
  double t1281;
  double t1306;
  double t1369;
  double t1406;
  double t1537;
  double t1837;
  double t1924;
  double t2007;
  double t2040;
  double t2050;
  double t2056;
  double t2751;
  double t2752;
  double t2788;
  double t2068;
  double t2076;
  double t2882;
  double t2204;
  double t2217;
  double t2238;
  double t3908;
  double t3909;
  double t3925;
  double t3938;
  double t3967;
  double t4005;
  double t3639;
  double t3640;
  double t3751;
  double t3788;
  double t4009;
  double t4022;
  double t4063;
  double t4065;
  double t4187;
  double t4201;
  double t4206;
  double t4269;
  double t5300;
  double t5304;
  double t5412;
  double t5433;
  double t5437;
  double t5497;
  double t3574;
  double t3586;
  double t3635;
  double t4273;
  double t4295;
  double t4664;
  double t4918;
  double t4950;
  double t4960;
  double t5547;
  double t5550;
  double t5557;
  double t5908;
  double t5926;
  double t5975;
  double t6003;
  double t5647;
  double t5655;
  double t5675;
  double t5721;
  double t5766;
  double t5822;
  double t6581;
  double t6611;
  double t6754;
  t418 = Cos(var1[7]);
  t163 = Cos(var1[8]);
  t319 = Sin(var1[7]);
  t422 = Sin(var1[8]);
  t649 = Cos(var1[6]);
  t383 = -1.*t163*t319;
  t428 = -1.*t418*t422;
  t436 = t383 + t428;
  t35 = Sin(var1[6]);
  t707 = t418*t163;
  t708 = -1.*t319*t422;
  t742 = t707 + t708;
  t24 = Cos(var1[2]);
  t453 = t35*t436;
  t980 = t649*t742;
  t982 = t453 + t980;
  t1138 = t24*t982;
  t1200 = Sin(var1[2]);
  t1281 = t649*t436;
  t1306 = -1.*t35*t742;
  t1369 = t1281 + t1306;
  t1406 = t1200*t1369;
  t1537 = t1138 + t1406;
  t1837 = t163*t319;
  t1924 = t418*t422;
  t2007 = t1837 + t1924;
  t2040 = -1.*t35*t2007;
  t2050 = t2040 + t980;
  t2056 = t24*t2050;
  t2751 = -1.*t1200*t982;
  t2752 = t24*t1369;
  t2788 = t2751 + t2752;
  t2068 = -1.*t649*t2007;
  t2076 = t2068 + t1306;
  t2882 = -1.*t1200*t2050;
  t2204 = t649*t2007;
  t2217 = t35*t742;
  t2238 = t2204 + t2217;
  t3908 = -1.*t163;
  t3909 = 1. + t3908;
  t3925 = -1.3127*t3909;
  t3938 = -1.3127*t163;
  t3967 = -0.06*t422;
  t4005 = t3925 + t3938 + t3967;
  t3639 = -1.*t418;
  t3640 = 1. + t3639;
  t3751 = -0.9063*t3640;
  t3788 = -0.06*t163*t319;
  t4009 = t418*t4005;
  t4022 = t3751 + t3788 + t4009;
  t4063 = t649*t4022;
  t4065 = 0.06*t418*t163;
  t4187 = 0.9063*t319;
  t4201 = t319*t4005;
  t4206 = t4065 + t4187 + t4201;
  t4269 = -1.*t35*t4206;
  t5300 = 0.9063*t418;
  t5304 = t5300 + t3788 + t4009;
  t5412 = -0.06*t418*t163;
  t5433 = -0.9063*t319;
  t5437 = -1.*t319*t4005;
  t5497 = t5412 + t5433 + t5437;
  t3574 = -1.*t649;
  t3586 = 1. + t3574;
  t3635 = -0.4999*t3586;
  t4273 = t3635 + t4063 + t4269;
  t4295 = -1.*t35*t436;
  t4664 = 0.4999*t35;
  t4918 = t35*t4022;
  t4950 = t649*t4206;
  t4960 = t4664 + t4918 + t4950;
  t5547 = -1.*t418*t163;
  t5550 = t319*t422;
  t5557 = t5547 + t5550;
  t5908 = -0.06*t418*t422;
  t5926 = t3788 + t5908;
  t5975 = 0.06*t319*t422;
  t6003 = t5412 + t5975;
  t5647 = t649*t5557;
  t5655 = t4295 + t5647;
  t5675 = -1.*t4273*t5655;
  t5721 = t35*t5557;
  t5766 = t1281 + t5721;
  t5822 = -1.*t4960*t5766;
  t6581 = -1.*t4206*t436;
  t6611 = 0.4999*t742;
  t6754 = -1.*t4022*t5557;
  p_output1[0]=var2[8]*(0.03428571*(t2056 - 1.*t1200*t2238)*var2[2] + 0.03428571*(t2056 + t1200*t2076)*var2[6] + 0.03428571*t1537*var2[7] + 0.03428571*t1537*var2[8]);
  p_output1[1]=var2[8]*(0.03428571*(-1.*t2238*t24 + t2882)*var2[2] + 0.03428571*(t2076*t24 + t2882)*var2[6] + 0.03428571*t2788*var2[7] + 0.03428571*t2788*var2[8]);
  p_output1[2]=var2[8]*(0.03428571*(-1.*t1369*t4960 - 1.*t1369*(-0.4999*t35 - 1.*t35*t4022 - 1.*t4206*t649) - 1.*t4273*(t4295 - 1.*t649*t742) - 1.*(t4063 + t4269 + 0.4999*t649)*t982)*var2[6] + 0.03428571*(t5675 + t5822 - 1.*t1369*(-1.*t35*t5304 + t5497*t649) - 1.*(t35*t5497 + t5304*t649)*t982)*var2[7] + 0.03428571*(t5675 + t5822 - 1.*t1369*(-1.*t35*t5926 + t6003*t649) - 1.*(t35*t6003 + t5926*t649)*t982)*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[8]*(0.03428571*(-1.*t436*t5497 + t6581 + t6611 + t6754 - 1.*t5304*t742)*var2[7] + 0.03428571*(-1.*t436*t6003 + t6581 + t6611 + t6754 - 1.*t5926*t742)*var2[8]);
  p_output1[7]=0.03428571*(0.9063*t163 + t163*t4005 + 0.06*t163*t422)*Power(var2[8],2);
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec_L7_J9_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L7_J9_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

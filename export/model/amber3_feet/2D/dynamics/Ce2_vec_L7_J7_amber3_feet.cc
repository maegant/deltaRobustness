/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:52 GMT-08:00
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
  double t1372;
  double t1252;
  double t1258;
  double t1485;
  double t2025;
  double t1276;
  double t1522;
  double t1708;
  double t1077;
  double t2087;
  double t2213;
  double t2232;
  double t2388;
  double t537;
  double t3029;
  double t3032;
  double t3060;
  double t2572;
  double t2797;
  double t2803;
  double t2848;
  double t2909;
  double t2919;
  double t2990;
  double t1941;
  double t2257;
  double t2297;
  double t2302;
  double t2566;
  double t2591;
  double t2607;
  double t2618;
  double t3077;
  double t3127;
  double t3240;
  double t3281;
  double t3299;
  double t3300;
  double t3331;
  double t3341;
  double t4027;
  double t4070;
  double t4165;
  double t4187;
  double t4205;
  double t4231;
  double t3834;
  double t3838;
  double t3839;
  double t3936;
  double t4672;
  double t4678;
  double t4689;
  double t4701;
  double t4714;
  double t4734;
  double t4738;
  double t4744;
  double t4745;
  double t4765;
  double t4819;
  double t5695;
  double t5759;
  double t5798;
  double t5809;
  double t5871;
  double t5936;
  double t5576;
  double t5597;
  double t5666;
  double t5670;
  double t6043;
  double t6064;
  double t6088;
  double t6115;
  double t5998;
  double t6035;
  double t5069;
  double t5070;
  double t5172;
  double t2661;
  double t2991;
  double t2998;
  double t3021;
  double t5012;
  double t5031;
  double t5052;
  double t3355;
  double t3417;
  double t3489;
  double t3490;
  double t3523;
  double t3937;
  double t3951;
  double t4274;
  double t4315;
  double t4485;
  double t4495;
  double t4535;
  double t4546;
  double t4859;
  double t4862;
  double t5324;
  double t5433;
  double t4938;
  double t5058;
  double t5300;
  double t5473;
  double t5509;
  double t5671;
  double t5962;
  double t5969;
  double t5997;
  double t6039;
  double t6146;
  double t6205;
  double t6219;
  double t6224;
  double t6227;
  double t6257;
  double t6326;
  double t6365;
  double t6389;
  double t6435;
  double t6466;
  double t7208;
  double t7280;
  double t7304;
  double t7406;
  double t7440;
  double t5976;
  double t6220;
  double t6323;
  double t6470;
  double t6471;
  double t6826;
  double t6945;
  double t6946;
  double t4349;
  double t4605;
  double t4626;
  double t8302;
  double t8313;
  double t8322;
  double t6692;
  double t6712;
  double t6713;
  double t3354;
  double t3661;
  double t3713;
  double t8147;
  double t8252;
  double t8255;
  t1372 = Cos(var1[7]);
  t1252 = Cos(var1[8]);
  t1258 = Sin(var1[7]);
  t1485 = Sin(var1[8]);
  t2025 = Cos(var1[6]);
  t1276 = t1252*t1258;
  t1522 = t1372*t1485;
  t1708 = t1276 + t1522;
  t1077 = Sin(var1[6]);
  t2087 = t1372*t1252;
  t2213 = -1.*t1258*t1485;
  t2232 = t2087 + t2213;
  t2388 = Sin(var1[2]);
  t537 = Cos(var1[2]);
  t3029 = -1.*t1252*t1258;
  t3032 = -1.*t1372*t1485;
  t3060 = t3029 + t3032;
  t2572 = -1.*t1077*t2232;
  t2797 = -1.*t1252;
  t2803 = 1. + t2797;
  t2848 = -1.3127*t2803;
  t2909 = -1.3127*t1252;
  t2919 = -0.06*t1485;
  t2990 = t2848 + t2909 + t2919;
  t1941 = -1.*t1077*t1708;
  t2257 = t2025*t2232;
  t2297 = t1941 + t2257;
  t2302 = t537*t2297;
  t2566 = -1.*t2025*t1708;
  t2591 = t2566 + t2572;
  t2607 = t2388*t2591;
  t2618 = t2302 + t2607;
  t3077 = -1.*t1077*t3060;
  t3127 = -1.*t2025*t2232;
  t3240 = t3077 + t3127;
  t3281 = t2388*t3240;
  t3299 = t2025*t3060;
  t3300 = t3299 + t2572;
  t3331 = t537*t3300;
  t3341 = t3281 + t3331;
  t4027 = -1.*t1372;
  t4070 = 1. + t4027;
  t4165 = -0.9063*t4070;
  t4187 = -0.06*t1252*t1258;
  t4205 = t1372*t2990;
  t4231 = t4165 + t4187 + t4205;
  t3834 = 0.06*t1372*t1252;
  t3838 = 0.9063*t1258;
  t3839 = t1258*t2990;
  t3936 = t3834 + t3838 + t3839;
  t4672 = t1077*t3060;
  t4678 = t4672 + t2257;
  t4689 = t537*t4678;
  t4701 = t2388*t3300;
  t4714 = t4689 + t4701;
  t4734 = t2388*t2297;
  t4738 = t2025*t1708;
  t4744 = t1077*t2232;
  t4745 = t4738 + t4744;
  t4765 = t537*t4745;
  t4819 = t4734 + t4765;
  t5695 = -1.*t2025;
  t5759 = 1. + t5695;
  t5798 = -0.4999*t5759;
  t5809 = t2025*t4231;
  t5871 = -1.*t1077*t3936;
  t5936 = t5798 + t5809 + t5871;
  t5576 = 0.4999*t1077;
  t5597 = t1077*t4231;
  t5666 = t2025*t3936;
  t5670 = t5576 + t5597 + t5666;
  t6043 = -0.4999*t1077;
  t6064 = -1.*t1077*t4231;
  t6088 = -1.*t2025*t3936;
  t6115 = t6043 + t6064 + t6088;
  t5998 = 0.4999*t2025;
  t6035 = t5998 + t5809 + t5871;
  t5069 = -1.*t2388*t2297;
  t5070 = t537*t2591;
  t5172 = t5069 + t5070;
  t2661 = 0.9063*t1252;
  t2991 = t1252*t2990;
  t2998 = 0.06*t1252*t1485;
  t3021 = t2661 + t2991 + t2998;
  t5012 = t537*t3240;
  t5031 = -1.*t2388*t3300;
  t5052 = t5012 + t5031;
  t3355 = Power(t1252,2);
  t3417 = -0.06*t3355;
  t3489 = 0.9063*t1485;
  t3490 = t2990*t1485;
  t3523 = t3417 + t3489 + t3490;
  t3937 = t3936*t1708;
  t3951 = 0.4999*t2232;
  t4274 = t4231*t2232;
  t4315 = t3937 + t3951 + t4274;
  t4485 = -1.*t4231*t3060;
  t4495 = 0.4999*t1708;
  t4535 = -1.*t3936*t2232;
  t4546 = t4485 + t4495 + t4535;
  t4859 = -1.*t2388*t4678;
  t4862 = t4859 + t3331;
  t5324 = -1.*t2388*t4745;
  t5433 = t2302 + t5324;
  t4938 = 1.142857*t3341*t4862;
  t5058 = 1.142857*t5052*t4714;
  t5300 = 1.142857*t5172*t4819;
  t5473 = 1.142857*t2618*t5433;
  t5509 = t4938 + t5058 + t5300 + t5473;
  t5671 = -1.*t5670*t4678;
  t5962 = -1.*t5936*t3300;
  t5969 = t5671 + t5962;
  t5997 = -1.*t5936*t3240;
  t6039 = -1.*t6035*t4678;
  t6146 = -1.*t6115*t3300;
  t6205 = -1.*t5670*t3300;
  t6219 = t5997 + t6039 + t6146 + t6205;
  t6224 = t5936*t2297;
  t6227 = t5670*t4745;
  t6257 = t6224 + t6227;
  t6326 = t6115*t2297;
  t6365 = t5670*t2297;
  t6389 = t5936*t2591;
  t6435 = t6035*t4745;
  t6466 = t6326 + t6365 + t6389 + t6435;
  t7208 = 1.142857*t5969*t5172;
  t7280 = 1.142857*t6219*t5433;
  t7304 = 1.142857*t5052*t6257;
  t7406 = 1.142857*t4862*t6466;
  t7440 = t7208 + t7280 + t7304 + t7406;
  t5976 = 1.142857*t5969*t2618;
  t6220 = 1.142857*t6219*t4819;
  t6323 = 1.142857*t3341*t6257;
  t6470 = 1.142857*t4714*t6466;
  t6471 = t5976 + t6220 + t6323 + t6470;
  t6826 = 1.142857*t4315*t5052;
  t6945 = 1.142857*t4546*t5172;
  t6946 = t6826 + t6945;
  t4349 = 1.142857*t4315*t3341;
  t4605 = 1.142857*t4546*t2618;
  t4626 = t4349 + t4605;
  t8302 = 1.142857*t4546*t6219;
  t8313 = 1.142857*t4315*t6466;
  t8322 = t8302 + t8313;
  t6692 = 1.142857*t3021*t5052;
  t6712 = 1.142857*t3523*t5172;
  t6713 = t6692 + t6712;
  t3354 = 1.142857*t3021*t3341;
  t3661 = 1.142857*t3523*t2618;
  t3713 = t3354 + t3661;
  t8147 = 1.142857*t3523*t6219;
  t8252 = 1.142857*t3021*t6466;
  t8255 = t8147 + t8252;
  p_output1[0]=var2[6]*(-0.5*(2.285714*t3341*t4714 + 2.285714*t2618*t4819)*var2[0] - 0.5*t5509*var2[1] - 0.5*t6471*var2[2] - 0.5*t4626*var2[6] - 0.5*t3713*var2[7] + 0.03428571*t2618*var2[8]);
  p_output1[1]=var2[6]*(-0.5*t5509*var2[0] - 0.5*(2.285714*t4862*t5052 + 2.285714*t5172*t5433)*var2[1] - 0.5*t7440*var2[2] - 0.5*t6946*var2[6] - 0.5*t6713*var2[7] + 0.03428571*t5172*var2[8]);
  p_output1[2]=var2[6]*(-0.5*t6471*var2[0] - 0.5*t7440*var2[1] - 0.5*(2.285714*t5969*t6219 + 2.285714*t6257*t6466)*var2[2] - 0.5*t8322*var2[6] - 0.5*t8255*var2[7] + 0.03428571*t6219*var2[8]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-0.5*t4626*var2[0] - 0.5*t6946*var2[1] - 0.5*t8322*var2[2])*var2[6];
  p_output1[7]=(-0.5*t3713*var2[0] - 0.5*t6713*var2[1] - 0.5*t8255*var2[2])*var2[6];
  p_output1[8]=(0.03428571*t2618*var2[0] + 0.03428571*t5172*var2[1] + 0.03428571*t6219*var2[2])*var2[6];
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

#include "Ce2_vec_L7_J7_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L7_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

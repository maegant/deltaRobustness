/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:57 GMT-08:00
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
  double t1209;
  double t890;
  double t943;
  double t1255;
  double t1568;
  double t764;
  double t1574;
  double t1615;
  double t1632;
  double t2033;
  double t2044;
  double t2156;
  double t2186;
  double t2209;
  double t975;
  double t1266;
  double t1270;
  double t1332;
  double t1785;
  double t1849;
  double t2604;
  double t2480;
  double t2487;
  double t2555;
  double t2565;
  double t2611;
  double t3169;
  double t3177;
  double t3239;
  double t3248;
  double t3309;
  double t4148;
  double t4153;
  double t4200;
  double t4276;
  double t4318;
  double t4326;
  double t4344;
  double t4388;
  double t4437;
  double t4619;
  double t1967;
  double t2221;
  double t2305;
  double t2306;
  double t2749;
  double t2759;
  double t2766;
  double t2769;
  double t2825;
  double t5139;
  double t5184;
  double t5282;
  double t5283;
  double t5288;
  double t3682;
  double t4308;
  double t4684;
  double t4754;
  double t4837;
  double t4857;
  double t4961;
  double t5853;
  double t5882;
  double t5890;
  double t5943;
  double t6006;
  double t6007;
  double t5326;
  double t5359;
  double t5394;
  double t5495;
  double t5503;
  double t5505;
  double t5529;
  double t5577;
  double t5583;
  double t5611;
  double t5614;
  double t5617;
  double t5624;
  double t5652;
  double t5692;
  double t5752;
  double t5804;
  double t5986;
  double t6134;
  double t6138;
  double t6434;
  double t6459;
  double t6546;
  double t6556;
  double t6216;
  double t3685;
  double t3687;
  double t3997;
  double t4015;
  double t3719;
  double t3734;
  double t3835;
  double t3962;
  double t3979;
  double t4062;
  double t4069;
  double t5947;
  double t6011;
  double t6079;
  double t6172;
  double t6194;
  double t6225;
  double t7501;
  double t6340;
  double t6356;
  double t6379;
  double t6314;
  double t6318;
  double t6331;
  double t6332;
  double t7502;
  double t7503;
  double t7532;
  double t7534;
  double t7545;
  double t7589;
  double t7614;
  double t7813;
  double t6475;
  double t6654;
  double t6661;
  double t7885;
  double t6730;
  double t6745;
  double t6771;
  double t7031;
  double t7034;
  double t7112;
  double t7412;
  double t7425;
  double t7428;
  double t4836;
  double t5029;
  double t5087;
  double t7849;
  double t7902;
  double t7910;
  double t6111;
  double t6242;
  double t6259;
  double t8167;
  double t8307;
  double t8422;
  double t6676;
  double t6778;
  double t6839;
  double t7128;
  double t7131;
  double t7138;
  double t8511;
  double t8516;
  double t8556;
  double t2623;
  double t2917;
  double t2918;
  double t7300;
  double t7303;
  double t7347;
  double t7516;
  double t5408;
  double t8616;
  double t8617;
  double t8620;
  double t7926;
  double t7982;
  double t8024;
  double t6338;
  double t6403;
  double t6427;
  double t8649;
  double t8653;
  double t8658;
  double t8661;
  double t8662;
  double t7169;
  double t7183;
  double t7205;
  double t8562;
  double t8574;
  double t8598;
  double t8695;
  double t8696;
  double t8697;
  double t8735;
  double t8736;
  double t7251;
  double t8599;
  double t8698;
  double t8699;
  double t8729;
  double t8730;
  t1209 = Cos(var1[3]);
  t890 = Cos(var1[4]);
  t943 = Sin(var1[3]);
  t1255 = Sin(var1[4]);
  t1568 = Sin(var1[2]);
  t764 = Cos(var1[2]);
  t1574 = t1209*t890;
  t1615 = -1.*t943*t1255;
  t1632 = t1574 + t1615;
  t2033 = -1.*t890;
  t2044 = 1. + t2033;
  t2156 = -0.9063*t2044;
  t2186 = -1.0567*t890;
  t2209 = t2156 + t2186;
  t975 = -1.*t890*t943;
  t1266 = -1.*t1209*t1255;
  t1270 = t975 + t1266;
  t1332 = t764*t1270;
  t1785 = -1.*t1568*t1632;
  t1849 = t1332 + t1785;
  t2604 = t764*t1632;
  t2480 = t890*t943;
  t2487 = t1209*t1255;
  t2555 = t2480 + t2487;
  t2565 = -1.*t1568*t2555;
  t2611 = t2565 + t2604;
  t3169 = t1568*t1270;
  t3177 = t3169 + t2604;
  t3239 = t764*t2555;
  t3248 = t1568*t1632;
  t3309 = t3239 + t3248;
  t4148 = 0.4999*t943;
  t4153 = t2209*t943;
  t4200 = -0.15039999999999998*t1209*t1255;
  t4276 = t4148 + t4153 + t4200;
  t4318 = -1.*t1209;
  t4326 = 1. + t4318;
  t4344 = -0.4999*t4326;
  t4388 = t1209*t2209;
  t4437 = 0.15039999999999998*t943*t1255;
  t4619 = t4344 + t4388 + t4437;
  t1967 = 0.4999*t1255;
  t2221 = t2209*t1255;
  t2305 = 0.15039999999999998*t890*t1255;
  t2306 = t1967 + t2221 + t2305;
  t2749 = 0.4999*t890;
  t2759 = t2209*t890;
  t2766 = Power(t1255,2);
  t2769 = -0.15039999999999998*t2766;
  t2825 = t2749 + t2759 + t2769;
  t5139 = -1.*t1209*t890;
  t5184 = t943*t1255;
  t5282 = t5139 + t5184;
  t5283 = t1568*t5282;
  t5288 = t1332 + t5283;
  t3682 = -1.*t1568*t1270;
  t4308 = -1.*t4276*t1632;
  t4684 = -1.*t1270*t4619;
  t4754 = t4308 + t4684;
  t4837 = t4276*t2555;
  t4857 = t1632*t4619;
  t4961 = t4837 + t4857;
  t5853 = -0.4999*t943;
  t5882 = -1.*t2209*t943;
  t5890 = 0.15039999999999998*t1209*t1255;
  t5943 = t5853 + t5882 + t5890;
  t6006 = 0.4999*t1209;
  t6007 = t6006 + t4388 + t4437;
  t5326 = 0.5399209599999999*var2[4]*t5288;
  t5359 = 3.5899*t2306*t3177;
  t5394 = 3.5899*t2825*t5288;
  t5495 = 7.1798*t3177*t3309;
  t5503 = 7.1798*t3177*t5288;
  t5505 = t5495 + t5503;
  t5529 = -1.*var2[0]*t5505;
  t5577 = 3.5899*t3177*t2611;
  t5583 = 3.5899*t1849*t3309;
  t5611 = t764*t5282;
  t5614 = t3682 + t5611;
  t5617 = 3.5899*t3177*t5614;
  t5624 = 3.5899*t1849*t5288;
  t5652 = t5577 + t5583 + t5617 + t5624;
  t5692 = -1.*var2[1]*t5652;
  t5752 = 3.5899*t3177*t4754;
  t5804 = t4276*t1632;
  t5986 = t1270*t4619;
  t6134 = 3.5899*t4961*t5288;
  t6138 = -1.*t1270*t4276;
  t6434 = 0.15039999999999998*t890*t943;
  t6459 = t6434 + t5890;
  t6546 = -0.15039999999999998*t1209*t890;
  t6556 = t6546 + t4437;
  t6216 = -1.*t4619*t5282;
  t3685 = -1.*t764*t1632;
  t3687 = t3682 + t3685;
  t3997 = -1.*t764*t2555;
  t4015 = t3997 + t1785;
  t3719 = 3.5899*t3687*t3177;
  t3734 = Power(t2611,2);
  t3835 = 3.5899*t3734;
  t3962 = Power(t1849,2);
  t3979 = 3.5899*t3962;
  t4062 = 3.5899*t4015*t3309;
  t4069 = t3719 + t3835 + t3979 + t4062;
  t5947 = t5943*t1632;
  t6011 = t2555*t6007;
  t6079 = t5804 + t5947 + t5986 + t6011;
  t6172 = -1.*t1270*t5943;
  t6194 = -1.*t1632*t6007;
  t6225 = t6138 + t6172 + t6194 + t6216;
  t7501 = 0.5399209599999999*var2[4]*t5614;
  t6340 = Power(t890,2);
  t6356 = 0.15039999999999998*t6340;
  t6379 = 0. + t2749 + t2759 + t6356;
  t6314 = -0.4999*t1255;
  t6318 = -1.*t2209*t1255;
  t6331 = -0.15039999999999998*t890*t1255;
  t6332 = t6314 + t6318 + t6331;
  t7502 = 3.5899*t2306*t1849;
  t7503 = 3.5899*t2825*t5614;
  t7532 = 7.1798*t2611*t1849;
  t7534 = 7.1798*t1849*t5614;
  t7545 = t7532 + t7534;
  t7589 = -1.*var2[1]*t7545;
  t7614 = -1.*var2[0]*t5652;
  t7813 = 3.5899*t1849*t4754;
  t6475 = t6459*t1632;
  t6654 = t2555*t6556;
  t6661 = t5804 + t6475 + t5986 + t6654;
  t7885 = 3.5899*t4961*t5614;
  t6730 = -1.*t1270*t6459;
  t6745 = -1.*t1632*t6556;
  t6771 = t6138 + t6730 + t6745 + t6216;
  t7031 = -3.5899*t3177*t1849;
  t7034 = -3.5899*t2611*t3309;
  t7112 = t7031 + t7034;
  t7412 = 3.5899*t4015*t4754;
  t7425 = 3.5899*t3687*t4961;
  t7428 = t7412 + t7425;
  t4836 = 3.5899*t2611*t4754;
  t5029 = 3.5899*t1849*t4961;
  t5087 = t4836 + t5029;
  t7849 = 3.5899*t1849*t6079;
  t7902 = 3.5899*t2611*t6225;
  t7910 = t7813 + t7849 + t7885 + t7902;
  t6111 = 3.5899*t3177*t6079;
  t6242 = 3.5899*t3309*t6225;
  t6259 = t5752 + t6111 + t6134 + t6242;
  t8167 = 3.5899*t1849*t6661;
  t8307 = 3.5899*t2611*t6771;
  t8422 = t7813 + t8167 + t7885 + t8307;
  t6676 = 3.5899*t3177*t6661;
  t6778 = 3.5899*t3309*t6771;
  t6839 = t5752 + t6676 + t6134 + t6778;
  t7128 = -3.5899*t3309*t4754;
  t7131 = -3.5899*t3177*t4961;
  t7138 = t7128 + t7131;
  t8511 = -3.5899*t2611*t4754;
  t8516 = -3.5899*t1849*t4961;
  t8556 = t8511 + t8516;
  t2623 = 3.5899*t2306*t2611;
  t2917 = 3.5899*t2825*t1849;
  t2918 = t2623 + t2917;
  t7300 = 3.5899*t2825*t3687;
  t7303 = 3.5899*t2306*t4015;
  t7347 = t7300 + t7303;
  t7516 = t7502 + t7503;
  t5408 = t5359 + t5394;
  t8616 = 3.5899*t2825*t6079;
  t8617 = 3.5899*t2306*t6225;
  t8620 = t8616 + t8617;
  t7926 = 3.5899*t6379*t2611;
  t7982 = 3.5899*t6332*t1849;
  t8024 = t7926 + t7982 + t7502 + t7503;
  t6338 = 3.5899*t6332*t3177;
  t6403 = 3.5899*t6379*t3309;
  t6427 = t6338 + t5359 + t6403 + t5394;
  t8649 = 3.5899*t6379*t4754;
  t8653 = 3.5899*t6332*t4961;
  t8658 = 3.5899*t2825*t6661;
  t8661 = 3.5899*t2306*t6771;
  t8662 = t8649 + t8653 + t8658 + t8661;
  t7169 = -3.5899*t2825*t3177;
  t7183 = -3.5899*t2306*t3309;
  t7205 = t7169 + t7183;
  t8562 = -3.5899*t2306*t2611;
  t8574 = -3.5899*t2825*t1849;
  t8598 = t8562 + t8574;
  t8695 = -3.5899*t2306*t4754;
  t8696 = -3.5899*t2825*t4961;
  t8697 = -0.0378 + t8695 + t8696;
  t8735 = 0.5399209599999999*var2[1]*t5614;
  t8736 = 0.5399209599999999*var2[0]*t5288;
  t7251 = 0.5399209599999999*t3177;
  t8599 = 0.5399209599999999*t1849;
  t8698 = 0.5399209599999999*t4961;
  t8699 = -0.0378 + t8698;
  t8729 = 0.5399209599999999*t2825;
  t8730 = -0.0378 + t8729;
  p_output1[0]=-1.*(7.1798*t1849*t3177 + 7.1798*t2611*t3309)*var2[0] - 1.*t4069*var2[1] - 1.*t5087*var2[2] - 1.*t2918*var2[3] + 0.5399209599999999*t1849*var2[4];
  p_output1[1]=t5326 + t5529 + t5692 - 1.*t6259*var2[2] - 1.*t5408*var2[3];
  p_output1[2]=t5326 + t5529 + t5692 - 1.*t6839*var2[2] - 1.*t6427*var2[3];
  p_output1[3]=-3.5899*Power(t3177,2) - 3.5899*Power(t3309,2);
  p_output1[4]=t7112;
  p_output1[5]=t7138;
  p_output1[6]=t7205;
  p_output1[7]=t7251;
  p_output1[8]=-1.*t4069*var2[0] - 1.*(7.1798*t1849*t3687 + 7.1798*t2611*t4015)*var2[1] - 1.*t7428*var2[2] - 1.*t7347*var2[3] + 0.5399209599999999*t3687*var2[4];
  p_output1[9]=t7501 + t7589 + t7614 - 1.*t7910*var2[2] - 1.*t7516*var2[3];
  p_output1[10]=t7501 + t7589 + t7614 - 1.*t8422*var2[2] - 1.*t8024*var2[3];
  p_output1[11]=t7112;
  p_output1[12]=-3.5899*t3734 - 3.5899*t3962;
  p_output1[13]=t8556;
  p_output1[14]=t8598;
  p_output1[15]=t8599;
  p_output1[16]=-1.*t5087*var2[0] - 1.*t7428*var2[1];
  p_output1[17]=-1.*t6259*var2[0] - 1.*t7910*var2[1] - 1.*(7.1798*t4961*t6079 + 7.1798*t4754*t6225)*var2[2] - 1.*t8620*var2[3] + 0.5399209599999999*t6079*var2[4];
  p_output1[18]=-1.*t6839*var2[0] - 1.*t8422*var2[1] - 1.*(7.1798*t4961*t6661 + 7.1798*t4754*t6771)*var2[2] - 1.*t8662*var2[3] + 0.5399209599999999*t6661*var2[4];
  p_output1[19]=t7138;
  p_output1[20]=t8556;
  p_output1[21]=-0.0378 - 3.5899*Power(t4754,2) - 3.5899*Power(t4961,2);
  p_output1[22]=t8697;
  p_output1[23]=t8699;
  p_output1[24]=-1.*t2918*var2[0] - 1.*t7347*var2[1];
  p_output1[25]=-1.*t5408*var2[0] - 1.*t7516*var2[1] - 1.*t8620*var2[2];
  p_output1[26]=-1.*t6427*var2[0] - 1.*t8024*var2[1] - 1.*t8662*var2[2] - 1.*(7.1798*t2825*t6332 + 7.1798*t2306*t6379)*var2[3] + 0.5399209599999999*t6332*var2[4];
  p_output1[27]=t7205;
  p_output1[28]=t8598;
  p_output1[29]=t8697;
  p_output1[30]=-0.0378 - 3.5899*Power(t2306,2) - 3.5899*Power(t2825,2);
  p_output1[31]=t8730;
  p_output1[32]=0.5399209599999999*t1849*var2[0] + 0.5399209599999999*t3687*var2[1];
  p_output1[33]=t8735 + t8736 + 0.5399209599999999*t6079*var2[2];
  p_output1[34]=t8735 + t8736 + 0.5399209599999999*t6661*var2[2] + 0.5399209599999999*t6332*var2[3];
  p_output1[35]=t7251;
  p_output1[36]=t8599;
  p_output1[37]=t8699;
  p_output1[38]=t8730;
  p_output1[39]=-0.11900411238399997;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx3_amber3_feet.hh"

namespace RightSS1
{

void J_MmatDx3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

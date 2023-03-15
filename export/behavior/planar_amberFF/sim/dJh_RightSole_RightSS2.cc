/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:53 GMT-08:00
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
  double t443;
  double t44;
  double t221;
  double t533;
  double t822;
  double t273;
  double t747;
  double t753;
  double t36;
  double t1049;
  double t1077;
  double t1287;
  double t2578;
  double t774;
  double t1413;
  double t1614;
  double t17;
  double t2719;
  double t3007;
  double t3051;
  double t4138;
  double t4469;
  double t4648;
  double t4691;
  double t4983;
  double t5448;
  double t5451;
  double t5452;
  double t3068;
  double t7415;
  double t7428;
  double t7431;
  double t3650;
  double t7554;
  double t7561;
  double t7566;
  double t7574;
  double t7575;
  double t7577;
  double t7530;
  double t7541;
  double t7542;
  double t7550;
  double t7579;
  double t7583;
  double t7588;
  double t7591;
  double t7594;
  double t7595;
  double t7628;
  double t7629;
  double t7621;
  double t7622;
  double t7623;
  double t7632;
  double t7637;
  double t7638;
  double t7521;
  double t7586;
  double t7596;
  double t7600;
  double t7603;
  double t7605;
  double t7608;
  double t7613;
  double t5435;
  double t7634;
  double t7635;
  double t5847;
  double t7672;
  double t7676;
  double t7681;
  double t7682;
  double t7683;
  double t7684;
  double t7704;
  double t7705;
  double t7706;
  double t7709;
  double t7710;
  double t7712;
  double t7713;
  double t2072;
  double t3183;
  double t7698;
  double t7699;
  double t7700;
  double t7693;
  double t7694;
  double t7695;
  double t7670;
  double t7671;
  double t7741;
  double t7742;
  double t7686;
  double t7692;
  double t7697;
  double t7752;
  double t7753;
  double t7754;
  double t7756;
  double t7757;
  double t7758;
  double t7711;
  double t7714;
  double t7715;
  double t7716;
  double t7717;
  double t7718;
  double t7719;
  double t7720;
  double t7723;
  double t7724;
  double t7726;
  double t7729;
  double t7730;
  double t7731;
  double t7732;
  double t7733;
  double t7762;
  double t7763;
  double t7764;
  double t7766;
  double t7767;
  double t7768;
  double t7736;
  double t7737;
  t443 = Cos(var1[7]);
  t44 = Cos(var1[8]);
  t221 = Sin(var1[7]);
  t533 = Sin(var1[8]);
  t822 = Cos(var1[6]);
  t273 = -1.*t44*t221;
  t747 = -1.*t443*t533;
  t753 = t273 + t747;
  t36 = Sin(var1[6]);
  t1049 = t443*t44;
  t1077 = -1.*t221*t533;
  t1287 = t1049 + t1077;
  t2578 = Cos(var1[2]);
  t774 = t36*t753;
  t1413 = t822*t1287;
  t1614 = t774 + t1413;
  t17 = Sin(var1[2]);
  t2719 = t822*t753;
  t3007 = -1.*t36*t1287;
  t3051 = t2719 + t3007;
  t4138 = t44*t221;
  t4469 = t443*t533;
  t4648 = t4138 + t4469;
  t4691 = -1.*t36*t4648;
  t4983 = t4691 + t1413;
  t5448 = t822*t4648;
  t5451 = t36*t1287;
  t5452 = t5448 + t5451;
  t3068 = t2578*t3051;
  t7415 = -1.*t36*t753;
  t7428 = -1.*t822*t1287;
  t7431 = t7415 + t7428;
  t3650 = -1.*t17*t3051;
  t7554 = -1.*t44;
  t7561 = 1. + t7554;
  t7566 = -1.3127*t7561;
  t7574 = -1.3127*t44;
  t7575 = -0.06*t533;
  t7577 = t7566 + t7574 + t7575;
  t7530 = -1.*t443;
  t7541 = 1. + t7530;
  t7542 = -0.9063*t7541;
  t7550 = -0.06*t44*t221;
  t7579 = t443*t7577;
  t7583 = t7542 + t7550 + t7579;
  t7588 = 0.06*t443*t44;
  t7591 = 0.9063*t221;
  t7594 = t221*t7577;
  t7595 = t7588 + t7591 + t7594;
  t7628 = t822*t7583;
  t7629 = -1.*t36*t7595;
  t7621 = -1.*t822;
  t7622 = 1. + t7621;
  t7623 = -0.4999*t7622;
  t7632 = t7623 + t7628 + t7629;
  t7637 = 0.4999*t822;
  t7638 = t7637 + t7628 + t7629;
  t7521 = -0.4999*t36;
  t7586 = -1.*t36*t7583;
  t7596 = -1.*t822*t7595;
  t7600 = t7521 + t7586 + t7596;
  t7603 = 0.4999*t36;
  t7605 = t36*t7583;
  t7608 = t822*t7595;
  t7613 = t7603 + t7605 + t7608;
  t5435 = -1.*t17*t4983;
  t7634 = -1.*t822*t4648;
  t7635 = t7634 + t3007;
  t5847 = t2578*t4983;
  t7672 = 0.9063*t443;
  t7676 = t7672 + t7550 + t7579;
  t7681 = -0.06*t443*t44;
  t7682 = -0.9063*t221;
  t7683 = -1.*t221*t7577;
  t7684 = t7681 + t7682 + t7683;
  t7704 = -1.*t443*t44;
  t7705 = t221*t533;
  t7706 = t7704 + t7705;
  t7709 = t822*t7706;
  t7710 = t7415 + t7709;
  t7712 = t36*t7706;
  t7713 = t2719 + t7712;
  t2072 = -1.*t17*t1614;
  t3183 = t2072 + t3068;
  t7698 = t822*t7676;
  t7699 = t36*t7684;
  t7700 = t7698 + t7699;
  t7693 = -1.*t36*t7676;
  t7694 = t822*t7684;
  t7695 = t7693 + t7694;
  t7670 = 0.4999*t753;
  t7671 = t7583*t753;
  t7741 = -0.06*t44;
  t7742 = 0. + t7741;
  t7686 = t7595*t1287;
  t7692 = t7613*t1614;
  t7697 = t7632*t3051;
  t7752 = t7742*t221;
  t7753 = -0.06*t443*t533;
  t7754 = t7752 + t7753;
  t7756 = t443*t7742;
  t7757 = 0.06*t221*t533;
  t7758 = t7756 + t7757;
  t7711 = t17*t7710;
  t7714 = t2578*t7713;
  t7715 = t7711 + t7714;
  t7716 = var2[0]*t7715;
  t7717 = t2578*t7710;
  t7718 = -1.*t17*t7713;
  t7719 = t7717 + t7718;
  t7720 = var2[1]*t7719;
  t7723 = -1.*t7595*t753;
  t7724 = 0.4999*t1287;
  t7726 = -1.*t7583*t7706;
  t7729 = var2[1]*t3183;
  t7730 = t2578*t1614;
  t7731 = t17*t3051;
  t7732 = t7730 + t7731;
  t7733 = var2[0]*t7732;
  t7762 = -1.*t36*t7754;
  t7763 = t822*t7758;
  t7764 = t7762 + t7763;
  t7766 = t822*t7754;
  t7767 = t36*t7758;
  t7768 = t7766 + t7767;
  t7736 = -1.*t7632*t7710;
  t7737 = -1.*t7613*t7713;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3183*var2[0] + (-1.*t1614*t2578 + t3650)*var2[1];
  p_output1[7]=(-1.*t17*t5452 + t5847)*var2[0] + (t5435 - 1.*t2578*t5452)*var2[1];
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t3068 + t17*t7431)*var2[0] + (t3650 + t2578*t7431)*var2[1] + (t4983*t7600 + t4983*t7613 + t7632*t7635 + t5452*t7638)*var2[2];
  p_output1[19]=(t5847 + t17*t7635)*var2[0] + (t5435 + t2578*t7635)*var2[1] + (-1.*t3051*t7600 - 1.*t3051*t7613 - 1.*t7431*t7632 - 1.*t1614*t7638)*var2[2];
  p_output1[20]=0;
  p_output1[21]=t7716 + t7720 + (t7692 + t4983*t7695 + t7697 + t5452*t7700)*var2[2] + (t7670 + t7671 + t4648*t7676 + t1287*t7684 + t7686)*var2[6];
  p_output1[22]=t7729 + t7733 + (-1.*t3051*t7695 - 1.*t1614*t7700 + t7736 + t7737)*var2[2] + (-1.*t1287*t7676 - 1.*t753*t7684 + t7723 + t7724 + t7726)*var2[6];
  p_output1[23]=0;
  p_output1[24]=t7716 + t7720 + (t7692 + t7697 + t4983*t7764 + t5452*t7768)*var2[2] + (t7670 + t7671 + t7686 + t4648*t7754 + t1287*t7758)*var2[6] + (0.06*Power(t44,2) - 0.9063*t533 - 0.06*Power(t533,2) - 1.*t533*t7577 + t44*t7742)*var2[7];
  p_output1[25]=t7729 + t7733 + (t7736 + t7737 - 1.*t3051*t7764 - 1.*t1614*t7768)*var2[2] + (t7723 + t7724 + t7726 - 1.*t1287*t7754 - 1.*t753*t7758)*var2[6] + (0.9063*t44 + 0.12*t44*t533 + t44*t7577 + t533*t7742)*var2[7];
  p_output1[26]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightSole_RightSS2.hh"

namespace SymFunction
{

void dJh_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

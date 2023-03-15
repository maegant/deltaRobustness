/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:13 GMT-08:00
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
  double t1576;
  double t514;
  double t807;
  double t1577;
  double t3757;
  double t813;
  double t2374;
  double t3564;
  double t475;
  double t4126;
  double t4590;
  double t4667;
  double t5273;
  double t4789;
  double t261;
  double t7728;
  double t7732;
  double t7739;
  double t7649;
  double t7661;
  double t7662;
  double t7680;
  double t7685;
  double t7703;
  double t3566;
  double t5077;
  double t5193;
  double t5275;
  double t5460;
  double t5542;
  double t5863;
  double t6000;
  double t7745;
  double t7746;
  double t7749;
  double t7750;
  double t7752;
  double t7753;
  double t7757;
  double t7759;
  double t7794;
  double t7795;
  double t7796;
  double t7797;
  double t7798;
  double t7799;
  double t7782;
  double t7783;
  double t7784;
  double t7789;
  double t7838;
  double t7840;
  double t7841;
  double t7842;
  double t7843;
  double t7844;
  double t7832;
  double t7833;
  double t7835;
  double t7836;
  double t7824;
  double t7826;
  double t7827;
  double t7644;
  double t7705;
  double t7719;
  double t7725;
  double t7819;
  double t7820;
  double t7822;
  double t7770;
  double t7775;
  double t7776;
  double t7777;
  double t7778;
  double t7790;
  double t7791;
  double t7801;
  double t7802;
  double t7804;
  double t7805;
  double t7807;
  double t7808;
  double t7823;
  double t7828;
  double t7830;
  double t7837;
  double t7845;
  double t7846;
  double t7848;
  double t7849;
  double t7850;
  double t7874;
  double t7875;
  double t7876;
  double t7847;
  double t7851;
  double t7852;
  double t7803;
  double t7809;
  double t7810;
  double t7860;
  double t7861;
  double t7862;
  double t7886;
  double t7887;
  double t7888;
  double t7902;
  double t7903;
  double t7904;
  double t7766;
  double t7779;
  double t7780;
  double t7856;
  double t7857;
  double t7858;
  double t7882;
  double t7883;
  double t7884;
  double t7916;
  double t7917;
  double t7899;
  double t7900;
  double t7879;
  double t7880;
  t1576 = Cos(var1[4]);
  t514 = Cos(var1[5]);
  t807 = Sin(var1[4]);
  t1577 = Sin(var1[5]);
  t3757 = Cos(var1[3]);
  t813 = t514*t807;
  t2374 = t1576*t1577;
  t3564 = t813 + t2374;
  t475 = Sin(var1[3]);
  t4126 = t1576*t514;
  t4590 = -1.*t807*t1577;
  t4667 = t4126 + t4590;
  t5273 = Cos(var1[2]);
  t4789 = t3757*t4667;
  t261 = Sin(var1[2]);
  t7728 = -1.*t514*t807;
  t7732 = -1.*t1576*t1577;
  t7739 = t7728 + t7732;
  t7649 = -1.*t514;
  t7661 = 1. + t7649;
  t7662 = -1.3127*t7661;
  t7680 = -1.3127*t514;
  t7685 = -0.06*t1577;
  t7703 = t7662 + t7680 + t7685;
  t3566 = -1.*t475*t3564;
  t5077 = t3566 + t4789;
  t5193 = t261*t5077;
  t5275 = t3757*t3564;
  t5460 = t475*t4667;
  t5542 = t5275 + t5460;
  t5863 = t5273*t5542;
  t6000 = t5193 + t5863;
  t7745 = t475*t7739;
  t7746 = t7745 + t4789;
  t7749 = t5273*t7746;
  t7750 = t3757*t7739;
  t7752 = -1.*t475*t4667;
  t7753 = t7750 + t7752;
  t7757 = t261*t7753;
  t7759 = t7749 + t7757;
  t7794 = -1.*t1576;
  t7795 = 1. + t7794;
  t7796 = -0.9063*t7795;
  t7797 = -0.06*t514*t807;
  t7798 = t1576*t7703;
  t7799 = t7796 + t7797 + t7798;
  t7782 = 0.06*t1576*t514;
  t7783 = 0.9063*t807;
  t7784 = t807*t7703;
  t7789 = t7782 + t7783 + t7784;
  t7838 = -1.*t3757;
  t7840 = 1. + t7838;
  t7841 = -0.4999*t7840;
  t7842 = t3757*t7799;
  t7843 = -1.*t475*t7789;
  t7844 = t7841 + t7842 + t7843;
  t7832 = 0.4999*t475;
  t7833 = t475*t7799;
  t7835 = t3757*t7789;
  t7836 = t7832 + t7833 + t7835;
  t7824 = t5273*t5077;
  t7826 = -1.*t261*t5542;
  t7827 = t7824 + t7826;
  t7644 = 0.9063*t514;
  t7705 = t514*t7703;
  t7719 = 0.06*t514*t1577;
  t7725 = t7644 + t7705 + t7719;
  t7819 = -1.*t261*t7746;
  t7820 = t5273*t7753;
  t7822 = t7819 + t7820;
  t7770 = Power(t514,2);
  t7775 = -0.06*t7770;
  t7776 = 0.9063*t1577;
  t7777 = t7703*t1577;
  t7778 = t7775 + t7776 + t7777;
  t7790 = t7789*t3564;
  t7791 = 0.4999*t4667;
  t7801 = t7799*t4667;
  t7802 = t7790 + t7791 + t7801;
  t7804 = -1.*t7799*t7739;
  t7805 = 0.4999*t3564;
  t7807 = -1.*t7789*t4667;
  t7808 = t7804 + t7805 + t7807;
  t7823 = 1.142857*t7822*t7759;
  t7828 = 1.142857*t6000*t7827;
  t7830 = t7823 + t7828;
  t7837 = -1.*t7836*t7746;
  t7845 = -1.*t7844*t7753;
  t7846 = t7837 + t7845;
  t7848 = t7844*t5077;
  t7849 = t7836*t5542;
  t7850 = t7848 + t7849;
  t7874 = 1.142857*t7846*t7827;
  t7875 = 1.142857*t7822*t7850;
  t7876 = t7874 + t7875;
  t7847 = 1.142857*t7846*t6000;
  t7851 = 1.142857*t7759*t7850;
  t7852 = t7847 + t7851;
  t7803 = 1.142857*t7802*t7759;
  t7809 = 1.142857*t7808*t6000;
  t7810 = t7803 + t7809;
  t7860 = 1.142857*t7802*t7822;
  t7861 = 1.142857*t7808*t7827;
  t7862 = t7860 + t7861;
  t7886 = 1.142857*t7808*t7846;
  t7887 = 1.142857*t7802*t7850;
  t7888 = 0.0085 + t7886 + t7887;
  t7902 = 1.142857*t7725*t7802;
  t7903 = 1.142857*t7778*t7808;
  t7904 = 0.0085 + t7902 + t7903;
  t7766 = 1.142857*t7725*t7759;
  t7779 = 1.142857*t7778*t6000;
  t7780 = t7766 + t7779;
  t7856 = 1.142857*t7725*t7822;
  t7857 = 1.142857*t7778*t7827;
  t7858 = t7856 + t7857;
  t7882 = 1.142857*t7778*t7846;
  t7883 = 1.142857*t7725*t7850;
  t7884 = 0.0085 + t7882 + t7883;
  t7916 = -0.06857142*t7778;
  t7917 = 0.0085 + t7916;
  t7899 = -0.06857142*t7808;
  t7900 = 0.0085 + t7899;
  t7879 = -0.06857142*t7846;
  t7880 = 0.0085 + t7879;
  p_output1[0]=-1.*(1.142857*Power(t6000,2) + 1.142857*Power(t7759,2))*var2[0] - 1.*t7830*var2[1] - 1.*t7852*var2[2] - 1.*t7810*var2[3] - 1.*t7780*var2[4] + 0.06857142*t6000*var2[5];
  p_output1[1]=-1.*t7830*var2[0] - 1.*(1.142857*Power(t7822,2) + 1.142857*Power(t7827,2))*var2[1] - 1.*t7876*var2[2] - 1.*t7862*var2[3] - 1.*t7858*var2[4] + 0.06857142*t7827*var2[5];
  p_output1[2]=-1.*t7852*var2[0] - 1.*t7876*var2[1] - 1.*(0.0085 + 1.142857*Power(t7846,2) + 1.142857*Power(t7850,2))*var2[2] - 1.*t7888*var2[3] - 1.*t7884*var2[4] - 1.*t7880*var2[5];
  p_output1[3]=-1.*t7810*var2[0] - 1.*t7862*var2[1] - 1.*t7888*var2[2] - 1.*(0.0085 + 1.142857*Power(t7802,2) + 1.142857*Power(t7808,2))*var2[3] - 1.*t7904*var2[4] - 1.*t7900*var2[5];
  p_output1[4]=-1.*t7780*var2[0] - 1.*t7858*var2[1] - 1.*t7884*var2[2] - 1.*t7904*var2[3] - 1.*(0.0085 + 1.142857*Power(t7725,2) + 1.142857*Power(t7778,2))*var2[4] - 1.*t7917*var2[5];
  p_output1[5]=0.06857142*t6000*var2[0] + 0.06857142*t7827*var2[1] - 1.*t7880*var2[2] - 1.*t7900*var2[3] - 1.*t7917*var2[4] - 0.0126142852*var2[5];
  p_output1[6]=0;
  p_output1[7]=0;
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

#include "MmatDx4_amber3_feet.hh"

namespace SymFunction
{

void MmatDx4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

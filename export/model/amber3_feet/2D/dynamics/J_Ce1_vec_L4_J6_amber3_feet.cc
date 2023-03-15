/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:54 GMT-08:00
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
  double t219;
  double t164;
  double t196;
  double t253;
  double t282;
  double t212;
  double t262;
  double t266;
  double t105;
  double t306;
  double t350;
  double t406;
  double t47;
  double t274;
  double t431;
  double t437;
  double t445;
  double t454;
  double t566;
  double t567;
  double t592;
  double t634;
  double t681;
  double t715;
  double t735;
  double t756;
  double t782;
  double t794;
  double t844;
  double t993;
  double t1014;
  double t1025;
  double t1031;
  double t1039;
  double t852;
  double t853;
  double t872;
  double t876;
  double t1367;
  double t1400;
  double t1434;
  double t1456;
  double t1460;
  double t1463;
  double t1466;
  double t1490;
  double t1509;
  double t1524;
  double t1349;
  double t1365;
  double t1539;
  double t1544;
  double t1552;
  double t1566;
  double t889;
  double t903;
  double t924;
  double t1567;
  double t1622;
  double t1629;
  double t1666;
  double t1602;
  double t1606;
  double t1569;
  double t1583;
  double t1952;
  double t1964;
  double t1969;
  double t1988;
  double t2070;
  double t2083;
  double t1060;
  double t1102;
  double t1992;
  double t2013;
  double t2253;
  double t2258;
  double t2280;
  double t2230;
  double t2248;
  double t2281;
  double t2282;
  double t2295;
  double t2300;
  double t925;
  double t927;
  double t708;
  double t682;
  double t880;
  double t949;
  double t2511;
  double t2520;
  double t2530;
  double t2538;
  double t2543;
  double t2547;
  double t2467;
  double t2490;
  double t2493;
  double t2494;
  double t2553;
  double t2556;
  double t2573;
  double t2587;
  double t2588;
  double t2597;
  double t2414;
  double t2560;
  double t2603;
  double t2621;
  double t2775;
  double t2776;
  double t2933;
  double t2956;
  double t2959;
  double t2966;
  double t2979;
  double t2992;
  double t3022;
  double t3043;
  double t3045;
  double t2651;
  double t2661;
  double t2685;
  double t2692;
  double t2821;
  double t2824;
  double t2888;
  double t2898;
  double t2899;
  double t2739;
  double t2778;
  double t3219;
  double t3221;
  double t3224;
  double t3230;
  double t3231;
  double t3236;
  double t3242;
  double t3119;
  double t3129;
  double t3132;
  double t3145;
  double t3148;
  double t3156;
  double t3420;
  double t3429;
  double t3433;
  double t3437;
  double t3075;
  double t3102;
  double t3104;
  double t3106;
  double t3050;
  double t3067;
  double t3069;
  double t3084;
  double t3091;
  double t3107;
  double t3187;
  double t3675;
  double t3696;
  double t3274;
  double t3472;
  double t3475;
  double t3478;
  double t3505;
  double t3306;
  double t3307;
  double t3315;
  double t3853;
  double t3861;
  double t3862;
  double t3868;
  double t3876;
  double t3895;
  double t3899;
  double t3913;
  double t3915;
  double t3969;
  double t3970;
  double t3928;
  double t3743;
  double t3758;
  double t3935;
  double t3948;
  double t3960;
  double t3701;
  double t3717;
  double t3718;
  double t3721;
  double t3724;
  double t3742;
  double t4047;
  double t3753;
  double t4068;
  double t3765;
  double t4177;
  double t4180;
  double t4189;
  double t4190;
  double t4198;
  double t4212;
  double t4218;
  double t4222;
  double t4245;
  double t4250;
  double t4283;
  double t4307;
  double t4332;
  double t4340;
  double t4386;
  double t4436;
  double t4346;
  double t4347;
  double t4358;
  double t4479;
  double t4395;
  double t4530;
  double t4532;
  double t4551;
  double t4571;
  double t4598;
  double t4605;
  t219 = Cos(var1[4]);
  t164 = Cos(var1[5]);
  t196 = Sin(var1[4]);
  t253 = Sin(var1[5]);
  t282 = Cos(var1[3]);
  t212 = -1.*t164*t196;
  t262 = -1.*t219*t253;
  t266 = t212 + t262;
  t105 = Sin(var1[3]);
  t306 = t219*t164;
  t350 = -1.*t196*t253;
  t406 = t306 + t350;
  t47 = Sin(var1[2]);
  t274 = t105*t266;
  t431 = t282*t406;
  t437 = t274 + t431;
  t445 = -1.*t47*t437;
  t454 = Cos(var1[2]);
  t566 = t282*t266;
  t567 = -1.*t105*t406;
  t592 = t566 + t567;
  t634 = t454*t592;
  t681 = t445 + t634;
  t715 = t164*t196;
  t735 = t219*t253;
  t756 = t715 + t735;
  t782 = -1.*t105*t756;
  t794 = t782 + t431;
  t844 = -1.*t47*t794;
  t993 = -1.*t105*t266;
  t1014 = -1.*t282*t406;
  t1025 = t993 + t1014;
  t1031 = t47*t1025;
  t1039 = t1031 + t634;
  t852 = -1.*t282*t756;
  t853 = t852 + t567;
  t872 = t454*t853;
  t876 = t844 + t872;
  t1367 = -1.*t219*t164;
  t1400 = t196*t253;
  t1434 = t1367 + t1400;
  t1456 = t282*t1434;
  t1460 = t993 + t1456;
  t1463 = t47*t1460;
  t1466 = t105*t1434;
  t1490 = t566 + t1466;
  t1509 = t454*t1490;
  t1524 = t1463 + t1509;
  t1349 = 0.03428571*var2[3]*t1039;
  t1365 = 0.03428571*var2[2]*t681;
  t1539 = 0.03428571*var2[4]*t1524;
  t1544 = 0.03428571*var2[5]*t1524;
  t1552 = t1349 + t1365 + t1539 + t1544;
  t1566 = var2[5]*t1552;
  t889 = t282*t756;
  t903 = t105*t406;
  t924 = t889 + t903;
  t1567 = t454*t794;
  t1622 = t454*t437;
  t1629 = t47*t592;
  t1666 = t1622 + t1629;
  t1602 = t47*t853;
  t1606 = t1567 + t1602;
  t1569 = -1.*t47*t924;
  t1583 = t1567 + t1569;
  t1952 = -1.*t454*t437;
  t1964 = -1.*t47*t592;
  t1969 = t1952 + t1964;
  t1988 = -1.*t454*t794;
  t2070 = t454*t1025;
  t2083 = t2070 + t1964;
  t1060 = t105*t756;
  t1102 = t1060 + t1014;
  t1992 = -1.*t47*t853;
  t2013 = t1988 + t1992;
  t2253 = t454*t1460;
  t2258 = -1.*t47*t1490;
  t2280 = t2253 + t2258;
  t2230 = 0.03428571*var2[3]*t2083;
  t2248 = 0.03428571*var2[2]*t1969;
  t2281 = 0.03428571*var2[4]*t2280;
  t2282 = 0.03428571*var2[5]*t2280;
  t2295 = t2230 + t2248 + t2281 + t2282;
  t2300 = var2[5]*t2295;
  t925 = -1.*t454*t924;
  t927 = t844 + t925;
  t708 = 0.03428571*var2[5]*t681;
  t682 = 0.03428571*var2[4]*t681;
  t880 = 0.03428571*var2[3]*t876;
  t949 = 0.03428571*var2[2]*t927;
  t2511 = -1.*t164;
  t2520 = 1. + t2511;
  t2530 = -1.3127*t2520;
  t2538 = -1.3127*t164;
  t2543 = -0.06*t253;
  t2547 = t2530 + t2538 + t2543;
  t2467 = -1.*t219;
  t2490 = 1. + t2467;
  t2493 = -0.9063*t2490;
  t2494 = -0.06*t164*t196;
  t2553 = t219*t2547;
  t2556 = t2493 + t2494 + t2553;
  t2573 = 0.06*t219*t164;
  t2587 = 0.9063*t196;
  t2588 = t196*t2547;
  t2597 = t2573 + t2587 + t2588;
  t2414 = -0.4999*t105;
  t2560 = -1.*t105*t2556;
  t2603 = -1.*t282*t2597;
  t2621 = t2414 + t2560 + t2603;
  t2775 = t282*t2556;
  t2776 = -1.*t105*t2597;
  t2933 = 0.9063*t219;
  t2956 = t2933 + t2494 + t2553;
  t2959 = -1.*t105*t2956;
  t2966 = -0.06*t219*t164;
  t2979 = -0.9063*t196;
  t2992 = -1.*t196*t2547;
  t3022 = t2966 + t2979 + t2992;
  t3043 = t282*t3022;
  t3045 = t2959 + t3043;
  t2651 = 0.4999*t105;
  t2661 = t105*t2556;
  t2685 = t282*t2597;
  t2692 = t2651 + t2661 + t2685;
  t2821 = -1.*t282;
  t2824 = 1. + t2821;
  t2888 = -0.4999*t2824;
  t2898 = t2888 + t2775 + t2776;
  t2899 = -1.*t282*t266;
  t2739 = 0.4999*t282;
  t2778 = t2739 + t2775 + t2776;
  t3219 = -0.06*t219*t253;
  t3221 = t2494 + t3219;
  t3224 = -1.*t105*t3221;
  t3230 = 0.06*t196*t253;
  t3231 = t2966 + t3230;
  t3236 = t282*t3231;
  t3242 = t3224 + t3236;
  t3119 = -1.*t2621*t1460;
  t3129 = -1.*t2692*t1460;
  t3132 = -1.*t105*t1434;
  t3145 = t2899 + t3132;
  t3148 = -1.*t2898*t3145;
  t3156 = -1.*t2778*t1490;
  t3420 = -0.9063*t219;
  t3429 = 0.06*t164*t196;
  t3433 = -1.*t219*t2547;
  t3437 = t3420 + t3429 + t3433;
  t3075 = -1.*t105*t3022;
  t3102 = t282*t2956;
  t3104 = t105*t3022;
  t3106 = t3102 + t3104;
  t3050 = -1.*t3045*t1025;
  t3067 = -1.*t3045*t437;
  t3069 = -1.*t282*t2956;
  t3084 = t3069 + t3075;
  t3091 = -1.*t3084*t592;
  t3107 = -1.*t3106*t592;
  t3187 = t3050 + t3067 + t3091 + t3107 + t3119 + t3129 + t3148 + t3156;
  t3675 = 0.06*t219*t253;
  t3696 = t3429 + t3675;
  t3274 = -1.*t105*t3231;
  t3472 = t1060 + t1456;
  t3475 = -1.*t2692*t3472;
  t3478 = t889 + t3132;
  t3505 = -1.*t2898*t3478;
  t3306 = t282*t3221;
  t3307 = t105*t3231;
  t3315 = t3306 + t3307;
  t3853 = -0.06*t164;
  t3861 = 0. + t3853;
  t3862 = t3861*t196;
  t3868 = t3862 + t3219;
  t3876 = -1.*t105*t3868;
  t3895 = t219*t3861;
  t3899 = t3895 + t3230;
  t3913 = t282*t3899;
  t3915 = t3876 + t3913;
  t3969 = -1.*t3861*t196;
  t3970 = t3969 + t3675;
  t3928 = -1.*t105*t3899;
  t3743 = -1.*t3045*t1460;
  t3758 = -1.*t3106*t1490;
  t3935 = t282*t3868;
  t3948 = t105*t3899;
  t3960 = t3935 + t3948;
  t3701 = t105*t3696;
  t3717 = t3701 + t3236;
  t3718 = -1.*t437*t3717;
  t3721 = t282*t3696;
  t3724 = t3721 + t3274;
  t3742 = -1.*t592*t3724;
  t4047 = -1.*t3915*t1460;
  t3753 = -1.*t3242*t1460;
  t4068 = -1.*t3960*t1490;
  t3765 = -1.*t3315*t1490;
  t4177 = -1.*t2898*t1025;
  t4180 = -1.*t2778*t437;
  t4189 = -1.*t2621*t592;
  t4190 = -1.*t2692*t592;
  t4198 = t4177 + t4180 + t4189 + t4190;
  t4212 = -1.*t3106*t437;
  t4218 = -1.*t3045*t592;
  t4222 = -1.*t2898*t1460;
  t4245 = -1.*t2692*t1490;
  t4250 = t4212 + t4218 + t4222 + t4245;
  t4283 = 0.4999*t266;
  t4307 = -1.*t2556*t756;
  t4332 = -1.*t2597*t1434;
  t4340 = -1.*t2956*t266;
  t4386 = -1.*t3022*t1434;
  t4436 = -1.*t266*t3868;
  t4346 = -1.*t266*t3221;
  t4347 = -1.*t266*t3696;
  t4358 = -1.*t406*t3231;
  t4479 = -1.*t3899*t1434;
  t4395 = -1.*t3231*t1434;
  t4530 = -1.*t3022*t266;
  t4532 = -1.*t2597*t266;
  t4551 = 0.4999*t406;
  t4571 = -1.*t2956*t406;
  t4598 = -1.*t2556*t1434;
  t4605 = t4530 + t4532 + t4551 + t4571 + t4598;
  p_output1[0]=(t682 + t708 + t880 + t949)*var2[5];
  p_output1[1]=var2[5]*(0.03428571*t876*var2[2] + 0.03428571*(t1102*t47 + t872)*var2[3] + 0.03428571*t1039*var2[4] + 0.03428571*t1039*var2[5]);
  p_output1[2]=t1566;
  p_output1[3]=t1566;
  p_output1[4]=0.03428571*t1583*var2[5];
  p_output1[5]=0.03428571*t1606*var2[5];
  p_output1[6]=0.03428571*t1666*var2[5];
  p_output1[7]=0.03428571*t1583*var2[2] + 0.03428571*t1606*var2[3] + 0.03428571*t1666*var2[4] + 0.06857142*t1666*var2[5];
  p_output1[8]=var2[5]*(0.03428571*(t1988 + t47*t924)*var2[2] + 0.03428571*t2013*var2[3] + 0.03428571*t1969*var2[4] + 0.03428571*t1969*var2[5]);
  p_output1[9]=var2[5]*(0.03428571*t2013*var2[2] + 0.03428571*(t1992 + t1102*t454)*var2[3] + 0.03428571*t2083*var2[4] + 0.03428571*t2083*var2[5]);
  p_output1[10]=t2300;
  p_output1[11]=t2300;
  p_output1[12]=0.03428571*t927*var2[5];
  p_output1[13]=0.03428571*t876*var2[5];
  p_output1[14]=t708;
  p_output1[15]=t682 + t880 + t949 + 0.06857142*t681*var2[5];
  p_output1[16]=var2[5]*(0.03428571*(-2.*t1025*t2621 - 1.*t1025*t2692 - 1.*t2621*t437 - 2.*t2778*t592 - 1.*(t105*t2597 - 0.4999*t282 - 1.*t2556*t282)*t592 - 1.*t2898*(t2899 + t903))*var2[3] + 0.03428571*t3187*var2[4] + 0.03428571*(t3119 + t3129 + t3148 + t3156 - 1.*t1025*t3242 - 1.*t3242*t437 - 1.*(-1.*t282*t3221 + t3274)*t592 - 1.*t3315*t592)*var2[5]);
  p_output1[17]=var2[5]*(0.03428571*t3187*var2[3] + 0.03428571*(-2.*t1460*t3045 - 2.*t1490*t3106 + t3475 + t3505 - 1.*(t3043 + t105*t3437)*t437 - 1.*(t3075 + t282*t3437)*t592)*var2[4] + 0.03428571*(t3475 + t3505 + t3718 + t3742 + t3743 + t3753 + t3758 + t3765)*var2[5]);
  p_output1[18]=var2[5]*(0.03428571*(t3119 + t3129 + t3148 + t3156 - 1.*t1025*t3915 - 1.*t3915*t437 - 1.*(-1.*t282*t3868 + t3928)*t592 - 1.*t3960*t592)*var2[3] + 0.03428571*(t3475 + t3505 + t3743 + t3758 + t4047 + t4068 - 1.*(t3913 + t105*t3970)*t437 - 1.*(t3928 + t282*t3970)*t592)*var2[4] + 0.03428571*(t3475 + t3505 + t3718 + t3742 + t3753 + t3765 + t4047 + t4068)*var2[5]);
  p_output1[19]=0.03428571*t4198*var2[5];
  p_output1[20]=0.03428571*t4250*var2[5];
  p_output1[21]=0.03428571*t4198*var2[3] + 0.03428571*t4250*var2[4] + 0.06857142*(t4222 + t4245 - 1.*t3315*t437 - 1.*t3242*t592)*var2[5];
  p_output1[22]=var2[5]*(0.03428571*(-2.*t266*t2956 - 2.*t1434*t3022 - 1.*t266*t3437 - 1.*t3022*t406 + t4283 + t4307 + t4332)*var2[4] + 0.03428571*(t4283 + t4307 + t4332 + t4340 + t4346 + t4347 + t4358 + t4386 + t4395)*var2[5]);
  p_output1[23]=var2[5]*(0.03428571*(-1.*t266*t3970 - 1.*t3899*t406 + t4283 + t4307 + t4332 + t4340 + t4386 + t4436 + t4479)*var2[4] + 0.03428571*(t4283 + t4307 + t4332 + t4346 + t4347 + t4358 + t4395 + t4436 + t4479)*var2[5]);
  p_output1[24]=0.03428571*t4605*var2[5];
  p_output1[25]=0.03428571*t4605*var2[4] + 0.06857142*(-1.*t266*t3231 - 1.*t3221*t406 + t4532 + t4551 + t4598)*var2[5];
  p_output1[26]=0.03428571*(0.06*Power(t164,2) - 0.9063*t253 - 0.06*Power(t253,2) - 1.*t253*t2547 + t164*t3861)*Power(var2[5],2);
  p_output1[27]=0.06857142*(0.9063*t164 + 0.06*t164*t253 + t164*t2547)*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 28, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L4_J6_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L4_J6_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

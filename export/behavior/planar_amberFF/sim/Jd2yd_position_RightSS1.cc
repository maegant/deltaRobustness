/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:46 GMT-08:00
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
  double t92;
  double t137;
  double t969;
  double t1057;
  double t1203;
  double t1228;
  double t1985;
  double t2183;
  double t2192;
  double t2248;
  double t2298;
  double t3141;
  double t3333;
  double t3710;
  double t3776;
  double t3946;
  double t4016;
  double t4382;
  double t4402;
  double t4467;
  double t4599;
  double t4669;
  double t4670;
  double t4755;
  double t4826;
  double t4882;
  double t4938;
  double t4983;
  double t4991;
  double t5116;
  double t6062;
  double t6122;
  double t6164;
  double t6222;
  double t6984;
  double t7232;
  double t7284;
  double t7293;
  double t7296;
  double t7306;
  double t7308;
  double t7310;
  double t7315;
  double t7454;
  double t7457;
  double t7461;
  double t7463;
  double t7467;
  double t7468;
  double t7470;
  double t7471;
  double t7472;
  double t7475;
  double t7476;
  double t7477;
  double t7478;
  double t7554;
  double t7558;
  double t7560;
  double t7561;
  double t7566;
  double t7574;
  double t7575;
  double t7577;
  double t7579;
  double t7583;
  double t7586;
  double t7588;
  double t7591;
  double t7635;
  double t7636;
  double t7637;
  double t7638;
  double t7639;
  double t7640;
  double t7642;
  double t7643;
  double t7644;
  double t7645;
  double t7647;
  double t7649;
  double t7650;
  double t2515;
  double t2863;
  double t3026;
  double t3501;
  double t3674;
  double t3698;
  double t3780;
  double t3813;
  double t3852;
  double t4051;
  double t4058;
  double t4077;
  double t4161;
  double t4376;
  double t5244;
  double t5448;
  double t5451;
  double t5452;
  double t5453;
  double t5454;
  double t5457;
  double t5458;
  double t5461;
  double t5464;
  double t5466;
  double t5468;
  double t5500;
  double t5562;
  double t5612;
  double t5773;
  double t5793;
  double t7317;
  double t7323;
  double t7330;
  double t7338;
  double t7342;
  double t7350;
  double t7355;
  double t7381;
  double t7389;
  double t7393;
  double t7414;
  double t7415;
  double t7418;
  double t7420;
  double t7425;
  double t7428;
  double t7431;
  double t7480;
  double t7481;
  double t7487;
  double t7509;
  double t7510;
  double t7514;
  double t7516;
  double t7517;
  double t7521;
  double t7530;
  double t7531;
  double t7532;
  double t7541;
  double t7542;
  double t7544;
  double t7549;
  double t7550;
  double t7594;
  double t7595;
  double t7596;
  double t7600;
  double t7601;
  double t7603;
  double t7605;
  double t7608;
  double t7613;
  double t7614;
  double t7621;
  double t7622;
  double t7623;
  double t7628;
  double t7629;
  double t7632;
  double t7634;
  double t7651;
  double t7654;
  double t7655;
  double t7761;
  double t7770;
  double t7762;
  double t7763;
  double t7764;
  double t7765;
  double t7766;
  double t7767;
  double t7768;
  double t7769;
  double t7771;
  double t7772;
  double t7773;
  double t7774;
  double t7775;
  double t7776;
  double t7777;
  double t7778;
  double t7779;
  double t7780;
  double t7781;
  double t7782;
  double t7783;
  double t7784;
  double t7785;
  double t7786;
  double t7787;
  double t7788;
  double t7789;
  double t7790;
  double t7791;
  double t7792;
  double t7793;
  double t7794;
  double t7795;
  double t7796;
  double t7797;
  double t7798;
  double t7799;
  double t7800;
  double t7801;
  double t7802;
  double t7803;
  double t7804;
  double t7805;
  double t7806;
  double t7807;
  double t7808;
  double t7809;
  double t7810;
  double t7811;
  double t7812;
  double t7813;
  double t7814;
  double t7815;
  double t7816;
  double t7817;
  t92 = -1.*var4[1];
  t137 = var4[0] + t92;
  t969 = Power(t137,-2);
  t1057 = 1/t137;
  t1203 = 0.8128*var1[2];
  t1228 = 0.8128*var1[6];
  t1985 = 0.4064*var1[7];
  t2183 = 0. + t92 + t1203 + t1228 + t1985;
  t2192 = -1.*t1057*t2183;
  t2248 = 1. + t2192;
  t2298 = Power(t2248,3);
  t3141 = Power(t137,-3);
  t3333 = Power(t2248,2);
  t3710 = Power(t137,-4);
  t3776 = Power(t2183,2);
  t3946 = Power(t137,-5);
  t4016 = Power(t2183,3);
  t4382 = 13.2128768*var3[0]*t969*t2298;
  t4402 = -26.4257536*var3[5]*t969*t2298;
  t4467 = 13.2128768*var3[10]*t969*t2298;
  t4599 = 39.6386304*var3[5]*t3141*t3333*t2183;
  t4669 = -79.2772608*var3[10]*t3141*t3333*t2183;
  t4670 = 39.6386304*var3[15]*t3141*t3333*t2183;
  t4755 = 39.6386304*var3[10]*t3710*t2248*t3776;
  t4826 = -79.2772608*var3[15]*t3710*t2248*t3776;
  t4882 = 39.6386304*var3[20]*t3710*t2248*t3776;
  t4938 = 13.2128768*var3[15]*t3946*t4016;
  t4983 = -26.4257536*var3[20]*t3946*t4016;
  t4991 = 13.2128768*var3[25]*t3946*t4016;
  t5116 = t4382 + t4402 + t4467 + t4599 + t4669 + t4670 + t4755 + t4826 + t4882 + t4938 + t4983 + t4991;
  t6062 = 13.2128768*var3[1]*t969*t2298;
  t6122 = -26.4257536*var3[6]*t969*t2298;
  t6164 = 13.2128768*var3[11]*t969*t2298;
  t6222 = 39.6386304*var3[6]*t3141*t3333*t2183;
  t6984 = -79.2772608*var3[11]*t3141*t3333*t2183;
  t7232 = 39.6386304*var3[16]*t3141*t3333*t2183;
  t7284 = 39.6386304*var3[11]*t3710*t2248*t3776;
  t7293 = -79.2772608*var3[16]*t3710*t2248*t3776;
  t7296 = 39.6386304*var3[21]*t3710*t2248*t3776;
  t7306 = 13.2128768*var3[16]*t3946*t4016;
  t7308 = -26.4257536*var3[21]*t3946*t4016;
  t7310 = 13.2128768*var3[26]*t3946*t4016;
  t7315 = t6062 + t6122 + t6164 + t6222 + t6984 + t7232 + t7284 + t7293 + t7296 + t7306 + t7308 + t7310;
  t7454 = 13.2128768*var3[2]*t969*t2298;
  t7457 = -26.4257536*var3[7]*t969*t2298;
  t7461 = 13.2128768*var3[12]*t969*t2298;
  t7463 = 39.6386304*var3[7]*t3141*t3333*t2183;
  t7467 = -79.2772608*var3[12]*t3141*t3333*t2183;
  t7468 = 39.6386304*var3[17]*t3141*t3333*t2183;
  t7470 = 39.6386304*var3[12]*t3710*t2248*t3776;
  t7471 = -79.2772608*var3[17]*t3710*t2248*t3776;
  t7472 = 39.6386304*var3[22]*t3710*t2248*t3776;
  t7475 = 13.2128768*var3[17]*t3946*t4016;
  t7476 = -26.4257536*var3[22]*t3946*t4016;
  t7477 = 13.2128768*var3[27]*t3946*t4016;
  t7478 = t7454 + t7457 + t7461 + t7463 + t7467 + t7468 + t7470 + t7471 + t7472 + t7475 + t7476 + t7477;
  t7554 = 13.2128768*var3[3]*t969*t2298;
  t7558 = -26.4257536*var3[8]*t969*t2298;
  t7560 = 13.2128768*var3[13]*t969*t2298;
  t7561 = 39.6386304*var3[8]*t3141*t3333*t2183;
  t7566 = -79.2772608*var3[13]*t3141*t3333*t2183;
  t7574 = 39.6386304*var3[18]*t3141*t3333*t2183;
  t7575 = 39.6386304*var3[13]*t3710*t2248*t3776;
  t7577 = -79.2772608*var3[18]*t3710*t2248*t3776;
  t7579 = 39.6386304*var3[23]*t3710*t2248*t3776;
  t7583 = 13.2128768*var3[18]*t3946*t4016;
  t7586 = -26.4257536*var3[23]*t3946*t4016;
  t7588 = 13.2128768*var3[28]*t3946*t4016;
  t7591 = t7554 + t7558 + t7560 + t7561 + t7566 + t7574 + t7575 + t7577 + t7579 + t7583 + t7586 + t7588;
  t7635 = 13.2128768*var3[4]*t969*t2298;
  t7636 = -26.4257536*var3[9]*t969*t2298;
  t7637 = 13.2128768*var3[14]*t969*t2298;
  t7638 = 39.6386304*var3[9]*t3141*t3333*t2183;
  t7639 = -79.2772608*var3[14]*t3141*t3333*t2183;
  t7640 = 39.6386304*var3[19]*t3141*t3333*t2183;
  t7642 = 39.6386304*var3[14]*t3710*t2248*t3776;
  t7643 = -79.2772608*var3[19]*t3710*t2248*t3776;
  t7644 = 39.6386304*var3[24]*t3710*t2248*t3776;
  t7645 = 13.2128768*var3[19]*t3946*t4016;
  t7647 = -26.4257536*var3[24]*t3946*t4016;
  t7649 = 13.2128768*var3[29]*t3946*t4016;
  t7650 = t7635 + t7636 + t7637 + t7638 + t7639 + t7640 + t7642 + t7643 + t7644 + t7645 + t7647 + t7649;
  t2515 = 6.6064384*var3[0]*t969*t2298;
  t2863 = -13.2128768*var3[5]*t969*t2298;
  t3026 = 6.6064384*var3[10]*t969*t2298;
  t3501 = 19.8193152*var3[5]*t3141*t3333*t2183;
  t3674 = -39.6386304*var3[10]*t3141*t3333*t2183;
  t3698 = 19.8193152*var3[15]*t3141*t3333*t2183;
  t3780 = 19.8193152*var3[10]*t3710*t2248*t3776;
  t3813 = -39.6386304*var3[15]*t3710*t2248*t3776;
  t3852 = 19.8193152*var3[20]*t3710*t2248*t3776;
  t4051 = 6.6064384*var3[15]*t3946*t4016;
  t4058 = -13.2128768*var3[20]*t3946*t4016;
  t4077 = 6.6064384*var3[25]*t3946*t4016;
  t4161 = t2515 + t2863 + t3026 + t3501 + t3674 + t3698 + t3780 + t3813 + t3852 + t4051 + t4058 + t4077;
  t4376 = var2[7]*t4161;
  t5244 = var2[2]*t5116;
  t5448 = var2[6]*t5116;
  t5451 = t4376 + t5244 + t5448;
  t5452 = 6.6064384*var3[1]*t969*t2298;
  t5453 = -13.2128768*var3[6]*t969*t2298;
  t5454 = 6.6064384*var3[11]*t969*t2298;
  t5457 = 19.8193152*var3[6]*t3141*t3333*t2183;
  t5458 = -39.6386304*var3[11]*t3141*t3333*t2183;
  t5461 = 19.8193152*var3[16]*t3141*t3333*t2183;
  t5464 = 19.8193152*var3[11]*t3710*t2248*t3776;
  t5466 = -39.6386304*var3[16]*t3710*t2248*t3776;
  t5468 = 19.8193152*var3[21]*t3710*t2248*t3776;
  t5500 = 6.6064384*var3[16]*t3946*t4016;
  t5562 = -13.2128768*var3[21]*t3946*t4016;
  t5612 = 6.6064384*var3[26]*t3946*t4016;
  t5773 = t5452 + t5453 + t5454 + t5457 + t5458 + t5461 + t5464 + t5466 + t5468 + t5500 + t5562 + t5612;
  t5793 = var2[7]*t5773;
  t7317 = var2[2]*t7315;
  t7323 = var2[6]*t7315;
  t7330 = t5793 + t7317 + t7323;
  t7338 = 6.6064384*var3[2]*t969*t2298;
  t7342 = -13.2128768*var3[7]*t969*t2298;
  t7350 = 6.6064384*var3[12]*t969*t2298;
  t7355 = 19.8193152*var3[7]*t3141*t3333*t2183;
  t7381 = -39.6386304*var3[12]*t3141*t3333*t2183;
  t7389 = 19.8193152*var3[17]*t3141*t3333*t2183;
  t7393 = 19.8193152*var3[12]*t3710*t2248*t3776;
  t7414 = -39.6386304*var3[17]*t3710*t2248*t3776;
  t7415 = 19.8193152*var3[22]*t3710*t2248*t3776;
  t7418 = 6.6064384*var3[17]*t3946*t4016;
  t7420 = -13.2128768*var3[22]*t3946*t4016;
  t7425 = 6.6064384*var3[27]*t3946*t4016;
  t7428 = t7338 + t7342 + t7350 + t7355 + t7381 + t7389 + t7393 + t7414 + t7415 + t7418 + t7420 + t7425;
  t7431 = var2[7]*t7428;
  t7480 = var2[2]*t7478;
  t7481 = var2[6]*t7478;
  t7487 = t7431 + t7480 + t7481;
  t7509 = 6.6064384*var3[3]*t969*t2298;
  t7510 = -13.2128768*var3[8]*t969*t2298;
  t7514 = 6.6064384*var3[13]*t969*t2298;
  t7516 = 19.8193152*var3[8]*t3141*t3333*t2183;
  t7517 = -39.6386304*var3[13]*t3141*t3333*t2183;
  t7521 = 19.8193152*var3[18]*t3141*t3333*t2183;
  t7530 = 19.8193152*var3[13]*t3710*t2248*t3776;
  t7531 = -39.6386304*var3[18]*t3710*t2248*t3776;
  t7532 = 19.8193152*var3[23]*t3710*t2248*t3776;
  t7541 = 6.6064384*var3[18]*t3946*t4016;
  t7542 = -13.2128768*var3[23]*t3946*t4016;
  t7544 = 6.6064384*var3[28]*t3946*t4016;
  t7549 = t7509 + t7510 + t7514 + t7516 + t7517 + t7521 + t7530 + t7531 + t7532 + t7541 + t7542 + t7544;
  t7550 = var2[7]*t7549;
  t7594 = var2[2]*t7591;
  t7595 = var2[6]*t7591;
  t7596 = t7550 + t7594 + t7595;
  t7600 = 6.6064384*var3[4]*t969*t2298;
  t7601 = -13.2128768*var3[9]*t969*t2298;
  t7603 = 6.6064384*var3[14]*t969*t2298;
  t7605 = 19.8193152*var3[9]*t3141*t3333*t2183;
  t7608 = -39.6386304*var3[14]*t3141*t3333*t2183;
  t7613 = 19.8193152*var3[19]*t3141*t3333*t2183;
  t7614 = 19.8193152*var3[14]*t3710*t2248*t3776;
  t7621 = -39.6386304*var3[19]*t3710*t2248*t3776;
  t7622 = 19.8193152*var3[24]*t3710*t2248*t3776;
  t7623 = 6.6064384*var3[19]*t3946*t4016;
  t7628 = -13.2128768*var3[24]*t3946*t4016;
  t7629 = 6.6064384*var3[29]*t3946*t4016;
  t7632 = t7600 + t7601 + t7603 + t7605 + t7608 + t7613 + t7614 + t7621 + t7622 + t7623 + t7628 + t7629;
  t7634 = var2[7]*t7632;
  t7651 = var2[2]*t7650;
  t7654 = var2[6]*t7650;
  t7655 = t7634 + t7651 + t7654;
  t7761 = Power(t2248,4);
  t7770 = Power(t2183,4);
  t7762 = -4.064*var3[0]*t1057*t7761;
  t7763 = 4.064*var3[5]*t1057*t7761;
  t7764 = -16.256*var3[5]*t969*t2298*t2183;
  t7765 = 16.256*var3[10]*t969*t2298*t2183;
  t7766 = -24.383999999999997*var3[10]*t3141*t3333*t3776;
  t7767 = 24.383999999999997*var3[15]*t3141*t3333*t3776;
  t7768 = -16.256*var3[15]*t3710*t2248*t4016;
  t7769 = 16.256*var3[20]*t3710*t2248*t4016;
  t7771 = -4.064*var3[20]*t3946*t7770;
  t7772 = 4.064*var3[25]*t3946*t7770;
  t7773 = t7762 + t7763 + t7764 + t7765 + t7766 + t7767 + t7768 + t7769 + t7771 + t7772;
  t7774 = -4.064*var3[1]*t1057*t7761;
  t7775 = 4.064*var3[6]*t1057*t7761;
  t7776 = -16.256*var3[6]*t969*t2298*t2183;
  t7777 = 16.256*var3[11]*t969*t2298*t2183;
  t7778 = -24.383999999999997*var3[11]*t3141*t3333*t3776;
  t7779 = 24.383999999999997*var3[16]*t3141*t3333*t3776;
  t7780 = -16.256*var3[16]*t3710*t2248*t4016;
  t7781 = 16.256*var3[21]*t3710*t2248*t4016;
  t7782 = -4.064*var3[21]*t3946*t7770;
  t7783 = 4.064*var3[26]*t3946*t7770;
  t7784 = t7774 + t7775 + t7776 + t7777 + t7778 + t7779 + t7780 + t7781 + t7782 + t7783;
  t7785 = -4.064*var3[2]*t1057*t7761;
  t7786 = 4.064*var3[7]*t1057*t7761;
  t7787 = -16.256*var3[7]*t969*t2298*t2183;
  t7788 = 16.256*var3[12]*t969*t2298*t2183;
  t7789 = -24.383999999999997*var3[12]*t3141*t3333*t3776;
  t7790 = 24.383999999999997*var3[17]*t3141*t3333*t3776;
  t7791 = -16.256*var3[17]*t3710*t2248*t4016;
  t7792 = 16.256*var3[22]*t3710*t2248*t4016;
  t7793 = -4.064*var3[22]*t3946*t7770;
  t7794 = 4.064*var3[27]*t3946*t7770;
  t7795 = t7785 + t7786 + t7787 + t7788 + t7789 + t7790 + t7791 + t7792 + t7793 + t7794;
  t7796 = -4.064*var3[3]*t1057*t7761;
  t7797 = 4.064*var3[8]*t1057*t7761;
  t7798 = -16.256*var3[8]*t969*t2298*t2183;
  t7799 = 16.256*var3[13]*t969*t2298*t2183;
  t7800 = -24.383999999999997*var3[13]*t3141*t3333*t3776;
  t7801 = 24.383999999999997*var3[18]*t3141*t3333*t3776;
  t7802 = -16.256*var3[18]*t3710*t2248*t4016;
  t7803 = 16.256*var3[23]*t3710*t2248*t4016;
  t7804 = -4.064*var3[23]*t3946*t7770;
  t7805 = 4.064*var3[28]*t3946*t7770;
  t7806 = t7796 + t7797 + t7798 + t7799 + t7800 + t7801 + t7802 + t7803 + t7804 + t7805;
  t7807 = -4.064*var3[4]*t1057*t7761;
  t7808 = 4.064*var3[9]*t1057*t7761;
  t7809 = -16.256*var3[9]*t969*t2298*t2183;
  t7810 = 16.256*var3[14]*t969*t2298*t2183;
  t7811 = -24.383999999999997*var3[14]*t3141*t3333*t3776;
  t7812 = 24.383999999999997*var3[19]*t3141*t3333*t3776;
  t7813 = -16.256*var3[19]*t3710*t2248*t4016;
  t7814 = 16.256*var3[24]*t3710*t2248*t4016;
  t7815 = -4.064*var3[24]*t3946*t7770;
  t7816 = 4.064*var3[29]*t3946*t7770;
  t7817 = t7807 + t7808 + t7809 + t7810 + t7811 + t7812 + t7813 + t7814 + t7815 + t7816;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t5451;
  p_output1[11]=t7330;
  p_output1[12]=t7487;
  p_output1[13]=t7596;
  p_output1[14]=t7655;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t5451;
  p_output1[31]=t7330;
  p_output1[32]=t7487;
  p_output1[33]=t7596;
  p_output1[34]=t7655;
  p_output1[35]=t4161*var2[2] + t4161*var2[6] + var2[7]*(3.3032192*t2298*t969*var3[0] + 9.9096576*t2183*t3141*t3333*var3[5] - 6.6064384*t2298*t969*var3[5] - 19.8193152*t2183*t3141*t3333*var3[10] + 9.9096576*t2248*t3710*t3776*var3[10] + 3.3032192*t2298*t969*var3[10] + 9.9096576*t2183*t3141*t3333*var3[15] - 19.8193152*t2248*t3710*t3776*var3[15] + 3.3032192*t3946*t4016*var3[15] + 9.9096576*t2248*t3710*t3776*var3[20] - 6.6064384*t3946*t4016*var3[20] + 3.3032192*t3946*t4016*var3[25]);
  p_output1[36]=t5773*var2[2] + t5773*var2[6] + var2[7]*(3.3032192*t2298*t969*var3[1] + 9.9096576*t2183*t3141*t3333*var3[6] - 6.6064384*t2298*t969*var3[6] - 19.8193152*t2183*t3141*t3333*var3[11] + 9.9096576*t2248*t3710*t3776*var3[11] + 3.3032192*t2298*t969*var3[11] + 9.9096576*t2183*t3141*t3333*var3[16] - 19.8193152*t2248*t3710*t3776*var3[16] + 3.3032192*t3946*t4016*var3[16] + 9.9096576*t2248*t3710*t3776*var3[21] - 6.6064384*t3946*t4016*var3[21] + 3.3032192*t3946*t4016*var3[26]);
  p_output1[37]=t7428*var2[2] + t7428*var2[6] + var2[7]*(3.3032192*t2298*t969*var3[2] + 9.9096576*t2183*t3141*t3333*var3[7] - 6.6064384*t2298*t969*var3[7] - 19.8193152*t2183*t3141*t3333*var3[12] + 9.9096576*t2248*t3710*t3776*var3[12] + 3.3032192*t2298*t969*var3[12] + 9.9096576*t2183*t3141*t3333*var3[17] - 19.8193152*t2248*t3710*t3776*var3[17] + 3.3032192*t3946*t4016*var3[17] + 9.9096576*t2248*t3710*t3776*var3[22] - 6.6064384*t3946*t4016*var3[22] + 3.3032192*t3946*t4016*var3[27]);
  p_output1[38]=t7549*var2[2] + t7549*var2[6] + var2[7]*(3.3032192*t2298*t969*var3[3] + 9.9096576*t2183*t3141*t3333*var3[8] - 6.6064384*t2298*t969*var3[8] - 19.8193152*t2183*t3141*t3333*var3[13] + 9.9096576*t2248*t3710*t3776*var3[13] + 3.3032192*t2298*t969*var3[13] + 9.9096576*t2183*t3141*t3333*var3[18] - 19.8193152*t2248*t3710*t3776*var3[18] + 3.3032192*t3946*t4016*var3[18] + 9.9096576*t2248*t3710*t3776*var3[23] - 6.6064384*t3946*t4016*var3[23] + 3.3032192*t3946*t4016*var3[28]);
  p_output1[39]=t7632*var2[2] + t7632*var2[6] + var2[7]*(3.3032192*t2298*t969*var3[4] + 9.9096576*t2183*t3141*t3333*var3[9] - 6.6064384*t2298*t969*var3[9] - 19.8193152*t2183*t3141*t3333*var3[14] + 9.9096576*t2248*t3710*t3776*var3[14] + 3.3032192*t2298*t969*var3[14] + 9.9096576*t2183*t3141*t3333*var3[19] - 19.8193152*t2248*t3710*t3776*var3[19] + 3.3032192*t3946*t4016*var3[19] + 9.9096576*t2248*t3710*t3776*var3[24] - 6.6064384*t3946*t4016*var3[24] + 3.3032192*t3946*t4016*var3[29]);
  p_output1[40]=0;
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
  p_output1[55]=t7773;
  p_output1[56]=t7784;
  p_output1[57]=t7795;
  p_output1[58]=t7806;
  p_output1[59]=t7817;
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
  p_output1[75]=t7773;
  p_output1[76]=t7784;
  p_output1[77]=t7795;
  p_output1[78]=t7806;
  p_output1[79]=t7817;
  p_output1[80]=-2.032*t1057*t7761*var3[0] + 2.032*t1057*t7761*var3[5] - 8.128*t2183*t2298*t969*var3[5] - 12.191999999999998*t3141*t3333*t3776*var3[10] + 8.128*t2183*t2298*t969*var3[10] + 12.191999999999998*t3141*t3333*t3776*var3[15] - 8.128*t2248*t3710*t4016*var3[15] + 8.128*t2248*t3710*t4016*var3[20] - 2.032*t3946*t7770*var3[20] + 2.032*t3946*t7770*var3[25];
  p_output1[81]=-2.032*t1057*t7761*var3[1] + 2.032*t1057*t7761*var3[6] - 8.128*t2183*t2298*t969*var3[6] - 12.191999999999998*t3141*t3333*t3776*var3[11] + 8.128*t2183*t2298*t969*var3[11] + 12.191999999999998*t3141*t3333*t3776*var3[16] - 8.128*t2248*t3710*t4016*var3[16] + 8.128*t2248*t3710*t4016*var3[21] - 2.032*t3946*t7770*var3[21] + 2.032*t3946*t7770*var3[26];
  p_output1[82]=-2.032*t1057*t7761*var3[2] + 2.032*t1057*t7761*var3[7] - 8.128*t2183*t2298*t969*var3[7] - 12.191999999999998*t3141*t3333*t3776*var3[12] + 8.128*t2183*t2298*t969*var3[12] + 12.191999999999998*t3141*t3333*t3776*var3[17] - 8.128*t2248*t3710*t4016*var3[17] + 8.128*t2248*t3710*t4016*var3[22] - 2.032*t3946*t7770*var3[22] + 2.032*t3946*t7770*var3[27];
  p_output1[83]=-2.032*t1057*t7761*var3[3] + 2.032*t1057*t7761*var3[8] - 8.128*t2183*t2298*t969*var3[8] - 12.191999999999998*t3141*t3333*t3776*var3[13] + 8.128*t2183*t2298*t969*var3[13] + 12.191999999999998*t3141*t3333*t3776*var3[18] - 8.128*t2248*t3710*t4016*var3[18] + 8.128*t2248*t3710*t4016*var3[23] - 2.032*t3946*t7770*var3[23] + 2.032*t3946*t7770*var3[28];
  p_output1[84]=-2.032*t1057*t7761*var3[4] + 2.032*t1057*t7761*var3[9] - 8.128*t2183*t2298*t969*var3[9] - 12.191999999999998*t3141*t3333*t3776*var3[14] + 8.128*t2183*t2298*t969*var3[14] + 12.191999999999998*t3141*t3333*t3776*var3[19] - 8.128*t2248*t3710*t4016*var3[19] + 8.128*t2248*t3710*t4016*var3[24] - 2.032*t3946*t7770*var3[24] + 2.032*t3946*t7770*var3[29];
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_position_RightSS1.hh"

namespace SymFunction
{

void Jd2yd_position_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE

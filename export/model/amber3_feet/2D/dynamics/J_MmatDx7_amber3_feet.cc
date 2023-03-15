/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:03 GMT-08:00
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
  double t752;
  double t278;
  double t494;
  double t759;
  double t1198;
  double t556;
  double t775;
  double t1164;
  double t154;
  double t1219;
  double t1277;
  double t1305;
  double t1641;
  double t1342;
  double t74;
  double t2346;
  double t2371;
  double t2395;
  double t2005;
  double t2036;
  double t2135;
  double t2153;
  double t2154;
  double t2156;
  double t1191;
  double t1468;
  double t1523;
  double t1751;
  double t1764;
  double t1883;
  double t1889;
  double t1932;
  double t2396;
  double t2422;
  double t2438;
  double t2448;
  double t2475;
  double t2480;
  double t2508;
  double t2539;
  double t3150;
  double t3160;
  double t3172;
  double t3248;
  double t3263;
  double t3283;
  double t2935;
  double t2992;
  double t3011;
  double t3054;
  double t3615;
  double t3687;
  double t3759;
  double t3774;
  double t3778;
  double t3781;
  double t4230;
  double t4305;
  double t4344;
  double t4437;
  double t4451;
  double t4494;
  double t4196;
  double t4200;
  double t4203;
  double t4226;
  double t1963;
  double t2186;
  double t2271;
  double t2275;
  double t2611;
  double t2624;
  double t2736;
  double t2766;
  double t2845;
  double t4779;
  double t4781;
  double t4832;
  double t4835;
  double t3055;
  double t3073;
  double t3345;
  double t3371;
  double t4893;
  double t4961;
  double t5110;
  double t5129;
  double t5171;
  double t3376;
  double t3397;
  double t3404;
  double t3430;
  double t3942;
  double t4010;
  double t4229;
  double t4521;
  double t4561;
  double t4634;
  double t4666;
  double t4725;
  double t5813;
  double t5814;
  double t5818;
  double t5842;
  double t5720;
  double t5731;
  double t6121;
  double t6123;
  double t6225;
  double t6648;
  double t6661;
  double t6670;
  double t6676;
  double t6558;
  double t6610;
  double t6242;
  double t6276;
  double t6332;
  double t6338;
  double t6340;
  double t6356;
  double t6379;
  double t7461;
  double t7462;
  double t7483;
  double t7399;
  double t7404;
  double t7405;
  double t6111;
  double t6119;
  double t7813;
  double t7816;
  double t6403;
  double t6458;
  double t6475;
  double t6508;
  double t6748;
  double t6940;
  double t8511;
  double t8516;
  double t8556;
  double t8590;
  double t8598;
  double t8608;
  double t7009;
  double t7034;
  double t7114;
  double t7128;
  double t7131;
  double t7138;
  double t7169;
  double t7197;
  double t7198;
  double t7205;
  double t7228;
  double t7231;
  double t7289;
  double t7303;
  double t7345;
  double t7367;
  double t7369;
  double t7442;
  double t7492;
  double t8647;
  double t8663;
  double t8666;
  double t8677;
  double t8681;
  double t8683;
  double t7522;
  double t7523;
  double t4015;
  double t4020;
  double t3940;
  double t3962;
  double t3880;
  double t3882;
  double t3968;
  double t4048;
  double t4073;
  double t4148;
  double t4153;
  double t5592;
  double t5593;
  double t5503;
  double t5552;
  double t5495;
  double t5583;
  double t5611;
  double t5614;
  double t5617;
  double t5719;
  double t5752;
  double t5845;
  double t5846;
  double t5852;
  double t5947;
  double t5951;
  double t5973;
  double t5992;
  double t6016;
  double t6646;
  double t6701;
  double t6771;
  double t6930;
  double t6973;
  double t7028;
  double t7425;
  double t7485;
  double t7488;
  double t7502;
  double t7514;
  double t7524;
  double t8781;
  double t8782;
  double t7837;
  double t7849;
  double t7866;
  double t7913;
  double t7926;
  double t7982;
  double t8095;
  double t8307;
  double t8401;
  double t8405;
  double t8783;
  double t8787;
  double t8574;
  double t8614;
  double t8616;
  double t8622;
  double t8626;
  double t8630;
  double t8791;
  double t8794;
  double t8795;
  double t8796;
  double t8797;
  double t8798;
  double t8800;
  double t8671;
  double t8685;
  double t8689;
  double t8803;
  double t8693;
  double t8694;
  double t8695;
  double t8712;
  double t8714;
  double t8717;
  double t4615;
  double t4733;
  double t4739;
  double t8752;
  double t8753;
  double t8754;
  double t8773;
  double t8774;
  double t8775;
  double t8776;
  double t8777;
  double t5660;
  double t5890;
  double t5893;
  double t6056;
  double t6074;
  double t7489;
  double t7532;
  double t7598;
  double t8801;
  double t8804;
  double t8806;
  double t8691;
  double t8696;
  double t8697;
  double t8821;
  double t8824;
  double t8825;
  double t8719;
  double t8720;
  double t8723;
  double t8833;
  double t8834;
  double t8835;
  double t8743;
  double t8744;
  double t8745;
  double t3374;
  double t3509;
  double t3519;
  double t8762;
  double t8763;
  double t8764;
  double t5264;
  double t5312;
  double t5359;
  double t8856;
  double t8858;
  double t8859;
  double t6875;
  double t7031;
  double t7103;
  double t8789;
  double t8790;
  double t8792;
  double t8875;
  double t8876;
  double t8877;
  double t8878;
  double t8880;
  double t8621;
  double t8639;
  double t8641;
  double t8814;
  double t8818;
  double t8819;
  double t8897;
  double t8898;
  double t8900;
  double t8901;
  double t8902;
  double t8724;
  double t8726;
  double t8728;
  double t8838;
  double t8840;
  double t8841;
  double t8917;
  double t8918;
  double t8919;
  double t8736;
  double t8739;
  double t8740;
  double t2610;
  double t2858;
  double t2871;
  double t8758;
  double t8759;
  double t8760;
  double t5174;
  double t5202;
  double t5214;
  double t8851;
  double t8852;
  double t8853;
  double t8933;
  double t8934;
  double t8935;
  double t6413;
  double t8785;
  double t8871;
  double t8872;
  double t8873;
  double t8949;
  double t8950;
  double t8951;
  double t8952;
  double t8953;
  double t8173;
  double t8476;
  double t8477;
  double t8809;
  double t8810;
  double t8812;
  double t8891;
  double t8892;
  double t8893;
  double t8894;
  double t8895;
  double t8730;
  double t8731;
  double t8732;
  double t8843;
  double t8844;
  double t8845;
  double t8920;
  double t8921;
  double t8922;
  double t8970;
  double t8971;
  double t8972;
  double t9013;
  double t9014;
  double t8734;
  double t8846;
  double t8923;
  double t8924;
  double t8973;
  double t8974;
  double t9002;
  double t9003;
  t752 = Cos(var1[7]);
  t278 = Cos(var1[8]);
  t494 = Sin(var1[7]);
  t759 = Sin(var1[8]);
  t1198 = Cos(var1[6]);
  t556 = t278*t494;
  t775 = t752*t759;
  t1164 = t556 + t775;
  t154 = Sin(var1[6]);
  t1219 = t752*t278;
  t1277 = -1.*t494*t759;
  t1305 = t1219 + t1277;
  t1641 = Sin(var1[2]);
  t1342 = t1198*t1305;
  t74 = Cos(var1[2]);
  t2346 = -1.*t278*t494;
  t2371 = -1.*t752*t759;
  t2395 = t2346 + t2371;
  t2005 = -1.*t278;
  t2036 = 1. + t2005;
  t2135 = -1.3127*t2036;
  t2153 = -1.3127*t278;
  t2154 = -0.06*t759;
  t2156 = t2135 + t2153 + t2154;
  t1191 = -1.*t154*t1164;
  t1468 = t1191 + t1342;
  t1523 = t74*t1468;
  t1751 = t1198*t1164;
  t1764 = t154*t1305;
  t1883 = t1751 + t1764;
  t1889 = -1.*t1641*t1883;
  t1932 = t1523 + t1889;
  t2396 = t154*t2395;
  t2422 = t2396 + t1342;
  t2438 = -1.*t1641*t2422;
  t2448 = t1198*t2395;
  t2475 = -1.*t154*t1305;
  t2480 = t2448 + t2475;
  t2508 = t74*t2480;
  t2539 = t2438 + t2508;
  t3150 = -1.*t752;
  t3160 = 1. + t3150;
  t3172 = -0.9063*t3160;
  t3248 = -0.06*t278*t494;
  t3263 = t752*t2156;
  t3283 = t3172 + t3248 + t3263;
  t2935 = 0.06*t752*t278;
  t2992 = 0.9063*t494;
  t3011 = t494*t2156;
  t3054 = t2935 + t2992 + t3011;
  t3615 = t74*t2422;
  t3687 = t1641*t2480;
  t3759 = t3615 + t3687;
  t3774 = t1641*t1468;
  t3778 = t74*t1883;
  t3781 = t3774 + t3778;
  t4230 = -1.*t1198;
  t4305 = 1. + t4230;
  t4344 = -0.4999*t4305;
  t4437 = t1198*t3283;
  t4451 = -1.*t154*t3054;
  t4494 = t4344 + t4437 + t4451;
  t4196 = 0.4999*t154;
  t4200 = t154*t3283;
  t4203 = t1198*t3054;
  t4226 = t4196 + t4200 + t4203;
  t1963 = 0.9063*t278;
  t2186 = t278*t2156;
  t2271 = 0.06*t278*t759;
  t2275 = t1963 + t2186 + t2271;
  t2611 = Power(t278,2);
  t2624 = -0.06*t2611;
  t2736 = 0.9063*t759;
  t2766 = t2156*t759;
  t2845 = t2624 + t2736 + t2766;
  t4779 = -1.*t1198*t1164;
  t4781 = t4779 + t2475;
  t4832 = t1641*t4781;
  t4835 = t1523 + t4832;
  t3055 = t3054*t1164;
  t3073 = 0.4999*t1305;
  t3345 = t3283*t1305;
  t3371 = t3055 + t3073 + t3345;
  t4893 = -1.*t154*t2395;
  t4961 = -1.*t1198*t1305;
  t5110 = t4893 + t4961;
  t5129 = t1641*t5110;
  t5171 = t5129 + t2508;
  t3376 = -1.*t3283*t2395;
  t3397 = 0.4999*t1164;
  t3404 = -1.*t3054*t1305;
  t3430 = t3376 + t3397 + t3404;
  t3942 = -1.*t1641*t2480;
  t4010 = -1.*t1641*t1468;
  t4229 = -1.*t4226*t2422;
  t4521 = -1.*t4494*t2480;
  t4561 = t4229 + t4521;
  t4634 = t4494*t1468;
  t4666 = t4226*t1883;
  t4725 = t4634 + t4666;
  t5813 = -0.4999*t154;
  t5814 = -1.*t154*t3283;
  t5818 = -1.*t1198*t3054;
  t5842 = t5813 + t5814 + t5818;
  t5720 = 0.4999*t1198;
  t5731 = t5720 + t4437 + t4451;
  t6121 = -1.*t752*t278;
  t6123 = t494*t759;
  t6225 = t6121 + t6123;
  t6648 = -0.06*t752*t278;
  t6661 = -0.9063*t494;
  t6670 = -1.*t494*t2156;
  t6676 = t6648 + t6661 + t6670;
  t6558 = 0.9063*t752;
  t6610 = t6558 + t3248 + t3263;
  t6242 = t1198*t6225;
  t6276 = t4893 + t6242;
  t6332 = t1641*t6276;
  t6338 = t154*t6225;
  t6340 = t2448 + t6338;
  t6356 = t74*t6340;
  t6379 = t6332 + t6356;
  t7461 = t1198*t6610;
  t7462 = t154*t6676;
  t7483 = t7461 + t7462;
  t7399 = -1.*t154*t6610;
  t7404 = t1198*t6676;
  t7405 = t7399 + t7404;
  t6111 = 0.06857142*var2[8]*t3759;
  t6119 = 1.142857*t2845*t3759;
  t7813 = -0.06*t278;
  t7816 = 0. + t7813;
  t6403 = 1.142857*t2275*t6379;
  t6458 = 1.142857*t3430*t3759;
  t6475 = 0.4999*t2395;
  t6508 = t3283*t2395;
  t6748 = t3054*t1305;
  t6940 = -1.*t3054*t2395;
  t8511 = t7816*t494;
  t8516 = -0.06*t752*t759;
  t8556 = t8511 + t8516;
  t8590 = t752*t7816;
  t8598 = 0.06*t494*t759;
  t8608 = t8590 + t8598;
  t7009 = -1.*t3283*t6225;
  t7034 = 1.142857*t3371*t6379;
  t7114 = 2.285714*t3759*t3781;
  t7128 = 2.285714*t3759*t6379;
  t7131 = t7114 + t7128;
  t7138 = -1.*var2[0]*t7131;
  t7169 = 1.142857*t2539*t3781;
  t7197 = 1.142857*t3759*t1932;
  t7198 = 1.142857*t2539*t6379;
  t7205 = t74*t6276;
  t7228 = -1.*t1641*t6340;
  t7231 = t7205 + t7228;
  t7289 = 1.142857*t3759*t7231;
  t7303 = t7169 + t7197 + t7198 + t7289;
  t7345 = -1.*var2[1]*t7303;
  t7367 = 1.142857*t3759*t4561;
  t7369 = t4226*t2422;
  t7442 = t4494*t2480;
  t7492 = 1.142857*t4725*t6379;
  t8647 = -1.*t154*t8556;
  t8663 = t1198*t8608;
  t8666 = t8647 + t8663;
  t8677 = t1198*t8556;
  t8681 = t154*t8608;
  t8683 = t8677 + t8681;
  t7522 = -1.*t4494*t6276;
  t7523 = -1.*t4226*t6340;
  t4015 = -1.*t74*t1883;
  t4020 = t4010 + t4015;
  t3940 = -1.*t74*t2422;
  t3962 = t3940 + t3942;
  t3880 = Power(t2539,2);
  t3882 = 1.142857*t3880;
  t3968 = 1.142857*t3962*t3759;
  t4048 = 1.142857*t4020*t3781;
  t4073 = Power(t1932,2);
  t4148 = 1.142857*t4073;
  t4153 = t3882 + t3968 + t4048 + t4148;
  t5592 = t74*t4781;
  t5593 = t4010 + t5592;
  t5503 = t74*t5110;
  t5552 = t5503 + t3942;
  t5495 = 1.142857*t5171*t2539;
  t5583 = 1.142857*t5552*t3759;
  t5611 = 1.142857*t5593*t3781;
  t5614 = 1.142857*t4835*t1932;
  t5617 = t5495 + t5583 + t5611 + t5614;
  t5719 = -1.*t4494*t5110;
  t5752 = -1.*t5731*t2422;
  t5845 = -1.*t5842*t2480;
  t5846 = -1.*t4226*t2480;
  t5852 = t5719 + t5752 + t5845 + t5846;
  t5947 = t5842*t1468;
  t5951 = t4226*t1468;
  t5973 = t4494*t4781;
  t5992 = t5731*t1883;
  t6016 = t5947 + t5951 + t5973 + t5992;
  t6646 = t6610*t1164;
  t6701 = t6676*t1305;
  t6771 = t6475 + t6508 + t6646 + t6701 + t6748;
  t6930 = -1.*t6676*t2395;
  t6973 = -1.*t6610*t1305;
  t7028 = t6930 + t6940 + t3073 + t6973 + t7009;
  t7425 = t7405*t1468;
  t7485 = t7483*t1883;
  t7488 = t7369 + t7425 + t7442 + t7485;
  t7502 = -1.*t7483*t2422;
  t7514 = -1.*t7405*t2480;
  t7524 = t7502 + t7514 + t7522 + t7523;
  t8781 = 0.06857142*var2[8]*t2539;
  t8782 = 1.142857*t2845*t2539;
  t7837 = t7816*t278;
  t7849 = 0.06*t2611;
  t7866 = -0.9063*t759;
  t7913 = -1.*t2156*t759;
  t7926 = Power(t759,2);
  t7982 = -0.06*t7926;
  t8095 = t7837 + t7849 + t7866 + t7913 + t7982;
  t8307 = t7816*t759;
  t8401 = 0.12*t278*t759;
  t8405 = t1963 + t2186 + t8307 + t8401;
  t8783 = 1.142857*t2275*t7231;
  t8787 = 1.142857*t3430*t2539;
  t8574 = t8556*t1164;
  t8614 = t1305*t8608;
  t8616 = t6475 + t6508 + t8574 + t6748 + t8614;
  t8622 = -1.*t8556*t1305;
  t8626 = -1.*t2395*t8608;
  t8630 = t6940 + t3073 + t8622 + t8626 + t7009;
  t8791 = 1.142857*t3371*t7231;
  t8794 = 2.285714*t2539*t1932;
  t8795 = 2.285714*t2539*t7231;
  t8796 = t8794 + t8795;
  t8797 = -1.*var2[1]*t8796;
  t8798 = -1.*var2[0]*t7303;
  t8800 = 1.142857*t2539*t4561;
  t8671 = t1468*t8666;
  t8685 = t1883*t8683;
  t8689 = t7369 + t7442 + t8671 + t8685;
  t8803 = 1.142857*t4725*t7231;
  t8693 = -1.*t2480*t8666;
  t8694 = -1.*t2422*t8683;
  t8695 = t8693 + t8694 + t7522 + t7523;
  t8712 = -1.142857*t2539*t3759;
  t8714 = -1.142857*t3781*t1932;
  t8717 = t8712 + t8714;
  t4615 = 1.142857*t4561*t1932;
  t4733 = 1.142857*t2539*t4725;
  t4739 = t4615 + t4733;
  t8752 = 1.142857*t4561*t4020;
  t8753 = 1.142857*t3962*t4725;
  t8754 = t8752 + t8753;
  t8773 = 1.142857*t4561*t5593;
  t8774 = 1.142857*t5852*t1932;
  t8775 = 1.142857*t5552*t4725;
  t8776 = 1.142857*t2539*t6016;
  t8777 = t8773 + t8774 + t8775 + t8776;
  t5660 = 1.142857*t4561*t4835;
  t5890 = 1.142857*t5852*t3781;
  t5893 = 1.142857*t5171*t4725;
  t6056 = 1.142857*t3759*t6016;
  t6074 = t5660 + t5890 + t5893 + t6056;
  t7489 = 1.142857*t3759*t7488;
  t7532 = 1.142857*t3781*t7524;
  t7598 = t7367 + t7489 + t7492 + t7532;
  t8801 = 1.142857*t2539*t7488;
  t8804 = 1.142857*t1932*t7524;
  t8806 = t8800 + t8801 + t8803 + t8804;
  t8691 = 1.142857*t3759*t8689;
  t8696 = 1.142857*t3781*t8695;
  t8697 = t7367 + t8691 + t7492 + t8696;
  t8821 = 1.142857*t2539*t8689;
  t8824 = 1.142857*t1932*t8695;
  t8825 = t8800 + t8821 + t8803 + t8824;
  t8719 = -1.142857*t4561*t3781;
  t8720 = -1.142857*t3759*t4725;
  t8723 = t8719 + t8720;
  t8833 = -1.142857*t4561*t1932;
  t8834 = -1.142857*t2539*t4725;
  t8835 = t8833 + t8834;
  t8743 = 1.142857*t3371*t3962;
  t8744 = 1.142857*t3430*t4020;
  t8745 = t8743 + t8744;
  t3374 = 1.142857*t3371*t2539;
  t3509 = 1.142857*t3430*t1932;
  t3519 = t3374 + t3509;
  t8762 = 1.142857*t3371*t5552;
  t8763 = 1.142857*t3430*t5593;
  t8764 = t8762 + t8763;
  t5264 = 1.142857*t3371*t5171;
  t5312 = 1.142857*t3430*t4835;
  t5359 = t5264 + t5312;
  t8856 = 1.142857*t3430*t5852;
  t8858 = 1.142857*t3371*t6016;
  t8859 = t8856 + t8858;
  t6875 = 1.142857*t6771*t3759;
  t7031 = 1.142857*t7028*t3781;
  t7103 = t6458 + t6875 + t7031 + t7034;
  t8789 = 1.142857*t6771*t2539;
  t8790 = 1.142857*t7028*t1932;
  t8792 = t8787 + t8789 + t8790 + t8791;
  t8875 = 1.142857*t7028*t4561;
  t8876 = 1.142857*t3371*t7488;
  t8877 = 1.142857*t6771*t4725;
  t8878 = 1.142857*t3430*t7524;
  t8880 = t8875 + t8876 + t8877 + t8878;
  t8621 = 1.142857*t8616*t3759;
  t8639 = 1.142857*t8630*t3781;
  t8641 = t6458 + t8621 + t8639 + t7034;
  t8814 = 1.142857*t8616*t2539;
  t8818 = 1.142857*t8630*t1932;
  t8819 = t8787 + t8814 + t8818 + t8791;
  t8897 = 1.142857*t8630*t4561;
  t8898 = 1.142857*t8616*t4725;
  t8900 = 1.142857*t3371*t8689;
  t8901 = 1.142857*t3430*t8695;
  t8902 = t8897 + t8898 + t8900 + t8901;
  t8724 = -1.142857*t3371*t3759;
  t8726 = -1.142857*t3430*t3781;
  t8728 = t8724 + t8726;
  t8838 = -1.142857*t3371*t2539;
  t8840 = -1.142857*t3430*t1932;
  t8841 = t8838 + t8840;
  t8917 = -1.142857*t3430*t4561;
  t8918 = -1.142857*t3371*t4725;
  t8919 = -0.0085 + t8917 + t8918;
  t8736 = 1.142857*t2275*t3962;
  t8739 = 1.142857*t2845*t4020;
  t8740 = t8736 + t8739;
  t2610 = 1.142857*t2275*t2539;
  t2858 = 1.142857*t2845*t1932;
  t2871 = t2610 + t2858;
  t8758 = 1.142857*t2275*t5552;
  t8759 = 1.142857*t2845*t5593;
  t8760 = t8758 + t8759;
  t5174 = 1.142857*t2275*t5171;
  t5202 = 1.142857*t2845*t4835;
  t5214 = t5174 + t5202;
  t8851 = 1.142857*t2845*t5852;
  t8852 = 1.142857*t2275*t6016;
  t8853 = t8851 + t8852;
  t8933 = 1.142857*t2275*t6771;
  t8934 = 1.142857*t2845*t7028;
  t8935 = t8933 + t8934;
  t6413 = t6119 + t6403;
  t8785 = t8782 + t8783;
  t8871 = 1.142857*t2275*t7488;
  t8872 = 1.142857*t2845*t7524;
  t8873 = t8871 + t8872;
  t8949 = 1.142857*t8095*t3371;
  t8950 = 1.142857*t8405*t3430;
  t8951 = 1.142857*t2275*t8616;
  t8952 = 1.142857*t2845*t8630;
  t8953 = t8949 + t8950 + t8951 + t8952;
  t8173 = 1.142857*t8095*t3759;
  t8476 = 1.142857*t8405*t3781;
  t8477 = t6119 + t8173 + t8476 + t6403;
  t8809 = 1.142857*t8095*t2539;
  t8810 = 1.142857*t8405*t1932;
  t8812 = t8782 + t8809 + t8810 + t8783;
  t8891 = 1.142857*t8405*t4561;
  t8892 = 1.142857*t8095*t4725;
  t8893 = 1.142857*t2275*t8689;
  t8894 = 1.142857*t2845*t8695;
  t8895 = t8891 + t8892 + t8893 + t8894;
  t8730 = -1.142857*t2275*t3759;
  t8731 = -1.142857*t2845*t3781;
  t8732 = t8730 + t8731;
  t8843 = -1.142857*t2275*t2539;
  t8844 = -1.142857*t2845*t1932;
  t8845 = t8843 + t8844;
  t8920 = -1.142857*t2845*t4561;
  t8921 = -1.142857*t2275*t4725;
  t8922 = -0.0085 + t8920 + t8921;
  t8970 = -1.142857*t2275*t3371;
  t8971 = -1.142857*t2845*t3430;
  t8972 = -0.0085 + t8970 + t8971;
  t9013 = 0.06857142*var2[1]*t2539;
  t9014 = 0.06857142*var2[0]*t3759;
  t8734 = 0.06857142*t3781;
  t8846 = 0.06857142*t1932;
  t8923 = 0.06857142*t4561;
  t8924 = -0.0085 + t8923;
  t8973 = 0.06857142*t3430;
  t8974 = -0.0085 + t8973;
  t9002 = 0.06857142*t2845;
  t9003 = -0.0085 + t9002;
  p_output1[0]=-1.*(2.285714*t2539*t3759 + 2.285714*t1932*t3781)*var2[0] - 1.*t4153*var2[1] - 1.*t4739*var2[2] - 1.*t3519*var2[6] - 1.*t2871*var2[7] + 0.06857142*t1932*var2[8];
  p_output1[1]=-1.*(2.285714*t3781*t4835 + 2.285714*t3759*t5171)*var2[0] - 1.*t5617*var2[1] - 1.*t6074*var2[2] - 1.*t5359*var2[6] - 1.*t5214*var2[7] + 0.06857142*t4835*var2[8];
  p_output1[2]=t6111 + t7138 + t7345 - 1.*t7598*var2[2] - 1.*t7103*var2[6] - 1.*t6413*var2[7];
  p_output1[3]=t6111 + t7138 + t7345 - 1.*t8697*var2[2] - 1.*t8641*var2[6] - 1.*t8477*var2[7];
  p_output1[4]=-1.142857*Power(t3759,2) - 1.142857*Power(t3781,2);
  p_output1[5]=t8717;
  p_output1[6]=t8723;
  p_output1[7]=t8728;
  p_output1[8]=t8732;
  p_output1[9]=t8734;
  p_output1[10]=-1.*t4153*var2[0] - 1.*(2.285714*t2539*t3962 + 2.285714*t1932*t4020)*var2[1] - 1.*t8754*var2[2] - 1.*t8745*var2[6] - 1.*t8740*var2[7] + 0.06857142*t4020*var2[8];
  p_output1[11]=-1.*t5617*var2[0] - 1.*(2.285714*t2539*t5552 + 2.285714*t1932*t5593)*var2[1] - 1.*t8777*var2[2] - 1.*t8764*var2[6] - 1.*t8760*var2[7] + 0.06857142*t5593*var2[8];
  p_output1[12]=t8781 + t8797 + t8798 - 1.*t8806*var2[2] - 1.*t8792*var2[6] - 1.*t8785*var2[7];
  p_output1[13]=t8781 + t8797 + t8798 - 1.*t8825*var2[2] - 1.*t8819*var2[6] - 1.*t8812*var2[7];
  p_output1[14]=t8717;
  p_output1[15]=-1.142857*t3880 - 1.142857*t4073;
  p_output1[16]=t8835;
  p_output1[17]=t8841;
  p_output1[18]=t8845;
  p_output1[19]=t8846;
  p_output1[20]=-1.*t4739*var2[0] - 1.*t8754*var2[1];
  p_output1[21]=-1.*t6074*var2[0] - 1.*t8777*var2[1] - 1.*(2.285714*t4561*t5852 + 2.285714*t4725*t6016)*var2[2] - 1.*t8859*var2[6] - 1.*t8853*var2[7] + 0.06857142*t5852*var2[8];
  p_output1[22]=-1.*t7598*var2[0] - 1.*t8806*var2[1] - 1.*(2.285714*t4725*t7488 + 2.285714*t4561*t7524)*var2[2] - 1.*t8880*var2[6] - 1.*t8873*var2[7] + 0.06857142*t7524*var2[8];
  p_output1[23]=-1.*t8697*var2[0] - 1.*t8825*var2[1] - 1.*(2.285714*t4725*t8689 + 2.285714*t4561*t8695)*var2[2] - 1.*t8902*var2[6] - 1.*t8895*var2[7] + 0.06857142*t8695*var2[8];
  p_output1[24]=t8723;
  p_output1[25]=t8835;
  p_output1[26]=-0.0085 - 1.142857*Power(t4561,2) - 1.142857*Power(t4725,2);
  p_output1[27]=t8919;
  p_output1[28]=t8922;
  p_output1[29]=t8924;
  p_output1[30]=-1.*t3519*var2[0] - 1.*t8745*var2[1];
  p_output1[31]=-1.*t5359*var2[0] - 1.*t8764*var2[1] - 1.*t8859*var2[2];
  p_output1[32]=-1.*t7103*var2[0] - 1.*t8792*var2[1] - 1.*t8880*var2[2] - 1.*(2.285714*t3371*t6771 + 2.285714*t3430*t7028)*var2[6] - 1.*t8935*var2[7] + 0.06857142*t7028*var2[8];
  p_output1[33]=-1.*t8641*var2[0] - 1.*t8819*var2[1] - 1.*t8902*var2[2] - 1.*(2.285714*t3371*t8616 + 2.285714*t3430*t8630)*var2[6] - 1.*t8953*var2[7] + 0.06857142*t8630*var2[8];
  p_output1[34]=t8728;
  p_output1[35]=t8841;
  p_output1[36]=t8919;
  p_output1[37]=-0.0085 - 1.142857*Power(t3371,2) - 1.142857*Power(t3430,2);
  p_output1[38]=t8972;
  p_output1[39]=t8974;
  p_output1[40]=-1.*t2871*var2[0] - 1.*t8740*var2[1];
  p_output1[41]=-1.*t5214*var2[0] - 1.*t8760*var2[1] - 1.*t8853*var2[2];
  p_output1[42]=-1.*t6413*var2[0] - 1.*t8785*var2[1] - 1.*t8873*var2[2] - 1.*t8935*var2[6];
  p_output1[43]=-1.*t8477*var2[0] - 1.*t8812*var2[1] - 1.*t8895*var2[2] - 1.*t8953*var2[6] - 1.*(2.285714*t2275*t8095 + 2.285714*t2845*t8405)*var2[7] + 0.06857142*t8405*var2[8];
  p_output1[44]=t8732;
  p_output1[45]=t8845;
  p_output1[46]=t8922;
  p_output1[47]=t8972;
  p_output1[48]=-0.0085 - 1.142857*Power(t2275,2) - 1.142857*Power(t2845,2);
  p_output1[49]=t9003;
  p_output1[50]=0.06857142*t1932*var2[0] + 0.06857142*t4020*var2[1];
  p_output1[51]=0.06857142*t4835*var2[0] + 0.06857142*t5593*var2[1] + 0.06857142*t5852*var2[2];
  p_output1[52]=t9013 + t9014 + 0.06857142*t7524*var2[2] + 0.06857142*t7028*var2[6];
  p_output1[53]=t9013 + t9014 + 0.06857142*t8695*var2[2] + 0.06857142*t8630*var2[6] + 0.06857142*t8405*var2[7];
  p_output1[54]=t8734;
  p_output1[55]=t8846;
  p_output1[56]=t8924;
  p_output1[57]=t8974;
  p_output1[58]=t9003;
  p_output1[59]=-0.0126142852;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 60, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx7_amber3_feet.hh"

namespace RightSS1
{

void J_MmatDx7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

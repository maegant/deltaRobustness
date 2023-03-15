/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:58 GMT-08:00
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
  double t252;
  double t156;
  double t157;
  double t255;
  double t1030;
  double t200;
  double t288;
  double t676;
  double t89;
  double t1305;
  double t1332;
  double t1454;
  double t1849;
  double t1468;
  double t27;
  double t2623;
  double t2749;
  double t2759;
  double t2221;
  double t2305;
  double t2306;
  double t2395;
  double t2480;
  double t2487;
  double t1016;
  double t1492;
  double t1574;
  double t1877;
  double t1967;
  double t2110;
  double t2112;
  double t2135;
  double t2766;
  double t2769;
  double t2825;
  double t2845;
  double t2913;
  double t2917;
  double t2931;
  double t2992;
  double t3521;
  double t3524;
  double t3539;
  double t3687;
  double t3719;
  double t3734;
  double t3263;
  double t3309;
  double t3314;
  double t3383;
  double t4062;
  double t4073;
  double t4148;
  double t4200;
  double t4230;
  double t4344;
  double t5479;
  double t5493;
  double t5495;
  double t5503;
  double t5551;
  double t5559;
  double t5283;
  double t5288;
  double t5359;
  double t5394;
  double t2186;
  double t2508;
  double t2604;
  double t2611;
  double t3054;
  double t3055;
  double t3094;
  double t3169;
  double t3177;
  double t5848;
  double t5852;
  double t5853;
  double t5890;
  double t3397;
  double t3509;
  double t3759;
  double t3760;
  double t5986;
  double t6006;
  double t6011;
  double t6056;
  double t6079;
  double t3764;
  double t3778;
  double t3821;
  double t3835;
  double t4857;
  double t5029;
  double t5398;
  double t5577;
  double t5583;
  double t5614;
  double t5617;
  double t5624;
  double t6875;
  double t6880;
  double t6884;
  double t6941;
  double t6771;
  double t6778;
  double t7300;
  double t7303;
  double t7344;
  double t7523;
  double t7532;
  double t7534;
  double t7593;
  double t7502;
  double t7503;
  double t7345;
  double t7358;
  double t7367;
  double t7369;
  double t7384;
  double t7399;
  double t7404;
  double t8626;
  double t8630;
  double t8637;
  double t8615;
  double t8616;
  double t8617;
  double t7251;
  double t7289;
  double t8681;
  double t8683;
  double t7405;
  double t7485;
  double t7489;
  double t7492;
  double t7703;
  double t7902;
  double t8705;
  double t8707;
  double t8708;
  double t8712;
  double t8714;
  double t8715;
  double t7919;
  double t8095;
  double t8476;
  double t8477;
  double t8484;
  double t8486;
  double t8508;
  double t8511;
  double t8516;
  double t8556;
  double t8562;
  double t8574;
  double t8598;
  double t8599;
  double t8603;
  double t8608;
  double t8614;
  double t8622;
  double t8647;
  double t8727;
  double t8728;
  double t8729;
  double t8731;
  double t8732;
  double t8733;
  double t8658;
  double t8661;
  double t5043;
  double t5073;
  double t4837;
  double t4893;
  double t4754;
  double t4836;
  double t4961;
  double t5110;
  double t5129;
  double t5184;
  double t5194;
  double t6434;
  double t6475;
  double t6379;
  double t6403;
  double t6356;
  double t6428;
  double t6546;
  double t6646;
  double t6654;
  double t6726;
  double t6847;
  double t6951;
  double t6993;
  double t7009;
  double t7034;
  double t7112;
  double t7128;
  double t7131;
  double t7138;
  double t7514;
  double t7598;
  double t7813;
  double t7885;
  double t7911;
  double t7926;
  double t8621;
  double t8639;
  double t8641;
  double t8649;
  double t8653;
  double t8663;
  double t8802;
  double t8803;
  double t8685;
  double t8689;
  double t8691;
  double t8692;
  double t8693;
  double t8694;
  double t8695;
  double t8697;
  double t8698;
  double t8699;
  double t8804;
  double t8807;
  double t8709;
  double t8717;
  double t8719;
  double t8721;
  double t8722;
  double t8723;
  double t8810;
  double t8813;
  double t8814;
  double t8815;
  double t8816;
  double t8817;
  double t8818;
  double t8730;
  double t8734;
  double t8735;
  double t8820;
  double t8737;
  double t8738;
  double t8739;
  double t8749;
  double t8750;
  double t8751;
  double t5611;
  double t5752;
  double t5804;
  double t8776;
  double t8777;
  double t8778;
  double t8795;
  double t8796;
  double t8797;
  double t8798;
  double t8799;
  double t6676;
  double t7028;
  double t7031;
  double t7169;
  double t7183;
  double t8646;
  double t8666;
  double t8667;
  double t8819;
  double t8821;
  double t8822;
  double t8736;
  double t8740;
  double t8741;
  double t8834;
  double t8835;
  double t8836;
  double t8752;
  double t8753;
  double t8754;
  double t8845;
  double t8846;
  double t8847;
  double t8767;
  double t8768;
  double t8769;
  double t3761;
  double t3962;
  double t3979;
  double t8786;
  double t8787;
  double t8788;
  double t6242;
  double t6276;
  double t6285;
  double t8865;
  double t8866;
  double t8867;
  double t7849;
  double t7982;
  double t8167;
  double t8808;
  double t8809;
  double t8811;
  double t8881;
  double t8882;
  double t8883;
  double t8884;
  double t8885;
  double t8720;
  double t8724;
  double t8725;
  double t8830;
  double t8831;
  double t8832;
  double t8901;
  double t8902;
  double t8903;
  double t8904;
  double t8905;
  double t8755;
  double t8756;
  double t8757;
  double t8848;
  double t8849;
  double t8850;
  double t8919;
  double t8920;
  double t8921;
  double t8763;
  double t8764;
  double t8765;
  double t3002;
  double t3216;
  double t3239;
  double t8782;
  double t8783;
  double t8784;
  double t6111;
  double t6123;
  double t6134;
  double t8861;
  double t8862;
  double t8863;
  double t8935;
  double t8936;
  double t8937;
  double t7412;
  double t8805;
  double t8877;
  double t8878;
  double t8879;
  double t8950;
  double t8951;
  double t8952;
  double t8953;
  double t8955;
  double t8696;
  double t8701;
  double t8703;
  double t8826;
  double t8827;
  double t8828;
  double t8895;
  double t8896;
  double t8897;
  double t8898;
  double t8899;
  double t8758;
  double t8759;
  double t8760;
  double t8851;
  double t8852;
  double t8853;
  double t8922;
  double t8923;
  double t8924;
  double t8970;
  double t8971;
  double t8972;
  double t9013;
  double t9014;
  double t8761;
  double t8854;
  double t8925;
  double t8926;
  double t8973;
  double t8974;
  double t9002;
  double t9003;
  t252 = Cos(var1[4]);
  t156 = Cos(var1[5]);
  t157 = Sin(var1[4]);
  t255 = Sin(var1[5]);
  t1030 = Cos(var1[3]);
  t200 = t156*t157;
  t288 = t252*t255;
  t676 = t200 + t288;
  t89 = Sin(var1[3]);
  t1305 = t252*t156;
  t1332 = -1.*t157*t255;
  t1454 = t1305 + t1332;
  t1849 = Sin(var1[2]);
  t1468 = t1030*t1454;
  t27 = Cos(var1[2]);
  t2623 = -1.*t156*t157;
  t2749 = -1.*t252*t255;
  t2759 = t2623 + t2749;
  t2221 = -1.*t156;
  t2305 = 1. + t2221;
  t2306 = -1.3127*t2305;
  t2395 = -1.3127*t156;
  t2480 = -0.06*t255;
  t2487 = t2306 + t2395 + t2480;
  t1016 = -1.*t89*t676;
  t1492 = t1016 + t1468;
  t1574 = t27*t1492;
  t1877 = t1030*t676;
  t1967 = t89*t1454;
  t2110 = t1877 + t1967;
  t2112 = -1.*t1849*t2110;
  t2135 = t1574 + t2112;
  t2766 = t89*t2759;
  t2769 = t2766 + t1468;
  t2825 = -1.*t1849*t2769;
  t2845 = t1030*t2759;
  t2913 = -1.*t89*t1454;
  t2917 = t2845 + t2913;
  t2931 = t27*t2917;
  t2992 = t2825 + t2931;
  t3521 = -1.*t252;
  t3524 = 1. + t3521;
  t3539 = -0.9063*t3524;
  t3687 = -0.06*t156*t157;
  t3719 = t252*t2487;
  t3734 = t3539 + t3687 + t3719;
  t3263 = 0.06*t252*t156;
  t3309 = 0.9063*t157;
  t3314 = t157*t2487;
  t3383 = t3263 + t3309 + t3314;
  t4062 = t27*t2769;
  t4073 = t1849*t2917;
  t4148 = t4062 + t4073;
  t4200 = t1849*t1492;
  t4230 = t27*t2110;
  t4344 = t4200 + t4230;
  t5479 = -1.*t1030;
  t5493 = 1. + t5479;
  t5495 = -0.4999*t5493;
  t5503 = t1030*t3734;
  t5551 = -1.*t89*t3383;
  t5559 = t5495 + t5503 + t5551;
  t5283 = 0.4999*t89;
  t5288 = t89*t3734;
  t5359 = t1030*t3383;
  t5394 = t5283 + t5288 + t5359;
  t2186 = 0.9063*t156;
  t2508 = t156*t2487;
  t2604 = 0.06*t156*t255;
  t2611 = t2186 + t2508 + t2604;
  t3054 = Power(t156,2);
  t3055 = -0.06*t3054;
  t3094 = 0.9063*t255;
  t3169 = t2487*t255;
  t3177 = t3055 + t3094 + t3169;
  t5848 = -1.*t1030*t676;
  t5852 = t5848 + t2913;
  t5853 = t1849*t5852;
  t5890 = t1574 + t5853;
  t3397 = t3383*t676;
  t3509 = 0.4999*t1454;
  t3759 = t3734*t1454;
  t3760 = t3397 + t3509 + t3759;
  t5986 = -1.*t89*t2759;
  t6006 = -1.*t1030*t1454;
  t6011 = t5986 + t6006;
  t6056 = t1849*t6011;
  t6079 = t6056 + t2931;
  t3764 = -1.*t3734*t2759;
  t3778 = 0.4999*t676;
  t3821 = -1.*t3383*t1454;
  t3835 = t3764 + t3778 + t3821;
  t4857 = -1.*t1849*t2917;
  t5029 = -1.*t1849*t1492;
  t5398 = -1.*t5394*t2769;
  t5577 = -1.*t5559*t2917;
  t5583 = t5398 + t5577;
  t5614 = t5559*t1492;
  t5617 = t5394*t2110;
  t5624 = t5614 + t5617;
  t6875 = -0.4999*t89;
  t6880 = -1.*t89*t3734;
  t6884 = -1.*t1030*t3383;
  t6941 = t6875 + t6880 + t6884;
  t6771 = 0.4999*t1030;
  t6778 = t6771 + t5503 + t5551;
  t7300 = -1.*t252*t156;
  t7303 = t157*t255;
  t7344 = t7300 + t7303;
  t7523 = -0.06*t252*t156;
  t7532 = -0.9063*t157;
  t7534 = -1.*t157*t2487;
  t7593 = t7523 + t7532 + t7534;
  t7502 = 0.9063*t252;
  t7503 = t7502 + t3687 + t3719;
  t7345 = t1030*t7344;
  t7358 = t5986 + t7345;
  t7367 = t1849*t7358;
  t7369 = t89*t7344;
  t7384 = t2845 + t7369;
  t7399 = t27*t7384;
  t7404 = t7367 + t7399;
  t8626 = t1030*t7503;
  t8630 = t89*t7593;
  t8637 = t8626 + t8630;
  t8615 = -1.*t89*t7503;
  t8616 = t1030*t7593;
  t8617 = t8615 + t8616;
  t7251 = 0.06857142*var2[5]*t4148;
  t7289 = 1.142857*t3177*t4148;
  t8681 = -0.06*t156;
  t8683 = 0. + t8681;
  t7405 = 1.142857*t2611*t7404;
  t7485 = 1.142857*t3835*t4148;
  t7489 = 0.4999*t2759;
  t7492 = t3734*t2759;
  t7703 = t3383*t1454;
  t7902 = -1.*t3383*t2759;
  t8705 = t8683*t157;
  t8707 = -0.06*t252*t255;
  t8708 = t8705 + t8707;
  t8712 = t252*t8683;
  t8714 = 0.06*t157*t255;
  t8715 = t8712 + t8714;
  t7919 = -1.*t3734*t7344;
  t8095 = 1.142857*t3760*t7404;
  t8476 = 2.285714*t4148*t4344;
  t8477 = 2.285714*t4148*t7404;
  t8484 = t8476 + t8477;
  t8486 = -1.*var2[0]*t8484;
  t8508 = 1.142857*t2992*t4344;
  t8511 = 1.142857*t4148*t2135;
  t8516 = 1.142857*t2992*t7404;
  t8556 = t27*t7358;
  t8562 = -1.*t1849*t7384;
  t8574 = t8556 + t8562;
  t8598 = 1.142857*t4148*t8574;
  t8599 = t8508 + t8511 + t8516 + t8598;
  t8603 = -1.*var2[1]*t8599;
  t8608 = 1.142857*t4148*t5583;
  t8614 = t5394*t2769;
  t8622 = t5559*t2917;
  t8647 = 1.142857*t5624*t7404;
  t8727 = -1.*t89*t8708;
  t8728 = t1030*t8715;
  t8729 = t8727 + t8728;
  t8731 = t1030*t8708;
  t8732 = t89*t8715;
  t8733 = t8731 + t8732;
  t8658 = -1.*t5559*t7358;
  t8661 = -1.*t5394*t7384;
  t5043 = -1.*t27*t2110;
  t5073 = t5029 + t5043;
  t4837 = -1.*t27*t2769;
  t4893 = t4837 + t4857;
  t4754 = Power(t2992,2);
  t4836 = 1.142857*t4754;
  t4961 = 1.142857*t4893*t4148;
  t5110 = 1.142857*t5073*t4344;
  t5129 = Power(t2135,2);
  t5184 = 1.142857*t5129;
  t5194 = t4836 + t4961 + t5110 + t5184;
  t6434 = t27*t5852;
  t6475 = t5029 + t6434;
  t6379 = t27*t6011;
  t6403 = t6379 + t4857;
  t6356 = 1.142857*t6079*t2992;
  t6428 = 1.142857*t6403*t4148;
  t6546 = 1.142857*t6475*t4344;
  t6646 = 1.142857*t5890*t2135;
  t6654 = t6356 + t6428 + t6546 + t6646;
  t6726 = -1.*t5559*t6011;
  t6847 = -1.*t6778*t2769;
  t6951 = -1.*t6941*t2917;
  t6993 = -1.*t5394*t2917;
  t7009 = t6726 + t6847 + t6951 + t6993;
  t7034 = t6941*t1492;
  t7112 = t5394*t1492;
  t7128 = t5559*t5852;
  t7131 = t6778*t2110;
  t7138 = t7034 + t7112 + t7128 + t7131;
  t7514 = t7503*t676;
  t7598 = t7593*t1454;
  t7813 = t7489 + t7492 + t7514 + t7598 + t7703;
  t7885 = -1.*t7593*t2759;
  t7911 = -1.*t7503*t1454;
  t7926 = t7885 + t7902 + t3509 + t7911 + t7919;
  t8621 = t8617*t1492;
  t8639 = t8637*t2110;
  t8641 = t8614 + t8621 + t8622 + t8639;
  t8649 = -1.*t8637*t2769;
  t8653 = -1.*t8617*t2917;
  t8663 = t8649 + t8653 + t8658 + t8661;
  t8802 = 0.06857142*var2[5]*t2992;
  t8803 = 1.142857*t3177*t2992;
  t8685 = t8683*t156;
  t8689 = 0.06*t3054;
  t8691 = -0.9063*t255;
  t8692 = -1.*t2487*t255;
  t8693 = Power(t255,2);
  t8694 = -0.06*t8693;
  t8695 = t8685 + t8689 + t8691 + t8692 + t8694;
  t8697 = t8683*t255;
  t8698 = 0.12*t156*t255;
  t8699 = t2186 + t2508 + t8697 + t8698;
  t8804 = 1.142857*t2611*t8574;
  t8807 = 1.142857*t3835*t2992;
  t8709 = t8708*t676;
  t8717 = t1454*t8715;
  t8719 = t7489 + t7492 + t8709 + t7703 + t8717;
  t8721 = -1.*t8708*t1454;
  t8722 = -1.*t2759*t8715;
  t8723 = t7902 + t3509 + t8721 + t8722 + t7919;
  t8810 = 1.142857*t3760*t8574;
  t8813 = 2.285714*t2992*t2135;
  t8814 = 2.285714*t2992*t8574;
  t8815 = t8813 + t8814;
  t8816 = -1.*var2[1]*t8815;
  t8817 = -1.*var2[0]*t8599;
  t8818 = 1.142857*t2992*t5583;
  t8730 = t1492*t8729;
  t8734 = t2110*t8733;
  t8735 = t8614 + t8622 + t8730 + t8734;
  t8820 = 1.142857*t5624*t8574;
  t8737 = -1.*t2917*t8729;
  t8738 = -1.*t2769*t8733;
  t8739 = t8737 + t8738 + t8658 + t8661;
  t8749 = -1.142857*t2992*t4148;
  t8750 = -1.142857*t4344*t2135;
  t8751 = t8749 + t8750;
  t5611 = 1.142857*t5583*t2135;
  t5752 = 1.142857*t2992*t5624;
  t5804 = t5611 + t5752;
  t8776 = 1.142857*t5583*t5073;
  t8777 = 1.142857*t4893*t5624;
  t8778 = t8776 + t8777;
  t8795 = 1.142857*t5583*t6475;
  t8796 = 1.142857*t7009*t2135;
  t8797 = 1.142857*t6403*t5624;
  t8798 = 1.142857*t2992*t7138;
  t8799 = t8795 + t8796 + t8797 + t8798;
  t6676 = 1.142857*t5583*t5890;
  t7028 = 1.142857*t7009*t4344;
  t7031 = 1.142857*t6079*t5624;
  t7169 = 1.142857*t4148*t7138;
  t7183 = t6676 + t7028 + t7031 + t7169;
  t8646 = 1.142857*t4148*t8641;
  t8666 = 1.142857*t4344*t8663;
  t8667 = t8608 + t8646 + t8647 + t8666;
  t8819 = 1.142857*t2992*t8641;
  t8821 = 1.142857*t2135*t8663;
  t8822 = t8818 + t8819 + t8820 + t8821;
  t8736 = 1.142857*t4148*t8735;
  t8740 = 1.142857*t4344*t8739;
  t8741 = t8608 + t8736 + t8647 + t8740;
  t8834 = 1.142857*t2992*t8735;
  t8835 = 1.142857*t2135*t8739;
  t8836 = t8818 + t8834 + t8820 + t8835;
  t8752 = -1.142857*t5583*t4344;
  t8753 = -1.142857*t4148*t5624;
  t8754 = t8752 + t8753;
  t8845 = -1.142857*t5583*t2135;
  t8846 = -1.142857*t2992*t5624;
  t8847 = t8845 + t8846;
  t8767 = 1.142857*t3760*t4893;
  t8768 = 1.142857*t3835*t5073;
  t8769 = t8767 + t8768;
  t3761 = 1.142857*t3760*t2992;
  t3962 = 1.142857*t3835*t2135;
  t3979 = t3761 + t3962;
  t8786 = 1.142857*t3760*t6403;
  t8787 = 1.142857*t3835*t6475;
  t8788 = t8786 + t8787;
  t6242 = 1.142857*t3760*t6079;
  t6276 = 1.142857*t3835*t5890;
  t6285 = t6242 + t6276;
  t8865 = 1.142857*t3835*t7009;
  t8866 = 1.142857*t3760*t7138;
  t8867 = t8865 + t8866;
  t7849 = 1.142857*t7813*t4148;
  t7982 = 1.142857*t7926*t4344;
  t8167 = t7485 + t7849 + t7982 + t8095;
  t8808 = 1.142857*t7813*t2992;
  t8809 = 1.142857*t7926*t2135;
  t8811 = t8807 + t8808 + t8809 + t8810;
  t8881 = 1.142857*t7926*t5583;
  t8882 = 1.142857*t3760*t8641;
  t8883 = 1.142857*t7813*t5624;
  t8884 = 1.142857*t3835*t8663;
  t8885 = t8881 + t8882 + t8883 + t8884;
  t8720 = 1.142857*t8719*t4148;
  t8724 = 1.142857*t8723*t4344;
  t8725 = t7485 + t8720 + t8724 + t8095;
  t8830 = 1.142857*t8719*t2992;
  t8831 = 1.142857*t8723*t2135;
  t8832 = t8807 + t8830 + t8831 + t8810;
  t8901 = 1.142857*t8723*t5583;
  t8902 = 1.142857*t8719*t5624;
  t8903 = 1.142857*t3760*t8735;
  t8904 = 1.142857*t3835*t8739;
  t8905 = t8901 + t8902 + t8903 + t8904;
  t8755 = -1.142857*t3760*t4148;
  t8756 = -1.142857*t3835*t4344;
  t8757 = t8755 + t8756;
  t8848 = -1.142857*t3760*t2992;
  t8849 = -1.142857*t3835*t2135;
  t8850 = t8848 + t8849;
  t8919 = -1.142857*t3835*t5583;
  t8920 = -1.142857*t3760*t5624;
  t8921 = -0.0085 + t8919 + t8920;
  t8763 = 1.142857*t2611*t4893;
  t8764 = 1.142857*t3177*t5073;
  t8765 = t8763 + t8764;
  t3002 = 1.142857*t2611*t2992;
  t3216 = 1.142857*t3177*t2135;
  t3239 = t3002 + t3216;
  t8782 = 1.142857*t2611*t6403;
  t8783 = 1.142857*t3177*t6475;
  t8784 = t8782 + t8783;
  t6111 = 1.142857*t2611*t6079;
  t6123 = 1.142857*t3177*t5890;
  t6134 = t6111 + t6123;
  t8861 = 1.142857*t3177*t7009;
  t8862 = 1.142857*t2611*t7138;
  t8863 = t8861 + t8862;
  t8935 = 1.142857*t2611*t7813;
  t8936 = 1.142857*t3177*t7926;
  t8937 = t8935 + t8936;
  t7412 = t7289 + t7405;
  t8805 = t8803 + t8804;
  t8877 = 1.142857*t2611*t8641;
  t8878 = 1.142857*t3177*t8663;
  t8879 = t8877 + t8878;
  t8950 = 1.142857*t8695*t3760;
  t8951 = 1.142857*t8699*t3835;
  t8952 = 1.142857*t2611*t8719;
  t8953 = 1.142857*t3177*t8723;
  t8955 = t8950 + t8951 + t8952 + t8953;
  t8696 = 1.142857*t8695*t4148;
  t8701 = 1.142857*t8699*t4344;
  t8703 = t7289 + t8696 + t8701 + t7405;
  t8826 = 1.142857*t8695*t2992;
  t8827 = 1.142857*t8699*t2135;
  t8828 = t8803 + t8826 + t8827 + t8804;
  t8895 = 1.142857*t8699*t5583;
  t8896 = 1.142857*t8695*t5624;
  t8897 = 1.142857*t2611*t8735;
  t8898 = 1.142857*t3177*t8739;
  t8899 = t8895 + t8896 + t8897 + t8898;
  t8758 = -1.142857*t2611*t4148;
  t8759 = -1.142857*t3177*t4344;
  t8760 = t8758 + t8759;
  t8851 = -1.142857*t2611*t2992;
  t8852 = -1.142857*t3177*t2135;
  t8853 = t8851 + t8852;
  t8922 = -1.142857*t3177*t5583;
  t8923 = -1.142857*t2611*t5624;
  t8924 = -0.0085 + t8922 + t8923;
  t8970 = -1.142857*t2611*t3760;
  t8971 = -1.142857*t3177*t3835;
  t8972 = -0.0085 + t8970 + t8971;
  t9013 = 0.06857142*var2[1]*t2992;
  t9014 = 0.06857142*var2[0]*t4148;
  t8761 = 0.06857142*t4344;
  t8854 = 0.06857142*t2135;
  t8925 = 0.06857142*t5583;
  t8926 = -0.0085 + t8925;
  t8973 = 0.06857142*t3835;
  t8974 = -0.0085 + t8973;
  t9002 = 0.06857142*t3177;
  t9003 = -0.0085 + t9002;
  p_output1[0]=-1.*(2.285714*t2992*t4148 + 2.285714*t2135*t4344)*var2[0] - 1.*t5194*var2[1] - 1.*t5804*var2[2] - 1.*t3979*var2[3] - 1.*t3239*var2[4] + 0.06857142*t2135*var2[5];
  p_output1[1]=-1.*(2.285714*t4344*t5890 + 2.285714*t4148*t6079)*var2[0] - 1.*t6654*var2[1] - 1.*t7183*var2[2] - 1.*t6285*var2[3] - 1.*t6134*var2[4] + 0.06857142*t5890*var2[5];
  p_output1[2]=t7251 + t8486 + t8603 - 1.*t8667*var2[2] - 1.*t8167*var2[3] - 1.*t7412*var2[4];
  p_output1[3]=t7251 + t8486 + t8603 - 1.*t8741*var2[2] - 1.*t8725*var2[3] - 1.*t8703*var2[4];
  p_output1[4]=-1.142857*Power(t4148,2) - 1.142857*Power(t4344,2);
  p_output1[5]=t8751;
  p_output1[6]=t8754;
  p_output1[7]=t8757;
  p_output1[8]=t8760;
  p_output1[9]=t8761;
  p_output1[10]=-1.*t5194*var2[0] - 1.*(2.285714*t2992*t4893 + 2.285714*t2135*t5073)*var2[1] - 1.*t8778*var2[2] - 1.*t8769*var2[3] - 1.*t8765*var2[4] + 0.06857142*t5073*var2[5];
  p_output1[11]=-1.*t6654*var2[0] - 1.*(2.285714*t2992*t6403 + 2.285714*t2135*t6475)*var2[1] - 1.*t8799*var2[2] - 1.*t8788*var2[3] - 1.*t8784*var2[4] + 0.06857142*t6475*var2[5];
  p_output1[12]=t8802 + t8816 + t8817 - 1.*t8822*var2[2] - 1.*t8811*var2[3] - 1.*t8805*var2[4];
  p_output1[13]=t8802 + t8816 + t8817 - 1.*t8836*var2[2] - 1.*t8832*var2[3] - 1.*t8828*var2[4];
  p_output1[14]=t8751;
  p_output1[15]=-1.142857*t4754 - 1.142857*t5129;
  p_output1[16]=t8847;
  p_output1[17]=t8850;
  p_output1[18]=t8853;
  p_output1[19]=t8854;
  p_output1[20]=-1.*t5804*var2[0] - 1.*t8778*var2[1];
  p_output1[21]=-1.*t7183*var2[0] - 1.*t8799*var2[1] - 1.*(2.285714*t5583*t7009 + 2.285714*t5624*t7138)*var2[2] - 1.*t8867*var2[3] - 1.*t8863*var2[4] + 0.06857142*t7009*var2[5];
  p_output1[22]=-1.*t8667*var2[0] - 1.*t8822*var2[1] - 1.*(2.285714*t5624*t8641 + 2.285714*t5583*t8663)*var2[2] - 1.*t8885*var2[3] - 1.*t8879*var2[4] + 0.06857142*t8663*var2[5];
  p_output1[23]=-1.*t8741*var2[0] - 1.*t8836*var2[1] - 1.*(2.285714*t5624*t8735 + 2.285714*t5583*t8739)*var2[2] - 1.*t8905*var2[3] - 1.*t8899*var2[4] + 0.06857142*t8739*var2[5];
  p_output1[24]=t8754;
  p_output1[25]=t8847;
  p_output1[26]=-0.0085 - 1.142857*Power(t5583,2) - 1.142857*Power(t5624,2);
  p_output1[27]=t8921;
  p_output1[28]=t8924;
  p_output1[29]=t8926;
  p_output1[30]=-1.*t3979*var2[0] - 1.*t8769*var2[1];
  p_output1[31]=-1.*t6285*var2[0] - 1.*t8788*var2[1] - 1.*t8867*var2[2];
  p_output1[32]=-1.*t8167*var2[0] - 1.*t8811*var2[1] - 1.*t8885*var2[2] - 1.*(2.285714*t3760*t7813 + 2.285714*t3835*t7926)*var2[3] - 1.*t8937*var2[4] + 0.06857142*t7926*var2[5];
  p_output1[33]=-1.*t8725*var2[0] - 1.*t8832*var2[1] - 1.*t8905*var2[2] - 1.*(2.285714*t3760*t8719 + 2.285714*t3835*t8723)*var2[3] - 1.*t8955*var2[4] + 0.06857142*t8723*var2[5];
  p_output1[34]=t8757;
  p_output1[35]=t8850;
  p_output1[36]=t8921;
  p_output1[37]=-0.0085 - 1.142857*Power(t3760,2) - 1.142857*Power(t3835,2);
  p_output1[38]=t8972;
  p_output1[39]=t8974;
  p_output1[40]=-1.*t3239*var2[0] - 1.*t8765*var2[1];
  p_output1[41]=-1.*t6134*var2[0] - 1.*t8784*var2[1] - 1.*t8863*var2[2];
  p_output1[42]=-1.*t7412*var2[0] - 1.*t8805*var2[1] - 1.*t8879*var2[2] - 1.*t8937*var2[3];
  p_output1[43]=-1.*t8703*var2[0] - 1.*t8828*var2[1] - 1.*t8899*var2[2] - 1.*t8955*var2[3] - 1.*(2.285714*t2611*t8695 + 2.285714*t3177*t8699)*var2[4] + 0.06857142*t8699*var2[5];
  p_output1[44]=t8760;
  p_output1[45]=t8853;
  p_output1[46]=t8924;
  p_output1[47]=t8972;
  p_output1[48]=-0.0085 - 1.142857*Power(t2611,2) - 1.142857*Power(t3177,2);
  p_output1[49]=t9003;
  p_output1[50]=0.06857142*t2135*var2[0] + 0.06857142*t5073*var2[1];
  p_output1[51]=0.06857142*t5890*var2[0] + 0.06857142*t6475*var2[1] + 0.06857142*t7009*var2[2];
  p_output1[52]=t9013 + t9014 + 0.06857142*t8663*var2[2] + 0.06857142*t7926*var2[3];
  p_output1[53]=t9013 + t9014 + 0.06857142*t8739*var2[2] + 0.06857142*t8723*var2[3] + 0.06857142*t8699*var2[4];
  p_output1[54]=t8761;
  p_output1[55]=t8854;
  p_output1[56]=t8926;
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

#include "J_MmatDx4_amber3_feet.hh"

namespace RightSS1
{

void J_MmatDx4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

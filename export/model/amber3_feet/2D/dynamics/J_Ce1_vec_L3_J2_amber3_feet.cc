/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:34 GMT-08:00
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
  double t339;
  double t167;
  double t258;
  double t400;
  double t1222;
  double t323;
  double t994;
  double t1116;
  double t85;
  double t1244;
  double t1356;
  double t1358;
  double t1495;
  double t1497;
  double t1500;
  double t1480;
  double t1558;
  double t1395;
  double t2097;
  double t1523;
  double t1623;
  double t1475;
  double t1484;
  double t1980;
  double t1991;
  double t1673;
  double t1714;
  double t1219;
  double t1469;
  double t2294;
  double t2406;
  double t2001;
  double t2562;
  double t2564;
  double t2611;
  double t2502;
  double t2539;
  double t2546;
  double t2620;
  double t2624;
  double t2677;
  double t2680;
  double t2681;
  double t2734;
  double t2735;
  double t2830;
  double t2834;
  double t2845;
  double t2271;
  double t2912;
  double t2991;
  double t2992;
  double t3172;
  double t3295;
  double t3345;
  double t3371;
  double t3389;
  double t3405;
  double t2911;
  double t3410;
  double t3423;
  double t3463;
  double t3471;
  double t3679;
  double t3687;
  double t3760;
  double t3774;
  double t3778;
  double t3481;
  double t3483;
  double t3486;
  double t3509;
  double t3538;
  double t3633;
  double t3657;
  double t3968;
  double t2275;
  double t2123;
  double t4088;
  double t4103;
  double t4142;
  double t4148;
  double t4191;
  double t4342;
  double t4360;
  double t4366;
  double t4403;
  double t4406;
  double t4408;
  double t4341;
  double t4411;
  double t4438;
  double t4439;
  double t4440;
  double t4547;
  double t4446;
  double t4512;
  double t4531;
  double t4666;
  double t4781;
  double t4803;
  double t4832;
  double t4835;
  double t4836;
  double t4772;
  double t4884;
  double t4966;
  double t4970;
  double t4994;
  double t5033;
  double t5118;
  double t5129;
  double t5171;
  double t5174;
  double t4983;
  double t5195;
  double t5212;
  double t5264;
  double t5312;
  double t5362;
  double t5498;
  double t5503;
  double t5507;
  double t5517;
  double t5593;
  double t5600;
  double t5492;
  double t5495;
  double t5592;
  double t5624;
  double t5660;
  double t5867;
  double t5890;
  double t5947;
  double t5951;
  double t5810;
  double t5583;
  double t5601;
  double t5611;
  double t5614;
  double t5720;
  double t5805;
  double t5812;
  double t5852;
  double t5858;
  double t6170;
  double t6178;
  double t6179;
  double t6190;
  double t6117;
  double t5893;
  double t5959;
  double t6016;
  double t6123;
  double t6272;
  double t6332;
  double t6031;
  double t6038;
  double t6042;
  double t6428;
  double t6710;
  double t6748;
  double t6540;
  double t6026;
  double t6056;
  double t6068;
  double t6661;
  double t6701;
  double t6708;
  double t6760;
  double t6771;
  double t6772;
  double t6819;
  double t6825;
  double t6830;
  double t6831;
  double t6833;
  double t6852;
  double t6856;
  double t6862;
  double t6875;
  double t6895;
  double t6900;
  double t6944;
  double t6970;
  double t6982;
  double t7112;
  double t7404;
  double t7413;
  double t7304;
  double t7359;
  double t7367;
  double t7407;
  double t7414;
  double t7425;
  double t7450;
  double t7461;
  double t7462;
  double t7495;
  double t7515;
  double t7524;
  double t7532;
  double t7622;
  double t7688;
  double t7696;
  double t7703;
  double t7716;
  double t7836;
  double t7837;
  double t7849;
  double t7982;
  double t7985;
  double t8086;
  double t7866;
  double t7867;
  double t7922;
  double t7926;
  double t8340;
  double t8383;
  double t7935;
  double t8598;
  double t8508;
  double t8476;
  double t8639;
  double t8723;
  double t8724;
  double t8712;
  double t8714;
  double t8717;
  double t8726;
  double t8730;
  double t8731;
  double t8732;
  double t8751;
  double t8752;
  double t8753;
  double t8756;
  double t8757;
  double t8766;
  t339 = Cos(var1[3]);
  t167 = Cos(var1[4]);
  t258 = Sin(var1[3]);
  t400 = Sin(var1[4]);
  t1222 = Cos(var1[2]);
  t323 = -1.*t167*t258;
  t994 = -1.*t339*t400;
  t1116 = t323 + t994;
  t85 = Sin(var1[2]);
  t1244 = t339*t167;
  t1356 = -1.*t258*t400;
  t1358 = t1244 + t1356;
  t1495 = t167*t258;
  t1497 = t339*t400;
  t1500 = t1495 + t1497;
  t1480 = -1.*t85*t1358;
  t1558 = t1222*t1358;
  t1395 = -1.*t1222*t1358;
  t2097 = t85*t1358;
  t1523 = -1.*t85*t1500;
  t1623 = t1523 + t1558;
  t1475 = t1222*t1116;
  t1484 = t1475 + t1480;
  t1980 = t85*t1116;
  t1991 = t1980 + t1558;
  t1673 = -1.*t1222*t1500;
  t1714 = t1673 + t1480;
  t1219 = -1.*t85*t1116;
  t1469 = t1219 + t1395;
  t2294 = t1222*t1500;
  t2406 = t2294 + t2097;
  t2001 = -1.*t1222*t1116;
  t2562 = -1.*t339*t167;
  t2564 = t258*t400;
  t2611 = t2562 + t2564;
  t2502 = 7.1798*t1623*t1484;
  t2539 = 3.5899*t1991*t1714;
  t2546 = 3.5899*t1469*t2406;
  t2620 = t1222*t2611;
  t2624 = t1219 + t2620;
  t2677 = 7.1798*t1484*t2624;
  t2680 = -1.*t85*t2611;
  t2681 = t2001 + t2680;
  t2734 = 3.5899*t1991*t2681;
  t2735 = t85*t2611;
  t2830 = t1475 + t2735;
  t2834 = 3.5899*t1469*t2830;
  t2845 = t2502 + t2539 + t2546 + t2677 + t2734 + t2834;
  t2271 = t85*t1500;
  t2912 = 7.1798*t1991*t1484;
  t2991 = 3.5899*t2406*t2624;
  t2992 = t2271 + t2620;
  t3172 = 3.5899*t1484*t2992;
  t3295 = t2294 + t2680;
  t3345 = 3.5899*t1991*t3295;
  t3371 = 3.5899*t1623*t2830;
  t3389 = 7.1798*t2624*t2830;
  t3405 = t2912 + t2991 + t3172 + t3345 + t3371 + t3389;
  t2911 = -0.5*var2[2]*t2845;
  t3410 = -0.5*var2[3]*t3405;
  t3423 = -0.5*var2[4]*t3405;
  t3463 = t2911 + t3410 + t3423;
  t3471 = var2[1]*t3463;
  t3679 = 3.5899*t1991*t1623;
  t3687 = 3.5899*t1484*t2406;
  t3760 = 3.5899*t1991*t2624;
  t3774 = 3.5899*t1484*t2830;
  t3778 = t3679 + t3687 + t3760 + t3774;
  t3481 = 3.5899*t1469*t1991;
  t3483 = Power(t1623,2);
  t3486 = 3.5899*t3483;
  t3509 = Power(t1484,2);
  t3538 = 3.5899*t3509;
  t3633 = 3.5899*t1714*t2406;
  t3657 = t3481 + t3486 + t3538 + t3633;
  t3968 = -0.5*var2[1]*t3778;
  t2275 = t2271 + t1395;
  t2123 = t2001 + t2097;
  t4088 = 7.1798*t1469*t1623;
  t4103 = 7.1798*t1484*t1714;
  t4142 = 7.1798*t1469*t2624;
  t4148 = 7.1798*t1484*t2681;
  t4191 = t4088 + t4103 + t4142 + t4148;
  t4342 = 7.1798*t3509;
  t4360 = 7.1798*t1623*t2624;
  t4366 = Power(t2624,2);
  t4403 = 7.1798*t4366;
  t4406 = 7.1798*t1484*t3295;
  t4408 = t4342 + t4360 + t4403 + t4406;
  t4341 = -0.5*var2[2]*t4191;
  t4411 = -0.5*var2[3]*t4408;
  t4438 = -0.5*var2[4]*t4408;
  t4439 = t4341 + t4411 + t4438;
  t4440 = var2[1]*t4439;
  t4547 = t2502 + t2677;
  t4446 = 7.1798*t1469*t1484;
  t4512 = 7.1798*t1623*t1714;
  t4531 = t4446 + t4512;
  t4666 = -0.5*var2[1]*t4547;
  t4781 = -1.*t167;
  t4803 = 1. + t4781;
  t4832 = -0.9063*t4803;
  t4835 = -1.0567*t167;
  t4836 = t4832 + t4835;
  t4772 = 0.4999*t258;
  t4884 = t4836*t258;
  t4966 = -0.15039999999999998*t339*t400;
  t4970 = t4772 + t4884 + t4966;
  t4994 = -1.*t339;
  t5033 = 1. + t4994;
  t5118 = -0.4999*t5033;
  t5129 = t339*t4836;
  t5171 = 0.15039999999999998*t258*t400;
  t5174 = t5118 + t5129 + t5171;
  t4983 = -1.*t4970*t1358;
  t5195 = -1.*t1116*t5174;
  t5212 = t4983 + t5195;
  t5264 = t4970*t1500;
  t5312 = t1358*t5174;
  t5362 = t5264 + t5312;
  t5498 = -0.4999*t258;
  t5503 = -1.*t4836*t258;
  t5507 = 0.15039999999999998*t339*t400;
  t5517 = t5498 + t5503 + t5507;
  t5593 = 0.4999*t339;
  t5600 = t5593 + t5129 + t5171;
  t5492 = 3.5899*t1469*t5212;
  t5495 = t4970*t1358;
  t5592 = t1116*t5174;
  t5624 = 3.5899*t5362*t2681;
  t5660 = -1.*t1116*t4970;
  t5867 = 0.15039999999999998*t167*t258;
  t5890 = t5867 + t5507;
  t5947 = -0.15039999999999998*t339*t167;
  t5951 = t5947 + t5171;
  t5810 = -1.*t5174*t2611;
  t5583 = t5517*t1358;
  t5601 = t1500*t5600;
  t5611 = t5495 + t5583 + t5592 + t5601;
  t5614 = 3.5899*t1469*t5611;
  t5720 = -1.*t1116*t5517;
  t5805 = -1.*t1358*t5600;
  t5812 = t5660 + t5720 + t5805 + t5810;
  t5852 = 3.5899*t1714*t5812;
  t5858 = t5492 + t5614 + t5624 + t5852;
  t6170 = -0.4999*t339;
  t6178 = -1.*t339*t4836;
  t6179 = -0.15039999999999998*t258*t400;
  t6190 = t6170 + t6178 + t6179;
  t6117 = 3.5899*t5212*t2624;
  t5893 = t5890*t1358;
  t5959 = t1500*t5951;
  t6016 = t5495 + t5893 + t5592 + t5959;
  t6123 = 3.5899*t5362*t3295;
  t6272 = -1.*t1500*t5174;
  t6332 = -1.*t4970*t2611;
  t6031 = -1.*t1116*t5890;
  t6038 = -1.*t1358*t5951;
  t6042 = t5660 + t6031 + t6038 + t5810;
  t6428 = t1116*t4970;
  t6710 = 0.15039999999999998*t339*t167;
  t6748 = t6710 + t6179;
  t6540 = t5174*t2611;
  t6026 = 3.5899*t1469*t6016;
  t6056 = 3.5899*t1714*t6042;
  t6068 = t5492 + t6026 + t5624 + t6056;
  t6661 = 3.5899*t5611*t2624;
  t6701 = 3.5899*t6016*t2624;
  t6708 = -1.*t5890*t1358;
  t6760 = -1.*t1116*t6748;
  t6771 = -1.*t1116*t5600;
  t6772 = -1.*t1116*t5951;
  t6819 = -1.*t5517*t2611;
  t6825 = -1.*t5890*t2611;
  t6830 = t6708 + t6760 + t6272 + t6771 + t6772 + t6332 + t6819 + t6825;
  t6831 = 3.5899*t1623*t6830;
  t6833 = 3.5899*t1484*t5812;
  t6852 = 3.5899*t1484*t6042;
  t6856 = t1116*t5517;
  t6862 = t1116*t5890;
  t6875 = t5890*t1500;
  t6895 = t1358*t6748;
  t6900 = t1358*t5600;
  t6944 = t1358*t5951;
  t6970 = t6428 + t6856 + t6862 + t6875 + t6895 + t6900 + t6944 + t6540;
  t6982 = 3.5899*t1484*t6970;
  t7112 = t6117 + t6661 + t6701 + t6123 + t6831 + t6833 + t6852 + t6982;
  t7404 = 3.5899*t1484*t5212;
  t7413 = 3.5899*t5362*t2624;
  t7304 = 3.5899*t1714*t5212;
  t7359 = 3.5899*t1469*t5362;
  t7367 = t7304 + t7359;
  t7407 = 3.5899*t1484*t5611;
  t7414 = 3.5899*t1623*t5812;
  t7425 = t7404 + t7407 + t7413 + t7414;
  t7450 = 3.5899*t1484*t6016;
  t7461 = 3.5899*t1623*t6042;
  t7462 = t7404 + t7450 + t7413 + t7461;
  t7495 = 0.4999*t400;
  t7515 = t4836*t400;
  t7524 = 0.15039999999999998*t167*t400;
  t7532 = t7495 + t7515 + t7524;
  t7622 = 0.4999*t167;
  t7688 = t4836*t167;
  t7696 = Power(t400,2);
  t7703 = -0.15039999999999998*t7696;
  t7716 = t7622 + t7688 + t7703;
  t7836 = 3.5899*t7532*t1469;
  t7837 = 3.5899*t7716*t2681;
  t7849 = t7836 + t7837;
  t7982 = Power(t167,2);
  t7985 = 0.15039999999999998*t7982;
  t8086 = t7622 + t7688 + t7985;
  t7866 = -0.4999*t400;
  t7867 = -1.*t4836*t400;
  t7922 = -0.15039999999999998*t167*t400;
  t7926 = t7866 + t7867 + t7922;
  t8340 = 3.5899*t7532*t2624;
  t8383 = 3.5899*t7716*t3295;
  t7935 = 3.5899*t7926*t1469;
  t8598 = 0. + t7622 + t7688 + t7985;
  t8508 = 3.5899*t7926*t2624;
  t8476 = 3.5899*t8086*t1484;
  t8639 = 3.5899*t8598*t1484;
  t8723 = 3.5899*t7532*t1484;
  t8724 = 3.5899*t7716*t2624;
  t8712 = 3.5899*t7716*t1469;
  t8714 = 3.5899*t7532*t1714;
  t8717 = t8712 + t8714;
  t8726 = t8723 + t8724;
  t8730 = 3.5899*t8086*t1623;
  t8731 = 3.5899*t7926*t1484;
  t8732 = t8730 + t8731 + t8723 + t8724;
  t8751 = 0.26996047999999995*var2[2]*t2681;
  t8752 = 0.26996047999999995*var2[3]*t3295;
  t8753 = 0.26996047999999995*var2[4]*t3295;
  t8756 = t8751 + t8752 + t8753;
  t8757 = var2[1]*t8756;
  t8766 = 0.26996047999999995*var2[1]*t2624;
  p_output1[0]=var2[1]*(-0.5*(10.7697*t1469*t1484 + 10.7697*t1623*t1714 + 3.5899*t1991*t2123 + 3.5899*t2275*t2406)*var2[2] - 0.5*t2845*var2[3] - 0.5*t2845*var2[4]);
  p_output1[1]=t3471;
  p_output1[2]=t3471;
  p_output1[3]=-0.5*t3657*var2[2] - 0.5*t3778*var2[3] - 0.5*t3778*var2[4];
  p_output1[4]=-0.5*t3657*var2[1];
  p_output1[5]=t3968;
  p_output1[6]=t3968;
  p_output1[7]=var2[1]*(-0.5*(7.1798*Power(t1469,2) + 7.1798*Power(t1714,2) + 7.1798*t1484*t2123 + 7.1798*t1623*t2275)*var2[2] - 0.5*t4191*var2[3] - 0.5*t4191*var2[4]);
  p_output1[8]=t4440;
  p_output1[9]=t4440;
  p_output1[10]=-0.5*t4531*var2[2] - 0.5*t4547*var2[3] - 0.5*t4547*var2[4];
  p_output1[11]=-0.5*t4531*var2[1];
  p_output1[12]=t4666;
  p_output1[13]=t4666;
  p_output1[14]=var2[1]*(-0.5*(3.5899*t2275*t5212 + 3.5899*t2123*t5362)*var2[2] - 0.5*t5858*var2[3] - 0.5*t6068*var2[4]);
  p_output1[15]=var2[1]*(-0.5*t5858*var2[2] - 0.5*(7.1798*t2624*t5611 + 7.1798*t1484*t5812 + t6117 + t6123 + 3.5899*t1623*(-1.*t1358*t5517 - 2.*t2611*t5517 - 2.*t1116*t5600 - 1.*t1116*t6190 + t6272 + t6332) + 3.5899*t1484*(2.*t1116*t5517 + t1500*t5517 + 2.*t1358*t5600 + t1358*t6190 + t6428 + t6540))*var2[3] - 0.5*t7112*var2[4]);
  p_output1[16]=var2[1]*(-0.5*t6068*var2[2] - 0.5*t7112*var2[3] - 0.5*(7.1798*t2624*t6016 + 7.1798*t1484*t6042 + t6117 + t6123 + 3.5899*t1623*(-2.*t2611*t5890 - 2.*t1116*t5951 + t6272 + t6332 + t6708 + t6760) + 3.5899*t1484*(2.*t1116*t5890 + 2.*t1358*t5951 + t6428 + t6540 + t6875 + t6895))*var2[4]);
  p_output1[17]=-0.5*t7367*var2[2] - 0.5*t7425*var2[3] - 0.5*t7462*var2[4];
  p_output1[18]=-0.5*t7367*var2[1];
  p_output1[19]=-0.5*t7425*var2[1];
  p_output1[20]=-0.5*t7462*var2[1];
  p_output1[21]=var2[1]*(-0.5*(3.5899*t2275*t7532 + 3.5899*t2123*t7716)*var2[2] - 0.5*t7849*var2[3] - 0.5*(t7836 + t7837 + t7935 + 3.5899*t1714*t8086)*var2[4]);
  p_output1[22]=var2[1]*(-0.5*t7849*var2[2] - 0.5*(t8340 + t8383)*var2[3] - 0.5*(t8340 + t8383 + t8476 + t8508)*var2[4]);
  p_output1[23]=var2[1]*(-0.5*(t7836 + t7837 + t7935 + 3.5899*t1714*t8598)*var2[2] - 0.5*(t8340 + t8383 + t8508 + t8639)*var2[3] - 0.5*(3.5899*t1623*t7926 + 7.1798*t2624*t7926 + 3.5899*t1484*(0. - 0.4999*t167 - 1.*t167*t4836 - 0.15039999999999998*t7982) + t8340 + t8383 + t8476 + t8639)*var2[4]);
  p_output1[24]=-0.5*t8717*var2[2] - 0.5*t8726*var2[3] - 0.5*t8732*var2[4];
  p_output1[25]=-0.5*t8717*var2[1];
  p_output1[26]=-0.5*t8726*var2[1];
  p_output1[27]=-0.5*t8732*var2[1];
  p_output1[28]=var2[1]*(0.26996047999999995*t2123*var2[2] + 0.26996047999999995*t2681*var2[3] + 0.26996047999999995*t2681*var2[4]);
  p_output1[29]=t8757;
  p_output1[30]=t8757;
  p_output1[31]=0.26996047999999995*t1469*var2[2] + 0.26996047999999995*t2624*var2[3] + 0.26996047999999995*t2624*var2[4];
  p_output1[32]=0.26996047999999995*t1469*var2[1];
  p_output1[33]=t8766;
  p_output1[34]=t8766;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 35, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L3_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L3_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

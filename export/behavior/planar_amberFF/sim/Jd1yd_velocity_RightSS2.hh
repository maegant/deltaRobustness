/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:56 GMT-08:00
 */

#ifndef JD1YD_VELOCITY_RIGHTSS2_HH
#define JD1YD_VELOCITY_RIGHTSS2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jd1yd_velocity_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void Jd1yd_velocity_RightSS2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);
    assert_size_matrix(var3, 1, 1);
    assert_size_matrix(var4, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jd1yd_velocity_RightSS2_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JD1YD_VELOCITY_RIGHTSS2_HH

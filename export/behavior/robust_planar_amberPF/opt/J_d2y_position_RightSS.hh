/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:40 GMT-08:00
 */

#ifndef J_D2Y_POSITION_RIGHTSS_HH
#define J_D2Y_POSITION_RIGHTSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS
{

  void J_d2y_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5);

  inline void J_d2y_position_RightSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 7, 1);
    assert_size_matrix(var4, 24, 1);
    assert_size_matrix(var5, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 70, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_d2y_position_RightSS_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_D2Y_POSITION_RIGHTSS_HH

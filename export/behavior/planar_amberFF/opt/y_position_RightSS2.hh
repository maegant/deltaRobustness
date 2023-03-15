/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:20 GMT-08:00
 */

#ifndef Y_POSITION_RIGHTSS2_HH
#define Y_POSITION_RIGHTSS2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS2
{

  void y_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void y_position_RightSS2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 30, 1);
    assert_size_matrix(var3, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    y_position_RightSS2_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // Y_POSITION_RIGHTSS2_HH

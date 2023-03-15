/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:30 GMT-08:00
 */

#ifndef J_CE1_VEC_L7_J3_AMBER3_FEET_HH
#define J_CE1_VEC_L7_J3_AMBER3_FEET_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS1
{

  void J_Ce1_vec_L7_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_Ce1_vec_L7_J3_amber3_feet(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 44, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_Ce1_vec_L7_J3_amber3_feet_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_CE1_VEC_L7_J3_AMBER3_FEET_HH

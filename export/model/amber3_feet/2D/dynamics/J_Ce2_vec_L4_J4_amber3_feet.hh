/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:42 GMT-08:00
 */

#ifndef J_CE2_VEC_L4_J4_AMBER3_FEET_HH
#define J_CE2_VEC_L4_J4_AMBER3_FEET_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS1
{

  void J_Ce2_vec_L4_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_Ce2_vec_L4_J4_amber3_feet(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 54, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_Ce2_vec_L4_J4_amber3_feet_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_CE2_VEC_L4_J4_AMBER3_FEET_HH

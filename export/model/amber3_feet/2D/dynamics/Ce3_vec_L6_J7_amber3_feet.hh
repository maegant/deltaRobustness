/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:38 GMT-08:00
 */

#ifndef CE3_VEC_L6_J7_AMBER3_FEET_HH
#define CE3_VEC_L6_J7_AMBER3_FEET_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Ce3_vec_L6_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2);

  inline void Ce3_vec_L6_J7_amber3_feet(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Ce3_vec_L6_J7_amber3_feet_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // CE3_VEC_L6_J7_AMBER3_FEET_HH

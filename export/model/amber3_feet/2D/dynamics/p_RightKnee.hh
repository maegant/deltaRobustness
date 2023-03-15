/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:55 GMT-08:00
 */

#ifndef P_RIGHTKNEE_HH
#define P_RIGHTKNEE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void p_RightKnee_raw(double *p_output1, const double *var1);

  inline void p_RightKnee(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_RightKnee_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_RIGHTKNEE_HH

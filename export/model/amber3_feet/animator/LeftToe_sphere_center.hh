/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:37 GMT-08:00
 */

#ifndef LEFTTOE_SPHERE_CENTER_HH
#define LEFTTOE_SPHERE_CENTER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void LeftToe_sphere_center_raw(double *p_output1, const double *var1);

  inline void LeftToe_sphere_center(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    LeftToe_sphere_center_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LEFTTOE_SPHERE_CENTER_HH

/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:19 GMT-08:00
 */

#ifndef RIGHTSOLE_SPHERE_CENTER_HH
#define RIGHTSOLE_SPHERE_CENTER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void RightSole_sphere_center_raw(double *p_output1, const double *var1);

  inline void RightSole_sphere_center(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    RightSole_sphere_center_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // RIGHTSOLE_SPHERE_CENTER_HH

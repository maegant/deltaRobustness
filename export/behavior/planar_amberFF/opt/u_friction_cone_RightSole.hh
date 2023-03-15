/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:15 GMT-08:00
 */

#ifndef U_FRICTION_CONE_RIGHTSOLE_HH
#define U_FRICTION_CONE_RIGHTSOLE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS2
{

  void u_friction_cone_RightSole_raw(double *p_output1, const double *var1,const double *var2);

  inline void u_friction_cone_RightSole(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 3, 1);
    assert_size_matrix(var2, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_friction_cone_RightSole_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_FRICTION_CONE_RIGHTSOLE_HH

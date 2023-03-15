/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:44 GMT-08:00
 */

#ifndef Z_LSS_HH
#define Z_LSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void z_lSS_raw(double *p_output1, const double *var1);

  inline void z_lSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    z_lSS_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // Z_LSS_HH

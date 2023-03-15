/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:53 GMT-08:00
 */

#ifndef P_NSF_LSS_HH
#define P_NSF_LSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void p_nsf_lSS_raw(double *p_output1, const double *var1);

  inline void p_nsf_lSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_nsf_lSS_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_NSF_LSS_HH

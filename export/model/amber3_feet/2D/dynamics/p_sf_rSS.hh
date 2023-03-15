/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:49 GMT-08:00
 */

#ifndef P_SF_RSS_HH
#define P_SF_RSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void p_sf_rSS_raw(double *p_output1, const double *var1);

  inline void p_sf_rSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_sf_rSS_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_SF_RSS_HH

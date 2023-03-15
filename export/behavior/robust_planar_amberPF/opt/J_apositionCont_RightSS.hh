/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:17 GMT-08:00
 */

#ifndef J_APOSITIONCONT_RIGHTSS_HH
#define J_APOSITIONCONT_RIGHTSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS
{

  void J_apositionCont_RightSS_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_apositionCont_RightSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 24);
    assert_size_matrix(var2, 1, 24);

	
    // - Outputs
    assert_size_matrix(p_output1, 48, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_apositionCont_RightSS_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_APOSITIONCONT_RIGHTSS_HH

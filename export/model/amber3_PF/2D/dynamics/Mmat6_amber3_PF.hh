/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:24:59 GMT-08:00
 */

#ifndef MMAT6_AMBER3_PF_HH
#define MMAT6_AMBER3_PF_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat6_amber3_PF_raw(double *p_output1, const double *var1);

  inline void Mmat6_amber3_PF(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 7);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat6_amber3_PF_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT6_AMBER3_PF_HH

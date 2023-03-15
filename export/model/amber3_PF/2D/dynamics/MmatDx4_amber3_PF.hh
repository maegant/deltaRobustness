/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:41 GMT-08:00
 */

#ifndef MMATDX4_AMBER3_PF_HH
#define MMATDX4_AMBER3_PF_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void MmatDx4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2);

  inline void MmatDx4_amber3_PF(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    MmatDx4_amber3_PF_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMATDX4_AMBER3_PF_HH

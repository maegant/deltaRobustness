/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:13 GMT-08:00
 */

#ifndef J_DXPLUSCONT_LEFTIMPACTRELABEL_HH
#define J_DXPLUSCONT_LEFTIMPACTRELABEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftImpactRelabel
{

  void J_dxPlusCont_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_dxPlusCont_LeftImpactRelabel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_dxPlusCont_LeftImpactRelabel_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DXPLUSCONT_LEFTIMPACTRELABEL_HH

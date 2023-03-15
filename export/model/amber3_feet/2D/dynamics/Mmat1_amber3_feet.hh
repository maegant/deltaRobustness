/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:12:11 GMT-08:00
 */

#ifndef MMAT1_AMBER3_FEET_HH
#define MMAT1_AMBER3_FEET_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat1_amber3_feet_raw(double *p_output1, const double *var1);

  inline void Mmat1_amber3_feet(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 9);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat1_amber3_feet_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT1_AMBER3_FEET_HH

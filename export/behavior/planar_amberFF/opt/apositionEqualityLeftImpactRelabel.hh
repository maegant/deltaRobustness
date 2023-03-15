/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:44 GMT-08:00
 */

#ifndef APOSITIONEQUALITYLEFTIMPACTRELABEL_HH
#define APOSITIONEQUALITYLEFTIMPACTRELABEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftImpactRelabel
{

  void apositionEqualityLeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2);

  inline void apositionEqualityLeftImpactRelabel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 30, 1);
    assert_size_matrix(var2, 30, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 30, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    apositionEqualityLeftImpactRelabel_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // APOSITIONEQUALITYLEFTIMPACTRELABEL_HH

/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:50 GMT-08:00
 */

#ifndef FRIGHTSOLE_MAP_RIGHTSS1_HH
#define FRIGHTSOLE_MAP_RIGHTSS1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void fRightSole_map_RightSS1_raw(double *p_output1, const double *var1);

  inline void fRightSole_map_RightSS1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fRightSole_map_RightSS1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FRIGHTSOLE_MAP_RIGHTSS1_HH

/*
 * Automatically Generated from Mathematica.
 * Fri 10 Mar 2023 11:35:42 GMT-08:00
 */

#ifndef GLOBAL_ANGULARVEL_HH
#define GLOBAL_ANGULARVEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void global_angularvel_raw(double *p_output1, const double *var1,const double *var2);

  inline void global_angularvel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    global_angularvel_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GLOBAL_ANGULARVEL_HH

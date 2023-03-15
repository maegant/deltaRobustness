/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:00 GMT-08:00
 */

#ifndef JD2YA_POSITION_RIGHTSS2_HH
#define JD2YA_POSITION_RIGHTSS2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jd2ya_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jd2ya_position_RightSS2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jd2ya_position_RightSS2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JD2YA_POSITION_RIGHTSS2_HH

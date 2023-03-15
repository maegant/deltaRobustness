/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:11 GMT-08:00
 */

#ifndef JD2TAU_POSITION_RIGHTSS_HH
#define JD2TAU_POSITION_RIGHTSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jd2tau_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void Jd2tau_position_RightSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);
    assert_size_matrix(var3, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 14);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jd2tau_position_RightSS_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JD2TAU_POSITION_RIGHTSS_HH

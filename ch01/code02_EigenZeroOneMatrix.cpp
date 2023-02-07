#include <iostream>
#include <Eigen/Dense>

auto main() -> int
{
  std::cout << '\n'
            << std::flush;

  Eigen::MatrixXd m1{Eigen::MatrixXd::Zero(1, 8)};
  std::cout << m1 << '\n'
            << std::endl;

  Eigen::MatrixXd m2{Eigen::MatrixXd::Zero(3, 4)};
  std::cout << m2 << '\n'
            << std::endl;

  Eigen::MatrixXd m3{Eigen::MatrixXd::Ones(5, 3)};
  std::cout << m3 << '\n'
            << std::endl;
}
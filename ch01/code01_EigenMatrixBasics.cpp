#include <iostream>
#include <Eigen/Dense>

auto main() -> int
{
  Eigen::MatrixXd A(2, 3);
  A << 1, 4, -3,
      -2, 1, 2;
  std::cout << A << '\n'
            << std::endl;

  Eigen::MatrixXd B(2, 3);
  B << 2, -3, 5,
      -1, 4, 1;
  std::cout << B << '\n'
            << std::endl;

  std::cout << 2 * A - 3 * B << std::endl;
}
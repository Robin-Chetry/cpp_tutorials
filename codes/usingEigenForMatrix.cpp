#include <iostream>
#include <Eigen/Dense>

int main() {
    Eigen::MatrixXd A(2, 2);
    A(0, 0) = 1;
    A(0, 1) = 2;
    A(1, 0) = 3;
    A(1, 1) = 4;

    Eigen::MatrixXd B(2, 2);
    B(0, 0) = 5;
    B(0, 1) = 6;
    B(1, 0) = 7;
    B(1, 1) = 8;

    Eigen::MatrixXd C = A * B;

    std::cout << "Matrix A:\n" << A << std::endl;
    std::cout << "Matrix B:\n" << B << std::endl;
    std::cout << "Matrix A * B:\n" << C << std::endl;

    return 0;
}

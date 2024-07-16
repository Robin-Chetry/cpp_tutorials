#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

Matrix transposeMatrix(const Matrix& A) {
    int rows = A.size();
    int cols = A[0].size();
    Matrix B(cols, std::vector<int>(rows, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            B[j][i] = A[i][j];
        }
    }
    return B;
}

void printMatrix(const Matrix& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Matrix A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Matrix B = transposeMatrix(A);

    std::cout << "Matrix A:\n";
    printMatrix(A);
    std::cout << "Transpose of A:\n";
    printMatrix(B);

    return 0;
}

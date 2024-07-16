#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

Matrix multiplyMatrices(const Matrix& A, const Matrix& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    Matrix C(rowsA, std::vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
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
    Matrix B = {{1, 2, 1}, {2, 1, 2}, {1, 2, 1}};

    Matrix C = multiplyMatrices(A, B);

    std::cout << "Matrix A:\n";
    printMatrix(A);
    std::cout << "Matrix B:\n";
    printMatrix(B);
    std::cout << "Product of A and B:\n";
    printMatrix(C);

    return 0;
}

#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

Matrix addMatrices(const Matrix& A, const Matrix& B) {
    int rows = A.size();
    int cols = A[0].size();
    Matrix C(rows, std::vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
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
    Matrix B = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    Matrix C = addMatrices(A, B);

    std::cout << "Matrix A:\n";
    printMatrix(A);
    std::cout << "Matrix B:\n";
    printMatrix(B);
    std::cout << "Sum of A and B:\n";
    printMatrix(C);

    return 0;
}

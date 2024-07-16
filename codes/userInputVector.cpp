#include <iostream>
#include <vector>

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    std::vector<std::vector<int>> vec(rows, std::vector<int>(cols));

    std::cout << "Enter elements row by row:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> vec[i][j];
        }
    }

    std::cout << "You entered:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << vec[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

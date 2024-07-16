
#include <iostream>
#include <array>

//Passing an Array by Pointer
//You can pass an array to a function using a pointer to the array's first element. You also need to pass the size of the array so that the function knows how many elements it contains.
void printArray1(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


//Passing an Array by Reference
//You can also pass an array by reference, which allows the function to modify the array if needed. You must specify the array size in the function parameter.
template<size_t N>
void printArray2(int (&arr)[N]) {
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


//Using std::array
//C++11 introduced std::array, which is a wrapper around a fixed-size array and provides more functionality. You can pass it by reference or by value.
void printArray3(const std::array<int, 6>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::array<int, 6> ar = {1, 2, 3, 4, 5, 8};

    printArray1(arr, size);
    printArray2(arr);
    printArray3(ar);

    return 0;
}

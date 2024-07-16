#include <iostream>

//Incorrect Memory Access
//If the size of the array is not correctly managed, the function might access out-of-bounds memory, leading to undefined behavior, crashes, or data corruption.
void printArray1(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}



//Limited Type Safety
//Passing arrays as pointers reduces type safety, as any pointer of the correct type can be passed to the function, even if it doesn't actually point to an array of the expected size or type.
void printArray2(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printArray1(arr, 10); // Incorrect size, accessing out-of-bounds memory
    
    double wrongArr[] = {1.1, 2.2, 3.3};
    printArray2((int*)wrongArr, 3); // Incorrect type
}




//Syntax:
    /*std::fill(startIterator, endIterator, value);*/   
//startIterator: The beginning of the range to fill.
//endIterator: The end of the range to fill.
//value: The value to fill the range with.

#include <iostream>
#include <algorithm> // for std::fill

int main() {
    int arr[10]; // Create an array with 10 elements

    // Fill the entire array with the value 7
    std::fill(std::begin(arr), std::end(arr), 7);

    // Print the array
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

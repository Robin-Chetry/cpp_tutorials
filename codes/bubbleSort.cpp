//How Bubble Sort Works
//1-->Start at the beginning of the list.
//2-->Compare the first two elements.
//3-->If the first element is greater than the second element, swap them.
//4-->Move to the next pair of elements and repeat the comparison and swap if needed.
//5-->Continue this process until the end of the list is reached.
//6-->Repeat the entire process for the entire list until no swaps are needed.

#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by the inner loop, then the list is sorted
        if (!swapped)
            break;
    }
}

void printArray(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Unsorted array: ";
    printArray(arr);

    bubbleSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}

//The std::find algorithm from the <algorithm> library can also be used for linear search.
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {2, 4, 6, 8, 10}; // Step 1: Define and initialize a vector with integers.
    int target = 8; // Step 2: Define the target element to search for.

    // Step 3: Use std::find to search for the target in the vector.
    auto it = std::find(vec.begin(), vec.end(), target);

    // Step 4: Check if the target was found.
    if (it != vec.end()) {
        // Step 5: If found, calculate and print the index of the target element.
        std::cout << "Element found at index " << std::distance(vec.begin(), it) << std::endl;
    } else {
        // Step 6: If not found, print that the element was not found.
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}

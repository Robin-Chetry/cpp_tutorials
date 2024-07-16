#include <iostream>
#include <vector>

//with int array
int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int num : arr) {
        std::cout << num << std::endl;
    }



    //with vector
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (int num : vec) {
        std::cout << num << std::endl;
    }


    //with string
     std::string str = "Hello, World!";

    for (char ch : str) {
        std::cout << ch << std::endl;
    }



    //Using Auto Keyword
    //The auto keyword can be used in the range-based for loop to automatically deduce the type of the elements in the container.
   


    std::vector<int> vec1 = {1, 2, 3, 4, 5,6};

    for (auto num : vec1) {
        std::cout << num << std::endl;
    }

    return 0;
}





#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    
    // Generate a random number between 1 and 100
    int random_number = std::rand() % 100 + 1;

    std::cout << "Random number between 1 and 100: " << random_number << std::endl;

    return 0;
}

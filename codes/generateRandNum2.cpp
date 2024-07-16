#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 0 and RAND_MAX
    int random_number = std::rand();

    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}

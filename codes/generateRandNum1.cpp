#include <iostream>
#include <random>

int main() {
    // Create a random device to seed the random number generator
    std::random_device rd;

    // Create a Mersenne Twister random number generator seeded with rd
    std::mt19937 gen(rd());

    // Define a uniform integer distribution [1, 100]
    std::uniform_int_distribution<> distr(1, 100);

    // Generate a random number using the distribution and generator
    int random_number = distr(gen);

    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}

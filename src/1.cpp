#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int randNum = rand() % 100 + 1;
    std::cout << "Random number: " << randNum << std::endl;
    return 0;
}

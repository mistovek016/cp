#include <iostream>

int main() {
    int *pointer = nullptr;
    int x = 69420;

    // pointer = &x;

    if (pointer == nullptr) {
        std::cout << "Not assigned!";

        std::cout << *pointer << '\n'; // some random big number
        std::cout << '\n' << *pointer << '\n'; // 0 --> not some random big number
        // this is UNDEFINED BEHAVIOUR IN C++: we may be noticing this behaviour because of compiler optimisations
        // that cause different values to be printed if a newline is printed
        // when the \n is printed, this may lead to a buffer flush,
        // which can change the time that the data is sent to the console, etc

        std::cout << pointer; // 0x0
        // modern compilers (>C++17) handle this gracefully
    }
    else std::cout << "Assigned! - " << pointer;
}

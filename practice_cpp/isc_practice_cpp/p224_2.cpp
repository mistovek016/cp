#include <iostream>

int main() {
    double r;
    std::cout << "Enter r = 0 to terminate the program :)";
    while (true) {
        std::cout << "\nRadius: ";
        std::cin >> r;
        if (r <= 0) return 0;
        std::cout << "Area: " << (3.1415 * r * r) << " sq. units\n";
        std::cout << "Circumference: " << (2 * 3.1415 * r) << " units\n";
    }
}

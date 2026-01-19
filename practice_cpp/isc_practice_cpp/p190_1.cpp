#include <iostream>

int main () {
    double l, b, h;
    std::cout << "Enter the length, breadth, and height (separated by spaces):\n";
    std::cin >> l >> b >> h;

    std::cout << "\nVolume: " << (l * b * h) << " cube units\n";
    std::cout << "Total Surface Area: " << (2 * (l * b + b * h + l * h)) << " sq. units\n";
    std::cout << "Diagonal: " << std::sqrt(l * l + b * b + h * h) << " units\n";
}

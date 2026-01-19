#include <iostream>
#include <cmath>

int main() {
    int n = 0;
    while (n <= 0) {
        std::cout << "Enter a positive integer: ";
        std:: cin >> n;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (n % 2 != 0) std::cout << "Square: " << std::pow(n, 2) << "\nCube: " << std::pow(n, 3);
    else std::cout << "Sum of square and square root: " << std::pow(n, 2) + std::sqrt(n);
}

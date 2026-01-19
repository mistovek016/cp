#include <iostream>
#include <cmath>
int main() {
    int n = 0, len = 1;
    while(len % 2 != 0 || n <= 0) {
        std::cout << "Number: ";
        std::cin >> n;
        len = (int)std::floor(std::log10(n)) + 1;
    }
    if (n != std::pow((n / (int)std::pow(10, len/2) + n % (int)std::pow(10, len/2)), 2)) {
        std::cout << "Not a ";
    }
    std::cout << "Tech Number";
}

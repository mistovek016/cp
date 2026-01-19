#include <iostream>

int main () {
    double x = -20;
    while (x < -10 || x > 10) {
        std::cout << "x: ";
        std::cin >> x;
    }
    std::cout << (2 * std::pow(x, 2) - 3 * x - 5);
    return 0;
}

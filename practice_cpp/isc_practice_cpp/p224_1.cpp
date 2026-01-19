#include <iostream>

int main() {
    double cel;
    std::cout << "Temp. (in °C): ";
    std::cin >> cel;
    std::cout << "Temp. (in °F): " << (1.8 * cel + 32) << "°F";
    return 0;
}

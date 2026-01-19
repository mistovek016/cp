#include <iostream>

int main () {
    double pop, rate;
    std::cout << "Population (beginning of 2000): ";
    std:: cin >> pop;
    std::cout << "Rate of growth (in %): ";
    std::cin >> rate;
    for (int i = 0; i <= 10; i++) {
        pop *= 1 + rate/100;
        std::cout << "Population at the end of " << 2000 + i << ": " << pop << '\n';
    }
    return 0;
}

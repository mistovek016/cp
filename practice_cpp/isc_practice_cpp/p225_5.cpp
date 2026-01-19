#include <iostream>
#include <cmath>

// int main() {
//     int min, max;
//     std::cout << "Enter the lower and upper limits (separated by a space):\n";
//     std::cin >> min >> max;
//     int perf, i;
//     perf = std::pow(std::ceil(std::sqrt(min)), 2);
//     i = std::pow(std::ceil(std::sqrt(perf + 1)), 2) - perf;
//     while(perf <= max) {
//         std::cout << perf << "\n";
//         perf += i;
//         i += 2;
//     }
//     return 0;
// }

int main() {
    int min, max;
    std::cout << "Enter the lower and upper limits (separated by a space):\n";
    std::cin >> min >> max;
    for (int i = min; i <= max; i++) {
        if (std::sqrt(i) == (int)(std::sqrt(i))) std::cout << i << '\n';
    }
    return 0;
}

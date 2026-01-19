#include <iostream>
#include <cmath>

std::string spaces(int a, int max) {
    std::string space = " ";
    max = std::floor(std::log10(max)) + 1;
    a = std::floor(std::log10(a)) + 1;
    for (int i = 0; i < max - a; i++) space += ' ';
    return space;
}

int main() {
    int len;
    std::cout << "Length: ";
    std::cin >> len;
    int mid = (int)std::ceil(len / 2.0);
    bool rep = len % 2 == 0;
    for (int i = 1; i <= len; i++) {
        int a = mid - std::abs(mid - i);
        for (int j = 1; j <= a; j++) {
            std::cout << a << spaces(a, mid);
        }
        std::cout << '\n';
        if (i == mid && rep) { i--; rep = false; }
    }
}

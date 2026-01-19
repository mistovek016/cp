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
    bool even = len % 2 == 0, rep = even;
    int n = len / 2 + (even ? 0 : 1);
    int max = n * (n + 1) / 2 - 1;
    int a = 0, inc = 1;
    int startnew = max - (even ? 0 : n);
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= n - std::abs(n - i); j++) {
            std::cout << a << spaces(a, max);
            a+=inc;
        }
        std::cout << '\n';
        if (i == n) {
            if (rep) { i--; rep = false; }
            else if (even) continue;
            a = startnew; inc = -1;
        }
    }
    return 0;
}

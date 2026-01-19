#include <iostream>
#include <cmath>

int main() {
    int len = 9, mid = 5;
    for (int i = 1; i <= len; i++) {
        for (int j = std::abs(mid - i) + 1; j >= 1; j--) std::cout << j << ' ';
        std::cout << '\n';
    }
}

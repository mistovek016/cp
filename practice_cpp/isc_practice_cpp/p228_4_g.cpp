#include <iostream>
#include <cmath>

int main() {
    int len = 9, mid = 5;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j >= mid - std::abs(mid - i)) {
                std::cout << j << ' ';
            } else std::cout << "  ";
        }
        std::cout << '\n';
    }
}

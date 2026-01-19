#include <iostream>
#include <cmath>

int main() {
    int len = 7, mid = 4;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            int a = mid - std::abs(mid - i);
            if (j >= a && j <= len - a + 1) std::cout << j << ' ';
            else std::cout << "  ";
        }
        std::cout << '\n';
    }
}

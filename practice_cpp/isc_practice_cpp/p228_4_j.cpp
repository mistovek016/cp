#include <iostream>
#include <cmath>

int main() {
    int len = 9, mid = len / 2 + 1;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            int a = mid - std::abs(mid - i) - 1;
            if (j <= mid - a || j >= mid + a) std::cout << j << ' ';
            else std::cout << "  ";
        }
        std::cout << '\n';
    }
}

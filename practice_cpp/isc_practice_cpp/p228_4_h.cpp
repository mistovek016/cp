#include <iostream>
#include <cmath>

int main() {
    int len = 9, mid = 5;
    for (int i = 1; i <= mid; i++) {
        bool rep = true;
        for (int j = 1; j <= 2 * mid - 1; j++) {
            int a = mid - std::abs(mid - j);
            if (a == mid && rep) {j--; rep = false;}
            if (mid - a >= i - 1) std::cout << a << ' ';
            else std::cout << "  ";
        }
        std::cout << '\n';
    }
}

#include <iostream>
#include <cmath>
int main() {
    int len;
    std::cout << "Length: ";
    std::cin >> len;
    len += (len % 2 == 0 ? 1 : 0);
    int mid = (len + 1) / 2;
    for (int i = 1; i <= len; i++) {
        int a = mid - std::abs(mid - i);
        for (int k = 1; k <= 2 * (mid - a); k++) std::cout << ' ';
        // std::string space((int)std::floor(std::log10(2 * a + 3)) - (int)std::floor(std::log10(2 * a - 1)), ' ');
        // std::cout << space;
        for (int j = 1; j <= 2 * a - 1; j++) std::cout << 2 * a - 1 << " ";
        std::cout << '\n';
    }
}
//                   1
//                3  3  3
//             5  5  5  5  5
//          7  7  7  7  7  7  7
//       9  9  9  9  9  9  9  9  9
//   11 11 11 11 11 11 11 11 11 11 11
//13 13 13 13 13 13 13 13 13 13 13 13 13
//
//
//
//

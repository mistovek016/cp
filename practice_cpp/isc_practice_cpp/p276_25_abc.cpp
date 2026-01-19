#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::cout << "Pattern 1:\n";
    int len = 9, mid = 5;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= std::abs(mid - i); j++) std::cout << ' ';
        for (int j = 1; j <= mid - std::abs(mid - i); j++) std::cout << "* ";
        std::cout << '\n';
    }

    std::cout << "\nPattern 2:\n";
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= 2 * std::abs(mid - i); j++) std::cout << ' ';
        for (int j = 1; j <= mid - std::abs(mid - i); j++) std::cout << "* ";
        std::cout << '\n';
    }

    std::cout << "\nPattern 3:\n";
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            if (std::abs(mid - j) - (mid - std::abs(mid - i) - 1) == 0) std::cout << '*';
            else std::cout << ' ';
        } 
        std::cout << '\n';
    }

}
// ____*        --> 5, 5
// ___*5*       --> 4, 6
// __*456*      --> 3, 7
// _*34567*     --> 2, 8
// *2345678*    --> 1, 9
// _*34567*     --> 2, 8
// __*456*      --> 3, 7
// ___*5*       --> 4, 6
// ____*        --> 5, 5


#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

int main() {
    std::cout << "Pattern 4:\n";
    std::string simple = "S I M P L E";
    int len = simple.size(), mid = simple.size() / 2 + 1;
    for (int i = 1; i <= len; i++) {
        std::cout << simple.substr(0, 2 * (mid - std::abs(mid - i))) << '\n';
    }

    std::cout << "\nPattern 5:\n";
    for (int i = 1; i <= len; i++) {
        std::cout << simple.substr(0, 2 * (std::abs(mid - i) + 1)) << '\n';
    }

    std::cout << "\nPattern 6:\n";
    int n = 64, col = 5, row = col + 1;
    for (int i = 1; i <= col; i++) {
        for (int j = 1; j <= row; j++) {
            if (j <= row - i) std::cout << (char)(n + i) << ' ';
            else std::cout << i << ' ';
        }
        std::cout << '\n';
    }

    std::cout << "\nPattern 7:\n";
    char x = 'a';
    len = 9, mid = len / 2 + 1;
    int decrease = len;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= std::abs(mid - i); j++) std::cout << ' ';
        for (int j = 1; j <= mid - std::abs(mid - i); j++) {
            std::cout << x << ' ';
            x++;
        }
        if (i >= mid) {
            x -= decrease;
            decrease -= 2;
        }
        std::cout << '\n';
    }

    std::cout << "\nPattern 8:\n";
    std::string abc = "abcdcba";
    len = 7, mid = len / 2 + 1;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            int n = mid - std::abs(mid - i);
            if (j > (mid - n + 1) && j < (mid + n - 1)) std::cout << "  ";
            else std::cout << abc[j - 1] << ' ';
        }
        std::cout << '\n';
    }

    std::cout << "\nPattern 9:\n";
    // just have a string "BLUEJEULB" and do the same as pattern 8
    std::string word = "BLUEJ";
    len = 2 * word.size() - 1, mid = len / 2 + 1;
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            int n = mid - std::abs(mid - i);
            if (j > (mid - n + 1) && j < (mid + n - 1)) std::cout << "  ";
            else std::cout << word[(mid - std::abs(mid - j)) - 1] << ' ';
        }
        std::cout << '\n';
    }
}

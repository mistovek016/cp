#include <iostream>
#include <cmath>

int getDigit(const int& n, const int& pos) {
    int digit = n / (int)std::pow(10, pos) * (int)std::pow(10, pos) + n % (int)std::pow(10, pos - 1);
    digit = (n - digit) / (int)std::pow(10, pos - 1);
    return digit;
}

int removeDigit(const int& n, const int& pos) {
    return n / (int)std::pow(10, pos) * (int)std::pow(10, pos - 1) + n % (int)std::pow(10, pos - 1);
}

int main() {
    int max = -1, n = -1, n1 = 0, temp, max_index = 0;
    while (n < 0) {
        std::cout << "Number: ";
        std::cin >> n;
    }
    temp = n;
    
    for (int i = 1, j; i <= std::floor(std::log10(n)) + 1; i++) {
        for (j = 1; j <= std::floor(std::log10(temp)) + 1; j++) {
            if (getDigit(temp, j)> max) {
                max = getDigit(temp, j);
                max_index = j;
            }
        }
        n1 = n1 * 10 + max; 
        max = -1;
        temp = removeDigit(temp, max_index);
    }

    std::cout << n1;
}


// #include <limits>

// int rec(int n) {
//     if (n < 10) return n;
//     int last = n % 10;
//     int recur = rec(n / 10);
//     return (std::max(recur, last) * 10 + std::min(recur, last));
// }

// 13425
// 13 425
// 13 42 5
// 13 24 5

// int main() {
//     int max = -1, n = -1, pos = 0, n1 = 0;
//     while (n < 0) {
//         std::cout << "Number: ";
//         std::cin >> n;
//     }
//     //
//     // // int maxmax = std::numeric_limits<int>::max();
//     // int maxmax = 99999; 
//     // for (int i = 1; i <= std::ceil(std::log10(n)); i++) {
//     //     temp = n;
//     //     while (temp > 0) {
//     //         if (temp % 10 > max && temp % 10 < maxmax) max = temp % 10;
//     //         temp /= 10;
//     //     }
//     //     n1 = n1 * 10 + max; 
//     //     maxmax = max;
//     //     max = -1;
//     // }
//
//     // for (int i = 1; i <= std::ceil(std::log10(n)); i++) {
//     //     pos = getDigit(n, i);
//     // }
//
//     // std::cout << getDigit(123456, 3);
//     // std::cout << rec(1234);
// }

// algorithm for extracting digits fron an int
// n = 123456
// 4 = 3rd pos
// div by 10e3 = 123
// mul 10e3 = 123000
// org. mod 10e(3-1) = 56
// add = 123056
// sub org. = 400
// div 10e(3-1) = 4
//

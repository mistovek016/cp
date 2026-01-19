#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int len = 0;
    while (len <= 0) {
        std::cout << "Length: ";
        std::cin >> len;
    }

    // A
    long long num = 1;
    for (int i = 1; i <= len; i++) {
        std::cout << num << " ";
        num = num * 10 + 1;
    }

    std::cout << '\n';
    // B
    double numd = 0.3;
    for (int i = 1; i <= len; i++) {
        std::cout << std::fixed << std::setprecision(1) << numd << " ";
        numd = numd / 10 + 0.3;
    }

    std::cout << '\n';
    // C
    numd = 0.5;
    for (int i = 1; i <= len; i++) {
        std::cout << std::fixed << std::setprecision(1) << numd << " ";
        numd = numd * 10 + 0.5;
    }

    std::cout << '\n';
    // D
    num = 0;
    for (int i = 1; i <= len; i++) {
        num = num * 10 + (i % 10);
        std::cout << num << " ";
    }

    std::cout << '\n';
    // E
    num = 2;
    for (int i = 1; i <= len; i++) {
        std::cout << num << " ";
        num += 2 * i + 1;
    }

    std::cout << '\n';
    // F
    num = 1;
    for (int i = 1; i <= len; i++) {
        std::cout << num << " ";
        num += 4 * i - 2; 
    }

    std::cout << '\n';
    // G
    for (int i = 1; i <= len; i++) {
        std::cout << (int)std::pow(i, 3) - 1 << " ";
    }

    std::cout << '\n';
    // H
    for (int i = 1; i <= len; i++) {
        std::cout << (int)std::pow(i, 3) + 1 << " ";
    }
    return 0;
}

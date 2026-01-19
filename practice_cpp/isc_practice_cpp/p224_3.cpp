#include <iostream>

// RECURSIVE APPROACH
//
// int fibonacci(int n) {
//     if (n == 1) return 0;
//     if (n <= 3) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
//
// int main() {
//     int len;
//     std::cout << "Length: ";
//     std::cin >> len;
//     for (int i = 1; i <= len; i++) std::cout << fibonacci(i) << " ";
//     return 0;
// }

// ITERATIVE APPROACH
// 
// int main () {
//     int len;
//     std::cout << "Length: ";
//     std::cin >> len;
//     long long a = 0, b = 1, c;
//     std::cout << a << " " << b << " ";
//     for (int i = 1; i <= len - 2; i++) {
//         c = a + b;
//         std::cout << c << " ";
//         a = b; b = c;
//     }
// }

// MEMOIZATION DP APPROACH

long long* memo = nullptr;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n <= 2) return 1;
    if (memo[n] != 0) return memo[n];
    
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int len;
    std::cout << "Length: ";
    std::cin >> len;
    memo = new long long[len]();
    for (int i = 0; i < len; i++) std::cout << fibonacci(i) << " ";
}

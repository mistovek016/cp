#include <iostream>

bool isPrime(const int& n) {
    for (int i = 2; i <= n/2; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    int l, u;
    std::cout << "Lower and upper limits: ";
    std::cin >> l >> u;
    int a = 0, b = 1, c = a + b;
    while(true) {
        if (c >= l && isPrime(c)) std::cout << c << '\n';
        c = a + b;
        a = b;
        b = c;
        if (c > u) break;
    }
}

#include <iostream>

bool isPrime(const int& n) {
    for (int i = 2; i <= n/2; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    int n1, n2;
    std::cout << "Two numbers (separated by a space): ";
    std::cin >> n1 >> n2;

    if (!(isPrime(n1) && isPrime(n2) && (std::abs(n1 - n2) == 2))) std::cout << "Not ";
    std::cout << "Twin Prime!";
}

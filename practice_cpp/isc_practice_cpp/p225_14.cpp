#include <iostream>
bool isPrime(const int& n) {
    for (int i = 2; i <= n / 2; i++) if (n % i == 0) return false;
    return true;
}

bool isPPerfect(const int& n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) if (n % i == 0 && isPrime(i)) sum += i;
    return (n == sum);
}

int main() {
    int n;
    std::cout << "Number: ";
    std::cin >> n;
    std::cout << (isPPerfect(n) ? "" : "Not ") << "Prime Perfect!";
}

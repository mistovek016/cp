#include <iostream>
#include <cmath>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    double a, sum = 0;
    std::cout << "Enter 'n' and 'a': ";
    std::cin >> n >> a;

    // Sum 1
    for (int i = 0; i <= n; i++) sum += std::pow(a, i) / factorial(i);
    std::cout << "Sum 1: " << sum << '\n';

    // Sum 2
    sum = 0;
    for (int i = 1; i <= n; i += 2) sum += std::pow(a, i) / factorial(i) * std::pow(-1, (i - 1)/2);
    std::cout << "Sum 2: " << sum << '\n';

    // Sum 3
    sum = 0;
    for (int i = 1; i <= n; i++) sum += a / factorial(i);
    std::cout << "Sum 3: " << sum << '\n';

    // Sum 4
    sum = 0;
    for (int i = 2; i <= n; i++) sum += a / factorial(i) * std::pow(-1, i);
    std::cout << "Sum 4: " << sum << '\n';

    // Sum 5
    sum = 0;
    for (int i = 1; i <= n; i++) sum += factorial(i) / std::pow(a, i) * std::pow(-1, i - 1);
    std::cout << "Sum 5: " << sum << '\n';
}

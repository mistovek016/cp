#include <iostream>

int main() {
    int n;
    double a, sum;
    std::cout << "Enter 'n' and 'a': ";
    std::cin >> n >> a;

    // Sum 1
    sum = 0;
    for (int i = 1; i <= n; i++) sum += i * (i - 2);
    std::cout << "Sum 1: " << (int)sum << '\n';

    // Sum 2
    sum = 0;
    for (int i = 1; i <= n; i++) sum -= std::pow(-2, i);
    std::cout << "Sum 2: " << (int)sum << '\n';

    // Sum 3
    sum = 0;
    for (int i = 1; i <= n; i++) sum -= std::pow(-i, i);
    std::cout << "Sum 3: " << (int)sum << '\n';

    // Sum 4
    sum = 0;
    for (int i = 1; i <= n; i++) sum += std::pow(a, i - 1);
    std::cout << "Sum 4: " << sum << '\n';

    // Sum 5
    sum = 0;
    for (int i = 1; i <= n; i++) sum += i * (i + 1); 
    std::cout << "Sum 5: " << (int)sum << '\n';
}

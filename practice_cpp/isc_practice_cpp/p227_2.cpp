#include <iostream>
#include <cmath>
int main() {
    int n;
    double a, sum = 0;
    std::cout << "Enter 'n' and 'a': ";
    std::cin >> n >> a;

    // Sum 1
    for (int i = 1; i <= n; i++) sum += 1.0 / (2 * i) * std::pow(-1, i - 1);
    std::cout << "Sum 1: " << sum << '\n';

    // Sum 2
    sum = 0;
    for (int i = 1; i <= n; i++) sum += 1 / std::pow(i + 1, 2) * std::pow(-1, i - 1);
    std::cout << "Sum 2: " << sum << '\n';

    // Sum 3
    sum = 1;
    for (int i = 2; i <= n; i++) sum += a / i;
    std::cout << "Sum 3: " << sum << '\n';

    // Sum 4
    sum = 1;
    for (int i = 2; i <= n; i++) sum += std::pow(a, 2) / i * std::pow(-1, i - 1);
    std::cout << "Sum 4: " << sum << '\n';

    // Sum 5
    sum = 0;
    for (int i = 1; i <= n; i++) {
        int insum = 0, inpro = 1;
        for (int j = 1; j <= i + 1; j++) {
            insum += j;
            inpro *= j;
        } 
        sum += (double)inpro / insum;
    } 
    std::cout << "Sum 5: " << sum << '\n';
}

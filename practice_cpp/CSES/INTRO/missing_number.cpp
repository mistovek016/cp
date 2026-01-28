#include <iostream>
int main() {
    long long n;
    std::cin >> n;
    long long sum = n * (n + 1) / 2, temp;
    while (n-- > 1) { std::cin >> temp; sum -= temp; }
    std::cout << sum;
}

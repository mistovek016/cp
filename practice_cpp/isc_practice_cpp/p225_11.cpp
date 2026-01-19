#include <iostream>

bool perf(const int& num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) { if (num % i == 0) sum += i; }
    return (sum == num);
}

int main() {
    // int num = 0, sum = 0;
    // while (num <= 0) {
    //     std::cout << "Number: ";
    //     std::cin >> num;
    // }
    //
    // for (int i = 1; i <= num / 2; i++) { if (num % i == 0) sum += i; }
    // std::cout << num << " is " << (sum == num ? "" : "not ") << "a perfect number!";

    int n = 0;
    while (n <= 0) {
        std::cout << "Upper limit: ";
        std::cin >> n;
    }
    std::cout << "Perfect Numbers upto " << n << ":\n";
    for (int i = 6; i <= n; i++) if (perf(i)) std::cout << i << '\n';
    return 0;
}

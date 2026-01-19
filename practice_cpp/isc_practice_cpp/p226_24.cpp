#include <iostream>
#include <cmath>

int reverse (int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int n;
    std::cout << "Adam Numbers\nNumber: ";
    std::cin >> n;
    if (!(reverse(n * n) == (int)std::pow(reverse(n), 2))) std::cout << "Not an ";
    std::cout << "Adam Number!";
}

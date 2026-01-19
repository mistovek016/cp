#include <iostream>

int main() {
    int n, min = 10;
    std::cout << "Number: ";
    std::cin >> n;
    do {
        if (n % 10 < min) min = n % 10;
        n /= 10;
    } while (n > 0);
    std::cout << min;
}

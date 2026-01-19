#include <iostream>

int main() {
    int num, sum = 0;
    std::cout << "Number: ";
    std::cin >> num;
    for (int i = 1; i <= num/2; i++) if (num % i == 0) sum += i;
    std::cout << (num < sum ? "" : "Not an ") << "Abundant number";
}

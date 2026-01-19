#include <iostream>

int main () {
    int num, sum, temp;
    std::cout << "Number: ";
    std::cin >> num;
    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    std::cout << (num == std::pow(sum, 3) ? "" : "Not a ") << "Dudency Number";
}

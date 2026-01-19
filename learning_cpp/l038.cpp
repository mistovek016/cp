#include <iostream>

int getDigit(int digit) { return (digit % 10) + (digit / 10); }

int main() {
    std::string cardNo;
    std::cout << "Credit Card Number: ";
    std::cin >> cardNo;

    int sumEven = 0, sumOdd = 0;
    for (int i = cardNo.size() - 1; i >= 0; i--) {
        if ((cardNo.size() - 1 - i) % 2 == 0) sumOdd += cardNo[i] - 48;
        else sumEven += getDigit((cardNo[i] - 48) * 2);
    }

    if ((sumEven + sumOdd) % 10 != 0) std::cout << "Not ";
    std::cout << "Valid!";
}

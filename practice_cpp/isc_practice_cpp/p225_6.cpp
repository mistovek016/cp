#include <iostream>

std::string toBinary(int n) {
    if (n == 0) return "";
    return toBinary(n / 2) + std::to_string(n % 2);
}

int main() {
    int dec;
    std::cout << "Decimal Number: ";
    std::cin >> dec;
    if (dec == 0) {
        std::cout << "Binary: 0";
        return 0;
    }
    std::cout << "Recursive: " << toBinary(dec);
    
    std::string bin = "";
    while (dec > 0) {
        bin.insert(0, std::to_string(dec % 2));
        dec /= 2;
    }
    std::cout << "\nIterative: " << bin;
    return 0;
}

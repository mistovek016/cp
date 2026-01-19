#include <iostream>

int main() {
    std::string num;
    std::cout << "Number: ";
    std::cin >> num;
    std::cout << (num.size() * 10 + num.back() - 48);
    return 0;
}

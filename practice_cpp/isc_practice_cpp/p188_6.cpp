#include <iostream>

int main () {
    char c;
    std::cout << "Character: ";
    std::cin >> c;
    if ((int)c >= 48 && (int)c <= 57) std::cout << "Digit";
    else if ((int)c >= 65 && (int)c <= 90) std::cout << "Uppercase Alphabet";
    else if ((int)c >= 97 && (int)c <= 122) std::cout << "Lowercase Alphabet";
    else std::cout << "Special Character";
    return 0;
}

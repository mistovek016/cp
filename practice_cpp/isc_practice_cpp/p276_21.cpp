#include <iostream>
#include <string>
#include <cctype>

int main () {
    std::string word, num;
    std::cout << "Word: ";
    std::cin >> word;

    for (char c : word) {
        if (!std::isalpha(c)) {
            std::cout << "Word must contain only alphabets!";
            return 0;
        }
        if (std::islower(c)) num.append(std::to_string(c - 96));
        else num.append(std::to_string(c - 64));
    }

    int n = std::stoi(num);
    while (n >= 10) {
        int temp = 0;
        while (n > 0) {
            temp += std::pow(n % 10, 2);
            n /= 10;
        }
        n = temp;
    }
    std::cout << (n == 1 ? "" : "Not a ") << "Happy Word!";
}

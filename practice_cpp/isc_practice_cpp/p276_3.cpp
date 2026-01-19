#include <iostream>

bool isPal(const std::string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (std::tolower(str.at(i)) != std::tolower(str.at(str.size() - 1 - i))) return false;
    }
    return true;
}

int main() {
    std::string sen;
    std::cout << "Sentence: ";
    std::getline(std::cin, sen);
    int current = -1, next = 0, freq = 0;
    while (next != std::string::npos) {
        next = sen.find(" ", current + 1);
        std::string word = sen.substr(current + 1, next - current - 1);
        if (isPal(word)) {
            if (freq == 0) std::cout << "Palindromes:\n";
            std::cout << freq + 1 << ") " << word << '\n';
            freq++;
        }
        current = next;
        if (freq > 3) break;
    }
    std::cout << "Frequency: " << freq;
}

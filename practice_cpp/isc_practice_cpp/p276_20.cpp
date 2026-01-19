#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string vowels = "AEIOU", line, nline;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    for (int i = 0; i < line.size(); i++) {
        char c = std::toupper(line[i]);
        int n = vowels.find(c);
        if (n != -1) c = vowels[n == vowels.size() - 1 ? 0 : n + 1];
        nline.push_back(c);
    }
    std::cout << nline;
}

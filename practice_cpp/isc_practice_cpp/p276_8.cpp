#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);
    line.push_back(' ');

    int space = 0;
    std::cout << "Required words:\n";
    while (space < line.size() - 1) {
        std::string word = line.substr(space, line.find(' ', space) - space);
        if (!std::isalpha(word.front())) word.erase(0, 1);
        if (!std::isalpha(word.back())) word.pop_back();
        if (std::isupper(word.front()) && std::islower(word.back()))
            std::cout << word << '\n';
        space = line.find(' ', space) + 1;
    }
}

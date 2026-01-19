#include <iostream>
#include <string>
#include <cctype>

bool isCons(std::string& str) {
    bool cons = false;
    for (int i = 0; i < str.size() - 1; i++) {
        if (!std::isalpha(str[i])) continue;
        if  (str[i+1] - str[i] == 1) cons = true;
        str[i] = std::toupper(str[i]); 
    }
    str.back() = std::toupper(str.back());
    return cons;
}

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    line.push_back(' ');
    int space = 0;
    while (space < line.size() - 1) {
        std::string word = line.substr(space, line.find(' ', space) - space);
        if (isCons(word)) std::cout << word << '\n';
        space = line.find(' ', space) + 1;
    }
}

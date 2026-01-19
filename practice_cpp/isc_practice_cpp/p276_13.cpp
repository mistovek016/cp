#include <iostream>
#include <string>

std::string piglatin(std::string str) {
    std::string nstr, vowels = "AEIOU";
    int current = 0;
    bool consAdd = true;
    while (current < str.size()) {
        char c = std::toupper(str[current]);
        if (consAdd) {
            if (vowels.find(c) == std::string::npos) {
                nstr.push_back(c);
                str.erase(current, 1);
                current--;
            }
            else { consAdd = false; current--; }
        } else str[current] = std::toupper(str[current]);
        current++;
    }
    return (str.append(nstr).append("AY"));
}

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);
    line.push_back(' ');
    int space = 0;
    while (space < line.size() - 1) {
        std::string word = line.substr(space, line.find(' ', space) - space);
        std::cout << piglatin(word) << ' ';
        space = line.find(' ', space) + 1;
    }
}

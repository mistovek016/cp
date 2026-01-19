#include <iostream>
#include <string>
#include <cctype>

std::string reverse (const std::string& str) {
    std::string nstr = "";
    for (int i = str.size() - 1; i >= 0; i--) nstr += str[i];
    return nstr;
}

int main() {
    std::string line;
    std::cout << "Setence: ";
    std::getline(std::cin, line);
    int space = 0;
    line.push_back(' ');
    while (space < line.size() - 1) {
        std::string word = line.substr(space, line.find(' ', space) - space);
        std::cout << reverse(word) << ' ';
        space = line.find(' ', space) + 1;
    }
}

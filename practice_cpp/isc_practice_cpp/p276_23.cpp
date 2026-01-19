#include <iostream>
#include <string>
#include <cctype>

bool vWrap(std::string& str) {
    for (int i = 0; i < str.size(); i++) str[i] = std::toupper(str[i]);
    if (std::string("AEIOU").find(str.front()) != std::string::npos && std::string("AEIOU").find(str.back()) != std::string::npos)
        return true;
    return false;
}

int main() {
    std::string line, vline;
    std::cout << "Sentnce: ";
    std::getline(std::cin, line);

    int space = 0, vf = 0;
    line.push_back(' ');
    while (space < line.size() - 1) {
        std::string word = line.substr(space, line.find(' ', space) - space);
        if (vWrap(word)) {
            vline.append(word);
            vline.push_back(' ');
            line.erase(space, line.find(' ', space) - space + 1);
            vf++;
        } else {
            line.replace(space, word.size(), word);
            space = line.find(' ', space) + 1;
        }
    }
    std::cout << "No. of words starting and ending with vowels: " << vf << '\n';
    std::cout << vline << line;
}

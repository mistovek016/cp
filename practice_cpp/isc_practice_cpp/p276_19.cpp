#include <iostream>
#include <string>
#include <cctype>

void removePuncs(std::string& str) {
    for(int i = 0; i < str.size(); i++) {
        if (!std::isalpha(str[i])) { str.erase(i, 1); i--; }
    }
}

int main () {
    std::string line, nline;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    // line.insert(0, " ");
    // int space = line.size() - 1; 
    // while (space > 0) {
    //     std::string word = line.substr(line.rfind(' ', space) + 1, space - line.rfind(' ', space));
    //     removePuncs(word);
    //     nline.push_back(' ');
    //     nline.append(word);
    //     space = line.rfind(' ', space) - 1;
    // }
    // nline.push_back('.');
    // std::cout << nline.substr(1, nline.size() - 1);


    line.push_back(' ');
    int space = 0;
    while (space < line.size() - 1) {
        std::string word = line.substr(space, line.find(' ', space) - space);
        removePuncs(word);
        nline = word + " " + nline;
        space = line.find(' ', space) + 1;
    }
    nline.pop_back();
    nline.push_back('.');
    std::cout << nline;
}

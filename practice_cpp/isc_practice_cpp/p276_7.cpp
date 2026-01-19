#include <iostream>
#include <string>
#include <cctype>

std::string lowercase(const std::string& str) {
    std::string nstr = "";
    for (char c : str) nstr.push_back(std::tolower(c));
    return nstr;
}

int main() {
    std::string line, used = "";
    std::cout << "Sentence: ";
    std::getline(std::cin, line);
    for (int i = 1; i < line.size(); i++) {
        if (line[i] == ' ' && line[i-1] == ' ') {
            line.erase(i, 1); i--;
        }
    }
    line.insert(0, " ").push_back(' ');
    
    std::cout << "Repeated Words:\n";
    int space = 0;
    while (space < line.size() - 1) {
        std::string word = line.substr(space + 1, line.find(' ', space + 1) - 1 - space);
        if (!std::isalpha(word.front())) word.erase(0, 1);
        if (!std::isalpha(word.back())) word.pop_back();

        space = line.find(' ', space + 1);
        if (used.find(word) == std::string::npos) {
            used.append(word);
            int freq = 1, nspace = space;
            while(nspace < line.size() - 1) {
                std::string nword = line.substr(nspace + 1, line.find(' ', nspace + 1) - 1 - nspace);
                if (!std::isalpha(nword.front())) nword.erase(0, 1);
                if (!std::isalpha(nword.back())) nword.pop_back();
                if (lowercase(word) == lowercase(nword)) freq++;
                nspace = line.find(' ', nspace + 1);
            }
            if (freq > 1) std::cout << word << '\n';
        }
    }
}

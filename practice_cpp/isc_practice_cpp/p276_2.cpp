#include <iostream>

int main() {
    std::string sen;
    std::cout << "Sentence: ";
    std::getline(std::cin, sen);
    for (char& c : sen) c = std::tolower(c);
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for (char c : sen) {
        switch (c) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            default:;
        }
    }
    std::cout << "Frequencies of Vowels:\n";
    std::cout << "A or a: " << a << '\n';
    std::cout << "E or e: " << e << '\n';
    std::cout << "I or i: " << i << '\n';
    std::cout << "O or o: " << o << '\n';
    std::cout << "U or u: " << u << '\n';
}

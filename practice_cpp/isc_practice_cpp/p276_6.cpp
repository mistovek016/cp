#include <iostream>
#include <string>
// int main() {
    // std::string line, nline;
    // std::cout << "Sentence: ";
    // std::getline(std::cin, line);
    // if (std::string("aeiou").find(std::tolower(line[0])) != std::string::npos) {
    //     line.insert(0, "An");
    // }
    // nline = line;
    // for (int i = 1; i < line.size(); i++) {
    //     char c = line.at(i);
    //     if (std::string("aeiou").find(std::tolower(c)) != std::string::npos) {
    //         if (line.at(i - 1) == ' ') {
    //             if (i > 1 && line.at(i - 2) == '.') line.insert(i, "An ");
    //             else line.insert(i, "an ");
    //         }
    //     }
    // }
    // std::cout << line;
// }

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    std::string vowels = "aeiouAEIOU";
    std::string nline = "";
    
    for (int i = 0; i < line.size(); i++) {
        char c = line[i];
        bool isStartWord = (i == 0) || (line[i - 1] == ' ');
        if (isStartWord && vowels.find(c) != std::string::npos) {
            std::string temp = line.substr(i, 5);
            if (temp.find("is ") == std::string::npos &&
                temp.find("are ") == std::string::npos &&
                temp.find("able ") == std::string::npos &&
                temp.find("am ") == std::string::npos
            ) {
                if (i == 0 || (i > 1 && line[i-2] == '.')) {
                    nline.append("An ");
                } else nline.append("an ");
            }
        }
        nline += c;
    }
    std::cout << nline << std::endl;
    return 0;
}

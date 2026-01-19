#include <iostream>

void printNormal(std::string name, int age) {
    name = "Name has been changed";
    age = 99999;
    std::cout << name << '\n';
    std::cout << age << "\n\n";
}

// void printNormalReference(std::string &name, int &age) {
//     name = "Name has been changed";
//     age = 99999;
//     std::cout << name << '\n';
//     std::cout << age << "\n\n";
// }

void printConst(const std::string name, const int age) {
    // name = "Name has been changed";
    // age = 99999;
    std::cout << name << '\n';
    std::cout << age << "\n\n";
}

int main() {
    std::string name = "Montgomery";
    int age = 25;

    printNormal(name, age);
    // printNormalReference(name, age);
    printConst(name, age);
}

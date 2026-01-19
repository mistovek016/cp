#include <iostream>
void printNum();
int num = 10;

int main() {
    int num = 3;
    std::cout << "main()\n";
    std::cout << "Local: " << num << '\n';
    std::cout << "Global: " << ::num << "\n\n";
    printNum();
}

void printNum () {
    int num = 1;
    std::cout << "printNum()\n";
    std::cout << "Local: " << num << '\n';
    std::cout << "Global: " << ::num << '\n';
}

// local > global
// to use global variable in local context, prefix the :: scope resolution operator

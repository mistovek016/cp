#include <iostream>

void pValue(std::string x, std::string y) {
    std::cout << "Pass by value:\n";
    std::cout << &x << '\n';
    std::cout << &y << "\n\n";
    std::string temp = x;
    x = y;
    y = temp;
}

void pReference(std::string &x, std::string &y) {
    std::cout << "Pass by reference:\n";
    std::cout << &x << '\n';
    std::cout << &y << "\n\n";
    std::string temp = x;
    x = y;
    y = temp;
}

int main() {
    std::string x = "murder";
    std::string y = "redrum";

    std::cout << "main() function:\n";
    std::cout << &x << '\n';
    std::cout << &y << "\n\n";
    
    pValue(x, y);
    // pValue(&x, &y);
    // CANNOT DO ^^^^ - std::string (parameter) is diff. from std::string * (input)
    std::cout << x << '\n';
    std::cout << y << "\n\n";

    pReference(x, y);
    // pReference(&x, &y);
    // CANNOT DO ^^^^ - std::string & (parameter) is diff. from std::string * (input)
    std::cout << x << '\n';
    std::cout << y << "\n\n";
}

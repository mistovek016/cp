#include <iostream>
#include <cmath>

int main() {
    using std::cout, std::cin;
    char op;
    double n1, n2, result;
    cout << "---------- CALCULATOR ----------" << '\n';
    cout << "---------- OPERATIONS ----------\n(double) --> +, -, *, /\n(int) --> %, ^, &, |, ~, <, >\n";
    // cout << "N1: ";
    // cin >> n1;
    // cout << "N2: ";
    // cin >> n2;
    // cout << "OP: ";
    // cin >> op;
    cout << "---------- EXPRESSION ----------\n";
    cin >> n1 >> op >> n2;

    switch (op) {
        case '+': result = n1 + n2; break;
        case '-': result = n1 - n2; break;
        case '*': result = n1 * n2; break;
        case '/': result = n1 / n2; break;
        case '%': result = (int)n1 % (int)n2; break;
        case '^': result = pow(n1, n2); break;
        case '&': result = (int)n1 & (int)n2; break;
        case '|': result = (int)n1 | (int)n2; break;
        case '~': result = (int)n1 ^ (int)n2; break;
        case '<': result = (int)n1 << (int)n2; break;
        case '>': result = (int)n1 >> (int)n2; break;
        default: cout << "Invalid operator!";
    }

    cout << "---------- RESULT ----------\n" << result;
    return 0;
}
#include <iostream>

int main() {
    using std::cout, std::cin;
    double marks;
    cout << "Marks: ";
    cin >> marks;
    cout << "You " << (marks >= 70 ? "pass!" : "fail...") << '\n';

    int num;
    cout << "Number: ";
    cin >> num;
    // cout << (num % 2 == 0 ? "Even" : "Odd");
    // In C++, we have truthy and falsy values ==> 1 is truthy and 0 is falsy
    cout << (num % 2 ? "Odd" : "Even");
    // num % 2 --> 1 (true) or 0 (false)

    bool hungry;
    cout << "Are you hungry?\n";
    cin >> hungry;
    hungry ? cout << "You are hungry" : cout << "You are not hungry";
    return 0;
}
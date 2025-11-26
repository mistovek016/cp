#include <iostream>

int main() {
    using std::cout, std::endl, std::string;
    // Implicit Type Conversion
    int pi = 3.14;
    cout << pi << '\n' << 10/3 << '\n';

    char Dchar = 68, randomchar = 34;
    cout << Dchar << '\n' << randomchar << '\n';

    // Explicit Type Conversion
    double x = (int) 3.14;
    cout << x << '\n';

    // int correct = 9, total = 10;
    // double score = correct / total * 100;

    // cout << "Score: " << score << "%\n"; // 0%

    // -------------------------------------------

    int correct = 9, total = 10;
    double score = correct / (double) total * 100;

    cout << "Score: " << score << "%\n"; // 0%
}
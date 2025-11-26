#include <iostream>

int main() {
    using std::cout;
    using std::endl;
    using std::string;

    // double students = 20.0;
    // cout << students << '\n'; // will NOT display 20.0 ==> will display only 20
    int students = 20;
    students--;
    cout << students << '\n';
    students++;
    cout << students << '\n';
    students *= 2;
    cout << students << '\n';
    students /= 2;
    cout << students << '\n';
    students /= 3;
    cout << students << '\n'; // truncated
    // students %= 2; // cannot use modulo on DOUBLE/FLOATS
    students %= 3;
    cout << students << '\n';

    /*
    parenthesis
    multiplication, division
    addition, subtraction
    */

    students = 2 + 4 - 1 / 2 - 5 * 7;
    /*
    2 + 4 - 1 / 2 - 5 * 7
    2 + 4 - 0 - 35
    -29
    */
    cout << students << '\n';

    return 0;
}

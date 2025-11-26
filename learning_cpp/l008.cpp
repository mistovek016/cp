#include <iostream>
#include <cmath>

int main() {
    using std::cout, std::cin, std::endl, std::string;
    double x = 3, y = 4;
    double max = std::max(x, y), min = std::min (x, y);
    cout << "Max: " << max << "\nMin: " << min << '\n';

    cout << "Powers: " << pow(x, y) << '\n'; // 81
    cout << "Square Root: " << sqrt(y) << '\n'; // 2
    cout << "Cube Root: " << cbrt(x) << '\n'; // 1.4422495703
    cout << "Absolute value: " << abs(-234) <<'\n'; // 234
    cout << "Round: " << round(3.1415) << '\n'; // 3
    cout << "Ceiling: " << ceil (4.1) << " " << ceil(-4.1) << '\n'; // 5 -4
    cout << "Floor: " << floor (4.1) << " " << floor   (-4.1) << '\n'; // 4 -5
    return 0;
}
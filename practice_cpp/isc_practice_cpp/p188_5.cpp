#include <iostream>

int main () {
    double x, fx;
    while (!((x == 0) || (x >= -3 && x <= -1) || (x >= 1 && x <=3))) {
        std::cout << "Real number (belongs to [-3, -1] U {0} U [1, 3]): ";
        std::cin >> x;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (x >= -3 && x <= -1) fx = (x + 2) / (2 * x + 1);
    else if (x == 0) fx = (2 * x - 1) / (x + 1);
    else if (x >= 1 && x <= 3) fx = (2 * x + 1) / (2 * x - 1);

    std::cout << "f(x) = " << fx;
    return 0;
}

#include <iostream>

int main() {
    // double pi = 3.141592;
    const double PI = 3.141592;
    double radius = 12;
    double circumference = 2 * PI * radius;
    std::cout << circumference << " cm\n";

    const int C = 299782458;
    const int WIDTH = 1920, HEIGHT = 1080;
    std::cout << C << '\n' << WIDTH << 'x' << HEIGHT << '\n';
    return 0;
}
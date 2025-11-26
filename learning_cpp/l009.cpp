#include <iostream>
#include <cmath>

int main() {
    using std::cout, std::cin;
    double o, a, h;
    cout << "Opposite: ";
    cin >> o;
    cout << "Adjacent: ";
    cin >> a;
    h = sqrt(pow(o, 2) + pow(a, 2));
    cout << "Hypotenuse: " << h  << " units\n";
    return 0;
}
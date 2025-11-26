#include <iostream>

int main() {
    using std::cout, std::cin;
    double temp;
    cout << "Temperature (°C): ";
    cin >> temp;
    cout << "The temperature is " << (temp >= 0 && temp <= 40 ? "good!" : "extreme!") << '\n';
    cout << "The temperature is " << (temp < 0 || temp > 40 ? "extreme!" : "good!") << '\n';
    cout << "The temperature is " << (!(temp < 0 || temp > 40) ? "good!" : "extreme!") << '\n';
    return 0;    
}
#include <iostream>

int main() {
    std::cout << "Number of days: ";
    int days;
    std::cin >> days;

    std::cout << "Years: " << (days / 365) << "\nMonths: " << ((days % 365) / 30) << "\nDays: " << ((days % 365) % 30);
    std::cout << "\n(1 Year = 365 days, 1 Month = 30 days)";
}

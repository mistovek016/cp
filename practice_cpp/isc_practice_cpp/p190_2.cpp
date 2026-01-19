#include <iostream>

double getBonus(double basic, double rate, double max) {
    if (rate * basic / 100 < max) return rate * basic / 100;
    return max;
}

int main() {
    char grade;
    double basic, bonus;
    std::cout << "Grade: ";
    std::cin >> grade;
    std::cout << "Basic Salary: Rs. ";
    std:: cin >> basic;

    switch(grade) {
        case 'A': bonus = getBonus(basic, 12, 50000); break;
        case 'B': bonus = getBonus(basic, 10, 40000); break;
        case 'C': bonus = getBonus(basic, 8.33, 30000); break;
        default: std::cout << "Invalid Grade!"; return 0;
    }

    std::cout << "Bonus: Rs. " << bonus;
    return 0;
}

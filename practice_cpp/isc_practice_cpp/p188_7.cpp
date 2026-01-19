#include <iostream>
#include <iomanip>

int main () {
    int age = 0;
    double basic, sal;
    while (age < 18 || age > 60) {
        std::cout << "Age: "; std::cin >> age;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Basic Salary: Rs. "; std::cin >> basic;

    if (age <= 40) sal = (100 + 1.1 + 20) / 100 * basic;
    else if (age <= 50) sal = (100 + 1.25 + 30) / 100 * basic;
    else if (age < 60) sal = (100 + 1.5 + 40) / 100 * basic;

    std::cout << "Salary: Rs. " << std::fixed << std::setprecision(2) << sal;
    return 0;
}

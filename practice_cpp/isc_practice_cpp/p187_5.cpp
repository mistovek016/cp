#include <iostream>

int main() {
    double basic, gross, net;
    double hra = 12, pf = 8.33, epf = 1.67, cta = 8, da = 40;

    std::cout << "Basic Salary: Rs. ";
    std:: cin >> basic;

    gross = basic * (1 + da/100 + hra/100 + cta/100);
    net = gross - basic * (pf/100 + epf/100);

    std::cout << "Gross Salary: Rs. " << gross << "\nNet Salary: Rs. " << net;
}

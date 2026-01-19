#include <iostream>

void emi(double amt, int years) {
    double emi;
    std::cout << "[" << years << "]\n";
    std::cout << "Down Payment: Rs. " << (0.1 * amt) << '\n';
    switch(years) {
        case 10: emi = 1450; break;
        case 12: emi = 1325; break;
        case 15: emi = 1250; break;
        case 18: emi = 1175; break;
        case 20: emi = 1100; break;
    }
    emi *= 0.9 * amt / 100000;
    std::cout << "EMI per month: Rs. " << emi << '\n';
    std::cout << "Total Amount: Rs. " << (0.1 * amt + emi * years * 12) << "\n\n";
}

int main() {
    double amt;
    std::cout << "Total Amount: Rs. " ;
    std::cin >> amt;
    int years[] = {10, 12, 15, 18, 20};
    for (int year : years) emi(amt, year);
    return 0;
}

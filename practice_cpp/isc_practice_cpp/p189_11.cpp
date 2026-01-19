#include <iostream>

int main () {
    double amt, insurance, tax;
    std::cout << "Total income: Rs. ";
    std::cin >> amt;
    std::cout << "Total amount in insurance policies: Rs. ";
    std::cin >> insurance;

    if (insurance < 150000) amt -= insurance;
    else amt -= 150000;

    if (amt <= 250000) tax = 0;
    else if (amt <= 500000) tax = 0.1 * (amt - 250000);
    else if (amt <= 1500000) tax = 5000 + 0.1 * (amt - 500000);
    else if (amt <= 3000000) tax = 10000 + 0.2 * (amt - 1500000);
    else if (amt <= 5000000) tax = 20000 + 0.2 * (amt - 3000000);
    else tax = 30000 + 0.2 * (amt - 5000000);

    std::cout << "Income tax: Rs. " << std::fixed << tax;
    return 0;
}

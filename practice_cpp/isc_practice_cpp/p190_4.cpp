#include <iostream>

enum Qualification {PGT, TGT, PRIMARY, INVALID}; 

Qualification getqualEnum(const std::string& qual) {
    if (qual == "PGT") return PGT;
    if (qual == "TGT") return TGT;
    if (qual == "Primary") return PRIMARY;
    return INVALID;
}

int main() {
    std::string qual;
    double basic, sal;
    std::cout << "Qualification: ";
    std::cin >> qual;
    std::cout << "Basic: Rs. ";
    std::cin >> basic;
    Qualification qualEnum = getqualEnum(qual);

    switch(qualEnum) {
        case PGT: sal = basic * (1 + 0.3 + 0.2 + 0.1); break;
        case TGT: sal = basic * (1 + 0.25 + 0.15 + 0.05); break;
        case PRIMARY: sal = basic * (1 + 0.2 + 0.1); break;
        case INVALID:
        default: std::cout << "Invalid Qualification!"; return 0;
    }

    std::cout << "Salary: Rs. " << sal;
    return 0;
}

#include <iostream>

enum Qualification {PRIMARY, PGT, TGT, INVALID};

Qualification getQualEnum(const std::string& input) {
    if (input == "Primary") return PRIMARY;
    if (input == "PGT") return PGT;
    if (input == "TGT") return TGT;
    return INVALID;
}

int main() {
    std::string qual;
    int yos;
    double basic, net, gross;

    std::cout << "Qualification: ";
    std::cin >> qual;

    Qualification qualEnum = getQualEnum(qual);
    if (qualEnum == INVALID) { std::cout << "Invalid Qualification!"; return 0; }

    std::cout << "Basic Salary: Rs. ";
    std::cin >> basic;

    std::cout << "Years of Service: ";
    std::cin >> yos;

    switch(qualEnum) {
        case PRIMARY: basic += 500 * yos; break;
        case TGT: basic += 700 * yos; break;
        case PGT: basic += 900 * yos; break;
        case INVALID:;
    }

    gross = basic * (1 + 0.4 + 0.2 + 0.1);
    net = gross - basic * (0.0833);
    std::cout << "Gross Salary: Rs. " << gross << "\nNet Salary: Rs. " << net; 
    return 0;
}

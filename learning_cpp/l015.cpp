#include <iostream>

int main() {
    using std::cout, std::cin;
    double temp, newTemp;
    char currentUnit, newUnit;
    cout << "Please enter the data in this format:\nCurrent_Temperature Current_Unit Conversion_Unit\n";
    cin >> temp >> currentUnit >> newUnit;
    double cLFP, cUFP, nLFP, nUFP;
    switch (currentUnit) {
        case 'C': cLFP = 0; cUFP = 100; break;
        case 'F': cLFP = 32; cUFP = 212; break;
        case 'K': cLFP = 273; cUFP = 373; break;
        case 'R': cLFP = 0; cUFP = 80; break;
        default: cout << "Invalid units!"; std::exit(0);
    }
    switch (newUnit) {
        case 'C': nLFP = 0; nUFP = 100; break;
        case 'F': nLFP = 32; nUFP = 212; break;
        case 'K': nLFP = 273; nUFP = 373; break;
        case 'R': nLFP = 0; nUFP = 80; break;
        default: cout << "Invalid units!"; std::exit(0);
    }

    newTemp = (nUFP - nLFP) * (temp - cLFP) / (cUFP - cLFP) + nLFP;
    cout << newTemp << (newUnit == 'C' || newUnit == 'F' ? "°" : "") << newUnit;
    return 0;
}
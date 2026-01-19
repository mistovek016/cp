#include <iostream>

enum Element {Phosphorus = 15, Oxygen = 8, Radium = 88, Indium = 49, Gallium = 31, Yttrium = 39};

int main() {
    // Element element = Galliumslkdfj;
    // immediately throws an exception because it is not defined in the enum - doesn't go to the switch
    Element element = "Gallium";
    switch(element) {
        case 15: std::cout << "Phosphorus"; break;
        case 8: std::cout << "Oxygen"; break;
        case 88: std::cout << "Radium"; break;
        case 49: std::cout << "Indium"; break;
        case 31: std::cout << "Gallium"; break;
        case 39: std::cout << "Yttrium"; break;
        default: std::cout << "Wrong element";
    }
}

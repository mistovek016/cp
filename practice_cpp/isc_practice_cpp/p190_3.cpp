#include <iostream>

enum Shape {sphere, cylinder, cone, INVALID};

Shape getEnum(const std::string& shape) {
    if (shape == "sphere") return sphere; 
    if (shape == "cylinder") return cylinder; 
    if (shape == "cone") return cone; 
    return INVALID;
}

int main() {
    std::string choice;
    double volume, pi = 3.141592;
    std::cout << "What do you want to know the volume of? (sphere, cone, cylinder):\n";
    std::cin >> choice;

    Shape shape = getEnum(choice);
    double r, h;

    switch(shape) {
        case sphere:
            std::cout << "Radius: ";
            std::cin >> r;
            volume = 4 / 3.0 * pi * std::pow(r, 3); 
            break;
        case cylinder:
            std::cout << "Radius and Height (separated by a space): ";
            std::cin >> r >> h;
            volume = pi * std::pow(r, 2) * h; 
            break;
        case cone:
            std::cout << "Radius and Height (separated by a space): ";
            std::cin >> r >> h;
            volume = 1 / 3.0 * pi * std::pow(r, 2) * h; 
            break;
        case INVALID:
        default: std::cout << "Invalid Shape!"; return 0;
    }

    std::cout << "Volume: " << volume;

    return 0;
}

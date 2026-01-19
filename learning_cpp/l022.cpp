#include <iostream>

// void groceryList() {
//     std::cout << "Grocery List:\n";
//     std::cout << "Pomogranate\nCorn flakes\nThreptin\nSunflower seeds\nSevenUp\n\n";
// }

// we can declare the method here and define it later
void groceryList();
void groceryList(int qty);
double area(int side);
double volume(int side);
// putting a differnt parameter name in the declaration and the actual definition does not make a difference 
// void groceryList(int quantity);

int main() {
    groceryList();
    groceryList(3);
    double side = 5;
    std::cout << "Side: " << side << " units\nSurface Area: " << area(side) << " units\nVolume: " << volume(side) << " units\n";
    return 0;
}

// declaring the function AFTER the main function will not work
// C++ uses a top-down compiler
// error: use of undeclared identifier 'groceryList'
// will have to declare the function before and can define it later
void groceryList() {
    std::cout << "Grocery List:\n";
    std::cout << "Pomogranate\nCorn flakes\nThreptin\nSunflower seeds\nSevenUp\n\n";
}

void groceryList(int qty) {
    std::cout << "Grocery List:\n";
    std::cout << "Quantity: " << qty << '\n';
    std::cout << "Pomogranate\nCorn flakes\nThreptin\nSunflower seeds\nSevenUp\n\n";
}

double area (int side) { return side * side; }
double volume (int side) { return side * side * side; }

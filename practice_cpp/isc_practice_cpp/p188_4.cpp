#include <iostream>

int main() {
    int year;
    std::cout << "Year: ";
    std::cin >> year;
    std::string verdict;
    
    if (year % 4 == 0) { 
        if (year % 100 == 0) {
            if (year % 400 == 0) verdict = "Leap & Century";
            else verdict = "Century";
        } else verdict = "Leap";
    } else verdict = "Non-leap";

    std::cout << verdict << " Year!";
}

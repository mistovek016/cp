#include <iostream>

int whereIsIt(int element, int arr[], int size);
int whereIsIt(std::string element, std::string arr[], int size);

int main() {
    int arr[10]; 
    for (int i = 0; i < 10; i++) arr[i] = std::pow(2, i);
    std::cout << "Element to search for: ";
    int element;
    std::cin >> element;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (whereIsIt(element, arr, 10) != -1) std::cout << "Index: " << whereIsIt(element, arr, 10);
    else std::cout << element << " not found!";

    std::cout << "\n\n";

    std::string food[] = {"Dosa", "Aloo", "PBM", "Pasta", "Cutlet"};
    std::cout << "Element to search for: ";
    std::string item;
    // std::cin.ignore(); // ignores the newline buffer character left in the input stream by the std::cin >> element; line
    //
    // THE ABOVE LINE WAS ACTUALLY IGNORING THE FIRST CHARACTER OF THE USER INPUT INSTEAD OF THE NEWLINE (NO ISSUE AFTER REMOVING IT)
    std::getline(std::cin, item);
    
    if (whereIsIt(item, food, sizeof(food)/sizeof(food[0])) != -1) std::cout << "Index: " << whereIsIt(item, food, sizeof(food)/sizeof(food[0]));
    else std::cout << item << " not found!";
}

int whereIsIt(int element, int arr[], int size) {
    for (int i = 0; i < size; i++) if (arr[i] == element) return i;
    return -1;
}

int whereIsIt(std::string element, std::string arr[], int size) {
    for (int i = 0; i < size; i++) if (arr[i] == element) return i;
    return -1;
}

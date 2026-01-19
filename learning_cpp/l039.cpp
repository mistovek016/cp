#include <iostream>

int main() {
    // pointers - variables which store the memory address of another variable
    // & - address-of operator
    // * - dereference operator

    std::string name = "Satorou";
    std::string *pName = &name;
    std::cout << "Address: " << pName;
    std::cout << "\nValue: " << *pName;

    int age = 28;
    int *pAge = &age;
    std::cout << "\n\nAddress: " << pAge;
    std::cout << "\nValue: " << *pAge;

    int arr[] = {2, 3, 5, 7, 11};
    
    // int *pArr = &arr;
    // this will give an error ==> "arr" is already an address, so doing "&arr" causes a problem
    std::cout << "\n\nAddress: " << arr;
    
    int *pArr = arr;
    std::cout << "\nAddress: " << pArr;
    std::cout << "\nValue: " << *pArr; // prints the first element
}

#include <iostream>

int main() {
    std::string watches[] = {"Longines", "Tissot", "Rolex", "Patek", "Breitling", "F.P. Journe"};
    // displays the hex memory address of the array
    std::cout << watches;

    std::cout << "\n\n" << watches[0] << "\n" << watches[1] << "\n" << watches[2] << "\n" << watches[3] << "\n" << watches[4] << "\n" << watches[5] << "\n";
    
    int fibonnaci[5];
    fibonnaci[0] = 0; fibonnaci[1] = 1; fibonnaci[2] = 1; fibonnaci[3] = 2; fibonnaci[4] = 3;
    std::cout << '\n' << fibonnaci[0] << "\n" << fibonnaci[1] << "\n" << fibonnaci[2] << "\n" << fibonnaci[3] << "\n" << fibonnaci[4] << "\n";
    
    // SIZEOF
    std::cout << "\nint: " << sizeof(int) << " bytes";
    std::cout << "\ndouble: " << sizeof(double) << " bytes";
    std::cout << "\nbool: " << sizeof(bool) << " bytes";
    std::cout << "\nstring: " << sizeof(std::string) << " bytes";
    std::cout << "\nchar: " << sizeof(char) << " bytes";
    
    std::string hello = "Hello!";
    std::string bigHello = "Hello! How are you? I am doing fine, are you? This is really cool, right?";
    std::cout << "\n\n" << hello << '\n' << sizeof(hello) << " bytes\n";
    std::cout << '\n' << bigHello << '\n' << sizeof(bigHello) << " bytes\n";
    // both variables have the same size because the string doesn't store the actual string;
    // it stores the memory address of the string literal, which is 24 bytes


    // C++ doesn't have an in-built array.length like Java
    // We need the get the number of elements by:
    // sizeof(array) / sizeof(data type)
    // OR
    // sizeof(array) / sizeof(first element)

    std::cout << "\nNo. of elements in watches: " << sizeof(watches) / sizeof(watches[0]) << " elements\n";
    std::cout << "No. of elements in fibonacci: " << sizeof(fibonnaci) / sizeof(int) << " elements\n";
}

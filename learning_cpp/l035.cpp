#include <iostream>

int main() {
    std::string name = "Aryaman";
    int age = 16;
    bool indian = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &indian << '\n';
    
    // memory addresses will change every time the program is run
    // Example Output:
    // 0x16d442da0
    // 0x16d442d9c
    // 0x16d442d9b
    //
    // In decimal:
    // 6128151968
    // 6128151964
    // 6128151963
    //
    // Difference between &indian and &age = 1
    // "bool" takes up only 1 byte
    // Difference between &age and &name = 4
    // "int" take up 4 bytes
}

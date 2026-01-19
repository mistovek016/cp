#include <iostream>

int main() {
    // dynamic memory
    // it allows us to allocate the memory during runtime
    // 
    // HEAP
    // ---- STACK
    // ---------- GLOBAL/STATIC
    // ------------------------ LOCAL
    //
    // useful when we don't know how much memory we might need (user input)

    int *pNum = nullptr;
    pNum = new int;
    *pNum = 69420;

    std::cout << "Address: " << pNum << "\nValue: " << *pNum;

    delete pNum;
    
    char *pTiers = nullptr;
    int size;
    std::cout << "\nNumber of tiers: ";
    std::cin >> size;
    pTiers = new char[size];

    std::cout << '\n';
    for (int i = 0; i < size; i++) {
        std::cout << "Tier #" << i + 1 << ": ";
        std::cin >> pTiers[i];
    }

    std::cout << "\n\n";
    for (int i = 0; i < size; i++) {
        std::cout << pTiers[i] << '\n';
    }

    delete[] pTiers;
}

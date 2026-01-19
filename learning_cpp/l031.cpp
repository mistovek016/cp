#include <iostream>
#include <algorithm>
#include <string>
int main() {
    using std::cout, std::cin;
    // THE BELOW CODE IS NOT STANDARD CPP (WORKS ONLY W/ CLANG++ AND GCC MAYBE)
    // FOR AN ARRAY, THE SIZE MUST BE A CONST KNOWN TO THE COMPILER
    // cout << "Size: ";
    // int len;
    // cin >> len;
    // std::string watches[len];
   
    // I can directly use fill() for strings with including anything because of Argument-Dependent Lookup (ADL)
    // The compiler notices the std::string argument and then checks for the fill() function in the same namespace (std)
    // However, this does not work for int since it is a "built-in" type
    
    const int len = 10;
    std::string watches[len];
    std::fill(watches, watches + len, "Rolex");
    for (std::string watch : watches) cout << watch << '\n';

    cout << '\n';

    int nums[len];
    std::fill(nums, nums + (len/2), 69);
    std::fill(nums + (len/2), nums + len, 420);
    for (int num : nums) cout << num << '\n';
}

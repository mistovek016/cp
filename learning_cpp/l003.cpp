#include <iostream>

namespace first { int x = 1; }
namespace second { int x = 2; }

int main() {
    // using std::cout, std::string, std::endl; // only for C++ 17
    using std::cout;
    using std::string;
    using std::endl;
    
    // int x = 0; WRONG
    // int x = 1;

    // int x = 10;
    // using namespace first; // DOESNT WORK BECAUSE SCOPE ==> LOCAL > CLASS > NAMESPACE > GLOBAL

    using namespace first;
    std::cout << x << '\n'; // 10
    // std::cout << first::x << '\n'; // 1
    std::cout << second::x << '\n'; // 2
    
    x = 12; // LOCAL > NAMESPACE

    std::cout << x << '\n'; // 12 ==> MODIFIES x in the 'first' namespace
    std::cout << first::x << '\n'; // 12

    cout << "Hello!" << endl;
    return 0;
}  
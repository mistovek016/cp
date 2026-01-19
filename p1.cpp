#include <iostream>
#include <cmath>

int main() {
    int tests, num;
    std::cin >> tests;
    for (int i = 0; i < tests; i++) {
        std::cin >> num;
        if (num == 2) std::cout << num << '\n';
        else std::cout << (num % 2) << '\n';
    }
}

//
// 7
// 7,2
//      5,2 and 5,3
//      5,2
//          3,2 and 3,3
//          min(1, 0)
//          0
//      5,3
//          2,2 and 2,3
//          min(0, -1)
//          0
//  min(0, 0)
//  0

// 15
// all 2 NO
// one 3 and six 2 YES
// two 3 and 4 two NO
// three 3 and three 2 YES
// four 3 and one 2 NO
// all 3
//
// 12
// 6 6
// 3 3, 3 3
//
// 17
// 8 9
// 0 1
// N = 2x + 3y
// 10
// 2
// 2
// 3
//
// 2 2 2 2
//
// 15
// 15 - 2 = 13
// 15 - 3 = 12
//
// 13 - 2 = 11
// 13 - 3 = 10
//
// 11 - 2 = 9
// 11 - 3 = 8
//
// 9 - 2 = 7
// 9 - 3 = 6
//
// 7 - 2 = 5
// 7 - 3 = 4
//
// 5- 2 = 3
// 5 - 3 = 2
//
// 3 - 2 = 1
// 3 - 3

#include <iostream>
#include <vector>

int main() {
    int tests;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        int n, f0 = 0, f1 = 0, num;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> num;
            if (num == 0) f0++;
            if (num == 1) f1++;
        }
        if (!(f0 == 0 || (f0 > 1 && f1 == 0))) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
}

// 1 2 3
// 0, 0
// 0, 0
//
// 3 2 1
// 1 3 2
// 3 1 2
// 2 1 3
// 2 3 1
//
// 0 1 0 2 3 4
// 0 1 2 3 1 0
// 0 . | . . . . . 0
//
//
// CASES
// 1) No Zeroes at all
//  - MEX is 0 for both partitions in all cases
// 2) One Zero
//  - When arranged in a non-decreasing order, the partition containing zero
//  will have an MEX >= 1, and the other one will have it =0
// 3) More than 1 zeroes, but no ones
//  - MEX will be one for both partitions
// 4) More than 1 zeroes, and one 1
//  - 001......
//  - 0 | 01..... (1, >1)
//  - 00 | 1.... (1, 0)
//  - 001 | .... (>1, 0)
// 5) In any other case (>1 ones, >1 zeroes)
// AFTER ARRANGING IN A NONDECREASING ORDER
// - if we partition between the zeroes (1, >1)
// - if we partition outside the zeroes (>1, 0)
//
// SUMMARY:
//   Zero   |   One    |   Result  |
//----------------------------------
//    0     |   Any    |     NO    |
//    1     |   Any    |    YES    |
//    >1    |    0     |     NO    |
//    >1    |    1     |    YES    |
//    >1    |   >1     |    YES    |

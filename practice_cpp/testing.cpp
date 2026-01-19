#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <vector>

// int testVector(std::vector<int> vec) {
//     vec[1] = 69696;
//     return vec.size();
// }

int main() {
    // int n;
    // std::cout << "Length: ";
    // std::cin >> n;
    // std::vector<int> vec(n);
    // int mid = n / 2;
    // for (int i = 0; i < n; i++) {
    //     vec[i] = 69;
    // }
    // std::vector<int> leftArr(vec.begin(), vec.begin() + mid);
    // std::vector<int> rightArr(vec.begin() + mid, vec.end());
    // for (int n : leftArr) std::cout << n << " ";
    // std::cout << '\n';
    // for (int n : rightArr) std::cout << n << " ";
    
    // std::cout << true;

    // std::cout << std::tolower(1);
    
    // std::cout << ("hello" > "how") << '\n';
    // std::cout << ("ban" < "Bapple") << '\n';
    // std::cout << std::string("ban").compare(std::string("app")) << '\n';
    // std::cout << std::string("ban").compare(std::string("Ban")) << '\n';
    // std::cout << std::string("hielow").push_back('%'); 

    // std::string test = "Hello!";
    // test.back() = '.';
    // std::cout << test;
    
    // std::vector<int> vec = {1, 2, 3, 4, 5};
    // testVector(vec);
    // std::cout << vec[1];

    // std::vector<int> vec = {1, 2, 3, 4, 5};
    // std::vector<int> newvec(vec.begin(), vec.begin() + 1);
    // for (int i : newvec) std::cout << i;
    
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec[-1] = 10;
    std::cout << vec[-1];
}

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairList_t;
// typedef std::string String_t;
// typedef int num_t;
using text_t = std::string;
using num_t = int;

int main() {
    using std::cout;
    using std::endl;
    // pairList_t pairlist;
    std::string firstname = "Aryaman";
    text_t lastname = "Aisola";
    num_t num = 123;

    cout << firstname << '\n' << lastname << '\n' << num;
    return 0;
}
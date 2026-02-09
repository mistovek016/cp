#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v) {
    for (int i : v) cout << i << ' ';
    cout << '\n';
}
int main() {
    // PAIRS
    // pair<int, string> p, p1;
    // p = {123, "HI"};
    // p1 = make_pair(123, "HI");
    // pair<int, string> p2 = p1;
    // p2.first = 1989;
    // cout << p1.first << '\n';
    // p.first = 1234;
    // p1.second = "HELLO";
    // pair<int, int> pairarray[] = {{1, 1}, {2, 2}, {3, 3}};
    // swap(pairarray[0], pairarray[2]);
    // for (pair<int, int> p : pairarray) cout << p.first << ' ' << p.second << '\n';

    // VECTORS
    vector<int> vec;
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    printVec(vec);
    // vector<int> vec(5)
    // {0, 0, 0, 0, 0}
    // vector<int> vec(5, 1)
    // {1, 1, 1, 1, 1}
    vec.pop_back();
    printVec(vec);

    vector<int> v = vec; // O(N) time complexity
    v[0] = 129;
    printVec(v);
    printVec(vec);

    // when passing vectors to functions, note that its an expensive operation to copy the vector
    // hence we should always pass by reference (const vector<int> &vec) if we don't intend to change it

}

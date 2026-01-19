#include <iostream>

int main() {
    using namespace std;
    int num;

    do {
        cout << "Number: "; 
        cin >> num;
    } while (num < 0);

    cout << num;
    return 0; 
}

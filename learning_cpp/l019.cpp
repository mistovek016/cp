#include <iostream>

int main() {
    using namespace std;

    int rows, cols;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) { cout << "* "; }
        cout << '\n';
    }
}

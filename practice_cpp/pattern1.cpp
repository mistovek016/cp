#include <iostream>

int main() {
    using namespace std;
    int lines;
    cout << "number of lines: ";
    cin >> lines;
    bool evenRepeat = lines % 2 == 0;
    double half = (lines - 1) / 2.0;

    for (int i = 0; i < lines; i++) {
        int mod = half - std::abs(half - i);
        for (int j = 0; j < lines; j++) {
            if (j > half - mod && j < half + mod) cout << "  ";
            else cout << "* ";
        }
        cout << '\n';
    }
    return 0;
}
    //* * * * * * *
    //* * *   * * *
    //* *       * *
    //*           *
    //* *       * *
    //* * *   * * *
    //* * * * * * *

    //0 1 2 3 4 5
    //* * * * * *
    //* *     * *
    //*         *
    //*         *
    //* *     * *
    //* * * * * *

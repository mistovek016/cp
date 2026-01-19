#include <iostream>

int max (int n, int m) { return (m > n ? m : n); }
// double max (double n, double m) { return (m > n ? m : n); }
// char max (char n, char m) { return (m > n ? m : n); }

template <typename T, typename U>
auto maxTemplate(T m, U n) { return (m > n ? m : n); }

// auto - chooses the most appropriate return type automaticallly
// takes two different (or can be same) types - T and U and returns the max in the appropriate type.

int main() {
    std::cout <<  max(1, 2) << '\n';
    std::cout << max(6.9, 6.8) << '\n';
    std::cout << max('a', 'b') << "\n\n";

    std::cout <<  maxTemplate(1, 2) << '\n';
    std::cout << maxTemplate(6.9, 6.8) << '\n';
    std::cout << maxTemplate('a', 'b');
}

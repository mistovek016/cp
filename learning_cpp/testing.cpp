#include <iostream>
#include <cmath>

int main() {
  char userChar = 'O';
  char computerChar = userChar + (9 * (80 - userChar)/(std::abs(userChar - 80)));
  std::cout << computerChar;
}

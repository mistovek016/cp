#include <iostream>

int main() {
  int x;
  x = 13;
  int y = 123;

  int sum = x + y;
  // int days = 34.234;
  int days = 34;
  std::cout << x << '\n' << y << '\n';
  std::cout << sum << '\n';
  std::cout << days << '\n';

  double price = 234.34, gpa = 29.9, temp = 64.32;
  std::cout << price << '\n' << gpa << '\n' << temp;

  // char grade = 'A', initials = 'BC', keyboard = '"df"';
  char grade = 'A', initials = 'C', keyboard = '"';
  std::cout << grade << '\n' << initials << '\n' << keyboard; 

  bool student = false;
  bool isSwitchOn = true;
  bool power = true;
  std::cout << '\n' << student << isSwitchOn << power;

  std::string name = "Aryaman";
  std::string email = "a.a@a.com";
  std::cout << '\n' << name << '\n' << email << '\n';

  std::cout << "Hello " << name << "!\n";
  return 0;
}
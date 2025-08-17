#include "add.h"
#include <iostream>

int main() {
  std::cout << "Enter a number: ";
  int x {};
  std::cin >> x;

  std::cout << "Enter another number: ";
  int y {};

  std::cin >> y;

  std::cout << x << " + " << y << " is " << add(x,y) << "\n";
  std::cout << x << " - " << y << " is " << subtract(x,y) << "\n";
}


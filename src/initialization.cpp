#include <iostream>

int main() {
  // default initialization
  int x = 10;

  // direct-list-initialization
  int y { 100 };

  std::cout << x;
  std::cout << y;
  
  // Narrowing conversions not allowed using list init.
  // The follow produces error
  
//  int z { 3.2 };

  int z {};
  std::cout << z;

  // Unused var test
  int foo {};
  [[maybe_unused]] int bar {};

  return 0;
}


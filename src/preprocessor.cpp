#include <iostream>

#define YES
#define NO

int main() {
#ifdef YES
  std::cout << "YES!\n";
#endif

#ifdef NO
  std::cout << "NO!\n";
#endif

  return 0;
}


#include <iostream>

int readNumber() {
  std::cout << "Enter a number: ";
  int num {};
  std::cin >> num;

  return num;
}

void writeAnswer(int number) {
  std::cout << "The answer is " << number << '\n';
}


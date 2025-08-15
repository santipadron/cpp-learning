#include <iostream>

void multiply_by_two() {
  int input_number {};
  
  std::cout << "Enter an integer: ";
  std::cin >> input_number;

  std::cout << "Double that number is: " << input_number * 2 << "\n";
}

void add_subst() {
  int num1 {}, num2 {};
  std::cout << "Enter an integer: ";
  std::cin >> num1;
  std::cout << "Enter another integer: ";
  std::cin >> num2;

  std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
  std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";
}

int main() {
  multiply_by_two();
  add_subst();
}


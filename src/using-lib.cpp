#include <iostream>

int main() {
  std::cout << "Hello my name is Santi!" << std::endl;
  std::cout << "And I love to play the maracas\n";

  std::cout << "What is your favorite number?: ";
  int answer {};
  std::cin >> answer;

  std::cout << "You entered " << answer << "\n";
  
  std::cout << "What are your favorite numbers (enter two numbers)?: ";
  int num1 {};
  int num2 {};
  std::cin >> num1 >> num2;

  std::cout << "You entered " << num1 << " and " << num2 << "\n";

  return 0;
}


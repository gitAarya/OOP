#include <iostream>
#include <string>

int main() {
  std::string first_string, second_string;

  std::cout << "Enter first string: ";
  std::getline(std::cin, first_string);

  std::cout << "Enter second string: ";
  std::getline(std::cin, second_string);

  // Now you have both strings in `first_string` and `second_string` variables

  std::cout << "You entered: " << first_string << " and " << second_string << std::endl;

  return 0;
}

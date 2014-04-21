#include <cstdio>
#include <iostream>

int main()
{
  double first_value, second_value, result;
  char operatorr;

  // TODO: do checks for input data type
  std::cout << "This is simple calculator.\n" << "Enter 1st value: ";
  std::cin >> first_value;
  std::cout << "Enter 2nd value: ";
  std::cin >> second_value;
  std::cout << "Enter anyone symbol (+, -, *, /) here: ";
  std::cin >> operatorr;
  
  if (operatorr=='+') { 
    result = first_value + second_value;
    std::cout << "Your result is: " << result << std::endl;
  }
  if (operatorr=='-') { 
    result = first_value - second_value;
    std::cout << "Your result is: " << result << std::endl;
  }
  if (operatorr=='*') { 
    result = first_value * second_value;
    std::cout << "Your result is: " << result << std::endl;
  }
  if (operatorr=='/') { 
    result = first_value / second_value;
    std::cout << "Your result is: " << result << std::endl;
  }
}

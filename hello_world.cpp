// 'Hello world' CPP simple example

#include <iostream>

int main()
{
  int choice = 0;
  int loops = 0;
  int backedUpLoops = 0;

  std::cout << "\nType '1' to look at the looping 'hello world' string, "
	    << "\notherwise type 'any symbol' to quit from the program: "
	    << std::endl;
  std::cin >> choice;

  if (choice == 1) {
    std::cout << "\nType the number of how many times do you want "
	      << "\nto see the looping 'hello world' string: "
	      << std::endl;
    std::cin >> loops;
    std::cout << "\n";

    backedUpLoops = loops;

    for (; loops; loops--) {
      std::cout << loops << " : Hello, world! This is SPARTAAA..."
		<< std::endl;
    }

    std::cout << "\nHad been printed: " << backedUpLoops << " loops.";
    std::cout << "\nHave a nice day!" << std::endl;

  } else {
      std::cout << "\nYou have choosen to quit, bye bye then." << std::endl;
  }

    return 0;
}

#include<iostream>

int main()
{
  int choice=0;
  int loops=0;
  int backedupLoops=loops;
  std::cout<<"\nType '1' to look at the looping 'hello world' string,"
           << "\notherwise type 'any symbol' to quit from the program.: ";
  std::cin>>choice;
  if(choice==1) {
    std::cout<<"\nType the number of how many times do you want to see "
             << "\nthe looping 'hello world' string: ";
    std::cin>>loops;
    backedupLoops=loops;
    for(; loops; loops--) {
        std::cout<<loops<<": Hello, world!"<<std::endl;
    }
    std::cout<<"Had been printed: "<<backedupLoops<<" loops."<<std::endl;
    std::cout<<"\nHave a nice day :]"<<std::endl;
  } else {
      std::cout<<"You have choosen to quit, bye bye then."<<std::endl;
  }
  return 0;
}


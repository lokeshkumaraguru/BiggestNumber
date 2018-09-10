//Author:
#include<iostream>

int main()
{
  int wholenumber1;
  int wholenumber2;

  std::cout<<"Please enter a whole number:\n";
  std::cin>>wholenumber1;

  std::cout<<"Please enter another whole number:\n";
  std::cin>>wholenumber2;

  int biggest;

  if(wholenumber1 <  wholenumber2)
  {
    biggest = wholenumber2;
  }
  else
  {
    biggest = wholenumber1;
  }

  if(wholenumber1 == wholenumber2)
  {
    std::cout<<"Both numbers have the same value: ";
    std::cout<<wholenumber1;
  }
  else
  {
    std::cout<<"Of those two numbers, the biggest is: ";
    std::cout<<biggest;
  }

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}

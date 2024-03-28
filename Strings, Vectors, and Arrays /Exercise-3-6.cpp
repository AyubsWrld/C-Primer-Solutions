  //Exercise 3.6: Use a range for to change all the characters in a string to X.

#include <string>
#include <iostream>
int main () 
{
  std::string message ; 
  std::getline(std::cin , message); 
  for(auto &i : message)
  {
    if(!isspace(i))
    {
      i = 'x';
    }
  }
  std::cout << message;
  return 0 ; 
}

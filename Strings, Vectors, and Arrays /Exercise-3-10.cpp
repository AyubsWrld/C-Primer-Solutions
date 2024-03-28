/* Exercise 3.10: Write a program that reads a string of characters including punctuation */
/* and writes what was read but with the punctuation removed. */

#include <string>
#include <iostream>
int main ()     
{
  std::string message;
  std::cout << "Please enter a word: ";
  std::getline(std::cin, message); 
  for(auto &i : message) 
  {
    if(ispunct(i))
    {
      i = ' ' ; 
    }
  }
  std::cout << message;
  return 0 ; 
}

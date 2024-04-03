/* Exercise 3.16: Write a program to print the size and contents of the vectors from */
/* exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy */
/* § 3.3.1 (p. 97) until you understand why you were wrong */

#include <iostream>
#include <vector> 
#include <string>

int main()
{
  std::string line ;
  std::vector<std::string> Names(10," ") ;
  for(int i = 0 ; i < Names.size() ; ++i)
  {
    std::cout << "Please enter a word: ";
    getline(std::cin , line) ; 
    Names[i] = line; 
  }
  for(int i = 0 ; i < Names.size() ; i++)
  {
    std::cout << "String length: " << Names[i].size() << std::endl;
  }
  return 0 ;
}

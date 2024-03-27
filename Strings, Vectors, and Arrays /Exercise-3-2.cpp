/* Exercise 3.2: Write a program to read the standard input a line at a time. Modify your */
/* program to read a word at a time */

#include <string>
#include <iostream>
int main () 
{
  std::string message ; 
  std::cout << "Please enter a message: " << std::endl; 
  getline(std::cin , message);
  std::cout << "Message entered: " << message;
  return 0 ;
}

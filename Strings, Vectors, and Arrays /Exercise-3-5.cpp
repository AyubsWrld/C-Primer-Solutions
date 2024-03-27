/* Exercise 3.5: Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change */
/* the program to separate adjacent input strings by a space */

#include <string>
#include <iostream>
int main () 
{
  std::string line , phrase; 
  std::cout << "Please enter a Phrase: ";
  while(std::getline(std::cin , line))
  {
    if(line == "No") {
      break;
    }
    phrase += " " + line;
    std::cout << "Current Message: " << phrase << std::endl;
    std::cout << "Please enter a Phrase: ";
  }
  return 0 ;
}

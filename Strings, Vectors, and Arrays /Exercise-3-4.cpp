/* Write a program to read two strings and report whether the strings */
/* are equal. If not, report which of the two is larger. Now, change the program to report */
/* whether the strings have the same length, and if not, report which is longer. */

#include <array> 
#include <string>
#include <iostream>
int main () 
{
  std::array<std::string , 2 > strs ;
  std::cout << "Please enter Two strings: " << std::endl;
  for(int i = 0 ; i < 2 ; i ++ ) 
  {
    std::cout << "Enter string [" << i << "]: " ;
    std::cin >> strs[i];
    std::cout << '\n' ; 
  } 
  strs[0] == strs[1] ? std::cout << "Strings are equal" : std::cout << "Strings are inequal";
  return 0 ;
}

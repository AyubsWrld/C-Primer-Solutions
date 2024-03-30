/* Repeat the previous program (3.14) but read strings this time. */

#include <iostream>
#include <vector>

using std::vector;

int main ()
{
  int x = 5; 
  std::string line ; 
  vector<std::string> STRINGS(x); 
  for(int i = 0 ; i < x ; i ++)
  {
    std::cout << "Please enter value for string [" << i + 1  << "]: ";
    std::getline(std::cin , line) ;
    STRINGS[i] = line ;
  }
  std::cout << STRINGS[1] << " " << "String size = " << STRINGS[1].size();
  return 0 ;
}

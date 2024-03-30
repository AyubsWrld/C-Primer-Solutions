/* Write a program to read a sequence of ints from cin and store those */
/* values in a vector. */

#include <iostream>
#include <vector>

using std::vector;

int main ()
{
  int x , y; 
  std::cout << "Please enter the size of the array: ";
  std::cin >> x ; 
  vector<decltype(x)> Values(x) ; 
  for(decltype(x) i = 0 ; i < x ; i ++ )
  {
    std::cout << "Please enter for value [" << i + 1 <<  "]: ";
    std::cin >> y ; 
    Values[i] = y ; 
  }
  return 0 ;
}

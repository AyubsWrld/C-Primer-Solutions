//Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.

#include <iostream> 
#include <array> 

int main ()
{  
  int array[5] = { 1 , 2 , 3 , 4 , 5 } ;// Arbitrary array without zero elements 
  int *beg = std::begin(array);
  int *end = std::end(array);
  while(beg != end)
  {
    std::cout << "From : " << *beg << " ";
    *beg = 0 ; 
    std::cout << "to : "  << *beg << std::endl;
    beg ++ ;

  }
  return 0;
}



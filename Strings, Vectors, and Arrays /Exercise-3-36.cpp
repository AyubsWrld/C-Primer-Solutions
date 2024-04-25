//Write a program to compare two arrays for equality. Write a similar program to compare two vectors.

#include <iostream> 
#include <array> 


int main ()
{ 
  bool cond = 1 ;
  int a1[10] = {}  , a2[10] = {}; 
  int *p1 , *p2 , * e1 , *e2 ;
  p1 = std::begin(a1) ; p2 = std::begin(a2) ; 
  e1 = std::end(a1) ; e2 = std::end(a2) ; 
  while(p1 != e1 && p2 != e2)
  {
    if(*p1 == *p2)
    {
      p1 ++ ; p2 ++ ;
    }
    else 
    {
      cond = 0 ;
      break ; 
    }
  }
  std::cout << cond;
  return 0;
}


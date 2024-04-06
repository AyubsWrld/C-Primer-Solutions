#include <iostream> 
#include <vector> 
#include <algorithm> 


void checkArray(std::vector<int> & arr) 
{
  auto iter = arr.begin() ; 
  for(int i = 0 ; i < arr.size() ; ++i)
  {
    std::cout << *iter << ": " << i << std::endl;
    iter ++ ;
  }
  std::cout << "Array size: " << arr.size() ;
}


int main ()
{
  std::vector<int> s(10,33) ; 
  std::vector<int> r(13,2) ; 
  checkArray(s);
  checkArray(r);
  return 0;
}

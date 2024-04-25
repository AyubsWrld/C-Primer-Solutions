#include <iostream> 
#include <vector> 
#include <array> 

int main ()
{  
  std::vector<int> vec = { 1 , 2 , 3 , 4 } ; 
  int array[vec.size()]  = {};
  std::cout << "Vector : ";
  for(size_t i : vec) 
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::cout << "Array : ";
  for(size_t i : array) 
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::cout << "Vector Pasted into array : ";
  int cnt = 0 ; 
  for(int & i : array)
  {
    i = vec[cnt] ; 
    std::cout << i << " ";
    cnt ++ ; 
  }
  return 0;
}


/*  Rewrite the program in the first exercise, first using a while and again */
/* using a traditional for loop. Which of the three approaches do you prefer and why? */

#include <string>
#include <iostream>
int main () 
{
  int cnt ; 
  std::string word  = "Hello"; 
  while(cnt < word.size())
  {
    word[cnt] = 'x' ; 
    cnt ++ ; 
  }
  std::cout << word;
  return 0 ; 
}

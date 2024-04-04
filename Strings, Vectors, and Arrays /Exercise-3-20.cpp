#include <iostream>
#include <vector>

int main() {
  int x;
  std::vector<int> numbers; // It's better to declare the vector without a fixed size and push back new elements
  std::cout << "Please enter 10 integers" << std::endl;
  
  // Input 10 integers
  for (int i = 0; i < 10; ++i) {
    std::cout << "Please enter number [" << i << "]: ";
    std::cin >> x;
    numbers.push_back(x); // Use push_back to add elements to the vector
  }
  
  // Print sum of adjacent elements
  std::cout << "\nSum of adjacent elements:" << std::endl;
  for (int i = 0; i < numbers.size() - 1; ++i) { // Notice the condition here to prevent out-of-bounds access
    std::cout << numbers[i] + numbers[i + 1] << std::endl;
  }
  
  // Print sum of first and last elements, second and second-to-last, and so on
  std::cout << "\nSum of first and last, second and second-to-last, etc.:" << std::endl;
  for (int i = 0; i < numbers.size() / 2; ++i) {
    std::cout << "Sum of numbers[" << i << "] + numbers[" << numbers.size() - 1 - i << "]: ";
    std::cout << numbers[i] + numbers[numbers.size() - 1 - i] << std::endl;
  }
  
  // If there are an odd number of elements, print the middle element
  if (numbers.size() % 2 != 0) {
    std::cout << "Middle element (alone): " << numbers[numbers.size() / 2] << std::endl;
  }

  return 0;
}

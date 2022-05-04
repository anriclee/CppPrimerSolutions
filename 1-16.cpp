#include <iostream>

int main(){
  int sum = 0;
  int value = 0;
  for (;std::cin >> value; sum += value)
    ; // do nothing
  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}

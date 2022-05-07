#include <iostream>

int main(){
  int i = 0;
  int *p1 = &i;
  if (p1) {
    std::cout << "The pointer is not null" << std::endl;
  }
  if (*p1) {
    std::cout << "The value is 0" << std::endl;
  }
  return 0;
}

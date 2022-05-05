#include<iostream>

int main() {
  unsigned int a = 10;
  unsigned int b = 42;
  std::cout << a - b << std::endl;
  std::cout << b - a << std::endl;

  int c = 10, d = 42;
  std::cout<< c -d << std::endl;
  std::cout<< d -c << std::endl;

  std::cout<< c - a << std::endl;
  std::cout<< a - c << std::endl;


  return 0;
}

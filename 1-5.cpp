#include<iostream>

int main() {
  std::cout<<"Enter two numbers:"<<std::endl;
  int v1 = 0;
  int v2 = 0;
  std::cin>> v1 >> v2;
  std::cout<<"The result of " << v1 << " and " << v2 << std::endl;
  std::cout<< v1 * v2 << std::endl;
  return 0;
}

#include <iostream>

int main(){
  int *ip, i, &r = i;
  std::cout << "ip pointer:" << ip << std::endl;
  std::cout << "i value:" << i <<  std::endl;
  std::cout << "r reference:" << r <<  std::endl;

  int ap, *app = 0;
  std::cout << ap << std::endl;
  std::cout << app << std::endl;

  int *ipp,ipp2;
  std::cout << ipp << std::endl;
  std::cout << ipp2 << std::endl;
  return 0;
}

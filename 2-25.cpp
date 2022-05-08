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


  const int buf = 0;
  int cnt = 0;
  const int sz = cnt;
  ++cnt;

  int i2 = 1;

  int *const p2 = &i2;

  const int *p3 = &i2;

  p3 = &i;

  const int &w = 0;

  const int &z = i;

  return 0;
}

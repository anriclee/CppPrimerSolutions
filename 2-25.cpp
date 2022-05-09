#include <iostream>

int main() {
  int *ip, i, &r = i;
  std::cout << "ip pointer:" << ip << std::endl;
  std::cout << "i value:" << i << std::endl;
  std::cout << "r reference:" << r << std::endl;

  int ap, *app = 0;
  std::cout << ap << std::endl;
  std::cout << app << std::endl;

  int *ipp, ipp2;
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

  int v, *const vp;

  int *p1, *const p5;

  const int ic = 9;

  int demo = 0;

  const int *const pd = &ic;

  p1 = &ic;

  const int *const pdd = &ic;

  p5 = p1;

  int v5 = 0;

  const int &rv5 = v5;

  int &rv6 = v5;

  int &rv6 = demo;

  return 0;
}

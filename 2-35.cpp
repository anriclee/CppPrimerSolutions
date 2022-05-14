#include <iostream>

int main(){
  const int i = 42;
  auto j = i; // j 降级为普通变量
  const auto &k = i; // k 为常量引用, 值不能改变
  auto *p = &i; // p 为指向整型常量 i 的指针
  const auto j2 = i; // j2 为整型常量
  const auto &k2 = i;// k2 为常量 i 的引用


  // test decltype 

  int a = 3, b = 4;

  decltype(a) c = a;// c type is an int, equal to int c = a;
  decltype((b)) d = a; // d type is an reference b,equal to: int d = &b; d = a;

  ++c; // c
  ++d; // d 的值从 3 增加到 4

  std::cout << "value of a:" << a <<  std::endl;
  std::cout << "value of b:" << b <<  std::endl;
  std::cout << "value of c:" << c <<  std::endl;
  std::cout << "value of d:" << d <<  std::endl;

  return 0;
}

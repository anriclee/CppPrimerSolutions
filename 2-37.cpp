#include <iostream>

int main() {

  int a = 3, b = 4;
  decltype(a) c = a; // c 为整型变量，使用 a 的值进行初始化, c:3
  decltype(a = b) d = a; // d 为 a 的引用，使用 a 的值进行初始化，注意这里的 a = b 不会初始化！！！


  std::cout << a << b << c << d <<  std::endl;

  return 0;
}

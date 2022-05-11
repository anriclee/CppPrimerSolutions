#include <iostream>

int main() {

  int i = 0;
  int &r = i;

  auto a = r;

  const int ci = i;
  const int &cr = ci;

  auto b = ci;
  auto c = cr;
  auto d = &i;
  auto e = &ci;
  auto g = &ci;

  a = 42;
  b = 42;
  c = 42;

  std::cout << cr << std::endl;
  std::cout << ci << std::endl;

  int v = 1;
  int &vr = v;

  auto vra = vr;

  vra = 2;


  std::cout << v << std::endl;

  return 0;
}

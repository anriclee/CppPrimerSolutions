#include <iostream>

int i = 42;


int main() {

  int i = 100;

  int j = i;

  int sum = 0;

  std::cout << "the value of j:" << j << std::endl;

  for(int i = 0;i != 10; ++i) 
    sum += i;

  std::cout << i << " " << sum <<  std::endl;

  int ival = 1.01;

  int &rval1 = 1;

  int &rval2 = ival;

  int &rval3;
  
  return 0;
}

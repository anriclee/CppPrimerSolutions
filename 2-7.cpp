#include <iostream>

int main (int argc, char *argv[])
{
  float f = 3f;
  std::cout<< "Who gose with F\145rgus?\012"<<std::endl; // because \145, octal number 145 equals decimal: 101, which is 'e' in ASCII table. 012 is decimal value 10 ,which is LF in ASCII
  return 0;
}

#include <iostream>

int main() {
  int start = 0;
  int end = 0;

  std::cout << "Please enter the range of start and end:" << std::endl;

  std::cin >> start >> end;

  int cur = start;
  while (cur < end) {
    std::cout << cur << std::endl;
    ++cur;
  }

  return 0;
}

#include <iostream>

int main() {
  // sum
  int sum = 0;
  for (int i = 50; i <= 100; i++) {
    sum += i;
  }
  // countdown from sum to 0
  for (; sum >= 0; --sum) {
    std::cout << sum << std::endl;
  }

  // range

  int start = 0;
  int end = 0;
  std::cin >> start >> end;

  for (int i = start; i <= end; i++) {
    std::cout << i << std::endl;
  }

  return 0;
}

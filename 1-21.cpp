#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item1;
  Sales_item item2;
  while (std::cin >> item1 >> item2) {
    if (item1.isbn() == item2.isbn()) {
      std::cout << item1.avg_price() + item2.avg_price() << std::endl;
    }
  }
  return 0;
}

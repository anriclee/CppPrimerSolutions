#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item;
  Sales_item curItem;
  int cnt = 0;
  if (std::cin >> item) {
    curItem = item;
    cnt = 1;
    while (std::cin >> item) {
      // std::cout << "curItem isbn:" << curItem.isbn() << std::endl;
     //  std::cout << "item isbn:" << item.isbn() << std::endl;
      if (curItem.isbn() == item.isbn()) {
        ++cnt;
      } else {
        std::cout << curItem.isbn() << " occurs " << cnt << " times" << std::endl;
        cnt = 1;
      }
      curItem = item;
    }
  }

  return 0;
}

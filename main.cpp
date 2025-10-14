#include <iostream>
#include "Sales_item.h"

int main(){
  Sales_item currItem;
  Sales_item items;

  if (std::cin >> currItem) {
    while (std::cin >> items) {
      if(items.isbn() == currItem.isbn()){
        currItem += items;
      } else if(currItem.isbn() != items.isbn()) {
        std::cout << "Breakdown: " << currItem << std::endl;
        currItem = items;
      }
    }
    std::cout << "Breakdown: " << currItem << std::endl;
  }
  return 0;
}


// accidentally made the final program for the chapter
//
// oops

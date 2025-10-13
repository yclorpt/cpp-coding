// Store keeps a file of transactions. Each records the sale of 1+ copies of a single book
// 3 Data elements:
//   0-201-70353-X : ISBN/Book Identifier
//   4             : # of Copies Sold
//   24.99         : Price
//
// Each book needs:
//   # of Copies Sold
//   Total revenue from book
//   Average sales price
//

#include <iostream>

int main(){
  int sum = 0; int value = 0;

  std::cout << "Enter numbers to add: " << std::endl;

  while (std::cin >> value){
    sum += value;
  }

  std::cout << "Your total is: " << sum << std::endl;
  return 0;
}

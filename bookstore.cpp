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
using namespace std;

int main(){

  cout << "Printing sum of numbers from x -> y\n Enter your start and end: "
       << endl;
  int x = 0, y = 0, sum = 0, i = 1 ;
  cin >> x >> y;

  while (i <= y) {
    sum += x;
    x++;
    i++;
  }
  cout << sum << " is the inclusive total of them added up" << endl;

  return 0;
}

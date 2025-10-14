
#include <iostream>

int main(){
  int cVal = 0, val = 0;

  if (std::cin >> cVal){     // take in current value
    int cnt = 1;             // start count at one since user already inputted a value
    while (std::cin >> val){ // take in new values
      if (val == cVal){
        ++cnt;
  }
      else if (val != cVal){
        std::cout << std::endl << cVal << " occurs "
        << cnt << " times" << std::endl;
        cVal = val;
        cnt = 1;
      }
      else{
        std::cout << std::endl << cVal << " occurs "
        << cnt << " times" << std::endl;
      }
    }
    std::cout << std::endl << cVal << " occurs "
    << cnt << " times" << std::endl;
  }

  return 0;
}

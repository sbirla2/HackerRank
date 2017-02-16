#include <iostream>
using namespace std;

int main() {
    long unsigned int n;
    std::cin >> n;
    while (n--) {
      long unsigned int value;
      std::cin >> value;
      if (value%2==0) {
        std::cout << "1" << '\n';
      }
      else{
        std::cout << "0" << '\n';
      }
    }
    return 0;
}

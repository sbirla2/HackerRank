#include <iostream>
using namespace std;

int main() {
    long long unsigned int n;
    std::cin >> n;
    while (n--) {
      long long unsigned int value;
      std::cin >> value;
      if (value%2==0) {
        std::cout << value+1 << '\n';
      }
      else{
        std::cout << value << '\n';
      }
    }
    return 0;
}

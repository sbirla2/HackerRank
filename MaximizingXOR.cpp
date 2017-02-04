#include <cmath>
#include <cstdio>
#include <bitset>
#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long int maxXor=0;
    int lvalue,rvalue;
    std::cin >> lvalue>>rvalue;
    for (size_t i = lvalue; i <= rvalue; i++) {
      for (size_t j = i; j <= rvalue; j++) {
        unsigned long int xorValue = i xor j;
        if (xorValue > maxXor) {
          maxXor = xorValue;
        }
      }
    }
    std::cout << maxXor << '\n';
    return 0;
}

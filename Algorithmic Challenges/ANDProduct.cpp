#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count;
    std::cin >> count;
    for (size_t i = 0; i < count; i++) {
      long long int val1,val2,alltheand;
      std::cin >> val1>>val2;
      alltheand= val1 & val1+1;
      for (size_t j =val1+2; j < val2; j+=2) {
        alltheand = alltheand & (j & j+1);
      }
      std::cout << alltheand << '\n';
    }
    return 0;
}

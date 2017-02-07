#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int count,sumxorCount=0;
    std::cin >> count;
    for (size_t i = 0; i <= count; i++) {
      if ((i+count)==(i^count)) {
        sumxorCount++;
      }
    }
    std::cout << sumxorCount << '\n';
    return 0;
}

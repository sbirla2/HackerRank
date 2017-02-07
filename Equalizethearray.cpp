#include <cmath>
#include <map>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int count,max=0;
    std::cin >> count;
    std::map<long int, long int>equalMap;
    for (size_t i = 0; i < count; i++) {
      long int value;
      std::cin >> value;
      equalMap[value]++;
      if (equalMap[value] > max) {
        max=equalMap[value];
      }
    }
    std::cout << count-max << '\n';
    return 0;
}

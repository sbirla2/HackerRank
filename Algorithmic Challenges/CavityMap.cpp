#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    std::cin >> n;
    std::vector<string>cavityMap;
    for (size_t i = 0; i < n; i++) {
      string value;
      std::cin >> value;
      cavityMap.push_back(value);
    }
    for (size_t i = 1; i < n-1; i++) {
      for (size_t j = 1; j < cavityMap[i].size()-1; j++) {
          if ((cavityMap[i])[j-1] < (cavityMap[i])[j] && (cavityMap[i])[j+1]  < (cavityMap[i])[j] && (cavityMap[i-1])[j] <  (cavityMap[i])[j] && (cavityMap[i+1])[j] < (cavityMap[i])[j]) {
            (cavityMap[i])[j]='X';
          }
      }
    }
    for (size_t i = 0; i < n; i++) {
      std::cout << cavityMap[i] << '\n';
    }
    return 0;
}

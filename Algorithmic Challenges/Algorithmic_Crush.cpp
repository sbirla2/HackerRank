#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    long int n,m;
    std::cin >> n >>m;
    std::vector<long int>CrushNumbers(n+1);
    CrushNumbers={0};

    for (size_t i = 0; i < m; i++) {
      long int AVal,BVal,KVal;
      std::cin >> AVal>>BVal>>KVal;
      CrushNumbers[AVal]+=KVal;
      if (BVal+1 <= n) {
        CrushNumbers[BVal+1]-=KVal;
      }
    }

    long int MaxValue=0,xValue=0;
    for (size_t i = 0; i < n; i++) {
      xValue+=CrushNumbers[i];
      if (MaxValue < xValue) {
        MaxValue = xValue;
      }
    }
    std::cout << MaxValue << '\n';
    return 0;
}

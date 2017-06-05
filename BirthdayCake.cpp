#include <map>
#include <iostream>

using namespace std;

int main() {
      long int candleNumber,largestCandle=-1;
      std::cin >> candleNumber;
      
      std::map<long int, long int>candleSizeMap;

      while (candleNumber--) {
        long int candleSize;
        std::cin >> candleSize;

        if (candleSize > largestCandle) {
          largestCandle = candleSize;
        }
        candleSizeMap[candleSize]+=1;
      }

      std::cout << candleSizeMap[largestCandle] << '\n';
    return 0;
}

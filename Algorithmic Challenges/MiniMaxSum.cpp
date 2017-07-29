#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<long long int>MinMax;
  for (size_t i = 0; i < 5; i++) {
    long long int value;
    std::cin >> value;
    MinMax.push_back(value);
  }
  sort(MinMax.begin(),MinMax.end());
  long long int Max=0,Min=0;
  for (size_t i = 0; i < 4; i++) {
    Min+=MinMax[i];
  }
  for (size_t i = 4; i >=1; i--) {
      Max+=MinMax[i];
  }
  std::cout << Min<<" "<<Max<< std::endl;
  return 0;
}

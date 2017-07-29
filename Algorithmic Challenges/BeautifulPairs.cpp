#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int count;
    std::cin >> count;
    std::vector<long int >vectorOne;
    std::vector<long int>vectorTwo;
    for (size_t i = 0; i < count; i++) {
      long int value;
      std::cin >> value;
      vectorOne.push_back(value);
    }
    for (size_t i = 0; i < count; i++) {
      long int value;
      std::cin >> value;
      vectorTwo.push_back(value);
    }
    
    return 0;
}

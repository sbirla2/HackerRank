#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(long long unsigned int val){
  for (long long unsigned i = 2; i < val; i++) {
    if (val%i==0) {
      return false;
    }
  }
  return true;
}

int main() {
    long long unsigned int n;
    std::cin >> n;
    while (n--) {
    long long unsigned int value;
    std::cin >> value;
    if (value == 1) {
      std::cout << "NOT PRIME" << '\n';
    }
    else if ( value == 2) {
      std::cout << "PRIME" << '\n';
    }
    else {
    if (isPrime(value)) {
      std::cout << "PRIME" << '\n';
    }
    else{
      std::cout << "NOT PRIME" << '\n';
    }
  }
    }
    return 0;
}

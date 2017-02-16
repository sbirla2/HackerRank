#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <string>

std::vector<int>primeRange;

bool isPrime(int val){
  for (size_t i = 2; i < val; i++) {
    if (val%i==0) {
      return false;
    }
  }
  return true;
}

int returnNearestPrime(int val){
  for (size_t i = 0; i < primeRange.size()-1; i++) {
    if (primeRange[i] >  val ) {
      if (abs(primeRange[i]-val) < abs(primeRange[i-1]-val)) {
        return primeRange[i];
      }
      else if (abs(primeRange[i]-val) == abs(primeRange[i-1]-val)){
        return primeRange[i-1];
      }
      else{
        return primeRange[i-1];
      }
    }
  }
}

int main()
{
  //Generating Prime list of ASCII range 0 - 127
  for (size_t i = 2; i <= 127; i++) {
    if (isPrime(i)) {
      primeRange.push_back(i);
    }
  }
  std::sort(primeRange.begin(),primeRange.end());
  int t;
  std::cin >> t;
  while (t--) {
  int n;
  std::cin >> n;
  std::string magicString;
  std::cin >> magicString;
  for (size_t i = 0; i < n; i++) {
    magicString[i]=(char)returnNearestPrime((int)magicString[i]);
  }
  std::cout << magicString << '\n';
  }
    return 0;
}

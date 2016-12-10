#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int optimaltoyBuy(std::vector<long int>ToyWeights,long int n){
  sort(ToyWeights.begin(),ToyWeights.end());
  long int Purchases=0,j;
  for (size_t i = 0; i < n; i++) {
    j=i+1;
    while (ToyWeights[i]+4 <=ToyWeights[j]) {
      j++;
      i=j;
    }
    Purchases++;
  }
  return Purchases;
}
int main() {
    long int n;
    std::cin >> n;

    std::vector<long int> Toys;
    for (size_t i = 0; i < n; i++) {
      long int toyWeight;
      std::cin >> toyWeight;
      Toys.push_back(toyWeight);
    }
    std::cout << optimaltoyBuy(Toys,n) << std::endl;
    return 0;
}

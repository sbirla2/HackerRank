#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,k,TransmeterCount=0;
    std::cin >> n>>k;

    std::vector<long int>HackerHouses;
    for (size_t i = 0; i < n; i++) {
      long int value;
      std::cin >> value;
      HackerHouses.push_back(value);
    }
    sort(HackerHouses.begin(),HackerHouses.end());

    for (size_t i = k*2+1; i < HackerHouses[n-1]; i+=(k*2+1)) {
      TransmeterCount++;
    }
    std::cout << TransmeterCount+1<< std::endl;
    return 0;
}

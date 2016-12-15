#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1000000000
using namespace std;


int main() {
    long int n,k;
    std::cin >> n;
    std::cin >> k;
    std::vector<long int> MaxMin;
    for (size_t i = 0; i < n; i++) {
      long int value;
      std::cin >> value;
      MaxMin.push_back(value);
    }
    sort(MaxMin.begin(), MaxMin.end());
    long int unfair=MAX;
    for (size_t i = 0; i < n-(k-1); i++) {
       if ((MaxMin[i+(k-1)]-MaxMin[i])<unfair) {
         unfair=MaxMin[i+(k-1)]-MaxMin[i];
       }
    }
    std::cout << unfair << '\n';
    return 0;
}

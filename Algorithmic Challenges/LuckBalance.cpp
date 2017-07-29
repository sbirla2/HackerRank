#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,k,totalLuck=0;
    std::cin >> n>>k;
    std::vector<long int>importantContests;
    for (size_t i = 0; i < n; i++) {
      long int luck,imp;
      std::cin >>luck>>imp;
      if (imp==0) {
        totalLuck+=luck;
      }
      else if (imp==1){
        importantContests.push_back(luck);
      }
    }
    sort(importantContests.begin(),importantContests.end());
    for (size_t i = importantContests.size(); i>=importantContests.size()-k; i--) {
      totalLuck+=importantContests[i];
    }
    for (size_t i = 0; i <importantContests.size()-k; i++) {
      totalLuck-=importantContests[i];
    }
    std::cout << totalLuck << std::endl;
    return 0;
}

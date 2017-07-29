#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int m,n,k;
    std::cin >> m>>n>>k;
    long int totalhappyDays=0;
    for (size_t i = m; i <=n; i++) {
      std::string ithrevstring = std::to_string(i);
      std::reverse(ithrevstring.begin(),ithrevstring.end());
      long int revval=std::stoi(ithrevstring);
      if (labs(i-revval)%k==0) {
        totalhappyDays++;
      }
    }
    std::cout << totalhappyDays << '\n';
    return 0;
}

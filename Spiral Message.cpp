#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int m,n,words=0;
    std::cin >> m>>n;
    while (m--) {
      string encodedString;
      std::cin >> encodedString;
      for (size_t i = 0; i < n; i++) {
        if(encodedString[i]=='#'){words++;}
      }
      }
      std::cout << words << std::endl;
    return 0;
}

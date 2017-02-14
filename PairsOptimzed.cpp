#include<iterator>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int count,kvalue;
    std::cin >> count>>kvalue;

    std::map<long long int,long long int>PairMap;

    for (size_t i = 0; i < count; i++) {
      long long int value;
      std::cin >> value;
      PairMap[value]++;
    }
    long long int kcount=0;

    for (std::map<long long int,long long int>::iterator it=PairMap.begin();it!=PairMap.end();++it) {
      if (PairMap.find((it->first)+kvalue)!=PairMap.end()) {
        kcount++;
      }
    }
    
    std::cout << kcount << '\n';
    return 0;
}

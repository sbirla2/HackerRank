#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    std::cin >> n;

    std::map<int,int>OriginalList;
    for (size_t i = 0; i < n; i++) {
      int value;
      std::cin >>value;
      OriginalList[value]++;
    }
    std::cin >> m;
    std::map<int,int>NewList;
    for (size_t i = 0; i < m; i++) {
      int value;
      std::cin >>value;
      NewList[value]++;
    }
    std::map<int, int>FinalList;

    for (std::map<int,int>::const_iterator it= NewList.begin();it!=NewList.end();++it) {
        std::map<int,int>::const_iterator OgPosition=OriginalList.find(it->first);
        if (OgPosition->second!=it->second) {
          FinalList[it->first]++;
        }
    }
    for (std::map<int,int>::const_iterator it= FinalList.begin();it!=FinalList.end();++it) {
        std::cout << it->first<<" ";
    }
    return 0;
}

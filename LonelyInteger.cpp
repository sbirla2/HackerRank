#include <map>
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count;
    std::cin >> count;
    std::map<int,int>intMap;
    for (size_t i = 0; i < count; i++) {
      long int inputValue;
      std::cin >> inputValue;
      intMap[inputValue]++;
    }
    for (std::map<int,int>::iterator it=intMap.begin();it!=intMap.end();++it) {
      if (it->second < 2 ) {
        std::cout << it->first << '\n';
        break;
      }
    }
    return 0;
}

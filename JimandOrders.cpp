#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n;
    std::cin >> n;
    std::multimap<long int,int>OrderMap;
    for (size_t i = 1; i <= n; i++) {
      long int t,d;
      std::cin >> t>>d;
      //pair the sum of t and d and assign the lookup index number
      OrderMap.insert(make_pair(t+d,i));
    }
    for(std::multimap<long int,int>::const_iterator it =OrderMap.begin();it!=OrderMap.end();++it){
      std::cout <<it->second<< " ";
    }
    return 0;
}

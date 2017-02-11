#include<iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int count,kvalue;
    std::cin >> count>>kvalue;
    std::vector<long long int> Pairs;
    for (size_t i = 0; i < count; i++) {
      long long int value;
      std::cin >> value;
      Pairs.push_back(value);
    }
    std::sort(Pairs.begin(),Pairs.end());
    long int kcount = 0;

     for (std::vector<long long int>::iterator i = Pairs.begin(); i!=Pairs.end(); ++i) {
            for (std::vector<long long int>::iterator j = i; j!=Pairs.end(); ++j) {
              if (*(j)-*(i) == kvalue) {
                kcount++;
              }
            }
     }
     std::cout << kcount << '\n';
    return 0;
}

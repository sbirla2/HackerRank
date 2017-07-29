#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  long int n;
  std::cin >> n;
  std::vector<long int> v;
  for (size_t i = 0; i < n; i++) {
    long int value;
    std::cin >> value;
    v.push_back(value);
  }
  long int mistakes=0;
  if(v[0]!=1){mistakes++;}
  for (size_t i = 1; i < n; i++) {
    if(v[i]!=v[i-1]+1){mistakes++;}
  }
  std::cout << mistakes << std::endl;
    return 0;
}

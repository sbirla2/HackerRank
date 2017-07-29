#include <cstdlib>
#include <bitset>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

long long unsigned int flipandFetch(long long unsigned int number){
  std::string result = std::bitset<32>(number).to_string();
  for (size_t i = 0; i < result.size(); i++) {
    if (result[i]=='0') {
      result[i]='1';
    }
    else if (result[i]=='1') {
      result[i]='0';
    }
  }
  return(std::bitset<32>(result).to_ulong());
}
int main() {
    int count;
    std::cin >> count;
    for (size_t i = 0; i < count; i++) {
      long long unsigned int value;
      std::cin >> value;
      std::cout << flipandFetch(value) << '\n';
    }
    return 0;
}

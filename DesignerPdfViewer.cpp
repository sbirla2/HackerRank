#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      std::map<int, int>wordRefernce;
      for (size_t i = 0; i < 26; i++) {
        int value;
        std::cin >> value;
        wordRefernce[value]++;
      }
      string word;
      std::cin >> word;
      
      return 0;
}

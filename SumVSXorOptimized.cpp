#include <bitset>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

std::string int_to_bin(long unsigned int number)
{
    const std::string result = std::bitset<128>(number).to_string();
    return result.substr(result.find("1", 0));
}

int main() {
    long unsigned int count,zerocount=0;
    std::cin >> count;
    if (count != 0) {
    std::string bitBinary = int_to_bin(count);
    //Count the number of Zeros and raise it to power of two
    for (long unsigned int i = 0; i < bitBinary.size(); i++) {
      if (bitBinary[i]=='0') {
        zerocount++;
      }
    }
  }
    std::cout << lround(pow(2,zerocount))<< '\n';
    return 0;
}

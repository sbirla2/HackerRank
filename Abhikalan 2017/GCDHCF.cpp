#include <iostream>
using namespace std;

long long unsigned int ComputeGCD(long long unsigned int a,long long unsigned int b){
      long long unsigned int temp;
      while (b!=0) {
        a%=b;
        temp=a;
        a=b;
        b=temp;
      }
      return a;
}

int main() {
    long long unsigned t;
    std::cin >> t;
    while (t--) {
      long long unsigned int value1,value2;
      std::cin >> value1>>value2;
      std::cout << ComputeGCD(value1,value2) << '\n';
    }
    return 0;
}

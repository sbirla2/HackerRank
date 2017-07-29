#include <cmath>
#include <bitset>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
  unsigned long long n;
  cin >> n;
  cout << (_popcnt64(n-1) & 1 ? "Louise" : "Richard") << endl; //Using Popcount System Method
}
    return 0;
}

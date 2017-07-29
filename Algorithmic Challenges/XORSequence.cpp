#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  //Generate Series of XOR Sequence
  long long unsigned int XorSequenceGen[1000000];
  XorSequenceGen[0]=0;
  for (long long unsigned int i = 1; i < 1000000; i++) {
        XorSequenceGen[i]=(XorSequenceGen[i-1]) ^ i;
  }

  long unsigned int q;
  std::cin >> q;
  while (q--) {
  long long unsigned int m,n;
  std::cin >> m>>n;
  long long unsigned int XorSequenceSum = 0;
  for (long long unsigned i=m; i <= n; i++) {
    XorSequenceSum = XorSequenceSum ^ XorSequenceGen[i];
  }
  std::cout << XorSequenceSum << '\n';
  }
  return 0;
}

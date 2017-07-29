  #include <cmath>
  #include <cstdio>
  #include <vector>
  #include <iostream>
  #include <algorithm>
  using namespace std;


  int main() {
      long int n,amount;
      std::cin >> n>>amount;
      std::vector<long int> ToyPrice;
      for (size_t i = 0; i < n; i++) {
        long int price;
        std::cin >> price;
        ToyPrice.push_back(price);
      }
      sort(ToyPrice.begin(),ToyPrice.end());
      long int toynumber=0;
      for (size_t i = 0; amount - ToyPrice[i] >= 0; i++) {
        amount-=ToyPrice[i];
        toynumber++;
      }
      std::cout << toynumber<< std::endl;
      return 0;
  }

#include <vector>
#include <iostream>
#include <algorithm>

int main() {
  long int totaltoys;
  std::cin >> totaltoys;
  std::vector<long int>toys;
  for (size_t i = 0; i < totaltoys; i++) {
    long int toy;
    std::cin >> toy;
    toys.push_back(toy);
  }
  sort(toys.begin(),toys.end()); // Sorting inscreases the speed of the alogrithm in this contest

  long int toyPurchase=0;
    size_t i=0;
    while (i < totaltoys) {
    size_t j = i+1; //Optimal toy choice pivot
    while (toys[j] >= toys[i] && toys[j] <= toys[i]+4) {
      j++;
    }
    toyPurchase++;
    i=j;
  }
  std::cout << toyPurchase << '\n';
    return 0;
}

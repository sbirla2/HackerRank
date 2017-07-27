#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

template<typename T>
void pop_front(std::vector<T>& vec)
{
    assert(!vec.empty());
    vec.erase(vec.begin());
}

int main() {

  long int number_of_games;
  std::cin >> number_of_games;

  for (size_t i = 0; i < number_of_games; i++) {

    long int n,m,max_sum;
    std::cin >> n>>m>>max_sum;

    std::vector<long int>stackOne;
    std::vector<long int>stackTwo;

    for (size_t j = 0; j < n; j++) {
      long int element;
      std::cin >> element;
      stackOne.push_back(element);
    }

    for (size_t j = 0; j < m; j++) {
      long int element;
      std::cin >> element;
      stackTwo.push_back(element);
    }

    long int stackSum=0;
    long int ele_count = 0;

    while (stackOne.size() != 0 && stackTwo.size()!=0) {

      if (stackOne.size()!=0  && stackOne[0] + stackSum <= max_sum) {
        stackSum+=stackOne[0];
        pop_front(stackOne);
        ele_count++;
      }

      if (stackTwo.size()!=0 && stackTwo[0] + stackSum <= max_sum) {
        stackSum+=stackTwo[0];
        pop_front(stackTwo);
        ele_count++;
      }

      if (stackSum+stackOne[0] >= max_sum && stackSum+stackTwo[0] >= max_sum) {
        std::cout << ele_count << '\n';
        break;
      }
    }

}

    return 0;
}

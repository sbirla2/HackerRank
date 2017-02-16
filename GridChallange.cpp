#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    std::cin >> t;
    while (t--) {
    int gridSize;
    std::cin >> gridSize;
    std::vector<std::string>lexoGrid;
    for (size_t i = 0; i < gridSize; i++) {
      std::string rowval;
      std::cin >> rowval;
      std::sort(rowval.begin(),rowval.end());
      lexoGrid.push_back(rowval);
    }
    std::string flag = "YES";
    for (size_t i = 0; i < gridSize-1; i++) {
      for (size_t j = 0; j < gridSize-1; j++) {
        if ((lexoGrid[i])[j] > (lexoGrid[i+1])[j]) {
          flag = "NO";
          break;
        }
      }
    }
    std::cout << flag << '\n';
    }
    return 0;
}

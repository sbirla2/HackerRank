#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    std::cin >> n;
    std::vector<int>minMaxVect;
    for (size_t i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        minMaxVect.push_back(value);
    }
    std::string flag;
    sort(minMaxVect.begin(),minMaxVect.end());
    for (size_t i = (minMaxVect[0]+1); i < (minMaxVect[n-1]); i++) {
      if (find(minMaxVect.begin(),minMaxVect.begin(),i)!=minMaxVect.end()) {
        flag="YES";
        break;
      }
      else if(find(minMaxVect.begin(),minMaxVect.begin(),i)==minMaxVect.end()){
        flag = "NO";
      }
    }
    std::cout << flag << '\n';
    return 0;
}

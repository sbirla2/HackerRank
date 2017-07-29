#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
  bool flag = true;
  string s,revs;
  std::cin >> s;
  revs=s;
  std::reverse(revs.begin(),revs.end());//Reverse the copied string
    for (size_t i = 1; i <s.size(); i++) {
      if (abs(s[i]-s[i-1])!=abs(revs[i]-revs[i-1])) {
        std::cout << "Not Funny" << std::endl;
        flag=false;
        break;
      }
    }
    if (flag) {
      std::cout << "Funny" << std::endl;
    }
}
    return 0;
}

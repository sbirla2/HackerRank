#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
      int n;
      cin>>n;
      while(n--)
      {
        string s,cs; long long int dollars=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
          if(cs.find(s[i])==-1)
          {
            dollars++;  //1 dollar charge
          }
          cs.append(1,s[i]);
        }
        std::cout << dollars << std::endl;
      }
    return 0;
}

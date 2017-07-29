#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//Causes Time out for large inputs.
int main() {
  string s;
  cin>>s;
  long long unsigned int n,count=0,ele=0;
  cin>>n;
  for (size_t i = 0; i < n; i++) {
      if(ele==s.length()){
        ele=0;
      }
      if(s[ele++]=='a')
      {
        count++;
      }
  }
  std::cout << count << std::endl;
    return 0;
}

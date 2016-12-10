#include <iostream>
#include <string>
using namespace std;

int main() {
	long long unsigned int i=1,words=0;
	string s;
	cin>>s;
  while(i<s.size())
  {
      if(isupper(s[i]))
      {
          words++;
      }

      i++;
  }

  std::cout << words +1<< std::endl;
	return 0;
}

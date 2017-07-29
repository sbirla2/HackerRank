#include <iostream>

using namespace std;

int main() {
  long long unsigned int t,value=3,i,temp=3;
  cin>>t;
  for(i=1;i<=t;i++)
  {
    if (i==t) {
      std::cout <<value << std::endl;
      break;
    }
    if(value==1)
    {
      value=temp*2;
      temp=value;
    }
    else
    {
      value--;
    }
  }
  return 0;
}

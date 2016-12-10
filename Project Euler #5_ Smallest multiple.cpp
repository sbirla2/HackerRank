#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Function to return gcd of a and b
long long unsigned int gcd(long long unsigned int a, long long unsigned int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main() {
  long long unsigned int t,n,i;
  cin>>t;
  while (t--) {
    cin>>n;
    long long unsigned int lcm=2;
    if(n==2 || n==1)
    {
      lcm=n;
    }
    if(n!=2 || n!=1)
  {
    for(i=3;i<=n;i++)
    {
      lcm=(lcm*i)/gcd(lcm,i);
    }
  }
    std::cout <<lcm << std::endl;
  }

    return 0;
}

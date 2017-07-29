#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int i,j,n,k,x,answers,page=1; //X takes the current term
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        for(j=1;j<=x;j++)
        {
            if(j==page)answers++;
            if(j % k == 0)page++;
        }
      if(x%k!=0)page++;
    }
    cout<<answers;
    return 0;
}

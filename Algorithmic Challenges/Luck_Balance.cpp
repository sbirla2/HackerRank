#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n,k,j; cin>>n>>k;
int arr[n][2];
for(int i=0;i>arr[i][j];i++)
{
vector<int> luck1;
std::vector<int>luck0;
for(int i=0;i<n;i++)
    {   if(arr[i][1]==1)
            luck1.push_back(arr[i][0]);
        if(arr[i][1]==0)
            luck0.push_back(arr[i][0]);
    }
int sum=0;
for(int i=0;i<luck0.size();i++)
    sum+=luck0[i];
sort(luck1.begin(),luck1.end(),less<int>());
for(int i=0;i<luck1.size();i++)
{
    int count=luck1.size()-k;
    if(i<count)
    sum-=luck1[i];
    else
    sum+=luck1[i];
}
cout<<sum;
}
    return 0;
}

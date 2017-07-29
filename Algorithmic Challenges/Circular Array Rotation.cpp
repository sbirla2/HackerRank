#include <bits/stdc++.h>

using namespace std;

int main()
{
vector<int> my;

    long long int j,n,k,q,i,e,last;
    cin>>n>>k>>q;

    for(i=0;i<n;i++)
    {
        cin>>e;
        my.push_back(e);
    }

    for(i=0;i<k;i++)
    {
        j = my.size()-1;
        last = my[j];
        my.erase(my.begin()+j);
        my.insert(my.begin(),last);
    }

    for(i = 0;i<q;i++)
    {
        cin>>e;
        cout<<my[e]<<endl;
    }
return 0;
}

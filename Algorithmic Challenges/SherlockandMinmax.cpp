#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;

ll p,q,b,n;
vector<ll> d(n);

ll solve(ll m)
{
    ll tp = p, tq = q;
    for(int i{0};i<n;i++)
    {
        if(d[i]-m<tp){
            tp = max(tp, d[i] + m);
        }
    }
    if(tp>tq) return -1;
    return tp;
}

int main() {
    cin >> n;
    d.resize(n);
    for(int i{0};i<n;i++)
        cin >> d[i];
    sort(d.begin(),d.end());
    cin >> p >> q;
    ll l{1}, r{1e9}, m;
    while(l<r)
    {
        m = l + r + 1;
        m /= 2;
        if(solve(m)!=-1)
            l = m;
        else
            r = m - 1;
    }
    cout<<solve(l)<<endl;
    return 0;
}

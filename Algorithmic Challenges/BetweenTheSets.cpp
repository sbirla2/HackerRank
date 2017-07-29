#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long int m,n,Counter=0;
    cin>>n>>m;
    std::vector<long int>SetA;
    std::vector<long int>SetB;
    for(long int i=0;i<n;i++){
        long int Value;
        cin>>Value;
        SetA.push_back(Value);
    }
    for(long int i=0;i<m;i++){
        long int Value;
        cin>>Value;
        SetB.push_back(Value);
    }
    std::sort(SetA.begin(),SetA.end());
    std::sort(SetB.begin(),SetB.end());
    
    for(long int i=SetA[n-1];i<=SetB[0];i++)
    {
    bool FirstCondition=true;
        for(long int j=0;j<n;j++){
           if(i%SetA[j]!=0){FirstCondition=false;break;}
        }
        if(FirstCondition){
            for(long int j=0;j<m;j++){
                if(SetB[j]%i!=0){FirstCondition=false;break;}
            }
        }
        if(FirstCondition){Counter++;}
    }
    cout<<Counter<<endl;;
    return 0;
}


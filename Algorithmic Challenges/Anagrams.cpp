#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        string c,input;
        cin>>input;
       string a=input.substr(0,input.length()/2);
       string b=input.substr(input.length()/2);
        if(a.size()==b.size()){
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            auto it=set_difference(a.begin(),a.end(),b.begin(),b.end(),c.begin());
            c.resize(it-c.begin());
            std::cout << c.size() << std::endl;
        }
        else{
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}

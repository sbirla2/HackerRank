#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long int t,len;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len;
        len=s.length();
        if(next_permutation(s.begin(),s.end()))
        {
           std::cout << s << std::endl;
        }
        else
         {
            std::cout << "no answer" << std::endl;
         }
    }
	return 0;
}

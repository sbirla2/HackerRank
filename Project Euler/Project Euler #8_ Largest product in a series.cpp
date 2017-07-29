#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ctoi(c)(int)((c)-'0')
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,largeprod=-100;
	    cin>>n>>k;
	    string ndigits;
	    std::cin >> ndigits;
	    for (int i = 0; i<n-k; i++) {
	        int prod=ctoi(ndigits[i]);
	        int l=1;
	        for (int j = i+1; l<k; j++) {
	            prod*=ctoi(ndigits[j]);
	            l++;
	        }
	        if(prod>largeprod)
	        {
	            largeprod=prod;
	        }
	    }
	    std::cout << largeprod << std::endl;
	}
	return 0;
}

#include <iostream>
#include <algorithm>
#define MAX 1000000
#define BIG 1111111
using namespace std;

int main() {
	long long unsigned int a[MAX],b[MAX],c[MAX],minIndex=BIG,ci=0,i,j,n;
	cin>>n;
	for(i = 0; i < n; i++)
	{
	    std::cin >> a[i];
	}
	for(i = 0; i < n; i++) {
	    std::cin >> b[i];
	}
	for (i = 0; i < n; i++)
	{
	    for (j = 0; j < n; j++)
	    {
	        if(a[i]==b[j])
	        {
	            if(abs(i-j)<=minIndex)
	            {
	                c[ci]=a[i];
	                ci++;
	                minIndex=abs(i-j);
	            }
	            break;
	        }
	    }
	}
	std::sort(c,c+ci);
	std::cout << c[0] << std::endl;
	return 0;
}

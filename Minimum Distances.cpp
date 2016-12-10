#include <iostream>
#define MAX 1000
using namespace std;

int main() {
	long long int a[MAX],Minimum=-1,i,j,val;
	long int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    std::cin >> a[i];
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            val=i-j;
	            if(Minimum==-1)
	            {
	                Minimum=abs(val);
	            }

	            else if(abs(val)<Minimum)
	            {
	                Minimum=abs(val);
	            }
	        }
	    }
	}
	std::cout << Minimum << std::endl;
	return 0;
}

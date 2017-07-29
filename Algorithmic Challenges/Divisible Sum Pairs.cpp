#include <iostream>

#define Max 1000

using namespace std;

int main()
{
	int n,k,a[Max],count;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(i<j && ((a[i]+a[j])%k==0))
	        {
	            count++;
	        }
	    }
	}
	cout<<count;
	return 0;
}

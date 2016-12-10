#include <iostream>
#define MAX 100000
using namespace std;

int main() {
	long long unsigned int InputArray[MAX],i=0,j,d,n;
	cin>>n>>d;
	j=n-d;
	while(i<n)
	{
	    if(j<n)
	    {
	        cin>>InputArray[j];
	        j++;
	    }
	    else
	    {
	        std::cin >> InputArray[i];
	        i++;
	    }
	}
	for (i = 0; i < n; i++) {
    	std::cout << InputArray[i]<<" ";

	}

	return 0;
}

#include <iostream>
#define MAX 1000
using namespace std;

int main() {
	int CloudNumber,CloudArray[MAX],Jumps=0;
	cin>>CloudNumber;
	for(int i=0;i<CloudNumber;i++)
	{
	    cin>>CloudArray[i];
	}
	for(int i=0;i<CloudNumber-1;i++)
	{
	    if(CloudArray[i]==0)
	    {
	      if(CloudArray[i+1]==0)
	      {
	          Jumps+=1;
	          i++;
	      }
	    }
	else
	{
	    Jumps++;
	}
	}
	std::cout << Jumps << std::endl;
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    string s; long unsigned int count=0;
	    cin>>s;
	    for(long unsigned int j=0;j<s.size()-1;j++)
	    {
	        if(s[j]==s[j+1])
	        {
	            count++;
	        }
	    }
	       std::cout << count << std::endl;
	}
	return 0;
}

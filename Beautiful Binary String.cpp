#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=1;i<n;i++)
	{
	    if(s[i]=='1' && s[i-1]=='0' && s[i+1]=='0') //010 Substring
	    {
	        s[i+1]='1';
	        count++;
	    }
	}
	std::cout << count << std::endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int ia=97,iA=65,count=0;
	for(int i=0;i<25;i++)
	{
	    char a=ia,b=iA;
	    if(s.find(a)==-1 && s.find(b)==-1)
	    {
	        cout<<"not pangram";
	        break;
	    }

	    else
	   {
	        ia++;iA++;
	        count++;
	   }
	}

	 if(count==25)
	 {
	   cout<<"pangram";
	 }

	   return 0;
}

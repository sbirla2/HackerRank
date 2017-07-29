//Not Complete
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
using namespace std;
int main() {
	long int count=0,whitespace=0,i,j;
	string t,p;
	getline(cin,t);
	getline(cin,p);
	for(int i=0;i<p.length();i++)
	{
	    if(p[i]!=' '){
	    if(t.find(p[i])==std::string::npos)
	    {cout<<"NO";break;}
	    else{count++;}
	    }
	    else{
	        whitespace++;
	    }
	}
	 if(count==p.length()-whitespace){ cout<<"YES";}
   //End of Display 1

   
	return 0;
}

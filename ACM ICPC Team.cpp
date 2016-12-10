#include <iostream>
#include<string>
using namespace std;
struct Participant
{
    string Topics;
};
int main() {
	int n,m,MaxTopics=0,AllKnown=0;
	cin>>n>>m;
	struct Participant p[n];
	for (int i = 0; i < n; i++) {
	    cin>>p[i].Topics;
	}
	for (int i = 0; i < n-1; i++) {
	    for(int j=i+1;j<n;j++){
	        int Known=0;
	        for(int k=0;k<m;k++)
	        {
	            if(p[i].Topics[k]=='1'||p[j].Topics[k]=='1')
	            {
	                Known++;
	            }
	        }

	        if(Known>MaxTopics)
	        {
	            MaxTopics=Known;
	            AllKnown=0;
	        }
	        if(Known==MaxTopics)
	        {
	            AllKnown++;
	        }
	    }
	}
	std::cout << MaxTopics << std::endl;
	std::cout << AllKnown << std::endl;
	return 0;
}

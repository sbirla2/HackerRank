#include <iostream>
#include <array>
#define N 1000000
using namespace std;

int main() {
	long long unsigned int n,nq;
	cin>>n>>nq;
	std::array<int, N>ktharray;
	for (int i = 0; i < n; i++) {
	    std::cin >> ktharray[i];
	}
	while(nq--){
	  long long unsigned int q;
	  std::cin >> q;
	  if(q==1)
	  {
	      long long unsigned int count=0,k,i;
	      bool flag=false;
	      cin>>k;
	      for(i=0;i<n;i++)
	      {
	          if(ktharray[i]==0){count++;}
	          if(count==k){std::cout << i<< std::endl;flag=true;break;}
	      }
	      if(!flag){
	          std::cout << "NO" << std::endl;
	      }
	  }
	  if(q==2){
	      long long unsigned int p,x;
	      cin>>p>>x;
	      ktharray[p]=x;
	  }
	}
	return 0;
}

#include<iostream>
using namespace std;

long long unsigned int fib(long long unsigned int n)
{
  /* Declare an array to store Fibonacci numbers. */
  //int f[n+1];
  long long unsigned int i=1;
  long long unsigned int sum=0;
  /* 0th and 1st number of the series are 0 and 1*/
  long long unsigned int f0 = 2;
  long long unsigned int f1 = 8;
  long long unsigned int f2=0;
  while(f1<=n)
  {
      /* Add the previous 2 numbers in the series
         and store it */
         //cout<<f[i]<<" ";
         sum+=f1;

      f2 = 4*f1 + f0;
      f0=f1;
      f1=f2;
  }
  return sum+2;

}

int main ()
{
    long long unsigned int t,n;
	cin>>t;
	while(t--){
		cin>>n;
  		cout<<fib(n)<<"\n";
	}
  	return 0;
}

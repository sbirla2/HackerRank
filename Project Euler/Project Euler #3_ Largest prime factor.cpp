#include <iostream>
using namespace std;
bool IsPrime(long long unsigned int number)
{	// Given:   num an integer > 1
	// Returns: true if num is prime
	// 			false otherwise.

	long long unsigned int i;

	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

long long unsigned int LargestPrime(long long unsigned int n)
{
    long long unsigned int Prime,i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            if(IsPrime(i))
            {
                Prime=i;
            }
        }
    }
    return Prime;
}
int main() {
	long long unsigned int n;
	int test_cases;
	cin>>test_cases;
	for(int i=0;i<test_cases;i++)
	{
	    cin>>n;
	    std::cout << LargestPrime(n) << std::endl;
	}
	return 0;
}

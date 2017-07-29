#include <iostream>
#include <cstdlib>
using namespace std;

//Source help used is : http://www.geeksforgeeks.org/sieve-of-eratosthenes/

long long unsigned int SumofPrimes(long long unsigned int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    long long unsigned int p,i,PrimeSum=0;
    for (p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Add all prime numbers
    for (p=2; p<=n; p++)
    {
       if (prime[p])
       {
         PrimeSum+=p;
       }
    }

    return PrimeSum;
}

int main() {
    long long unsigned int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        long long unsigned int n;
        cin>>n;
        std::cout << SumofPrimes(n)<< std::endl;
    }
	return 0;
}

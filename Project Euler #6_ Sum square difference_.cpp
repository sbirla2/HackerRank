#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long long int test_cases,n;
  long long int SumSquare,SquareSum;
  //Sum Square Holds Value of Square of Summation of numbers
  //SquareSum Holds Value of Sum of Squares of numbers
  cin>>test_cases;
  while(test_cases!=0)
  {
    cin>>n;

      SumSquare=((n*n)+n)/2;//Finding Summation
      SumSquare*=SumSquare;//Calculating Square
      SquareSum=(n*(n+1)*((2*n)+1)/6);
      std::cout <<abs(SquareSum-SumSquare) << std::endl;//Output the result
    test_cases--;
  }

    return 0;
}

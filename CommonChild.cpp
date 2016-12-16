#include <iostream>
#include <cstring>
using namespace std;

//Utility Function to find max of two numbers

int max(int a,int b){
  return (a > b)? a : b;
}

//Finding the Common Child
int CommonChild( char *X, char *Y, int m, int n )
{
     int **L = new int*[m + 1]; //Dynamic Memory Allocation of the 2D Grid.

   for (int i = 0; i < m + 1; ++i)
    {
        L[i] = new int[m + 1];
    }

   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}
int main(int argc, char const *argv[]) {
  char a[5000],b[5000];
  std::cin >> a;
  std::cin >> b;
  std::cout << CommonChild(a,b,strlen(a),strlen(b)) << '\n';
  return 0;
}

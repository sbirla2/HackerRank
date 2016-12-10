#include <iostream>
#include <cstring>
#define MAX 500
using namespace std;
// A utility function to find maximum of two integers
int max(int a, int b)
{   return (a > b)? a : b; }

/* Returns length of longest common substring of X[0..m-1] and Y[0..n-1] */
int LCSubStr(char *X, char *Y, int m, int n)
{
    int LCSuff[MAX][MAX];
    int result = 0;

    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}
int main() {
  char FromString[MAX],Tostring[MAX];
  int k,LongestCommon,TotalChanges;
  std::cin >> FromString;
  std::cin >> Tostring;
  std::cin >> k;
  LongestCommon=LCSubStr(FromString, Tostring, strlen(FromString), strlen(Tostring));
  TotalChanges=(strlen(FromString)-LongestCommon)+(strlen(Tostring)-LongestCommon);
  if(strlen(FromString)==strlen(Tostring)){TotalChanges=2*strlen(FromString)+1;}
  if(TotalChanges <= k){std::cout << "Yes" << std::endl;}
  else{std::cout << "No" << std::endl;}
    return 0;
}

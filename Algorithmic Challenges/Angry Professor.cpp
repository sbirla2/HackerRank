#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,ariv=0;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; // n spaced integers
        int k; //cancellation threshold
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
      }
     for(int a_i=0;a_i<n;a_i++)
     {
         if(a[a_i] < 0)
         {
             ariv++;
         }
        else if(a[a_i]==0)
      {
         ariv++;
      }
     else
     {

     }
     }
     if(ariv >=k)
     {
         printf("NO\n");
     }
    else
    {
        printf("YES\n");
    }
    ariv=0; //reset for next  test case
    }
    return 0;
}

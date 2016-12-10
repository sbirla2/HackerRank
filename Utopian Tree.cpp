#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int h=1;
        int n;
        scanf("%d",&n);
       for(int a1=0;a1<=n;a1++)
       {
           if(a1==0)
           {
               h=h;
           }
         else if(a1%2==0)
         {
             h=h+1;
         }
       else
       {
           h=h*2;
       }
       }
     printf("%d\n",h);
    }
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int findn(int num)
{
    int n = 0;
    while(num) {
        num /= 10;
        n++;
    }
    return n;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n,size_n,count=0,digit,number;
        scanf("%d",&n);
        number=n;
        size_n=findn(n);
        for(int a1=0;a1<size_n;a1++){
            digit=n%10;
            if(digit!=0)
            {
            if(number%digit==0)
            {
                count++;
            }
            }
           n=n/10;
        }
      printf("%d\n",count);
    }
    return 0;
}

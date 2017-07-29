#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float pos_no=0,neg_no=0,zero=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i=0;arr_i<n;arr_i++)
    {
        if(arr[arr_i] < 0)
        {
            neg_no++;
        }
       else if(arr[arr_i] > 0)
       {
           pos_no++;
       }
       else
       {
           zero++;
       }
    }
    printf("%f\n",pos_no/n);
    printf("%f\n",neg_no/n);
    printf("%f",zero/n);
    return 0;
}

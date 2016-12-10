#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b) //Comparitor function to use 'qsort' library fuction
{
   return ( *(int*)a - *(int*)b );
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n-1];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    qsort(arr, n, sizeof(int), cmpfunc); //Sorting the Stick array before Cutting

    int flag=0;
      do
      {
          int count=0,small=99;
          flag=0;
          for(int i=0;i<n;++i)
          {
              if(arr[i] > 0 && arr[i] < small)
                  small=arr[i];
          }
          for(int i=0;i<n;++i)
          {
              if(arr[i]!=0)
              {
                  arr[i]-=small;
                  ++count;
                  flag=1;
              }
          }
          if(count)
         printf("%d\n",count);
      }while(flag==1);

    return 0;
}

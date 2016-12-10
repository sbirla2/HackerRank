#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int sn; // holds value of n-1
    int p_sum=0;//sum of primary diagonal
    int s_sum=0;// sum of secondary diagonal
    int d_sum;//diagonal difference
    scanf("%d",&n);
    int a[n][n];
    sn=n-1;// to calculate secodary diagonal element during iteration
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }
    }

    for(int a_i = 0; a_i < n; a_i++){ // iterator to count sum of primary diagonal
       for(int a_j = 0; a_j < n; a_j++)
       {

          if(a_i==a_j)
          {
              p_sum=p_sum+a[a_i][a_j];
          }


       }
    }
    for(int a_i = 0; a_i < n; a_i++){ // iterator to count sum of Secondary diagonal
       for(int a_j = 0; a_j < n; a_j++)
       {

       if(a_j == sn-a_i)
       {
           s_sum=s_sum+a[a_i][sn -a_i];
       }

       }
    }
    d_sum=abs(p_sum-s_sum);//absolute difference
    printf("%d",d_sum);
    return 0;
}

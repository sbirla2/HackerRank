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
    for(int a0 = 0; a0 < t; a0++)
    {
        int n,c,m,Choco_Bought,Wrap_Count=0;
        scanf("%d %d %d",&n,&c,&m);
         Choco_Bought=n/c;
         Wrap_Count+=Choco_Bought;
        if(Wrap_Count==m)
        {
            Choco_Bought++;

        }
        else if(Wrap_Count > m)
        {
            while(Wrap_Count >= m)
            {

                 Choco_Bought++;
                 Wrap_Count=Wrap_Count-m;
                 Wrap_Count++;
            }
           }
      else
      {
          //Wrappers are not enough!
      }
     printf("%d\n",Choco_Bought);
    }
    return 0;
}

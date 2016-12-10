#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
     int hh,mm,ss;
     char t,c1='A',c2='P';
     scanf("%d:%d:%d%c",&hh,&mm,&ss,&t);
     if(t=='A' && hh==12)
          printf("00:%02d:%02d",mm,ss);
     else if(t=='A' && hh<12)
          printf("%02d:%02d:%02d",hh,mm,ss);
     else if(t=='P' && hh==12)
          printf("%02d:%02d:%02d",hh,mm,ss);
     else if(t=='P' && hh<12)
         {
          hh=hh+12;
          printf("%d:%02d:%02d",hh,mm,ss);
         }
    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
    long int x1;
    long int v1;
    long int x2;
    long int v2;

    cin>>x1>>v1>>x2>>v2;

    int flag=0;

        if(x1>x2 && v1>v2)
    {
        cout<<"NO\n";
    }

        else if(x2>x1 && v2>v1)
    {
        cout<<"NO\n";
    }

else
{
     while( (x1> x2 && v1<v2) || (x1<x2 && v1>v2) )
      {

          x1=x1+v1;
          x2=x2+v2;

          if(x1==x2)
           {
              flag=1;
               break;
           }

      }
 if(flag)
   {
        cout<<"YES\n";
   }

   else
   {
        cout<<"NO\n";
   }
}

    return 0;
}

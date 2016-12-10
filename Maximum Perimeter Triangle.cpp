#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n,count=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int j=n-1;j>0;j--){
    if((a[j-2]+a[j-1])>a[j]){
    cout<<a[j-2]<<" "<<a[j-1]<<" "<<a[j]<<endl;
        count++;
        break;
}
}
if(count==0){
    cout<<"-1"<<endl;
}

return 0;
}
